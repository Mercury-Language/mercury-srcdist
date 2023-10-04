/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version rotd-2023-10-04
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_debug.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3;
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4;
  MR_bool check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
  jmp_buf check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6;
  MR_Box check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6;
};

struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExistQTVars_2;
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__cord__pti_cord_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__131__1_3_p_0(
  MR_Word ClassTable_14,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38);

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
  MR_Word STATE_VARIABLE_TypeAssignCord_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignCord_31,
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
  MR_Word ExistQTVars_2);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word ClassTable_16,
  MR_Word InstanceTable_17,
  MR_Word ExistQTVars_18,
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
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurInstanceNum_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ProofMap_0_32,
  MR_Word * STATE_VARIABLE_ProofMap_33,
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


static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_6[3][11];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][14];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][13];




static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typeclasses_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_3[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__cord__pti_cord_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__cord__pti_cord_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_6[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
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

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__typeclasses__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__cord__pti_cord_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__131__1_3_p_0(
  MR_Word ClassTable_14,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38)
{
  MR_Word Constraints0_25;
  MR_Word TVarSet_26;
  MR_Word Constraints_27;
  MR_Word Var_40;

  check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(LambdaHeadVar__1_37, &Constraints0_25);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(LambdaHeadVar__1_37, &TVarSet_26);
  Var_40 = ((MR_Word) ((MR_hl_field(0, Constraints0_25, (MR_Integer) 1))));
  hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_14, TVarSet_26, (MR_Word) ((MR_Unsigned) 0U), Var_40, &Constraints_27);
  check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(Constraints_27, LambdaHeadVar__1_37, LambdaHeadVar__2_38);
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6 = ((MR_Word) ((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6));
  check_hlds__typeclasses__matches_no_constraint_2_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = hlds__hlds_class__matching_constraints_2_p_0((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6, (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4);
  if ((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded)
    check_hlds__typeclasses__matches_no_constraint_2_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), &(env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6, (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3, check_hlds__typeclasses__matches_no_constraint_2_p_0_3, env_ptr);
      (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
  MR_Word Seen_3,
  MR_Word Constraint_4)
{
  struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s env;

  (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3 = Seen_3;
  (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4 = Constraint_4;
  check_hlds__typeclasses__matches_no_constraint_2_p_0_4(&env);
  (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = !((env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded);
  return (env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
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
  MR_bool succeeded;
  MR_Word ConstraintTypes_17 = ((MR_Word) ((MR_hl_field(0, Constraint_9, (MR_Integer) 2))));
  MR_Word Domain_18 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 0))));
  MR_Word Range_19 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_Bindings_27_27;
  MR_Word TypeCtorInfo_16_42;
  MR_Word Subst_20;
  MR_Word InstanceTypes_21;
  MR_Word RTypesA_28;
  MR_Word RTypesB_29;
  MR_Word RTypesBVars_30;
  MR_Word Subst0_31;
  MR_Word RTypesA_40;
  MR_Word RTypesB_41;
  MR_Word TypeCtorInfo_13_38;
  MR_Word TypeInfo_14_39;
  MR_Word RTypesA_34;
  MR_Word RTypesB_35;
  MR_Word RTypesBVars_36;
  MR_Word Subst0_37;
  MR_Word Var_22;

  RTypesA_28 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_18, InstanceTypes0_10);
  RTypesB_29 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_18, ConstraintTypes_17);
  parse_tree__prog_type__type_vars_in_types_2_p_0(RTypesB_29, &RTypesBVars_30);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__typeclasses_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst0_31);
  succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_28, RTypesB_29, RTypesBVars_30, Subst0_31, &Subst_20);
  if (succeeded)
  {
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_20, InstanceTypes0_10, &InstanceTypes_21);
    TypeCtorInfo_13_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    RTypesA_34 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_38, Range_19, InstanceTypes_21);
    RTypesB_35 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_13_38, Range_19, ConstraintTypes_17);
    parse_tree__prog_type__type_vars_in_types_2_p_0(RTypesB_35, &RTypesBVars_36);
    TypeInfo_14_39 = (MR_Word) (&check_hlds__typeclasses_scalar_common_1[4]);
    mercury__map__init_1_p_0(TypeInfo_14_39, TypeCtorInfo_13_38, &Subst0_37);
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_34, RTypesB_35, RTypesBVars_36, Subst0_37, &Var_22);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_16_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      RTypesA_40 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_16_42, Range_19, InstanceTypes_21);
      RTypesB_41 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_16_42, Range_19, ConstraintTypes_17);
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_40, RTypesB_41, ExternalTypeParams_11, STATE_VARIABLE_Bindings_0_23, &STATE_VARIABLE_Bindings_27_27);
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

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Bindings_24;
  MR_Word conv0_STATE_VARIABLE_Changed_26;

  check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Bindings_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Changed_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_26));
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
  MR_Word Var_19;
  MR_Box conv3_STATE_VARIABLE_Bindings_16;
  MR_Box conv2_STATE_VARIABLE_Changed_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[2]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Constraint_12));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (InstanceTypes_10));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (ExternalTypeParams_11));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_19, FunDeps_9, ((MR_Box) (STATE_VARIABLE_Bindings_0_15)), &conv3_STATE_VARIABLE_Bindings_16, ((MR_Box) (STATE_VARIABLE_Changed_0_17)), &conv2_STATE_VARIABLE_Changed_18);
  *STATE_VARIABLE_Bindings_16 = ((MR_Word) (conv3_STATE_VARIABLE_Bindings_16));
  *STATE_VARIABLE_Changed_18 = ((MR_Word) (conv2_STATE_VARIABLE_Changed_18));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Bindings_16;
  MR_Word conv0_STATE_VARIABLE_Changed_18;

  check_hlds__typeclasses__do_instance_improvement_4_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Bindings_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Changed_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_18));
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
  MR_Word InstanceTVarSet_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_14, (MR_Integer) 2))));
  MR_Word InstanceTypes0_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_14, (MR_Integer) 4))));
  MR_Word NewTVarSet_20;
  MR_Word Renaming_21;
  MR_Word InstanceTypes_22;
  MR_Word Changed0_23;
  MR_Word Var_30;
  MR_Box conv3_STATE_VARIABLE_Bindings_27;
  MR_Box conv2_Changed0_23;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_24, InstanceTVarSet_18, &NewTVarSet_20, &Renaming_21);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_21, InstanceTypes0_19, &InstanceTypes_22);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[1]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (FunDeps_12));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (InstanceTypes_22));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (ExternalTypeParams_13));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_30, Constraints_11, ((MR_Box) (STATE_VARIABLE_Bindings_0_26)), &conv3_STATE_VARIABLE_Bindings_27, ((MR_Box) ((MR_Integer) 0)), &conv2_Changed0_23);
  *STATE_VARIABLE_Bindings_27 = ((MR_Word) (conv3_STATE_VARIABLE_Bindings_27));
  Changed0_23 = ((MR_Word) (conv2_Changed0_23));
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
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TVarSet_25;
  MR_Word conv4_STATE_VARIABLE_Bindings_27;
  MR_Word conv3_STATE_VARIABLE_Changed_29;

  check_hlds__typeclasses__do_instance_improvement_3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TVarSet_25, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Bindings_27, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_Changed_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TVarSet_25));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Bindings_27));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_Changed_29));
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
  MR_Word ClassDefn_20;
  MR_Word FunDeps_21;
  MR_Word InstanceDefns_22;
  MR_Word ConstraintSet_23;
  MR_Word ConstraintList_24;
  MR_Word Var_31;
  MR_Box conv0_ClassDefn_20;
  MR_Box conv1_InstanceDefns_22;
  MR_Box conv2_ConstraintSet_23;
  MR_Box conv8_STATE_VARIABLE_TVarSet_26;
  MR_Box conv7_STATE_VARIABLE_Bindings_28;
  MR_Box conv6_STATE_VARIABLE_Changed_30;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_12, ((MR_Box) (ClassId_16)), &conv0_ClassDefn_20);
  ClassDefn_20 = ((MR_Word) (conv0_ClassDefn_20));
  FunDeps_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_20, (MR_Integer) 5))));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[6]), InstanceTable_13, ((MR_Box) (ClassId_16)), &conv1_InstanceDefns_22);
  InstanceDefns_22 = ((MR_Word) (conv1_InstanceDefns_22));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[2]), RedundantConstraints_15, ((MR_Box) (ClassId_16)), &conv2_ConstraintSet_23);
  ConstraintSet_23 = ((MR_Word) (conv2_ConstraintSet_23));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), ConstraintSet_23, &ConstraintList_24);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_8[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ConstraintList_24));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (FunDeps_21));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ExternalTypeParams_14));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[5]), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_31, InstanceDefns_22, ((MR_Box) (STATE_VARIABLE_TVarSet_0_25)), &conv8_STATE_VARIABLE_TVarSet_26, ((MR_Box) (STATE_VARIABLE_Bindings_0_27)), &conv7_STATE_VARIABLE_Bindings_28, ((MR_Box) (STATE_VARIABLE_Changed_0_29)), &conv6_STATE_VARIABLE_Changed_30);
  *STATE_VARIABLE_TVarSet_26 = ((MR_Word) (conv8_STATE_VARIABLE_TVarSet_26));
  *STATE_VARIABLE_Bindings_28 = ((MR_Word) (conv7_STATE_VARIABLE_Bindings_28));
  *STATE_VARIABLE_Changed_30 = ((MR_Word) (conv6_STATE_VARIABLE_Changed_30));
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
  MR_Word ClassDefn_15;
  MR_Word FunDeps_16;
  MR_Word ConstraintSet_17;
  MR_Word ConstraintList_18;
  MR_Box conv0_ClassDefn_15;
  MR_Box conv1_ConstraintSet_17;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_9, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_15);
  ClassDefn_15 = ((MR_Word) (conv0_ClassDefn_15));
  FunDeps_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_15, (MR_Integer) 5))));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[2]), RedundantConstraints_11, ((MR_Box) (ClassId_12)), &conv1_ConstraintSet_17);
  ConstraintSet_17 = ((MR_Word) (conv1_ConstraintSet_17));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), ConstraintSet_17, &ConstraintList_18);
  check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(ConstraintList_18, FunDeps_16, ExternalTypeParams_10, STATE_VARIABLE_Bindings_0_19, STATE_VARIABLE_Bindings_20, STATE_VARIABLE_Changed_0_21, STATE_VARIABLE_Changed_22);
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_Bindings_5 = STATE_VARIABLE_Bindings_0_4;
    }
    else
    {
      MR_Word Constraint_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bindings_26_26;
      MR_Word STATE_VARIABLE_Changed_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;

      check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(Constraint_16, Constraints_17, FunDeps_2, ExternalTypeParams_3, STATE_VARIABLE_Bindings_0_4, &STATE_VARIABLE_Bindings_26_26, STATE_VARIABLE_Changed_0_6, &STATE_VARIABLE_Changed_27_27);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_Bindings_6 = STATE_VARIABLE_Bindings_0_5;
    }
    else
    {
      MR_Word HeadConstraint_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailConstraints_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bindings_29_29;
      MR_Word STATE_VARIABLE_Changed_30_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      check_hlds__typeclasses__do_class_improvement_pair_8_p_0(Constraint_1, HeadConstraint_19, FunDeps_3, ExternalTypeParams_4, STATE_VARIABLE_Bindings_0_5, &STATE_VARIABLE_Bindings_29_29, STATE_VARIABLE_Changed_0_7, &STATE_VARIABLE_Changed_30_30);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_Bindings_6 = STATE_VARIABLE_Bindings_0_5;
    }
    else
    {
      MR_Word FunDep_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word FunDeps_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bindings_29_29;
      MR_Word STATE_VARIABLE_Changed_30_30;
      MR_Word TypesA_33 = ((MR_Word) ((MR_hl_field(0, ConstraintA_1, (MR_Integer) 2))));
      MR_Word TypesB_36 = ((MR_Word) ((MR_hl_field(0, ConstraintB_2, (MR_Integer) 2))));
      MR_Word Domain_37 = ((MR_Word) ((MR_hl_field(0, FunDep_20, (MR_Integer) 0))));
      MR_Word Range_38 = ((MR_Word) ((MR_hl_field(0, FunDep_20, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bindings_27_39;
      MR_Word TypeCtorInfo_16_50;
      MR_Word RTypesA_40;
      MR_Word RTypesB_41;
      MR_Word RTypesA_48;
      MR_Word RTypesB_49;
      MR_Word TypeCtorInfo_9_46;
      MR_Word TypeInfo_10_47;
      MR_Word RTypesA_44;
      MR_Word RTypesB_45;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      RTypesA_40 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_37, TypesA_33);
      RTypesB_41 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_37, TypesB_36);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typeclasses_scalar_common_1[7]), ((MR_Box) (RTypesA_40)), ((MR_Box) (RTypesB_41)));
      if (succeeded)
      {
        TypeCtorInfo_9_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        RTypesA_44 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_46, Range_38, TypesA_33);
        RTypesB_45 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_9_46, Range_38, TypesB_36);
        TypeInfo_10_47 = (MR_Word) (&check_hlds__typeclasses_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_47, ((MR_Box) (RTypesA_44)), ((MR_Box) (RTypesB_45)));
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_16_50 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          RTypesA_48 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_16_50, Range_38, TypesA_33);
          RTypesB_49 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_16_50, Range_38, TypesB_36);
          succeeded = parse_tree__prog_type__type_unify_list_5_p_0(RTypesA_48, RTypesB_49, ExternalTypeParams_4, STATE_VARIABLE_Bindings_0_5, &STATE_VARIABLE_Bindings_27_39);
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_Bindings_29_29 = STATE_VARIABLE_Bindings_27_39;
        STATE_VARIABLE_Changed_30_30 = (MR_Integer) 1;
      }
      else
      {
        STATE_VARIABLE_Changed_30_30 = STATE_VARIABLE_Changed_0_7;
        STATE_VARIABLE_Bindings_29_29 = STATE_VARIABLE_Bindings_0_5;
      }
      // direct tailcall eliminated
      ;
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
  MR_Word STATE_VARIABLE_TypeAssignCord_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignCord_31,
  MR_Word STATE_VARIABLE_UnsatTypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_UnsatTypeAssignSet_33)
{
  MR_bool succeeded;
  MR_Word Constraints0_13;
  MR_Word TypeCtorInfo_39_39;
  MR_Word TypeInfo_40_40;
  MR_Word TypeCtorInfo_41_41;
  MR_Word TypeInfo_42_42;
  MR_Word Unproven0_14;
  MR_Word Assumed0_15;
  MR_Word Redundant0_16;
  MR_Word Ancestors0_17;

  check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &Constraints0_13);
  Unproven0_14 = ((MR_Word) ((MR_hl_field(0, Constraints0_13, (MR_Integer) 0))));
  Assumed0_15 = ((MR_Word) ((MR_hl_field(0, Constraints0_13, (MR_Integer) 1))));
  Redundant0_16 = ((MR_Word) ((MR_hl_field(0, Constraints0_13, (MR_Integer) 2))));
  Ancestors0_17 = ((MR_Word) ((MR_hl_field(0, Constraints0_13, (MR_Integer) 3))));
  succeeded = (Unproven0_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (Assumed0_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_40_40 = (MR_Word) (&check_hlds__typeclasses_scalar_common_1[2]);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_39_39, TypeInfo_40_40, Redundant0_16);
      if (succeeded)
      {
        TypeCtorInfo_41_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        TypeInfo_42_42 = (MR_Word) (&check_hlds__typeclasses_scalar_common_1[3]);
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_41_41, TypeInfo_42_42, Ancestors0_17);
      }
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_TypeAssignCord_31 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), STATE_VARIABLE_TypeAssignCord_0_30, ((MR_Box) (STATE_VARIABLE_TypeAssign_0_29)));
    *STATE_VARIABLE_UnsatTypeAssignSet_33 = STATE_VARIABLE_UnsatTypeAssignSet_0_32;
  }
  else
  {
    MR_Word ExistQTVars_18;
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
    MR_Word STATE_VARIABLE_TypeAssign_35_35;
    MR_Word Var_46;
    MR_Word Var_45;

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ExistQTVars_18);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &TVarSet0_19);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &Bindings0_20);
    check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ProofMap0_21);
    check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(STATE_VARIABLE_TypeAssign_0_29, &ConstraintMap0_22);
    Var_46 = ((MR_Word) ((MR_hl_field(0, Constraints0_13, (MR_Integer) 0))));
    check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(ClassTable_8, InstanceTable_9, ExistQTVars_18, Bindings0_20, &Bindings_23, TVarSet0_19, &TVarSet_24, ProofMap0_21, &ProofMap_25, ConstraintMap0_22, &ConstraintMap_26, Constraints0_13, &Constraints_27, Var_46, &Var_45);
    check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(TVarSet_24, Bindings_23, Constraints_27, ProofMap_25, ConstraintMap_26, STATE_VARIABLE_TypeAssign_0_29, &STATE_VARIABLE_TypeAssign_35_35);
    Unproven_28 = ((MR_Word) ((MR_hl_field(0, Constraints_27, (MR_Integer) 0))));
    succeeded = check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(Unproven_28, ExistQTVars_18);
    if (succeeded)
    {
      *STATE_VARIABLE_TypeAssignCord_31 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), STATE_VARIABLE_TypeAssignCord_0_30, ((MR_Box) (STATE_VARIABLE_TypeAssign_35_35)));
      *STATE_VARIABLE_UnsatTypeAssignSet_33 = STATE_VARIABLE_UnsatTypeAssignSet_0_32;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UnsatTypeAssignSet_33 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_TypeAssign_35_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UnsatTypeAssignSet_0_32));
      }
      *STATE_VARIABLE_TypeAssignCord_31 = STATE_VARIABLE_TypeAssignCord_0_30;
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typeclasses_scalar_common_1[4]), ((MR_Box) ((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11)), (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExistQTVars_2);
    (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
      check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9, &(env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11, check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExistQTVars_2)
{
  struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s env;

  (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExistQTVars_2 = ExistQTVars_2;
  while (MR_TRUE)
  {
    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
    else
    {
      MR_Word Constraint_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word _Ids_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 0))));
      MR_Word _ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 2))));
      check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(&env);
      if ((env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Constraints_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return (env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
    break;
  }
}

void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(
  MR_Word ClassTable_14,
  MR_Word InstanceTable_15,
  MR_Word ExistQTVars_16,
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
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_31, (MR_Integer) 0))));
  MR_Word Var_22;

  check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(ClassTable_14, InstanceTable_15, ExistQTVars_16, STATE_VARIABLE_Bindings_0_23, STATE_VARIABLE_Bindings_24, STATE_VARIABLE_TVarSet_0_25, STATE_VARIABLE_TVarSet_26, STATE_VARIABLE_ProofMap_0_27, STATE_VARIABLE_ProofMap_28, STATE_VARIABLE_ConstraintMap_0_29, STATE_VARIABLE_ConstraintMap_30, STATE_VARIABLE_Constraints_0_31, STATE_VARIABLE_Constraints_32, Var_38, &Var_22);
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__3_3;

  hlds__hlds_class__compare_hlds_constraints_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_TVarSet_26;
  MR_Word conv5_STATE_VARIABLE_Bindings_28;
  MR_Word conv4_STATE_VARIABLE_Changed_30;

  check_hlds__typeclasses__do_instance_improvement_2_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_TVarSet_26, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Bindings_28, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Changed_30);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_TVarSet_26));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Bindings_28));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Changed_30));
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Bindings_20;
  MR_Word conv0_STATE_VARIABLE_Changed_22;

  check_hlds__typeclasses__do_class_improvement_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Bindings_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Changed_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Bindings_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_22));
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word ClassTable_16,
  MR_Word InstanceTable_17,
  MR_Word ExistQTVars_18,
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
    MR_Word STATE_VARIABLE_TVarSet_47_47;
    MR_Word STATE_VARIABLE_ProofMap_48_48;
    MR_Word STATE_VARIABLE_ConstraintMap_49_49;
    MR_Word STATE_VARIABLE_Seen_50_50;
    MR_Word STATE_VARIABLE_Constraints_51_51;
    MR_Word STATE_VARIABLE_ProofMap_52_52;
    MR_Word STATE_VARIABLE_ConstraintMap_53_53;
    MR_Word STATE_VARIABLE_Constraints_54_54;
    MR_Word Changed1_55;
    MR_Word Changed2_56;
    MR_Word STATE_VARIABLE_Bindings_23_57;
    MR_Word Redundant_58;
    MR_Word ClassIds_59;
    MR_Word Var_60;
    MR_Word RedundantConstraints_69;
    MR_Word ClassIds_70;
    MR_Word Var_71;
    MR_Word Unproven0_81;
    MR_Word Unproven0_86;
    MR_Word Assumed_87;
    MR_Word Redundant0_88;
    MR_Word Redundant_90;
    MR_Word Unproven0_92;
    MR_Word Ancestors_95;
    MR_Word Unproven_96;
    MR_Box conv3_STATE_VARIABLE_Bindings_23_57;
    MR_Box conv2_Changed1_55;
    MR_Box conv9_STATE_VARIABLE_TVarSet_42_42;
    MR_Box conv8_STATE_VARIABLE_Bindings_43_43;
    MR_Box conv7_Changed2_56;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(STATE_VARIABLE_Bindings_0_29, STATE_VARIABLE_Constraints_0_37, &STATE_VARIABLE_Constraints_41_41);
    Redundant_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_41_41, (MR_Integer) 2))));
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[2]), Redundant_58, &ClassIds_59);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[0]));
      MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1));
      MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_60, 3) = ((MR_Box) (ClassTable_16));
      MR_hl_field(0, Var_60, 4) = ((MR_Box) (ExistQTVars_18));
      MR_hl_field(0, Var_60, 5) = ((MR_Box) (Redundant_58));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_60, ClassIds_59, ((MR_Box) (STATE_VARIABLE_Bindings_0_29)), &conv3_STATE_VARIABLE_Bindings_23_57, ((MR_Box) ((MR_Integer) 0)), &conv2_Changed1_55);
    STATE_VARIABLE_Bindings_23_57 = ((MR_Word) (conv3_STATE_VARIABLE_Bindings_23_57));
    Changed1_55 = ((MR_Word) (conv2_Changed1_55));
    RedundantConstraints_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_41_41, (MR_Integer) 2))));
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[2]), RedundantConstraints_69, &ClassIds_70);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_7[0]));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_2));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_71, 3) = ((MR_Box) (ClassTable_16));
      MR_hl_field(0, Var_71, 4) = ((MR_Box) (InstanceTable_17));
      MR_hl_field(0, Var_71, 5) = ((MR_Box) (ExistQTVars_18));
      MR_hl_field(0, Var_71, 6) = ((MR_Box) (RedundantConstraints_69));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[5]), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_71, ClassIds_70, ((MR_Box) (STATE_VARIABLE_TVarSet_0_31)), &conv9_STATE_VARIABLE_TVarSet_42_42, ((MR_Box) (STATE_VARIABLE_Bindings_23_57)), &conv8_STATE_VARIABLE_Bindings_43_43, ((MR_Box) ((MR_Integer) 0)), &conv7_Changed2_56);
    STATE_VARIABLE_TVarSet_42_42 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_42_42));
    STATE_VARIABLE_Bindings_43_43 = ((MR_Word) (conv8_STATE_VARIABLE_Bindings_43_43));
    Changed2_56 = ((MR_Word) (conv7_Changed2_56));
    AppliedImprovementRule_25 = mercury__bool__or_2_f_0(Changed1_55, Changed2_56);
    switch (AppliedImprovementRule_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Constraints_44_44 = STATE_VARIABLE_Constraints_41_41;
        break;
      case (MR_Integer) 1:
        check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(STATE_VARIABLE_Bindings_43_43, STATE_VARIABLE_Constraints_41_41, &STATE_VARIABLE_Constraints_44_44);
        break;
    }
    Unproven0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_44_44, (MR_Integer) 0))));
    Assumed_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_44_44, (MR_Integer) 1))));
    Redundant0_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_44_44, (MR_Integer) 2))));
    Ancestors_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_44_44, (MR_Integer) 3))));
    check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(Assumed_87, STATE_VARIABLE_ConstraintMap_0_35, &STATE_VARIABLE_ConstraintMap_45_45, Unproven0_81, &Unproven0_86, &EliminatedAssumed_26);
    check_hlds__typeclasses__apply_instance_rules_2_15_p_0(ClassTable_16, InstanceTable_17, STATE_VARIABLE_TVarSet_42_42, &STATE_VARIABLE_TVarSet_47_47, STATE_VARIABLE_ProofMap_0_33, &STATE_VARIABLE_ProofMap_48_48, STATE_VARIABLE_ConstraintMap_45_45, &STATE_VARIABLE_ConstraintMap_49_49, Redundant0_88, &Redundant_90, STATE_VARIABLE_Seen_0_39, &STATE_VARIABLE_Seen_50_50, Unproven0_86, &Unproven0_92, &AppliedInstanceRule_27);
    {
      STATE_VARIABLE_Constraints_51_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, 0) = ((MR_Box) (Unproven0_92));
      MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, 1) = ((MR_Box) (Assumed_87));
      MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, 2) = ((MR_Box) (Redundant_90));
      MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, 3) = ((MR_Box) (Ancestors_95));
    }
    check_hlds__typeclasses__apply_class_rules_2_8_p_0(Ancestors_95, STATE_VARIABLE_ProofMap_48_48, &STATE_VARIABLE_ProofMap_52_52, STATE_VARIABLE_ConstraintMap_49_49, &STATE_VARIABLE_ConstraintMap_53_53, Unproven0_92, &Unproven_96, &AppliedClassRule_28);
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, (MR_Integer) 1))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, (MR_Integer) 2))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_51_51, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Constraints_54_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, 0) = ((MR_Box) (Unproven_96));
      MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, 1) = ((MR_Box) (Var_98));
      MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, 2) = ((MR_Box) (Var_99));
      MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, 3) = ((MR_Box) (Var_100));
    }
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
      MR_Word Unproven0_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0))));
      MR_Word Unproven1_102;
      MR_Word Unproven_103;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;

      mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_2[1]), Unproven0_101, &Unproven1_102);
      if ((Unproven1_102 == (MR_Word) ((MR_Unsigned) 0U)))
        Unproven_103 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word C_113 = ((MR_Word) ((MR_hl_field(1, Unproven1_102, (MR_Integer) 0))));
        MR_Word Cs_114 = ((MR_Word) ((MR_hl_field(1, Unproven1_102, (MR_Integer) 1))));

        check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(C_113, Cs_114, &Unproven_103);
      }
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Constraints_38 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_103));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_111));
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
      ;
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
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Integer) 0;
    *STATE_VARIABLE_ConstraintMap_5 = STATE_VARIABLE_ConstraintMap_0_4;
    *STATE_VARIABLE_ProofMap_3 = STATE_VARIABLE_ProofMap_0_2;
  }
  else
  {
    MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word ProgConstraint0_23;
    MR_Word Descendants_24;
    MR_Box conv0_Descendants_24;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(Constraint0_19, &ProgConstraint0_23);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[3]), Ancestors_1, ((MR_Box) (ProgConstraint0_23)), &conv0_Descendants_24);
    if (succeeded)
    {
      Descendants_24 = ((MR_Word) (conv0_Descendants_24));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Constraint0_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConstraints_26));
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProofMap_4 = STATE_VARIABLE_ProofMap_0_3;
    else
    {
      MR_Word Descendant_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Descendants_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_ProofMap_16_16;
      MR_Word next_value_of_Constraint_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProofMap_0_3;

      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Descendant_10));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (Constraint_1)), ((MR_Box) (Var_15)), STATE_VARIABLE_ProofMap_0_3, &STATE_VARIABLE_ProofMap_16_16);
      // direct tailcall eliminated
      ;
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

