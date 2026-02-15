/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version rotd-2026-02-15
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


// :- module hlds.type_util.
// :- implementation.

/*
INIT mercury__hlds__type_util__init
ENDINIT
*/

#include "hlds.type_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.string_encoding.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
  MR_bool hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
  jmp_buf hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9;
  MR_Box hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_VA_PseudoTypeInfo_Struct3 hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct1 hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_PseudoTypeInfo hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0[5];

static const MR_ConstString hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0[5];

static const MR_DuFunctorDesc hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0;

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0[1];

static const MR_DuPtagLayout hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0[1];

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0[1];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0[1];

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0[2];

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0[2];

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0;

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1;

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0[2];

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0[2];

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1598__1_1_f_0(
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__2_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__681__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static MR_bool MR_CALL 
hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1729__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_24,
  MR_Integer NumTypeInfos_27);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1670__1_1_f_0(
  MR_Word LambdaHeadVar__1_23);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__type_constructors__1386__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6);

static MR_bool MR_CALL 
hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4);

static MR_Box MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0(
  MR_Word TypeParams_5,
  MR_Word TypeCtorArgTypes_6,
  MR_Word Ctor_7,
  MR_Tuple * HeadVar__4_4);

static MR_bool MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * STATE_VARIABLE_SeenTypes_16);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * DuCtorConsRepn_8);

static MR_bool MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_27,
  MR_Word * STATE_VARIABLE_SeenTypes_28);

static MR_Box MR_CALL 
hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__type_util_scalar_common_1[17][2];

static /* final */ const MR_Box hlds__type_util_scalar_common_2[4][5];

static /* final */ const MR_Box hlds__type_util_scalar_common_3[7][3];

static /* final */ const MR_Box hlds__type_util_scalar_common_4[26][1];

static /* final */ const MR_Box hlds__type_util_scalar_common_5[10][6];

static /* final */ const MR_Box hlds__type_util_scalar_common_6[3][7];

static /* final */ const MR_Box hlds__type_util_scalar_common_10[1][8];


struct hlds__type_util__vector_common_type_7_0_s {
  const MR_String hlds__type_util__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__type_util__vector_common_type_7_0_s hlds__type_util_vector_common_7[4];

struct hlds__type_util__vector_common_type_8_0_s {
  const MR_Word hlds__type_util__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__type_util__vector_common_type_8_0_s hlds__type_util_vector_common_8[4];

struct hlds__type_util__vector_common_type_9_0_s {
  const MR_String hlds__type_util__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer hlds__type_util__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct hlds__type_util__vector_common_type_9_0_s hlds__type_util_vector_common_9[4];



static /* final */ const MR_Box hlds__type_util_scalar_common_1[17][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_2[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__type_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_3[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__type_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_du_ctor_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_user_ctor_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_4[26][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "builtin")) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[3]))) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[5]))) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   8 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[7]))) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[9]))) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[11]))) },
  /* row  13 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  14 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row  15 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[14]))) },
  /* row  16 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row  17 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[16]))) },
  /* row  18 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[18]))) },
  /* row  20 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row  21 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[20]))) },
  /* row  22 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  23 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_util_scalar_common_4[22]))) },
  /* row  24 */
  { ((MR_Box) ((MR_String) "store")) },
  /* row  25 */
  { ((MR_Box) ((MR_String) "{}")) },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_5[10][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
};


static /* final */ const struct hlds__type_util__vector_common_type_7_0_s hlds__type_util_vector_common_7[4] = {
  /* row   0 */   { (MR_String) "base_typeclass_info" },
  /* row   1 */   { (MR_String) "type_ctor_info" },
  /* row   2 */   { (MR_String) "type_info" },
  /* row   3 */   { (MR_String) "typeclass_info" },
};

static /* final */ const struct hlds__type_util__vector_common_type_8_0_s hlds__type_util_vector_common_8[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
};

static /* final */ const struct hlds__type_util__vector_common_type_9_0_s hlds__type_util_vector_common_9[4] = {
  /* row   0 */
  {
    (MR_String) "int16",
    (MR_Integer) 65536
  },
  /* row   1 */
  {
    (MR_String) "int8",
    (MR_Integer) 256
  },
  /* row   2 */
  {
    (MR_String) "uint16",
    (MR_Integer) 65536
  },
  /* row   3 */
  {
    (MR_String) "uint8",
    (MR_Integer) 256
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_PseudoTypeInfo hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0),
  (MR_PseudoTypeInfo) (&hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0[5] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_maybe_exist",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

static const MR_DuFunctorDesc hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 = {
  (MR_String) "ctor_defn",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0,
  hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0[1] = { &hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 };

static const MR_DuPtagLayout hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0[1] = { &hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 };

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__type_util____Unify____ctor_defn_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____ctor_defn_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "ctor_defn",
  { hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0 },
  { hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0,

};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__type_util____Unify____exist_qvar_action_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____exist_qvar_action_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "exist_qvar_action",
  { hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0 },
  { hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0,

};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0 = {
  (MR_String) "at_least_one_is_dummy_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1 = {
  (MR_String) "neither_is_dummy_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_is_either_dummy_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__type_util____Unify____is_either_dummy_type_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____is_either_dummy_type_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "is_either_dummy_type",
  { hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0 },
  { hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0,

};

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1598__1_1_f_0(
  MR_Word LambdaHeadVar__1_20)
{
  MR_Word LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_20, 1))));

  return LambdaHeadVar__2_21;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__2_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_30, 1))));

  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_30, 1))));

  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__681__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_19, 1))));

  return LambdaHeadVar__2_20;
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_15;
  MR_Word L_16;
  MR_Word Var_32;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_15);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_32, L0_15, &L_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_16, LambdaHeadVar__2_26);
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_15;
  MR_Word L_16;
  MR_Word Var_32;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_15);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_32, L0_15, &L_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_16, LambdaHeadVar__2_26);
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_16;
  MR_Word L_17;
  MR_Word Var_38;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_16);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_38, L0_16, &L_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_17, LambdaHeadVar__2_26);
}

static MR_bool MR_CALL 
hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1729__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_24,
  MR_Integer NumTypeInfos_27)
{
  MR_bool succeeded = (NumTypeInfos_27 == NumUnconstrainedExistQTVarsEC_24);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1670__1_1_f_0(
  MR_Word LambdaHeadVar__1_23)
{
  MR_Word LambdaHeadVar__2_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, 1))));

  return LambdaHeadVar__2_24;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__type_constructors__1386__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20;

  {
    LambdaHeadVar__2_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LambdaHeadVar__2_20, 1) = ((MR_Box) (LambdaHeadVar__1_19));
    MR_hl_field(0, LambdaHeadVar__2_20, 2) = ((MR_Box) (Context_10));
  }
  return LambdaHeadVar__2_20;
}

void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__type_util____Unify____is_either_dummy_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_3[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____maybe_cons_exist_constraints_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__type_util_scalar_common_3[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&hlds__type_util_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  MR_Word Constraint_10;
  MR_Word Proof_12;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
  if (((MR_tag((MR_Word) Proof0_8)) == (MR_Integer) 0))
    Proof_12 = Proof0_8;
  else
  {
    MR_Word Super0_13 = ((MR_Word) ((MR_hl_field(1, Proof0_8, 0))));
    MR_Word Super_14;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
    {
      Proof_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Proof_12, 0) = ((MR_Box) (Super_14));
    }
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  MR_Word Constraint_10;
  MR_Word Proof_12;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
  if (((MR_tag((MR_Word) Proof0_8)) == (MR_Integer) 0))
    Proof_12 = Proof0_8;
  else
  {
    MR_Word Super0_13 = ((MR_Word) ((MR_hl_field(1, Proof0_8, 0))));
    MR_Word Super_14;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
    {
      Proof_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Proof_12, 0) = ((MR_Box) (Super_14));
    }
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
}

static void MR_CALL 
hlds__type_util__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6)
{
  if (((MR_tag((MR_Word) Proof0_5)) == (MR_Integer) 0))
    *Proof_6 = Proof0_5;
  else
  {
    MR_Word ClassConstraint0_8 = ((MR_Word) ((MR_hl_field(1, Proof0_5, 0))));
    MR_Word ClassConstraint_9;

    parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(TSubst_4, ClassConstraint0_8, &ClassConstraint_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Proof_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ClassConstraint_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_Word Type_6;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_5, 1))));
  succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_21;

  conv0_LambdaHeadVar__2_21 = hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1598__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0(
  MR_Word TypeParams_5,
  MR_Word TypeCtorArgTypes_6,
  MR_Word Ctor_7,
  MR_Tuple * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_25_25;
  MR_Word TypeCtorInfo_26_26;
  MR_Word TypeCtorInfo_27_27;
  MR_String Name_8;
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Ctor_7, 4))));
  MR_Word CtorArgTypes_10;
  MR_Word MaybeExistConstraints_12 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 1))));
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 2))));
  MR_Word CtorArgs_14 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 3))));
  MR_Word TSubst_16;
  MR_Word CtorArgTypes0_17;
  MR_Word Var_19;

  succeeded = (MaybeExistConstraints_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeInfo_25_25 = (MR_Word) (&hlds__type_util_scalar_common_1[0]);
    TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__map__from_corresponding_lists_3_p_0(TypeInfo_25_25, TypeCtorInfo_26_26, TypeParams_5, TypeCtorArgTypes_6, &TSubst_16);
    TypeCtorInfo_27_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
    Var_19 = (MR_Word) (&hlds__type_util_scalar_common_3[6]);
    CtorArgTypes0_17 = mercury__list__map_2_f_0(TypeCtorInfo_27_27, TypeCtorInfo_26_26, Var_19, CtorArgs_14);
    parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_16, CtorArgTypes0_17, &CtorArgTypes_10);
    Name_8 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (Arity_9));
      MR_hl_field(0, base, 2) = ((MR_Box) (CtorArgTypes_10));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SeenTypes_28;

  succeeded = hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SeenTypes_28);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SeenTypes_28));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  conv0_LambdaHeadVar__2_20 = hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__681__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_15,
  MR_Word * STATE_VARIABLE_SeenTypes_16)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_26_26;
  MR_Word TypeCtorInfo_27_27;
  MR_Word TypeInfo_31_31;
  MR_Word Args_10 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 3))));
  MR_Word ArgTypes_13;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 1))));
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_SeenTypes_16;

  succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
    TypeCtorInfo_27_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    Var_18 = (MR_Word) (&hlds__type_util_scalar_common_3[5]);
    ArgTypes_13 = mercury__list__map_2_f_0(TypeCtorInfo_26_26, TypeCtorInfo_27_27, Var_18, Args_10);
    TypeInfo_31_31 = (MR_Word) (&hlds__type_util_scalar_common_1[6]);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[1]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_5));
    }
    succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_27_27, TypeInfo_31_31, Var_21, ArgTypes_13, ((MR_Box) (STATE_VARIABLE_SeenTypes_0_15)), &conv2_STATE_VARIABLE_SeenTypes_16);
    if (succeeded)
    {
      *STATE_VARIABLE_SeenTypes_16 = ((MR_Word) (conv2_STATE_VARIABLE_SeenTypes_16));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[9]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_util__apply_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[9]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[8]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProofMap_16;

  hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProofMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
}

