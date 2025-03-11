/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2025-03-11
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


// :- module check_hlds.post_typecheck.
// :- implementation.

/*
INIT mercury__check_hlds__post_typecheck__init
ENDINIT
*/

#include "check_hlds.post_typecheck.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_mode_type_prop.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.types_into_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s {
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clauses_10;
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__LambdaHeadVar__1_27;
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont;
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintGoalId_19;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv0_ConstraintId_17;
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__commit_0;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clause_21;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalInfo_23;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalId_24;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_28;
  MR_Unsigned check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_40;
  MR_Unsigned check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_41;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv1_Clause_21;
};

struct check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0_s {
  MR_Box * check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__wrapper_arg_1;
  MR_Cont check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont;
  void * check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont_env_ptr;
  MR_Word check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__conv4_LambdaHeadVar__1_27;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__post_typecheck__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__post_typecheck__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__var_table__type_ctor_info_var_table_entry_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck____vpti_tuple_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_0;

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_1;

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_ordinal_ordered_maybe_all_tvars_0[2];

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_name_ordered_maybe_all_tvars_0[2];

static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_maybe_all_tvars_0[2];

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__652__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word LambdaHeadVar__1_89);

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__614__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__569__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_57_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__562__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__217__1_2_f_0(
  MR_Word InstVarSet_17,
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Tuple MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_pairs_2_f_0(
  MR_Integer MaxVarNameLen_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__post_typecheck__var_vte_to_name_and_type_strs_9_p_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_25,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_26,
  MR_Word STATE_VARIABLE_AllTVars_0_27,
  MR_Word * STATE_VARIABLE_AllTVars_28,
  MR_Word STATE_VARIABLE_TVars_0_29,
  MR_Word * STATE_VARIABLE_TVars_30);

static void MR_CALL 
check_hlds__post_typecheck__fill_in_is_dummy_slot_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Entry_0_10,
  MR_Word * STATE_VARIABLE_Entry_11);

static void MR_CALL 
check_hlds__post_typecheck__gather_constraint_ids_4_p_0(
  MR_Word ReverseConstraintMap_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_ConstraintIdSets_0_9,
  MR_Word * STATE_VARIABLE_ConstraintIdSets_10);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_pieces_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word HeadVar__3_3,
  MR_Word Procs0_12,
  MR_Word * Procs_13,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_Box MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word ValidPredIdSet_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_PredInfo_0_27,
  MR_Word * STATE_VARIABLE_PredInfo_28,
  MR_Word STATE_VARIABLE_Cache_0_29,
  MR_Word * STATE_VARIABLE_Cache_30,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_31,
  MR_Integer * STATE_VARIABLE_NumBadErrors_32,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_33,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_34,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_35,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_36);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word * STATE_VARIABLE_PredInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word PrevProcIds_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Integer ProcId1_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static MR_Word MR_CALL 
check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Integer OldProcId_8,
  MR_Integer NewProcId_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11);

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word VarsEntries_10,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ExternalTypeParams_11,
  MR_Word VarsEntries0_12,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_19,
  MR_Word * STATE_VARIABLE_RevVarsEntries_20,
  MR_Word STATE_VARIABLE_UnresolvedVarsEntries_0_21,
  MR_Word * STATE_VARIABLE_UnresolvedVarsEntries_22,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_23,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_24);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_inner_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ExternalTypeParams_2,
  MR_Integer VarsToDo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_6,
  MR_Word * STATE_VARIABLE_RevVarsEntries_7,
  MR_Word STATE_VARIABLE_UnresolvedVarsEntries_0_8,
  MR_Word * STATE_VARIABLE_UnresolvedVarsEntries_9,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_10,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_11);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word ErrorProcs_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__post_typecheck__setup_var_table_in_clauses_for_imported_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[97][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[11][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[3][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[1][16];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[7][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[2][5];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_10[1][7];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[97][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[7]))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The constraint is due to:"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The constraints are due to:"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be implicitly set to the builtin type"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[49])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unresolved polymorphism"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because the"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "listed above"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but I am afraid you will have to work it out yourself."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: both arguments of"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "main/2"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[32])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In mode declarations for"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: duplicate mode declaration."))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Modes"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "indistinguishable."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Here is the conflicting mode declaration."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_9[0])),
    ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[5])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_9[1])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[4])),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[4]))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[7][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__post_typecheck____vpti_tuple_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0)),
    ((MR_Box) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__post_typecheck__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__post_typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__post_typecheck__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&check_hlds__post_typecheck__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__var_table__type_ctor_info_var_table_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck____vpti_tuple_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_0 = {
  (MR_String) "not_all_tvars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_1 = {
  (MR_String) "all_tvars",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_ordinal_ordered_maybe_all_tvars_0[2] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_name_ordered_maybe_all_tvars_0[2] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_1,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_0
};

static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_maybe_all_tvars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0_10001)),
  ((MR_Box) (check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0_10001)),
  (MR_String) "check_hlds.post_typecheck",
  (MR_String) "maybe_all_tvars",
  { check_hlds__post_typecheck__check_hlds__post_typecheck__enum_name_ordered_maybe_all_tvars_0 },
  { check_hlds__post_typecheck__check_hlds__post_typecheck__enum_ordinal_ordered_maybe_all_tvars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_maybe_all_tvars_0,

};

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__652__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word LambdaHeadVar__1_89)
{
  MR_Word LambdaHeadVar__2_90;
  MR_String Name_30;

  Name_30 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, (MR_Integer) 0, LambdaHeadVar__1_89);
  {
    LambdaHeadVar__2_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_90, 1) = ((MR_Box) (Name_30));
  }
  return LambdaHeadVar__2_90;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__614__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  MR_Word LambdaHeadVar__2_55;
  MR_Word Var_56;
  MR_String VN_216 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_54, (MR_Integer) 0))));

  {
    Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_56, 1) = ((MR_Box) (VN_216));
  }
  {
    LambdaHeadVar__2_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, LambdaHeadVar__2_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_55;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__569__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31;

  LambdaHeadVar__2_31 = check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_57_95_95_49_95_95_91_49_93_95_48_1_f_0();
  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_57_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Integer) 0;
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__562__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27)
{
  MR_Word Var_28;

  Var_28 = parse_tree__builtin_lib_types__void_type_0_f_0();
  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (LambdaHeadVar__1_25)), ((MR_Box) (Var_28)), LambdaHeadVar__2_26, LambdaHeadVar__3_27);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv0_ConstraintId_17));
  check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clause_21 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv1_Clause_21));
  check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 0))));

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 1))));
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalInfo_23);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_40 = (MR_Unsigned) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__GoalId_24);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_41 = (MR_Unsigned) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintGoalId_19);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded = ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_40 == (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_41);
    if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded)
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_28 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clause_21);
  hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Var_28, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__LambdaHeadVar__1_27, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_6, env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv1_Clause_21, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_5, env_ptr);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer Var_20;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1))));
    Var_20 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2))));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_7(env_ptr);
    if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0_s env;

  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__Clauses_10 = Clauses_10;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__LambdaHeadVar__1_27 = LambdaHeadVar__1_27;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont = cont;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), &(env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_env_0__conv0_ConstraintId_17, ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0_2, &env);
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__217__1_2_f_0(
  MR_Word InstVarSet_17,
  MR_Word LambdaHeadVar__1_31)
{
  MR_Word LambdaHeadVar__2_32;
  MR_String VN_20;

  VN_20 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_17, (MR_Integer) 0, LambdaHeadVar__1_31);
  {
    LambdaHeadVar__2_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_32, 1) = ((MR_Box) (VN_20));
  }
  return LambdaHeadVar__2_32;
}

