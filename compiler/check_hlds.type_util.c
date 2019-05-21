/*
** Automatically generated from `type_util.m'
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
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_29;
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_14;
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7;
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Var_14;
};

struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_9;
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10;
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__2_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__589__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1283__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1270__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1182__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1150__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__1003__1_2_f_0(
  MR_Word Context_11,
  MR_Word LambdaHeadVar__1_19);

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
  MR_Word STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * STATE_VARIABLE_SeenTypes_16);

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

static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
check_hlds__type_util__check_dummy_type_2_3_f_0(
  MR_Word ModuleInfo_5,
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
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word TypeBody_8,
  MR_Word STATE_VARIABLE_SeenTypes_0_29,
  MR_Word * STATE_VARIABLE_SeenTypes_30);

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

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_6[2][7];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[3][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[1][8];


/* sealed */ struct check_hlds__type_util__vector_common_type_4_0_s {
  const MR_String check_hlds__type_util__vector_common_type_4_0__vct_4_f_0;
  const MR_Word check_hlds__type_util__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[12];

/* sealed */ struct check_hlds__type_util__vector_common_type_7_0_s {
  const MR_String check_hlds__type_util__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_7_0_s check_hlds__type_util_vector_common_7[4];

/* sealed */ struct check_hlds__type_util__vector_common_type_8_0_s {
  const MR_Word check_hlds__type_util__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__type_util__vector_common_type_8_0_s check_hlds__type_util_vector_common_8[4];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
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
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__cons_id_arg_types_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_9[0])),
    ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[10][6] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[3][5] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[1][8] = {
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


static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[12] = {
  /* row 0 */
  {
    (MR_String) "character",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[3])
  },
  /* row 1 */
  {
    (MR_String) "float",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[4])
  },
  /* row 2 */
  {
    (MR_String) "string",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[5])
  },
  /* row 3 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 4 */
  {
    (MR_String) "func",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) "pred",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "tuple",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 7 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 8 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9])
  },
  /* row 9 */
  {
    (MR_String) "type_ctor_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10])
  },
  /* row 10 */
  {
    (MR_String) "type_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11])
  },
  /* row 11 */
  {
    (MR_String) "typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[12])
  },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_7_0_s check_hlds__type_util_vector_common_7[4] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_8_0_s check_hlds__type_util_vector_common_8[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
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

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__2_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  {
    MR_Word LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 3)));

    return LambdaHeadVar__2_34;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  {
    MR_Word LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 3)));

    return LambdaHeadVar__2_34;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__589__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 2)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 3)));

    return LambdaHeadVar__2_20;
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0_1(
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
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_46;
    MR_Word L0_15;
    MR_Word L_16;
    MR_Word Var_42;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_31_31, LambdaHeadVar__1_25, &L0_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, L0_15, &L_16);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_31_31, L_16, LambdaHeadVar__2_26);
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0_1(
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
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_46;
    MR_Word L0_15;
    MR_Word L_16;
    MR_Word Var_42;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_31_31, LambdaHeadVar__1_25, &L0_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, L0_15, &L_16);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_31_31, L_16, LambdaHeadVar__2_26);
  }
}