void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_ProofMap_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_util_scalar_common_10[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__type_util_scalar_common_3[0]), Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
  *ProofMap_6 = ((MR_Word) (conv1_ProofMap_6));
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProofMap_16;

  hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProofMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
}

void MR_CALL 
hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_ProofMap_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_util_scalar_common_10[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__type_util_scalar_common_3[0]), Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
  *ProofMap_6 = ((MR_Word) (conv1_ProofMap_6));
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Proof_6;

  hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Proof_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Proof_6));
}

void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_proof_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5);
  if (succeeded)
    *ProofMap_6 = ProofMap0_5;
  else
  {
    MR_Word Keys0_7;
    MR_Word Values0_8;
    MR_Word Keys_9;
    MR_Word Values_10;
    MR_Word Var_11;

    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5, &Keys0_7);
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5, &Values0_8);
    parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_4, Keys0_7, &Keys_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[7]));
      MR_hl_field(0, Var_11, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_11, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), Var_11, Values0_8, &Values_10);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), Keys_9, Values_10, ProofMap_6);
  }
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__1889__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
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
  MR_Word Var_36;

  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Unproven0_6, &Unproven_10);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Assumed0_7, &Assumed_11);
  {
    Pred_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Pred_12, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[5]));
    MR_hl_field(0, Pred_12, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_2));
    MR_hl_field(0, Pred_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Pred_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_12, Redundant0_8, &Redundant_17);
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsKeys0_18);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsValues0_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[6]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraint_db_3_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[5]), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Var_27, AncestorsValues0_19, &AncestorsValues_21);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ConstraintDb_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_22));
  }
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraint_db__1868__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_subst_to_constraint_db_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
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
  MR_Word Var_36;

  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraint_db_3_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Unproven0_6, &Unproven_10);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Assumed0_7, &Assumed_11);
  {
    Pred_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Pred_12, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[5]));
    MR_hl_field(0, Pred_12, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraint_db_3_p_0_2));
    MR_hl_field(0, Pred_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Pred_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_12, Redundant0_8, &Redundant_17);
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsKeys0_18);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsValues0_19);
  parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[6]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraint_db_3_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[5]), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Var_27, AncestorsValues0_19, &AncestorsValues_21);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ConstraintDb_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_22));
  }
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_util__IntroducedFrom__pred__apply_renaming_to_constraint_db__1839__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_db_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_bool succeeded;
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
  MR_Word TypeCtorInfo_31_31;
  MR_Word TypeInfo_32_32;
  MR_Word TypeCtorInfo_33_33;
  MR_Word TypeInfo_34_34;

  succeeded = (Unproven0_6 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (Assumed0_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_32_32 = (MR_Word) (&hlds__type_util_scalar_common_1[4]);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_31_31, TypeInfo_32_32, Redundant0_8);
      if (succeeded)
      {
        TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        TypeInfo_34_34 = (MR_Word) (&hlds__type_util_scalar_common_1[5]);
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_33_33, TypeInfo_34_34, Ancestors0_9);
      }
    }
  }
  if (succeeded)
    *STATE_VARIABLE_ConstraintDb_24 = STATE_VARIABLE_ConstraintDb_0_23;
  else
  {
    MR_Word Unproven_10;
    MR_Word Assumed_11;
    MR_Word Redundant_12;
    MR_Word Ancestors_18;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[1]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraint_db_3_p_0_1));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_44, Unproven0_6, &Unproven_10);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_44, Assumed0_7, &Assumed_11);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__type_util_scalar_common_1[4]), Redundant0_8);
    if (succeeded)
      Redundant_12 = Redundant0_8;
    else
    {
      MR_Word Pred_13;

      {
        Pred_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_13, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[3]));
        MR_hl_field(0, Pred_13, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraint_db_3_p_0_2));
        MR_hl_field(0, Pred_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Pred_13, 3) = ((MR_Box) (Renaming_4));
      }
      mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&hlds__type_util_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_13, Redundant0_8, &Redundant_12);
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9);
    if (succeeded)
      Ancestors_18 = Ancestors0_9;
    else
    {
      MR_Word AncestorsKeys0_19;
      MR_Word AncestorsValues0_20;
      MR_Word AncestorsKeys_21;
      MR_Word AncestorsValues_22;
      MR_Word Var_27;

      mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsKeys0_19);
      mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Ancestors0_9, &AncestorsValues0_20);
      parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_4, AncestorsKeys0_19, &AncestorsKeys_21);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[4]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraint_db_3_p_0_3));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = ((MR_Box) (Renaming_4));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[5]), (MR_Word) (&hlds__type_util_scalar_common_1[5]), Var_27, AncestorsValues0_20, &AncestorsValues_22);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_util_scalar_common_1[5]), AncestorsKeys_21, AncestorsValues_22, &Ancestors_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ConstraintDb_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
      MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_12));
      MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_18));
    }
  }
}

static void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
hlds__type_util__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[2]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_subst_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
hlds__type_util__apply_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_util__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_util__apply_renaming_to_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_util__apply_renaming_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

void MR_CALL 
hlds__type_util__apply_rec_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

void MR_CALL 
hlds__type_util__apply_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

void MR_CALL 
hlds__type_util__apply_renaming_to_constraint_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(
  MR_Word VarTable_4,
  MR_Word VarsSet0_5)
{
  MR_bool succeeded;
  MR_Word VarsSet_6;
  MR_Word VarsList0_7;
  MR_Word VarsList_8;
  MR_Word Var_10;

  VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsSet0_5);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, VarsList0_7, &VarsList_8);
  VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsList_8);
  return VarsSet_6;
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0(
  MR_Word VarTable_4,
  MR_Word VarsSet0_5)
{
  MR_bool succeeded;
  MR_Word VarsSet_6;
  MR_Word VarsList0_7;
  MR_Word VarsList_8;
  MR_Word Var_10;

  VarsList0_7 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), VarsSet0_5);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, VarsList0_7, &VarsList_8);
  VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), VarsList_8);
  return VarsSet_6;
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0(
  MR_Word VarTable_4,
  MR_Word Vars_5)
{
  MR_bool succeeded;
  MR_Word NonTypeInfoVars_6;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_7, Vars_5, &NonTypeInfoVars_6);
  return NonTypeInfoVars_6;
}

static MR_bool MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0(
  MR_Word VarTable_4,
  MR_Word Vars0_5)
{
  MR_bool succeeded;
  MR_Word Vars_6;
  MR_Word TypeInfoVars_7;
  MR_Word NonTypeInfoVars_8;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__filter_4_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, Vars0_5, &TypeInfoVars_7, &NonTypeInfoVars_8);
  Vars_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), TypeInfoVars_7, NonTypeInfoVars_8);
  return Vars_6;
}

MR_bool MR_CALL 
hlds__type_util__is_region_var_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_Word Var_6;
  MR_Word Var_9;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Entry_5, 1))));
  Var_9 = parse_tree__builtin_lib_types__region_type_0_f_0();
  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_6, Var_9);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_not_stored_in_region_2_p_0(
  MR_Word Type_3,
  MR_Word ModuleInfo_4)
{
  MR_bool succeeded;

  {
    MR_Word TypeCtor_10;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_3, &TypeCtor_10);
    if (succeeded)
      succeeded = hlds__type_util__type_ctor_is_atomic_2_p_0(ModuleInfo_4, TypeCtor_10);
  }
  if (!(succeeded))
  {
    {
      MR_Word Var_5;
      MR_Word TypeTable_11;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_11);
      Var_5 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_11, Type_3, (MR_Word) ((MR_Unsigned) 0U));
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
          succeeded = parse_tree__prog_type_test__type_is_var_1_p_0(Type_3);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1729__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