static void MR_CALL 
check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0(
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
check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Tuple MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_pairs_2_f_0(
  MR_Integer MaxVarNameLen_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Tuple HeadVar__3_3;
  MR_String VarName_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_String TypeStr_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word VarPieces_7;
  MR_Word TypePieces_8;
  MR_Integer VarNameLen_9;
  MR_String ColonPadding_11;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;

  VarNameLen_9 = mercury__string__count_code_points_1_f_0(VarName_5);
  succeeded = (VarNameLen_9 < MaxVarNameLen_4);
  if (succeeded)
  {
    MR_Integer PadLen_10 = (MR_Integer) ((MR_Unsigned) MaxVarNameLen_4 - (MR_Unsigned) VarNameLen_9);
    MR_String Var_13;

    Var_13 = mercury__string__duplicate_char_2_f_0((MR_Char) 32, PadLen_10);
    ColonPadding_11 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_13);
  }
  else
    ColonPadding_11 = (MR_String) ":";
  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (VarName_5));
  }
  {
    Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_17, 1) = ((MR_Box) (ColonPadding_11));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    VarPieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarPieces_7, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, VarPieces_7, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (TypeStr_6));
  }
  {
    TypePieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypePieces_8, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, TypePieces_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (VarPieces_7));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (TypePieces_8));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
