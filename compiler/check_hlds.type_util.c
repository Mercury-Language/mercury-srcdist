/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module check_hlds.type_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__type_util__init
ENDINIT
*/

#include "check_hlds.type_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.string_encoding.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s {
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5;
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7;
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8;
  MR_Cont check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont;
  void * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14;
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7;
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14;
};

struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10;
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2];

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2];

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0;

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1;

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2];

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2];

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2];

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
  MR_Box * check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__2_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_33);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_33);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__576__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1198__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_14);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1185__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1097__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_24);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1065__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__918__1_2_f_0(
  MR_Word check_hlds__type_util__Context_11,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19);

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * check_hlds__type_util__HeadVar__1_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word check_hlds__type_util__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word check_hlds__type_util__HeadVar__2_1,
  MR_Word check_hlds__type_util__HeadVar__2_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word check_hlds__type_util__Subst_6,
  MR_Word check_hlds__type_util__Constraint0_7,
  MR_Word check_hlds__type_util__Proof0_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word check_hlds__type_util__Subst_6,
  MR_Word check_hlds__type_util__Constraint0_7,
  MR_Word check_hlds__type_util__Proof0_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word check_hlds__type_util__TSubst_4,
  MR_Word check_hlds__type_util__Proof0_5,
  MR_Word * check_hlds__type_util__Proof_6);

static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word check_hlds__type_util__VarTypes_3,
  MR_Word check_hlds__type_util__Var_4);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
  MR_Word check_hlds__type_util__Subst_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word * check_hlds__type_util__HeadVar__3_3);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
  MR_Word check_hlds__type_util__Subst_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word * check_hlds__type_util__HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__CoveredTypes_7);

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Ctor_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16);

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_6,
  MR_Word check_hlds__type_util__Type_7,
  MR_Word check_hlds__type_util__TypeBody_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29);

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Types_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9);

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3,
  MR_Box * check_hlds__type_util__wrapper_arg_4);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3,
  MR_Box * check_hlds__type_util__wrapper_arg_4);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
  void * check_hlds__type_util__env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
  void * check_hlds__type_util__env_ptr_arg);

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
  void * check_hlds__type_util__env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
  void * check_hlds__type_util__env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
  void * check_hlds__type_util__env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
  void * check_hlds__type_util__env_ptr_arg);


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[3][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[1][8];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[2][7];


/* sealed */ struct check_hlds__type_util__vector_common_type_4_0_s {
  const MR_String check_hlds__type_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[4];

/* sealed */ struct check_hlds__type_util__vector_common_type_5_0_s {
  const MR_String check_hlds__type_util__vector_common_type_5_0__vct_5_f_0;
  const MR_Word check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_5_0_s check_hlds__type_util_vector_common_5[13];

/* sealed */ struct check_hlds__type_util__vector_common_type_6_0_s {
  const MR_Word check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4];



static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__cons_id_arg_types_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[10][6] = {
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
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};


static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[4] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_5_0_s check_hlds__type_util_vector_common_5[13] = {
  /* row 0 */
  {
    (MR_String) "character",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[1])
  },
  /* row 1 */
  {
    (MR_String) "float",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[2])
  },
  /* row 2 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[3])
  },
  /* row 3 */
  {
    (MR_String) "string",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[4])
  },
  /* row 4 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 5 */
  {
    (MR_String) "func",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "pred",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 7 */
  {
    (MR_String) "tuple",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 8 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 9 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6])
  },
  /* row 10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[7])
  },
  /* row 11 */
  {
    (MR_String) "type_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[8])
  },
  /* row 12 */
  {
    (MR_String) "typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9])
  },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____exist_qvar_action_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____exist_qvar_action_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "exist_qvar_action",
  {     check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0 },
  {     check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0
};

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0 = {
  (MR_String) "is_dummy_type",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1 = {
  (MR_String) "is_not_dummy_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____is_dummy_type_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____is_dummy_type_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "is_dummy_type",
  {     check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0 },
  {     check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0
};

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

    {
      check_hlds__type_util____Compare____exist_qvar_action_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____is_dummy_type_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
  MR_Box * check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

    {
      check_hlds__type_util____Compare____is_dummy_type_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__2_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_33)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 3)));

    return check_hlds__type_util__LambdaHeadVar__2_34;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_33)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_33, (MR_Integer) 3)));

    return check_hlds__type_util__LambdaHeadVar__2_34;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__576__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_19, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_19, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_19, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_19, (MR_Integer) 3)));

    return check_hlds__type_util__LambdaHeadVar__2_20;
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
    MR_Word check_hlds__type_util__L0_15;
    MR_Word check_hlds__type_util__L_16;
    MR_Word check_hlds__type_util__V_42_42;

    {
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__LambdaHeadVar__1_25, &check_hlds__type_util__L0_15);
    }
    {
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
    {
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__LambdaHeadVar__2_26);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
    MR_Word check_hlds__type_util__L0_15;
    MR_Word check_hlds__type_util__L_16;
    MR_Word check_hlds__type_util__V_42_42;

    {
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__LambdaHeadVar__1_25, &check_hlds__type_util__L0_15);
    }
    {
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
    {
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__LambdaHeadVar__2_26);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_25,
  MR_Word * check_hlds__type_util__LambdaHeadVar__2_26)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
    MR_Word check_hlds__type_util__L0_16;
    MR_Word check_hlds__type_util__L_17;
    MR_Word check_hlds__type_util__V_50_50;

    {
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__LambdaHeadVar__1_25, &check_hlds__type_util__L0_16);
    }
    {
      check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__L0_16, &check_hlds__type_util__L_17);
    }
    {
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__L_17, check_hlds__type_util__LambdaHeadVar__2_26);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1198__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_14)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_15;

    {
      check_hlds__type_util__LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_util__LambdaHeadVar__2_15, 0) = ((MR_Box) (check_hlds__type_util__LambdaHeadVar__1_14));
    }
    return check_hlds__type_util__LambdaHeadVar__2_15;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1185__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_20;

    {
      check_hlds__type_util__LambdaHeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_util__LambdaHeadVar__2_20, 0) = ((MR_Box) (check_hlds__type_util__LambdaHeadVar__1_19));
    }
    return check_hlds__type_util__LambdaHeadVar__2_20;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1097__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_24)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_24, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_24, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_24, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_24, (MR_Integer) 3)));

    return check_hlds__type_util__LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1065__1_1_f_0(
  MR_Word check_hlds__type_util__LambdaHeadVar__1_30)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_30, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_30, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_30, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__1_30, (MR_Integer) 3)));

    return check_hlds__type_util__LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__918__1_2_f_0(
  MR_Word check_hlds__type_util__Context_11,
  MR_Word check_hlds__type_util__LambdaHeadVar__1_19)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__LambdaHeadVar__2_20;

    {
      check_hlds__type_util__LambdaHeadVar__2_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__2_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__2_20, 1) = ((MR_Box) (check_hlds__type_util__LambdaHeadVar__1_19));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__2_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__LambdaHeadVar__2_20, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
    }
    return check_hlds__type_util__LambdaHeadVar__2_20;
  }
}

void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0(
  MR_Word * check_hlds__type_util__HeadVar__1_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word check_hlds__type_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0(
  MR_Word check_hlds__type_util__HeadVar__2_1,
  MR_Word check_hlds__type_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * check_hlds__type_util__HeadVar__1_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word check_hlds__type_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word check_hlds__type_util__HeadVar__2_1,
  MR_Word check_hlds__type_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word check_hlds__type_util__Subst_6,
  MR_Word check_hlds__type_util__Constraint0_7,
  MR_Word check_hlds__type_util__Proof0_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Constraint_10;
    MR_Word check_hlds__type_util__Proof_12;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
    else
      {
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__Super_14;

        {
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
        {
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
        }
      }
    {
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word check_hlds__type_util__Subst_6,
  MR_Word check_hlds__type_util__Constraint0_7,
  MR_Word check_hlds__type_util__Proof0_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Constraint_10;
    MR_Word check_hlds__type_util__Proof_12;

    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
    else
      {
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__Super_14;

        {
          parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
        {
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
        }
      }
    {
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word check_hlds__type_util__TSubst_4,
  MR_Word check_hlds__type_util__Proof0_5,
  MR_Word * check_hlds__type_util__Proof_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_5)) == (MR_mktag((MR_Integer) 0))))
      *check_hlds__type_util__Proof_6 = check_hlds__type_util__Proof0_5;
    else
      {
        MR_Word check_hlds__type_util__ClassConstraint0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_5, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__ClassConstraint_9;

        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(check_hlds__type_util__TSubst_4, check_hlds__type_util__ClassConstraint0_8, &check_hlds__type_util__ClassConstraint_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__type_util__Proof_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__ClassConstraint_9));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word check_hlds__type_util__VarTypes_3,
  MR_Word check_hlds__type_util__Var_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Type_5;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_3, check_hlds__type_util__Var_4, &check_hlds__type_util__Type_5);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__type_util__Type_5);
    }
    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
  MR_Word check_hlds__type_util__Subst_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word * check_hlds__type_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_util__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_util__Arg_8;
        MR_Word check_hlds__type_util__Args_9;
        MR_Word check_hlds__type_util__ArgType_10;
        MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
        MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
        MR_Word check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
        MR_Word check_hlds__type_util__V_15_15;
        MR_Word check_hlds__type_util__V_17_17;
        MR_Word check_hlds__type_util__V_18_18;
        MR_Word check_hlds__type_util__V_16_16;

        {
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__V_11_11, &check_hlds__type_util__ArgType_10);
        }
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
        check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
        check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
        check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
        {
          check_hlds__type_util__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 0) = ((MR_Box) (check_hlds__type_util__V_15_15));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 1) = ((MR_Box) (check_hlds__type_util__ArgType_10));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 2) = ((MR_Box) (check_hlds__type_util__V_17_17));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 3) = ((MR_Box) (check_hlds__type_util__V_18_18));
        }
        {
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_7, &check_hlds__type_util__Args_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__type_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Arg_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Args_9));
        }
      }
  }
}