MR_Integer MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7)
{
  MR_bool succeeded;
  MR_Integer AdjustedArity_8;
  MR_Integer ConsArity_10 = ((MR_Integer) ((MR_hl_field(0, DuCtor_7, 1))));
  MR_Word ConsDefn_12;

  succeeded = hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_5, Type_6, DuCtor_7, &ConsDefn_12);
  if (succeeded)
  {
    MR_Word MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));

    if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
      AdjustedArity_8 = ConsArity_10;
    else
    {
      MR_Word ExistConstraints_18 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));
      MR_Word ExistQTVars_19 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 0))));
      MR_Word Constraints_20 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 1))));
      MR_Word UnconstrainedExistQTVarsEC_21 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 2))));
      MR_Integer NumTypeClassInfos_23;
      MR_Integer NumUnconstrainedExistQTVarsEC_24;
      MR_Word ConstrainedTVars_25;
      MR_Word UnconstrainedExistQTVars_26;
      MR_Integer NumTypeInfos_27;
      MR_Integer Var_28;
      MR_Word Var_29;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_20, &NumTypeClassInfos_23);
      mercury__list__length_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), UnconstrainedExistQTVarsEC_21, &NumUnconstrainedExistQTVarsEC_24);
      parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Constraints_20, &ConstrainedTVars_25);
      mercury__list__delete_elems_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), ExistQTVars_19, ConstrainedTVars_25, &UnconstrainedExistQTVars_26);
      mercury__list__length_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), UnconstrainedExistQTVars_26, &NumTypeInfos_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_27 + (MR_Unsigned) NumTypeClassInfos_23);
      AdjustedArity_8 = (MR_Integer) ((MR_Unsigned) Var_28 + (MR_Unsigned) ConsArity_10);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[2]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__type_util__du_ctor_adjusted_arity_3_f_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (NumUnconstrainedExistQTVarsEC_24));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (NumTypeInfos_27));
      }
      mercury__require__expect_3_p_0(Var_29, (MR_String) "function \140hlds.type_util.du_ctor_adjusted_arity\'/3", (MR_String) "NumTypeInfos != NumUnconstrainedExistQTVars");
    }
  }
  else
    AdjustedArity_8 = ConsArity_10;
  return AdjustedArity_8;
}

MR_bool MR_CALL 
hlds__type_util__type_is_no_tag_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word _Ctor_5;
  MR_Word _ArgType_6;

  succeeded = hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_3, Type_4, &_Ctor_5, &_ArgType_6);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_no_tag_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * Ctor_7,
  MR_Word * ArgType_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_18_18;
  MR_Word TypeCtorInfo_19_19;
  MR_Word TypeCtor_9;
  MR_Word ArgTypes_10;
  MR_Word NoTagTypes_11;
  MR_Word NoTagType_12;
  MR_Word TypeParams_13;
  MR_Word ArgType0_14;
  MR_Box conv0_NoTagType_12;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &ArgTypes_10);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_no_tag_types_2_p_0(ModuleInfo_5, &NoTagTypes_11);
    TypeCtorInfo_18_18 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
    TypeCtorInfo_19_19 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_18_18, TypeCtorInfo_19_19, NoTagTypes_11, ((MR_Box) (TypeCtor_9)), &conv0_NoTagType_12);
    if (succeeded)
    {
      NoTagType_12 = ((MR_Word) (conv0_NoTagType_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeParams_13 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 0))));
      *Ctor_7 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 1))));
      ArgType0_14 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 2))));
      if ((TypeParams_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *ArgType_8 = ArgType0_14;
      else
      {
        MR_Word Subn_17;

        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_13, ArgTypes_10, &Subn_17);
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subn_17, ArgType0_14, ArgType_8);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__cons_id_is_existq_cons_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word ConsId_6)
{
  MR_bool succeeded;
  MR_Word Var_7;
  MR_Word TypeCtor_8;
  MR_Word Var_10;
  MR_Word Ctors_17;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_8);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_4, &Ctors_17);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_17, TypeCtor_8, ConsId_6, &Var_7);
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(0, Var_7, 4))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_24;

  conv0_LambdaHeadVar__2_24 = hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1670__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * CtorDefn_8)
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
  MR_Word TypeCtor_30;
  MR_Word Ctors_39;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_30);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_39);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_39, TypeCtor_30, ConsId_7, &ConsDefn_9);
    if (succeeded)
    {
      TypeVarSet_11 = ((MR_Word) ((MR_hl_field(0, ConsDefn_9, 1))));
      TypeParams_12 = ((MR_Word) ((MR_hl_field(0, ConsDefn_9, 2))));
      KindMap_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn_9, 3))));
      MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_9, 4))));
      Args_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_9, 5))));
      succeeded = (MaybeExistConstraints_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_28_28 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
        TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_22 = (MR_Word) (&hlds__type_util_scalar_common_3[4]);
        ArgTypes_17 = mercury__list__map_2_f_0(TypeCtorInfo_28_28, TypeCtorInfo_29_29, Var_22, Args_15);
        parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_13, TypeParams_12, &TypeCtorArgs_19);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_20);
        if (succeeded)
        {
          parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_20, TypeCtorArgs_19, &RetType_21);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *CtorDefn_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (TypeVarSet_11));
            MR_hl_field(0, base, 1) = ((MR_Box) (KindMap_13));
            MR_hl_field(0, base, 2) = ((MR_Box) (MaybeExistConstraints_14));
            MR_hl_field(0, base, 3) = ((MR_Box) (ArgTypes_17));
            MR_hl_field(0, base, 4) = ((MR_Box) (RetType_21));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__get_cons_id_repn_defn_det_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * ConsRepnDefn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_5)) == (MR_Integer) 1);
  MR_Word ConsRepnDefnPrime_8;
  MR_Word DuCtor_7;

  if (succeeded)
  {
    DuCtor_7 = (MR_Word) (MR_body((MR_Word) (ConsId_5), (MR_Integer) 1));
    succeeded = hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_4, DuCtor_7, &ConsRepnDefnPrime_8);
  }
  if (succeeded)
    *ConsRepnDefn_6 = ConsRepnDefnPrime_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_id_repn_defn_det\'/3", (MR_String) "get_cons_repn_defn failed");
      return;
    }
}

