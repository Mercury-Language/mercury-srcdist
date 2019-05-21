/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version DEV
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


// :- module check_hlds.typeclasses.
// :- implementation.

/*
INIT mercury__check_hlds__typeclasses__init
ENDINIT
*/

#include "check_hlds.typeclasses.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3;
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4;
  MR_bool check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
  jmp_buf check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6;
  MR_Box check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6;
};

struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2;
  MR_bool check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9;
  jmp_buf check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11;
};

struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1;
  MR_bool check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded;
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13;
  jmp_buf check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24;
  MR_Box check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(
  MR_Word ClassTable_14,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
  MR_Word Seen_3,
  MR_Word Constraint_4);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
  MR_Word Constraint_9,
  MR_Word InstanceTypes0_10,
  MR_Word ExternalTypeParams_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Bindings_0_23,
  MR_Word * STATE_VARIABLE_Bindings_24,
  MR_Word STATE_VARIABLE_Changed_0_25,
  MR_Word * STATE_VARIABLE_Changed_26);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
  MR_Word FunDeps_9,
  MR_Word InstanceTypes_10,
  MR_Word ExternalTypeParams_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16,
  MR_Word STATE_VARIABLE_Changed_0_17,
  MR_Word * STATE_VARIABLE_Changed_18);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
  MR_Word Constraints_11,
  MR_Word FunDeps_12,
  MR_Word ExternalTypeParams_13,
  MR_Word InstanceDefn_14,
  MR_Word STATE_VARIABLE_TVarSet_0_24,
  MR_Word * STATE_VARIABLE_TVarSet_25,
  MR_Word STATE_VARIABLE_Bindings_0_26,
  MR_Word * STATE_VARIABLE_Bindings_27,
  MR_Word STATE_VARIABLE_Changed_0_28,
  MR_Word * STATE_VARIABLE_Changed_29);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
  MR_Word ClassTable_12,
  MR_Word InstanceTable_13,
  MR_Word ExternalTypeParams_14,
  MR_Word RedundantConstraints_15,
  MR_Word ClassId_16,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_Bindings_0_27,
  MR_Word * STATE_VARIABLE_Bindings_28,
  MR_Word STATE_VARIABLE_Changed_0_29,
  MR_Word * STATE_VARIABLE_Changed_30);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
  MR_Word ClassTable_9,
  MR_Word ExternalTypeParams_10,
  MR_Word RedundantConstraints_11,
  MR_Word ClassId_12,
  MR_Word STATE_VARIABLE_Bindings_0_19,
  MR_Word * STATE_VARIABLE_Bindings_20,
  MR_Word STATE_VARIABLE_Changed_0_21,
  MR_Word * STATE_VARIABLE_Changed_22);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FunDeps_2,
  MR_Word ExternalTypeParams_3,
  MR_Word STATE_VARIABLE_Bindings_0_4,
  MR_Word * STATE_VARIABLE_Bindings_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
  MR_Word Constraint_1,
  MR_Word HeadVar__2_2,
  MR_Word FunDeps_3,
  MR_Word ExternalTypeParams_4,
  MR_Word STATE_VARIABLE_Bindings_0_5,
  MR_Word * STATE_VARIABLE_Bindings_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
  MR_Word ConstraintA_1,
  MR_Word ConstraintB_2,
  MR_Word HeadVar__3_3,
  MR_Word ExternalTypeParams_4,
  MR_Word STATE_VARIABLE_Bindings_0_5,
  MR_Word * STATE_VARIABLE_Bindings_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
  MR_Word ClassTable_8,
  MR_Word InstanceTable_9,
  MR_Word STATE_VARIABLE_TypeAssign_0_29,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_UnsatTypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_UnsatTypeAssignSet_33);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExternalTypeParams_2);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word ClassTable_16,
  MR_Word InstanceTable_17,
  MR_Word ExternalTypeParams_18,
  MR_Word STATE_VARIABLE_Bindings_0_29,
  MR_Word * STATE_VARIABLE_Bindings_30,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_ProofMap_0_33,
  MR_Word * STATE_VARIABLE_ProofMap_34,
  MR_Word STATE_VARIABLE_ConstraintMap_0_35,
  MR_Word * STATE_VARIABLE_ConstraintMap_36,
  MR_Word STATE_VARIABLE_Constraints_0_37,
  MR_Word * STATE_VARIABLE_Constraints_38,
  MR_Word STATE_VARIABLE_Seen_0_39,
  MR_Word * STATE_VARIABLE_Seen_40);

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
  MR_Word STATE_VARIABLE_ProofMap_0_17,
  MR_Word * STATE_VARIABLE_ProofMap_18,
  MR_Word STATE_VARIABLE_ConstraintMap_0_19,
  MR_Word * STATE_VARIABLE_ConstraintMap_20,
  MR_Word STATE_VARIABLE_Constraints_0_21,
  MR_Word * STATE_VARIABLE_Constraints_22,
  MR_Word * Changed_11);

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
  MR_Word Ancestors_1,
  MR_Word STATE_VARIABLE_ProofMap_0_2,
  MR_Word * STATE_VARIABLE_ProofMap_3,
  MR_Word STATE_VARIABLE_ConstraintMap_0_4,
  MR_Word * STATE_VARIABLE_ConstraintMap_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
  MR_Word Constraint_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProofMap_0_3,
  MR_Word * STATE_VARIABLE_ProofMap_4);

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
  MR_Word ClassTable_14,
  MR_Word InstanceTable_15,
  MR_Word STATE_VARIABLE_TVarSet_0_28,
  MR_Word * STATE_VARIABLE_TVarSet_29,
  MR_Word STATE_VARIABLE_ProofMap_0_30,
  MR_Word * STATE_VARIABLE_ProofMap_31,
  MR_Word STATE_VARIABLE_ConstraintMap_0_32,
  MR_Word * STATE_VARIABLE_ConstraintMap_33,
  MR_Word STATE_VARIABLE_Seen_0_34,
  MR_Word * STATE_VARIABLE_Seen_35,
  MR_Word STATE_VARIABLE_Constraints_0_36,
  MR_Word * STATE_VARIABLE_Constraints_37,
  MR_Word * Changed_21);

static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
  MR_Word ClassTable_1,
  MR_Word InstanceTable_2,
  MR_Word STATE_VARIABLE_TVarSet_0_3,
  MR_Word * STATE_VARIABLE_TVarSet_4,
  MR_Word STATE_VARIABLE_ProofMap_0_5,
  MR_Word * STATE_VARIABLE_ProofMap_6,
  MR_Word STATE_VARIABLE_ConstraintMap_0_7,
  MR_Word * STATE_VARIABLE_ConstraintMap_8,
  MR_Word STATE_VARIABLE_Redundant_0_9,
  MR_Word * STATE_VARIABLE_Redundant_10,
  MR_Word STATE_VARIABLE_Seen_0_11,
  MR_Word * STATE_VARIABLE_Seen_12,
  MR_Word HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15);

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
  MR_Word Instances_8,
  MR_Word Constraint_9,
  MR_Word STATE_VARIABLE_TVarSet_0_13,
  MR_Word * STATE_VARIABLE_TVarSet_14,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16,
  MR_Word * NewConstraints_12);

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer InstanceNum0_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_ProofMap_0_33,
  MR_Word * STATE_VARIABLE_ProofMap_34,
  MR_Word * NewConstraints_15);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
  MR_Word AssumedCs_1,
  MR_Word STATE_VARIABLE_ConstraintMap_0_2,
  MR_Word * STATE_VARIABLE_ConstraintMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
  MR_Word ClassTable_10,
  MR_Word InstanceTable_11,
  MR_Word ExternalTypeParams_12,
  MR_Word Constraints_13,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_Bindings_0_21,
  MR_Word * STATE_VARIABLE_Bindings_22,
  MR_Word * Changed_16);

static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
  MR_Word C0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[3][11];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_6[1][14];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][5];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][13];