static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
  MR_Word check_hlds__type_util__Subst_1,
  MR_Word check_hlds__type_util__HeadVar__2_2,
  MR_Word * check_hlds__type_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_util__Ctor0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__Ctors0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_util__Ctor_8;
        MR_Word check_hlds__type_util__Ctors_9;
        MR_Word check_hlds__type_util__ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 0)));
        MR_Word check_hlds__type_util__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 1)));
        MR_Word check_hlds__type_util__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 2)));
        MR_Word check_hlds__type_util__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 3)));
        MR_Integer check_hlds__type_util__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 4)));
        MR_Word check_hlds__type_util__Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 5)));
        MR_Word check_hlds__type_util__Args_16;

        {
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_13, &check_hlds__type_util__Args_16);
        }
        {
          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Ctors0_7, &check_hlds__type_util__Ctors_9);
        }
        {
          check_hlds__type_util__Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 0) = ((MR_Box) (check_hlds__type_util__ExistQVars_10));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 1) = ((MR_Box) (check_hlds__type_util__Constraints_11));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 2) = ((MR_Box) (check_hlds__type_util__Name_12));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 3) = ((MR_Box) (check_hlds__type_util__Args_16));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 4) = ((MR_Box) (check_hlds__type_util__Arity_14));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 5) = ((MR_Box) (check_hlds__type_util__Ctxt_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__type_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Ctor_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Ctors_9));
        }
      }
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__CoveredTypes_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;
        MR_Word check_hlds__type_util__IsDummy_8;

        {
          check_hlds__type_util__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__CoveredTypes_7);
        }
        if (check_hlds__type_util__succeeded)
          check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
        else
          {
            MR_Word check_hlds__type_util__TypeCtor_9;
            MR_Word check_hlds__type_util__ArgTypes_10;

            {
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__ArgTypes_10);
            }
            if (check_hlds__type_util__succeeded)
              {
                MR_Word check_hlds__type_util__IsBuiltinDummy_11;

                {
                  check_hlds__type_util__IsBuiltinDummy_11 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_9);
                }
                switch (check_hlds__type_util__IsBuiltinDummy_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__type_util__TypeTable_12;
                      MR_Word check_hlds__type_util__TypeDefn_13;

                      {
                        hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_12);
                      }
                      {
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeDefn_13);
                      }
                      if (check_hlds__type_util__succeeded)
                        {
                          MR_Word check_hlds__type_util__TypeBody_14;

                          {
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                          }
                          switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word check_hlds__type_util__DuTypeKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
                                MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
                                MR_Word check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
                                MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
                                MR_Word check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
                                MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
                                MR_Word check_hlds__type_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                                MR_Word check_hlds__type_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));

                                switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_18)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_18)) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                      case (MR_Integer) 2:
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                                        break;
                                      case (MR_Integer) 1:
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                                    break;
                                  case (MR_Integer) 2:
                                    {
                                      MR_Word check_hlds__type_util__SingleArgTypeInDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 1)));
                                      MR_Word check_hlds__type_util__TypeParams_28;
                                      MR_Word check_hlds__type_util__Subst_29;
                                      MR_Word check_hlds__type_util__SingleArgType_30;
                                      MR_Word check_hlds__type_util__V_36_36;
                                      MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 0)));
                                      MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 2)));

                                      {
                                        hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeParams_28);
                                      }
                                      {
                                        mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_28, check_hlds__type_util__ArgTypes_10, &check_hlds__type_util__Subst_29);
                                      }
                                      {
                                        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_29, check_hlds__type_util__SingleArgTypeInDefn_26, &check_hlds__type_util__SingleArgType_30);
                                      }
                                      {
                                        check_hlds__type_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 0) = ((MR_Box) (check_hlds__type_util__Type_6));
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 1) = ((MR_Box) (check_hlds__type_util__CoveredTypes_7));
                                      }
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word check_hlds__type_util__Type__tmp_copy_6 = check_hlds__type_util__SingleArgType_30;
                                        MR_Word check_hlds__type_util__CoveredTypes__tmp_copy_7 = check_hlds__type_util__V_36_36;

                                        check_hlds__type_util__CoveredTypes_7 = check_hlds__type_util__CoveredTypes__tmp_copy_7;
                                        check_hlds__type_util__Type_6 = check_hlds__type_util__Type__tmp_copy_6;
                                      }
                                      continue;
                                    }
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 3:
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                              break;
                          }
                        }
                      else
                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
                    }
                    break;
                }
              }
            else
              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
          }
        return check_hlds__type_util__IsDummy_8;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26);
    }
    if (check_hlds__type_util__succeeded)
      {
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26));
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_20;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__576__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_20));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Ctor_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_27_27;
    MR_Word check_hlds__type_util__TypeCtorInfo_28_28;
    MR_Word check_hlds__type_util__TypeInfo_32_32;
    MR_Word check_hlds__type_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_util__ArgTypes_13;
    MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_18_18;
    MR_Word check_hlds__type_util__V_21_21;
    MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 2)));
    MR_Integer check_hlds__type_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 5)));
    MR_Box check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16;

    check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        check_hlds__type_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        check_hlds__type_util__V_18_18 = (MR_Word) &check_hlds__type_util_scalar_common_2[7];
        {
          check_hlds__type_util__ArgTypes_13 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__V_18_18, check_hlds__type_util__Args_10);
        }
        check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
        {
          check_hlds__type_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
        }
        {
          check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__V_21_21, check_hlds__type_util__ArgTypes_13, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15)), &check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
        }
        if (check_hlds__type_util__succeeded)
          {
            *check_hlds__type_util__STATE_VARIABLE_SeenTypes_16 = ((MR_Word) check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
            check_hlds__type_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16);
    }
    if (check_hlds__type_util__succeeded)
      {
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16));
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_6,
  MR_Word check_hlds__type_util__Type_7,
  MR_Word check_hlds__type_util__TypeBody_8,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Globals_10;
    MR_Word check_hlds__type_util__Target_11;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_6, &check_hlds__type_util__Globals_10);
    }
    {
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_10, &check_hlds__type_util__Target_11);
    }
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) {
      default:
        check_hlds__type_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__type_util__ForeignTypeBody_36 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_8), (MR_Integer) 0);
          MR_Word check_hlds__type_util__V_25_25;

          {
            check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_36, &check_hlds__type_util__V_25_25);
          }
          check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
          if (check_hlds__type_util__succeeded)
            {
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
              check_hlds__type_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__type_util__ForeignTypeBody_21;
          MR_Word check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
          MR_Word check_hlds__type_util__V_32_32;
          MR_Word check_hlds__type_util__V_58_58;
          MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
          MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
          MR_Word check_hlds__type_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
          MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
          MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
          MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
          MR_Word check_hlds__type_util__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__type_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__type_util__succeeded)
            {
              check_hlds__type_util__ForeignTypeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_31_31, (MR_Integer) 0)));
              check_hlds__type_util__V_32_32 = (MR_Integer) 1;
              {
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_11, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_58_58);
              }
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_32_32 == check_hlds__type_util__V_58_58);
            }
          if (check_hlds__type_util__succeeded)
            {
              MR_Word check_hlds__type_util__V_22_22;

              {
                check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_22_22);
              }
              check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
              if (check_hlds__type_util__succeeded)
                {
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
                  check_hlds__type_util__succeeded = MR_TRUE;
                }
            }
          else
            {
              MR_Word check_hlds__type_util__TypeCtorInfo_56_56;
              MR_Word check_hlds__type_util__TypeInfo_57_57;
              MR_Word check_hlds__type_util__Ctors_23;
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
              MR_Word check_hlds__type_util__V_34_34;
              MR_Word check_hlds__type_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
              MR_Word check_hlds__type_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
              MR_Word check_hlds__type_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
              MR_Word check_hlds__type_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
              MR_Word check_hlds__type_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
              MR_Word check_hlds__type_util__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word check_hlds__type_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word check_hlds__type_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
              MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29;

              check_hlds__type_util__succeeded = (check_hlds__type_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__type_util__succeeded)
                {
                  {
                    check_hlds__type_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_7, &check_hlds__type_util__Ctors_23);
                  }
                  if (check_hlds__type_util__succeeded)
                    {
                      check_hlds__type_util__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                      check_hlds__type_util__TypeInfo_57_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
                      {
                        check_hlds__type_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[1]));
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 1) = ((MR_Box) (check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1));
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_6));
                      }
                      {
                        check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_56_56, check_hlds__type_util__TypeInfo_57_57, check_hlds__type_util__V_34_34, check_hlds__type_util__Ctors_23, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
                      }
                      if (check_hlds__type_util__succeeded)
                        {
                          *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
                          check_hlds__type_util__succeeded = MR_TRUE;
                        }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__type_util__EqvType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
          MR_Word check_hlds__type_util__V_62_62;
          MR_Word check_hlds__type_util__V_61_61;

          {
            check_hlds__type_util__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
          {
            check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__EqvType_24, check_hlds__type_util__V_62_62, &check_hlds__type_util__V_61_61);
          }
          if (check_hlds__type_util__succeeded)
            {
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
              check_hlds__type_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)))) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
              MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));

              check_hlds__type_util__succeeded = (check_hlds__type_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__type_util__succeeded)
                {
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
                  check_hlds__type_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
    }
    return check_hlds__type_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box * check_hlds__type_util__wrapper_arg_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26);
    }
    if (check_hlds__type_util__succeeded)
      {
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26));
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Types_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__V_10_10;
    MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9;

    {
      check_hlds__type_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 1) = ((MR_Box) (check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
    }
    {
      check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[5], check_hlds__type_util__V_10_10, check_hlds__type_util__Types_6, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
    }
    if (check_hlds__type_util__succeeded)
      {
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_9 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    {
      check_hlds__type_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, ((MR_Box) (check_hlds__type_util__Type_6)));
    }
    if (check_hlds__type_util__succeeded)
      {
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25;
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;

        {
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27);
        }
        switch (MR_tag((MR_Word) check_hlds__type_util__Type_6)) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__type_util__TypeBody_23;
              MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
              MR_Word check_hlds__type_util__Args_31;
              MR_Word check_hlds__type_util__TypeDefn_37;
              MR_Word check_hlds__type_util__TypeTable_41;
              MR_Word check_hlds__type_util__TypeCtor_42;
              MR_Word check_hlds__type_util__V_24_24;

              {
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
              }
              {
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
              }
              if (check_hlds__type_util__succeeded)
                {
                  {
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                  }
                  if (check_hlds__type_util__succeeded)
                    {
                      {
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                      }
                      {
                        check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                      }
                      if (check_hlds__type_util__succeeded)
                        {
                          {
                            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                          }
                          {
                            check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;
              check_hlds__type_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__type_util__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 1)));
                  MR_Word check_hlds__type_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 2)));

                  {
                    check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_9, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__type_util__TypeBody_23;
                  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
                  MR_Word check_hlds__type_util__Args_31;
                  MR_Word check_hlds__type_util__TypeDefn_37;
                  MR_Word check_hlds__type_util__TypeTable_41;
                  MR_Word check_hlds__type_util__TypeCtor_42;
                  MR_Word check_hlds__type_util__V_24_24;

                  {
                    hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
                  }
                  {
                    check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
                  }
                  if (check_hlds__type_util__succeeded)
                    {
                      {
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                      }
                      if (check_hlds__type_util__succeeded)
                        {
                          {
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                          }
                          {
                            check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                          }
                          if (check_hlds__type_util__succeeded)
                            {
                              {
                                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                              }
                              {
                                check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                              }
                            }
                        }
                    }
                }
                break;
            }
            break;
        }
      }
    return check_hlds__type_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3,
  MR_Box * check_hlds__type_util__wrapper_arg_4)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

    {
      check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__ProofMap0_5,
  MR_Word * check_hlds__type_util__ProofMap_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
    MR_Word check_hlds__type_util__V_7_7;
    MR_Word check_hlds__type_util__V_8_8;
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

    {
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
    {
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
    {
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box check_hlds__type_util__wrapper_arg_2,
  MR_Box check_hlds__type_util__wrapper_arg_3,
  MR_Box * check_hlds__type_util__wrapper_arg_4)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

    {
      check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__ProofMap0_5,
  MR_Word * check_hlds__type_util__ProofMap_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
    MR_Word check_hlds__type_util__V_7_7;
    MR_Word check_hlds__type_util__V_8_8;
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

    {
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
    {
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
    {
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_Proof_6;

    {
      check_hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_Proof_6);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_Proof_6));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__ProofMap0_5,
  MR_Word * check_hlds__type_util__ProofMap_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    {
      check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, check_hlds__type_util__ProofMap0_5);
    }
    if (check_hlds__type_util__succeeded)
      *check_hlds__type_util__ProofMap_6 = check_hlds__type_util__ProofMap0_5;
    else
      {
        MR_Word check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        MR_Word check_hlds__type_util__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
        MR_Word check_hlds__type_util__Keys0_7;
        MR_Word check_hlds__type_util__Values0_8;
        MR_Word check_hlds__type_util__Keys_9;
        MR_Word check_hlds__type_util__Values_10;
        MR_Word check_hlds__type_util__V_11_11;

        {
          mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Keys0_7);
        }
        {
          mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Values0_8);
        }
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__Keys0_7, &check_hlds__type_util__Keys_9);
        }
        {
          check_hlds__type_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[7]));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
        }
        {
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__V_11_11, check_hlds__type_util__Values0_8, &check_hlds__type_util__Values_10);
        }
        {
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Keys_9, check_hlds__type_util__Values_10, check_hlds__type_util__ProofMap_6);
        }
      }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv1_LambdaHeadVar__2_26;

    {
      check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1337__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_LambdaHeadVar__2_26);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeInfo_32_32;
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
    MR_Word check_hlds__type_util__TypeInfo_35_35;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word check_hlds__type_util__Unproven_10;
    MR_Word check_hlds__type_util__Assumed_11;
    MR_Word check_hlds__type_util__Pred_12;
    MR_Word check_hlds__type_util__Redundant_17;
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
    MR_Word check_hlds__type_util__AncestorsValues0_19;
    MR_Word check_hlds__type_util__AncestorsKeys_20;
    MR_Word check_hlds__type_util__AncestorsValues_21;
    MR_Word check_hlds__type_util__Ancestors_22;
    MR_Word check_hlds__type_util__V_27_27;
    MR_Word check_hlds__type_util__V_42_42;

    {
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
    {
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
    {
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    {
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
    {
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
    {
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
    {
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv1_LambdaHeadVar__2_26;

    {
      check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1318__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_LambdaHeadVar__2_26);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeInfo_32_32;
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
    MR_Word check_hlds__type_util__TypeInfo_35_35;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word check_hlds__type_util__Unproven_10;
    MR_Word check_hlds__type_util__Assumed_11;
    MR_Word check_hlds__type_util__Pred_12;
    MR_Word check_hlds__type_util__Redundant_17;
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
    MR_Word check_hlds__type_util__AncestorsValues0_19;
    MR_Word check_hlds__type_util__AncestorsKeys_20;
    MR_Word check_hlds__type_util__AncestorsValues_21;
    MR_Word check_hlds__type_util__Ancestors_22;
    MR_Word check_hlds__type_util__V_27_27;
    MR_Word check_hlds__type_util__V_42_42;

    {
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
    {
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
    {
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    {
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
    {
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
    {
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
    {
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv1_LambdaHeadVar__2_26;

    {
      check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1290__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_LambdaHeadVar__2_26);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
    MR_Word check_hlds__type_util__TypeInfo_32_32;
    MR_Word check_hlds__type_util__TypeCtorInfo_33_33;
    MR_Word check_hlds__type_util__TypeInfo_34_34;

    check_hlds__type_util__succeeded = (check_hlds__type_util__Unproven0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__succeeded = (check_hlds__type_util__Assumed0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
            check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
            {
              check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__Redundant0_8);
            }
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                check_hlds__type_util__TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
                {
                  check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_33_33, check_hlds__type_util__TypeInfo_34_34, check_hlds__type_util__Ancestors0_9);
                }
              }
          }
      }
    if (check_hlds__type_util__succeeded)
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = check_hlds__type_util__STATE_VARIABLE_Constraints_0_23;
    else
      {
        MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
        MR_Word check_hlds__type_util__TypeCtorInfo_12_63;
        MR_Word check_hlds__type_util__Unproven_10;
        MR_Word check_hlds__type_util__Assumed_11;
        MR_Word check_hlds__type_util__Redundant_12;
        MR_Word check_hlds__type_util__Ancestors_18;
        MR_Word check_hlds__type_util__V_50_50;

        {
          check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
        }
        check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
        {
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
        }
        check_hlds__type_util__TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
        {
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__V_50_50, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
        }
        {
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[3], check_hlds__type_util__Redundant0_8);
        }
        if (check_hlds__type_util__succeeded)
          check_hlds__type_util__Redundant_12 = check_hlds__type_util__Redundant0_8;
        else
          {
            MR_Word check_hlds__type_util__TypeInfo_38_38;
            MR_Word check_hlds__type_util__Pred_13;

            {
              check_hlds__type_util__Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[3]));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
            }
            check_hlds__type_util__TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
            {
              mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_38_38, check_hlds__type_util__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_13, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_12);
            }
          }
        {
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], check_hlds__type_util__Ancestors0_9);
        }
        if (check_hlds__type_util__succeeded)
          check_hlds__type_util__Ancestors_18 = check_hlds__type_util__Ancestors0_9;
        else
          {
            MR_Word check_hlds__type_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
            MR_Word check_hlds__type_util__TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
            MR_Word check_hlds__type_util__AncestorsKeys0_19;
            MR_Word check_hlds__type_util__AncestorsValues0_20;
            MR_Word check_hlds__type_util__AncestorsKeys_21;
            MR_Word check_hlds__type_util__AncestorsValues_22;
            MR_Word check_hlds__type_util__V_27_27;

            {
              mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_19);
            }
            {
              mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_20);
            }
            {
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__AncestorsKeys0_19, &check_hlds__type_util__AncestorsKeys_21);
            }
            {
              check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[4]));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
            }
            {
              mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_20, &check_hlds__type_util__AncestorsValues_22);
            }
            {
              mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__AncestorsKeys_21, check_hlds__type_util__AncestorsValues_22, &check_hlds__type_util__Ancestors_18);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_18));
        }
      }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1,
  MR_Box * check_hlds__type_util__wrapper_arg_2)
{
  {
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

    {
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
    MR_Word check_hlds__type_util__V_8_8;

    {
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
    }
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    {
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
    }
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__ArgTypes_9;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
    }
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_3_p_0(
  MR_Word check_hlds__type_util__Subst_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__ArgTypes_9;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
    }
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(
  MR_Word check_hlds__type_util__Renaming_4,
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word check_hlds__type_util__ArgTypes_9;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(
  MR_Word check_hlds__type_util__VarTypes_4,
  MR_Word check_hlds__type_util__VarsSet0_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__VarsSet_6;
    MR_Word check_hlds__type_util__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word check_hlds__type_util__VarsList0_7;
    MR_Word check_hlds__type_util__VarsList_8;
    MR_Word check_hlds__type_util__V_13_13;

    {
      check_hlds__type_util__VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__type_util__TypeCtorInfo_9_9, check_hlds__type_util__VarsSet0_5);
    }
    {
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
    }
    {
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList0_7, &check_hlds__type_util__VarsList_8);
    }
    {
      check_hlds__type_util__VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(check_hlds__type_util__TypeCtorInfo_9_9, check_hlds__type_util__VarsList_8);
    }
    return check_hlds__type_util__VarsSet_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0(
  MR_Word check_hlds__type_util__VarTypes_4,
  MR_Word check_hlds__type_util__VarsSet0_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__VarsSet_6;
    MR_Word check_hlds__type_util__TypeInfo_9_9 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
    MR_Word check_hlds__type_util__VarsList0_7;
    MR_Word check_hlds__type_util__VarsList_8;
    MR_Word check_hlds__type_util__V_13_13;

    {
      check_hlds__type_util__VarsList0_7 = mercury__set__to_sorted_list_1_f_0(check_hlds__type_util__TypeInfo_9_9, check_hlds__type_util__VarsSet0_5);
    }
    {
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
    }
    {
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList0_7, &check_hlds__type_util__VarsList_8);
    }
    {
      check_hlds__type_util__VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(check_hlds__type_util__TypeInfo_9_9, check_hlds__type_util__VarsList_8);
    }
    return check_hlds__type_util__VarsSet_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0(
  MR_Word check_hlds__type_util__VarTypes_4,
  MR_Word check_hlds__type_util__VarsList_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__NonTypeInfoVarsList_6;
    MR_Word check_hlds__type_util__V_7_7;

    {
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
    }
    {
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_7_7, check_hlds__type_util__VarsList_5, &check_hlds__type_util__NonTypeInfoVarsList_6);
    }
    return check_hlds__type_util__NonTypeInfoVarsList_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0(
  MR_Word check_hlds__type_util__VarsList_4,
  MR_Word check_hlds__type_util__VarTypes_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__HeadVar__3_3;
    MR_Word check_hlds__type_util__TypeInfoVarsList_6;
    MR_Word check_hlds__type_util__NonTypeInfoVarsList_7;
    MR_Word check_hlds__type_util__V_13_13;

    {
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_5));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList_4, &check_hlds__type_util__TypeInfoVarsList_6, &check_hlds__type_util__NonTypeInfoVarsList_7);
    }
    {
      check_hlds__type_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__TypeInfoVarsList_6, check_hlds__type_util__NonTypeInfoVarsList_7);
    }
    return check_hlds__type_util__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_15;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_15 = check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1198__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_15));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(
  MR_Word check_hlds__type_util__MaybeType_4,
  MR_Integer check_hlds__type_util__Arity_5,
  MR_Word * check_hlds__type_util__MaybeTypes_6)
{
  {
    MR_bool check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word check_hlds__type_util__ArgTypes_11;
    MR_Word check_hlds__type_util__Type_7;
    MR_Word check_hlds__type_util__V_8_8;
    MR_Word check_hlds__type_util__V_9_9;

    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_4, (MR_Integer) 0)));
        {
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__V_8_8, &check_hlds__type_util__V_9_9, &check_hlds__type_util__ArgTypes_11);
        }
      }
    if (check_hlds__type_util__succeeded)
      {
        {
          *check_hlds__type_util__MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[6], check_hlds__type_util__ArgTypes_11);
        }
      }
    else
      {
        {
          mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_6);
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_20;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1185__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_20));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_6,
  MR_Word check_hlds__type_util__MaybeType_7,
  MR_Word check_hlds__type_util__ConsId_8,
  MR_Integer check_hlds__type_util__Arity_9,
  MR_Word * check_hlds__type_util__MaybeTypes_10)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
      check_hlds__type_util__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      check_hlds__type_util__succeeded = MR_TRUE;
    else
      check_hlds__type_util__succeeded = MR_FALSE;
    if (check_hlds__type_util__succeeded)
      {
        MR_Word check_hlds__type_util__Types_16;
        MR_Word check_hlds__type_util__TypeCtorInfo_23_23;
        MR_Word check_hlds__type_util__Type_15;
        MR_Integer check_hlds__type_util__V_27_27;

        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_7, (MR_Integer) 0)));
            {
              check_hlds__type_util__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_15, check_hlds__type_util__ConsId_8, &check_hlds__type_util__Types_16);
            }
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                {
                  mercury__list__length_2_p_0(check_hlds__type_util__TypeCtorInfo_23_23, check_hlds__type_util__Types_16, &check_hlds__type_util__V_27_27);
                }
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_9 == check_hlds__type_util__V_27_27);
              }
          }
        if (check_hlds__type_util__succeeded)
          {
            {
              *check_hlds__type_util__MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[5], check_hlds__type_util__Types_16);
            }
          }
        else
          {
            {
              mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_10);
            }
          }
      }
    else
      *check_hlds__type_util__MaybeTypes_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