void MR_CALL 
hlds__type_util__get_cons_repn_defn_det_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word DuCtor_5,
  MR_Word * ConsRepnDefn_6)
{
  MR_bool succeeded;
  MR_Word ConsRepnDefnPrime_7;

  succeeded = hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_4, DuCtor_5, &ConsRepnDefnPrime_7);
  if (succeeded)
    *ConsRepnDefn_6 = ConsRepnDefnPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_repn_defn_det\'/3", (MR_String) "get_cons_repn_defn failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__type_util__get_cons_repn_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word DuCtor_5,
  MR_Word * UserDataCTorConsRepn_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_30_30;
  MR_Word TypeInfo_31_31;
  MR_Word ConsSymName_7 = ((MR_Word) ((MR_hl_field(0, DuCtor_5, 0))));
  MR_Integer ConsArity_8 = ((MR_Integer) ((MR_hl_field(0, DuCtor_5, 1))));
  MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(0, DuCtor_5, 2))));
  MR_Word TypeTable_10;
  MR_Word TypeDefn_11;
  MR_Word TypeBody_12;
  MR_Word MaybeRepn_17;
  MR_Word Repn_19;
  MR_Word ConsRepnMap_21;
  MR_String ConsName_25;
  MR_Word MatchingConsRepns_26;
  MR_Word HeadConsRepn_27;
  MR_Word TailConsRepns_28;
  MR_Word Var_29;
  MR_Box conv0_MatchingConsRepns_26;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_10);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_9, &TypeDefn_11);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
    succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = (MR_Word) ((MR_Word) (TypeBody_12));
      MaybeRepn_17 = ((MR_Word) ((MR_hl_field(0, Var_29, 4))));
      succeeded = (MaybeRepn_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Repn_19 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_17, 0))));
        ConsRepnMap_21 = ((MR_Word) ((MR_hl_field(0, Repn_19, 1))));
        ConsName_25 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsSymName_7);
        TypeCtorInfo_30_30 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        TypeInfo_31_31 = (MR_Word) (&hlds__type_util_scalar_common_1[2]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_30_30, TypeInfo_31_31, ConsRepnMap_21, ((MR_Box) (ConsName_25)), &conv0_MatchingConsRepns_26);
        if (succeeded)
        {
          MatchingConsRepns_26 = ((MR_Word) (conv0_MatchingConsRepns_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          HeadConsRepn_27 = ((MR_Word) ((MR_hl_field(0, MatchingConsRepns_26, 0))));
          TailConsRepns_28 = ((MR_Word) ((MR_hl_field(0, MatchingConsRepns_26, 1))));
          succeeded = hlds__type_util__find_cons_repn_with_given_arity_4_p_0(ConsArity_8, HeadConsRepn_27, TailConsRepns_28, UserDataCTorConsRepn_6);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * DuCtorConsRepn_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, HeadConsRepn_6, 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (ConsArity_5 == Var_17);
    if (succeeded)
    {
      *DuCtorConsRepn_8 = HeadConsRepn_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadTailConsRepn_9;
      MR_Word TailTailConsRepns_10;
      MR_Word next_value_of_HeadConsRepn_6;
      MR_Word next_value_of_TailConsRepns_7;

      succeeded = (TailConsRepns_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadTailConsRepn_9 = ((MR_Word) ((MR_hl_field(1, TailConsRepns_7, 0))));
        TailTailConsRepns_10 = ((MR_Word) ((MR_hl_field(1, TailConsRepns_7, 1))));
        // direct tailcall eliminated
        ;
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
hlds__type_util__get_cons_defn_det_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word DuCtor_7,
  MR_Word * ConsDefn_8)
{
  MR_bool succeeded;
  MR_Word ConsDefnPrime_9;
  MR_Word Ctors_12;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_12);
  succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_12, TypeCtor_6, DuCtor_7, &ConsDefnPrime_9);
  if (succeeded)
    *ConsDefn_8 = ConsDefnPrime_9;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__type_util__get_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word DuCtor_7,
  MR_Word * ConsDefn_8)
{
  MR_bool succeeded;
  MR_Word Ctors_9;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_9);
  succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_9, TypeCtor_6, DuCtor_7, ConsDefn_8);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_du_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * TypeDefn_7,
  MR_Word * TypeBodyDu_8)
{
  MR_bool succeeded;
  MR_Word TypeTable_9;
  MR_Word TypeCtor_10;
  MR_Word TypeDefnBody_11;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_10);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_10, TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(*TypeDefn_7, &TypeDefnBody_11);
      succeeded = ((MR_tag((MR_Word) TypeDefnBody_11)) == (MR_Integer) 0);
      if (succeeded)
        *TypeBodyDu_8 = (MR_Word) ((MR_Word) (TypeDefnBody_11));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__4_4;

  succeeded = hlds__type_util__get_user_ctor_arg_types_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * NamesAritiesArgTypes_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorArgTypes_8;
  MR_Word TypeDefn_10;
  MR_Word TypeBodyDu_12;
  MR_Word TypeCtor_7;
  MR_Word TypeTable_9;
  MR_Word TypeDefnBody_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_5, &TypeCtor_7, &TypeCtorArgTypes_8);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_7, &TypeDefn_10);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeDefnBody_11);
      succeeded = ((MR_tag((MR_Word) TypeDefnBody_11)) == (MR_Integer) 0);
      if (succeeded)
        TypeBodyDu_12 = (MR_Word) ((MR_Word) (TypeDefnBody_11));
    }
  }
  if (succeeded)
  {
    MR_Word TypeParams_13;
    MR_Word OoMCtors_14;
    MR_Word Ctors_20;
    MR_Word Var_21;

    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_10, &TypeParams_13);
    OoMCtors_14 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 0))));
    Ctors_20 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[2]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__type_util__all_du_ctor_arg_types_3_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeParams_13));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (TypeCtorArgTypes_8));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__type_util_scalar_common_2[0]), Var_21, Ctors_20, NamesAritiesArgTypes_6);
  }
  else
    *NamesAritiesArgTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word DuCtor_9;

  if (succeeded)
  {
    DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    succeeded = hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(ModuleInfo_5, Type_6, DuCtor_9, ArgTypes_8);
  }
  else
  {
    MR_Word ArgTypesPrime_11;
    MR_Word TypeCtor_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &ArgTypesPrime_11);
    if (succeeded)
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_10);
    if (succeeded)
      *ArgTypes_8 = ArgTypesPrime_11;
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded;
  MR_Word TypeCtor_10;
  MR_Word TypeArgs_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &TypeArgs_11);
  if (succeeded)
  {
    MR_Word TypeParams_15;
    MR_Word MaybeExistConstraints0_17;
    MR_Word Args_18;
    MR_Word ConsDefn_12;
    MR_Word Ctors_28;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_28);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_28, TypeCtor_10, DuCtor_7, &ConsDefn_12);
    if (succeeded)
    {
      TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));
      MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 4))));
      Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 5))));
      succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word TypeInfo_35_25;
      MR_Word TypeCtorInfo_36_26;
      MR_Word TypeCtorInfo_37_27;
      MR_Word TSubst_22;
      MR_Word ArgTypes0_23;
      MR_Word Var_24;

      succeeded = (MaybeExistConstraints0_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_35_25 = (MR_Word) (&hlds__type_util_scalar_common_1[0]);
        TypeCtorInfo_36_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_35_25, TypeCtorInfo_36_26, TypeParams_15, TypeArgs_11, &TSubst_22);
        TypeCtorInfo_37_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
        Var_24 = (MR_Word) (&hlds__type_util_scalar_common_3[3]);
        ArgTypes0_23 = mercury__list__map_2_f_0(TypeCtorInfo_37_27, TypeCtorInfo_36_26, Var_24, Args_18);
        parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_22, ArgTypes0_23, ArgTypes_8);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__get_cons_id_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word DuCtor_9;

  if (succeeded)
  {
    DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    hlds__type_util__get_du_ctor_arg_types_4_p_0(ModuleInfo_5, Type_6, DuCtor_9, ArgTypes_8);
  }
  else
  {
    MR_Word ArgTypesPrime_11;
    MR_Word TypeCtor_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &ArgTypesPrime_11);
    if (succeeded)
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_10);
    if (succeeded)
      *ArgTypes_8 = ArgTypesPrime_11;
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__1560__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded;
  MR_Word TypeCtor_10;
  MR_Word TypeArgs_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &TypeArgs_11);
  if (succeeded)
  {
    MR_Word TypeParams_15;
    MR_Word MaybeExistConstraints0_17;
    MR_Word Args_18;
    MR_Word ConsDefn_12;
    MR_Word Ctors_30;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_30);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_30, TypeCtor_10, DuCtor_7, &ConsDefn_12);
    if (succeeded)
    {
      TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));
      MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 4))));
      Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 5))));
      succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word TSubst_22;
      MR_Word ArgTypes0_23;

      if (!((MaybeExistConstraints0_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_user_data_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
          return;
        }
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_11, &TSubst_22);
      ArgTypes0_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__type_util_scalar_common_3[2]), Args_18);
      parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_22, ArgTypes0_23, ArgTypes_8);
    }
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
hlds__type_util__switch_type_num_functors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Integer * NumFunctors_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word Var_25;
  MR_String Var_26;
  MR_Integer Var_27;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
    Var_27 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, 1))));
    succeeded = (Var_27 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
        succeeded = (strcmp(Var_26, (MR_String) "character") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Globals_8;
      MR_Word Target_9;
      MR_Integer MinChar_10;
      MR_Integer MaxChar_11;
      MR_Integer Var_28;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_8);
      libs__globals__get_target_2_p_0(Globals_8, &Target_9);
      backend_libs__string_encoding__target_char_range_3_p_0(Target_9, &MinChar_10, &MaxChar_11);
      Var_28 = (MR_Integer) ((MR_Unsigned) MaxChar_11 - (MR_Unsigned) MinChar_10);
      *NumFunctors_6 = (MR_Integer) ((MR_Unsigned) Var_28 + (MR_Unsigned) 1);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer NumFunctors0_13;
      MR_String IntType_12;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, 1))));
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      succeeded = (Var_31 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          IntType_12 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(IntType_12, ((&hlds__type_util_vector_common_9[0 + mid_2]))->hlds__type_util__vector_common_type_9_0__vct_9_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              NumFunctors0_13 = ((&hlds__type_util_vector_common_9[0 + mid_2]))->hlds__type_util__vector_common_type_9_0__vct_9_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
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
        succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_7);
        if (succeeded)
        {
          *NumFunctors_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_35_35;
          MR_Word TypeTable_14;
          MR_Word TypeDefn_15;
          MR_Word TypeBody_16;
          MR_Word OoMConstructors_17;
          MR_Word TailCtors_24;
          MR_Word Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_14);
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, TypeCtor_7, &TypeDefn_15);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
            succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_32 = (MR_Word) ((MR_Word) (TypeBody_16));
              OoMConstructors_17 = ((MR_Word) ((MR_hl_field(0, Var_32, 0))));
              TailCtors_24 = ((MR_Word) ((MR_hl_field(0, OoMConstructors_17, 1))));
              Var_33 = (MR_Integer) 1;
              TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
              Var_34 = mercury__list__length_1_f_0(TypeCtorInfo_35_35, TailCtors_24);
              *NumFunctors_6 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) Var_34);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(
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
      *STATE_VARIABLE_MayUseAtomic_9 = hlds__type_util__type_may_use_atomic_alloc_2_f_0(ModuleInfo_5, Type_6);
      break;
  }
}

MR_Word MR_CALL 
hlds__type_util__type_may_use_atomic_alloc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_Word TypeMayUseAtomic_6;
  MR_Word TypeCategory_7;

  TypeCategory_7 = hlds__type_util__classify_type_2_f_0(ModuleInfo_4, Type_5);
  switch (MR_tag((MR_Word) TypeCategory_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TypeCategory_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeMayUseAtomic_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
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
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, TypeCategory_7, 0))));

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
                  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 104, &UBF_12);
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
              MR_Word IntType_8 = ((MR_Unsigned) ((MR_hl_field(1, Var_25, 0))) & (MR_Integer) 15);

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
                    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 105, &UBI64_10);
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
      switch (((MR_Integer) ((MR_hl_field(3, TypeCategory_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_7, 1))) & (MR_Integer) 3);

            TypeMayUseAtomic_6 = ((&hlds__type_util_vector_common_8[0 + Var_26]))->hlds__type_util__vector_common_type_8_0__vct_8_f_0;
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

MR_Word MR_CALL 
hlds__type_util__classify_type_ctor_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtor_5)
{
  MR_bool succeeded;
  MR_Word TypeCategory_6;
  MR_Word TypeCategoryPrime_7;

  succeeded = hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_5, &TypeCategoryPrime_7);
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
    TypeCategory_6 = hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_10);
  }
  return TypeCategory_6;
}

MR_Word MR_CALL 
hlds__type_util__classify_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_bool succeeded;
  MR_Word TypeCategory_6;
  MR_Word TypeCtor_7;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
  {
    MR_Word TypeCategoryPrime_8;

    succeeded = hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_7, &TypeCategoryPrime_8);
    if (succeeded)
      TypeCategory_6 = TypeCategoryPrime_8;
    else
    {
      MR_Word TypeTable_9;
      MR_Word TypeDefn_10;
      MR_Word TypeBody_11;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_7, &TypeDefn_10);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeBody_11);
      TypeCategory_6 = hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_11);
    }
  }
  else
    TypeCategory_6 = (MR_Word) ((MR_Unsigned) 8U);
  return TypeCategory_6;
}

