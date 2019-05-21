/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version rotd-2018-05-09
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


// :- module check_hlds.type_util.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_43_43;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_44_44;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_45_45;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Name_20;
  MR_Integer check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Arity_22;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__CtorTable_24;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_28;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__MaybeExistConstraints_30;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_31;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_33;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_34;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_36;
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Ctor_18;
};

struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9;
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__type_util__check_hlds__type_util__field_types_ctor_defn_0_0[5];

static const MR_ConstString check_hlds__type_util__check_hlds__type_util__field_names_ctor_defn_0_0[5];

static const MR_DuFunctorDesc check_hlds__type_util__check_hlds__type_util__du_functor_desc_ctor_defn_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_util__check_hlds__type_util__du_stag_ordered_ctor_defn_0_0[1];

static const MR_DuPtagLayout check_hlds__type_util__check_hlds__type_util__du_ptag_ordered_ctor_defn_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_util__check_hlds__type_util__du_name_ordered_ctor_defn_0[1];

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_ctor_defn_0[1];

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

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0;

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1;

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_either_dummy_type_0[2];

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2];

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_either_dummy_type_0[2];

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__2_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__646__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1546__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1533__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_bool MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__cons_id_adjusted_arity__1491__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_22,
  MR_Integer NumTypeInfos_25);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1432__1_1_f_0(
  MR_Word LambdaHeadVar__1_23);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1378__1_1_f_0(
  MR_Word LambdaHeadVar__1_37);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__1210__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_18);

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6);

static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_14,
  MR_Word * STATE_VARIABLE_SeenTypes_15);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * ConsIdConsRepn_8);

static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
  void * env_ptr_arg);

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_28,
  MR_Word * STATE_VARIABLE_SeenTypes_29);

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Types_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_8,
  MR_Word * STATE_VARIABLE_SeenTypes_9);

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[9][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[28][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_4[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[4][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[1][8];


/* sealed */ struct check_hlds__type_util__vector_common_type_6_0_s {
  const MR_String check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4];

/* sealed */ struct check_hlds__type_util__vector_common_type_7_0_s {
  const MR_Word check_hlds__type_util__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_7_0_s check_hlds__type_util_vector_common_7[4];

/* sealed */ struct check_hlds__type_util__vector_common_type_8_0_s {
  const MR_String check_hlds__type_util__vector_common_type_8_0__vct_8_f_0;
  const MR_Integer check_hlds__type_util__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_8_0_s check_hlds__type_util_vector_common_8[4];



static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__cons_id_arg_types_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[2])),
    ((MR_Box) (check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[2])),
    ((MR_Box) (check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[28][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "store"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_4[10][6] = {
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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
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
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[2][7] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[4][5] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
};


static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_7_0_s check_hlds__type_util_vector_common_7[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_8_0_s check_hlds__type_util_vector_common_8[4] = {
  /* row 0 */
  {
    (MR_String) "int16",
    (MR_Integer) 65536
  },
  /* row 1 */
  {
    (MR_String) "int8",
    (MR_Integer) 256
  },
  /* row 2 */
  {
    (MR_String) "uint16",
    (MR_Integer) 65536
  },
  /* row 3 */
  {
    (MR_String) "uint8",
    (MR_Integer) 256
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__type_util__check_hlds__type_util__field_types_ctor_defn_0_0[5] = {
  (MR_PseudoTypeInfo) &check_hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_ConstString check_hlds__type_util__check_hlds__type_util__field_names_ctor_defn_0_0[5] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_maybe_exist",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

static const MR_DuFunctorDesc check_hlds__type_util__check_hlds__type_util__du_functor_desc_ctor_defn_0_0 = {
  (MR_String) "ctor_defn",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_util__check_hlds__type_util__field_types_ctor_defn_0_0,
  check_hlds__type_util__check_hlds__type_util__field_names_ctor_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__type_util__check_hlds__type_util__du_stag_ordered_ctor_defn_0_0[1] = {
  &check_hlds__type_util__check_hlds__type_util__du_functor_desc_ctor_defn_0_0
};

static const MR_DuPtagLayout check_hlds__type_util__check_hlds__type_util__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_util__check_hlds__type_util__du_stag_ordered_ctor_defn_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_util__check_hlds__type_util__du_name_ordered_ctor_defn_0[1] = {
  &check_hlds__type_util__check_hlds__type_util__du_functor_desc_ctor_defn_0_0
};

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_util____Unify____ctor_defn_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____ctor_defn_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "ctor_defn",
  {     check_hlds__type_util__check_hlds__type_util__du_name_ordered_ctor_defn_0 },
  {     check_hlds__type_util__check_hlds__type_util__du_ptag_ordered_ctor_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_ctor_defn_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0 = {
  (MR_String) "at_least_one_is_dummy_type",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1 = {
  (MR_String) "neither_is_dummy_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_either_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_either_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_either_dummy_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____is_either_dummy_type_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____is_either_dummy_type_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "is_either_dummy_type",
  {     check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_either_dummy_type_0 },
  {     check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_either_dummy_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_is_either_dummy_type_0
};

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__2_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 0)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 2)));

    return LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 0)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 2)));

    return LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__646__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 0)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 2)));

    return LambdaHeadVar__2_19;
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_46;
    MR_Word L0_15;
    MR_Word L_16;
    MR_Word Var_42;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_31_31, LambdaHeadVar__1_25, &L0_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, L0_15, &L_16);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_31_31, L_16, LambdaHeadVar__2_26);
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_46;
    MR_Word L0_15;
    MR_Word L_16;
    MR_Word Var_42;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_31_31, LambdaHeadVar__1_25, &L0_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, L0_15, &L_16);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_31_31, L_16, LambdaHeadVar__2_26);
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_54;
    MR_Word L0_16;
    MR_Word L_17;
    MR_Word Var_50;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_37_37, LambdaHeadVar__1_25, &L0_16);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_54, TypeCtorInfo_12_54, Var_50, L0_16, &L_17);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_37_37, L_17, LambdaHeadVar__2_26);
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1546__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;

    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 0) = ((MR_Box) (LambdaHeadVar__1_14));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1533__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20;

    {
      LambdaHeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_20, 0) = ((MR_Box) (LambdaHeadVar__1_19));
    }
    return LambdaHeadVar__2_20;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__cons_id_adjusted_arity__1491__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_22,
  MR_Integer NumTypeInfos_25)
{
  {
    MR_bool succeeded = (NumTypeInfos_25 == NumUnconstrainedExistQTVarsEC_22);

    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1432__1_1_f_0(
  MR_Word LambdaHeadVar__1_23)
{
  {
    MR_Word LambdaHeadVar__2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 2)));

    return LambdaHeadVar__2_24;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1378__1_1_f_0(
  MR_Word LambdaHeadVar__1_37)
{
  {
    MR_Word LambdaHeadVar__2_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_37, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_37, (MR_Integer) 0)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_37, (MR_Integer) 2)));

    return LambdaHeadVar__2_38;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__1210__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19;

    {
      LambdaHeadVar__2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_19, 1) = ((MR_Box) (LambdaHeadVar__1_18));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_19, 2) = ((MR_Box) (Context_10));
    }
    return LambdaHeadVar__2_19;
  }
}

void MR_CALL 
check_hlds__type_util____Compare____is_either_dummy_type_0_0(
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
check_hlds__type_util____Unify____is_either_dummy_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0(
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
check_hlds__type_util____Unify____is_dummy_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
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
check_hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_util____Compare____ctor_defn_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[7], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_2[1], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          parse_tree__prog_data____Compare____maybe_cons_exist_constraints_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[8], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_util____Unify____ctor_defn_0_0(
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
      MR_Word TypeInfo_16_16;
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[7], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &check_hlds__type_util_scalar_common_2[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &check_hlds__type_util_scalar_common_1[8];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  {
    MR_Word Constraint_10;
    MR_Word Proof_12;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
    if (((MR_tag((MR_Word) Proof0_8)) == (MR_mktag((MR_Integer) 0))))
      Proof_12 = Proof0_8;
    else
    {
      MR_Word Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Proof0_8, (MR_Integer) 0)));
      MR_Word Super_14;

      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
      {
        Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Proof_12, 0) = ((MR_Box) (Super_14));
      }
    }
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  {
    MR_Word Constraint_10;
    MR_Word Proof_12;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
    if (((MR_tag((MR_Word) Proof0_8)) == (MR_mktag((MR_Integer) 0))))
      Proof_12 = Proof0_8;
    else
    {
      MR_Word Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Proof0_8, (MR_Integer) 0)));
      MR_Word Super_14;

      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
      {
        Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Proof_12, 0) = ((MR_Box) (Super_14));
      }
    }
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
  }
}