static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typeclasses_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_6[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(
  MR_Word ClassTable_14,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37)
{
  {
    MR_Word Constraints0_24;
    MR_Word TVarSet_25;
    MR_Word Constraints_26;
    MR_Word Var_39;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(LambdaHeadVar__1_36, &Constraints0_24);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(LambdaHeadVar__1_36, &TVarSet_25);
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 1)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 2)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 3)));
    hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_14, TVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_39, &Constraints_26);
    check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(Constraints_26, LambdaHeadVar__1_36, LambdaHeadVar__2_37);
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6 = ((MR_Word) (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6);
    check_hlds__typeclasses__matches_no_constraint_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = hlds__hlds_class__matching_constraints_2_p_0((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6, (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4);
    if ((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded)
      check_hlds__typeclasses__matches_no_constraint_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, &(env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6, (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3, check_hlds__typeclasses__matches_no_constraint_2_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
  MR_Word Seen_3,
  MR_Word Constraint_4)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s env;

    (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3 = Seen_3;
    (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4 = Constraint_4;
    check_hlds__typeclasses__matches_no_constraint_2_p_0_4(&env);
    (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = !((env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded);
    return (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
  MR_Word Constraint_9,
  MR_Word InstanceTypes0_10,
  MR_Word ExternalTypeParams_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Bindings_0_23,
  MR_Word * STATE_VARIABLE_Bindings_24,
  MR_Word STATE_VARIABLE_Changed_0_25,
  MR_Word * STATE_VARIABLE_Changed_26)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 2)));
    MR_Word Domain_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 0)));
    MR_Word Range_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 1)));
    MR_Word _Ids_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 0)));
    MR_Word _ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_Bindings_27_27;
    MR_Word TypeCtorInfo_13_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word TypeCtorInfo_17_60;
    MR_Word Subst_20;
    MR_Word InstanceTypes_21;
    MR_Word RTypesA_34;
    MR_Word RTypesB_35;
    MR_Word RTypesBVars_36;
    MR_Word Subst0_37;
    MR_Word RTypesA_57;
    MR_Word RTypesB_58;
    MR_Word TypeCtorInfo_13_48;
    MR_Word TypeInfo_14_49;
    MR_Word RTypesA_44;
    MR_Word RTypesB_45;
    MR_Word RTypesBVars_46;
    MR_Word Subst0_47;
    MR_Word Var_22;

    RTypesA_34 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_38, Domain_18, InstanceTypes0_10);
    RTypesB_35 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_38, Domain_18, ConstraintTypes_17);
    parse_tree__prog_type__type_vars_list_2_p_0(RTypesB_35, &RTypesBVars_36);
    mercury__map__init_1_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], TypeCtorInfo_13_38, &Subst0_37);
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_34, RTypesB_35, RTypesBVars_36, Subst0_37, &Subst_20);
    if (succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_20, InstanceTypes0_10, &InstanceTypes_21);
      TypeCtorInfo_13_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      RTypesA_44 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_48, Range_19, InstanceTypes_21);
      RTypesB_45 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_48, Range_19, ConstraintTypes_17);
      parse_tree__prog_type__type_vars_list_2_p_0(RTypesB_45, &RTypesBVars_46);
      TypeInfo_14_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[3];
      mercury__map__init_1_p_0(TypeInfo_14_49, TypeCtorInfo_13_48, &Subst0_47);
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_44, RTypesB_45, RTypesBVars_46, Subst0_47, &Var_22);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_17_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        RTypesA_57 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_17_60, Range_19, InstanceTypes_21);
        RTypesB_58 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_17_60, Range_19, ConstraintTypes_17);
        succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_57, RTypesB_58, ExternalTypeParams_11, STATE_VARIABLE_Bindings_0_23, &STATE_VARIABLE_Bindings_27_27);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Bindings_24 = STATE_VARIABLE_Bindings_27_27;
      *STATE_VARIABLE_Changed_26 = (MR_Integer) 1;
    }
    else
    {
      *STATE_VARIABLE_Changed_26 = STATE_VARIABLE_Changed_0_25;
      *STATE_VARIABLE_Bindings_24 = STATE_VARIABLE_Bindings_0_23;
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Bindings_24;
    MR_Word conv0_STATE_VARIABLE_Changed_26;

    check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Bindings_24, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Changed_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_26));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
  MR_Word FunDeps_9,
  MR_Word InstanceTypes_10,
  MR_Word ExternalTypeParams_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16,
  MR_Word STATE_VARIABLE_Changed_0_17,
  MR_Word * STATE_VARIABLE_Changed_18)
{
  {
    MR_Word Var_19;
    MR_Box conv3_STATE_VARIABLE_Bindings_16;
    MR_Box conv2_STATE_VARIABLE_Changed_18;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Constraint_12));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (InstanceTypes_10));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ExternalTypeParams_11));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, Var_19, FunDeps_9, ((MR_Box) (STATE_VARIABLE_Bindings_0_15)), &conv3_STATE_VARIABLE_Bindings_16, ((MR_Box) (STATE_VARIABLE_Changed_0_17)), &conv2_STATE_VARIABLE_Changed_18);
    *STATE_VARIABLE_Bindings_16 = ((MR_Word) conv3_STATE_VARIABLE_Bindings_16);
    *STATE_VARIABLE_Changed_18 = ((MR_Word) conv2_STATE_VARIABLE_Changed_18);
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Bindings_16;
    MR_Word conv0_STATE_VARIABLE_Changed_18;

    check_hlds__typeclasses__do_instance_improvement_4_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Bindings_16, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Changed_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_18));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
  MR_Word Constraints_11,
  MR_Word FunDeps_12,
  MR_Word ExternalTypeParams_13,
  MR_Word InstanceDefn_14,
  MR_Word STATE_VARIABLE_TVarSet_0_24,
  MR_Word * STATE_VARIABLE_TVarSet_25,
  MR_Word STATE_VARIABLE_Bindings_0_26,
  MR_Word * STATE_VARIABLE_Bindings_27,
  MR_Word STATE_VARIABLE_Changed_0_28,
  MR_Word * STATE_VARIABLE_Changed_29)
{
  {
    MR_Word InstanceTVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 8)));
    MR_Word InstanceTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 1)));
    MR_Word NewTVarSet_20;
    MR_Word Renaming_21;
    MR_Word InstanceTypes_22;
    MR_Word Changed0_23;
    MR_Word Var_30;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 3)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 4)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 5)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 6)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 7)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_14, (MR_Integer) 9)));
    MR_Box conv3_STATE_VARIABLE_Bindings_27;
    MR_Box conv2_Changed0_23;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_24, InstanceTVarSet_18, &NewTVarSet_20, &Renaming_21);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_21, InstanceTypes0_19, &InstanceTypes_22);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (FunDeps_12));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (InstanceTypes_22));
      MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) (ExternalTypeParams_13));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, Var_30, Constraints_11, ((MR_Box) (STATE_VARIABLE_Bindings_0_26)), &conv3_STATE_VARIABLE_Bindings_27, ((MR_Box) ((MR_Integer) 0)), &conv2_Changed0_23);
    *STATE_VARIABLE_Bindings_27 = ((MR_Word) conv3_STATE_VARIABLE_Bindings_27);
    Changed0_23 = ((MR_Word) conv2_Changed0_23);
    switch (Changed0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_TVarSet_25 = STATE_VARIABLE_TVarSet_0_24;
          *STATE_VARIABLE_Changed_29 = STATE_VARIABLE_Changed_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_TVarSet_25 = NewTVarSet_20;
          *STATE_VARIABLE_Changed_29 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_TVarSet_25;
    MR_Word conv4_STATE_VARIABLE_Bindings_27;
    MR_Word conv3_STATE_VARIABLE_Changed_29;

    check_hlds__typeclasses__do_instance_improvement_3_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_STATE_VARIABLE_TVarSet_25, ((MR_Word) wrapper_arg_4), &conv4_STATE_VARIABLE_Bindings_27, ((MR_Word) wrapper_arg_6), &conv3_STATE_VARIABLE_Changed_29);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TVarSet_25));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Bindings_27));
    *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_Changed_29));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
  MR_Word ClassTable_12,
  MR_Word InstanceTable_13,
  MR_Word ExternalTypeParams_14,
  MR_Word RedundantConstraints_15,
  MR_Word ClassId_16,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_Bindings_0_27,
  MR_Word * STATE_VARIABLE_Bindings_28,
  MR_Word STATE_VARIABLE_Changed_0_29,
  MR_Word * STATE_VARIABLE_Changed_30)
{
  {
    MR_Word TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word ClassDefn_20;
    MR_Word FunDeps_21;
    MR_Word InstanceDefns_22;
    MR_Word ConstraintSet_23;
    MR_Word ConstraintList_24;
    MR_Word Var_31;
    MR_Box conv0_ClassDefn_20;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Box conv1_InstanceDefns_22;
    MR_Box conv2_ConstraintSet_23;
    MR_Box conv8_STATE_VARIABLE_TVarSet_26;
    MR_Box conv7_STATE_VARIABLE_Bindings_28;
    MR_Box conv6_STATE_VARIABLE_Changed_30;

    mercury__map__lookup_3_p_0(TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_12, ((MR_Box) (ClassId_16)), &conv0_ClassDefn_20);
    ClassDefn_20 = ((MR_Word) conv0_ClassDefn_20);
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 1)));
    FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 2)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 3)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 4)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 5)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 6)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 7)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 8)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_20, (MR_Integer) 9)));
    mercury__map__lookup_3_p_0(TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], InstanceTable_13, ((MR_Box) (ClassId_16)), &conv1_InstanceDefns_22);
    InstanceDefns_22 = ((MR_Word) conv1_InstanceDefns_22);
    mercury__map__lookup_3_p_0(TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], RedundantConstraints_15, ((MR_Box) (ClassId_16)), &conv2_ConstraintSet_23);
    ConstraintSet_23 = ((MR_Word) conv2_ConstraintSet_23);
    mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, ConstraintSet_23, &ConstraintList_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ConstraintList_24));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (FunDeps_21));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ExternalTypeParams_14));
    }
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, Var_31, InstanceDefns_22, ((MR_Box) (STATE_VARIABLE_TVarSet_0_25)), &conv8_STATE_VARIABLE_TVarSet_26, ((MR_Box) (STATE_VARIABLE_Bindings_0_27)), &conv7_STATE_VARIABLE_Bindings_28, ((MR_Box) (STATE_VARIABLE_Changed_0_29)), &conv6_STATE_VARIABLE_Changed_30);
    *STATE_VARIABLE_TVarSet_26 = ((MR_Word) conv8_STATE_VARIABLE_TVarSet_26);
    *STATE_VARIABLE_Bindings_28 = ((MR_Word) conv7_STATE_VARIABLE_Bindings_28);
    *STATE_VARIABLE_Changed_30 = ((MR_Word) conv6_STATE_VARIABLE_Changed_30);
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
  MR_Word ClassTable_9,
  MR_Word ExternalTypeParams_10,
  MR_Word RedundantConstraints_11,
  MR_Word ClassId_12,
  MR_Word STATE_VARIABLE_Bindings_0_19,
  MR_Word * STATE_VARIABLE_Bindings_20,
  MR_Word STATE_VARIABLE_Changed_0_21,
  MR_Word * STATE_VARIABLE_Changed_22)
{
  {
    MR_Word TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word ClassDefn_15;
    MR_Word FunDeps_16;
    MR_Word ConstraintSet_17;
    MR_Word ConstraintList_18;
    MR_Box conv0_ClassDefn_15;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Box conv1_ConstraintSet_17;

    mercury__map__lookup_3_p_0(TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_9, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_15);
    ClassDefn_15 = ((MR_Word) conv0_ClassDefn_15);
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 0)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 1)));
    FunDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 3)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 4)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 5)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 6)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 7)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 8)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 9)));
    mercury__map__lookup_3_p_0(TypeCtorInfo_34_34, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], RedundantConstraints_11, ((MR_Box) (ClassId_12)), &conv1_ConstraintSet_17);
    ConstraintSet_17 = ((MR_Word) conv1_ConstraintSet_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, ConstraintSet_17, &ConstraintList_18);
    check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(ConstraintList_18, FunDeps_16, ExternalTypeParams_10, STATE_VARIABLE_Bindings_0_19, STATE_VARIABLE_Bindings_20, STATE_VARIABLE_Changed_0_21, STATE_VARIABLE_Changed_22);
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FunDeps_2,
  MR_Word ExternalTypeParams_3,
  MR_Word STATE_VARIABLE_Bindings_0_4,
  MR_Word * STATE_VARIABLE_Bindings_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_Bindings_5 = STATE_VARIABLE_Bindings_0_4;
    }
    else
    {
      MR_Word Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Bindings_26_26;
      MR_Word STATE_VARIABLE_Changed_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;

      check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(Constraint_16, Constraints_17, FunDeps_2, ExternalTypeParams_3, STATE_VARIABLE_Bindings_0_4, &STATE_VARIABLE_Bindings_26_26, STATE_VARIABLE_Changed_0_6, &STATE_VARIABLE_Changed_27_27);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Constraints_17;
      next_value_of_STATE_VARIABLE_Bindings_0_4 = STATE_VARIABLE_Bindings_26_26;
      next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Bindings_0_4 = next_value_of_STATE_VARIABLE_Bindings_0_4;
      STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
  MR_Word Constraint_1,
  MR_Word HeadVar__2_2,
  MR_Word FunDeps_3,
  MR_Word ExternalTypeParams_4,
  MR_Word STATE_VARIABLE_Bindings_0_5,
  MR_Word * STATE_VARIABLE_Bindings_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_Bindings_6 = STATE_VARIABLE_Bindings_0_5;
    }
    else
    {
      MR_Word HeadConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word TailConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Bindings_29_29;
      MR_Word STATE_VARIABLE_Changed_30_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      check_hlds__typeclasses__do_class_improvement_pair_8_p_0(Constraint_1, HeadConstraint_19, FunDeps_3, ExternalTypeParams_4, STATE_VARIABLE_Bindings_0_5, &STATE_VARIABLE_Bindings_29_29, STATE_VARIABLE_Changed_0_7, &STATE_VARIABLE_Changed_30_30);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = TailConstraints_20;
      next_value_of_STATE_VARIABLE_Bindings_0_5 = STATE_VARIABLE_Bindings_29_29;
      next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Bindings_0_5 = next_value_of_STATE_VARIABLE_Bindings_0_5;
      STATE_VARIABLE_Changed_0_7 = next_value_of_STATE_VARIABLE_Changed_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
  MR_Word ConstraintA_1,
  MR_Word ConstraintB_2,
  MR_Word HeadVar__3_3,
  MR_Word ExternalTypeParams_4,
  MR_Word STATE_VARIABLE_Bindings_0_5,
  MR_Word * STATE_VARIABLE_Bindings_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_Bindings_6 = STATE_VARIABLE_Bindings_0_5;
    }
    else
    {
      MR_Word FunDep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Bindings_29_29;
      MR_Word STATE_VARIABLE_Changed_30_30;
      MR_Word TypesA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintA_1, (MR_Integer) 2)));
      MR_Word TypesB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintB_2, (MR_Integer) 2)));
      MR_Word Domain_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_20, (MR_Integer) 0)));
      MR_Word Range_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_20, (MR_Integer) 1)));
      MR_Word _IdsA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintA_1, (MR_Integer) 0)));
      MR_Word _ClassNameA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintA_1, (MR_Integer) 1)));
      MR_Word _IdsB_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintB_2, (MR_Integer) 0)));
      MR_Word _ClassNameB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintB_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Bindings_27_51;
      MR_Word TypeCtorInfo_9_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      MR_Word TypeCtorInfo_17_78;
      MR_Word RTypesA_57;
      MR_Word RTypesB_58;
      MR_Word RTypesA_75;
      MR_Word RTypesB_76;
      MR_Word TypeCtorInfo_9_66;
      MR_Word TypeInfo_10_67;
      MR_Word RTypesA_64;
      MR_Word RTypesB_65;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      RTypesA_57 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_59, Domain_49, TypesA_45);
      RTypesB_58 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_59, Domain_49, TypesB_48);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[6], ((MR_Box) (RTypesA_57)), ((MR_Box) (RTypesB_58)));
      if (succeeded)
      {
        TypeCtorInfo_9_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        RTypesA_64 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_66, Range_50, TypesA_45);
        RTypesB_65 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_66, Range_50, TypesB_48);
        TypeInfo_10_67 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_67, ((MR_Box) (RTypesA_64)), ((MR_Box) (RTypesB_65)));
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_17_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          RTypesA_75 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_17_78, Range_50, TypesA_45);
          RTypesB_76 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_17_78, Range_50, TypesB_48);
          succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_75, RTypesB_76, ExternalTypeParams_4, STATE_VARIABLE_Bindings_0_5, &STATE_VARIABLE_Bindings_27_51);
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_Bindings_29_29 = STATE_VARIABLE_Bindings_27_51;
        STATE_VARIABLE_Changed_30_30 = (MR_Integer) 1;
      }
      else
      {
        STATE_VARIABLE_Changed_30_30 = STATE_VARIABLE_Changed_0_7;
        STATE_VARIABLE_Bindings_29_29 = STATE_VARIABLE_Bindings_0_5;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = FunDeps_21;
      next_value_of_STATE_VARIABLE_Bindings_0_5 = STATE_VARIABLE_Bindings_29_29;
      next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Bindings_0_5 = next_value_of_STATE_VARIABLE_Bindings_0_5;
      STATE_VARIABLE_Changed_0_7 = next_value_of_STATE_VARIABLE_Changed_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
  MR_Word ClassTable_8,
  MR_Word InstanceTable_9,
  MR_Word STATE_VARIABLE_TypeAssign_0_29,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_UnsatTypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_UnsatTypeAssignSet_33)
{
  {
    MR_bool succeeded;
    MR_Word Constraints0_13;
    MR_Word TypeCtorInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word Unproven0_14;
    MR_Word Assumed0_15;
    MR_Word Redundant0_16;
    MR_Word Ancestors0_17;

    check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &Constraints0_13);
    Unproven0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 0)));
    Assumed0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 1)));
    Redundant0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 2)));
    Ancestors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 3)));
    succeeded = (Unproven0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (Assumed0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
        TypeInfo_47_47 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[1];
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_46_46, TypeInfo_47_47, Redundant0_16);
        if (succeeded)
        {
          TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
          TypeInfo_49_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[2];
          succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_48_48, TypeInfo_49_49, Ancestors0_17);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_35;

      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (STATE_VARIABLE_TypeAssign_0_29));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, STATE_VARIABLE_TypeAssignSet_0_30, Var_35);
      *STATE_VARIABLE_UnsatTypeAssignSet_33 = STATE_VARIABLE_UnsatTypeAssignSet_0_32;
    }
    else
    {
      MR_Word ExternalTypeParams_18;
      MR_Word TVarSet0_19;
      MR_Word Bindings0_20;
      MR_Word ProofMap0_21;
      MR_Word ConstraintMap0_22;
      MR_Word Bindings_23;
      MR_Word TVarSet_24;
      MR_Word ProofMap_25;
      MR_Word ConstraintMap_26;
      MR_Word Constraints_27;
      MR_Word Unproven_28;
      MR_Word STATE_VARIABLE_TypeAssign_37_42;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_70;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ExternalTypeParams_18);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &TVarSet0_19);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &Bindings0_20);
      check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ProofMap0_21);
      check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ConstraintMap0_22);
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 0)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 1)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 2)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints0_13, (MR_Integer) 3)));
      check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(ClassTable_8, InstanceTable_9, ExternalTypeParams_18, Bindings0_20, &Bindings_23, TVarSet0_19, &TVarSet_24, ProofMap0_21, &ProofMap_25, ConstraintMap0_22, &ConstraintMap_26, Constraints0_13, &Constraints_27, Var_76, &Var_70);
      check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(TVarSet_24, Bindings_23, Constraints_27, ProofMap_25, ConstraintMap_26, STATE_VARIABLE_TypeAssign_0_29, &STATE_VARIABLE_TypeAssign_37_42);
      Unproven_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_27, (MR_Integer) 0)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_27, (MR_Integer) 1)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_27, (MR_Integer) 2)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_27, (MR_Integer) 3)));
      succeeded = check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(Unproven_28, ExternalTypeParams_18);
      if (succeeded)
      {
        MR_Word Var_39;

        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (STATE_VARIABLE_TypeAssign_37_42));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, STATE_VARIABLE_TypeAssignSet_0_30, Var_39);
        *STATE_VARIABLE_UnsatTypeAssignSet_33 = STATE_VARIABLE_UnsatTypeAssignSet_0_32;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_UnsatTypeAssignSet_33 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_TypeAssign_37_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnsatTypeAssignSet_0_32));
        }
        *STATE_VARIABLE_TypeAssignSet_31 = STATE_VARIABLE_TypeAssignSet_0_30;
      }
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) env_ptr_arg;

    {
      (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], ((MR_Box) ((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11)), (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2);
      (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded);
      if ((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
        check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9, &(env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11, check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2, env_ptr);
        (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExternalTypeParams_2)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s env;

    (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2 = ExternalTypeParams_2;
    while (MR_TRUE)
    {
      // setup for model_semi tailcalls optimized into a loop
      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
      else
      {
        MR_Word Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word _Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0)));
        MR_Word _ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1)));
        MR_Word next_value_of_HeadVar__1_1;

        (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 2)));
        check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(&env);
        if ((env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
        {
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Constraints_5;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      return (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
      break;
    }
  }
}

void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(
  MR_Word ClassTable_14,
  MR_Word InstanceTable_15,
  MR_Word ExternalTypeParams_16,
  MR_Word STATE_VARIABLE_Bindings_0_23,
  MR_Word * STATE_VARIABLE_Bindings_24,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_ProofMap_0_27,
  MR_Word * STATE_VARIABLE_ProofMap_28,
  MR_Word STATE_VARIABLE_ConstraintMap_0_29,
  MR_Word * STATE_VARIABLE_ConstraintMap_30,
  MR_Word STATE_VARIABLE_Constraints_0_31,
  MR_Word * STATE_VARIABLE_Constraints_32)
{
  {
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_31, (MR_Integer) 0)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_31, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_31, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_31, (MR_Integer) 3)));
    MR_Word Var_22;

    check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(ClassTable_14, InstanceTable_15, ExternalTypeParams_16, STATE_VARIABLE_Bindings_0_23, STATE_VARIABLE_Bindings_24, STATE_VARIABLE_TVarSet_0_25, STATE_VARIABLE_TVarSet_26, STATE_VARIABLE_ProofMap_0_27, STATE_VARIABLE_ProofMap_28, STATE_VARIABLE_ConstraintMap_0_29, STATE_VARIABLE_ConstraintMap_30, STATE_VARIABLE_Constraints_0_31, STATE_VARIABLE_Constraints_32, Var_38, &Var_22);
  }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_class__compare_hlds_constraints_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word ClassTable_16,
  MR_Word InstanceTable_17,
  MR_Word ExternalTypeParams_18,
  MR_Word STATE_VARIABLE_Bindings_0_29,
  MR_Word * STATE_VARIABLE_Bindings_30,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_ProofMap_0_33,
  MR_Word * STATE_VARIABLE_ProofMap_34,
  MR_Word STATE_VARIABLE_ConstraintMap_0_35,
  MR_Word * STATE_VARIABLE_ConstraintMap_36,
  MR_Word STATE_VARIABLE_Constraints_0_37,
  MR_Word * STATE_VARIABLE_Constraints_38,
  MR_Word STATE_VARIABLE_Seen_0_39,
  MR_Word * STATE_VARIABLE_Seen_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word AppliedImprovementRule_25;
    MR_Word EliminatedAssumed_26;
    MR_Word AppliedInstanceRule_27;
    MR_Word AppliedClassRule_28;
    MR_Word STATE_VARIABLE_Constraints_41_41;
    MR_Word STATE_VARIABLE_TVarSet_42_42;
    MR_Word STATE_VARIABLE_Bindings_43_43;
    MR_Word STATE_VARIABLE_Constraints_44_44;
    MR_Word STATE_VARIABLE_ConstraintMap_45_45;
    MR_Word STATE_VARIABLE_Constraints_46_46;
    MR_Word STATE_VARIABLE_TVarSet_47_47;
    MR_Word STATE_VARIABLE_ProofMap_48_48;
    MR_Word STATE_VARIABLE_ConstraintMap_49_49;
    MR_Word STATE_VARIABLE_Seen_50_50;
    MR_Word STATE_VARIABLE_Constraints_51_51;
    MR_Word STATE_VARIABLE_ProofMap_52_52;
    MR_Word STATE_VARIABLE_ConstraintMap_53_53;
    MR_Word STATE_VARIABLE_Constraints_54_54;
    MR_Word Unproven0_69;
    MR_Word Assumed_70;
    MR_Word Redundant_71;
    MR_Word Ancestors_72;
    MR_Word Unproven_73;

    // setup for model_det tailcalls optimized into a loop
    check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(STATE_VARIABLE_Bindings_0_29, STATE_VARIABLE_Constraints_0_37, &STATE_VARIABLE_Constraints_41_41);
    check_hlds__typeclasses__apply_improvement_rules_9_p_0(ClassTable_16, InstanceTable_17, ExternalTypeParams_18, STATE_VARIABLE_Constraints_41_41, STATE_VARIABLE_TVarSet_0_31, &STATE_VARIABLE_TVarSet_42_42, STATE_VARIABLE_Bindings_0_29, &STATE_VARIABLE_Bindings_43_43, &AppliedImprovementRule_25);
    switch (AppliedImprovementRule_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Constraints_44_44 = STATE_VARIABLE_Constraints_41_41;
        break;
      case (MR_Integer) 1:
        check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(STATE_VARIABLE_Bindings_43_43, STATE_VARIABLE_Constraints_41_41, &STATE_VARIABLE_Constraints_44_44);
        break;
    }
    Unproven0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_44_44, (MR_Integer) 0)));
    Assumed_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_44_44, (MR_Integer) 1)));
    Redundant_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_44_44, (MR_Integer) 2)));
    Ancestors_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_44_44, (MR_Integer) 3)));
    check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(Assumed_70, STATE_VARIABLE_ConstraintMap_0_35, &STATE_VARIABLE_ConstraintMap_45_45, Unproven0_69, &Unproven_73, &EliminatedAssumed_26);
    {
      STATE_VARIABLE_Constraints_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_46_46, 0) = ((MR_Box) (Unproven_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_46_46, 1) = ((MR_Box) (Assumed_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_46_46, 2) = ((MR_Box) (Redundant_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_46_46, 3) = ((MR_Box) (Ancestors_72));
    }
    check_hlds__typeclasses__apply_instance_rules_13_p_0(ClassTable_16, InstanceTable_17, STATE_VARIABLE_TVarSet_42_42, &STATE_VARIABLE_TVarSet_47_47, STATE_VARIABLE_ProofMap_0_33, &STATE_VARIABLE_ProofMap_48_48, STATE_VARIABLE_ConstraintMap_45_45, &STATE_VARIABLE_ConstraintMap_49_49, STATE_VARIABLE_Seen_0_39, &STATE_VARIABLE_Seen_50_50, STATE_VARIABLE_Constraints_46_46, &STATE_VARIABLE_Constraints_51_51, &AppliedInstanceRule_27);
    check_hlds__typeclasses__apply_class_rules_7_p_0(STATE_VARIABLE_ProofMap_48_48, &STATE_VARIABLE_ProofMap_52_52, STATE_VARIABLE_ConstraintMap_49_49, &STATE_VARIABLE_ConstraintMap_53_53, STATE_VARIABLE_Constraints_51_51, &STATE_VARIABLE_Constraints_54_54, &AppliedClassRule_28);
    succeeded = (AppliedImprovementRule_25 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (EliminatedAssumed_26 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (AppliedInstanceRule_27 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (AppliedClassRule_28 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Unproven0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
      MR_Word Unproven1_80;
      MR_Word Unproven_81;
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_87;

      mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[1], Unproven0_79, &Unproven1_80);
      if ((Unproven1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Unproven_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word C_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unproven1_80, (MR_Integer) 0)));
        MR_Word Cs_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unproven1_80, (MR_Integer) 1)));

        check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(C_95, Cs_96, &Unproven_81);
      }
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Constraints_38 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_81));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_90));
      }
      *STATE_VARIABLE_Seen_40 = STATE_VARIABLE_Seen_50_50;
      *STATE_VARIABLE_ConstraintMap_36 = STATE_VARIABLE_ConstraintMap_53_53;
      *STATE_VARIABLE_ProofMap_34 = STATE_VARIABLE_ProofMap_52_52;
      *STATE_VARIABLE_TVarSet_32 = STATE_VARIABLE_TVarSet_47_47;
      *STATE_VARIABLE_Bindings_30 = STATE_VARIABLE_Bindings_43_43;
    }
    else
    {
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_29 = STATE_VARIABLE_Bindings_43_43;
      MR_Word next_value_of_STATE_VARIABLE_TVarSet_0_31 = STATE_VARIABLE_TVarSet_47_47;
      MR_Word next_value_of_STATE_VARIABLE_ProofMap_0_33 = STATE_VARIABLE_ProofMap_52_52;
      MR_Word next_value_of_STATE_VARIABLE_ConstraintMap_0_35 = STATE_VARIABLE_ConstraintMap_53_53;
      MR_Word next_value_of_STATE_VARIABLE_Constraints_0_37 = STATE_VARIABLE_Constraints_54_54;
      MR_Word next_value_of_STATE_VARIABLE_Seen_0_39 = STATE_VARIABLE_Seen_50_50;

      // direct tailcall eliminated
      STATE_VARIABLE_Bindings_0_29 = next_value_of_STATE_VARIABLE_Bindings_0_29;
      STATE_VARIABLE_TVarSet_0_31 = next_value_of_STATE_VARIABLE_TVarSet_0_31;
      STATE_VARIABLE_ProofMap_0_33 = next_value_of_STATE_VARIABLE_ProofMap_0_33;
      STATE_VARIABLE_ConstraintMap_0_35 = next_value_of_STATE_VARIABLE_ConstraintMap_0_35;
      STATE_VARIABLE_Constraints_0_37 = next_value_of_STATE_VARIABLE_Constraints_0_37;
      STATE_VARIABLE_Seen_0_39 = next_value_of_STATE_VARIABLE_Seen_0_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
  MR_Word STATE_VARIABLE_ProofMap_0_17,
  MR_Word * STATE_VARIABLE_ProofMap_18,
  MR_Word STATE_VARIABLE_ConstraintMap_0_19,
  MR_Word * STATE_VARIABLE_ConstraintMap_20,
  MR_Word STATE_VARIABLE_Constraints_0_21,
  MR_Word * STATE_VARIABLE_Constraints_22,
  MR_Word * Changed_11)
{
  {
    MR_Word Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
    MR_Word Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
    MR_Word Unproven_16;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_26;

    check_hlds__typeclasses__apply_class_rules_2_8_p_0(Ancestors_15, STATE_VARIABLE_ProofMap_0_17, STATE_VARIABLE_ProofMap_18, STATE_VARIABLE_ConstraintMap_0_19, STATE_VARIABLE_ConstraintMap_20, Unproven0_12, &Unproven_16, Changed_11);
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
  MR_Word Ancestors_1,
  MR_Word STATE_VARIABLE_ProofMap_0_2,
  MR_Word * STATE_VARIABLE_ProofMap_3,
  MR_Word STATE_VARIABLE_ConstraintMap_0_4,
  MR_Word * STATE_VARIABLE_ConstraintMap_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = (MR_Integer) 0;
      *STATE_VARIABLE_ConstraintMap_5 = STATE_VARIABLE_ConstraintMap_0_4;
      *STATE_VARIABLE_ProofMap_3 = STATE_VARIABLE_ProofMap_0_2;
    }
    else
    {
      MR_Word Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
      MR_Word Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
      MR_Word ProgConstraint0_23;
      MR_Word Descendants_24;
      MR_Box conv0_Descendants_24;

      hlds__hlds_class__retrieve_prog_constraint_2_p_0(Constraint0_19, &ProgConstraint0_23);
      succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[2], Ancestors_1, ((MR_Box) (ProgConstraint0_23)), &conv0_Descendants_24);
      if (succeeded)
      {
        Descendants_24 = ((MR_Word) conv0_Descendants_24);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_ConstraintMap_31_31;
        MR_Word STATE_VARIABLE_ProofMap_32_32;
        MR_Word Var_25;

        hlds__hlds_class__update_constraint_map_3_p_0(Constraint0_19, STATE_VARIABLE_ConstraintMap_0_4, &STATE_VARIABLE_ConstraintMap_31_31);
        check_hlds__typeclasses__add_superclass_proofs_4_p_0(ProgConstraint0_23, Descendants_24, STATE_VARIABLE_ProofMap_0_2, &STATE_VARIABLE_ProofMap_32_32);
        check_hlds__typeclasses__apply_class_rules_2_8_p_0(Ancestors_1, STATE_VARIABLE_ProofMap_32_32, STATE_VARIABLE_ProofMap_3, STATE_VARIABLE_ConstraintMap_31_31, STATE_VARIABLE_ConstraintMap_5, Constraints0_20, HeadVar__7_7, &Var_25);
        *HeadVar__8_8 = (MR_Integer) 1;
      }
      else
      {
        MR_Word TailConstraints_26;

        check_hlds__typeclasses__apply_class_rules_2_8_p_0(Ancestors_1, STATE_VARIABLE_ProofMap_0_2, STATE_VARIABLE_ProofMap_3, STATE_VARIABLE_ConstraintMap_0_4, STATE_VARIABLE_ConstraintMap_5, Constraints0_20, &TailConstraints_26, HeadVar__8_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint0_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailConstraints_26));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
  MR_Word Constraint_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProofMap_0_3,
  MR_Word * STATE_VARIABLE_ProofMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ProofMap_4 = STATE_VARIABLE_ProofMap_0_3;
    else
    {
      MR_Word Descendant_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Descendants_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_ProofMap_16_16;
      MR_Word next_value_of_Constraint_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProofMap_0_3;

      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Descendant_10));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, ((MR_Box) (Constraint_1)), ((MR_Box) (Var_15)), STATE_VARIABLE_ProofMap_0_3, &STATE_VARIABLE_ProofMap_16_16);
      // direct tailcall eliminated
      next_value_of_Constraint_1 = Descendant_10;
      next_value_of_HeadVar__2_2 = Descendants_11;
      next_value_of_STATE_VARIABLE_ProofMap_0_3 = STATE_VARIABLE_ProofMap_16_16;
      Constraint_1 = next_value_of_Constraint_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProofMap_0_3 = next_value_of_STATE_VARIABLE_ProofMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
  MR_Word ClassTable_14,
  MR_Word InstanceTable_15,
  MR_Word STATE_VARIABLE_TVarSet_0_28,
  MR_Word * STATE_VARIABLE_TVarSet_29,
  MR_Word STATE_VARIABLE_ProofMap_0_30,
  MR_Word * STATE_VARIABLE_ProofMap_31,
  MR_Word STATE_VARIABLE_ConstraintMap_0_32,
  MR_Word * STATE_VARIABLE_ConstraintMap_33,
  MR_Word STATE_VARIABLE_Seen_0_34,
  MR_Word * STATE_VARIABLE_Seen_35,
  MR_Word STATE_VARIABLE_Constraints_0_36,
  MR_Word * STATE_VARIABLE_Constraints_37,
  MR_Word * Changed_21)
{
  {
    MR_Word Unproven0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_36, (MR_Integer) 0)));
    MR_Word Assumed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_36, (MR_Integer) 1)));
    MR_Word Redundant0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_36, (MR_Integer) 2)));
    MR_Word Ancestors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_36, (MR_Integer) 3)));
    MR_Word Redundant_26;
    MR_Word Unproven_27;

    check_hlds__typeclasses__apply_instance_rules_2_15_p_0(ClassTable_14, InstanceTable_15, STATE_VARIABLE_TVarSet_0_28, STATE_VARIABLE_TVarSet_29, STATE_VARIABLE_ProofMap_0_30, STATE_VARIABLE_ProofMap_31, STATE_VARIABLE_ConstraintMap_0_32, STATE_VARIABLE_ConstraintMap_33, Redundant0_24, &Redundant_26, STATE_VARIABLE_Seen_0_34, STATE_VARIABLE_Seen_35, Unproven0_22, &Unproven_27, Changed_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_37 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_25));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typeclasses__matches_no_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
  MR_Word ClassTable_1,
  MR_Word InstanceTable_2,
  MR_Word STATE_VARIABLE_TVarSet_0_3,
  MR_Word * STATE_VARIABLE_TVarSet_4,
  MR_Word STATE_VARIABLE_ProofMap_0_5,
  MR_Word * STATE_VARIABLE_ProofMap_6,
  MR_Word STATE_VARIABLE_ConstraintMap_0_7,
  MR_Word * STATE_VARIABLE_ConstraintMap_8,
  MR_Word STATE_VARIABLE_Redundant_0_9,
  MR_Word * STATE_VARIABLE_Redundant_10,
  MR_Word STATE_VARIABLE_Seen_0_11,
  MR_Word * STATE_VARIABLE_Seen_12,
  MR_Word HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__15_15 = (MR_Integer) 0;
      *STATE_VARIABLE_Seen_12 = STATE_VARIABLE_Seen_0_11;
      *STATE_VARIABLE_Redundant_10 = STATE_VARIABLE_Redundant_0_9;
      *STATE_VARIABLE_ConstraintMap_8 = STATE_VARIABLE_ConstraintMap_0_7;
      *STATE_VARIABLE_ProofMap_6 = STATE_VARIABLE_ProofMap_0_5;
      *STATE_VARIABLE_TVarSet_4 = STATE_VARIABLE_TVarSet_0_3;
    }
    else
    {
      MR_Word C_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__13_13, (MR_Integer) 0)));
      MR_Word Cs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__13_13, (MR_Integer) 1)));
      MR_Word ClassName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), C_40, (MR_Integer) 1)));
      MR_Word ArgTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), C_40, (MR_Integer) 2)));
      MR_Integer Arity_47;
      MR_Word Instances_48;
      MR_Word NewConstraints_51;
      MR_Word Changed1_52;
      MR_Word TailConstraints_53;
      MR_Word Changed2_54;
      MR_Word Var_65;
      MR_Word STATE_VARIABLE_ConstraintMap_68_68;
      MR_Word STATE_VARIABLE_Redundant_70_70;
      MR_Word STATE_VARIABLE_Seen_71_71;
      MR_Word STATE_VARIABLE_TVarSet_73_73;
      MR_Word STATE_VARIABLE_ProofMap_74_74;
      MR_Word _Ids_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), C_40, (MR_Integer) 0)));
      MR_Box conv0_Instances_48;
      MR_Word NewConstraints0_50;
      MR_Word STATE_VARIABLE_TVarSet_66_66;
      MR_Word STATE_VARIABLE_ProofMap_67_67;

      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_46, &Arity_47);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (ClassName_45));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Arity_47));
      }
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], InstanceTable_2, ((MR_Box) (Var_65)), &conv0_Instances_48);
      Instances_48 = ((MR_Word) conv0_Instances_48);
      succeeded = check_hlds__typeclasses__find_matching_instance_rule_7_p_0(Instances_48, C_40, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_66_66, STATE_VARIABLE_ProofMap_0_5, &STATE_VARIABLE_ProofMap_67_67, &NewConstraints0_50);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_84_84;
        MR_Word Var_69;

        STATE_VARIABLE_ProofMap_74_74 = STATE_VARIABLE_ProofMap_67_67;
        STATE_VARIABLE_TVarSet_73_73 = STATE_VARIABLE_TVarSet_66_66;
        hlds__hlds_class__update_constraint_map_3_p_0(C_40, STATE_VARIABLE_ConstraintMap_0_7, &STATE_VARIABLE_ConstraintMap_68_68);
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1));
          MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (STATE_VARIABLE_Seen_0_11));
        }
        TypeCtorInfo_84_84 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0;
        mercury__list__filter_3_p_0(TypeCtorInfo_84_84, Var_69, NewConstraints0_50, &NewConstraints_51);
        hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_1, STATE_VARIABLE_TVarSet_66_66, NewConstraints_51, STATE_VARIABLE_Redundant_0_9, &STATE_VARIABLE_Redundant_70_70);
        STATE_VARIABLE_Seen_71_71 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_84_84, NewConstraints_51, STATE_VARIABLE_Seen_0_11);
        Changed1_52 = (MR_Integer) 1;
      }
      else
      {
        {
          NewConstraints_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewConstraints_51, 0) = ((MR_Box) (C_40));
          MR_hl_field(MR_mktag(1), NewConstraints_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        STATE_VARIABLE_TVarSet_73_73 = STATE_VARIABLE_TVarSet_0_3;
        Changed1_52 = (MR_Integer) 0;
        STATE_VARIABLE_Seen_71_71 = STATE_VARIABLE_Seen_0_11;
        STATE_VARIABLE_Redundant_70_70 = STATE_VARIABLE_Redundant_0_9;
        STATE_VARIABLE_ConstraintMap_68_68 = STATE_VARIABLE_ConstraintMap_0_7;
        STATE_VARIABLE_ProofMap_74_74 = STATE_VARIABLE_ProofMap_0_5;
      }
      check_hlds__typeclasses__apply_instance_rules_2_15_p_0(ClassTable_1, InstanceTable_2, STATE_VARIABLE_TVarSet_73_73, STATE_VARIABLE_TVarSet_4, STATE_VARIABLE_ProofMap_74_74, STATE_VARIABLE_ProofMap_6, STATE_VARIABLE_ConstraintMap_68_68, STATE_VARIABLE_ConstraintMap_8, STATE_VARIABLE_Redundant_70_70, STATE_VARIABLE_Redundant_10, STATE_VARIABLE_Seen_71_71, STATE_VARIABLE_Seen_12, Cs_41, &TailConstraints_53, &Changed2_54);
      mercury__bool__or_3_p_0(Changed1_52, Changed2_54, HeadVar__15_15);
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, NewConstraints_51, TailConstraints_53, HeadVar__14_14);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
  MR_Word Instances_8,
  MR_Word Constraint_9,
  MR_Word STATE_VARIABLE_TVarSet_0_13,
  MR_Word * STATE_VARIABLE_TVarSet_14,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16,
  MR_Word * NewConstraints_12)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(Instances_8, (MR_Integer) 1, Constraint_9, STATE_VARIABLE_TVarSet_0_13, STATE_VARIABLE_TVarSet_14, STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16, NewConstraints_12);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer InstanceNum0_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_ProofMap_0_33,
  MR_Word * STATE_VARIABLE_ProofMap_34,
  MR_Word * NewConstraints_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Instance_9;
    MR_Word Instances_10;
    MR_Word ArgTypes_18;
    MR_Word ProgConstraints0_19;
    MR_Word InstanceTypes0_20;
    MR_Word InstanceTVarSet_21;
    MR_Word NewTVarSet_22;
    MR_Word Renaming_23;
    MR_Word InstanceTypes_24;
    MR_Word _Ids_16;
    MR_Word _ClassName_17;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Subst_25;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Instance_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      _Ids_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 0)));
      _ClassName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 1)));
      ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 2)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 0)));
      InstanceTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 1)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 2)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 3)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 4)));
      ProgConstraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 5)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 6)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 7)));
      InstanceTVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 8)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_9, (MR_Integer) 9)));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_31, InstanceTVarSet_21, &NewTVarSet_22, &Renaming_23);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_23, InstanceTypes0_20, &InstanceTypes_24);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(InstanceTypes_24, ArgTypes_18, &Subst_25);
      if (succeeded)
      {
        MR_Word ProgConstraints1_26;
        MR_Word ProgConstraints_27;
        MR_Word NewProof_28;
        MR_Word ProgConstraint_29;

        *STATE_VARIABLE_TVarSet_32 = NewTVarSet_22;
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_23, ProgConstraints0_19, &ProgConstraints1_26);
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_25, ProgConstraints1_26, &ProgConstraints_27);
        hlds__hlds_class__init_hlds_constraint_list_2_p_0(ProgConstraints_27, NewConstraints_15);
        {
          NewProof_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewProof_28, 0) = ((MR_Box) (InstanceNum0_11));
        }
        hlds__hlds_class__retrieve_prog_constraint_2_p_0(Constraint_12, &ProgConstraint_29);
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, ((MR_Box) (ProgConstraint_29)), ((MR_Box) (NewProof_28)), STATE_VARIABLE_ProofMap_0_33, STATE_VARIABLE_ProofMap_34);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer InstanceNum_30 = (InstanceNum0_11 + (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = Instances_10;
        MR_Integer next_value_of_InstanceNum0_11 = InstanceNum_30;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        InstanceNum0_11 = next_value_of_InstanceNum0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24 = ((MR_Word) (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24);
    check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = hlds__hlds_class__matching_constraints_2_p_0((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24, (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13);
    if ((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, &(env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24, (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
  MR_Word AssumedCs_1,
  MR_Word STATE_VARIABLE_ConstraintMap_0_2,
  MR_Word * STATE_VARIABLE_ConstraintMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s env;

    (env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1 = AssumedCs_1;
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ConstraintMap_3 = STATE_VARIABLE_ConstraintMap_0_2;
    }
    else
    {
      MR_Word Cs_14;
      MR_Word NewCs0_17;
      MR_Word Changed0_18;
      MR_Word STATE_VARIABLE_ConstraintMap_22_22;

      (env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      Cs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0((env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, STATE_VARIABLE_ConstraintMap_0_2, &STATE_VARIABLE_ConstraintMap_22_22, Cs_14, &NewCs0_17, &Changed0_18);
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(&env);
      if ((env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
      {
        hlds__hlds_class__update_constraint_map_3_p_0((env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13, STATE_VARIABLE_ConstraintMap_22_22, STATE_VARIABLE_ConstraintMap_3);
        *HeadVar__5_5 = NewCs0_17;
        *HeadVar__6_6 = (MR_Integer) 1;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewCs0_17));
        }
        *HeadVar__6_6 = Changed0_18;
        *STATE_VARIABLE_ConstraintMap_3 = STATE_VARIABLE_ConstraintMap_22_22;
      }
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_TVarSet_26;
    MR_Word conv5_STATE_VARIABLE_Bindings_28;
    MR_Word conv4_STATE_VARIABLE_Changed_30;

    check_hlds__typeclasses__do_instance_improvement_2_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_TVarSet_26, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_Bindings_28, ((MR_Word) wrapper_arg_6), &conv4_STATE_VARIABLE_Changed_30);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_TVarSet_26));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Bindings_28));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Changed_30));
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Bindings_20;
    MR_Word conv0_STATE_VARIABLE_Changed_22;

    check_hlds__typeclasses__do_class_improvement_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Bindings_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Changed_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_22));
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
  MR_Word ClassTable_10,
  MR_Word InstanceTable_11,
  MR_Word ExternalTypeParams_12,
  MR_Word Constraints_13,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_Bindings_0_21,
  MR_Word * STATE_VARIABLE_Bindings_22,
  MR_Word * Changed_16)
{
  {
    MR_Word TypeCtorInfo_22_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word TypeCtorInfo_30_70;
    MR_Word Changed1_17;
    MR_Word Changed2_18;
    MR_Word STATE_VARIABLE_Bindings_23_23;
    MR_Word Redundant_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 2)));
    MR_Word ClassIds_34;
    MR_Word Var_35;
    MR_Word RedundantConstraints_61;
    MR_Word ClassIds_62;
    MR_Word Var_63;
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 0)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 3)));
    MR_Box conv3_STATE_VARIABLE_Bindings_23_23;
    MR_Box conv2_Changed1_17;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Box conv9_STATE_VARIABLE_TVarSet_20;
    MR_Box conv8_STATE_VARIABLE_Bindings_22;
    MR_Box conv7_Changed2_18;

    mercury__map__keys_2_p_0(TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], Redundant_33, &ClassIds_34);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ClassTable_10));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ExternalTypeParams_12));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (Redundant_33));
    }
    mercury__list__foldl2_6_p_0(TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, Var_35, ClassIds_34, ((MR_Box) (STATE_VARIABLE_Bindings_0_21)), &conv3_STATE_VARIABLE_Bindings_23_23, ((MR_Box) ((MR_Integer) 0)), &conv2_Changed1_17);
    STATE_VARIABLE_Bindings_23_23 = ((MR_Word) conv3_STATE_VARIABLE_Bindings_23_23);
    Changed1_17 = ((MR_Word) conv2_Changed1_17);
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 0)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 1)));
    RedundantConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 2)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_13, (MR_Integer) 3)));
    TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    mercury__map__keys_2_p_0(TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], RedundantConstraints_61, &ClassIds_62);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ClassTable_10));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (InstanceTable_11));
      MR_hl_field(MR_mktag(0), Var_63, 5) = ((MR_Box) (ExternalTypeParams_12));
      MR_hl_field(MR_mktag(0), Var_63, 6) = ((MR_Box) (RedundantConstraints_61));
    }
    mercury__list__foldl3_8_p_0(TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, Var_63, ClassIds_62, ((MR_Box) (STATE_VARIABLE_TVarSet_0_19)), &conv9_STATE_VARIABLE_TVarSet_20, ((MR_Box) (STATE_VARIABLE_Bindings_23_23)), &conv8_STATE_VARIABLE_Bindings_22, ((MR_Box) ((MR_Integer) 0)), &conv7_Changed2_18);
    *STATE_VARIABLE_TVarSet_20 = ((MR_Word) conv9_STATE_VARIABLE_TVarSet_20);
    *STATE_VARIABLE_Bindings_22 = ((MR_Word) conv8_STATE_VARIABLE_Bindings_22);
    Changed2_18 = ((MR_Word) conv7_Changed2_18);
    *Changed_16 = mercury__bool__or_2_f_0(Changed1_17, Changed2_18);
  }
}