MR_bool MR_CALL 
hlds__type_util__get_supertype_5_p_0(
  MR_Word TypeTable_6,
  MR_Word TVarSet_7,
  MR_Word TypeCtor_8,
  MR_Word ArgTypes_9,
  MR_Word * SuperType_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_28_28;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeDefn_11;
  MR_Word TypeBody_12;
  MR_Word TypeBodyDu_13;
  MR_Word SuperType0_16;
  MR_Word TVarSet0_20;
  MR_Word TypeParams0_21;
  MR_Word Renaming_23;
  MR_Word TypeParams_24;
  MR_Word TSubst_25;
  MR_Word SuperType1_26;
  MR_Word Var_27;
  MR_Word _NewTVarSet_22;

  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_6, TypeCtor_8, &TypeDefn_11);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
    succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeBodyDu_13 = (MR_Word) ((MR_Word) (TypeBody_12));
      Var_27 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_13, 2))));
      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SuperType0_16 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_11, &TVarSet0_20);
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeParams0_21);
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, TVarSet0_20, &_NewTVarSet_22, &Renaming_23);
        parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_23, TypeParams0_21, &TypeParams_24);
        TypeInfo_28_28 = (MR_Word) (&hlds__type_util_scalar_common_1[0]);
        TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_28_28, TypeCtorInfo_29_29, TypeParams_24, ArgTypes_9, &TSubst_25);
        parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_23, SuperType0_16, &SuperType1_26);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_25, SuperType1_26, SuperType_10);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__get_base_type_ctor_3_p_0(
  MR_Word TypeTable_4,
  MR_Word TypeCtor_5,
  MR_Word * BaseTypeCtor_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeDefn_7;
    MR_Word TypeBody_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_5, &TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeBody_8);
      switch (MR_tag((MR_Word) TypeBody_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_9 = (MR_Word) ((MR_Word) (TypeBody_8));
            MR_Word MaybeSuperType_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_9, 2))));

            if ((MaybeSuperType_12 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *BaseTypeCtor_6 = TypeCtor_5;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word SuperType_16 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_12, 0))));
              MR_Word SuperTypeCtor_17;
              MR_Word next_value_of_TypeCtor_5;

              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_16, &SuperTypeCtor_17);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_TypeCtor_5 = SuperTypeCtor_17;
                TypeCtor_5 = next_value_of_TypeCtor_5;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "foreign type");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_20 = ((MR_Word) ((MR_hl_field(2, TypeBody_8, 0))));
            MR_Word EqvTypeCtor_21;
            MR_Word next_value_of_TypeCtor_5;

            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(EqvType_20, &EqvTypeCtor_21);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_TypeCtor_5 = EqvTypeCtor_21;
              TypeCtor_5 = next_value_of_TypeCtor_5;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_8, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "solver type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AbstractDetails_18 = ((MR_Word) ((MR_hl_field(3, TypeBody_8, 1))));

                switch (MR_tag((MR_Word) AbstractDetails_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(AbstractDetails_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          *BaseTypeCtor_6 = TypeCtor_5;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "abstract solver type");
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SuperTypeCtor_30 = (MR_Word) (MR_body((MR_Word) (AbstractDetails_18), (MR_Integer) 1));
                      MR_Word next_value_of_TypeCtor_5 = SuperTypeCtor_30;

                      // direct tailcall eliminated
                      ;
                      TypeCtor_5 = next_value_of_TypeCtor_5;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *BaseTypeCtor_6 = TypeCtor_5;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
  MR_Word Type_3,
  MR_Word Body_4)
{
  MR_bool succeeded;
  MR_String Name_5;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Type_3, 0))));
  MR_Word Var_20;
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, Type_3, 1))));
  MR_Word Var_22;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
    Name_5 = ((MR_String) ((MR_hl_field(1, Var_19, 1))));
    Var_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_20, Var_22);
    if (succeeded)
    {
      succeeded = (Var_21 == (MR_Integer) 0);
      if (succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Name_5, ((&hlds__type_util_vector_common_7[0 + mid_2]))->hlds__type_util__vector_common_type_7_0__vct_7_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
          switch (MR_tag((MR_Word) Body_4)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word TypeBodyDu_6 = (MR_Word) ((MR_Word) (Body_4));
                MR_Word IsForeignType_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_6, 5))));

                succeeded = (IsForeignType_12 == (MR_Word) ((MR_Unsigned) 0U));
              }
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Body_4, 0))))) {
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

MR_Word MR_CALL 
hlds__type_util__is_either_type_a_dummy_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeA_6,
  MR_Word TypeB_7)
{
  MR_Word IsDummy_8;
  MR_Word TypeTable_9;
  MR_Word IsDummyA_10;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
  IsDummyA_10 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeA_6, (MR_Word) ((MR_Unsigned) 0U));
  switch (IsDummyA_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      IsDummy_8 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IsDummyB_11;

        IsDummyB_11 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeB_7, (MR_Word) ((MR_Unsigned) 0U));
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

MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_Word IsDummy_6;
  MR_Word TypeTable_7;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
  IsDummy_6 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_7, Type_5, (MR_Word) ((MR_Unsigned) 0U));
  return IsDummy_6;
}

static MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsDummy_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_6)), CoveredTypes_7);
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
            IsDummy_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
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
                    {
                      MR_Word TypeBodyDu_14 = (MR_Word) ((MR_Word) (TypeBody_13));
                      MR_Word MaybeTypeRepn_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, 4))));

                      if ((MaybeTypeRepn_19 == (MR_Word) ((MR_Unsigned) 0U)))
                        IsDummy_8 = (MR_Integer) 0;
                      else
                      {
                        MR_Word TypeRepn_21 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepn_19, 0))));
                        MR_Word DuTypeKind_22 = ((MR_Word) ((MR_hl_field(0, TypeRepn_21, 3))));

                        switch (MR_tag((MR_Word) DuTypeKind_22)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(DuTypeKind_22)) {
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
                              MR_Word SingleArgTypeInDefn_25 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_22, 1))));
                              MR_Word TypeParams_27;
                              MR_Word Subst_28;
                              MR_Word SingleArgType_29;
                              MR_Word Var_40;
                              MR_Word next_value_of_Type_6;
                              MR_Word next_value_of_CoveredTypes_7;

                              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_12, &TypeParams_27);
                              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_27, ArgTypes_10, &Subst_28);
                              parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_28, SingleArgTypeInDefn_25, &SingleArgType_29);
                              {
                                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_40, 0) = ((MR_Box) (Type_6));
                                MR_hl_field(1, Var_40, 1) = ((MR_Box) (CoveredTypes_7));
                              }
                              // direct tailcall eliminated
                              ;
                              next_value_of_Type_6 = SingleArgType_29;
                              next_value_of_CoveredTypes_7 = Var_40;
                              Type_6 = next_value_of_Type_6;
                              CoveredTypes_7 = next_value_of_CoveredTypes_7;
                              continue;
                            }
                            break;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeBody_13, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        IsDummy_8 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word AbstractDetails_30 = ((MR_Word) ((MR_hl_field(3, TypeBody_13, 1))));

                          switch (MR_tag((MR_Word) AbstractDetails_30)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(AbstractDetails_30)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 2:
                                case (MR_Integer) 3:
                                  IsDummy_8 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 1:
                                  IsDummy_8 = (MR_Integer) 0;
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word SuperTypeCtor_32 = (MR_Word) (MR_body((MR_Word) (AbstractDetails_30), (MR_Integer) 1));
                                MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor_32, 1))));
                                MR_Word FakeArgTypes_35;
                                MR_Word SuperType_36;
                                MR_Word Var_41;
                                MR_Word Var_42;
                                MR_Word next_value_of_Type_6;
                                MR_Word next_value_of_CoveredTypes_7;

                                Var_41 = parse_tree__builtin_lib_types__int_type_0_f_0();
                                mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_34, ((MR_Box) (Var_41)), &FakeArgTypes_35);
                                parse_tree__prog_type_construct__construct_type_3_p_0(SuperTypeCtor_32, FakeArgTypes_35, &SuperType_36);
                                {
                                  Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_42, 0) = ((MR_Box) (Type_6));
                                  MR_hl_field(1, Var_42, 1) = ((MR_Box) (CoveredTypes_7));
                                }
                                // direct tailcall eliminated
                                ;
                                next_value_of_Type_6 = SuperType_36;
                                next_value_of_CoveredTypes_7 = Var_42;
                                Type_6 = next_value_of_Type_6;
                                CoveredTypes_7 = next_value_of_CoveredTypes_7;
                                continue;
                              }
                              break;
                            case (MR_Integer) 2:
                              IsDummy_8 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                    }
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
hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9 = ((MR_Word) ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9));
  hlds__type_util__type_is_existq_type_2_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  {
    uint32_t Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Word Var_14;
    MR_Word Var_7;

    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, 1))));
    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      hlds__type_util__type_is_existq_type_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), &(env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9, (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, hlds__type_util__type_is_existq_type_2_p_0_3, env_ptr);
      (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s env;

  (env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_3, Type_4, &(env).hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
  if ((env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
    hlds__type_util__type_is_existq_type_2_p_0_4(&env);
  return (env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_solver_type_from_type_table_2_p_0(
  MR_Word TypeTable_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word TypeBody_5;
  MR_Word TypeDefn_6;
  MR_Word TypeCtor_7;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_7);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_3, TypeCtor_7, &TypeDefn_6);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_5);
      succeeded = hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(TypeTable_3, TypeBody_5);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(
  MR_Word TypeTable_3,
  MR_Word TypeBody_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_10 = ((MR_Word) ((MR_hl_field(2, TypeBody_4, 0))));
          MR_Word TypeBody_13;
          MR_Word TypeDefn_14;
          MR_Word TypeCtor_15;
          MR_Word next_value_of_TypeBody_4;

          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_10, &TypeCtor_15);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_3, TypeCtor_15, &TypeDefn_14);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_13);
              // direct tailcall eliminated
              ;
              next_value_of_TypeBody_4 = TypeBody_13;
              TypeBody_4 = next_value_of_TypeBody_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractType_7 = ((MR_Word) ((MR_hl_field(3, TypeBody_4, 1))));

              succeeded = (AbstractType_7 == (MR_Word) ((MR_Unsigned) 12U));
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
hlds__type_util__type_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word TypeBody_5;
  MR_Word TypeDefn_6;
  MR_Word TypeTable_7;
  MR_Word TypeCtor_8;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_7);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_8);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_8, &TypeDefn_6);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_5);
      succeeded = hlds__type_util__type_body_is_solver_type_2_p_0(ModuleInfo_3, TypeBody_5);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_body_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeBody_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_10 = ((MR_Word) ((MR_hl_field(2, TypeBody_4, 0))));
          MR_Word TypeBody_13;
          MR_Word TypeDefn_14;
          MR_Word TypeTable_15;
          MR_Word TypeCtor_16;
          MR_Word next_value_of_TypeBody_4;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_15);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_10, &TypeCtor_16);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_15, TypeCtor_16, &TypeDefn_14);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_13);
              // direct tailcall eliminated
              ;
              next_value_of_TypeBody_4 = TypeBody_13;
              TypeBody_4 = next_value_of_TypeBody_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractType_7 = ((MR_Word) ((MR_hl_field(3, TypeBody_4, 1))));

              succeeded = (AbstractType_7 == (MR_Word) ((MR_Unsigned) 12U));
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
hlds__type_util__type_body_has_solver_type_details_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * SolverTypeDetails_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Type_5)) == (MR_Integer) 2))
  {
    MR_Word EqvType_9 = ((MR_Word) ((MR_hl_field(2, Type_5, 0))));
    MR_Word TypeBody_13;
    MR_Word TypeDefn_14;
    MR_Word TypeTable_15;
    MR_Word TypeCtor_16;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_15);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(EqvType_9, &TypeCtor_16);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_15, TypeCtor_16, &TypeDefn_14);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_13);
        if (((MR_tag((MR_Word) TypeBody_13)) == (MR_Integer) 2))
        {
          MR_Word EqvType_19 = ((MR_Word) ((MR_hl_field(2, TypeBody_13, 0))));

          succeeded = hlds__type_util__type_has_solver_type_details_3_p_0(ModuleInfo_4, EqvType_19, SolverTypeDetails_6);
        }
        else
        if (((((MR_tag((MR_Word) TypeBody_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_13, 0)))) == (MR_Integer) 0))))
        {
          MR_Word DetailsSolver_17 = ((MR_Word) ((MR_hl_field(3, TypeBody_13, 1))));

          *SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_17, 0))));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  else
  if (((((MR_tag((MR_Word) Type_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_5, 0)))) == (MR_Integer) 0))))
  {
    MR_Word DetailsSolver_7 = ((MR_Word) ((MR_hl_field(3, Type_5, 1))));

    *SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_7, 0))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_has_solver_type_details_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * SolverTypeDetails_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeBody_7;
    MR_Word TypeDefn_8;
    MR_Word TypeTable_9;
    MR_Word TypeCtor_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_10);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_10, &TypeDefn_8);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_8, &TypeBody_7);
        if (((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 2))
        {
          MR_Word EqvType_13 = ((MR_Word) ((MR_hl_field(2, TypeBody_7, 0))));
          MR_Word next_value_of_Type_5 = EqvType_13;

          // direct tailcall eliminated
          ;
          Type_5 = next_value_of_Type_5;
          continue;
        }
        else
        if (((((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_7, 0)))) == (MR_Integer) 0))))
        {
          MR_Word DetailsSolver_11 = ((MR_Word) ((MR_hl_field(3, TypeBody_7, 1))));

          *SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_11, 0))));
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
hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Type_7;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_5, Var_6, &Type_7);
  succeeded = hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(ModuleInfo_4, Type_7);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_4);
    if (!(succeeded))
    {
      MR_Word TypeBody_5;
      MR_Word TypeDefn_9;
      MR_Word TypeTable_10;
      MR_Word TypeCtor_11;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_10);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_11);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_11, &TypeDefn_9);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_5);
          switch (MR_tag((MR_Word) TypeBody_5)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word EqvType_7 = ((MR_Word) ((MR_hl_field(2, TypeBody_5, 0))));
                MR_Word next_value_of_Type_4 = EqvType_7;

                // direct tailcall eliminated
                ;
                Type_4 = next_value_of_Type_4;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeBody_5, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(3, TypeBody_5, 1))));

                    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 12U));
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
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_SeenTypes_28;

  succeeded = hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_SeenTypes_28);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_SeenTypes_28));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_SeenTypes_28;

  succeeded = hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SeenTypes_28);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SeenTypes_28));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SeenTypes_16;

  succeeded = hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SeenTypes_16);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SeenTypes_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_27,
  MR_Word * STATE_VARIABLE_SeenTypes_28)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_SeenTypes_0_27, ((MR_Box) (Type_6)));
  if (succeeded)
  {
    *STATE_VARIABLE_SeenTypes_28 = STATE_VARIABLE_SeenTypes_0_27;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word STATE_VARIABLE_SeenTypes_1_29;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_6)), STATE_VARIABLE_SeenTypes_0_27, &STATE_VARIABLE_SeenTypes_1_29);
    switch (MR_tag((MR_Word) Type_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_14_69;
          MR_Word TypeInfo_15_70;
          MR_Word TypeBody_23;
          MR_Word STATE_VARIABLE_SeenTypes_3_31;
          MR_Word Args_33;
          MR_Word TypeDefn_36;
          MR_Word TypeTable_37;
          MR_Word TypeCtor_38;
          MR_Word Globals_39;
          MR_Word Target_40;
          MR_Word Var_68;
          MR_Word Var_24;
          MR_Box conv3_STATE_VARIABLE_SeenTypes_28;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_37);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_38);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_37, TypeCtor_38, &TypeDefn_36);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_36, &TypeBody_23);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_39);
              libs__globals__get_target_2_p_0(Globals_39, &Target_40);
              switch (MR_tag((MR_Word) TypeBody_23)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeBodyDu_41 = (MR_Word) ((MR_Word) (TypeBody_23));
                    MR_Word ForeignTypeBody_42;
                    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, 5))));
                    MR_Word Var_50;
                    MR_Word Var_67;

                    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ForeignTypeBody_42 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
                      Var_50 = (MR_Integer) 1;
                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_40, ForeignTypeBody_42, &Var_67);
                      succeeded = (Var_50 == Var_67);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_43;

                      succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_42, &Var_43);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      MR_Word TypeCtorInfo_43_65;
                      MR_Word TypeInfo_44_66;
                      MR_Word Ctors_44;
                      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, 3))));
                      MR_Word Var_52;
                      MR_Box conv1_STATE_VARIABLE_SeenTypes_3_31;

                      succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Ctors_44);
                        if (succeeded)
                        {
                          TypeCtorInfo_43_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
                          TypeInfo_44_66 = (MR_Word) (&hlds__type_util_scalar_common_1[6]);
                          {
                            Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_52, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[0]));
                            MR_hl_field(0, Var_52, 1) = ((MR_Box) (hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                            MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_5));
                          }
                          succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_43_65, TypeInfo_44_66, Var_52, Ctors_44, ((MR_Box) (STATE_VARIABLE_SeenTypes_1_29)), &conv1_STATE_VARIABLE_SeenTypes_3_31);
                          if (succeeded)
                          {
                            STATE_VARIABLE_SeenTypes_3_31 = ((MR_Word) (conv1_STATE_VARIABLE_SeenTypes_3_31));
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignTypeBody_54 = (MR_Word) (MR_body((MR_Word) (TypeBody_23), (MR_Integer) 1));
                    MR_Word Var_46;

                    succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_54, &Var_46);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word EqvType_45 = ((MR_Word) ((MR_hl_field(2, TypeBody_23, 0))));

                    succeeded = hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_5, EqvType_45);
                    if (succeeded)
                    {
                      STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, TypeBody_23, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word DetailsSolver_47 = ((MR_Word) ((MR_hl_field(3, TypeBody_23, 1))));
                        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_47, 1))));

                        succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_24, &Args_33);
                TypeCtorInfo_14_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeInfo_15_70 = (MR_Word) (&hlds__type_util_scalar_common_1[6]);
                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_68, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[1]));
                  MR_hl_field(0, Var_68, 1) = ((MR_Box) (hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2));
                  MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_68, 3) = ((MR_Box) (ModuleInfo_5));
                }
                succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_14_69, TypeInfo_15_70, Var_68, Args_33, ((MR_Box) (STATE_VARIABLE_SeenTypes_3_31)), &conv3_STATE_VARIABLE_SeenTypes_28);
                if (succeeded)
                {
                  *STATE_VARIABLE_SeenTypes_28 = ((MR_Word) (conv3_STATE_VARIABLE_SeenTypes_28));
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_SeenTypes_28 = STATE_VARIABLE_SeenTypes_1_29;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_9 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));
              MR_Word Var_71;
              MR_Box conv5_STATE_VARIABLE_SeenTypes_28;

              {
                Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_71, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[1]));
                MR_hl_field(0, Var_71, 1) = ((MR_Box) (hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_3));
                MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_71, 3) = ((MR_Box) (ModuleInfo_5));
              }
              succeeded = mercury__list__foldl_4_p_3((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__type_util_scalar_common_1[6]), Var_71, Args_9, ((MR_Box) (STATE_VARIABLE_SeenTypes_1_29)), &conv5_STATE_VARIABLE_SeenTypes_28);
              if (succeeded)
              {
                *STATE_VARIABLE_SeenTypes_28 = ((MR_Word) (conv5_STATE_VARIABLE_SeenTypes_28));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_14_69;
              MR_Word TypeInfo_15_70;
              MR_Word TypeBody_23;
              MR_Word STATE_VARIABLE_SeenTypes_3_31;
              MR_Word Args_33;
              MR_Word TypeDefn_36;
              MR_Word TypeTable_37;
              MR_Word TypeCtor_38;
              MR_Word Globals_39;
              MR_Word Target_40;
              MR_Word Var_68;
              MR_Word Var_24;
              MR_Box conv3_STATE_VARIABLE_SeenTypes_28;

              hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_37);
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_38);
              if (succeeded)
              {
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_37, TypeCtor_38, &TypeDefn_36);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_36, &TypeBody_23);
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_39);
                  libs__globals__get_target_2_p_0(Globals_39, &Target_40);
                  switch (MR_tag((MR_Word) TypeBody_23)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word TypeBodyDu_41 = (MR_Word) ((MR_Word) (TypeBody_23));
                        MR_Word ForeignTypeBody_42;
                        MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, 5))));
                        MR_Word Var_50;
                        MR_Word Var_67;

                        succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ForeignTypeBody_42 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
                          Var_50 = (MR_Integer) 1;
                          backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_40, ForeignTypeBody_42, &Var_67);
                          succeeded = (Var_50 == Var_67);
                        }
                        if (succeeded)
                        {
                          MR_Word Var_43;

                          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_42, &Var_43);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_43_65;
                          MR_Word TypeInfo_44_66;
                          MR_Word Ctors_44;
                          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, 3))));
                          MR_Word Var_52;
                          MR_Box conv1_STATE_VARIABLE_SeenTypes_3_31;

                          succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Ctors_44);
                            if (succeeded)
                            {
                              TypeCtorInfo_43_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
                              TypeInfo_44_66 = (MR_Word) (&hlds__type_util_scalar_common_1[6]);
                              {
                                Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, Var_52, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[0]));
                                MR_hl_field(0, Var_52, 1) = ((MR_Box) (hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_1));
                                MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
                                MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_5));
                              }
                              succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_43_65, TypeInfo_44_66, Var_52, Ctors_44, ((MR_Box) (STATE_VARIABLE_SeenTypes_1_29)), &conv1_STATE_VARIABLE_SeenTypes_3_31);
                              if (succeeded)
                              {
                                STATE_VARIABLE_SeenTypes_3_31 = ((MR_Word) (conv1_STATE_VARIABLE_SeenTypes_3_31));
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignTypeBody_54 = (MR_Word) (MR_body((MR_Word) (TypeBody_23), (MR_Integer) 1));
                        MR_Word Var_46;

                        succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_5, ForeignTypeBody_54, &Var_46);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word EqvType_45 = ((MR_Word) ((MR_hl_field(2, TypeBody_23, 0))));

                        succeeded = hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_5, EqvType_45);
                        if (succeeded)
                        {
                          STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_23, 0))))) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word DetailsSolver_47 = ((MR_Word) ((MR_hl_field(3, TypeBody_23, 1))));
                            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_47, 1))));

                            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              STATE_VARIABLE_SeenTypes_3_31 = STATE_VARIABLE_SeenTypes_1_29;
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                      }
                      break;
                  }
                  if (succeeded)
                  {
                    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &Var_24, &Args_33);
                    TypeCtorInfo_14_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeInfo_15_70 = (MR_Word) (&hlds__type_util_scalar_common_1[6]);
                    {
                      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&hlds__type_util_scalar_common_6[1]));
                      MR_hl_field(0, Var_68, 1) = ((MR_Box) (hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0_2));
                      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_68, 3) = ((MR_Box) (ModuleInfo_5));
                    }
                    succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_14_69, TypeInfo_15_70, Var_68, Args_33, ((MR_Box) (STATE_VARIABLE_SeenTypes_3_31)), &conv3_STATE_VARIABLE_SeenTypes_28);
                    if (succeeded)
                    {
                      *STATE_VARIABLE_SeenTypes_28 = ((MR_Word) (conv3_STATE_VARIABLE_SeenTypes_28));
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

MR_bool MR_CALL 
hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word Var_6;
  MR_Word Var_5;

  Var_6 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  succeeded = hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(ModuleInfo_3, Type_4, Var_6, &Var_5);
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  conv0_LambdaHeadVar__2_20 = hlds__type_util__IntroducedFrom__func__type_constructors__1386__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__type_constructors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * Constructors_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word ArgTypes_8;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_5, &TypeCtor_7, &ArgTypes_8);
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_7);
    if (succeeded)
    {
      MR_Word Context_10;
      MR_Word CtorArgs_11;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Integer Var_26;

      Context_10 = mercury__term_context__dummy_context_0_f_0();
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[0]));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__type_util__type_constructors_3_p_0_1));
        MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_18, 3) = ((MR_Box) (Context_10));
      }
      CtorArgs_11 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_18, ArgTypes_8);
      Var_26 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), CtorArgs_11);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (MR_Word) (UINT32_C(0)));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) (&hlds__type_util_scalar_common_4[25]));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (CtorArgs_11));
        MR_hl_field(0, Var_22, 4) = ((MR_Box) (Var_26));
        MR_hl_field(0, Var_22, 5) = ((MR_Box) (Context_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Constructors_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_38_38;
      MR_Word TypeTable_13;
      MR_Word TypeDefn_14;
      MR_Word TypeParams_15;
      MR_Word TypeBody_16;
      MR_Word TypeBodyDu_17;
      MR_Word Var_28;
      MR_Word Var_29;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_13);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_7, &TypeDefn_14);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_14, &TypeParams_15);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_16);
        succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_16));
          TypeCtorInfo_38_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
          Var_29 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 0))));
          Var_28 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_38_38, Var_29);
          if ((TypeParams_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *Constructors_6 = Var_28;
          else
          {
            MR_Word Subst_41;

            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, ArgTypes_8, &Subst_41);
            hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_41, Var_28, Constructors_6);
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Ctors0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Ctor_8;
    MR_Word Ctors_9;
    uint32_t Ordinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_6, 0)));
    MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 1))));
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 2))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor0_6, 4))));
    MR_Word Ctxt_15 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 5))));
    MR_Word Args_16;

    hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_13, &Args_16);
    {
      Ctor_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ctor_8, 0) = ((MR_Box) (MR_Word) (Ordinal_10));
      MR_hl_field(0, Ctor_8, 1) = ((MR_Box) (MaybeExistConstraints_11));
      MR_hl_field(0, Ctor_8, 2) = ((MR_Box) (Name_12));
      MR_hl_field(0, Ctor_8, 3) = ((MR_Box) (Args_16));
      MR_hl_field(0, Ctor_8, 4) = ((MR_Box) (Arity_14));
      MR_hl_field(0, Ctor_8, 5) = ((MR_Box) (Ctxt_15));
    }
    hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_1, Ctors0_7, &Ctors_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Ctor_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Ctors_9));
    }
  }
}