check_hlds__type_util__is_region_var_2_p_0(
  MR_Word check_hlds__type_util__VarTypes_3,
  MR_Word check_hlds__type_util__Var_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Type_5;
    MR_Word check_hlds__type_util__V_6_6;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_3, check_hlds__type_util__Var_4, &check_hlds__type_util__Type_5);
    }
    {
      check_hlds__type_util__V_6_6 = parse_tree__builtin_lib_types__region_type_0_f_0();
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_5, check_hlds__type_util__V_6_6);
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_not_stored_in_region_2_p_0(
  MR_Word check_hlds__type_util__Type_3,
  MR_Word check_hlds__type_util__ModuleInfo_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    {
      MR_Word check_hlds__type_util__TypeCtor_12;

      {
        check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_3, &check_hlds__type_util__TypeCtor_12);
      }
      if (check_hlds__type_util__succeeded)
        {
          check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_12);
        }
    }
    if (!(check_hlds__type_util__succeeded))
      {
        {
          MR_Word check_hlds__type_util__V_5_5;

          {
            check_hlds__type_util__V_5_5 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          check_hlds__type_util__succeeded = (check_hlds__type_util__V_5_5 == (MR_Integer) 0);
        }
        if (!(check_hlds__type_util__succeeded))
          {
            {
              MR_Word check_hlds__type_util__V_6_6;

              {
                check_hlds__type_util__V_6_6 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
              }
              {
                check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_6_6);
              }
            }
            if (!(check_hlds__type_util__succeeded))
              {
                {
                  MR_Word check_hlds__type_util__V_7_7;

                  {
                    check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
                  }
                  {
                    check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_7_7);
                  }
                }
                if (!(check_hlds__type_util__succeeded))
                  {
                    check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_var_1_p_0(check_hlds__type_util__Type_3);
                  }
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_Integer MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__ConsId_7)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Integer check_hlds__type_util__AdjustedArity_8;
    MR_Integer check_hlds__type_util__ConsArity_9;
    MR_Word check_hlds__type_util__ConsDefn_10;

    {
      check_hlds__type_util__ConsArity_9 = parse_tree__prog_util__cons_id_arity_1_f_0(check_hlds__type_util__ConsId_7);
    }
    {
      check_hlds__type_util__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_10);
    }
    if (check_hlds__type_util__succeeded)
      {
        MR_Word check_hlds__type_util__TypeInfo_23_23;
        MR_Word check_hlds__type_util__ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 1)));
        MR_Word check_hlds__type_util__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 3)));
        MR_Integer check_hlds__type_util__NumTypeClassInfos_17;
        MR_Word check_hlds__type_util__ConstrainedTVars_18;
        MR_Word check_hlds__type_util__UnconstrainedExistQTVars_19;
        MR_Integer check_hlds__type_util__NumTypeInfos_20;
        MR_Integer check_hlds__type_util__V_21_21;
        MR_Word check_hlds__type_util___TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 0)));
        MR_Word check_hlds__type_util___KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 2)));
        MR_Word check_hlds__type_util___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 4)));
        MR_Word check_hlds__type_util___ResultType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 5)));

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__type_util__Constraints_14, &check_hlds__type_util__NumTypeClassInfos_17);
        }
        {
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__type_util__Constraints_14, &check_hlds__type_util__ConstrainedTVars_18);
        }
        check_hlds__type_util__TypeInfo_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
        {
          mercury__list__delete_elems_3_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__ExistQTVars_12, check_hlds__type_util__ConstrainedTVars_18, &check_hlds__type_util__UnconstrainedExistQTVars_19);
        }
        {
          mercury__list__length_2_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__UnconstrainedExistQTVars_19, &check_hlds__type_util__NumTypeInfos_20);
        }
        check_hlds__type_util__V_21_21 = (check_hlds__type_util__ConsArity_9 + check_hlds__type_util__NumTypeClassInfos_17);
        check_hlds__type_util__AdjustedArity_8 = (check_hlds__type_util__V_21_21 + check_hlds__type_util__NumTypeInfos_20);
      }
    else
      check_hlds__type_util__AdjustedArity_8 = check_hlds__type_util__ConsArity_9;
    return check_hlds__type_util__AdjustedArity_8;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_float_eqv_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;

        {
          MR_Word check_hlds__type_util__V_7_7;

          {
            check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
          }
          {
            check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_4, check_hlds__type_util__V_7_7);
          }
        }
        if (!(check_hlds__type_util__succeeded))
          {
            MR_Word check_hlds__type_util__TypeBody_5;
            MR_Word check_hlds__type_util__EqvType_6;
            MR_Word check_hlds__type_util__TypeDefn_12;
            MR_Word check_hlds__type_util__TypeTable_16;
            MR_Word check_hlds__type_util__TypeCtor_17;

            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_16);
            }
            {
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_17);
            }
            if (check_hlds__type_util__succeeded)
              {
                {
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_16, check_hlds__type_util__TypeCtor_17, &check_hlds__type_util__TypeDefn_12);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeBody_5);
                    }
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2)));
                    if (check_hlds__type_util__succeeded)
                      {
                        check_hlds__type_util__EqvType_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_6;

                          check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__type_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word * check_hlds__type_util__Ctor_7,
  MR_Word * check_hlds__type_util__ArgType_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_18_18;
    MR_Word check_hlds__type_util__TypeCtorInfo_19_19;
    MR_Word check_hlds__type_util__TypeCtor_9;
    MR_Word check_hlds__type_util__TypeArgs_10;
    MR_Word check_hlds__type_util__NoTagTypes_11;
    MR_Word check_hlds__type_util__NoTagType_12;
    MR_Word check_hlds__type_util__TypeParams_13;
    MR_Word check_hlds__type_util__ArgType0_14;
    MR_Box check_hlds__type_util__conv0_NoTagType_12;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeArgs_10);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          hlds__hlds_module__module_info_get_no_tag_types_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__NoTagTypes_11);
        }
        check_hlds__type_util__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        check_hlds__type_util__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0;
        {
          check_hlds__type_util__succeeded = mercury__map__search_3_p_0(check_hlds__type_util__TypeCtorInfo_18_18, check_hlds__type_util__TypeCtorInfo_19_19, check_hlds__type_util__NoTagTypes_11, ((MR_Box) (check_hlds__type_util__TypeCtor_9)), &check_hlds__type_util__conv0_NoTagType_12);
        }
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__NoTagType_12 = ((MR_Word) check_hlds__type_util__conv0_NoTagType_12);
            check_hlds__type_util__succeeded = MR_TRUE;
          }
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 0)));
            *check_hlds__type_util__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 1)));
            check_hlds__type_util__ArgType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 2)));
            if ((check_hlds__type_util__TypeParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *check_hlds__type_util__ArgType_8 = check_hlds__type_util__ArgType0_14;
            else
              {
                MR_Word check_hlds__type_util__Subn_17;

                {
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_13, check_hlds__type_util__TypeArgs_10, &check_hlds__type_util__Subn_17);
                }
                {
                  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subn_17, check_hlds__type_util__ArgType0_14, check_hlds__type_util__ArgType_8);
                }
              }
            check_hlds__type_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util___Ctor_5;
    MR_Word check_hlds__type_util___ArgType_6;

    {
      check_hlds__type_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &check_hlds__type_util___Ctor_5, &check_hlds__type_util___ArgType_6);
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__cons_id_is_existq_cons_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__VarType_5,
  MR_Word check_hlds__type_util__ConsId_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__V_7_7;
    MR_Word check_hlds__type_util__TypeCtor_12;
    MR_Word check_hlds__type_util__V_15_15;
    MR_Word check_hlds__type_util__Ctors_27;
    MR_Word check_hlds__type_util__V_16_16;
    MR_Word check_hlds__type_util__V_17_17;
    MR_Word check_hlds__type_util__V_18_18;
    MR_Word check_hlds__type_util__V_19_19;
    MR_Word check_hlds__type_util__V_20_20;
    MR_Word check_hlds__type_util__V_21_21;
    MR_Word check_hlds__type_util__V_22_22;
    MR_Word check_hlds__type_util__V_13_13;
    MR_Word check_hlds__type_util__V_14_14;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_12);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Ctors_27);
        }
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_27, check_hlds__type_util__TypeCtor_12, check_hlds__type_util__ConsId_6, &check_hlds__type_util__V_7_7);
        }
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 0)));
            check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 1)));
            check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 2)));
            check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 3)));
            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 4)));
            check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 5)));
            check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 6)));
            check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 7)));
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
                check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 1)));
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_25;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_25 = check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1097__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_25));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__VarType_6,
  MR_Word check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__CtorDefn_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
    MR_Word check_hlds__type_util__ConsDefn_9;
    MR_Word check_hlds__type_util__TypeVarSet_11;
    MR_Word check_hlds__type_util__TypeParams_12;
    MR_Word check_hlds__type_util__KindMap_13;
    MR_Word check_hlds__type_util__ExistQVars_14;
    MR_Word check_hlds__type_util__Constraints_15;
    MR_Word check_hlds__type_util__Args_16;
    MR_Word check_hlds__type_util__ArgTypes_18;
    MR_Word check_hlds__type_util__TypeCtorArgs_20;
    MR_Word check_hlds__type_util__TypeCtor_21;
    MR_Word check_hlds__type_util__RetType_22;
    MR_Word check_hlds__type_util__V_23_23;
    MR_Word check_hlds__type_util__TypeCtor_36;
    MR_Word check_hlds__type_util__Ctors_51;
    MR_Word check_hlds__type_util___TypeCtor_10;
    MR_Word check_hlds__type_util___Context_17;
    MR_Word check_hlds__type_util__V_37_37;
    MR_Word check_hlds__type_util__V_38_38;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_36);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_51);
        }
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_51, check_hlds__type_util__TypeCtor_36, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_9);
        }
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 0)));
            check_hlds__type_util__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 1)));
            check_hlds__type_util__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 2)));
            check_hlds__type_util__KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 3)));
            check_hlds__type_util__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 4)));
            check_hlds__type_util__Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 5)));
            check_hlds__type_util__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 6)));
            check_hlds__type_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 7)));
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__ExistQVars_14)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 0)));
                check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 1)));
                check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                check_hlds__type_util__V_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_2[4];
                {
                  check_hlds__type_util__ArgTypes_18 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__V_23_23, check_hlds__type_util__Args_16);
                }
                {
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__type_util__KindMap_13, check_hlds__type_util__TypeParams_12, &check_hlds__type_util__TypeCtorArgs_20);
                }
                {
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_21);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    {
                      parse_tree__prog_type__construct_type_3_p_0(check_hlds__type_util__TypeCtor_21, check_hlds__type_util__TypeCtorArgs_20, &check_hlds__type_util__RetType_22);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__type_util__CtorDefn_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__TypeVarSet_11));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ExistQVars_14));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__KindMap_13));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Constraints_15));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_util__ArgTypes_18));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_util__RetType_22));
                    }
                    check_hlds__type_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__get_cons_defn_det_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__TypeCtor_6,
  MR_Word check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__ConsDefn_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__ConsDefnPrime_9;
    MR_Word check_hlds__type_util__Ctors_17;

    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_17);
    }
    {
      check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_17, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefnPrime_9);
    }
    if (check_hlds__type_util__succeeded)
      *check_hlds__type_util__ConsDefn_8 = check_hlds__type_util__ConsDefnPrime_9;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_cons_defn_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__TypeCtor_6,
  MR_Word check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__ConsDefn_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Ctors_9;

    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_9);
    }
    {
      check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_9, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, check_hlds__type_util__ConsDefn_8);
    }
    return check_hlds__type_util__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv2_LambdaHeadVar__2_31;

    {
      check_hlds__type_util__conv2_LambdaHeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1065__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_LambdaHeadVar__2_31));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7) = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7);
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14);
    {
      check_hlds__type_util__cons_id_arg_types_4_p_0_1(check_hlds__type_util__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    {
      MR_Word check_hlds__type_util__V_17_17;
      MR_Word check_hlds__type_util__V_18_18;
      MR_Word check_hlds__type_util__V_20_20;
      MR_Word check_hlds__type_util__V_22_22;
      MR_Word check_hlds__type_util__V_24_24;

      {
        hlds__hlds_module__module_info_get_cons_table_2_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15);
      }
      {
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7), &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16);
      }
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
        {
          check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 0)));
          check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 1)));
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 2)));
          check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 3)));
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 4)));
          check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 5)));
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 6)));
          check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 7)));
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
            {
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__map__from_corresponding_lists_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25);
              }
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29 = (MR_Word) &check_hlds__type_util_scalar_common_2[3];
              {
                (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26 = mercury__list__map_2_f_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23);
              }
              {
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8);
              }
              {
                ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont)((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr);
              }
            }
        }
    }
  }
}