static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6)
{
  if (((MR_tag((MR_Word) Proof0_5)) == (MR_mktag((MR_Integer) 0))))
    *Proof_6 = Proof0_5;
  else
  {
    MR_Word ClassConstraint0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Proof0_5, (MR_Integer) 0)));
    MR_Word ClassConstraint_9;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(TSubst_4, ClassConstraint0_8, &ClassConstraint_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *Proof_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassConstraint_9));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Type_5;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_4, &Type_5);
    succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SeenTypes_29;

    succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_SeenTypes_29);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SeenTypes_29));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_19;

    conv0_LambdaHeadVar__2_19 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__646__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_14,
  MR_Word * STATE_VARIABLE_SeenTypes_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_30_30;
    MR_Word Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2)));
    MR_Word ArgTypes_12;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 0)));
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 1)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4)));
    MR_Box conv2_STATE_VARIABLE_SeenTypes_15;

    succeeded = (Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
      TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      Var_17 = (MR_Word) &check_hlds__type_util_scalar_common_2[8];
      ArgTypes_12 = mercury__list__map_2_f_0(TypeCtorInfo_25_25, TypeCtorInfo_26_26, Var_17, Args_9);
      TypeInfo_30_30 = (MR_Word) &check_hlds__type_util_scalar_common_1[6];
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_5));
      }
      succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_26_26, TypeInfo_30_30, Var_20, ArgTypes_12, ((MR_Box) (STATE_VARIABLE_SeenTypes_0_14)), &conv2_STATE_VARIABLE_SeenTypes_15);
      if (succeeded)
      {
        *STATE_VARIABLE_SeenTypes_15 = ((MR_Word) conv2_STATE_VARIABLE_SeenTypes_15);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProofMap_16;

    check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_ProofMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  {
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_ProofMap_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0;
    Var_8 = mercury__map__init_0_f_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14);
    mercury__map__foldl_4_p_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
    *ProofMap_6 = ((MR_Word) conv1_ProofMap_6);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProofMap_16;

    check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_ProofMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  {
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_ProofMap_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0;
    Var_8 = mercury__map__init_0_f_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14);
    mercury__map__foldl_4_p_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
    *ProofMap_6 = ((MR_Word) conv1_ProofMap_6);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Proof_6;

    check_hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Proof_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Proof_6));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, ProofMap0_5);
    if (succeeded)
      *ProofMap_6 = ProofMap0_5;
    else
    {
      MR_Word TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
      MR_Word TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0;
      MR_Word Keys0_7;
      MR_Word Values0_8;
      MR_Word Keys_9;
      MR_Word Values_10;
      MR_Word Var_11;

      mercury__map__keys_2_p_0(TypeCtorInfo_14_14, TypeCtorInfo_15_15, ProofMap0_5, &Keys0_7);
      mercury__map__values_2_p_0(TypeCtorInfo_14_14, TypeCtorInfo_15_15, ProofMap0_5, &Values0_8);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_4, Keys0_7, &Keys_9);
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[7]));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Renaming_4));
      }
      mercury__list__map_3_p_0(TypeCtorInfo_15_15, TypeCtorInfo_15_15, Var_11, Values0_8, &Values_10);
      mercury__map__from_corresponding_lists_3_p_0(TypeCtorInfo_14_14, TypeCtorInfo_15_15, Keys_9, Values_10, ProofMap_6);
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_26;

    check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1688__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_23,
  MR_Word * STATE_VARIABLE_Constraints_24)
{
  {
    MR_Word TypeInfo_32_32;
    MR_Word TypeCtorInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeCtorInfo_12_46;
    MR_Word TypeCtorInfo_12_55;
    MR_Word Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word Unproven_10;
    MR_Word Assumed_11;
    MR_Word Pred_12;
    MR_Word Redundant_17;
    MR_Word AncestorsKeys0_18;
    MR_Word AncestorsValues0_19;
    MR_Word AncestorsKeys_20;
    MR_Word AncestorsValues_21;
    MR_Word Ancestors_22;
    MR_Word Var_27;
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, Unproven0_6, &Unproven_10);
    TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_55, TypeCtorInfo_12_55, Var_42, Assumed0_7, &Assumed_11);
    {
      Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Pred_12, 3) = ((MR_Box) (Subst_4));
    }
    TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    mercury__map__map_values_only_3_p_0(TypeInfo_32_32, TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_12, Redundant0_8, &Redundant_17);
    TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
    mercury__map__keys_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsKeys0_18);
    mercury__map__values_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsValues0_19);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0(TypeInfo_35_35, TypeInfo_35_35, Var_27, AncestorsValues0_19, &AncestorsValues_21);
    mercury__map__from_corresponding_lists_3_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_22));
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_26;

    check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1668__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_23,
  MR_Word * STATE_VARIABLE_Constraints_24)
{
  {
    MR_Word TypeInfo_32_32;
    MR_Word TypeCtorInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeCtorInfo_12_46;
    MR_Word TypeCtorInfo_12_55;
    MR_Word Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word Unproven_10;
    MR_Word Assumed_11;
    MR_Word Pred_12;
    MR_Word Redundant_17;
    MR_Word AncestorsKeys0_18;
    MR_Word AncestorsValues0_19;
    MR_Word AncestorsKeys_20;
    MR_Word AncestorsValues_21;
    MR_Word Ancestors_22;
    MR_Word Var_27;
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, Unproven0_6, &Unproven_10);
    TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_55, TypeCtorInfo_12_55, Var_42, Assumed0_7, &Assumed_11);
    {
      Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Pred_12, 3) = ((MR_Box) (Subst_4));
    }
    TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    mercury__map__map_values_only_3_p_0(TypeInfo_32_32, TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_12, Redundant0_8, &Redundant_17);
    TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
    mercury__map__keys_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsKeys0_18);
    mercury__map__values_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsValues0_19);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0(TypeInfo_35_35, TypeInfo_35_35, Var_27, AncestorsValues0_19, &AncestorsValues_21);
    mercury__map__from_corresponding_lists_3_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_22));
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_26;

    check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1638__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_23,
  MR_Word * STATE_VARIABLE_Constraints_24)
{
  {
    MR_bool succeeded;
    MR_Word Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
    MR_Word Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
    MR_Word Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
    MR_Word Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeCtorInfo_33_33;
    MR_Word TypeInfo_34_34;

    succeeded = (Unproven0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (Assumed0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
        TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_31_31, TypeInfo_32_32, Redundant0_8);
        if (succeeded)
        {
          TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
          TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
          succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_33_33, TypeInfo_34_34, Ancestors0_9);
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Constraints_24 = STATE_VARIABLE_Constraints_0_23;
    else
    {
      MR_Word TypeCtorInfo_12_54;
      MR_Word TypeCtorInfo_12_63;
      MR_Word Unproven_10;
      MR_Word Assumed_11;
      MR_Word Redundant_12;
      MR_Word Ancestors_18;
      MR_Word Var_50;

      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Renaming_4));
      }
      TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
      mercury__list__map_3_p_0(TypeCtorInfo_12_54, TypeCtorInfo_12_54, Var_50, Unproven0_6, &Unproven_10);
      TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
      mercury__list__map_3_p_0(TypeCtorInfo_12_63, TypeCtorInfo_12_63, Var_50, Assumed0_7, &Assumed_11);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], Redundant0_8);
      if (succeeded)
        Redundant_12 = Redundant0_8;
      else
      {
        MR_Word TypeInfo_38_38;
        MR_Word Pred_13;

        {
          Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
          MR_hl_field(MR_mktag(0), Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Pred_13, 3) = ((MR_Box) (Renaming_4));
        }
        TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
        mercury__map__map_values_only_3_p_0(TypeInfo_38_38, TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_13, Redundant0_8, &Redundant_12);
      }
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[5], Ancestors0_9);
      if (succeeded)
        Ancestors_18 = Ancestors0_9;
      else
      {
        MR_Word TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        MR_Word TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
        MR_Word AncestorsKeys0_19;
        MR_Word AncestorsValues0_20;
        MR_Word AncestorsKeys_21;
        MR_Word AncestorsValues_22;
        MR_Word Var_27;

        mercury__map__keys_2_p_0(TypeCtorInfo_42_42, TypeInfo_43_43, Ancestors0_9, &AncestorsKeys0_19);
        mercury__map__values_2_p_0(TypeCtorInfo_42_42, TypeInfo_43_43, Ancestors0_9, &AncestorsValues0_20);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_4, AncestorsKeys0_19, &AncestorsKeys_21);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3));
          MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0(TypeInfo_43_43, TypeInfo_43_43, Var_27, AncestorsValues0_20, &AncestorsValues_22);
        mercury__map__from_corresponding_lists_3_p_0(TypeCtorInfo_42_42, TypeInfo_43_43, AncestorsKeys_21, AncestorsValues_22, &Ancestors_18);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Constraints_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_18));
      }
    }
  }
}

static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_11;

    check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Constraint_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  {
    MR_Word Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word ArgTypes_9;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypes_9));
    }
  }
}

void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  {
    MR_Word Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word ArgTypes_9;

    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypes_9));
    }
  }
}