static void MR_CALL 
hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Args0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Arg_8;
    MR_Word Args_9;
    MR_Word ArgType_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 1))));
    MR_Word Var_14;
    MR_Word Var_16;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_1, Var_11, &ArgType_10);
    Var_14 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 2))));
    {
      Arg_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, Arg_8, 1) = ((MR_Box) (ArgType_10));
      MR_hl_field(0, Arg_8, 2) = ((MR_Box) (Var_16));
    }
    hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_7, &Args_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_9));
    }
  }
}

MR_bool MR_CALL 
hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * UserEqComp_6)
{
  MR_bool succeeded;
  MR_Word TypeBody_7;
  MR_Word TypeDefn_8;
  MR_Word TypeTable_9;
  MR_Word TypeCtor_10;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_10);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_10, &TypeDefn_8);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_8, &TypeBody_7);
      succeeded = hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_7, UserEqComp_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeBody_5,
  MR_Word * NonCanonical_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeBody_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_7 = (MR_Word) ((MR_Word) (TypeBody_5));
        MR_Word MaybeForeignType_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_7, 5))));
        MR_Word ForeignTypeBody_14;
        MR_Word Globals_15;
        MR_Word Target_16;
        MR_Word Var_21;
        MR_Word Var_30;

        succeeded = (MaybeForeignType_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ForeignTypeBody_14 = ((MR_Word) ((MR_hl_field(1, MaybeForeignType_13, 0))));
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_15);
          libs__globals__get_target_2_p_0(Globals_15, &Target_16);
          Var_21 = (MR_Integer) 1;
          backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_16, ForeignTypeBody_14, &Var_30);
          succeeded = (Var_21 == Var_30);
        }
        if (succeeded)
          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_14, NonCanonical_6);
        else
        {
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_7, 3))));

          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *NonCanonical_6 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_24 = (MR_Word) (MR_body((MR_Word) (TypeBody_5), (MR_Integer) 1));

        succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_24, NonCanonical_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_17 = ((MR_Word) ((MR_hl_field(3, TypeBody_5, 1))));
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_17, 1))));

            succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              *NonCanonical_6 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_body_from_type_table_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * TypeBody_6)
{
  MR_bool succeeded;
  MR_Word TypeDefn_7;
  MR_Word TypeCtor_8;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_8);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_8, &TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, TypeBody_6);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_body_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeBody_6)
{
  MR_bool succeeded;
  MR_Word TypeDefn_7;
  MR_Word TypeTable_8;
  MR_Word TypeCtor_9;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_8);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_9);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_9, &TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, TypeBody_6);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_from_type_table_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_7, TypeDefn_6);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
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