void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__VarType_6,
  MR_Word * check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__ArgTypes_8,
  MR_Cont check_hlds__type_util__cont,
  void * check_hlds__type_util__cont_env_ptr)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s check_hlds__type_util__env;

    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5 = check_hlds__type_util__ModuleInfo_5;
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7 = check_hlds__type_util__ConsId_7;
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8 = check_hlds__type_util__ArgTypes_8;
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont = check_hlds__type_util__cont;
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr = check_hlds__type_util__cont_env_ptr;
    {
      MR_Word check_hlds__type_util__TypeCtorInfo_44_44;
      MR_Word check_hlds__type_util__TypeCtorInfo_45_45;
      MR_Word check_hlds__type_util__TypeTable_11;
      MR_Word check_hlds__type_util__TypeDefn_12;
      MR_Word check_hlds__type_util__TypeDefnBody_13;
      MR_Word check_hlds__type_util__V_28_28;
      MR_Word check_hlds__type_util__V_33_33;
      MR_Word check_hlds__type_util__V_34_34;
      MR_Word check_hlds__type_util__V_35_35;
      MR_Word check_hlds__type_util__V_36_36;
      MR_Word check_hlds__type_util__V_37_37;
      MR_Word check_hlds__type_util__V_38_38;
      MR_Word check_hlds__type_util__V_39_39;
      MR_Word check_hlds__type_util__V_40_40;

      {
        (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__VarType_6, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10);
      }
      if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
        {
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &check_hlds__type_util__TypeTable_11);
          }
          {
            (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &check_hlds__type_util__TypeDefn_12);
          }
          if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
            {
              {
                hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeDefnBody_13);
              }
              (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeDefnBody_13)) == (MR_mktag((MR_Integer) 1)));
              if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
                {
                  check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 0)));
                  check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 1)));
                  check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 2)));
                  check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 3)));
                  check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 4)));
                  check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 5)));
                  check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) & (MR_Integer) 1);
                  check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 7)));
                  check_hlds__type_util__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                  check_hlds__type_util__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                  {
                    mercury__map__member_3_p_0(check_hlds__type_util__TypeCtorInfo_44_44, check_hlds__type_util__TypeCtorInfo_45_45, check_hlds__type_util__V_28_28, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14, check_hlds__type_util__cons_id_arg_types_4_p_0_2, &check_hlds__type_util__env);
                  }
                }
            }
        }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_34;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_34));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__ArgTypes_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_15;
    MR_Word check_hlds__type_util__TypeArgs_16;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
        if (check_hlds__type_util__succeeded)
          {
            *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
            check_hlds__type_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__type_util__TypeParams_20;
            MR_Word check_hlds__type_util__ExistQVars0_22;
            MR_Word check_hlds__type_util__Args_24;
            MR_Word check_hlds__type_util__ConsDefn_17;
            MR_Word check_hlds__type_util__Ctors_50;
            MR_Word check_hlds__type_util__V_18_18;
            MR_Word check_hlds__type_util__V_19_19;
            MR_Word check_hlds__type_util__V_21_21;
            MR_Word check_hlds__type_util__V_23_23;
            MR_Word check_hlds__type_util__V_25_25;
            MR_Word check_hlds__type_util__V_26_26;
            MR_Word check_hlds__type_util__V_27_27;

            {
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
            {
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__type_util__succeeded)
                  {
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
                  }
              }
            if (check_hlds__type_util__succeeded)
              {
                MR_Word check_hlds__type_util__TypeInfo_39_43;
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
                MR_Word check_hlds__type_util__TypeCtorInfo_41_45;
                MR_Word check_hlds__type_util__TSubst_30;
                MR_Word check_hlds__type_util__ArgTypes0_31;
                MR_Word check_hlds__type_util__V_36_36;

                check_hlds__type_util__succeeded = (check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__type_util__succeeded)
                  {
                    check_hlds__type_util__TypeInfo_39_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
                    check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    {
                      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeInfo_39_43, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                    }
                    check_hlds__type_util__TypeCtorInfo_41_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                    check_hlds__type_util__V_36_36 = (MR_Word) &check_hlds__type_util_scalar_common_2[2];
                    {
                      check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_41_45, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__V_36_36, check_hlds__type_util__Args_24);
                    }
                    {
                      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
                    }
                    check_hlds__type_util__succeeded = MR_TRUE;
                  }
              }
            else
              {
                *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__type_util__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__type_util__succeeded = MR_TRUE;
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_34;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1040__2_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_34));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__ConsId_7,
  MR_Word * check_hlds__type_util__ArgTypes_8)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_15;
    MR_Word check_hlds__type_util__TypeArgs_16;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
        if (check_hlds__type_util__succeeded)
          *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
        else
          {
            MR_Word check_hlds__type_util__TypeParams_20;
            MR_Word check_hlds__type_util__ExistQVars0_22;
            MR_Word check_hlds__type_util__Args_24;
            MR_Word check_hlds__type_util__ConsDefn_17;
            MR_Word check_hlds__type_util__Ctors_50;
            MR_Word check_hlds__type_util__V_18_18;
            MR_Word check_hlds__type_util__V_19_19;
            MR_Word check_hlds__type_util__V_21_21;
            MR_Word check_hlds__type_util__V_23_23;
            MR_Word check_hlds__type_util__V_25_25;
            MR_Word check_hlds__type_util__V_26_26;
            MR_Word check_hlds__type_util__V_27_27;

            {
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
            {
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__type_util__succeeded)
                  {
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
                  }
              }
            if (check_hlds__type_util__succeeded)
              {
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
                MR_Word check_hlds__type_util__TSubst_30;
                MR_Word check_hlds__type_util__ArgTypes0_31;

                if ((check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_id_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
                      return;
                    }
                  }
                check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                {
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                }
                {
                  check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__type_util__TypeCtorInfo_40_44, (MR_Word) &check_hlds__type_util_scalar_common_2[1], check_hlds__type_util__Args_24);
                }
                {
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
                }
              }
            else
              *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