static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typeclasses__matches_no_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__13_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__15_15 = (MR_Integer) 0;
    *STATE_VARIABLE_Seen_12 = STATE_VARIABLE_Seen_0_11;
    *STATE_VARIABLE_Redundant_10 = STATE_VARIABLE_Redundant_0_9;
    *STATE_VARIABLE_ConstraintMap_8 = STATE_VARIABLE_ConstraintMap_0_7;
    *STATE_VARIABLE_ProofMap_6 = STATE_VARIABLE_ProofMap_0_5;
    *STATE_VARIABLE_TVarSet_4 = STATE_VARIABLE_TVarSet_0_3;
  }
  else
  {
    MR_Word C_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__13_13, (MR_Integer) 0))));
    MR_Word Cs_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__13_13, (MR_Integer) 1))));
    MR_Word ClassName_45 = ((MR_Word) ((MR_hl_field(0, C_40, (MR_Integer) 1))));
    MR_Word ArgTypes_46 = ((MR_Word) ((MR_hl_field(0, C_40, (MR_Integer) 2))));
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
    MR_Box conv0_Instances_48;
    MR_Word NewConstraints0_50;
    MR_Word STATE_VARIABLE_TVarSet_66_66;
    MR_Word STATE_VARIABLE_ProofMap_67_67;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_46, &Arity_47);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (ClassName_45));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (Arity_47));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[6]), InstanceTable_2, ((MR_Box) (Var_65)), &conv0_Instances_48);
    Instances_48 = ((MR_Word) (conv0_Instances_48));
    succeeded = check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(Instances_48, (MR_Integer) 1, C_40, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_66_66, STATE_VARIABLE_ProofMap_0_5, &STATE_VARIABLE_ProofMap_67_67, &NewConstraints0_50);
    if (succeeded)
    {
      MR_Word Var_69;

      STATE_VARIABLE_ProofMap_74_74 = STATE_VARIABLE_ProofMap_67_67;
      STATE_VARIABLE_TVarSet_73_73 = STATE_VARIABLE_TVarSet_66_66;
      hlds__hlds_class__update_constraint_map_3_p_0(C_40, STATE_VARIABLE_ConstraintMap_0_7, &STATE_VARIABLE_ConstraintMap_68_68);
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_69, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[0]));
        MR_hl_field(0, Var_69, 1) = ((MR_Box) (check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1));
        MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_69, 3) = ((MR_Box) (STATE_VARIABLE_Seen_0_11));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_69, NewConstraints0_50, &NewConstraints_51);
      hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_1, STATE_VARIABLE_TVarSet_66_66, NewConstraints_51, STATE_VARIABLE_Redundant_0_9, &STATE_VARIABLE_Redundant_70_70);
      STATE_VARIABLE_Seen_71_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewConstraints_51, STATE_VARIABLE_Seen_0_11);
      Changed1_52 = (MR_Integer) 1;
    }
    else
    {
      {
        NewConstraints_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NewConstraints_51, 0) = ((MR_Box) (C_40));
        MR_hl_field(1, NewConstraints_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewConstraints_51, TailConstraints_53, HeadVar__14_14);
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurInstanceNum_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ProofMap_0_32,
  MR_Word * STATE_VARIABLE_ProofMap_33,
  MR_Word * NewConstraints_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instance_9;
    MR_Word Instances_10;
    MR_Word ArgTypes_18;
    MR_Word ProgConstraints0_19;
    MR_Word InstanceTypes0_20;
    MR_Word InstanceTVarSet_21;
    MR_Word NewTVarSet_22;
    MR_Word Renaming_23;
    MR_Word InstanceTypes_24;
    MR_Word Subst_25;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instance_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Instances_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ArgTypes_18 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 2))));
      InstanceTVarSet_21 = ((MR_Word) ((MR_hl_field(0, Instance_9, (MR_Integer) 2))));
      InstanceTypes0_20 = ((MR_Word) ((MR_hl_field(0, Instance_9, (MR_Integer) 4))));
      ProgConstraints0_19 = ((MR_Word) ((MR_hl_field(0, Instance_9, (MR_Integer) 5))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_30, InstanceTVarSet_21, &NewTVarSet_22, &Renaming_23);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_23, InstanceTypes0_20, &InstanceTypes_24);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(InstanceTypes_24, ArgTypes_18, &Subst_25);
      if (succeeded)
      {
        MR_Word ProgConstraints1_26;
        MR_Word ProgConstraints_27;
        MR_Word NewProof_28;
        MR_Word ProgConstraint_29;
        MR_Word Var_35;

        *STATE_VARIABLE_TVarSet_31 = NewTVarSet_22;
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_23, ProgConstraints0_19, &ProgConstraints1_26);
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_25, ProgConstraints1_26, &ProgConstraints_27);
        hlds__hlds_class__init_hlds_constraint_list_2_p_0(ProgConstraints_27, NewConstraints_15);
        Var_35 = (MR_Word) (CurInstanceNum_11);
        {
          NewProof_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewProof_28, 0) = ((MR_Box) (Var_35));
        }
        hlds__hlds_class__retrieve_prog_constraint_2_p_0(Constraint_12, &ProgConstraint_29);
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (ProgConstraint_29)), ((MR_Box) (NewProof_28)), STATE_VARIABLE_ProofMap_0_32, STATE_VARIABLE_ProofMap_33);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) CurInstanceNum_11 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = Instances_10;
        MR_Integer next_value_of_CurInstanceNum_11 = Var_37;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        CurInstanceNum_11 = next_value_of_CurInstanceNum_11;
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
  struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24 = ((MR_Word) ((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24));
  check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = hlds__hlds_class__matching_constraints_2_p_0((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24, (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13);
  if ((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
    check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), &(env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24, (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3, env_ptr);
      (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_TRUE;
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
  struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s env;

  (env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1 = AssumedCs_1;
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ConstraintMap_3 = STATE_VARIABLE_ConstraintMap_0_2;
  }
  else
  {
    MR_Word Cs_14;
    MR_Word NewCs0_17;
    MR_Word Changed0_18;
    MR_Word STATE_VARIABLE_ConstraintMap_22_22;

    (env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    Cs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (NewCs0_17));
      }
      *HeadVar__6_6 = Changed0_18;
      *STATE_VARIABLE_ConstraintMap_3 = STATE_VARIABLE_ConstraintMap_22_22;
    }
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (C0_1));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word C1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word C_10;
      MR_Word TypeCtorInfo_13_18;
      MR_Word TypeInfo_17_22;
      MR_Word IdsA_12 = ((MR_Word) ((MR_hl_field(0, C0_1, (MR_Integer) 0))));
      MR_Word ClassName_13 = ((MR_Word) ((MR_hl_field(0, C0_1, (MR_Integer) 1))));
      MR_Word ArgTypes_14 = ((MR_Word) ((MR_hl_field(0, C0_1, (MR_Integer) 2))));
      MR_Word IdsB_15 = ((MR_Word) ((MR_hl_field(0, C1_7, (MR_Integer) 0))));
      MR_Word Ids0_16;
      MR_Word Ids_17;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, C1_7, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, C1_7, (MR_Integer) 2))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_13, Var_19);
      if (succeeded)
      {
        TypeInfo_17_22 = (MR_Word) (&check_hlds__typeclasses_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_22, ((MR_Box) (ArgTypes_14)), ((MR_Box) (Var_20)));
        if (succeeded)
        {
          TypeCtorInfo_13_18 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0);
          mercury__list__append_3_p_1(TypeCtorInfo_13_18, IdsA_12, IdsB_15, &Ids0_16);
          mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_13_18, Ids0_16, &Ids_17);
          {
            C_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, C_10, 0) = ((MR_Box) (Ids_17));
            MR_hl_field(0, C_10, 1) = ((MR_Box) (ClassName_13));
            MR_hl_field(0, C_10, 2) = ((MR_Box) (ArgTypes_14));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_C0_1 = C_10;
        MR_Word next_value_of_HeadVar__2_2 = Cs_8;

        // direct tailcall eliminated
        ;
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (C0_1));
          MR_hl_field(1, base, 1) = ((MR_Box) (Constraints0_11));
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
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_38;

  check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__131__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_38);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_38));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeAssignCord_31;
  MR_Word conv0_STATE_VARIABLE_UnsatTypeAssignSet_33;

  check_hlds__typeclasses__reduce_type_assign_context_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeAssignCord_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_UnsatTypeAssignSet_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeAssignCord_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_UnsatTypeAssignSet_33));
}