check_hlds__post_typecheck__var_vte_to_name_and_type_strs_9_p_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_25,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_26,
  MR_Word STATE_VARIABLE_AllTVars_0_27,
  MR_Word * STATE_VARIABLE_AllTVars_28,
  MR_Word STATE_VARIABLE_TVars_0_29,
  MR_Word * STATE_VARIABLE_TVars_30)
{
  MR_bool succeeded;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Entry_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarStr_13;
  MR_String TypeStr_14;
  MR_String Name_18 = ((MR_String) ((MR_hl_field(0, Entry_12, (MR_Integer) 0))));
  MR_Word Type_19 = ((MR_Word) ((MR_hl_field(0, Entry_12, (MR_Integer) 1))));
  MR_Integer VarStrLen_21;
  MR_Word TVar_22;

  VarStr_13 = parse_tree__parse_tree_out_term__mercury_var_raw_to_string_3_f_0((MR_Integer) 0, Var_11, Name_18);
  TypeStr_14 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_10, (MR_Integer) 0, Type_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarStr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeStr_14));
  }
  mercury__string__count_code_points_2_p_0(VarStr_13, &VarStrLen_21);
  succeeded = (VarStrLen_21 > STATE_VARIABLE_MaxVarNameLen_0_25);
  if (succeeded)
    *STATE_VARIABLE_MaxVarNameLen_26 = VarStrLen_21;
  else
    *STATE_VARIABLE_MaxVarNameLen_26 = STATE_VARIABLE_MaxVarNameLen_0_25;
  succeeded = ((MR_tag((MR_Word) Type_19)) == (MR_Integer) 0);
  if (succeeded)
  {
    TVar_22 = ((MR_Word) ((MR_hl_field(0, Type_19, (MR_Integer) 0))));
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), ((MR_Box) (TVar_22)), STATE_VARIABLE_TVars_0_29, STATE_VARIABLE_TVars_30);
    *STATE_VARIABLE_AllTVars_28 = STATE_VARIABLE_AllTVars_0_27;
  }
  else
  {
    MR_Word TVarsInType_24;

    *STATE_VARIABLE_AllTVars_28 = (MR_Integer) 0;
    parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(Type_19, &TVarsInType_24);
    mercury__set__union_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), TVarsInType_24, STATE_VARIABLE_TVars_0_29, STATE_VARIABLE_TVars_30);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__fill_in_is_dummy_slot_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Entry_0_10,
  MR_Word * STATE_VARIABLE_Entry_11)
{
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Entry_0_10, (MR_Integer) 0))));
  MR_Word Type_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Entry_0_10, (MR_Integer) 1))));
  MR_Word IsDummy_9;

  IsDummy_9 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_4, Type_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Entry_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_7));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__gather_constraint_ids_4_p_0(
  MR_Word ReverseConstraintMap_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_ConstraintIdSets_0_9,
  MR_Word * STATE_VARIABLE_ConstraintIdSets_10)
{
  MR_bool succeeded;
  MR_Word ConstraintIdSet_8;
  MR_Box conv0_ConstraintIdSet_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[5]), ReverseConstraintMap_5, ((MR_Box) (Constraint_6)), &conv0_ConstraintIdSet_8);
  if (succeeded)
  {
    ConstraintIdSet_8 = ((MR_Word) (conv0_ConstraintIdSet_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ConstraintIdSets_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConstraintIdSet_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ConstraintIdSets_0_9));
    }
  else
    *STATE_VARIABLE_ConstraintIdSets_10 = STATE_VARIABLE_ConstraintIdSets_0_9;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_pieces_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_String Var_7;

  Var_7 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarset_4, (MR_Integer) 0, Constraint_5);
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_32;

  conv1_LambdaHeadVar__2_32 = check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__217__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word HeadVar__3_3,
  MR_Word Procs0_12,
  MR_Word * Procs_13,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word UnboundInstVars_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word PredPieces_15;
  MR_Word ProcInfo_16;
  MR_Word InstVarSet_17;
  MR_Word InstVarToPiece_18;
  MR_Word UnboundInstVarPieces_21;
  MR_Word UnboundInstVarsPieces_22;
  MR_String InstVarVars_23;
  MR_String IsAreUnbound_24;
  MR_Word Context_25;
  MR_Word Pieces_26;
  MR_Word Spec_27;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Box conv0_ProcInfo_16;
  MR_Box conv2_InstVarVars_23;
  MR_Box conv3_IsAreUnbound_24;
  MR_Box conv4_Var_28;

  PredPieces_15 = hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(ModuleInfo_8, PredId_9);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_12, ((MR_Box) (ProcId_10)), &conv0_ProcInfo_16);
  ProcInfo_16 = ((MR_Word) (conv0_ProcInfo_16));
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_17);
  {
    InstVarToPiece_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstVarToPiece_18, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[6]));
    MR_hl_field(0, InstVarToPiece_18, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0_1));
    MR_hl_field(0, InstVarToPiece_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, InstVarToPiece_18, 3) = ((MR_Box) (InstVarSet_17));
  }
  UnboundInstVarPieces_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstVarToPiece_18, UnboundInstVars_11);
  UnboundInstVarsPieces_22 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnboundInstVarPieces_21);
  conv2_InstVarVars_23 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundInstVars_11, ((MR_Box) ((MR_String) "inst variable")), ((MR_Box) ((MR_String) "inst variables")));
  InstVarVars_23 = ((MR_String) (conv2_InstVarVars_23));
  conv3_IsAreUnbound_24 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundInstVars_11, ((MR_Box) ((MR_String) "is unbound")), ((MR_Box) ((MR_String) "are unbound")));
  IsAreUnbound_24 = ((MR_String) (conv3_IsAreUnbound_24));
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_16, &Context_25);
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (InstVarVars_23));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (IsAreUnbound_24));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[26])));
  }
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnboundInstVarsPieces_22, Var_68);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_67);
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[20])), Var_62);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_15, Var_52);
  Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[15])), Var_51);
  {
    Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unbound_inst_var_error\'/7"));
    MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_27, 3) = ((MR_Box) (Context_25));
    MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_30 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_27));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
  }
  mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), &conv4_Var_28, Procs0_12, Procs_13);
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_31;

  conv8_LambdaHeadVar__2_31 = check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__569__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__3_27;

  check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__562__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_LambdaHeadVar__3_27);
  *wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_27));
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0_s * env_ptr = (struct check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__conv4_LambdaHeadVar__1_27));
  ((env_ptr)->check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont)((env_ptr)->check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0_s env;

  (env).check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont = cont;
  (env).check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__343__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__conv4_LambdaHeadVar__1_27, check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_3, &env);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ConstraintIdSets_10;

  check_hlds__post_typecheck__gather_constraint_ids_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ConstraintIdSets_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ConstraintIdSets_10));
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_pieces_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word ValidPredIdSet_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_PredInfo_0_27,
  MR_Word * STATE_VARIABLE_PredInfo_28,
  MR_Word STATE_VARIABLE_Cache_0_29,
  MR_Word * STATE_VARIABLE_Cache_30,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_31,
  MR_Integer * STATE_VARIABLE_NumBadErrors_32,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_33,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_34,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_35,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_36)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_15, ((MR_Box) (PredId_16)));
  if (succeeded)
  {
    MR_Word ErrorProcs_25;
    MR_Word InstForTypeSpecs_26;
    MR_Word STATE_VARIABLE_PredInfo_37_37;
    MR_Word STATE_VARIABLE_NoTypeErrorSpecs_42_42;
    MR_Word STATE_VARIABLE_AlwaysSpecs_43_43;
    MR_Word STATE_VARIABLE_PredInfo_45_45;
    MR_Word STATE_VARIABLE_PredInfo_47_47;
    MR_Word STATE_VARIABLE_AlwaysSpecs_48_48;

    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(STATE_VARIABLE_PredInfo_0_27);
    if (!(succeeded))
      succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(STATE_VARIABLE_PredInfo_0_27);
    if (succeeded)
    {
      check_hlds__post_typecheck__setup_var_table_in_clauses_for_imported_pred_3_p_0(ModuleInfo_14, STATE_VARIABLE_PredInfo_0_27, &STATE_VARIABLE_PredInfo_37_37);
      STATE_VARIABLE_NoTypeErrorSpecs_42_42 = STATE_VARIABLE_NoTypeErrorSpecs_0_35;
      STATE_VARIABLE_AlwaysSpecs_43_43 = STATE_VARIABLE_AlwaysSpecs_0_33;
      *STATE_VARIABLE_NumBadErrors_32 = STATE_VARIABLE_NumBadErrors_0_31;
    }
    else
    {
      MR_Word ClausesInfo0_22;
      MR_Word EmptyVarSet_23;
      MR_Word ClausesInfo_24;
      MR_Word STATE_VARIABLE_PredInfo_38_38;
      MR_Word STATE_VARIABLE_NoTypeErrorSpecs_40_40;
      MR_Word UnprovenConstraints0_52;
      MR_Word ClausesInfo0_115;
      MR_Word ExternalTypeParams_116;
      MR_Word VarTable0_117;
      MR_Word VarsEntries0_118;
      MR_Word BindToVoidTVars0_119;
      MR_Word RevVarsEntries_120;
      MR_Word UnresolvedVarsEntries_121;
      MR_Word BindToVoidTVars_122;
      MR_Word VarTable1_123;
      MR_Word VarTable_124;
      MR_Word ClausesInfo_133;
      MR_Word STATE_VARIABLE_PredInfo_38_137;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_27, &ClausesInfo0_22);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptyVarSet_23);
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(EmptyVarSet_23, ClausesInfo0_22, &ClausesInfo_24);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_24, STATE_VARIABLE_PredInfo_0_27, &STATE_VARIABLE_PredInfo_38_38);
      hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(STATE_VARIABLE_PredInfo_38_38, &UnprovenConstraints0_52);
      if ((UnprovenConstraints0_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_NumBadErrors_32 = STATE_VARIABLE_NumBadErrors_0_31;
        STATE_VARIABLE_NoTypeErrorSpecs_40_40 = STATE_VARIABLE_NoTypeErrorSpecs_0_35;
      }
      else
      {
        MR_Word UnprovenConstraints_55;
        MR_Integer NumUnprovenConstraints_56;
        MR_Word TVarSet_58;
        MR_Word Context_59;
        MR_Word PredDescPieces_60;
        MR_Word MainPieces_61;
        MR_Word MainMsg_62;
        MR_Word ConstrainedGoals_63;
        MR_Word ContextMsgs_64;
        MR_Word Spec_68;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_String Var_79;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_95;
        MR_Word ClausesInfo_100;
        MR_Word ClausesRep_101;
        MR_Word Clauses_103;
        MR_Word ConstraintMap_104;
        MR_Word ReverseConstraintMap_105;
        MR_Word ConstraintIdSets_106;
        MR_Word ConstraintIds_107;
        MR_Word FindGoals_108;
        MR_Word Var_109;
        MR_Box conv0_Var_79;
        MR_Word _ItemNumbers_102;
        MR_Box conv3_ConstraintIdSets_106;

        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints0_52, &UnprovenConstraints_55);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_38_38, &TVarSet_58);
        hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_38_38, &Context_59);
        PredDescPieces_60 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_14, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_4[0])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_16);
        conv0_Var_79 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraints_55, ((MR_Box) ((MR_String) "an unsatisified typeclass constraint:")), ((MR_Box) ((MR_String) "some unsatisified typeclass constraints:")));
        Var_79 = ((MR_String) (conv0_Var_79));
        {
          Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[31])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[29])));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_88, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[3]));
          MR_hl_field(0, Var_88, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_1));
          MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_88, 3) = ((MR_Box) (TVarSet_58));
        }
        Var_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), Var_88, UnprovenConstraints_55);
        Var_84 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[32])), Var_87);
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[34])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_83);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescPieces_60, Var_74);
        MainPieces_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[28])), Var_73);
        {
          MainMsg_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainMsg_62, 0) = ((MR_Box) (Context_59));
          MR_hl_field(0, MainMsg_62, 1) = ((MR_Box) (MainPieces_61));
        }
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ClausesInfo_100);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_100, &ClausesRep_101, &_ItemNumbers_102);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_101, &Clauses_103);
        hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ConstraintMap_104);
        ReverseConstraintMap_105 = mercury__map__reverse_map_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_104);
        {
          Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_109, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_10[0]));
          MR_hl_field(0, Var_109, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_2));
          MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_109, 3) = ((MR_Box) (ReverseConstraintMap_105));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[6]), Var_109, UnprovenConstraints_55, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ConstraintIdSets_106);
        ConstraintIdSets_106 = ((MR_Word) (conv3_ConstraintIdSets_106));
        ConstraintIds_107 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), ConstraintIdSets_106);
        {
          FindGoals_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FindGoals_108, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[4]));
          MR_hl_field(0, FindGoals_108, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4));
          MR_hl_field(0, FindGoals_108, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FindGoals_108, 3) = ((MR_Box) (Clauses_103));
          MR_hl_field(0, FindGoals_108, 4) = ((MR_Box) (ConstraintIds_107));
        }
        mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FindGoals_108, &ConstrainedGoals_63);
        if ((ConstrainedGoals_63 == (MR_Word) ((MR_Unsigned) 0U)))
          ContextMsgs_64 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word DueToPieces_65;
          MR_Word ContextMsgsPrefix_66;
          MR_Word ContextMsgsList_67;
          MR_Box conv5_DueToPieces_65;

          conv5_DueToPieces_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), UnprovenConstraints_55, ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]))), ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[38]))));
          DueToPieces_65 = ((MR_Word) (conv5_DueToPieces_65));
          {
            ContextMsgsPrefix_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ContextMsgsPrefix_66, 0) = ((MR_Box) (Context_59));
            MR_hl_field(0, ContextMsgsPrefix_66, 1) = ((MR_Box) (DueToPieces_65));
          }
          ContextMsgsList_67 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(ModuleInfo_14, ConstrainedGoals_63);
          {
            ContextMsgs_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ContextMsgs_64, 0) = ((MR_Box) (ContextMsgsPrefix_66));
            MR_hl_field(1, ContextMsgs_64, 1) = ((MR_Box) (ContextMsgsList_67));
          }
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (MainMsg_62));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (ContextMsgs_64));
        }
        {
          Spec_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unsatisfied_constraints\'/6"));
          MR_hl_field(2, Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 52U));
          MR_hl_field(2, Spec_68, 3) = ((MR_Box) (Var_95));
        }
        {
          STATE_VARIABLE_NoTypeErrorSpecs_40_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NoTypeErrorSpecs_40_40, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(1, STATE_VARIABLE_NoTypeErrorSpecs_40_40, 1) = ((MR_Box) (STATE_VARIABLE_NoTypeErrorSpecs_0_35));
        }
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints_55, &NumUnprovenConstraints_56);
        *STATE_VARIABLE_NumBadErrors_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBadErrors_0_31 + (MR_Unsigned) NumUnprovenConstraints_56);
      }
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ClausesInfo0_115);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ExternalTypeParams_116);
      hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_115, &VarTable0_117);
      parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable0_117, &VarsEntries0_118);
      mercury__set__init_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), &BindToVoidTVars0_119);
      check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_9_p_0(ModuleInfo_14, ExternalTypeParams_116, VarsEntries0_118, (MR_Word) ((MR_Unsigned) 0U), &RevVarsEntries_120, (MR_Word) ((MR_Unsigned) 0U), &UnresolvedVarsEntries_121, BindToVoidTVars0_119, &BindToVoidTVars_122);
      parse_tree__var_table__var_table_from_rev_sorted_assoc_list_2_p_0(RevVarsEntries_120, &VarTable1_123);
      if ((UnresolvedVarsEntries_121 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        VarTable_124 = VarTable1_123;
        STATE_VARIABLE_PredInfo_38_137 = STATE_VARIABLE_PredInfo_38_38;
        STATE_VARIABLE_NoTypeErrorSpecs_42_42 = STATE_VARIABLE_NoTypeErrorSpecs_40_40;
      }
      else
      {
        MR_Word PredStatus_127;
        MR_Word DefinedHere_128;
        MR_Word ProofMap0_129;
        MR_Word ConstraintMap0_130;
        MR_Word ProofMap_131;
        MR_Word ConstraintMap_132;
        MR_Word STATE_VARIABLE_PredInfo_37_136;
        MR_Word VoidSubst_140;
        MR_Word Var_142;
        MR_Box conv7_VoidSubst_140;

        hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_38_38, &PredStatus_127);
        DefinedHere_128 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_127);
        switch (DefinedHere_128) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_NoTypeErrorSpecs_42_42 = STATE_VARIABLE_NoTypeErrorSpecs_40_40;
            break;
          case (MR_Integer) 1:
            check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(ModuleInfo_14, PredId_16, STATE_VARIABLE_PredInfo_38_38, UnresolvedVarsEntries_121, STATE_VARIABLE_NoTypeErrorSpecs_40_40, &STATE_VARIABLE_NoTypeErrorSpecs_42_42);
            break;
        }
        hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ProofMap0_129);
        hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ConstraintMap0_130);
        Var_142 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        mercury__set__fold_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[5]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[9]), BindToVoidTVars_122, ((MR_Box) (Var_142)), &conv7_VoidSubst_140);
        VoidSubst_140 = ((MR_Word) (conv7_VoidSubst_140));
        parse_tree__var_table__apply_subst_to_var_table_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[10]), VoidSubst_140, VarTable1_123, &VarTable_124);
        check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(VoidSubst_140, ProofMap0_129, &ProofMap_131);
        check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(VoidSubst_140, ConstraintMap0_130, &ConstraintMap_132);
        hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ProofMap_131, STATE_VARIABLE_PredInfo_38_38, &STATE_VARIABLE_PredInfo_37_136);
        hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_132, STATE_VARIABLE_PredInfo_37_136, &STATE_VARIABLE_PredInfo_38_137);
      }
      hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_124, ClausesInfo0_115, &ClausesInfo_133);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_133, STATE_VARIABLE_PredInfo_38_137, &STATE_VARIABLE_PredInfo_37_37);
      check_hlds__post_typecheck__check_type_of_main_3_p_0(STATE_VARIABLE_PredInfo_37_37, STATE_VARIABLE_AlwaysSpecs_0_33, &STATE_VARIABLE_AlwaysSpecs_43_43);
    }
    check_hlds__types_into_modes__propagate_checked_types_into_pred_modes_7_p_0(ModuleInfo_14, &ErrorProcs_25, &InstForTypeSpecs_26, STATE_VARIABLE_Cache_0_29, STATE_VARIABLE_Cache_30, STATE_VARIABLE_PredInfo_37_37, &STATE_VARIABLE_PredInfo_45_45);
    *STATE_VARIABLE_NoTypeErrorSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InstForTypeSpecs_26, STATE_VARIABLE_NoTypeErrorSpecs_42_42);
    check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(ModuleInfo_14, PredId_16, ErrorProcs_25, STATE_VARIABLE_PredInfo_45_45, &STATE_VARIABLE_PredInfo_47_47, STATE_VARIABLE_AlwaysSpecs_43_43, &STATE_VARIABLE_AlwaysSpecs_48_48);
    check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(ModuleInfo_14, PredId_16, STATE_VARIABLE_PredInfo_47_47, STATE_VARIABLE_PredInfo_28, STATE_VARIABLE_AlwaysSpecs_48_48, STATE_VARIABLE_AlwaysSpecs_34);
  }
  else
  {
    *STATE_VARIABLE_NoTypeErrorSpecs_36 = STATE_VARIABLE_NoTypeErrorSpecs_0_35;
    *STATE_VARIABLE_AlwaysSpecs_34 = STATE_VARIABLE_AlwaysSpecs_0_33;
    *STATE_VARIABLE_NumBadErrors_32 = STATE_VARIABLE_NumBadErrors_0_31;
    *STATE_VARIABLE_Cache_30 = STATE_VARIABLE_Cache_0_29;
    *STATE_VARIABLE_PredInfo_28 = STATE_VARIABLE_PredInfo_0_27;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word * STATE_VARIABLE_PredInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word Origin_11;
  MR_Word Var_18;
  MR_Word Var_19;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_14, &Origin_11);
  succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(1, Origin_11, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_18, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (Var_19 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    *STATE_VARIABLE_PredInfo_15 = STATE_VARIABLE_PredInfo_0_14;
  }
  else
  {
    MR_Word ProcIds_13;

    ProcIds_13 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_0_14);
    check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(ModuleInfo_7, PredId_8, ProcIds_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_PredInfo_0_14, STATE_VARIABLE_PredInfo_15, STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word PrevProcIds_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredInfo_6 = STATE_VARIABLE_PredInfo_0_5;
    }
    else
    {
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Removed_25;
      MR_Word PrevProcIds1_26;
      MR_Word STATE_VARIABLE_PredInfo_31_31;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_PrevProcIds_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(ModuleInfo_1, PredId_2, ProcId_20, PrevProcIds_4, &Removed_25, STATE_VARIABLE_PredInfo_0_5, &STATE_VARIABLE_PredInfo_31_31, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_32_32);
      switch (Removed_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            PrevProcIds1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PrevProcIds1_26, 0) = ((MR_Box) (ProcId_20));
            MR_hl_field(1, PrevProcIds1_26, 1) = ((MR_Box) (PrevProcIds_4));
          }
          break;
        case (MR_Integer) 1:
          PrevProcIds1_26 = PrevProcIds_4;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_21;
      next_value_of_PrevProcIds_4 = PrevProcIds1_26;
      next_value_of_STATE_VARIABLE_PredInfo_0_5 = STATE_VARIABLE_PredInfo_31_31;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_32_32;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      PrevProcIds_4 = next_value_of_PrevProcIds_4;
      STATE_VARIABLE_PredInfo_0_5 = next_value_of_STATE_VARIABLE_PredInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Integer ProcId1_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      succeeded = check_hlds__mode_comparison__modes_are_indistinguishable_4_p_0(ModuleInfo_1, STATE_VARIABLE_PredInfo_0_6, ProcId_22, ProcId1_3);
      if (succeeded)
      {
        MR_Word Status_27;
        MR_Word Globals_28;

        hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_6, &Status_27);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_28);
        {
          MR_Word Var_36;

          Var_36 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_27);
          succeeded = (Var_36 == (MR_Integer) 1);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_39;
            MR_Word Var_40;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, (MR_Integer) 522, (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = (MR_Integer) 527;
              Var_40 = (MR_Integer) 0;
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, Var_39, Var_40);
            }
          }
          if (!(succeeded))
          {
            MR_Word OpMode_29;
            MR_Word Var_41;
            MR_Word Var_42;

            libs__globals__get_op_mode_2_p_0(Globals_28, &OpMode_29);
            succeeded = ((MR_tag((MR_Word) OpMode_29)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_41 = ((MR_Word) ((MR_hl_field(3, OpMode_29, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Var_41, (MR_Integer) 0))));
                succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Spec_31;

          Spec_31 = check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(ModuleInfo_1, ProcId1_3, ProcId_22, PredId_2, STATE_VARIABLE_PredInfo_0_6);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_9 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
          }
        }
        else
          *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
        hlds__hlds_pred__pred_info_remove_procid_3_p_0(ProcId1_3, STATE_VARIABLE_PredInfo_0_6, STATE_VARIABLE_PredInfo_7);
        *HeadVar__5_5 = (MR_Integer) 1;
      }
      else
      {
        MR_Word next_value_of_HeadVar__4_4 = ProcIds_23;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Integer OldProcId_8,
  MR_Integer NewProcId_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11)
{
  MR_Word Spec_12;
  MR_Word Procs_13;
  MR_Word OldProcInfo_14;
  MR_Word NewProcInfo_15;
  MR_Word OldContext_16;
  MR_Word NewContext_17;
  MR_Word PredDescColonPieces_18;
  MR_Word MainPieces_19;
  MR_String OldDecl_20;
  MR_String NewDecl_21;
  MR_Word VerbosePieces_22;
  MR_Word Var_35;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Box conv0_OldProcInfo_14;
  MR_Box conv1_NewProcInfo_15;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &Procs_13);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (OldProcId_8)), &conv0_OldProcInfo_14);
  OldProcInfo_14 = ((MR_Word) (conv0_OldProcInfo_14));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (NewProcId_9)), &conv1_NewProcInfo_15);
  NewProcInfo_15 = ((MR_Word) (conv1_NewProcInfo_15));
  hlds__hlds_pred__proc_info_get_context_2_p_0(OldProcInfo_14, &OldContext_16);
  hlds__hlds_pred__proc_info_get_context_2_p_0(NewProcInfo_15, &NewContext_17);
  PredDescColonPieces_18 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_7, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_4[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[83])), PredId_10);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescColonPieces_18, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[88])));
  MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[85])), Var_35);
  OldDecl_20 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, OldProcId_8, PredInfo_11);
  NewDecl_21 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, NewProcId_9, PredInfo_11);
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (OldDecl_20));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_51 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_52);
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (NewDecl_21));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_61 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_62);
  Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[94])));
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])));
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[92])), Var_70);
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_65);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[41])), Var_60);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_55);
  VerbosePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[90])), Var_50);
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (MainPieces_19));
  }
  {
    Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_93, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, Var_93, 1) = ((MR_Box) (VerbosePieces_22));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_89, 0) = ((MR_Box) (NewContext_17));
    MR_hl_field(2, Var_89, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (OldContext_16));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[96])));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_96));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.post_typecheck.report_indistinguishable_modes_error\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__post_typecheck_scalar_common_4[2])));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_88));
  }
  return Spec_12;
}

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_bool succeeded;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_50;
  MR_Integer Var_52;
  MR_Integer Var_53;

  Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
  succeeded = (strcmp(Var_14, (MR_String) "main") == 0);
  if (succeeded)
  {
    Var_15 = (MR_Word) (((MR_Box) ((MR_Integer) 2)));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_4, &Var_50);
    Var_52 = (MR_Integer) (Var_15);
    Var_53 = (MR_Integer) (Var_50);
    succeeded = (Var_52 == Var_53);
    if (succeeded)
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_4);
  }
  if (succeeded)
  {
    MR_Word ArgTypes_6;
    MR_Word ArgType1_7;
    MR_Word ArgType2_8;
    MR_Word Var_17;
    MR_Word Var_18;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_4, &ArgTypes_6);
    succeeded = (ArgTypes_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgType1_7 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 1))));
      succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgType2_8 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
        succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = parse_tree__prog_type_test__type_is_io_state_1_p_0(ArgType1_7);
          if (succeeded)
            succeeded = parse_tree__prog_type_test__type_is_io_state_1_p_0(ArgType2_8);
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
    else
    {
      MR_Word Context_9;
      MR_Word Pieces_10;
      MR_Word Spec_11;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_29;
      MR_Word Var_34;
      MR_Word Var_35;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_9);
      Var_24 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[78])));
      Var_35 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[82])));
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[21])));
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[80])), Var_34);
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_29);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[76])), Var_23);
      {
        Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.check_type_of_main\'/3"));
        MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_9));
        MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_LambdaHeadVar__2_90;

  conv10_LambdaHeadVar__2_90 = check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__652__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_90));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Tuple conv9_HeadVar__3_3;

  conv9_HeadVar__3_3 = check_hlds__post_typecheck__var_and_type_to_pieces_pairs_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__2_55;

  conv7_LambdaHeadVar__2_55 = check_hlds__post_typecheck__IntroducedFrom__func__report_unresolved_type_warning__614__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_55));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Integer conv2_STATE_VARIABLE_MaxVarNameLen_26;
  MR_Word conv1_STATE_VARIABLE_AllTVars_28;
  MR_Word conv0_STATE_VARIABLE_TVars_30;

  check_hlds__post_typecheck__var_vte_to_name_and_type_strs_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_MaxVarNameLen_26, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AllTVars_28, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_TVars_30);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_MaxVarNameLen_26));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AllTVars_28));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_30));
}

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word VarsEntries_10,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_bool succeeded;
  MR_Word TVarSet_12;
  MR_Word Context_13;
  MR_Word PredDescDotPieces_14;
  MR_Word VarTypeStrs0_15;
  MR_Integer MaxVarNameLen0_16;
  MR_Word MaybeAllTVars_17;
  MR_Word TVars_18;
  MR_Word VarTypeStrs_19;
  MR_Word VarTypePieces_23;
  MR_Word SetPieces_24;
  MR_String Known_25;
  MR_Word MainPieces_33;
  MR_String TypeOrTypes_34;
  MR_String VarOrVars_35;
  MR_String IsOrAre_36;
  MR_Word VerbosePieces_37;
  MR_Word Msg_38;
  MR_Word Spec_39;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_128;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_String Var_139;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_160;
  MR_Word Var_163;
  MR_Word Var_166;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_Word Var_179;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Word Var_201;
  MR_Word Var_202;
  MR_Word Var_203;
  MR_Word Var_204;
  MR_Word Var_212;
  MR_Box conv6_MaxVarNameLen0_16;
  MR_Box conv5_MaybeAllTVars_17;
  MR_Box conv4_TVars_18;
  MR_Box conv12_Var_139;
  MR_Box conv13_TypeOrTypes_34;
  MR_Box conv14_VarOrVars_35;
  MR_Box conv15_IsOrAre_36;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_9, &TVarSet_12);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_13);
  PredDescDotPieces_14 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_7, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_4[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[32])), PredId_8);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (TVarSet_12));
  }
  Var_52 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[9]), Var_49, VarsEntries_10, &VarTypeStrs0_15, ((MR_Box) ((MR_Integer) 0)), &conv6_MaxVarNameLen0_16, ((MR_Box) ((MR_Integer) 1)), &conv5_MaybeAllTVars_17, ((MR_Box) (Var_52)), &conv4_TVars_18);
  MaxVarNameLen0_16 = ((MR_Integer) (conv6_MaxVarNameLen0_16));
  MaybeAllTVars_17 = ((MR_Word) (conv5_MaybeAllTVars_17));
  TVars_18 = ((MR_Word) (conv4_TVars_18));
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), VarTypeStrs0_15, &VarTypeStrs_19);
  switch (MaybeAllTVars_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word VarPieces_20;
        MR_Word Var_63;
        MR_String Var_64;
        MR_Box conv8_Var_64;

        VarPieces_20 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[8]), VarTypeStrs_19);
        VarTypePieces_23 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[32])), VarPieces_20);
        conv8_Var_64 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "Its type")), ((MR_Box) ((MR_String) "Their types")));
        Var_64 = ((MR_String) (conv8_Var_64));
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          SetPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SetPieces_24, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, SetPieces_24, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[51])));
        }
        Known_25 = (MR_String) "known";
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer MaxVarNameLen_26;
        MR_Word VarTypePiecesPairs_27;
        MR_Word TVarToStr_28;
        MR_Word TVarStrs_31;
        MR_Word TVarStrList_32;
        MR_Word Var_80;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_String Var_97;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Box conv11_Var_97;

        succeeded = (MaxVarNameLen0_16 > (MR_Integer) 15);
        if (succeeded)
          MaxVarNameLen_26 = (MR_Integer) 15;
        else
          MaxVarNameLen_26 = MaxVarNameLen0_16;
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_80, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[1]));
          MR_hl_field(0, Var_80, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_3));
          MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_80, 3) = ((MR_Box) (MaxVarNameLen_26));
        }
        VarTypePiecesPairs_27 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_3[0]), Var_80, VarTypeStrs_19);
        VarTypePieces_23 = parse_tree__error_spec__pieces_list_to_split_color_line_pieces_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_4[0])), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_4[1])), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[32])), VarTypePiecesPairs_27);
        {
          TVarToStr_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TVarToStr_28, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[2]));
          MR_hl_field(0, TVarToStr_28, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_4));
          MR_hl_field(0, TVarToStr_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, TVarToStr_28, 3) = ((MR_Box) (TVarSet_12));
        }
        TVarStrs_31 = mercury__set__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarToStr_28, TVars_18);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarStrs_31, &TVarStrList_32);
        conv11_Var_97 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVarStrList_32, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
        Var_97 = ((MR_String) (conv11_Var_97));
        {
          Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[52])));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
        }
        Var_102 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), TVarStrList_32);
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[54])));
        SetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_101);
        Known_25 = (MR_String) "fully known";
      }
      break;
  }
  Var_123 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[58])));
  conv12_Var_139 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
  Var_139 = ((MR_String) (conv12_Var_139));
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_138, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[31])));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
  }
  Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[34])), SetPieces_24);
  Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarTypePieces_23, Var_147);
  Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, Var_146);
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescDotPieces_14, Var_134);
  Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[60])), Var_133);
  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_128);
  MainPieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[56])), Var_122);
  conv13_TypeOrTypes_34 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
  TypeOrTypes_34 = ((MR_String) (conv13_TypeOrTypes_34));
  conv14_VarOrVars_35 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  VarOrVars_35 = ((MR_String) (conv14_VarOrVars_35));
  conv15_IsOrAre_36 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
  IsOrAre_36 = ((MR_String) (conv15_IsOrAre_36));
  {
    Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_170, 1) = ((MR_Box) (TypeOrTypes_34));
  }
  {
    Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_175, 1) = ((MR_Box) (VarOrVars_35));
  }
  {
    Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_180, 1) = ((MR_Box) (IsOrAre_36));
  }
  {
    Var_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_185, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_185, 1) = ((MR_Box) (Known_25));
  }
  {
    Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_184, 0) = ((MR_Box) (Var_185));
    MR_hl_field(1, Var_184, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[74])));
  }
  {
    Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_181, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[67])));
    MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_184));
  }
  {
    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
    MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_181));
  }
  {
    Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_176, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[66])));
    MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
  }
  {
    Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_175));
    MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_176));
  }
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[65])));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_174));
  }
  {
    Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_169, 0) = ((MR_Box) (Var_170));
    MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_171));
  }
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[64])));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
  }
  {
    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[63])));
    MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_166));
  }
  {
    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[62])));
    MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_163));
  }
  {
    VerbosePieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VerbosePieces_37, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[61])));
    MR_hl_field(1, VerbosePieces_37, 1) = ((MR_Box) (Var_160));
  }
  {
    Var_202 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_202, 0) = ((MR_Box) (MainPieces_33));
  }
  {
    Var_204 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_204, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, Var_204, 1) = ((MR_Box) (VerbosePieces_37));
  }
  {
    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_203, 0) = ((MR_Box) (Var_204));
    MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_201, 0) = ((MR_Box) (Var_202));
    MR_hl_field(1, Var_201, 1) = ((MR_Box) (Var_203));
  }
  {
    Msg_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_38, 0) = ((MR_Box) (Context_13));
    MR_hl_field(2, Msg_38, 1) = ((MR_Box) (Var_201));
  }
  {
    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_212, 0) = ((MR_Box) (Msg_38));
    MR_hl_field(1, Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unresolved_type_warning\'/6"));
    MR_hl_field(3, Spec_39, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 58) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Spec_39, 3) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(3, Spec_39, 4) = ((MR_Box) (Var_212));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_41 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_39));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ExternalTypeParams_11,
  MR_Word VarsEntries0_12,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_19,
  MR_Word * STATE_VARIABLE_RevVarsEntries_20,
  MR_Word STATE_VARIABLE_UnresolvedVarsEntries_0_21,
  MR_Word * STATE_VARIABLE_UnresolvedVarsEntries_22,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_23,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_24)
{
  while (MR_TRUE)
  {
    MR_Word LeftOverVarsEntries0_16;
    MR_Word STATE_VARIABLE_RevVarsEntries_26_26;
    MR_Word STATE_VARIABLE_UnresolvedVarsEntries_27_27;
    MR_Word STATE_VARIABLE_BindToVoidTVars_28_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_inner_11_p_0(ModuleInfo_10, ExternalTypeParams_11, (MR_Integer) 1000, VarsEntries0_12, &LeftOverVarsEntries0_16, STATE_VARIABLE_RevVarsEntries_0_19, &STATE_VARIABLE_RevVarsEntries_26_26, STATE_VARIABLE_UnresolvedVarsEntries_0_21, &STATE_VARIABLE_UnresolvedVarsEntries_27_27, STATE_VARIABLE_BindToVoidTVars_0_23, &STATE_VARIABLE_BindToVoidTVars_28_28);
    if ((LeftOverVarsEntries0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevVarsEntries_20 = STATE_VARIABLE_RevVarsEntries_26_26;
      *STATE_VARIABLE_UnresolvedVarsEntries_22 = STATE_VARIABLE_UnresolvedVarsEntries_27_27;
      *STATE_VARIABLE_BindToVoidTVars_24 = STATE_VARIABLE_BindToVoidTVars_28_28;
    }
    else
    {
      MR_Word next_value_of_VarsEntries0_12 = LeftOverVarsEntries0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevVarsEntries_0_19 = STATE_VARIABLE_RevVarsEntries_26_26;
      MR_Word next_value_of_STATE_VARIABLE_UnresolvedVarsEntries_0_21 = STATE_VARIABLE_UnresolvedVarsEntries_27_27;
      MR_Word next_value_of_STATE_VARIABLE_BindToVoidTVars_0_23 = STATE_VARIABLE_BindToVoidTVars_28_28;

      // direct tailcall eliminated
      ;
      VarsEntries0_12 = next_value_of_VarsEntries0_12;
      STATE_VARIABLE_RevVarsEntries_0_19 = next_value_of_STATE_VARIABLE_RevVarsEntries_0_19;
      STATE_VARIABLE_UnresolvedVarsEntries_0_21 = next_value_of_STATE_VARIABLE_UnresolvedVarsEntries_0_21;
      STATE_VARIABLE_BindToVoidTVars_0_23 = next_value_of_STATE_VARIABLE_BindToVoidTVars_0_23;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_inner_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ExternalTypeParams_2,
  MR_Integer VarsToDo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_6,
  MR_Word * STATE_VARIABLE_RevVarsEntries_7,
  MR_Word STATE_VARIABLE_UnresolvedVarsEntries_0_8,
  MR_Word * STATE_VARIABLE_UnresolvedVarsEntries_9,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_10,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_BindToVoidTVars_11 = STATE_VARIABLE_BindToVoidTVars_0_10;
      *STATE_VARIABLE_UnresolvedVarsEntries_9 = STATE_VARIABLE_UnresolvedVarsEntries_0_8;
      *STATE_VARIABLE_RevVarsEntries_7 = STATE_VARIABLE_RevVarsEntries_0_6;
    }
    else
    {
      MR_Word Var_27;
      MR_Word Entry0_28;
      MR_Word VarsEntries0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

      Var_27 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
      Entry0_28 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
      succeeded = (VarsToDo_3 < (MR_Integer) 0);
      if (succeeded)
      {
        *HeadVar__5_5 = HeadVar__4_4;
        *STATE_VARIABLE_BindToVoidTVars_11 = STATE_VARIABLE_BindToVoidTVars_0_10;
        *STATE_VARIABLE_UnresolvedVarsEntries_9 = STATE_VARIABLE_UnresolvedVarsEntries_0_8;
        *STATE_VARIABLE_RevVarsEntries_7 = STATE_VARIABLE_RevVarsEntries_0_6;
      }
      else
      {
        MR_Word Entry_34;
        MR_Word Type_35 = ((MR_Word) ((MR_hl_field(0, Entry0_28, (MR_Integer) 1))));
        MR_Word TVars_36;
        MR_Word TVarsSet0_37;
        MR_Word TVarsSet1_38;
        MR_Word STATE_VARIABLE_RevVarsEntries_48_48;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_UnresolvedVarsEntries_50_50;
        MR_Word STATE_VARIABLE_BindToVoidTVars_52_52;
        MR_Integer Var_53;
        MR_String Name_61 = ((MR_String) ((MR_hl_field(0, Entry0_28, (MR_Integer) 0))));
        MR_Word IsDummy_64;
        MR_Integer next_value_of_VarsToDo_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevVarsEntries_0_6;
        MR_Word next_value_of_STATE_VARIABLE_UnresolvedVarsEntries_0_8;
        MR_Word next_value_of_STATE_VARIABLE_BindToVoidTVars_0_10;

        IsDummy_64 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_35);
        {
          Entry_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_34, 0) = ((MR_Box) (Name_61));
          MR_hl_field(0, Entry_34, 1) = ((MR_Box) (Type_35));
          MR_hl_field(0, Entry_34, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_64));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (Entry_34));
        }
        {
          STATE_VARIABLE_RevVarsEntries_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarsEntries_48_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, STATE_VARIABLE_RevVarsEntries_48_48, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsEntries_0_6));
        }
        parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_35, &TVars_36);
        mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), TVars_36, &TVarsSet0_37);
        mercury__set__delete_list_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), ExternalTypeParams_2, TVarsSet0_37, &TVarsSet1_38);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), TVarsSet1_38);
        if (succeeded)
        {
          STATE_VARIABLE_BindToVoidTVars_52_52 = STATE_VARIABLE_BindToVoidTVars_0_10;
          STATE_VARIABLE_UnresolvedVarsEntries_50_50 = STATE_VARIABLE_UnresolvedVarsEntries_0_8;
        }
        else
        {
          {
            STATE_VARIABLE_UnresolvedVarsEntries_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_UnresolvedVarsEntries_50_50, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, STATE_VARIABLE_UnresolvedVarsEntries_50_50, 1) = ((MR_Box) (STATE_VARIABLE_UnresolvedVarsEntries_0_8));
          }
          mercury__set__union_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), TVarsSet1_38, STATE_VARIABLE_BindToVoidTVars_0_10, &STATE_VARIABLE_BindToVoidTVars_52_52);
        }
        Var_53 = (MR_Integer) ((MR_Unsigned) VarsToDo_3 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_VarsToDo_3 = Var_53;
        next_value_of_HeadVar__4_4 = VarsEntries0_29;
        next_value_of_STATE_VARIABLE_RevVarsEntries_0_6 = STATE_VARIABLE_RevVarsEntries_48_48;
        next_value_of_STATE_VARIABLE_UnresolvedVarsEntries_0_8 = STATE_VARIABLE_UnresolvedVarsEntries_50_50;
        next_value_of_STATE_VARIABLE_BindToVoidTVars_0_10 = STATE_VARIABLE_BindToVoidTVars_52_52;
        VarsToDo_3 = next_value_of_VarsToDo_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RevVarsEntries_0_6 = next_value_of_STATE_VARIABLE_RevVarsEntries_0_6;
        STATE_VARIABLE_UnresolvedVarsEntries_0_8 = next_value_of_STATE_VARIABLE_UnresolvedVarsEntries_0_8;
        STATE_VARIABLE_BindToVoidTVars_0_10 = next_value_of_STATE_VARIABLE_BindToVoidTVars_0_10;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Msg_8;
    MR_Word Msgs_9;
    MR_Word Words_13;
    MR_Word Suffix_14;
    MR_Word And_15;
    MR_Word GoalInfo_18;
    MR_Word Context_19;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    if ((Goals_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
      Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[25]));
      And_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Goals_7, (MR_Integer) 1))));

      if ((Var_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
        Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[39]));
        And_15 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[41]));
      }
      else
      {
        Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
        Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[39]));
        And_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    GoalInfo_18 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
    Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Context_19));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Suffix_14));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (And_15));
    }
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Words_13, Var_34);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Msg_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Msg_8, 1) = ((MR_Box) (Var_28));
      MR_hl_field(3, Msg_8, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Msg_8, 3) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Msg_8, 4) = ((MR_Box) (Var_31));
    }
    Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(ModuleInfo_1, Goals_7);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Msg_8));
      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Msgs_9));
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5)
{
  MR_Word Pieces_6;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

  switch (MR_tag((MR_Word) GoalExpr_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
      break;
    case (MR_Integer) 1:
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 0))));
        MR_Word CallPieces_107;

        CallPieces_107 = hlds__hlds_error_util__describe_qual_pred_name_2_f_0(ModuleInfo_4, PredId_9);
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[42])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_107));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Var_126)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[46]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PFSymNameArity_30 = ((MR_Word) ((MR_hl_field(1, Var_126, (MR_Integer) 3))));
                  MR_Word Var_69;
                  MR_Word CallPieces_92;

                  {
                    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                    MR_hl_field(3, Var_69, 1) = ((MR_Box) (PFSymNameArity_30));
                  }
                  {
                    CallPieces_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, CallPieces_92, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(1, CallPieces_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[42])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_92));
                  }
                }
                break;
              case (MR_Integer) 2:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
                break;
              case (MR_Integer) 3:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallPieces_15;
            MR_Word PredId_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));

            CallPieces_15 = hlds__hlds_error_util__describe_qual_pred_name_2_f_0(ModuleInfo_4, PredId_82);
            {
              Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[42])));
              MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_15));
            }
          }
          break;
        case (MR_Integer) 2:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
        case (MR_Integer) 3:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
        case (MR_Integer) 4:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
        case (MR_Integer) 5:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
        case (MR_Integer) 6:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
        case (MR_Integer) 7:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[44]));
          break;
      }
      break;
  }
  return Pieces_6;
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Procs_13;
  MR_Word conv0_STATE_VARIABLE_Specs_30;

  check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Procs_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_30);
  *wrapper_arg_3 = ((MR_Box) (conv1_Procs_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word ErrorProcs_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((ErrorProcs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_PredInfo_18 = STATE_VARIABLE_PredInfo_0_17;
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
  else
  {
    MR_Word ProcTable0_15;
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_Box conv3_ProcTable_16;
    MR_Box conv2_STATE_VARIABLE_Specs_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_17, &ProcTable0_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (PredId_9));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[3]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[4]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_21, ErrorProcs_10, ((MR_Box) (ProcTable0_15)), &conv3_ProcTable_16, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_20);
    ProcTable_16 = ((MR_Word) (conv3_ProcTable_16));
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__setup_var_table_in_clauses_for_imported_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Entry_11;

  check_hlds__post_typecheck__fill_in_is_dummy_slot_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Entry_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Entry_11));
}