void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  {
    MR_Word Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
    MR_Word ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
    MR_Word ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
    MR_Word ArgTypes_9;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_4, ArgTypes0_8, &ArgTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ids_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypes_9));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(
  MR_Word VarTypes_4,
  MR_Word VarsSet0_5)
{
  {
    MR_bool succeeded;
    MR_Word VarsSet_6;
    MR_Word TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word VarsList0_7;
    MR_Word VarsList_8;
    MR_Word Var_13;

    VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_9_9, VarsSet0_5);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[3], Var_13, VarsList0_7, &VarsList_8);
    VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(TypeCtorInfo_9_9, VarsList_8);
    return VarsSet_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0(
  MR_Word VarTypes_4,
  MR_Word VarsSet0_5)
{
  {
    MR_bool succeeded;
    MR_Word VarsSet_6;
    MR_Word TypeInfo_9_9 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
    MR_Word VarsList0_7;
    MR_Word VarsList_8;
    MR_Word Var_13;

    VarsList0_7 = mercury__set__to_sorted_list_1_f_0(TypeInfo_9_9, VarsSet0_5);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[3], Var_13, VarsList0_7, &VarsList_8);
    VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(TypeInfo_9_9, VarsList_8);
    return VarsSet_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0(
  MR_Word VarTypes_4,
  MR_Word VarsList_5)
{
  {
    MR_bool succeeded;
    MR_Word NonTypeInfoVarsList_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[3], Var_7, VarsList_5, &NonTypeInfoVarsList_6);
    return NonTypeInfoVarsList_6;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0(
  MR_Word VarsList_4,
  MR_Word VarTypes_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeInfoVarsList_6;
    MR_Word NonTypeInfoVarsList_7;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_5));
    }
    mercury__list__filter_4_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[3], Var_13, VarsList_4, &TypeInfoVarsList_6, &NonTypeInfoVarsList_7);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_util_scalar_common_1[3], TypeInfoVarsList_6, NonTypeInfoVarsList_7);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_15;

    conv0_LambdaHeadVar__2_15 = check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1546__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(
  MR_Word MaybeType_4,
  MR_Integer Arity_5,
  MR_Word * MaybeTypes_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeType_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ArgTypes_11;
    MR_Word Type_7;
    MR_Word Var_8;
    MR_Word Var_9;

    if (succeeded)
    {
      Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_4, (MR_Integer) 0)));
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_8, &Var_9, &ArgTypes_11);
    }
    if (succeeded)
    {
      *MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[2], (MR_Word) &check_hlds__type_util_scalar_common_2[7], ArgTypes_11);
    }
    else
    {
      mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Arity_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), MaybeTypes_6);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1533__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeType_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word * MaybeTypes_10)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word Types_16;
      MR_Word TypeCtorInfo_23_23;
      MR_Word Type_15;
      MR_Integer Var_27;

      succeeded = ((MR_tag((MR_Word) MaybeType_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_7, (MR_Integer) 0)));
        succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_15, ConsId_8, &Types_16);
        if (succeeded)
        {
          TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__list__length_2_p_0(TypeCtorInfo_23_23, Types_16, &Var_27);
          succeeded = (Arity_9 == Var_27);
        }
      }
      if (succeeded)
      {
        *MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[2], (MR_Word) &check_hlds__type_util_scalar_common_2[6], Types_16);
      }
      else
      {
        mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Arity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), MaybeTypes_10);
      }
    }
    else
      *MaybeTypes_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
check_hlds__type_util__is_region_var_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Type_5;
    MR_Word Var_6;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_4, &Type_5);
    Var_6 = parse_tree__builtin_lib_types__region_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_not_stored_in_region_2_p_0(
  MR_Word Type_3,
  MR_Word ModuleInfo_4)
{
  {
    MR_bool succeeded;

    {
      MR_Word TypeCtor_12;

      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_3, &TypeCtor_12);
      if (succeeded)
        succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(ModuleInfo_4, TypeCtor_12);
    }
    if (!(succeeded))
    {
      {
        MR_Word Var_5;
        MR_Word TypeTable_16;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_16);
        Var_5 = check_hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_16, Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        succeeded = (Var_5 == (MR_Integer) 0);
      }
      if (!(succeeded))
      {
        {
          MR_Word Var_6;

          Var_6 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_6);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_7;

            Var_7 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_7);
          }
          if (!(succeeded))
            succeeded = parse_tree__prog_type__type_is_var_1_p_0(Type_3);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__IntroducedFrom__pred__cons_id_adjusted_arity__1491__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

MR_Integer MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7)
{
  {
    MR_bool succeeded;
    MR_Integer AdjustedArity_8;
    MR_Integer ConsArity_9;
    MR_Word ConsDefn_10;

    ConsArity_9 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_7);
    succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_5, Type_6, ConsId_7, &ConsDefn_10);
    if (succeeded)
    {
      MR_Word MaybeExistConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 2)));
      MR_Word _TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 0)));
      MR_Word _KindMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 1)));
      MR_Word _ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 3)));
      MR_Word _ResultType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 4)));

      if ((MaybeExistConstraints_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        AdjustedArity_8 = ConsArity_9;
      else
      {
        MR_Word TypeInfo_31_31;
        MR_Word ExistConstraints_16 = (MR_Word) MR_body(((MR_Word) MaybeExistConstraints_13), (MR_Integer) 1);
        MR_Word ExistQTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 0)));
        MR_Word Constraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 1)));
        MR_Word UnconstrainedExistQTVarsEC_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 2)));
        MR_Integer NumTypeClassInfos_21;
        MR_Integer NumUnconstrainedExistQTVarsEC_22;
        MR_Word ConstrainedTVars_23;
        MR_Word UnconstrainedExistQTVars_24;
        MR_Integer NumTypeInfos_25;
        MR_Integer Var_26;
        MR_Word Var_27;
        MR_Word _ConstrainedExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 3)));

        mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Constraints_18, &NumTypeClassInfos_21);
        TypeInfo_31_31 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
        mercury__list__length_2_p_0(TypeInfo_31_31, UnconstrainedExistQTVarsEC_19, &NumUnconstrainedExistQTVarsEC_22);
        parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_18, &ConstrainedTVars_23);
        mercury__list__delete_elems_3_p_0(TypeInfo_31_31, ExistQTVars_17, ConstrainedTVars_23, &UnconstrainedExistQTVars_24);
        mercury__list__length_2_p_0(TypeInfo_31_31, UnconstrainedExistQTVars_24, &NumTypeInfos_25);
        Var_26 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_25 + (MR_Unsigned) NumTypeClassInfos_21);
        AdjustedArity_8 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) ConsArity_9);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__type_util__cons_id_adjusted_arity_3_f_0_1));
          MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (NumUnconstrainedExistQTVarsEC_22));
          MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (NumTypeInfos_25));
        }
        mercury__require__expect_3_p_0(Var_27, (MR_String) "function \140check_hlds.type_util.cons_id_adjusted_arity\'/3", (MR_String) "NumTypeInfos != NumUnconstrainedExistQTVars");
      }
    }
    else
      AdjustedArity_8 = ConsArity_9;
    return AdjustedArity_8;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word _Ctor_5;
    MR_Word _ArgType_6;

    succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_3, Type_4, &_Ctor_5, &_ArgType_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * Ctor_7,
  MR_Word * ArgType_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtor_9;
    MR_Word TypeArgs_10;
    MR_Word NoTagTypes_11;
    MR_Word NoTagType_12;
    MR_Word TypeParams_13;
    MR_Word ArgType0_14;
    MR_Box conv0_NoTagType_12;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &TypeArgs_10);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_no_tag_types_2_p_0(ModuleInfo_5, &NoTagTypes_11);
      TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
      TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0;
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_18_18, TypeCtorInfo_19_19, NoTagTypes_11, ((MR_Box) (TypeCtor_9)), &conv0_NoTagType_12);
      if (succeeded)
      {
        NoTagType_12 = ((MR_Word) conv0_NoTagType_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagType_12, (MR_Integer) 0)));
        *Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagType_12, (MR_Integer) 1)));
        ArgType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagType_12, (MR_Integer) 2)));
        if ((TypeParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ArgType_8 = ArgType0_14;
        else
        {
          MR_Word Subn_17;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_13, TypeArgs_10, &Subn_17);
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subn_17, ArgType0_14, ArgType_8);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__cons_id_is_existq_cons_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarType_5,
  MR_Word ConsId_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_Word TypeCtor_12;
    MR_Word Var_14;
    MR_Word Ctors_25;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_13;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_5, &TypeCtor_12);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_4, &Ctors_25);
      succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_25, TypeCtor_12, ConsId_6, &Var_7);
      if (succeeded)
      {
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 3)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 4)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 5)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 6)));
        succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_13 = (MR_Word) MR_body(((MR_Word) Var_14), (MR_Integer) 1);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_24;

    conv0_LambdaHeadVar__2_24 = check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1432__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
    return wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarType_6,
  MR_Word ConsId_7,
  MR_Word * CtorDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeCtorInfo_29_29;
    MR_Word ConsDefn_9;
    MR_Word TypeVarSet_11;
    MR_Word TypeParams_12;
    MR_Word KindMap_13;
    MR_Word MaybeExistConstraints_14;
    MR_Word Args_15;
    MR_Word ArgTypes_17;
    MR_Word TypeCtorArgs_19;
    MR_Word TypeCtor_20;
    MR_Word RetType_21;
    MR_Word Var_22;
    MR_Word TypeCtor_34;
    MR_Word Ctors_47;
    MR_Word _TypeCtor_10;
    MR_Word _Context_16;
    MR_Word Var_35;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_6, &TypeCtor_34);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_47);
      succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_47, TypeCtor_34, ConsId_7, &ConsDefn_9);
      if (succeeded)
      {
        _TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 0)));
        TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 1)));
        TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 2)));
        KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 3)));
        MaybeExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 4)));
        Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 5)));
        _Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 6)));
        succeeded = ((MR_tag((MR_Word) MaybeExistConstraints_14)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_35 = (MR_Word) MR_body(((MR_Word) MaybeExistConstraints_14), (MR_Integer) 1);
          TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
          TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          Var_22 = (MR_Word) &check_hlds__type_util_scalar_common_2[5];
          ArgTypes_17 = mercury__list__map_2_f_0(TypeCtorInfo_28_28, TypeCtorInfo_29_29, Var_22, Args_15);
          parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_13, TypeParams_12, &TypeCtorArgs_19);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_6, &TypeCtor_20);
          if (succeeded)
          {
            parse_tree__prog_type__construct_type_3_p_0(TypeCtor_20, TypeCtorArgs_19, &RetType_21);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *CtorDefn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeVarSet_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (KindMap_13));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeExistConstraints_14));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgTypes_17));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RetType_21));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__get_cons_repn_defn_det_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * ConsRepnDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word ConsRepnDefnPrime_7;

    succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_4, ConsId_5, &ConsRepnDefnPrime_7);
    if (succeeded)
      *ConsRepnDefn_6 = ConsRepnDefnPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_util.get_cons_repn_defn_det\'/3", (MR_String) "get_cons_repn_defn failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_cons_repn_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * ConsIdConsRepn_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ConsSymName_7;
    MR_Integer ConsArity_8;
    MR_Word TypeCtor_9;
    MR_Word TypeTable_10;
    MR_Word TypeDefn_11;
    MR_Word TypeBody_12;
    MR_Word MaybeRepn_15;
    MR_Word Repn_17;
    MR_Word ConsRepnMap_19;
    MR_String ConsName_23;
    MR_Word MatchingConsRepns_24;
    MR_Word HeadConsRepn_25;
    MR_Word TailConsRepns_26;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv0_MatchingConsRepns_24;

    if (succeeded)
    {
      ConsSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));
      ConsArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2)));
      TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 3)));
      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_10);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_9, &TypeDefn_11);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
        succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 0)));
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 1)));
          MaybeRepn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 2)));
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) MaybeRepn_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Repn_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn_15, (MR_Integer) 0)));
            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_17, (MR_Integer) 0)));
            ConsRepnMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_17, (MR_Integer) 1)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_17, (MR_Integer) 2)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_17, (MR_Integer) 3)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_17, (MR_Integer) 4)));
            ConsName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsSymName_7);
            TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            TypeInfo_28_28 = (MR_Word) &check_hlds__type_util_scalar_common_1[1];
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_27_27, TypeInfo_28_28, ConsRepnMap_19, ((MR_Box) (ConsName_23)), &conv0_MatchingConsRepns_24);
            if (succeeded)
            {
              MatchingConsRepns_24 = ((MR_Word) conv0_MatchingConsRepns_24);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              HeadConsRepn_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConsRepns_24, (MR_Integer) 0)));
              TailConsRepns_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchingConsRepns_24, (MR_Integer) 1)));
              succeeded = check_hlds__type_util__find_cons_repn_with_given_arity_4_p_0(ConsArity_8, HeadConsRepn_25, TailConsRepns_26, ConsIdConsRepn_6);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * ConsIdConsRepn_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadConsRepn_6, (MR_Integer) 5)));

    // setup for model_semi tailcalls optimized into a loop
    succeeded = (ConsArity_5 == Var_16);
    if (succeeded)
    {
      *ConsIdConsRepn_8 = HeadConsRepn_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadTailConsRepn_9;
      MR_Word TailTailConsRepns_10;
      MR_Word next_value_of_HeadConsRepn_6;
      MR_Word next_value_of_TailConsRepns_7;

      succeeded = ((MR_tag((MR_Word) TailConsRepns_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadTailConsRepn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailConsRepns_7, (MR_Integer) 0)));
        TailTailConsRepns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailConsRepns_7, (MR_Integer) 1)));
        // direct tailcall eliminated
        next_value_of_HeadConsRepn_6 = HeadTailConsRepn_9;
        next_value_of_TailConsRepns_7 = TailTailConsRepns_10;
        HeadConsRepn_6 = next_value_of_HeadConsRepn_6;
        TailConsRepns_7 = next_value_of_TailConsRepns_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