MR_bool MR_CALL 
hlds__type_util__type_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word TypeCtor_5;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_5);
  if (succeeded)
    succeeded = hlds__type_util__type_ctor_is_atomic_2_p_0(ModuleInfo_3, TypeCtor_5);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_ctor_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeCtor_4)
{
  MR_bool succeeded;
  MR_Word TypeCategory_5;
  MR_Word TypeCategoryPrime_7;

  succeeded = hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_4, &TypeCategoryPrime_7);
  if (succeeded)
    TypeCategory_5 = TypeCategoryPrime_7;
  else
  {
    MR_Word TypeTable_8;
    MR_Word TypeDefn_9;
    MR_Word TypeBody_10;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_8);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_4, &TypeDefn_9);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
    TypeCategory_5 = hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_10);
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
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
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
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCategory_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_5, 1))) & (MR_Integer) 7);

            switch (Var_19) {
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

MR_Word MR_CALL 
hlds__type_util__classify_type_defn_body_1_f_0(
  MR_Word TypeBody_3)
{
  MR_Word TypeCategory_4;

  switch (MR_tag((MR_Word) TypeBody_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_5 = (MR_Word) ((MR_Word) (TypeBody_3));
        MR_Word MaybeTypeRepn_10 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_5, 4))));
        MR_Word Repn_12;
        MR_Word DuTypeKind_13;

        if ((MaybeTypeRepn_10 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.type_util.classify_type_defn_body\'/1", (MR_String) "MaybeTypeRepn = no");
        else
          Repn_12 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepn_10, 0))));
        DuTypeKind_13 = ((MR_Word) ((MR_hl_field(0, Repn_12, 3))));
        switch (MR_tag((MR_Word) DuTypeKind_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(DuTypeKind_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                TypeCategory_4 = (MR_Word) (MR_mkword(2, &hlds__type_util_scalar_common_4[3]));
                break;
              case (MR_Integer) 1:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[15]));
                break;
              case (MR_Integer) 2:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[14]));
                break;
            }
            break;
          case (MR_Integer) 1:
            TypeCategory_4 = (MR_Word) (MR_mkword(2, &hlds__type_util_scalar_common_4[14]));
            break;
          case (MR_Integer) 2:
            TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[16]));
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[14]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[14]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word AbstractDetails_18 = ((MR_Word) ((MR_hl_field(3, TypeBody_3, 1))));

            switch (MR_tag((MR_Word) AbstractDetails_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(AbstractDetails_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 3:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[14]));
                    break;
                  case (MR_Integer) 1:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[12]));
                    break;
                  case (MR_Integer) 2:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[13]));
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[14]));
                break;
            }
          }
          break;
      }
      break;
  }
  return TypeCategory_4;
}

MR_bool MR_CALL 
hlds__type_util__classify_type_ctor_if_special_2_p_0(
  MR_Word TypeCtor_3,
  MR_Word * TypeCategory_4)
{
  MR_bool succeeded;
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, 1))));
  MR_String TypeName_7;

  if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
    TypeName_7 = ((MR_String) ((MR_hl_field(1, TypeSymName_5, 1))));
  else
    TypeName_7 = ((MR_String) ((MR_hl_field(0, TypeSymName_5, 0))));
  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(TypeName_7, 0)) {
      case (MR_Integer) 98:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "base_typeclass_info"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 99:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "character"))
          case_num_0 = (MR_Integer) 4;
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 108:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "float"))
              case_num_0 = (MR_Integer) 5;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "func"))
              case_num_0 = (MR_Integer) 18;
            break;
        }
        break;
      case (MR_Integer) 105:
        if (MR_offset_strn_eq(1, 2, TypeName_7, (MR_String) "int"))
          switch (MR_nth_code_unit(TypeName_7, 3)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int16"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int32"))
                case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int64"))
                case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int8"))
                case_num_0 = (MR_Integer) 10;
              break;
          }
        break;
      case (MR_Integer) 112:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "pred"))
          case_num_0 = (MR_Integer) 18;
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(TypeName_7, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "state"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "store"))
                  case_num_0 = (MR_Integer) 20;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "string"))
                  case_num_0 = (MR_Integer) 11;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 117:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "tuple"))
              case_num_0 = (MR_Integer) 21;
            break;
          case (MR_Integer) 121:
            if (MR_offset_strn_eq(2, 2, TypeName_7, (MR_String) "type"))
              switch (MR_nth_code_unit(TypeName_7, 4)) {
                case (MR_Integer) 95:
                  switch (MR_nth_code_unit(TypeName_7, 5)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(6, TypeName_7, (MR_String) "type_ctor_info"))
                        case_num_0 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 105:
                      if (MR_offset_streq(6, TypeName_7, (MR_String) "type_info"))
                        case_num_0 = (MR_Integer) 2;
                      break;
                  }
                  break;
                case (MR_Integer) 99:
                  if (MR_offset_streq(5, TypeName_7, (MR_String) "typeclass_info"))
                    case_num_0 = (MR_Integer) 3;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 117:
        if (MR_offset_strn_eq(1, 3, TypeName_7, (MR_String) "uint"))
          switch (MR_nth_code_unit(TypeName_7, 4)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint16"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint32"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint64"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint8"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
        break;
      case (MR_Integer) 118:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "void"))
          case_num_0 = (MR_Integer) 17;
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
          ;
          {
            MR_Word ModuleSymName_45;
            MR_Word Var_72;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[8]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_45 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_72 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_45, Var_72);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "type_ctor_info"
          ;
          {
            MR_Word ModuleSymName_90;
            MR_Word Var_91;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[9]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_90 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_91 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_90, Var_91);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "type_info"
          ;
          {
            MR_Word ModuleSymName_95;
            MR_Word Var_96;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[10]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_95 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_96 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_95, Var_96);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "typeclass_info"
          ;
          {
            MR_Word ModuleSymName_100;
            MR_Word Var_101;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_util_scalar_common_1[11]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_100 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_101 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_100, Var_101);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 4:
        {
          // case "character"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[1]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_10 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_71;

            Var_71 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_10, Var_71);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 5:
        {
          // case "float"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[2]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_104 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_106;

            Var_106 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_104, Var_106);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 6:
        {
          // case "int"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[4]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_117 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_119;

            Var_119 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_117, Var_119);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 7:
        {
          // case "int16"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[6]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_130 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_132;

            Var_132 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_130, Var_132);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 8:
        {
          // case "int32"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[8]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_143 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_145;

            Var_145 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_143, Var_145);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 9:
        {
          // case "int64"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[10]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_156 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_158;

            Var_158 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_156, Var_158);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 10:
        {
          // case "int8"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[12]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_169 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_171;

            Var_171 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_169, Var_171);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 11:
        {
          // case "string"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[13]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_182 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_184;

            Var_184 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_182, Var_184);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 12:
        {
          // case "uint"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[15]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_195 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_197;

            Var_197 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_195, Var_197);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 13:
        {
          // case "uint16"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[17]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_208 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_210;

            Var_210 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_208, Var_210);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 14:
        {
          // case "uint32"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[19]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_221 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_223;

            Var_223 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_221, Var_223);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 15:
        {
          // case "uint64"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[21]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_234 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_236;

            Var_236 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_234, Var_236);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 16:
        {
          // case "uint8"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_util_scalar_common_4[23]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_247 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_249;

            Var_249 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_247, Var_249);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 17:
        {
          // case "void"
          ;
          *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 4U);
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_260 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_262;

            Var_262 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_260, Var_262);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 18:
        {
          // case "func", "pred"
          ;
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));

            {
              MR_Word Var_76;

              Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_79, Var_76);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
            if (!(succeeded))
            {
              MR_String Qualifier_11;

              succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
              if (succeeded)
              {
                Qualifier_11 = ((MR_String) ((MR_hl_field(0, Var_79, 0))));
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
            *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 12U);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 19:
        {
          // case "state"
          ;
          {
            MR_Word Var_73;
            MR_Word Var_81;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_81 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_73 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_81, Var_73);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 0);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 20:
        {
          // case "store"
          ;
          {
            MR_Word Var_39;
            MR_Word Var_75;
            MR_Word Var_274;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_274 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_39 = (MR_Word) (&hlds__type_util_scalar_common_4[24]);
              Var_75 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0(Var_39);
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_274, Var_75);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 1);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 21:
        {
          // case "tuple"
          ;
          {
            MR_Word ModuleSymName_69;
            MR_Word Var_77;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_69 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_77 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_69, Var_77);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 0);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 16U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 22:
        {
          // case "{}"
          ;
          succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 16U);
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__type_ctor_module_name_arity_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ModuleName_7,
  MR_String * Name_8,
  MR_Integer * Arity_6)
{
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  *Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(TypeSymName_5, (MR_Word) (&hlds__type_util_scalar_common_4[0]), ModuleName_7, Name_8);
}

MR_Integer MR_CALL 
hlds__type_util__type_ctor_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return Arity_4;
}

MR_String MR_CALL 
hlds__type_util__type_ctor_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word TypeSymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__type_util__type_ctor_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ModuleName_5;
  MR_Word TypeSymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(TypeSymName_3, (MR_Word) (&hlds__type_util_scalar_common_4[0]), &ModuleName_5);
  return ModuleName_5;
}

static MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____ctor_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____ctor_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____exist_qvar_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____is_either_dummy_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____is_either_dummy_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__type_util__init(void)
{
}

void mercury__hlds__type_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_ctor_defn_0);
  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_exist_qvar_action_0);
  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_is_either_dummy_type_0);
}

void mercury__hlds__type_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__type_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.type_util.