void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0(
  MR_Word Context_6,
  MR_Word TypeAssignSet0_7,
  MR_Word * TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word ClauseContext_10;
  MR_Word ModuleInfo_11;
  MR_Word ClassTable_14;
  MR_Word InstanceTable_15;
  MR_Word TypeAssignSetCord1_16;
  MR_Word UnsatTypeAssignSet_17;
  MR_Word TypeAssignSet1_18;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Box conv3_TypeAssignSetCord1_16;
  MR_Box conv2_UnsatTypeAssignSet_17;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_28, &ClauseContext_10);
  ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, ClauseContext_10, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_11, &ClassTable_14);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_11, &InstanceTable_15);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_3[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ClassTable_14));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (InstanceTable_15));
  }
  Var_34 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[0]), (MR_Word) (&check_hlds__typeclasses_scalar_common_1[1]), Var_33, TypeAssignSet0_7, ((MR_Box) (Var_34)), &conv3_TypeAssignSetCord1_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_UnsatTypeAssignSet_17);
  TypeAssignSetCord1_16 = ((MR_Word) (conv3_TypeAssignSetCord1_16));
  UnsatTypeAssignSet_17 = ((MR_Word) (conv2_UnsatTypeAssignSet_17));
  TypeAssignSet1_18 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), TypeAssignSetCord1_16);
  succeeded = (TypeAssignSet1_18 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (TypeAssignSet0_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word Spec_21;
    MR_Word DeleteConstraints_22;

    Spec_21 = check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(ClauseContext_10, Context_6, UnsatTypeAssignSet_17);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_21, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    {
      DeleteConstraints_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DeleteConstraints_22, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[0]));
      MR_hl_field(0, DeleteConstraints_22, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_2));
      MR_hl_field(0, DeleteConstraints_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, DeleteConstraints_22, 3) = ((MR_Box) (ClassTable_14));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), DeleteConstraints_22, TypeAssignSet0_7, TypeAssignSet_8);
  }
  else
  {
    *TypeAssignSet_8 = TypeAssignSet1_18;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
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