check_hlds__type_util__get_cons_defn_det_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * ConsDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsDefnPrime_9;
    MR_Word Ctors_16;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_16);
    succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_16, TypeCtor_6, ConsId_7, &ConsDefnPrime_9);
    if (succeeded)
      *ConsDefn_8 = ConsDefnPrime_9;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * ConsDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word Ctors_9;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_9);
    succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_9, TypeCtor_6, ConsId_7, ConsDefn_8);
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_38;

    conv1_LambdaHeadVar__2_38 = check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1378__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_38));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18 = ((MR_Word) (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Ctor_18);
    check_hlds__type_util__cons_id_arg_types_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18, (MR_Integer) 0)));
      MR_Word _Args_21;
      MR_Word _Ctxt_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word Var_32;

      (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18, (MR_Integer) 1)));
      _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18, (MR_Integer) 2)));
      (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18, (MR_Integer) 3)));
      _Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctor_18, (MR_Integer) 4)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7) = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Name_20));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Arity_22));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9));
      }
      hlds__hlds_module__module_info_get_cons_table_2_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__CtorTable_24);
      (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__CtorTable_24, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, *((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7), &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25);
      if ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
      {
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 0)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 1)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 2)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 3)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__MaybeExistConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 4)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 5)));
        Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_25, (MR_Integer) 6)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__MaybeExistConstraints_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
        {
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__map__from_corresponding_lists_3_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_43_43, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_44_44, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_28, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_33);
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_36 = (MR_Word) &check_hlds__type_util_scalar_common_2[4];
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_34 = mercury__list__map_2_f_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_45_45, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_44_44, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_36, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_31);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_33, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_34, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8);
          ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont)((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarType_6,
  MR_Word * ConsId_7,
  MR_Word * ArgTypes_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s env;

    (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5 = ModuleInfo_5;
    (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7 = ConsId_7;
    (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8 = ArgTypes_8;
    (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont = cont;
    (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word TypeCtorInfo_42_42;
      MR_Word TypeTable_11;
      MR_Word TypeDefn_12;
      MR_Word TypeDefnBody_13;
      MR_Word Ctors_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

      (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(VarType_6, &(env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &(env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10);
      if ((env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0((env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &TypeTable_11);
        (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_11, (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &TypeDefn_12);
        if ((env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeDefnBody_13);
          (env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) TypeDefnBody_13)) == (MR_mktag((MR_Integer) 1)));
          if ((env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
          {
            Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 0)));
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 1)));
            Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 2)));
            Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 3)));
            TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            mercury__list__member_2_p_1(TypeCtorInfo_42_42, &(env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Ctor_18, Ctors_14, check_hlds__type_util__cons_id_arg_types_4_p_0_2, &env);
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_31;

    conv0_LambdaHeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_15;
    MR_Word TypeArgs_16;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_15, &TypeArgs_16);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_15);
      if (succeeded)
      {
        *ArgTypes_8 = TypeArgs_16;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeParams_20;
        MR_Word MaybeExistConstraints0_22;
        MR_Word Args_23;
        MR_Word ConsDefn_17;
        MR_Word Ctors_46;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_46);
        succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_46, TypeCtor_15, ConsId_7, &ConsDefn_17);
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 1)));
          TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 3)));
          MaybeExistConstraints0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 4)));
          Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 5)));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 6)));
          succeeded = ((MR_tag((MR_Word) Args_23)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_35_39;
          MR_Word TypeCtorInfo_36_40;
          MR_Word TypeCtorInfo_37_41;
          MR_Word TSubst_28;
          MR_Word ArgTypes0_29;
          MR_Word Var_33;

          succeeded = (MaybeExistConstraints0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            TypeInfo_35_39 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
            TypeCtorInfo_36_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            mercury__map__from_corresponding_lists_3_p_0(TypeInfo_35_39, TypeCtorInfo_36_40, TypeParams_20, TypeArgs_16, &TSubst_28);
            TypeCtorInfo_37_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            Var_33 = (MR_Word) &check_hlds__type_util_scalar_common_2[3];
            ArgTypes0_29 = mercury__list__map_2_f_0(TypeCtorInfo_37_41, TypeCtorInfo_36_40, Var_33, Args_23);
            parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TSubst_28, ArgTypes0_29, ArgTypes_8);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          *ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      *ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_31;

    conv0_LambdaHeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1349__2_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_15;
    MR_Word TypeArgs_16;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_15, &TypeArgs_16);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_15);
      if (succeeded)
        *ArgTypes_8 = TypeArgs_16;
      else
      {
        MR_Word TypeParams_20;
        MR_Word MaybeExistConstraints0_22;
        MR_Word Args_23;
        MR_Word ConsDefn_17;
        MR_Word Ctors_46;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_46);
        succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_46, TypeCtor_15, ConsId_7, &ConsDefn_17);
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 1)));
          TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 3)));
          MaybeExistConstraints0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 4)));
          Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 5)));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 6)));
          succeeded = ((MR_tag((MR_Word) Args_23)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_36_40;
          MR_Word TSubst_28;
          MR_Word ArgTypes0_29;

          if (!((MaybeExistConstraints0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_util.get_cons_id_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
              return;
            }
          }
          TypeCtorInfo_36_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], TypeCtorInfo_36_40, TypeParams_20, TypeArgs_16, &TSubst_28);
          ArgTypes0_29 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, TypeCtorInfo_36_40, (MR_Word) &check_hlds__type_util_scalar_common_2[2], Args_23);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TSubst_28, ArgTypes0_29, ArgTypes_8);
        }
        else
          *ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      *ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