void MR_CALL 
check_hlds__post_typecheck__setup_var_table_in_clauses_for_imported_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_PredInfo_0_15,
  MR_Word * STATE_VARIABLE_PredInfo_16)
{
  MR_bool succeeded;
  MR_Word ClausesInfo0_6;
  MR_Word ClausesInfo_9;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_15, &ClausesInfo0_6);
  succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(STATE_VARIABLE_PredInfo_0_15);
  if (succeeded)
  {
    MR_Word VarTable0_7;
    MR_Word VarTable_8;
    MR_Word Var_17;

    hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_6, &VarTable0_7);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__post_typecheck__setup_var_table_in_clauses_for_imported_pred_3_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleInfo_4));
    }
    parse_tree__var_table__transform_var_table_3_p_0(Var_17, VarTable0_7, &VarTable_8);
    hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_8, ClausesInfo0_6, &ClausesInfo_9);
  }
  else
  {
    MR_Word VarSet_10;
    MR_Word HeadVars_11;
    MR_Word ArgTypes_12;
    MR_Word ClausesInfo1_13;
    MR_Word EmptyVarSet_14;
    MR_Word VarTable_19;

    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_6, &VarSet_10);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo0_6, &HeadVars_11);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_15, &ArgTypes_12);
    hlds__var_table_hlds__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_4, VarSet_10, HeadVars_11, ArgTypes_12, &VarTable_19);
    hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_19, ClausesInfo0_6, &ClausesInfo1_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptyVarSet_14);
    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(EmptyVarSet_14, ClausesInfo1_13, &ClausesInfo_9);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_9, STATE_VARIABLE_PredInfo_0_15, STATE_VARIABLE_PredInfo_16);
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PredInfo_28;
  MR_Word conv3_STATE_VARIABLE_Cache_30;
  MR_Integer conv2_STATE_VARIABLE_NumBadErrors_32;
  MR_Word conv1_STATE_VARIABLE_AlwaysSpecs_34;
  MR_Word conv0_STATE_VARIABLE_NoTypeErrorSpecs_36;

  check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PredInfo_28, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Cache_30, ((MR_Integer) (wrapper_arg_6)), &conv2_STATE_VARIABLE_NumBadErrors_32, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_AlwaysSpecs_34, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_NoTypeErrorSpecs_36);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PredInfo_28));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Cache_30));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_NumBadErrors_32));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_AlwaysSpecs_34));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_NoTypeErrorSpecs_36));
}