static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
  MR_Word C0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (C0_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word C1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word C_10;
      MR_Word TypeCtorInfo_13_21;
      MR_Word TypeInfo_17_25;
      MR_Word IdsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), C0_1, (MR_Integer) 0)));
      MR_Word ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), C0_1, (MR_Integer) 1)));
      MR_Word ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), C0_1, (MR_Integer) 2)));
      MR_Word IdsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), C1_7, (MR_Integer) 0)));
      MR_Word Ids0_19;
      MR_Word Ids_20;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), C1_7, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), C1_7, (MR_Integer) 2)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_16, Var_22);
      if (succeeded)
      {
        TypeInfo_17_25 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_25, ((MR_Box) (ArgTypes_17)), ((MR_Box) (Var_23)));
        if (succeeded)
        {
          TypeCtorInfo_13_21 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0;
          mercury__list__append_3_p_1(TypeCtorInfo_13_21, IdsA_15, IdsB_18, &Ids0_19);
          mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_13_21, Ids0_19, &Ids_20);
          {
            C_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), C_10, 0) = ((MR_Box) (Ids_20));
            MR_hl_field(MR_mktag(0), C_10, 1) = ((MR_Box) (ClassName_16));
            MR_hl_field(MR_mktag(0), C_10, 2) = ((MR_Box) (ArgTypes_17));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_C0_1 = C_10;
        MR_Word next_value_of_HeadVar__2_2 = Cs_8;

        // direct tailcall eliminated
        C0_1 = next_value_of_C0_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Constraints0_11;

        check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(C1_7, Cs_8, &Constraints0_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (C0_1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constraints0_11));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_37;

    check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_LambdaHeadVar__2_37);
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_37));
  }
}

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeAssignSet_31;
    MR_Word conv0_STATE_VARIABLE_UnsatTypeAssignSet_33;

    check_hlds__typeclasses__reduce_type_assign_context_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_TypeAssignSet_31, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_UnsatTypeAssignSet_33);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeAssignSet_31));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_UnsatTypeAssignSet_33));
  }
}

