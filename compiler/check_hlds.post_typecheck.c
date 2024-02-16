/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2024-02-16
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



struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s {
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clauses_10;
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__LambdaHeadVar__1_27;
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont;
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintGoalId_19;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv0_ConstraintId_17;
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__commit_0;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clause_21;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalInfo_23;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalId_24;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_28;
  MR_Unsigned check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_40;
  MR_Unsigned check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_41;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv1_Clause_21;
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_0;

static const MR_EnumFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__enum_functor_desc_maybe_all_tvars_0_1;

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_ordinal_ordered_maybe_all_tvars_0[2];

static const MR_EnumFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__enum_name_ordered_maybe_all_tvars_0[2];

static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_maybe_all_tvars_0[2];

static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__563__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_51_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__556__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_String MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__216__1_3_f_0(
  MR_Word InstVarSet_16,
  MR_Word HeadVar__2_27,
  MR_Word HeadVar__3_79);

static void MR_CALL 
check_hlds__post_typecheck____Compare____maybe_all_tvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____maybe_all_tvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_2_f_0(
  MR_Integer MaxVarNameLen_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_only_to_pieces_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__post_typecheck__var_vte_to_name_and_type_strs_7_p_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_21,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_22,
  MR_Word STATE_VARIABLE_AllTVars_0_23,
  MR_Word * STATE_VARIABLE_AllTVars_24);

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
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

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
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word VarsEntries_10,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

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


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[82][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[11][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][16];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[5][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[2][10];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[2][5];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[2][7];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[82][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The constraint is due to:"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The constraints are due to:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be implicitly set to the builtin type"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[41])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because the"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "listed above"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but I am afraid you will have to work it out yourself."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[39])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "main/2"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: both arguments of"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In mode declarations for "))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: duplicate mode declaration."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Modes"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are indistinguishable."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Here is the conflicting mode declaration."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0])),
    ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[4])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[1])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][16] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[5][6] = {
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
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[2][10] = {
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0)),
    ((MR_Box) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[2][5] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[2][7] = {
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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
check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__563__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31;

  LambdaHeadVar__2_31 = check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_51_95_95_49_95_95_91_49_93_95_48_1_f_0();
  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_98_105_110_100_95_116_121_112_101_95_118_97_114_115_95_116_111_95_118_111_105_100_95_95_53_54_51_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Integer) 0;
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__556__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27)
{
  MR_Word Var_28;

  Var_28 = parse_tree__builtin_lib_types__void_type_0_f_0();
  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (LambdaHeadVar__1_25)), ((MR_Box) (Var_28)), LambdaHeadVar__2_26, LambdaHeadVar__3_27);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv0_ConstraintId_17));
  check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clause_21 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv1_Clause_21));
  check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 0))));

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 1))));
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalInfo_23);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_40 = (MR_Unsigned) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__GoalId_24);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_41 = (MR_Unsigned) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintGoalId_19);
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded = ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_40 == (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_41);
    if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded)
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_28 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clause_21);
  hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Var_28, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__LambdaHeadVar__1_27, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_6, env_ptr);
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv1_Clause_21, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_5, env_ptr);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer Var_20;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1))));
    Var_20 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2))));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_7(env_ptr);
    if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0_s env;

  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__Clauses_10 = Clauses_10;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__LambdaHeadVar__1_27 = LambdaHeadVar__1_27;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont = cont;
  (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), &(env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_env_0__conv0_ConstraintId_17, ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0_2, &env);
}