static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0_1(
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
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    MR_Word TypeCtorInfo_12_54;
    MR_Word L0_16;
    MR_Word L_17;
    MR_Word Var_50;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_37_37, LambdaHeadVar__1_25, &L0_16);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_54, TypeCtorInfo_12_54, Var_50, L0_16, &L_17);
    mercury__set__list_to_set_2_p_0(TypeCtorInfo_37_37, L_17, LambdaHeadVar__2_26);
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1283__1_1_f_0(
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
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1270__1_1_f_0(
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

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1182__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 0)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 2)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 3)));

    return LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1150__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 1)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 0)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 2)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 3)));

    return LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__1003__1_2_f_0(
  MR_Word Context_11,
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20;

    {
      LambdaHeadVar__2_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, 1) = ((MR_Box) (LambdaHeadVar__1_19));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, 3) = ((MR_Box) (Context_11));
    }
    return LambdaHeadVar__2_20;
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
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
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
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
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
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__589__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * STATE_VARIABLE_SeenTypes_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeInfo_32_32;
    MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3)));
    MR_Word ArgTypes_13;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 0)));
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 1)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 5)));
    MR_Box conv2_STATE_VARIABLE_SeenTypes_16;

    succeeded = (Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
      TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      Var_18 = (MR_Word) &check_hlds__type_util_scalar_common_2[7];
      ArgTypes_13 = mercury__list__map_2_f_0(TypeCtorInfo_27_27, TypeCtorInfo_28_28, Var_18, Args_10);
      TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
      }
      succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_28_28, TypeInfo_32_32, Var_21, ArgTypes_13, ((MR_Box) (STATE_VARIABLE_SeenTypes_0_15)), &conv2_STATE_VARIABLE_SeenTypes_16);
      if (succeeded)
      {
        *STATE_VARIABLE_SeenTypes_16 = ((MR_Word) conv2_STATE_VARIABLE_SeenTypes_16);
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[9]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[9]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
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
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
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
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
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

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ProofMap0_5);
    if (succeeded)
      *ProofMap_6 = ProofMap0_5;
    else
    {
      MR_Word TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
      MR_Word TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
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
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[7]));
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

    check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1422__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
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
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, Unproven0_6, &Unproven_10);
    TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_55, TypeCtorInfo_12_55, Var_42, Assumed0_7, &Assumed_11);
    {
      Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Pred_12, 3) = ((MR_Box) (Subst_4));
    }
    TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
    mercury__map__map_values_only_3_p_0(TypeInfo_32_32, TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_12, Redundant0_8, &Redundant_17);
    TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    mercury__map__keys_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsKeys0_18);
    mercury__map__values_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsValues0_19);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[6]));
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

    check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1403__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
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
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_46, TypeCtorInfo_12_46, Var_42, Unproven0_6, &Unproven_10);
    TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__map_3_p_0(TypeCtorInfo_12_55, TypeCtorInfo_12_55, Var_42, Assumed0_7, &Assumed_11);
    {
      Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Pred_12, 3) = ((MR_Box) (Subst_4));
    }
    TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
    mercury__map__map_values_only_3_p_0(TypeInfo_32_32, TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_12, Redundant0_8, &Redundant_17);
    TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
    mercury__map__keys_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsKeys0_18);
    mercury__map__values_2_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, Ancestors0_9, &AncestorsValues0_19);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[6]));
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

    check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1375__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
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
        TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_31_31, TypeInfo_32_32, Redundant0_8);
        if (succeeded)
        {
          TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
          TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
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
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Renaming_4));
      }
      TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
      mercury__list__map_3_p_0(TypeCtorInfo_12_54, TypeCtorInfo_12_54, Var_50, Unproven0_6, &Unproven_10);
      TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
      mercury__list__map_3_p_0(TypeCtorInfo_12_63, TypeCtorInfo_12_63, Var_50, Assumed0_7, &Assumed_11);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[3], Redundant0_8);
      if (succeeded)
        Redundant_12 = Redundant0_8;
      else
      {
        MR_Word TypeInfo_38_38;
        MR_Word Pred_13;

        {
          Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
          MR_hl_field(MR_mktag(0), Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Pred_13, 3) = ((MR_Box) (Renaming_4));
        }
        TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
        mercury__map__map_values_only_3_p_0(TypeInfo_38_38, TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, Pred_13, Redundant0_8, &Redundant_12);
      }
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], Ancestors0_9);
      if (succeeded)
        Ancestors_18 = Ancestors0_9;
      else
      {
        MR_Word TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        MR_Word TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
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
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[4]));
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
    }
    TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
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
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Var_13, VarsList0_7, &VarsList_8);
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
    MR_Word TypeInfo_9_9 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
    MR_Word VarsList0_7;
    MR_Word VarsList_8;
    MR_Word Var_13;

    VarsList0_7 = mercury__set__to_sorted_list_1_f_0(TypeInfo_9_9, VarsSet0_5);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Var_13, VarsList0_7, &VarsList_8);
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
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (VarTypes_4));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Var_7, VarsList_5, &NonTypeInfoVarsList_6);
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
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_5));
    }
    mercury__list__filter_4_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], Var_13, VarsList_4, &TypeInfoVarsList_6, &NonTypeInfoVarsList_7);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], TypeInfoVarsList_6, NonTypeInfoVarsList_7);
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

    conv0_LambdaHeadVar__2_15 = check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1283__1_1_f_0(((MR_Word) wrapper_arg_1));
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
      *MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[6], ArgTypes_11);
    }
    else
    {
      mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], Arity_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), MaybeTypes_6);
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

    conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1270__1_1_f_0(((MR_Word) wrapper_arg_1));
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
        *MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[5], Types_16);
      }
      else
      {
        mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], Arity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), MaybeTypes_10);
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

        Var_5 = check_hlds__type_util__check_dummy_type_2_3_f_0(ModuleInfo_4, Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
      MR_Word TypeInfo_23_23;
      MR_Word ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 1)));
      MR_Word Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 3)));
      MR_Integer NumTypeClassInfos_17;
      MR_Word ConstrainedTVars_18;
      MR_Word UnconstrainedExistQTVars_19;
      MR_Integer NumTypeInfos_20;
      MR_Integer Var_21;
      MR_Word _TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 0)));
      MR_Word _KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 2)));
      MR_Word _ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 4)));
      MR_Word _ResultType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 5)));

      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Constraints_14, &NumTypeClassInfos_17);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_14, &ConstrainedTVars_18);
      TypeInfo_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
      mercury__list__delete_elems_3_p_0(TypeInfo_23_23, ExistQTVars_12, ConstrainedTVars_18, &UnconstrainedExistQTVars_19);
      mercury__list__length_2_p_0(TypeInfo_23_23, UnconstrainedExistQTVars_19, &NumTypeInfos_20);
      Var_21 = (ConsArity_9 + NumTypeClassInfos_17);
      AdjustedArity_8 = (Var_21 + NumTypeInfos_20);
    }
    else
      AdjustedArity_8 = ConsArity_9;
    return AdjustedArity_8;
  }
}