check_hlds__type_util__switch_type_num_functors_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Integer * check_hlds__type_util__NumFunctors_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_7;
    MR_Word check_hlds__type_util__V_15_15;
    MR_String check_hlds__type_util__V_16_16;
    MR_Integer check_hlds__type_util__V_17_17;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 0)));
        check_hlds__type_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 1)));
        check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == (MR_Integer) 0);
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
                check_hlds__type_util__succeeded = (strcmp(check_hlds__type_util__V_16_16, (MR_String) "character") == 0);
              }
          }
        if (check_hlds__type_util__succeeded)
          {
            MR_Word check_hlds__type_util__Globals_8;
            MR_Word check_hlds__type_util__Target_9;
            MR_Integer check_hlds__type_util__MinChar_10;
            MR_Integer check_hlds__type_util__MaxChar_11;
            MR_Integer check_hlds__type_util__V_18_18;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_8);
            }
            {
              libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_8, &check_hlds__type_util__Target_9);
            }
            {
              backend_libs__string_encoding__target_char_range_3_p_0(check_hlds__type_util__Target_9, &check_hlds__type_util__MinChar_10, &check_hlds__type_util__MaxChar_11);
            }
            check_hlds__type_util__V_18_18 = (check_hlds__type_util__MaxChar_11 - check_hlds__type_util__MinChar_10);
            *check_hlds__type_util__NumFunctors_6 = (check_hlds__type_util__V_18_18 + (MR_Integer) 1);
            check_hlds__type_util__succeeded = MR_TRUE;
          }
        else
          {
            {
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
            }
            if (check_hlds__type_util__succeeded)
              {
                *check_hlds__type_util__NumFunctors_6 = (MR_Integer) 1;
                check_hlds__type_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__type_util__TypeCtorInfo_29_29;
                MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
                MR_Word check_hlds__type_util__TypeTable_12;
                MR_Word check_hlds__type_util__TypeDefn_13;
                MR_Word check_hlds__type_util__TypeBody_14;
                MR_Word check_hlds__type_util__V_20_20;
                MR_Word check_hlds__type_util__V_21_21;
                MR_Word check_hlds__type_util__V_22_22;
                MR_Word check_hlds__type_util__V_23_23;
                MR_Word check_hlds__type_util__V_24_24;
                MR_Word check_hlds__type_util__V_25_25;
                MR_Word check_hlds__type_util__V_26_26;
                MR_Word check_hlds__type_util__V_27_27;
                MR_Word check_hlds__type_util__V_28_28;

                {
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_12);
                }
                {
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_13);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                    }
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__type_util__succeeded)
                      {
                        check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
                        check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
                        check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
                        check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
                        check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
                        check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
                        check_hlds__type_util__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                        check_hlds__type_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));
                        check_hlds__type_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                        check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                        {
                          mercury__map__count_2_p_0(check_hlds__type_util__TypeCtorInfo_29_29, check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__V_20_20, check_hlds__type_util__NumFunctors_6);
                        }
                        check_hlds__type_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box check_hlds__type_util__closure_arg,
  MR_Box check_hlds__type_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__type_util__wrapper_arg_2;
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
    MR_Word check_hlds__type_util__conv0_LambdaHeadVar__2_20;

    {
      check_hlds__type_util__conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__type_constructors__918__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_LambdaHeadVar__2_20));
    return check_hlds__type_util__wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_constructors_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__Constructors_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_7;
    MR_Word check_hlds__type_util__TypeArgs_8;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeArgs_8);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
        }
        if (check_hlds__type_util__succeeded)
          {
            MR_Word check_hlds__type_util__TypeCtorInfo_39_39;
            MR_Word check_hlds__type_util__Context_11;
            MR_Word check_hlds__type_util__CtorArgs_12;
            MR_Word check_hlds__type_util__V_18_18;
            MR_Word check_hlds__type_util__V_23_23;
            MR_Integer check_hlds__type_util__V_26_26;

            {
              check_hlds__type_util__Context_11 = mercury__term__context_init_0_f_0();
            }
            check_hlds__type_util__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            {
              check_hlds__type_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
            }
            {
              check_hlds__type_util__CtorArgs_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__V_18_18, check_hlds__type_util__TypeArgs_8);
            }
            {
              check_hlds__type_util__V_26_26 = mercury__list__length_1_f_0(check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__CtorArgs_12);
            }
            {
              check_hlds__type_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 2) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[7]));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 3) = ((MR_Box) (check_hlds__type_util__CtorArgs_12));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 4) = ((MR_Box) (check_hlds__type_util__V_26_26));
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 5) = ((MR_Box) (check_hlds__type_util__Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__type_util__Constructors_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__V_23_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            check_hlds__type_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__type_util__TypeTable_14;
            MR_Word check_hlds__type_util__TypeDefn_15;
            MR_Word check_hlds__type_util__TypeParams_16;
            MR_Word check_hlds__type_util__TypeBody_17;
            MR_Word check_hlds__type_util__V_28_28;
            MR_Word check_hlds__type_util__V_30_30;
            MR_Word check_hlds__type_util__V_31_31;
            MR_Word check_hlds__type_util__V_32_32;
            MR_Word check_hlds__type_util__V_33_33;
            MR_Word check_hlds__type_util__V_34_34;
            MR_Word check_hlds__type_util__V_35_35;
            MR_Word check_hlds__type_util__V_36_36;
            MR_Word check_hlds__type_util__V_37_37;

            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_14);
            }
            {
              check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_14, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_15);
            }
            if (check_hlds__type_util__succeeded)
              {
                {
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeParams_16);
                }
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_17);
                }
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_17)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__type_util__succeeded)
                  {
                    check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 0)));
                    check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 1)));
                    check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 2)));
                    check_hlds__type_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 3)));
                    check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 4)));
                    check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 5)));
                    check_hlds__type_util__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) & (MR_Integer) 1);
                    check_hlds__type_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 7)));
                    if ((check_hlds__type_util__TypeParams_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *check_hlds__type_util__Constructors_6 = check_hlds__type_util__V_28_28;
                    else
                      {
                        MR_Word check_hlds__type_util__Subst_46;

                        {
                          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_16, check_hlds__type_util__TypeArgs_8, &check_hlds__type_util__Subst_46);
                        }
                        {
                          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_46, check_hlds__type_util__V_28_28, check_hlds__type_util__Constructors_6);
                        }
                      }
                    check_hlds__type_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_5,
  MR_Word check_hlds__type_util__Type_6,
  MR_Word check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9)
{
  {
    MR_bool check_hlds__type_util__succeeded;

    switch (check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8;
        break;
      case (MR_Integer) 0:
        {
          *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeMayUseAtomic_6;
    MR_Word check_hlds__type_util__TypeCategory_7;
    MR_Word check_hlds__type_util__TypeCtor_26;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_26);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__TypeCategory_7 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_26);
      }
    else
      check_hlds__type_util__TypeCategory_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)));

          switch (check_hlds__type_util__V_21_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__type_util__Globals_9;
                MR_Word check_hlds__type_util__UBF_10;

                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_9);
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__type_util__Globals_9, (MR_Integer) 243, &check_hlds__type_util__UBF_10);
                }
                switch (check_hlds__type_util__UBF_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 1)));

              check_hlds__type_util__TypeMayUseAtomic_6 = ((&check_hlds__type_util_vector_common_6[0 + check_hlds__type_util__V_22_22]))->check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return check_hlds__type_util__TypeMayUseAtomic_6;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_defn_body_1_f_0(
  MR_Word check_hlds__type_util__TypeBody_3)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCategory_4;

    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__type_util__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 3)));
          MR_Word check_hlds__type_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)));
          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));
          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 2)));
          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 4)));
          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 5)));
          MR_Word check_hlds__type_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__type_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 7)));

          switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[6]);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11]);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[5]);
              }
              break;
            case (MR_Integer) 2:
              {
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[12]);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__type_util__V_37_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__type_util__V_37_37)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return check_hlds__type_util__TypeCategory_4;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_ctor_2_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__TypeCtor_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCategory_6;
    MR_Word check_hlds__type_util__TypeSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 0)));
    MR_Integer check_hlds__type_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__TypeCategoryPrime_10;
    MR_String check_hlds__type_util__TypeName_9;
    MR_Integer check_hlds__type_util__lo_0;
    MR_Integer check_hlds__type_util__hi_1;
    MR_Integer check_hlds__type_util__mid_2;
    MR_Integer check_hlds__type_util__result_3;

    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
            /* binary string simple lookup switch */
            check_hlds__type_util__lo_0 = (MR_Integer) 0;
            check_hlds__type_util__hi_1 = (MR_Integer) 4;
            do
              {
                check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
                check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__TypeName_9, ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
                if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
                  {
                    check_hlds__type_util__TypeCategoryPrime_10 = ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
                    check_hlds__type_util__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
                  check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
                else
                  check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
              }
            while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
            check_hlds__type_util__succeeded = MR_FALSE;
          label_0:;
          }
      }
    if (check_hlds__type_util__succeeded)
      check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_10;
    else
      {
        MR_Word check_hlds__type_util__TypeCategoryPrime_34;
        MR_Word check_hlds__type_util__ModuleSymName_11;
        MR_String check_hlds__type_util__TypeName_27;
        MR_Word check_hlds__type_util__V_35_35;
        MR_Integer check_hlds__type_util__lo_4;
        MR_Integer check_hlds__type_util__hi_5;
        MR_Integer check_hlds__type_util__mid_6;
        MR_Integer check_hlds__type_util__result_7;

        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__ModuleSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
            check_hlds__type_util__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
            {
              check_hlds__type_util__V_35_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_11, check_hlds__type_util__V_35_35);
            }
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
                if (check_hlds__type_util__succeeded)
                  {
                    /* binary string simple lookup switch */
                    check_hlds__type_util__lo_4 = (MR_Integer) 0;
                    check_hlds__type_util__hi_5 = (MR_Integer) 3;
                    do
                      {
                        check_hlds__type_util__mid_6 = (((check_hlds__type_util__lo_4 + check_hlds__type_util__hi_5)) / (MR_Integer) 2);
                        check_hlds__type_util__result_7 = MR_strcmp(check_hlds__type_util__TypeName_27, ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
                        if ((check_hlds__type_util__result_7 == (MR_Integer) 0))
                          {
                            check_hlds__type_util__TypeCategoryPrime_34 = ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
                            check_hlds__type_util__succeeded = MR_TRUE;
                            /* jump out of search loop */
                            goto label_1;
                          }
                        else
                        if ((check_hlds__type_util__result_7 < (MR_Integer) 0))
                          check_hlds__type_util__hi_5 = (check_hlds__type_util__mid_6 - (MR_Integer) 1);
                        else
                          check_hlds__type_util__lo_4 = (check_hlds__type_util__mid_6 + (MR_Integer) 1);
                      }
                    while ((check_hlds__type_util__lo_4 <= check_hlds__type_util__hi_5));
                    check_hlds__type_util__succeeded = MR_FALSE;
                  label_1:;
                  }
              }
          }
        if (check_hlds__type_util__succeeded)
          check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_34;
        else
          {
            MR_Word check_hlds__type_util__TypeCategoryPrime_31;
            MR_String check_hlds__type_util__TypeName_28;
            MR_Word check_hlds__type_util__ModuleSymName_29;
            MR_Word check_hlds__type_util__V_36_36;
            MR_Integer check_hlds__type_util__lo_8;
            MR_Integer check_hlds__type_util__hi_9;
            MR_Integer check_hlds__type_util__mid_10;
            MR_Integer check_hlds__type_util__result_11;

            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__type_util__succeeded)
              {
                check_hlds__type_util__ModuleSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
                check_hlds__type_util__TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
                {
                  check_hlds__type_util__V_36_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
                {
                  check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_29, check_hlds__type_util__V_36_36);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
                    if (check_hlds__type_util__succeeded)
                      {
                        /* binary string simple lookup switch */
                        check_hlds__type_util__lo_8 = (MR_Integer) 0;
                        check_hlds__type_util__hi_9 = (MR_Integer) 3;
                        do
                          {
                            check_hlds__type_util__mid_10 = (((check_hlds__type_util__lo_8 + check_hlds__type_util__hi_9)) / (MR_Integer) 2);
                            check_hlds__type_util__result_11 = MR_strcmp(check_hlds__type_util__TypeName_28, ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
                            if ((check_hlds__type_util__result_11 == (MR_Integer) 0))
                              {
                                check_hlds__type_util__TypeCategoryPrime_31 = ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
                                check_hlds__type_util__succeeded = MR_TRUE;
                                /* jump out of search loop */
                                goto label_2;
                              }
                            else
                            if ((check_hlds__type_util__result_11 < (MR_Integer) 0))
                              check_hlds__type_util__hi_9 = (check_hlds__type_util__mid_10 - (MR_Integer) 1);
                            else
                              check_hlds__type_util__lo_8 = (check_hlds__type_util__mid_10 + (MR_Integer) 1);
                          }
                        while ((check_hlds__type_util__lo_8 <= check_hlds__type_util__hi_9));
                        check_hlds__type_util__succeeded = MR_FALSE;
                      label_2:;
                      }
                  }
              }
            if (check_hlds__type_util__succeeded)
              check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_31;
            else
              {
                MR_Word check_hlds__type_util__V_26_26;

                {
                  check_hlds__type_util__V_26_26 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_5);
                }
                check_hlds__type_util__succeeded = (check_hlds__type_util__V_26_26 == (MR_Integer) 0);
                if (check_hlds__type_util__succeeded)
                  check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                else
                  {
                    MR_Word check_hlds__type_util__V_12_12;
                    MR_Word check_hlds__type_util__V_13_13;

                    {
                      check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__V_12_12, &check_hlds__type_util__V_13_13);
                    }
                    if (check_hlds__type_util__succeeded)
                      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        {
                          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_5);
                        }
                        if (check_hlds__type_util__succeeded)
                          check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                        else
                          {
                            MR_Word check_hlds__type_util__TypeTable_15;
                            MR_Word check_hlds__type_util__TypeDefn_16;
                            MR_Word check_hlds__type_util__TypeBody_17;

                            {
                              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
                            }
                            {
                              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__TypeDefn_16);
                            }
                            {
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_17);
                            }
                            {
                              check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(check_hlds__type_util__TypeBody_17);
                            }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__type_util__TypeCategory_6;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_2_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__VarType_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCategory_6;
    MR_Word check_hlds__type_util__TypeCtor_7;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_7);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_7);
      }
    else
      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
    return check_hlds__type_util__TypeCategory_6;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
  MR_Word check_hlds__type_util__Type_3,
  MR_Word check_hlds__type_util__Body_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_String check_hlds__type_util__Name_5;
    MR_Word check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_util__V_19_19;
    MR_Integer check_hlds__type_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_util__V_22_22;
    MR_Integer check_hlds__type_util__lo_0;
    MR_Integer check_hlds__type_util__hi_1;
    MR_Integer check_hlds__type_util__mid_2;
    MR_Integer check_hlds__type_util__result_3;

    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 0)));
        check_hlds__type_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 1)));
        {
          check_hlds__type_util__V_22_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
        {
          check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__V_19_19, check_hlds__type_util__V_22_22);
        }
        if (check_hlds__type_util__succeeded)
          {
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_20_20 == (MR_Integer) 0);
            if (check_hlds__type_util__succeeded)
              {
                /* binary string simple lookup switch */
                check_hlds__type_util__lo_0 = (MR_Integer) 0;
                check_hlds__type_util__hi_1 = (MR_Integer) 3;
                do
                  {
                    check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
                    check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__Name_5, ((&check_hlds__type_util_vector_common_4[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
                    if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
                      {
                        check_hlds__type_util__succeeded = MR_TRUE;
                        /* jump out of search loop */
                        goto label_0;
                      }
                    else
                    if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
                      check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
                    else
                      check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
                  }
                while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
                check_hlds__type_util__succeeded = MR_FALSE;
              label_0:;
                if (check_hlds__type_util__succeeded)
                  {
                    switch (MR_tag((MR_Word) check_hlds__type_util__Body_4)) {
                      default:
                        check_hlds__type_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        check_hlds__type_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 7)));
                          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 0)));
                          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 1)));
                          MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 2)));
                          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 3)));
                          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 4)));
                          MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 5)));
                          MR_Word check_hlds__type_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) & (MR_Integer) 1);
                          MR_Word check_hlds__type_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word check_hlds__type_util__V_14_14;

                          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                          if (check_hlds__type_util__succeeded)
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Body_4, (MR_Integer) 0)))) {
                          default:
                            check_hlds__type_util__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            check_hlds__type_util__succeeded = MR_TRUE;
                            break;
                        }
                        break;
                    }
                    check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
                  }
              }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_f_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__HeadVar__3_3;

    {
      check_hlds__type_util__HeadVar__3_3 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    return check_hlds__type_util__HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10);
    {
      check_hlds__type_util__type_is_existq_type_2_p_0_2(check_hlds__type_util__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    {
      MR_Word check_hlds__type_util__V_11_11;
      MR_Word check_hlds__type_util__V_12_12;
      MR_Word check_hlds__type_util__V_13_13;
      MR_Integer check_hlds__type_util__V_14_14;
      MR_Word check_hlds__type_util__V_15_15;
      MR_Word check_hlds__type_util__V_7_7;
      MR_Word check_hlds__type_util__V_8_8;

      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 0)));
      check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 1)));
      check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 2)));
      check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 3)));
      check_hlds__type_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 4)));
      check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 5)));
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9)) == (MR_mktag((MR_Integer) 1)));
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
        {
          {
            check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 0)));
            check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 1)));
          }
          {
            check_hlds__type_util__type_is_existq_type_2_p_0_1(check_hlds__type_util__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
  void * check_hlds__type_util__env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10, (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, check_hlds__type_util__env_ptr);
          }
        }
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s check_hlds__type_util__env;

    {
      (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &(check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
    }
    if ((check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      {
        check_hlds__type_util__type_is_existq_type_2_p_0_4(&check_hlds__type_util__env);
      }
    return (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(
  MR_Word check_hlds__type_util__TypeTable_3,
  MR_Word check_hlds__type_util__TypeBody_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
              MR_Word check_hlds__type_util__TypeBody_11;
              MR_Word check_hlds__type_util__TypeDefn_15;
              MR_Word check_hlds__type_util__TypeCtor_19;

              {
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_19);
              }
              if (check_hlds__type_util__succeeded)
                {
                  {
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_19, &check_hlds__type_util__TypeDefn_15);
                  }
                  if (check_hlds__type_util__succeeded)
                    {
                      {
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__type_util__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                break;
            }
            break;
        }
        return check_hlds__type_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__TypeBody_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
              MR_Word check_hlds__type_util__TypeBody_11;
              MR_Word check_hlds__type_util__TypeDefn_15;
              MR_Word check_hlds__type_util__TypeTable_19;
              MR_Word check_hlds__type_util__TypeCtor_20;

              {
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_19);
              }
              {
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_20);
              }
              if (check_hlds__type_util__succeeded)
                {
                  {
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_19, check_hlds__type_util__TypeCtor_20, &check_hlds__type_util__TypeDefn_15);
                  }
                  if (check_hlds__type_util__succeeded)
                    {
                      {
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__type_util__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                break;
            }
            break;
        }
        return check_hlds__type_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_from_type_table_2_p_0(
  MR_Word check_hlds__type_util__TypeTable_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeBody_5;
    MR_Word check_hlds__type_util__TypeDefn_9;
    MR_Word check_hlds__type_util__TypeCtor_13;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_13);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_13, &check_hlds__type_util__TypeDefn_9);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
            {
              check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeBody_5);
            }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeBody_5;
    MR_Word check_hlds__type_util__TypeDefn_9;
    MR_Word check_hlds__type_util__TypeTable_13;
    MR_Word check_hlds__type_util__TypeCtor_14;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_13);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_14);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_13, check_hlds__type_util__TypeCtor_14, &check_hlds__type_util__TypeDefn_9);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
            {
              check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_5);
            }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_has_solver_type_details_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;

        if (((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__Type_5, (MR_Integer) 0)));
            MR_Word check_hlds__type_util__TypeBody_12;
            MR_Word check_hlds__type_util__TypeDefn_16;
            MR_Word check_hlds__type_util__TypeTable_20;
            MR_Word check_hlds__type_util__TypeCtor_21;

            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_20);
            }
            {
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__EqvType_8, &check_hlds__type_util__TypeCtor_21);
            }
            if (check_hlds__type_util__succeeded)
              {
                {
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_20, check_hlds__type_util__TypeCtor_21, &check_hlds__type_util__TypeDefn_16);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_12);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__type_util__Type__tmp_copy_5 = check_hlds__type_util__TypeBody_12;

                      check_hlds__type_util__Type_5 = check_hlds__type_util__Type__tmp_copy_5;
                    }
                    continue;
                  }
              }
          }
        else
        if (((((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            MR_Word check_hlds__type_util___MaybeUserEqComp_7;

            *check_hlds__type_util__SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 1)));
            check_hlds__type_util___MaybeUserEqComp_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 2)));
            check_hlds__type_util__succeeded = MR_TRUE;
          }
        else
          check_hlds__type_util__succeeded = MR_FALSE;
        return check_hlds__type_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__type_util__type_has_solver_type_details_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeBody_7;
    MR_Word check_hlds__type_util__TypeDefn_11;
    MR_Word check_hlds__type_util__TypeTable_15;
    MR_Word check_hlds__type_util__TypeCtor_16;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
            {
              check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__SolverTypeDetails_6);
            }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_util__succeeded;

        {
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__type_util__Type_4);
        }
        if (!(check_hlds__type_util__succeeded))
          {
            MR_Word check_hlds__type_util__TypeBody_5;
            MR_Word check_hlds__type_util__TypeDefn_13;
            MR_Word check_hlds__type_util__TypeTable_17;
            MR_Word check_hlds__type_util__TypeCtor_18;

            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_17);
            }
            {
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_18);
            }
            if (check_hlds__type_util__succeeded)
              {
                {
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_17, check_hlds__type_util__TypeCtor_18, &check_hlds__type_util__TypeDefn_13);
                }
                if (check_hlds__type_util__succeeded)
                  {
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_5);
                    }
                    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
                      default:
                        check_hlds__type_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));

                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_8;

                            check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
                          }
                          continue;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            check_hlds__type_util__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

                              check_hlds__type_util__succeeded = (check_hlds__type_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                            }
                            break;
                        }
                        break;
                    }
                  }
              }
          }
        return check_hlds__type_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__VarTypes_5,
  MR_Word check_hlds__type_util__Var_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__VarType_7;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_5, check_hlds__type_util__Var_6, &check_hlds__type_util__VarType_7);
    }
    {
      check_hlds__type_util__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__VarType_7);
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__V_6_6;
    MR_Word check_hlds__type_util__V_5_5;

    {
      check_hlds__type_util__V_6_6 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
    {
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, check_hlds__type_util__V_6_6, &check_hlds__type_util__V_5_5);
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__TypeBody_5,
  MR_Word * check_hlds__type_util__UserEqComp_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__Globals_7;
    MR_Word check_hlds__type_util__Target_8;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_7);
    }
    {
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_7, &check_hlds__type_util__Target_8);
    }
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
      default:
        check_hlds__type_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__type_util__ForeignTypeBody_24 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_5), (MR_Integer) 0);

          {
            check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_24, check_hlds__type_util__UserEqComp_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__type_util__ForeignTypeBody_18;
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));
          MR_Word check_hlds__type_util__V_22_22;
          MR_Word check_hlds__type_util__V_41_41;
          MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
          MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
          MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
          MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
          MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
          MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
          MR_Word check_hlds__type_util__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__type_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__type_util__succeeded)
            {
              check_hlds__type_util__ForeignTypeBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
              check_hlds__type_util__V_22_22 = (MR_Integer) 1;
              {
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_8, check_hlds__type_util__ForeignTypeBody_18, &check_hlds__type_util__V_41_41);
              }
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_22_22 == check_hlds__type_util__V_41_41);
            }
          if (check_hlds__type_util__succeeded)
            {
              check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_18, check_hlds__type_util__UserEqComp_6);
            }
          else
            {
              MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
              MR_Word check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
              MR_Word check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
              MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
              MR_Word check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));

              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__type_util__succeeded)
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_23_23, (MR_Integer) 0)));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
              MR_Word check_hlds__type_util___SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__type_util__succeeded)
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_20_20, (MR_Integer) 0)));
            }
            break;
        }
        break;
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__UserEqComp_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeBody_7;
    MR_Word check_hlds__type_util__TypeDefn_11;
    MR_Word check_hlds__type_util__TypeTable_15;
    MR_Word check_hlds__type_util__TypeCtor_16;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
            {
              check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__UserEqComp_6);
            }
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_from_type_table_3_p_0(
  MR_Word check_hlds__type_util__TypeTable_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__TypeBody_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeDefn_7;
    MR_Word check_hlds__type_util__TypeCtor_11;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_11);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_11, &check_hlds__type_util__TypeDefn_7);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
            check_hlds__type_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__TypeBody_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeDefn_7;
    MR_Word check_hlds__type_util__TypeTable_11;
    MR_Word check_hlds__type_util__TypeCtor_12;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_11);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_12);
    }
    if (check_hlds__type_util__succeeded)
      {
        {
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, check_hlds__type_util__TypeCtor_12, &check_hlds__type_util__TypeDefn_7);
        }
        if (check_hlds__type_util__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
            check_hlds__type_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_from_type_table_3_p_0(
  MR_Word check_hlds__type_util__TypeTable_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__TypeDefn_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_7;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_7, check_hlds__type_util__TypeDefn_6);
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_3_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_4,
  MR_Word check_hlds__type_util__Type_5,
  MR_Word * check_hlds__type_util__TypeDefn_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeTable_7;
    MR_Word check_hlds__type_util__TypeCtor_8;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_7);
    }
    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_8);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_7, check_hlds__type_util__TypeCtor_8, check_hlds__type_util__TypeDefn_6);
      }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_ctor_is_atomic_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__TypeCtor_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCategory_5;

    {
      check_hlds__type_util__TypeCategory_5 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_4);
    }
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) {
      default:
        check_hlds__type_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_5)) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            check_hlds__type_util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            check_hlds__type_util__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        check_hlds__type_util__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        check_hlds__type_util__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 0)))) {
          default:
            check_hlds__type_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 1)));

              check_hlds__type_util__succeeded = (check_hlds__type_util__V_15_15 == (MR_Integer) 0);
            }
            break;
        }
        break;
    }
    return check_hlds__type_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_atomic_2_p_0(
  MR_Word check_hlds__type_util__ModuleInfo_3,
  MR_Word check_hlds__type_util__Type_4)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeCtor_5;

    {
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_5);
    }
    if (check_hlds__type_util__succeeded)
      {
        check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_5);
      }
    return check_hlds__type_util__succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__type_ctor_module_name_arity_4_p_0(
  MR_Word check_hlds__type_util__HeadVar__1_1,
  MR_Word * check_hlds__type_util__ModuleName_7,
  MR_String * check_hlds__type_util__Name_8,
  MR_Integer * check_hlds__type_util__Arity_6)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

    *check_hlds__type_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
    {
      mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(check_hlds__type_util__TypeSymName_5, (MR_Word) &check_hlds__type_util_scalar_common_3[0], check_hlds__type_util__ModuleName_7, check_hlds__type_util__Name_8);
    }
  }
}

MR_Integer MR_CALL 
check_hlds__type_util__type_ctor_arity_1_f_0(
  MR_Word check_hlds__type_util__HeadVar__1_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Integer check_hlds__type_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__type_util___TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

    return check_hlds__type_util__Arity_4;
  }
}

MR_String MR_CALL 
check_hlds__type_util__type_ctor_name_1_f_0(
  MR_Word check_hlds__type_util__HeadVar__1_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_String check_hlds__type_util__HeadVar__2_2;
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

    {
      check_hlds__type_util__HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__type_util__TypeSymName_3);
    }
    return check_hlds__type_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__type_ctor_module_1_f_0(
  MR_Word check_hlds__type_util__HeadVar__1_1)
{
  {
    MR_bool check_hlds__type_util__succeeded;
    MR_Word check_hlds__type_util__ModuleName_5;
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

    {
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(check_hlds__type_util__TypeSymName_3, (MR_Word) &check_hlds__type_util_scalar_common_3[0], &check_hlds__type_util__ModuleName_5);
    }
    return check_hlds__type_util__ModuleName_5;
  }
}

void mercury__check_hlds__type_util__init(void)
{
}

void mercury__check_hlds__type_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0);
	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0);
}

void mercury__check_hlds__type_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.type_util. */