void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Integer * NumBadErrors_7,
  MR_Word * AlwaysSpecs_8,
  MR_Word * NoTypeErrorSpecs_9)
{
  MR_Word ValidPredIds_10;
  MR_Word ValidPredIdSet_11;
  MR_Word PredIdTable0_12;
  MR_Word PredIdTable_13;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv8__Cache_14;
  MR_Box conv7_NumBadErrors_7;
  MR_Box conv6_AlwaysSpecs_8;
  MR_Box conv5_NoTypeErrorSpecs_9;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &ValidPredIds_10);
  ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_10);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &PredIdTable0_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_15));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (ValidPredIdSet_11));
  }
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[1]));
  mercury__map__map_foldl4_11_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_17, PredIdTable0_12, &PredIdTable_13, ((MR_Box) (Var_18)), &conv8__Cache_14, ((MR_Box) ((MR_Integer) 0)), &conv7_NumBadErrors_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_AlwaysSpecs_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_NoTypeErrorSpecs_9);
  *NumBadErrors_7 = ((MR_Integer) (conv7_NumBadErrors_7));
  *AlwaysSpecs_8 = ((MR_Word) (conv6_AlwaysSpecs_8));
  *NoTypeErrorSpecs_9 = ((MR_Word) (conv5_NoTypeErrorSpecs_9));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_13, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
}

static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__post_typecheck__init(void)
{
}

void mercury__check_hlds__post_typecheck__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0);
}

void mercury__check_hlds__post_typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__post_typecheck__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.post_typecheck.