check_hlds__type_util__switch_type_num_functors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Integer * NumFunctors_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_7;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Integer Var_23;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
    if (succeeded)
    {
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0)));
      Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1)));
      succeeded = (Var_23 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
          succeeded = (strcmp(Var_22, (MR_String) "character") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Globals_8;
        MR_Word Target_9;
        MR_Integer MinChar_10;
        MR_Integer MaxChar_11;
        MR_Integer Var_24;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_8);
        libs__globals__get_target_2_p_0(Globals_8, &Target_9);
        backend_libs__string_encoding__target_char_range_3_p_0(Target_9, &MinChar_10, &MaxChar_11);
        Var_24 = (MR_Integer) ((MR_Unsigned) MaxChar_11 - (MR_Unsigned) MinChar_10);
        *NumFunctors_6 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) (MR_Integer) 1);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer NumFunctors0_13;
        MR_String IntType_12;
        MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0)));
        MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1)));
        MR_Integer lo_0;
        MR_Integer hi_1;
        MR_Integer mid_2;
        MR_Integer result_3;

        succeeded = (Var_27 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            IntType_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
            // binary string simple lookup switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 3;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(IntType_12, ((&check_hlds__type_util_vector_common_8[0 + mid_2]))->check_hlds__type_util__vector_common_type_8_0__vct_8_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                NumFunctors0_13 = ((&check_hlds__type_util_vector_common_8[0 + mid_2]))->check_hlds__type_util__vector_common_type_8_0__vct_8_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
        if (succeeded)
        {
          *NumFunctors_6 = NumFunctors0_13;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_7);
          if (succeeded)
          {
            *NumFunctors_6 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_28_28;
            MR_Word TypeTable_14;
            MR_Word TypeDefn_15;
            MR_Word TypeBody_16;
            MR_Word Constructors_17;
            MR_Word Var_18;
            MR_Word Var_19;
            MR_Word Var_20;

            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_14);
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, TypeCtor_7, &TypeDefn_15);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
              succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Constructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 0)));
                Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 1)));
                Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 2)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 3)));
                TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                mercury__list__length_2_p_0(TypeCtorInfo_28_28, Constructors_17, NumFunctors_6);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9)
{
  switch (STATE_VARIABLE_MayUseAtomic_0_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_MayUseAtomic_9 = STATE_VARIABLE_MayUseAtomic_0_8;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(ModuleInfo_5, Type_6);
      break;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  {
    MR_Word TypeMayUseAtomic_6;
    MR_Word TypeCategory_7;

    TypeCategory_7 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_4, Type_5);
    switch (MR_tag((MR_Word) TypeCategory_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TypeCategory_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            TypeMayUseAtomic_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCategory_7, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) Var_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word UBF_12;
                    MR_Word Globals_24;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_24);
                    libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 257, &UBF_12);
                    switch (UBF_12) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TypeMayUseAtomic_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        TypeMayUseAtomic_6 = (MR_Integer) 0;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  TypeMayUseAtomic_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  TypeMayUseAtomic_6 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));

                switch (IntType_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    TypeMayUseAtomic_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    {
                      MR_Word Globals_9;
                      MR_Word UBI64_10;

                      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_9);
                      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 258, &UBI64_10);
                      switch (UBI64_10) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          TypeMayUseAtomic_6 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          TypeMayUseAtomic_6 = (MR_Integer) 0;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        TypeMayUseAtomic_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_7, (MR_Integer) 1)));

              TypeMayUseAtomic_6 = ((&check_hlds__type_util_vector_common_7[0 + Var_26]))->check_hlds__type_util__vector_common_type_7_0__vct_7_f_0;
            }
            break;
          case (MR_Integer) 1:
            TypeMayUseAtomic_6 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return TypeMayUseAtomic_6;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_ctor_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtor_5)
{
  {
    MR_bool succeeded;
    MR_Word TypeCategory_6;
    MR_Word TypeCategoryPrime_7;

    succeeded = check_hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_5, &TypeCategoryPrime_7);
    if (succeeded)
      TypeCategory_6 = TypeCategoryPrime_7;
    else
    {
      MR_Word TypeTable_8;
      MR_Word TypeDefn_9;
      MR_Word TypeBody_10;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_8);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_5, &TypeDefn_9);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
      TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_10);
    }
    return TypeCategory_6;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word VarType_5)
{
  {
    MR_bool succeeded;
    MR_Word TypeCategory_6;
    MR_Word TypeCtor_7;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_5, &TypeCtor_7);
    if (succeeded)
    {
      MR_Word TypeCategoryPrime_11;

      succeeded = check_hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_7, &TypeCategoryPrime_11);
      if (succeeded)
        TypeCategory_6 = TypeCategoryPrime_11;
      else
      {
        MR_Word TypeTable_12;
        MR_Word TypeDefn_13;
        MR_Word TypeBody_14;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_12);
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_7, &TypeDefn_13);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_13, &TypeBody_14);
        TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_14);
      }
    }
    else
      TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
    return TypeCategory_6;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
  MR_Word Type_3,
  MR_Word Body_4)
{
  {
    MR_bool succeeded;
    MR_String Name_5;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 0)));
    MR_Word Var_17;
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 1)));
    MR_Word Var_19;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0)));
      Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1)));
      Var_19 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_17, Var_19);
      if (succeeded)
      {
        succeeded = (Var_18 == (MR_Integer) 0);
        if (succeeded)
        {
          // binary string simple lookup switch
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_5, ((&check_hlds__type_util_vector_common_6[0 + mid_2]))->check_hlds__type_util__vector_common_type_6_0__vct_6_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
          if (succeeded)
            switch (MR_tag((MR_Word) Body_4)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IsForeignType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 3)));
                  MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 0)));
                  MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 1)));
                  MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 2)));

                  succeeded = (IsForeignType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_4, (MR_Integer) 0)))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
            }
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__is_either_type_a_dummy_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeA_6,
  MR_Word TypeB_7)
{
  {
    MR_Word IsDummy_8;
    MR_Word TypeTable_9;
    MR_Word IsDummyA_10;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
    IsDummyA_10 = check_hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeA_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    switch (IsDummyA_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsDummy_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsDummyB_11;

          IsDummyB_11 = check_hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeB_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          switch (IsDummyB_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IsDummy_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              IsDummy_8 = (MR_Integer) 1;
              break;
          }
        }
        break;
    }
    return IsDummy_8;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__is_type_a_dummy_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  {
    MR_Word IsDummy_6;
    MR_Word TypeTable_7;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
    IsDummy_6 = check_hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_7, Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    return IsDummy_6;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsDummy_8;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (Type_6)), CoveredTypes_7);
    if (succeeded)
      IsDummy_8 = (MR_Integer) 1;
    else
    {
      MR_Word TypeCtor_9;
      MR_Word ArgTypes_10;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &ArgTypes_10);
      if (succeeded)
      {
        MR_Word IsBuiltinDummy_11;

        IsBuiltinDummy_11 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_9);
        switch (IsBuiltinDummy_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsDummy_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeDefn_12;

              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_9, &TypeDefn_12);
              if (succeeded)
              {
                MR_Word TypeBody_13;

                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeBody_13);
                switch (MR_tag((MR_Word) TypeBody_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MaybeTypeRepn_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_13, (MR_Integer) 2)));
                      MR_Word TypeRepn_18;
                      MR_Word DuTypeKind_19;
                      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_13, (MR_Integer) 0)));
                      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_13, (MR_Integer) 1)));
                      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_13, (MR_Integer) 3)));
                      MR_Word Var_34;
                      MR_Word Var_35;
                      MR_Word Var_36;
                      MR_Word Var_37;

                      if ((MaybeTypeRepn_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.type_util.is_type_a_dummy_loop\'/3", (MR_String) "MaybeTypeRepn = no");
                      }
                      else
                        TypeRepn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeRepn_16, (MR_Integer) 0)));
                      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_18, (MR_Integer) 0)));
                      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_18, (MR_Integer) 1)));
                      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_18, (MR_Integer) 2)));
                      DuTypeKind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_18, (MR_Integer) 3)));
                      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_18, (MR_Integer) 4)));
                      switch (MR_tag((MR_Word) DuTypeKind_19)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(DuTypeKind_19)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 2:
                              IsDummy_8 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 1:
                              IsDummy_8 = (MR_Integer) 0;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          IsDummy_8 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word SingleArgTypeInDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_19, (MR_Integer) 1)));
                            MR_Word TypeParams_24;
                            MR_Word Subst_25;
                            MR_Word SingleArgType_26;
                            MR_Word Var_33;
                            MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_19, (MR_Integer) 0)));
                            MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_19, (MR_Integer) 2)));
                            MR_Word next_value_of_Type_6;
                            MR_Word next_value_of_CoveredTypes_7;

                            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_12, &TypeParams_24);
                            mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_24, ArgTypes_10, &Subst_25);
                            parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_25, SingleArgTypeInDefn_22, &SingleArgType_26);
                            {
                              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Type_6));
                              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (CoveredTypes_7));
                            }
                            // direct tailcall eliminated
                            next_value_of_Type_6 = SingleArgType_26;
                            next_value_of_CoveredTypes_7 = Var_33;
                            Type_6 = next_value_of_Type_6;
                            CoveredTypes_7 = next_value_of_CoveredTypes_7;
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                }
              }
              else
                IsDummy_8 = (MR_Integer) 1;
            }
            break;
        }
      }
      else
        IsDummy_8 = (MR_Integer) 1;
    }
    return IsDummy_8;
    break;
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9 = ((MR_Word) (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9);
    check_hlds__type_util__type_is_existq_type_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Integer Var_12;
      MR_Word Var_13;
      MR_Word Var_7;

      (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, (MR_Integer) 0)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, (MR_Integer) 2)));
      Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, (MR_Integer) 3)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, (MR_Integer) 4)));
      (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      {
        Var_7 = (MR_Word) MR_body(((MR_Word) (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8), (MR_Integer) 1);
        check_hlds__type_util__type_is_existq_type_2_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9, (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s env;

    (env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_3, Type_4, &(env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
    if ((env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      check_hlds__type_util__type_is_existq_type_2_p_0_4(&env);
    return (env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_from_type_table_2_p_0(
  MR_Word TypeTable_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeBody_5;
    MR_Word TypeDefn_9;
    MR_Word TypeCtor_13;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_13);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_3, TypeCtor_13, &TypeDefn_9);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_5);
        succeeded = check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(TypeTable_3, TypeBody_5);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(
  MR_Word TypeTable_3,
  MR_Word TypeBody_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_4, (MR_Integer) 0)));
          MR_Word TypeBody_17;
          MR_Word TypeDefn_21;
          MR_Word TypeCtor_25;
          MR_Word next_value_of_TypeBody_4;

          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_9, &TypeCtor_25);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_3, TypeCtor_25, &TypeDefn_21);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &TypeBody_17);
              // direct tailcall eliminated
              next_value_of_TypeBody_4 = TypeBody_17;
              TypeBody_4 = next_value_of_TypeBody_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_4, (MR_Integer) 1)));

              succeeded = (AbstractType_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeBody_5;
    MR_Word TypeDefn_9;
    MR_Word TypeTable_13;
    MR_Word TypeCtor_14;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_13);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_14);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_14, &TypeDefn_9);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_5);
        succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(ModuleInfo_3, TypeBody_5);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeBody_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_4, (MR_Integer) 0)));
          MR_Word TypeBody_17;
          MR_Word TypeDefn_21;
          MR_Word TypeTable_25;
          MR_Word TypeCtor_26;
          MR_Word next_value_of_TypeBody_4;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_25);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_9, &TypeCtor_26);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_25, TypeCtor_26, &TypeDefn_21);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &TypeBody_17);
              // direct tailcall eliminated
              next_value_of_TypeBody_4 = TypeBody_17;
              TypeBody_4 = next_value_of_TypeBody_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_4, (MR_Integer) 1)));

              succeeded = (AbstractType_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_has_solver_type_details_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * SolverTypeDetails_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Type_5)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Word EqvType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_5, (MR_Integer) 0)));
      MR_Word TypeBody_19;
      MR_Word TypeDefn_23;
      MR_Word TypeTable_27;
      MR_Word TypeCtor_28;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_27);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(EqvType_9, &TypeCtor_28);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_27, TypeCtor_28, &TypeDefn_23);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &TypeBody_19);
          if (((MR_tag((MR_Word) TypeBody_19)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_19, (MR_Integer) 0)));

            succeeded = check_hlds__type_util__type_has_solver_type_details_3_p_0(ModuleInfo_4, EqvType_34, SolverTypeDetails_6);
          }
          else
          if (((((MR_tag((MR_Word) TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            MR_Word DetailsSolver_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 1)));
            MR_Word _MaybeUserEqComp_33;

            *SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_32, (MR_Integer) 0)));
            _MaybeUserEqComp_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_32, (MR_Integer) 1)));
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    else
    if (((((MR_tag((MR_Word) Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word DetailsSolver_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1)));
      MR_Word _MaybeUserEqComp_8;

      *SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_7, (MR_Integer) 0)));
      _MaybeUserEqComp_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_7, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_has_solver_type_details_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * SolverTypeDetails_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeBody_7;
    MR_Word TypeDefn_11;
    MR_Word TypeTable_15;
    MR_Word TypeCtor_16;

    // setup for model_semi tailcalls optimized into a loop
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_15);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_16);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_15, TypeCtor_16, &TypeDefn_11);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_7);
        if (((MR_tag((MR_Word) TypeBody_7)) == (MR_mktag((MR_Integer) 2))))
        {
          MR_Word EqvType_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_7, (MR_Integer) 0)));
          MR_Word next_value_of_Type_5 = EqvType_22;

          // direct tailcall eliminated
          Type_5 = next_value_of_Type_5;
          continue;
        }
        else
        if (((((MR_tag((MR_Word) TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
        {
          MR_Word DetailsSolver_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 1)));
          MR_Word _MaybeUserEqComp_21;

          *SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_20, (MR_Integer) 0)));
          _MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_20, (MR_Integer) 1)));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word VarType_7;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_6, &VarType_7);
    succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(ModuleInfo_4, VarType_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_4);
    if (!(succeeded))
    {
      MR_Word TypeBody_5;
      MR_Word TypeDefn_12;
      MR_Word TypeTable_16;
      MR_Word TypeCtor_17;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_16);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_17);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_16, TypeCtor_17, &TypeDefn_12);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeBody_5);
          switch (MR_tag((MR_Word) TypeBody_5)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word EqvType_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_5, (MR_Integer) 0)));
                MR_Word next_value_of_Type_4 = EqvType_7;

                // direct tailcall eliminated
                Type_4 = next_value_of_Type_4;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 1)));

                    succeeded = (Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  }
                  break;
              }
              break;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_SeenTypes_29;

    succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_SeenTypes_29);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SeenTypes_29));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SeenTypes_15;

    succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_SeenTypes_15);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SeenTypes_15));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_28,
  MR_Word * STATE_VARIABLE_SeenTypes_29)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, STATE_VARIABLE_SeenTypes_0_28, ((MR_Box) (Type_6)));
    if (succeeded)
    {
      *STATE_VARIABLE_SeenTypes_29 = STATE_VARIABLE_SeenTypes_0_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word STATE_VARIABLE_SeenTypes_30_30;

      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (Type_6)), STATE_VARIABLE_SeenTypes_0_28, &STATE_VARIABLE_SeenTypes_30_30);
      switch (MR_tag((MR_Word) Type_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_15_95;
            MR_Word TypeInfo_16_96;
            MR_Word TypeBody_24;
            MR_Word STATE_VARIABLE_SeenTypes_31_31;
            MR_Word Args_34;
            MR_Word TypeDefn_40;
            MR_Word TypeTable_44;
            MR_Word TypeCtor_45;
            MR_Word Globals_52;
            MR_Word Target_53;
            MR_Word Var_90;
            MR_Word Var_25;
            MR_Box conv3_STATE_VARIABLE_SeenTypes_29;

            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_44);
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_45);
            if (succeeded)
            {
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_44, TypeCtor_45, &TypeDefn_40);
              if (succeeded)
              {
                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_24);
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_52);
                libs__globals__get_target_2_p_0(Globals_52, &Target_53);
                switch (MR_tag((MR_Word) TypeBody_24)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word ForeignTypeBody_72 = (MR_Word) MR_body(((MR_Word) TypeBody_24), (MR_Integer) 0);
                      MR_Word Var_62;

                      succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_72, &Var_62);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ForeignTypeBody_58;
                      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
                      MR_Word Var_68;
                      MR_Word Var_84;
                      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
                      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
                      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));

                      succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        ForeignTypeBody_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0)));
                        Var_68 = (MR_Integer) 1;
                        backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_53, ForeignTypeBody_58, &Var_84);
                        succeeded = (Var_68 == Var_84);
                      }
                      if (succeeded)
                      {
                        MR_Word Var_59;

                        succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_58, &Var_59);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                          succeeded = MR_TRUE;
                        }
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_42_82;
                        MR_Word TypeInfo_43_83;
                        MR_Word Ctors_60;
                        MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
                        MR_Word Var_70;
                        MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
                        MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));
                        MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
                        MR_Box conv1_STATE_VARIABLE_SeenTypes_31_31;

                        succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Ctors_60);
                          if (succeeded)
                          {
                            TypeCtorInfo_42_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                            TypeInfo_43_83 = (MR_Word) &check_hlds__type_util_scalar_common_1[6];
                            {
                              Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[1]));
                              MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                              MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ModuleInfo_5));
                            }
                            succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_42_82, TypeInfo_43_83, Var_70, Ctors_60, ((MR_Box) (STATE_VARIABLE_SeenTypes_30_30)), &conv1_STATE_VARIABLE_SeenTypes_31_31);
                            if (succeeded)
                            {
                              STATE_VARIABLE_SeenTypes_31_31 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_31_31);
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word EqvType_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_24, (MR_Integer) 0)));

                      succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_5, EqvType_61);
                      if (succeeded)
                      {
                        STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 0)))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word DetailsSolver_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 1)));
                          MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_63, (MR_Integer) 1)));
                          MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_63, (MR_Integer) 0)));

                          succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
                if (succeeded)
                {
                  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_25, &Args_34);
                  TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  TypeInfo_16_96 = (MR_Word) &check_hlds__type_util_scalar_common_1[6];
                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleInfo_5));
                  }
                  succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_15_95, TypeInfo_16_96, Var_90, Args_34, ((MR_Box) (STATE_VARIABLE_SeenTypes_31_31)), &conv3_STATE_VARIABLE_SeenTypes_29);
                  if (succeeded)
                  {
                    *STATE_VARIABLE_SeenTypes_29 = ((MR_Word) conv3_STATE_VARIABLE_SeenTypes_29);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_SeenTypes_29 = STATE_VARIABLE_SeenTypes_30_30;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1)));
                MR_Word _Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2)));

                succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(ModuleInfo_5, Args_9, STATE_VARIABLE_SeenTypes_30_30, STATE_VARIABLE_SeenTypes_29);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_15_95;
                MR_Word TypeInfo_16_96;
                MR_Word TypeBody_24;
                MR_Word STATE_VARIABLE_SeenTypes_31_31;
                MR_Word Args_34;
                MR_Word TypeDefn_40;
                MR_Word TypeTable_44;
                MR_Word TypeCtor_45;
                MR_Word Globals_52;
                MR_Word Target_53;
                MR_Word Var_90;
                MR_Word Var_25;
                MR_Box conv3_STATE_VARIABLE_SeenTypes_29;

                hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_44);
                succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_45);
                if (succeeded)
                {
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_44, TypeCtor_45, &TypeDefn_40);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_24);
                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_52);
                    libs__globals__get_target_2_p_0(Globals_52, &Target_53);
                    switch (MR_tag((MR_Word) TypeBody_24)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word ForeignTypeBody_72 = (MR_Word) MR_body(((MR_Word) TypeBody_24), (MR_Integer) 0);
                          MR_Word Var_62;

                          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_72, &Var_62);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ForeignTypeBody_58;
                          MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
                          MR_Word Var_68;
                          MR_Word Var_84;
                          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
                          MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
                          MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));

                          succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ForeignTypeBody_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0)));
                            Var_68 = (MR_Integer) 1;
                            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_53, ForeignTypeBody_58, &Var_84);
                            succeeded = (Var_68 == Var_84);
                          }
                          if (succeeded)
                          {
                            MR_Word Var_59;

                            succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_58, &Var_59);
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                              succeeded = MR_TRUE;
                            }
                          }
                          else
                          {
                            MR_Word TypeCtorInfo_42_82;
                            MR_Word TypeInfo_43_83;
                            MR_Word Ctors_60;
                            MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
                            MR_Word Var_70;
                            MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
                            MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));
                            MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
                            MR_Box conv1_STATE_VARIABLE_SeenTypes_31_31;

                            succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Ctors_60);
                              if (succeeded)
                              {
                                TypeCtorInfo_42_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                                TypeInfo_43_83 = (MR_Word) &check_hlds__type_util_scalar_common_1[6];
                                {
                                  Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[1]));
                                  MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                                  MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ModuleInfo_5));
                                }
                                succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_42_82, TypeInfo_43_83, Var_70, Ctors_60, ((MR_Box) (STATE_VARIABLE_SeenTypes_30_30)), &conv1_STATE_VARIABLE_SeenTypes_31_31);
                                if (succeeded)
                                {
                                  STATE_VARIABLE_SeenTypes_31_31 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_31_31);
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word EqvType_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_24, (MR_Integer) 0)));

                          succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_5, EqvType_61);
                          if (succeeded)
                          {
                            STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 0)))) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word DetailsSolver_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 1)));
                              MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_63, (MR_Integer) 1)));
                              MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_63, (MR_Integer) 0)));

                              succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                STATE_VARIABLE_SeenTypes_31_31 = STATE_VARIABLE_SeenTypes_30_30;
                                succeeded = MR_TRUE;
                              }
                            }
                            break;
                        }
                        break;
                    }
                    if (succeeded)
                    {
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_25, &Args_34);
                      TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                      TypeInfo_16_96 = (MR_Word) &check_hlds__type_util_scalar_common_1[6];
                      {
                        Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[0]));
                        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleInfo_5));
                      }
                      succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_15_95, TypeInfo_16_96, Var_90, Args_34, ((MR_Box) (STATE_VARIABLE_SeenTypes_31_31)), &conv3_STATE_VARIABLE_SeenTypes_29);
                      if (succeeded)
                      {
                        *STATE_VARIABLE_SeenTypes_29 = ((MR_Word) conv3_STATE_VARIABLE_SeenTypes_29);
                        succeeded = MR_TRUE;
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
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_6;
    MR_Word Var_5;

    Var_6 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(ModuleInfo_3, Type_4, Var_6, &Var_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SeenTypes_29;

    succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_SeenTypes_29);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SeenTypes_29));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Types_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_8,
  MR_Word * STATE_VARIABLE_SeenTypes_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_SeenTypes_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    }
    succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[6], Var_10, Types_6, ((MR_Box) (STATE_VARIABLE_SeenTypes_0_8)), &conv1_STATE_VARIABLE_SeenTypes_9);
    if (succeeded)
    {
      *STATE_VARIABLE_SeenTypes_9 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_19;

    conv0_LambdaHeadVar__2_19 = check_hlds__type_util__IntroducedFrom__func__type_constructors__1210__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    return wrapper_arg_2;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_constructors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * Constructors_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_7;
    MR_Word TypeArgs_8;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_5, &TypeCtor_7, &TypeArgs_8);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_7);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_32_32;
        MR_Word Context_10;
        MR_Word CtorArgs_11;
        MR_Word Var_17;
        MR_Word Var_21;
        MR_Integer Var_24;

        Context_10 = mercury__term__context_init_0_f_0();
        TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Context_10));
        }
        CtorArgs_11 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeCtorInfo_32_32, Var_17, TypeArgs_8);
        Var_24 = mercury__list__length_1_f_0(TypeCtorInfo_32_32, CtorArgs_11);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[27]));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (CtorArgs_11));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Context_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Constructors_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeTable_13;
        MR_Word TypeDefn_14;
        MR_Word TypeParams_15;
        MR_Word TypeBody_16;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_13);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_7, &TypeDefn_14);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_14, &TypeParams_15);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_16);
          succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 0)));
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 1)));
            Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 2)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 3)));
            if ((TypeParams_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *Constructors_6 = Var_26;
            else
            {
              MR_Word Subst_39;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_15, TypeArgs_8, &Subst_39);
              check_hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_39, Var_26, Constructors_6);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Ctor0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Ctors0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Ctor_8;
    MR_Word Ctors_9;
    MR_Word MaybeExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 0)));
    MR_Word Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 1)));
    MR_Word Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 2)));
    MR_Integer Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 3)));
    MR_Word Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 4)));
    MR_Word Args_15;

    check_hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_12, &Args_15);
    {
      Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Ctor_8, 0) = ((MR_Box) (MaybeExistConstraints_10));
      MR_hl_field(MR_mktag(0), Ctor_8, 1) = ((MR_Box) (Name_11));
      MR_hl_field(MR_mktag(0), Ctor_8, 2) = ((MR_Box) (Args_15));
      MR_hl_field(MR_mktag(0), Ctor_8, 3) = ((MR_Box) (Arity_13));
      MR_hl_field(MR_mktag(0), Ctor_8, 4) = ((MR_Box) (Ctxt_14));
    }
    check_hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_1, Ctors0_7, &Ctors_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ctors_9));
    }
  }
}