void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0(
  MR_Word Context_6,
  MR_Word TypeAssignSet0_7,
  MR_Word * TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_60_60;
    MR_Word TypeInfo_61_61;
    MR_Word ClauseContext_10;
    MR_Word ModuleInfo_11;
    MR_Word ClassTable_14;
    MR_Word InstanceTable_15;
    MR_Word TypeAssignSet1_16;
    MR_Word UnsatTypeAssignSet_17;
    MR_Word Var_32;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Box conv3_TypeAssignSet1_16;
    MR_Box conv2_UnsatTypeAssignSet_17;
    MR_Word Var_18;
    MR_Word Var_19;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_27, &ClauseContext_10);
    ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 0)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 1)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 2)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 3)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 4)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 5)));
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_11, &ClassTable_14);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_11, &InstanceTable_15);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ClassTable_14));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (InstanceTable_15));
    }
    TypeCtorInfo_60_60 = (MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0;
    TypeInfo_61_61 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[0];
    mercury__list__foldl2_6_p_0(TypeCtorInfo_60_60, TypeInfo_61_61, TypeInfo_61_61, Var_32, TypeAssignSet0_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_TypeAssignSet1_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_UnsatTypeAssignSet_17);
    TypeAssignSet1_16 = ((MR_Word) conv3_TypeAssignSet1_16);
    UnsatTypeAssignSet_17 = ((MR_Word) conv2_UnsatTypeAssignSet_17);
    succeeded = ((MR_tag((MR_Word) TypeAssignSet0_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeAssignSet0_7, (MR_Integer) 0)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeAssignSet0_7, (MR_Integer) 1)));
      succeeded = (TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Spec_20;
      MR_Word DeleteConstraints_21;

      Spec_20 = check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(ClauseContext_10, Context_6, UnsatTypeAssignSet_17);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
      {
        DeleteConstraints_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DeleteConstraints_21, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DeleteConstraints_21, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_2));
        MR_hl_field(MR_mktag(0), DeleteConstraints_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), DeleteConstraints_21, 3) = ((MR_Box) (ClassTable_14));
      }
      mercury__list__map_3_p_0(TypeCtorInfo_60_60, TypeCtorInfo_60_60, DeleteConstraints_21, TypeAssignSet0_7, TypeAssignSet_8);
    }
    else
    {
      *TypeAssignSet_8 = TypeAssignSet1_16;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    }
  }
}

void mercury__check_hlds__typeclasses__init(void)
{
}

void mercury__check_hlds__typeclasses__init_type_tables(void)
{
}

void mercury__check_hlds__typeclasses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typeclasses__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typeclasses.