static MR_String MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__216__1_3_f_0(
  MR_Word InstVarSet_16,
  MR_Word HeadVar__2_27,
  MR_Word HeadVar__3_79)
{
  MR_String HeadVar__4_80;

  HeadVar__4_80 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_16, HeadVar__2_27, HeadVar__3_79);
  return HeadVar__4_80;
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

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_2_f_0(
  MR_Integer MaxVarNameLen_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Pieces_7;
  MR_String VarStr_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_String TypeStr_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarColonStr_8;
  MR_String Var_9;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  Var_9 = mercury__string__f_43_43_2_f_0(VarStr_5, (MR_String) ":");
  mercury__string__pad_right_4_p_0(Var_9, (MR_Char) 32, MaxVarNameLen_4, &VarColonStr_8);
  {
    Var_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_12, 0) = ((MR_Box) (VarColonStr_8));
  }
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (TypeStr_6));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_13));
  }
  return Pieces_7;
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_only_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Pieces_5;
  MR_String VarStr_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_6, 0) = ((MR_Box) (VarStr_3));
  }
  {
    Pieces_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_5, 0) = ((MR_Box) (Var_6));
    MR_hl_field(1, Pieces_5, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[17])));
  }
  return Pieces_5;
}

static void MR_CALL 
check_hlds__post_typecheck__var_vte_to_name_and_type_strs_7_p_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_21,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_22,
  MR_Word STATE_VARIABLE_AllTVars_0_23,
  MR_Word * STATE_VARIABLE_AllTVars_24)
{
  MR_bool succeeded;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Entry_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarStr_11;
  MR_String TypeStr_12;
  MR_String Name_15 = ((MR_String) ((MR_hl_field(0, Entry_10, (MR_Integer) 0))));
  MR_Word Type_16 = ((MR_Word) ((MR_hl_field(0, Entry_10, (MR_Integer) 1))));
  MR_Integer VarStrLen_18;

  VarStr_11 = parse_tree__parse_tree_out_term__mercury_var_raw_to_string_3_f_0((MR_Integer) 0, Var_9, Name_15);
  TypeStr_12 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_8, (MR_Integer) 0, Type_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarStr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeStr_12));
  }
  mercury__string__count_code_points_2_p_0(VarStr_11, &VarStrLen_18);
  succeeded = (VarStrLen_18 > STATE_VARIABLE_MaxVarNameLen_0_21);
  if (succeeded)
    *STATE_VARIABLE_MaxVarNameLen_22 = VarStrLen_18;
  else
    *STATE_VARIABLE_MaxVarNameLen_22 = STATE_VARIABLE_MaxVarNameLen_0_21;
  succeeded = ((MR_tag((MR_Word) Type_16)) == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_AllTVars_24 = STATE_VARIABLE_AllTVars_0_23;
  else
    *STATE_VARIABLE_AllTVars_24 = (MR_Integer) 0;
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
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
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
  MR_String conv1_HeadVar__4_80;

  conv1_HeadVar__4_80 = check_hlds__post_typecheck__IntroducedFrom__func__report_unbound_inst_var_error__216__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_80));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word HeadVar__3_3,
  MR_Word Procs0_12,
  MR_Word * Procs_13,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word UnboundInstVars_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word ProcInfo_15;
  MR_Word InstVarSet_16;
  MR_Word UnboundInstVarStrs_17;
  MR_String InstVarVars_18;
  MR_String IsAreUnbound_19;
  MR_Word Context_20;
  MR_Word Pieces_21;
  MR_Word Spec_22;
  MR_Word Var_26;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Box conv0_ProcInfo_15;
  MR_Box conv2_InstVarVars_18;
  MR_Box conv3_IsAreUnbound_19;
  MR_Box conv4_Var_23;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_12, ((MR_Box) (ProcId_10)), &conv0_ProcInfo_15);
  ProcInfo_15 = ((MR_Word) (conv0_ProcInfo_15));
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_15, &InstVarSet_16);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (InstVarSet_16));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  UnboundInstVarStrs_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, UnboundInstVars_11);
  conv2_InstVarVars_18 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundInstVarStrs_17, ((MR_Box) ((MR_String) "inst variable")), ((MR_Box) ((MR_String) "inst variables")));
  InstVarVars_18 = ((MR_String) (conv2_InstVarVars_18));
  conv3_IsAreUnbound_19 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundInstVarStrs_17, ((MR_Box) ((MR_String) "is unbound")), ((MR_Box) ((MR_String) "are unbound")));
  IsAreUnbound_19 = ((MR_String) (conv3_IsAreUnbound_19));
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_15, &Context_20);
  Var_43 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
  {
    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_55, 1) = ((MR_Box) (InstVarVars_18));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[16])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[15])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  Var_58 = parse_tree__error_spec__list_to_pieces_1_f_0(UnboundInstVarStrs_17);
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (IsAreUnbound_19));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[22])));
  }
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_59);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_57);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_45);
  Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[14])), Var_42);
  {
    Spec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unbound_inst_var_error\'/7"));
    MR_hl_field(1, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(1, Spec_22, 3) = ((MR_Box) (Context_20));
    MR_hl_field(1, Spec_22, 4) = ((MR_Box) (Pieces_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_25 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
  }
  mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), &conv4_Var_23, Procs0_12, Procs_13);
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_31;

  conv8_LambdaHeadVar__2_31 = check_hlds__post_typecheck__IntroducedFrom__func__bind_type_vars_to_void__563__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

  check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__556__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_LambdaHeadVar__3_27);
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

    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__338__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4_env_0__conv4_LambdaHeadVar__1_27, check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_3, &env);
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

  conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word ClausesInfo0_114;
      MR_Word ExternalTypeParams_115;
      MR_Word VarTable0_116;
      MR_Word VarsEntries0_117;
      MR_Word BindToVoidTVars0_118;
      MR_Word RevVarsEntries_119;
      MR_Word UnresolvedVarsEntries_120;
      MR_Word BindToVoidTVars_121;
      MR_Word VarTable1_122;
      MR_Word VarTable_123;
      MR_Word ClausesInfo_132;
      MR_Word STATE_VARIABLE_PredInfo_38_136;

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
        MR_Word PredIdPieces_60;
        MR_Word MainPieces_61;
        MR_Word MainMsg_62;
        MR_Word ConstrainedGoals_63;
        MR_Word ContextMsgs_64;
        MR_Word Spec_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_String Var_79;
        MR_String Var_81;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_94;
        MR_Word ClausesInfo_99;
        MR_Word ClausesRep_100;
        MR_Word Clauses_102;
        MR_Word ConstraintMap_103;
        MR_Word ReverseConstraintMap_104;
        MR_Word ConstraintIdSets_105;
        MR_Word ConstraintIds_106;
        MR_Word FindGoals_107;
        MR_Word Var_108;
        MR_Box conv0_Var_81;
        MR_Word _ItemNumbers_101;
        MR_Box conv3_ConstraintIdSets_105;

        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints0_52, &UnprovenConstraints_55);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_38_38, &TVarSet_58);
        hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_38_38, &Context_59);
        PredIdPieces_60 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_14, (MR_Integer) 1, PredId_16);
        conv0_Var_81 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraints_55, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
        Var_81 = ((MR_String) (conv0_Var_81));
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", Var_81);
        {
          Var_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_78, 0) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[25])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[15])));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[2]));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_1));
          MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_87, 3) = ((MR_Box) (TVarSet_58));
        }
        Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), Var_87, UnprovenConstraints_55);
        Var_85 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(Var_86, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[27])));
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_85);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredIdPieces_60, Var_72);
        MainPieces_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[23])), Var_71);
        {
          MainMsg_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainMsg_62, 0) = ((MR_Box) (Context_59));
          MR_hl_field(0, MainMsg_62, 1) = ((MR_Box) (MainPieces_61));
        }
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ClausesInfo_99);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_99, &ClausesRep_100, &_ItemNumbers_101);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_100, &Clauses_102);
        hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ConstraintMap_103);
        ReverseConstraintMap_104 = mercury__map__reverse_map_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_103);
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_108, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[0]));
          MR_hl_field(0, Var_108, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_2));
          MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_108, 3) = ((MR_Box) (ReverseConstraintMap_104));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[6]), Var_108, UnprovenConstraints_55, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ConstraintIdSets_105);
        ConstraintIdSets_105 = ((MR_Word) (conv3_ConstraintIdSets_105));
        ConstraintIds_106 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), ConstraintIdSets_105);
        {
          FindGoals_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FindGoals_107, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[3]));
          MR_hl_field(0, FindGoals_107, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_13_p_0_4));
          MR_hl_field(0, FindGoals_107, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FindGoals_107, 3) = ((MR_Box) (Clauses_102));
          MR_hl_field(0, FindGoals_107, 4) = ((MR_Box) (ConstraintIds_106));
        }
        mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FindGoals_107, &ConstrainedGoals_63);
        if ((ConstrainedGoals_63 == (MR_Word) ((MR_Unsigned) 0U)))
          ContextMsgs_64 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word DueToPieces_65;
          MR_Word ContextMsgsPrefix_66;
          MR_Word ContextMsgsList_67;
          MR_Box conv5_DueToPieces_65;

          conv5_DueToPieces_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), UnprovenConstraints_55, ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[29]))), ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[31]))));
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
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (MainMsg_62));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (ContextMsgs_64));
        }
        {
          Spec_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unsatisfied_constraints\'/6"));
          MR_hl_field(0, Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 52U));
          MR_hl_field(0, Spec_68, 3) = ((MR_Box) (Var_94));
        }
        {
          STATE_VARIABLE_NoTypeErrorSpecs_40_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NoTypeErrorSpecs_40_40, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(1, STATE_VARIABLE_NoTypeErrorSpecs_40_40, 1) = ((MR_Box) (STATE_VARIABLE_NoTypeErrorSpecs_0_35));
        }
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints_55, &NumUnprovenConstraints_56);
        *STATE_VARIABLE_NumBadErrors_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBadErrors_0_31 + (MR_Unsigned) NumUnprovenConstraints_56);
      }
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ClausesInfo0_114);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ExternalTypeParams_115);
      hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_114, &VarTable0_116);
      parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable0_116, &VarsEntries0_117);
      mercury__set__init_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), &BindToVoidTVars0_118);
      check_hlds__post_typecheck__find_unresolved_types_fill_in_is_dummy_9_p_0(ModuleInfo_14, ExternalTypeParams_115, VarsEntries0_117, (MR_Word) ((MR_Unsigned) 0U), &RevVarsEntries_119, (MR_Word) ((MR_Unsigned) 0U), &UnresolvedVarsEntries_120, BindToVoidTVars0_118, &BindToVoidTVars_121);
      parse_tree__var_table__var_table_from_rev_sorted_assoc_list_2_p_0(RevVarsEntries_119, &VarTable1_122);
      if ((UnresolvedVarsEntries_120 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        VarTable_123 = VarTable1_122;
        STATE_VARIABLE_PredInfo_38_136 = STATE_VARIABLE_PredInfo_38_38;
        STATE_VARIABLE_NoTypeErrorSpecs_42_42 = STATE_VARIABLE_NoTypeErrorSpecs_40_40;
      }
      else
      {
        MR_Word PredStatus_126;
        MR_Word DefinedHere_127;
        MR_Word ProofMap0_128;
        MR_Word ConstraintMap0_129;
        MR_Word ProofMap_130;
        MR_Word ConstraintMap_131;
        MR_Word STATE_VARIABLE_PredInfo_37_135;
        MR_Word VoidSubst_139;
        MR_Word Var_141;
        MR_Box conv7_VoidSubst_139;

        hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_38_38, &PredStatus_126);
        DefinedHere_127 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_126);
        switch (DefinedHere_127) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_NoTypeErrorSpecs_42_42 = STATE_VARIABLE_NoTypeErrorSpecs_40_40;
            break;
          case (MR_Integer) 1:
            check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(ModuleInfo_14, PredId_16, STATE_VARIABLE_PredInfo_38_38, UnresolvedVarsEntries_120, STATE_VARIABLE_NoTypeErrorSpecs_40_40, &STATE_VARIABLE_NoTypeErrorSpecs_42_42);
            break;
        }
        hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ProofMap0_128);
        hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_38_38, &ConstraintMap0_129);
        Var_141 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        mercury__set__fold_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[5]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[9]), BindToVoidTVars_121, ((MR_Box) (Var_141)), &conv7_VoidSubst_139);
        VoidSubst_139 = ((MR_Word) (conv7_VoidSubst_139));
        parse_tree__var_table__apply_subst_to_var_table_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[10]), VoidSubst_139, VarTable1_122, &VarTable_123);
        check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(VoidSubst_139, ProofMap0_128, &ProofMap_130);
        check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(VoidSubst_139, ConstraintMap0_129, &ConstraintMap_131);
        hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ProofMap_130, STATE_VARIABLE_PredInfo_38_38, &STATE_VARIABLE_PredInfo_37_135);
        hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_131, STATE_VARIABLE_PredInfo_37_135, &STATE_VARIABLE_PredInfo_38_136);
      }
      hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_123, ClausesInfo0_114, &ClausesInfo_132);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_132, STATE_VARIABLE_PredInfo_38_136, &STATE_VARIABLE_PredInfo_37_37);
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

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, (MR_Integer) 503, (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = (MR_Integer) 508;
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
          MR_Word Procs_43;
          MR_Word OldProcInfo_44;
          MR_Word NewProcInfo_45;
          MR_Word OldContext_46;
          MR_Word NewContext_47;
          MR_Word MainPieces_48;
          MR_Word VerbosePieces_49;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_String Var_63;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_String Var_70;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Box conv0_OldProcInfo_44;
          MR_Box conv1_NewProcInfo_45;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_6, &Procs_43);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_43, ((MR_Box) (ProcId1_3)), &conv0_OldProcInfo_44);
          OldProcInfo_44 = ((MR_Word) (conv0_OldProcInfo_44));
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_43, ((MR_Box) (ProcId_22)), &conv1_NewProcInfo_45);
          NewProcInfo_45 = ((MR_Word) (conv1_NewProcInfo_45));
          hlds__hlds_pred__proc_info_get_context_2_p_0(OldProcInfo_44, &OldContext_46);
          hlds__hlds_pred__proc_info_get_context_2_p_0(NewProcInfo_45, &NewContext_47);
          Var_56 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_1, (MR_Integer) 0, PredId_2);
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[75])));
          MainPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[71])), Var_55);
          Var_63 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, ProcId1_3, STATE_VARIABLE_PredInfo_0_6);
          {
            Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
          }
          Var_70 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, ProcId_22, STATE_VARIABLE_PredInfo_0_6);
          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[79])));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[77])));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_65));
          }
          {
            VerbosePieces_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VerbosePieces_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[76])));
            MR_hl_field(1, VerbosePieces_49, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (MainPieces_48));
          }
          {
            Var_88 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_88, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(2, Var_88, 1) = ((MR_Box) (VerbosePieces_49));
          }
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_84, 0) = ((MR_Box) (NewContext_47));
            MR_hl_field(2, Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_92, 0) = ((MR_Box) (OldContext_46));
            MR_hl_field(0, Var_92, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[81])));
          }
          {
            Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_91));
          }
          {
            Spec_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.post_typecheck.report_indistinguishable_modes_error\'/5"));
            MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_31, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__post_typecheck_scalar_common_3[0])));
            MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Var_83));
          }
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

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_bool succeeded;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_39;
  MR_Integer Var_41;
  MR_Integer Var_42;

  Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
  succeeded = (strcmp(Var_14, (MR_String) "main") == 0);
  if (succeeded)
  {
    Var_15 = (MR_Word) (((MR_Box) ((MR_Integer) 2)));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_4, &Var_39);
    Var_41 = (MR_Integer) (Var_15);
    Var_42 = (MR_Integer) (Var_39);
    succeeded = (Var_41 == Var_42);
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
      MR_Word Spec_11;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_9);
      {
        Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.check_type_of_main\'/3"));
        MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Context_9));
        MR_hl_field(1, Spec_11, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[69])));
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
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_Pieces_7;

  conv7_Pieces_7 = check_hlds__post_typecheck__var_and_type_to_pieces_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Pieces_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_Pieces_5;

  conv5_Pieces_5 = check_hlds__post_typecheck__var_only_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_Pieces_5));
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
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Integer conv1_STATE_VARIABLE_MaxVarNameLen_22;
  MR_Word conv0_STATE_VARIABLE_AllTVars_24;

  check_hlds__post_typecheck__var_vte_to_name_and_type_strs_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaxVarNameLen_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_AllTVars_24);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaxVarNameLen_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_AllTVars_24));
}

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word VarsEntries_10,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word TypeVarSet_12;
  MR_Word Context_13;
  MR_Word PredIdPieces_14;
  MR_Word VarTypeStrs0_15;
  MR_Integer MaxVarNameLen0_16;
  MR_Word MaybeAllTVars_17;
  MR_Word VarTypeStrs_18;
  MR_Word VarTypePieceLists_19;
  MR_Word SetPieces_20;
  MR_String Known_21;
  MR_Word VarTypePieces_23;
  MR_Word MainPieces_24;
  MR_String TypeOrTypes_25;
  MR_String VarOrVars_26;
  MR_String IsOrAre_27;
  MR_Word VerbosePieces_28;
  MR_Word Msg_29;
  MR_Word Spec_30;
  MR_Word Var_34;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_String Var_93;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_114;
  MR_Word Var_117;
  MR_Word Var_120;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_166;
  MR_Box conv4_MaxVarNameLen0_16;
  MR_Box conv3_MaybeAllTVars_17;
  MR_Box conv9_Var_93;
  MR_Box conv10_TypeOrTypes_25;
  MR_Box conv11_VarOrVars_26;
  MR_Box conv12_IsOrAre_27;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_9, &TypeVarSet_12);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_13);
  PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, PredId_8);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeVarSet_12));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_maybe_all_tvars_0), Var_34, VarsEntries_10, &VarTypeStrs0_15, ((MR_Box) ((MR_Integer) 0)), &conv4_MaxVarNameLen0_16, ((MR_Box) ((MR_Integer) 1)), &conv3_MaybeAllTVars_17);
  MaxVarNameLen0_16 = ((MR_Integer) (conv4_MaxVarNameLen0_16));
  MaybeAllTVars_17 = ((MR_Word) (conv3_MaybeAllTVars_17));
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), VarTypeStrs0_15, &VarTypeStrs_18);
  switch (MaybeAllTVars_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_38;
        MR_String Var_39;
        MR_Box conv6_Var_39;

        VarTypePieceLists_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[8]), VarTypeStrs_18);
        conv6_Var_39 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "Its type")), ((MR_Box) ((MR_String) "Their types")));
        Var_39 = ((MR_String) (conv6_Var_39));
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
        }
        {
          SetPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SetPieces_20, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, SetPieces_20, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[43])));
        }
        Known_21 = (MR_String) "known";
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer MaxVarNameLen_22;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_Box conv8_Var_60;

        succeeded = (MaxVarNameLen0_16 > (MR_Integer) 15);
        if (succeeded)
          MaxVarNameLen_22 = (MR_Integer) 15;
        else
          MaxVarNameLen_22 = MaxVarNameLen0_16;
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[1]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_6_p_0_3));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (MaxVarNameLen_22));
        }
        VarTypePieceLists_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[7]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), Var_55, VarTypeStrs_18);
        conv8_Var_60 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
        Var_60 = ((MR_String) (conv8_Var_60));
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[46])));
        }
        {
          SetPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SetPieces_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[44])));
          MR_hl_field(1, SetPieces_20, 1) = ((MR_Box) (Var_58));
        }
        Known_21 = (MR_String) "fully known";
      }
      break;
  }
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarTypePieceLists_19, &VarTypePieces_23);
  conv9_Var_93 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
  Var_93 = ((MR_String) (conv9_Var_93));
  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[25])));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[47])));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[15])));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
  }
  Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[27])), SetPieces_20);
  Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarTypePieces_23, Var_101);
  Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_100);
  Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredIdPieces_14, Var_80);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[23])), Var_79);
  conv10_TypeOrTypes_25 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
  TypeOrTypes_25 = ((MR_String) (conv10_TypeOrTypes_25));
  conv11_VarOrVars_26 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  VarOrVars_26 = ((MR_String) (conv11_VarOrVars_26));
  conv12_IsOrAre_27 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarsEntries_10, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
  IsOrAre_27 = ((MR_String) (conv12_IsOrAre_27));
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (TypeOrTypes_25));
  }
  {
    Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_129, 1) = ((MR_Box) (VarOrVars_26));
  }
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_134, 1) = ((MR_Box) (IsOrAre_27));
  }
  {
    Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_139, 1) = ((MR_Box) (Known_21));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[61])));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[54])));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[53])));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[52])));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[51])));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[50])));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[49])));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
  }
  {
    VerbosePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VerbosePieces_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[48])));
    MR_hl_field(1, VerbosePieces_28, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_156 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_156, 0) = ((MR_Box) (MainPieces_24));
  }
  {
    Var_158 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_158, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, Var_158, 1) = ((MR_Box) (VerbosePieces_28));
  }
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_157));
  }
  {
    Msg_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_29, 0) = ((MR_Box) (Context_13));
    MR_hl_field(2, Msg_29, 1) = ((MR_Box) (Var_155));
  }
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (Msg_29));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unresolved_type_warning\'/6"));
    MR_hl_field(3, Spec_30, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 57) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Spec_30, 3) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(3, Spec_30, 4) = ((MR_Box) (Var_166));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_32 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
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
    MR_Word GoalInfo_17;
    MR_Word Context_18;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    if ((Goals_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
      Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[21]));
    }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Goals_7, (MR_Integer) 1))));

      if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
        Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[32]));
      }
      else
      {
        Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
        Suffix_14 = (MR_Word) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[33]));
      }
    }
    GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
    Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Context_18));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Suffix_14));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Words_13, Var_30);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Msg_8, 0) = ((MR_Box) (Var_24));
      MR_hl_field(3, Msg_8, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(3, Msg_8, 3) = ((MR_Box) (Var_27));
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
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
      break;
    case (MR_Integer) 1:
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 0))));
        MR_Word CallPieces_108;

        CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_9);
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[34])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_108));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_127 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Var_127)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[38]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PFSymNameArity_24 = ((MR_Word) ((MR_hl_field(1, Var_127, (MR_Integer) 3))));
                  MR_Word Var_69;
                  MR_Word CallPieces_93;

                  {
                    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                    MR_hl_field(3, Var_69, 1) = ((MR_Box) (PFSymNameArity_24));
                  }
                  {
                    CallPieces_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, CallPieces_93, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(1, CallPieces_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[34])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_93));
                  }
                }
                break;
              case (MR_Integer) 2:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
                break;
              case (MR_Integer) 3:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallPieces_15;
            MR_Word PredId_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));

            CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_83);
            {
              Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__post_typecheck_scalar_common_1[34])));
              MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (CallPieces_15));
            }
          }
          break;
        case (MR_Integer) 2:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
          break;
        case (MR_Integer) 3:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
          break;
        case (MR_Integer) 4:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
          break;
        case (MR_Integer) 5:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
          break;
        case (MR_Integer) 6:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
          break;
        case (MR_Integer) 7:
          Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__post_typecheck_scalar_common_1[36]));
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
  MR_Word conv0_STATE_VARIABLE_Specs_25;

  check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Procs_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_Procs_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
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
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
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
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0]));
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
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[0]));
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