static void MR_CALL 
check_hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Arg_8;
    MR_Word Args_9;
    MR_Word ArgType_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 2)));
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_15;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_1, Var_11, &ArgType_10);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 0)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 1)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 2)));
    {
      Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Arg_8, 1) = ((MR_Box) (ArgType_10));
      MR_hl_field(MR_mktag(0), Arg_8, 2) = ((MR_Box) (Var_16));
    }
    check_hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_7, &Args_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * UserEqComp_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeBody_7;
    MR_Word TypeDefn_11;
    MR_Word TypeTable_15;
    MR_Word TypeCtor_16;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_15);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_16);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_15, TypeCtor_16, &TypeDefn_11);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_7);
        succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_7, UserEqComp_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeBody_5,
  MR_Word * NonCanonical_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeBody_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word ForeignTypeBody_21 = (MR_Word) MR_body(((MR_Word) TypeBody_5), (MR_Integer) 0);

          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_21, NonCanonical_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeForeignType_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
          MR_Word ForeignTypeBody_11;
          MR_Word Globals_12;
          MR_Word Target_13;
          MR_Word Var_19;
          MR_Word Var_25;

          succeeded = ((MR_tag((MR_Word) MaybeForeignType_10)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ForeignTypeBody_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignType_10, (MR_Integer) 0)));
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_12);
            libs__globals__get_target_2_p_0(Globals_12, &Target_13);
            Var_19 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_13, ForeignTypeBody_11, &Var_25);
            succeeded = (Var_19 == Var_25);
          }
          if (succeeded)
            succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_11, NonCanonical_6);
          else
          {
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
            MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
            MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));

            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              *NonCanonical_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 1)));
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_14, (MR_Integer) 1)));
              MR_Word _SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_14, (MR_Integer) 0)));

              succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                *NonCanonical_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_from_type_table_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * TypeBody_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_7;
    MR_Word TypeCtor_11;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_11);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_11, &TypeDefn_7);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, TypeBody_6);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeBody_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_7;
    MR_Word TypeTable_11;
    MR_Word TypeCtor_12;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_11);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_12);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_11, TypeCtor_12, &TypeDefn_7);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, TypeBody_6);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_from_type_table_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_7;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
    if (succeeded)
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_7, TypeDefn_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeTable_7;
    MR_Word TypeCtor_8;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_8);
    if (succeeded)
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_8, TypeDefn_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_5;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_5);
    if (succeeded)
      succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(ModuleInfo_3, TypeCtor_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_ctor_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeCtor_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCategory_5;
    MR_Word TypeCategoryPrime_10;

    succeeded = check_hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_4, &TypeCategoryPrime_10);
    if (succeeded)
      TypeCategory_5 = TypeCategoryPrime_10;
    else
    {
      MR_Word TypeTable_11;
      MR_Word TypeDefn_12;
      MR_Word TypeBody_13;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_11);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_11, TypeCtor_4, &TypeDefn_12);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeBody_13);
      TypeCategory_5 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_13);
    }
    switch (MR_tag((MR_Word) TypeCategory_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(TypeCategory_5)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
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
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_5, (MR_Integer) 1)));

              switch (Var_24) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__classify_type_defn_body_1_f_0(
  MR_Word TypeBody_3)
{
  {
    MR_Word TypeCategory_4;

    switch (MR_tag((MR_Word) TypeBody_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeTypeRepn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 2)));
          MR_Word Repn_9;
          MR_Word DuTypeKind_10;
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 0)));
          MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 1)));
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 3)));
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;

          if ((MaybeTypeRepn_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.type_util.classify_type_defn_body\'/1", (MR_String) "MaybeTypeRepn = no");
          }
          else
            Repn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeRepn_7, (MR_Integer) 0)));
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_9, (MR_Integer) 0)));
          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_9, (MR_Integer) 1)));
          Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_9, (MR_Integer) 2)));
          DuTypeKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_9, (MR_Integer) 3)));
          Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_9, (MR_Integer) 4)));
          switch (MR_tag((MR_Word) DuTypeKind_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[26]);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[16]);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[25]);
              }
              break;
            case (MR_Integer) 2:
              {
                TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[17]);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) AbstractDetails_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(AbstractDetails_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 3:
                      {
                        TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[13]);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[14]);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[15]);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return TypeCategory_4;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__classify_type_ctor_if_special_2_p_0(
  MR_Word TypeCtor_3,
  MR_Word * TypeCategory_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0)));
    MR_Integer Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1)));
    MR_String TypeName_7;

    if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word _ModuleSymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));

      TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
    }
    else
      TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeSymName_5, (MR_Integer) 0)));
    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(TypeName_7, 0)) {
        case (MR_Integer) 98:
          if (MR_offset_streq(1, TypeName_7, (MR_String) "base_typeclass_info"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 99:
          if (MR_offset_streq(1, TypeName_7, (MR_String) "character"))
            case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(TypeName_7, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, TypeName_7, (MR_String) "float"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, TypeName_7, (MR_String) "func"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(TypeName_7, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(TypeName_7, 2)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(TypeName_7, 3)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 49:
                if (MR_offset_streq(4, TypeName_7, (MR_String) "int16"))
                  case_num_0 = (MR_Integer) 5;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(4, TypeName_7, (MR_String) "int32"))
                  case_num_0 = (MR_Integer) 6;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(4, TypeName_7, (MR_String) "int64"))
                  case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(4, TypeName_7, (MR_String) "int8"))
                  case_num_0 = (MR_Integer) 8;
                break;
            }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, TypeName_7, (MR_String) "pred"))
            case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 115:
          if (((MR_nth_code_unit(TypeName_7, 1)) == (MR_Integer) 116))
            switch (MR_nth_code_unit(TypeName_7, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "state"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "store"))
                  case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "string"))
                  case_num_0 = (MR_Integer) 11;
                break;
            }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(TypeName_7, 1)) {
            case (MR_Integer) 117:
              if (MR_offset_streq(2, TypeName_7, (MR_String) "tuple"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 121:
              if (((((MR_nth_code_unit(TypeName_7, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(TypeName_7, 3)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(TypeName_7, 4)) {
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(TypeName_7, 5)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(6, TypeName_7, (MR_String) "type_ctor_info"))
                          case_num_0 = (MR_Integer) 13;
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(6, TypeName_7, (MR_String) "type_info"))
                          case_num_0 = (MR_Integer) 14;
                        break;
                    }
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(5, TypeName_7, (MR_String) "typeclass_info"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 117:
          if (((((((MR_nth_code_unit(TypeName_7, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(TypeName_7, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(TypeName_7, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(TypeName_7, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 49:
                if (MR_offset_streq(5, TypeName_7, (MR_String) "uint16"))
                  case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(5, TypeName_7, (MR_String) "uint32"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(5, TypeName_7, (MR_String) "uint64"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(5, TypeName_7, (MR_String) "uint8"))
                  case_num_0 = (MR_Integer) 20;
                break;
            }
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, TypeName_7, (MR_String) "void"))
            case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, TypeName_7, (MR_String) "{}"))
            case_num_0 = (MR_Integer) 22;
          break;
      }
      switch (case_num_0) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            // case "base_typeclass_info"
            {
              MR_Word ModuleSymName_45;
              MR_Word Var_73;
              MR_String _TypeName_43;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_43 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
                Var_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_45, Var_73);
                if (succeeded)
                  succeeded = (Arity_6 == (MR_Integer) 0);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "character"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[1]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_72;
              MR_String _TypeName_41 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_72 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_10, Var_72);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 2:
          {
            // case "float"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[2]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_82;
              MR_String _TypeName_79 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_80, Var_82);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          {
            // case "func", "pred"
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_String Var_260 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              {
                MR_Word Var_77;

                Var_77 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_261, Var_77);
                if (succeeded)
                  succeeded = (Arity_6 == (MR_Integer) 0);
              }
              if (!(succeeded))
              {
                MR_String Qualifier_11;

                succeeded = ((MR_tag((MR_Word) Var_261)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Qualifier_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_261, (MR_Integer) 0)));
                  if ((strcmp(Qualifier_11, (MR_String) "impure") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Qualifier_11, (MR_String) "semipure") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
              }
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
            {
              *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            // case "int"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[4]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_95;
              MR_String _TypeName_92 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_95 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_93, Var_95);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 5:
          {
            // case "int16"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[6]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_108;
              MR_String _TypeName_105 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_108 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_106, Var_108);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 6:
          {
            // case "int32"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[8]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_121;
              MR_String _TypeName_118 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_121 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_119, Var_121);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int64"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[10]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_134;
              MR_String _TypeName_131 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_134 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_132, Var_134);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int8"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[12]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_147;
              MR_String _TypeName_144 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_147 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_145, Var_147);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 9:
          {
            // case "state"
            {
              MR_Word ModuleSymName_48;
              MR_Word Var_74;
              MR_String _TypeName_46;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_46 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                Var_74 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_48, Var_74);
                if (succeeded)
                {
                  succeeded = (Arity_6 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 10:
          {
            // case "store"
            {
              MR_Word Var_12;
              MR_String Var_13;
              MR_Word ModuleSymName_51;
              MR_Word Var_76;
              MR_String _TypeName_49;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_49 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                Var_13 = (MR_String) "store";
                Var_12 = (MR_Word) &check_hlds__type_util_scalar_common_3[13];
                Var_76 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_12);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_51, Var_76);
                if (succeeded)
                {
                  succeeded = (Arity_6 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 11:
          {
            // case "string"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[14]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_160;
              MR_String _TypeName_157 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_160 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_158, Var_160);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 12:
          {
            // case "tuple"
            {
              MR_Word ModuleSymName_69;
              MR_Word Var_78;
              MR_String _TypeName_67;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_67 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                Var_78 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_69, Var_78);
                if (succeeded)
                {
                  succeeded = (Arity_6 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "type_ctor_info"
            {
              MR_Word ModuleSymName_172;
              MR_Word Var_173;
              MR_String _TypeName_170;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_170 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
                Var_173 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_172, Var_173);
                if (succeeded)
                  succeeded = (Arity_6 == (MR_Integer) 0);
              }
            }
          }
          break;
        case (MR_Integer) 14:
          {
            // case "type_info"
            {
              MR_Word ModuleSymName_176;
              MR_Word Var_177;
              MR_String _TypeName_174;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_174 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11]);
                Var_177 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_176, Var_177);
                if (succeeded)
                  succeeded = (Arity_6 == (MR_Integer) 0);
              }
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "typeclass_info"
            {
              MR_Word ModuleSymName_180;
              MR_Word Var_181;
              MR_String _TypeName_178;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModuleSymName_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
                _TypeName_178 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));
                *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[12]);
                Var_181 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_180, Var_181);
                if (succeeded)
                  succeeded = (Arity_6 == (MR_Integer) 0);
              }
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "uint"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[16]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_185;
              MR_String _TypeName_182 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_185 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_183, Var_185);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 17:
          {
            // case "uint16"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[18]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_198;
              MR_String _TypeName_195 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_198 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_196, Var_198);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 18:
          {
            // case "uint32"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[20]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_211;
              MR_String _TypeName_208 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_211 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_209, Var_211);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 19:
          {
            // case "uint64"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[22]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_224;
              MR_String _TypeName_221 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_224 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_222, Var_224);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 20:
          {
            // case "uint8"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[24]);
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_237;
              MR_String _TypeName_234 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_237 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_235, Var_237);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 21:
          {
            // case "void"
            *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ModuleSymName_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 0)));
              MR_Word Var_250;
              MR_String _TypeName_247 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_5, (MR_Integer) 1)));

              Var_250 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_248, Var_250);
            }
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = (Arity_6 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 22:
          {
            // case "{}"
            {
              MR_String _TypeName_70;

              succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                _TypeName_70 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeSymName_5, (MR_Integer) 0)));
                *TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_util__type_ctor_module_name_arity_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ModuleName_7,
  MR_String * Name_8,
  MR_Integer * Arity_6)
{
  {
    MR_Word TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    *Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(TypeSymName_5, (MR_Word) &check_hlds__type_util_scalar_common_3[0], ModuleName_7, Name_8);
  }
}

MR_Integer MR_CALL 
check_hlds__type_util__type_ctor_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word _TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    return Arity_4;
  }
}

MR_String MR_CALL 
check_hlds__type_util__type_ctor_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer _Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_util__type_ctor_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ModuleName_5;
    MR_Word TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer _Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(TypeSymName_3, (MR_Word) &check_hlds__type_util_scalar_common_3[0], &ModuleName_5);
    return ModuleName_5;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_util____Unify____ctor_defn_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_util____Compare____ctor_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_util____Compare____exist_qvar_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_util____Unify____is_dummy_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_util____Compare____is_dummy_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_util____Unify____is_either_dummy_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_util____Compare____is_either_dummy_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_ctor_defn_0);
	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0);
	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0);
	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_either_dummy_type_0);
}

void mercury__check_hlds__type_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__type_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.type_util.