MR_bool MR_CALL 
check_hlds__type_util__type_is_float_eqv_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    {
      MR_Word Var_7;

      Var_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_7);
    }
    if (!(succeeded))
    {
      MR_Word TypeBody_5;
      MR_Word EqvType_6;
      MR_Word TypeDefn_12;
      MR_Word TypeTable_16;
      MR_Word TypeCtor_17;
      MR_Word next_value_of_Type_4;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_16);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_17);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_16, TypeCtor_17, &TypeDefn_12);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeBody_5);
          succeeded = ((MR_tag((MR_Word) TypeBody_5)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            EqvType_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_5, (MR_Integer) 0)));
            // direct tailcall eliminated
            next_value_of_Type_4 = EqvType_6;
            Type_4 = next_value_of_Type_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
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
    MR_Word Var_15;
    MR_Word Ctors_27;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_13;
    MR_Word Var_14;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_5, &TypeCtor_12);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_4, &Ctors_27);
      succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_27, TypeCtor_12, ConsId_6, &Var_7);
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 3)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 4)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 5)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 6)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 7)));
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1)));
        }
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
    MR_Word conv0_LambdaHeadVar__2_25;

    conv0_LambdaHeadVar__2_25 = check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1182__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
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
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeCtorInfo_31_31;
    MR_Word ConsDefn_9;
    MR_Word TypeVarSet_11;
    MR_Word TypeParams_12;
    MR_Word KindMap_13;
    MR_Word ExistQVars_14;
    MR_Word Constraints_15;
    MR_Word Args_16;
    MR_Word ArgTypes_18;
    MR_Word TypeCtorArgs_20;
    MR_Word TypeCtor_21;
    MR_Word RetType_22;
    MR_Word Var_23;
    MR_Word TypeCtor_36;
    MR_Word Ctors_51;
    MR_Word _TypeCtor_10;
    MR_Word _Context_17;
    MR_Word Var_37;
    MR_Word Var_38;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_6, &TypeCtor_36);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_51);
      succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_51, TypeCtor_36, ConsId_7, &ConsDefn_9);
      if (succeeded)
      {
        _TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 0)));
        TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 1)));
        TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 2)));
        KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 3)));
        ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 4)));
        Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 5)));
        Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 6)));
        _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_9, (MR_Integer) 7)));
        succeeded = ((MR_tag((MR_Word) ExistQVars_14)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExistQVars_14, (MR_Integer) 0)));
          Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExistQVars_14, (MR_Integer) 1)));
          TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
          TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          Var_23 = (MR_Word) &check_hlds__type_util_scalar_common_2[4];
          ArgTypes_18 = mercury__list__map_2_f_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, Var_23, Args_16);
          parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_13, TypeParams_12, &TypeCtorArgs_20);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(VarType_6, &TypeCtor_21);
          if (succeeded)
          {
            parse_tree__prog_type__construct_type_3_p_0(TypeCtor_21, TypeCtorArgs_20, &RetType_22);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *CtorDefn_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeVarSet_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistQVars_14));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (KindMap_13));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Constraints_15));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ArgTypes_18));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (RetType_22));
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
check_hlds__type_util__get_cons_defn_det_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * ConsDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsDefnPrime_9;
    MR_Word Ctors_17;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_17);
    succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_17, TypeCtor_6, ConsId_7, &ConsDefnPrime_9);
    if (succeeded)
      *ConsDefn_8 = ConsDefnPrime_9;
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
    MR_Word conv2_LambdaHeadVar__2_31;

    conv2_LambdaHeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1150__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7) = ((MR_Word) (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7);
    (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_14 = ((MR_Word) (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Var_14);
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
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_Word Var_24;

      hlds__hlds_module__module_info_get_cons_table_2_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15);
      (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, *((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7), &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16);
      if ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
      {
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 1)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 2)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 3)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 4)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 5)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 6)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 7)));
        (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
        {
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__map__from_corresponding_lists_3_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25);
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_29 = (MR_Word) &check_hlds__type_util_scalar_common_2[3];
          (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26 = mercury__list__map_2_f_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Var_29, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0((env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26, (env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8);
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
      MR_Word TypeCtorInfo_44_44;
      MR_Word TypeCtorInfo_45_45;
      MR_Word TypeTable_11;
      MR_Word TypeDefn_12;
      MR_Word TypeDefnBody_13;
      MR_Word Var_28;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;

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
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 0)));
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 1)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 2)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 3)));
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 4)));
            Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 5)));
            Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 6)))) & (MR_Integer) 1);
            Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_13, (MR_Integer) 7)));
            TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
            TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
            mercury__map__member_3_p_0(TypeCtorInfo_44_44, TypeCtorInfo_45_45, Var_28, &(env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7, &(env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_Var_14, check_hlds__type_util__cons_id_arg_types_4_p_0_2, &env);
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
    MR_Word conv0_LambdaHeadVar__2_34;

    conv0_LambdaHeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
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
        MR_Word ExistQVars0_22;
        MR_Word Args_24;
        MR_Word ConsDefn_17;
        MR_Word Ctors_50;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_23;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_50);
        succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_50, TypeCtor_15, ConsId_7, &ConsDefn_17);
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 1)));
          TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 3)));
          ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 4)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 5)));
          Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 6)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 7)));
          succeeded = ((MR_tag((MR_Word) Args_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_24, (MR_Integer) 0)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_24, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_39_43;
          MR_Word TypeCtorInfo_40_44;
          MR_Word TypeCtorInfo_41_45;
          MR_Word TSubst_30;
          MR_Word ArgTypes0_31;
          MR_Word Var_36;

          succeeded = (ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            TypeInfo_39_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
            TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            mercury__map__from_corresponding_lists_3_p_0(TypeInfo_39_43, TypeCtorInfo_40_44, TypeParams_20, TypeArgs_16, &TSubst_30);
            TypeCtorInfo_41_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            Var_36 = (MR_Word) &check_hlds__type_util_scalar_common_2[2];
            ArgTypes0_31 = mercury__list__map_2_f_0(TypeCtorInfo_41_45, TypeCtorInfo_40_44, Var_36, Args_24);
            parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TSubst_30, ArgTypes0_31, ArgTypes_8);
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
    MR_Word conv0_LambdaHeadVar__2_34;

    conv0_LambdaHeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1125__2_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
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
        MR_Word ExistQVars0_22;
        MR_Word Args_24;
        MR_Word ConsDefn_17;
        MR_Word Ctors_50;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_23;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_50);
        succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(Ctors_50, TypeCtor_15, ConsId_7, &ConsDefn_17);
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 1)));
          TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 3)));
          ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 4)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 5)));
          Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 6)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 7)));
          succeeded = ((MR_tag((MR_Word) Args_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_24, (MR_Integer) 0)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_24, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_40_44;
          MR_Word TSubst_30;
          MR_Word ArgTypes0_31;

          if (!((ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_id_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
              return;
            }
          }
          TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], TypeCtorInfo_40_44, TypeParams_20, TypeArgs_16, &TSubst_30);
          ArgTypes0_31 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, TypeCtorInfo_40_44, (MR_Word) &check_hlds__type_util_scalar_common_2[1], Args_24);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TSubst_30, ArgTypes0_31, ArgTypes_8);
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
    MR_Word Var_15;
    MR_String Var_16;
    MR_Integer Var_17;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0)));
      Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1)));
      succeeded = (Var_17 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
          succeeded = (strcmp(Var_16, (MR_String) "character") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Globals_8;
        MR_Word Target_9;
        MR_Integer MinChar_10;
        MR_Integer MaxChar_11;
        MR_Integer Var_18;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_8);
        libs__globals__get_target_2_p_0(Globals_8, &Target_9);
        backend_libs__string_encoding__target_char_range_3_p_0(Target_9, &MinChar_10, &MaxChar_11);
        Var_18 = (MaxChar_11 - MinChar_10);
        *NumFunctors_6 = (Var_18 + (MR_Integer) 1);
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
          MR_Word TypeCtorInfo_29_29;
          MR_Word TypeCtorInfo_30_30;
          MR_Word TypeTable_12;
          MR_Word TypeDefn_13;
          MR_Word TypeBody_14;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_12);
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_7, &TypeDefn_13);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_13, &TypeBody_14);
            succeeded = ((MR_tag((MR_Word) TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 4)));
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 5)));
              Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
              Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 7)));
              TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
              TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
              mercury__map__count_2_p_0(TypeCtorInfo_29_29, TypeCtorInfo_30_30, Var_20, NumFunctors_6);
              succeeded = MR_TRUE;
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
    MR_bool succeeded;
    MR_Word TypeMayUseAtomic_6;
    MR_Word TypeCategory_7;
    MR_Word TypeCtor_27;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_27);
    if (succeeded)
      TypeCategory_7 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_4, TypeCtor_27);
    else
      TypeCategory_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
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
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCategory_7, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) Var_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Globals_10;
                    MR_Word UBF_11;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_10);
                    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 254, &UBF_11);
                    switch (UBF_11) {
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
              TypeMayUseAtomic_6 = (MR_Integer) 0;
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
              MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_7, (MR_Integer) 1)));

              TypeMayUseAtomic_6 = ((&check_hlds__type_util_vector_common_8[0 + Var_23]))->check_hlds__type_util__vector_common_type_8_0__vct_8_f_0;
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
      TypeCategory_6 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_4, TypeCtor_7);
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
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 0)));
    MR_Word Var_22;
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 1)));
    MR_Word Var_24;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
      Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
      Var_24 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_22, Var_24);
      if (succeeded)
      {
        succeeded = (Var_23 == (MR_Integer) 0);
        if (succeeded)
        {
          // binary string simple lookup switch
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_5, ((&check_hlds__type_util_vector_common_7[0 + mid_2]))->check_hlds__type_util__vector_common_type_7_0__vct_7_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (mid_2 - (MR_Integer) 1);
            else
              lo_0 = (mid_2 + (MR_Integer) 1);
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
                  MR_Word IsForeignType_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 7)));
                  MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 0)));
                  MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 1)));
                  MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 2)));
                  MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 3)));
                  MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 4)));
                  MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 5)));
                  MR_Word Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 6)))) & (MR_Integer) 1);
                  MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                  succeeded = (IsForeignType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
check_hlds__type_util__check_dummy_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = check_hlds__type_util__check_dummy_type_2_3_f_0(ModuleInfo_4, Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsDummy_8;

    // setup for tailcalls optimized into a loop
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

        IsBuiltinDummy_11 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(TypeCtor_9);
        switch (IsBuiltinDummy_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsDummy_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeTable_12;
              MR_Word TypeDefn_13;

              hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_12);
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_9, &TypeDefn_13);
              if (succeeded)
              {
                MR_Word TypeBody_14;

                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_13, &TypeBody_14);
                switch (MR_tag((MR_Word) TypeBody_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DuTypeKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
                      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
                      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
                      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
                      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 4)));
                      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 5)));
                      MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                      MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 7)));

                      switch (MR_tag((MR_Word) DuTypeKind_18)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(DuTypeKind_18)) {
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
                            MR_Word SingleArgTypeInDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_18, (MR_Integer) 1)));
                            MR_Word TypeParams_28;
                            MR_Word Subst_29;
                            MR_Word SingleArgType_30;
                            MR_Word Var_35;
                            MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_18, (MR_Integer) 0)));
                            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_18, (MR_Integer) 2)));
                            MR_Word next_value_of_Type_6;
                            MR_Word next_value_of_CoveredTypes_7;

                            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_13, &TypeParams_28);
                            mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_28, ArgTypes_10, &Subst_29);
                            parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_29, SingleArgTypeInDefn_26, &SingleArgType_30);
                            {
                              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Type_6));
                              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (CoveredTypes_7));
                            }
                            // direct tailcall eliminated
                            next_value_of_Type_6 = SingleArgType_30;
                            next_value_of_CoveredTypes_7 = Var_35;
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

    (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10 = ((MR_Word) (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10);
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
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Word Var_15;
      MR_Word Var_7;
      MR_Word Var_8;

      (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 2)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 3)));
      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 4)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 5)));
      (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_9)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      {
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_9, (MR_Integer) 0)));
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_9, (MR_Integer) 1)));
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
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10, (env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, env_ptr);
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

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_4, (MR_Integer) 0)));
          MR_Word TypeBody_22;
          MR_Word TypeDefn_26;
          MR_Word TypeCtor_30;
          MR_Word next_value_of_TypeBody_4;

          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_9, &TypeCtor_30);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_3, TypeCtor_30, &TypeDefn_26);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_26, &TypeBody_22);
              // direct tailcall eliminated
              next_value_of_TypeBody_4 = TypeBody_22;
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

              succeeded = (AbstractType_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_4, (MR_Integer) 0)));
          MR_Word TypeBody_22;
          MR_Word TypeDefn_26;
          MR_Word TypeTable_30;
          MR_Word TypeCtor_31;
          MR_Word next_value_of_TypeBody_4;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_30);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_9, &TypeCtor_31);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_30, TypeCtor_31, &TypeDefn_26);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_26, &TypeBody_22);
              // direct tailcall eliminated
              next_value_of_TypeBody_4 = TypeBody_22;
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

              succeeded = (AbstractType_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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
      MR_Word TypeBody_24;
      MR_Word TypeDefn_28;
      MR_Word TypeTable_32;
      MR_Word TypeCtor_33;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_32);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(EqvType_9, &TypeCtor_33);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_32, TypeCtor_33, &TypeDefn_28);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_28, &TypeBody_24);
          if (((MR_tag((MR_Word) TypeBody_24)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word EqvType_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_24, (MR_Integer) 0)));

            succeeded = check_hlds__type_util__type_has_solver_type_details_3_p_0(ModuleInfo_4, EqvType_39, SolverTypeDetails_6);
          }
          else
          if (((((MR_tag((MR_Word) TypeBody_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            MR_Word DetailsSolver_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 1)));
            MR_Word _MaybeUserEqComp_38;

            *SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_37, (MR_Integer) 0)));
            _MaybeUserEqComp_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_37, (MR_Integer) 1)));
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

    // setup for tailcalls optimized into a loop
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

    // setup for tailcalls optimized into a loop
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

                    succeeded = (Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SeenTypes_16;

    succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_SeenTypes_16);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SeenTypes_16));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word TypeBody_8,
  MR_Word STATE_VARIABLE_SeenTypes_0_29,
  MR_Word * STATE_VARIABLE_SeenTypes_30)
{
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_Word Target_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    libs__globals__get_target_2_p_0(Globals_10, &Target_11);
    switch (MR_tag((MR_Word) TypeBody_8)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word ForeignTypeBody_37 = (MR_Word) MR_body(((MR_Word) TypeBody_8), (MR_Integer) 0);
          MR_Word Var_25;

          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_6, ForeignTypeBody_37, &Var_25);
          succeeded = !(succeeded);
          if (succeeded)
          {
            *STATE_VARIABLE_SeenTypes_30 = STATE_VARIABLE_SeenTypes_0_29;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignTypeBody_21;
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 7)));
          MR_Word Var_33;
          MR_Word Var_59;
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 0)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 1)));
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 2)));
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 3)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 4)));
          MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 5)));
          MR_Word Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

          succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ForeignTypeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0)));
            Var_33 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_11, ForeignTypeBody_21, &Var_59);
            succeeded = (Var_33 == Var_59);
          }
          if (succeeded)
          {
            MR_Word Var_22;

            succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_6, ForeignTypeBody_21, &Var_22);
            succeeded = !(succeeded);
            if (succeeded)
            {
              *STATE_VARIABLE_SeenTypes_30 = STATE_VARIABLE_SeenTypes_0_29;
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word TypeCtorInfo_57_57;
            MR_Word TypeInfo_58_58;
            MR_Word Ctors_23;
            MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 4)));
            MR_Word Var_35;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 0)));
            MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 1)));
            MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 2)));
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 3)));
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 5)));
            MR_Word Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_8, (MR_Integer) 7)));
            MR_Box conv1_STATE_VARIABLE_SeenTypes_30;

            succeeded = (Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_6, Type_7, &Ctors_23);
              if (succeeded)
              {
                TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                TypeInfo_58_58 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
                {
                  Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleInfo_6));
                }
                succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_57_57, TypeInfo_58_58, Var_35, Ctors_23, ((MR_Box) (STATE_VARIABLE_SeenTypes_0_29)), &conv1_STATE_VARIABLE_SeenTypes_30);
                if (succeeded)
                {
                  *STATE_VARIABLE_SeenTypes_30 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_30);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_8, (MR_Integer) 0)));
          MR_Word Var_63;
          MR_Word Var_62;

          Var_63 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(ModuleInfo_6, EqvType_24, Var_63, &Var_62);
          if (succeeded)
          {
            *STATE_VARIABLE_SeenTypes_30 = STATE_VARIABLE_SeenTypes_0_29;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_8, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_8, (MR_Integer) 1)));
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_26, (MR_Integer) 1)));
              MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_26, (MR_Integer) 0)));

              succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                *STATE_VARIABLE_SeenTypes_30 = STATE_VARIABLE_SeenTypes_0_29;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
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
            MR_Word TypeCtorInfo_15_56;
            MR_Word TypeInfo_16_57;
            MR_Word TypeBody_24;
            MR_Word STATE_VARIABLE_SeenTypes_31_31;
            MR_Word Args_34;
            MR_Word TypeDefn_40;
            MR_Word TypeTable_44;
            MR_Word TypeCtor_45;
            MR_Word Var_51;
            MR_Word Var_25;
            MR_Box conv1_STATE_VARIABLE_SeenTypes_29;

            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_44);
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_45);
            if (succeeded)
            {
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_44, TypeCtor_45, &TypeDefn_40);
              if (succeeded)
              {
                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_24);
                succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(ModuleInfo_5, Type_6, TypeBody_24, STATE_VARIABLE_SeenTypes_30_30, &STATE_VARIABLE_SeenTypes_31_31);
                if (succeeded)
                {
                  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_25, &Args_34);
                  TypeCtorInfo_15_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  TypeInfo_16_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
                  {
                    Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
                    MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_5));
                  }
                  succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_15_56, TypeInfo_16_57, Var_51, Args_34, ((MR_Box) (STATE_VARIABLE_SeenTypes_31_31)), &conv1_STATE_VARIABLE_SeenTypes_29);
                  if (succeeded)
                  {
                    *STATE_VARIABLE_SeenTypes_29 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_29);
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
                MR_Word Var_63;
                MR_Word _Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2)));
                MR_Box conv3_STATE_VARIABLE_SeenTypes_29;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_5));
                }
                succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[5], Var_63, Args_9, ((MR_Box) (STATE_VARIABLE_SeenTypes_30_30)), &conv3_STATE_VARIABLE_SeenTypes_29);
                if (succeeded)
                {
                  *STATE_VARIABLE_SeenTypes_29 = ((MR_Word) conv3_STATE_VARIABLE_SeenTypes_29);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_15_56;
                MR_Word TypeInfo_16_57;
                MR_Word TypeBody_24;
                MR_Word STATE_VARIABLE_SeenTypes_31_31;
                MR_Word Args_34;
                MR_Word TypeDefn_40;
                MR_Word TypeTable_44;
                MR_Word TypeCtor_45;
                MR_Word Var_51;
                MR_Word Var_25;
                MR_Box conv1_STATE_VARIABLE_SeenTypes_29;

                hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_44);
                succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_45);
                if (succeeded)
                {
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_44, TypeCtor_45, &TypeDefn_40);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_24);
                    succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(ModuleInfo_5, Type_6, TypeBody_24, STATE_VARIABLE_SeenTypes_30_30, &STATE_VARIABLE_SeenTypes_31_31);
                    if (succeeded)
                    {
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_25, &Args_34);
                      TypeCtorInfo_15_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                      TypeInfo_16_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
                      {
                        Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
                        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_5));
                      }
                      succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_15_56, TypeInfo_16_57, Var_51, Args_34, ((MR_Box) (STATE_VARIABLE_SeenTypes_31_31)), &conv1_STATE_VARIABLE_SeenTypes_29);
                      if (succeeded)
                      {
                        *STATE_VARIABLE_SeenTypes_29 = ((MR_Word) conv1_STATE_VARIABLE_SeenTypes_29);
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

static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__type_constructors__1003__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
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
        MR_Word TypeCtorInfo_39_39;
        MR_Word Context_11;
        MR_Word CtorArgs_12;
        MR_Word Var_18;
        MR_Word Var_23;
        MR_Integer Var_26;

        Context_11 = mercury__term__context_init_0_f_0();
        TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Context_11));
        }
        CtorArgs_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeCtorInfo_39_39, Var_18, TypeArgs_8);
        Var_26 = mercury__list__length_1_f_0(TypeCtorInfo_39_39, CtorArgs_12);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[6]));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (CtorArgs_12));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Context_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Constructors_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeTable_14;
        MR_Word TypeDefn_15;
        MR_Word TypeParams_16;
        MR_Word TypeBody_17;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_14);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, TypeCtor_7, &TypeDefn_15);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_15, &TypeParams_16);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_17);
          succeeded = ((MR_tag((MR_Word) TypeBody_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 0)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 1)));
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 2)));
            Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 3)));
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 4)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 5)));
            Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 6)))) & (MR_Integer) 1);
            Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_17, (MR_Integer) 7)));
            if ((TypeParams_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *Constructors_6 = Var_28;
            else
            {
              MR_Word Subst_46;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeParams_16, TypeArgs_8, &Subst_46);
              check_hlds__type_util__substitute_type_args_2_3_p_0(Subst_46, Var_28, Constructors_6);
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
check_hlds__type_util__substitute_type_args_2_3_p_0(
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
    MR_Word ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 0)));
    MR_Word Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 1)));
    MR_Word Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 2)));
    MR_Word Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 3)));
    MR_Integer Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 4)));
    MR_Word Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_6, (MR_Integer) 5)));
    MR_Word Args_16;

    check_hlds__type_util__substitute_type_args_3_3_p_0(Subst_1, Args0_13, &Args_16);
    check_hlds__type_util__substitute_type_args_2_3_p_0(Subst_1, Ctors0_7, &Ctors_9);
    {
      Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Ctor_8, 0) = ((MR_Box) (ExistQVars_10));
      MR_hl_field(MR_mktag(0), Ctor_8, 1) = ((MR_Box) (Constraints_11));
      MR_hl_field(MR_mktag(0), Ctor_8, 2) = ((MR_Box) (Name_12));
      MR_hl_field(MR_mktag(0), Ctor_8, 3) = ((MR_Box) (Args_16));
      MR_hl_field(MR_mktag(0), Ctor_8, 4) = ((MR_Box) (Arity_14));
      MR_hl_field(MR_mktag(0), Ctor_8, 5) = ((MR_Box) (Ctxt_15));
    }
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
check_hlds__type_util__substitute_type_args_3_3_p_0(
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
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 3)));
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_16;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_1, Var_11, &ArgType_10);
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 0)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 1)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 2)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 3)));
    {
      Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_8, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Arg_8, 1) = ((MR_Box) (ArgType_10));
      MR_hl_field(MR_mktag(0), Arg_8, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Arg_8, 3) = ((MR_Box) (Var_18));
    }
    check_hlds__type_util__substitute_type_args_3_3_p_0(Subst_1, Args0_7, &Args_9);
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
  MR_Word * UserEqComp_6)
{
  {
    MR_bool succeeded;
    MR_Word Globals_7;
    MR_Word Target_8;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
    libs__globals__get_target_2_p_0(Globals_7, &Target_8);
    switch (MR_tag((MR_Word) TypeBody_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word ForeignTypeBody_27 = (MR_Word) MR_body(((MR_Word) TypeBody_5), (MR_Integer) 0);

          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_27, UserEqComp_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignTypeBody_18;
          MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 7)));
          MR_Word Var_25;
          MR_Word Var_44;
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
          MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 4)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 5)));
          MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ForeignTypeBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0)));
            Var_25 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_8, ForeignTypeBody_18, &Var_44);
            succeeded = (Var_25 == Var_44);
          }
          if (succeeded)
            succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_18, UserEqComp_6);
          else
          {
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 4)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 5)));
            MR_Word Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 7)));

            succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              *UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
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
              MR_Word DetailsSolver_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 1)));
              MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_19, (MR_Integer) 1)));
              MR_Word _SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_19, (MR_Integer) 0)));

              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                *UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
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

    TypeCategory_5 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_3, TypeCtor_4);
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
              MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_5, (MR_Integer) 1)));

              succeeded = (Var_15 == (MR_Integer) 0);
            }
            break;
        }
        break;
    }
    return succeeded;
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
    MR_Word TypeSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0)));
    MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1)));
    MR_Word TypeCategoryPrime_11;
    MR_String TypeName_9;
    MR_Word IntType_10;

    succeeded = (Arity_8 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) TypeSymName_7)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeSymName_7, (MR_Integer) 0)));
        succeeded = parse_tree__prog_data__int_type_to_string_2_p_1(&IntType_10, TypeName_9);
        if (succeeded)
        {
          MR_Word Var_19;

          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (IntType_10));
          }
          {
            TypeCategoryPrime_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeCategoryPrime_11, 0) = ((MR_Box) (Var_19));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer lo_0 = (MR_Integer) 0;
          MR_Integer hi_1 = (MR_Integer) 3;
          MR_Integer mid_2;
          MR_Integer result_3;

          // binary string simple lookup switch
          do
          {
            mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(TypeName_9, ((&check_hlds__type_util_vector_common_4[0 + mid_2]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              TypeCategoryPrime_11 = ((&check_hlds__type_util_vector_common_4[0 + mid_2]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (mid_2 - (MR_Integer) 1);
            else
              lo_0 = (mid_2 + (MR_Integer) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    if (succeeded)
      TypeCategory_6 = TypeCategoryPrime_11;
    else
    {
      MR_Word TypeCategoryPrime_35;
      MR_Word ModuleSymName_12;
      MR_String TypeName_28;
      MR_Word Var_36;
      MR_Integer lo_4;
      MR_Integer hi_5;
      MR_Integer mid_6;
      MR_Integer result_7;

      succeeded = ((MR_tag((MR_Word) TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ModuleSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_7, (MR_Integer) 0)));
        TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_7, (MR_Integer) 1)));
        Var_36 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_12, Var_36);
        if (succeeded)
        {
          succeeded = (Arity_8 == (MR_Integer) 0);
          if (succeeded)
          {
            // binary string simple lookup switch
            lo_4 = (MR_Integer) 0;
            hi_5 = (MR_Integer) 3;
            do
            {
              mid_6 = (((lo_4 + hi_5)) / (MR_Integer) 2);
              result_7 = MR_strcmp(TypeName_28, ((&check_hlds__type_util_vector_common_4[4 + mid_6]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
              if ((result_7 == (MR_Integer) 0))
              {
                TypeCategoryPrime_35 = ((&check_hlds__type_util_vector_common_4[4 + mid_6]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                goto label_1;
              }
              else
              if ((result_7 < (MR_Integer) 0))
                hi_5 = (mid_6 - (MR_Integer) 1);
              else
                lo_4 = (mid_6 + (MR_Integer) 1);
            }
            while ((lo_4 <= hi_5));
            succeeded = MR_FALSE;
          label_1:;
          }
        }
      }
      if (succeeded)
        TypeCategory_6 = TypeCategoryPrime_35;
      else
      {
        MR_Word TypeCategoryPrime_32;
        MR_String TypeName_29;
        MR_Word ModuleSymName_30;
        MR_Word Var_37;
        MR_Integer lo_8;
        MR_Integer hi_9;
        MR_Integer mid_10;
        MR_Integer result_11;

        succeeded = ((MR_tag((MR_Word) TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ModuleSymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_7, (MR_Integer) 0)));
          TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_7, (MR_Integer) 1)));
          Var_37 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_30, Var_37);
          if (succeeded)
          {
            succeeded = (Arity_8 == (MR_Integer) 0);
            if (succeeded)
            {
              // binary string simple lookup switch
              lo_8 = (MR_Integer) 0;
              hi_9 = (MR_Integer) 3;
              do
              {
                mid_10 = (((lo_8 + hi_9)) / (MR_Integer) 2);
                result_11 = MR_strcmp(TypeName_29, ((&check_hlds__type_util_vector_common_4[8 + mid_10]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
                if ((result_11 == (MR_Integer) 0))
                {
                  TypeCategoryPrime_32 = ((&check_hlds__type_util_vector_common_4[8 + mid_10]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_1;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  goto label_2;
                }
                else
                if ((result_11 < (MR_Integer) 0))
                  hi_9 = (mid_10 - (MR_Integer) 1);
                else
                  lo_8 = (mid_10 + (MR_Integer) 1);
              }
              while ((lo_8 <= hi_9));
              succeeded = MR_FALSE;
            label_2:;
            }
          }
        }
        if (succeeded)
          TypeCategory_6 = TypeCategoryPrime_32;
        else
        {
          MR_Word Var_27;

          Var_27 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(TypeCtor_5);
          succeeded = (Var_27 == (MR_Integer) 0);
          if (succeeded)
            TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          else
          {
            MR_Word Var_13;
            MR_Word Var_14;

            succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_5, &Var_13, &Var_14);
            if (succeeded)
              TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
            {
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_5);
              if (succeeded)
                TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              else
              {
                MR_Word TypeTable_16;
                MR_Word TypeDefn_17;
                MR_Word TypeBody_18;

                hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_16);
                hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_16, TypeCtor_5, &TypeDefn_17);
                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_17, &TypeBody_18);
                TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_18);
              }
            }
          }
        }
      }
    }
    return TypeCategory_6;
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
          TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 3)));
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 0)));
          MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 1)));
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 2)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 4)));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 5)));
          MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_3, (MR_Integer) 7)));

          switch (MR_tag((MR_Word) DuTypeKind_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[2]);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[7]);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[1]);
              }
              break;
            case (MR_Integer) 2:
              {
                TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[8]);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) Var_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Var_36)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__type_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.type_util.
