/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module check_hlds.typeclasses. */
/* :- implementation. */

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
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
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

struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1;
  MR_bool check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded;
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13;
  jmp_buf check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24;
  MR_Box check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24;
};

struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s {
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2;
  MR_bool check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9;
  jmp_buf check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_14,
  MR_Word check_hlds__typeclasses__LambdaHeadVar__1_36,
  MR_Word * check_hlds__typeclasses__LambdaHeadVar__2_37);

static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
  MR_Word check_hlds__typeclasses__Constraint_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4);

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
  MR_Word check_hlds__typeclasses__Ancestors_1,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
  MR_Word * check_hlds__typeclasses__HeadVar__8_8);

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
  MR_Word * check_hlds__typeclasses__Changed_11);

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
  MR_Word check_hlds__typeclasses__Constraint_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
  MR_Word * check_hlds__typeclasses__NewConstraints_15);

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
  MR_Word check_hlds__typeclasses__Instances_8,
  MR_Word check_hlds__typeclasses__Constraint_9,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16,
  MR_Word * check_hlds__typeclasses__NewConstraints_12);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
  void * check_hlds__typeclasses__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
  MR_Word check_hlds__typeclasses__Seen_3,
  MR_Word check_hlds__typeclasses__Constraint_4);

static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1);

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_1,
  MR_Word check_hlds__typeclasses__InstanceTable_2,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
  MR_Word * check_hlds__typeclasses__HeadVar__15_15);

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_14,
  MR_Word check_hlds__typeclasses__InstanceTable_15,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
  MR_Word * check_hlds__typeclasses__Changed_21);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
  MR_Word check_hlds__typeclasses__AssumedCs_1,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
  MR_Word * check_hlds__typeclasses__HeadVar__6_6);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
  MR_Word check_hlds__typeclasses__Constraint_9,
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_11,
  MR_Word check_hlds__typeclasses__FunDep_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
  MR_Word check_hlds__typeclasses__FunDeps_9,
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_11,
  MR_Word check_hlds__typeclasses__Constraint_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
  MR_Word check_hlds__typeclasses__Constraints_11,
  MR_Word check_hlds__typeclasses__FunDeps_12,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_13,
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_12,
  MR_Word check_hlds__typeclasses__InstanceTable_13,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_14,
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
  MR_Word check_hlds__typeclasses__ClassId_16,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
  MR_Word check_hlds__typeclasses__ConstraintA_1,
  MR_Word check_hlds__typeclasses__ConstraintB_2,
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
  MR_Word check_hlds__typeclasses__Constraint_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word check_hlds__typeclasses__FunDeps_3,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Word check_hlds__typeclasses__FunDeps_2,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_3,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7);

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_9,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_10,
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
  MR_Word check_hlds__typeclasses__ClassId_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_10,
  MR_Word check_hlds__typeclasses__InstanceTable_11,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_12,
  MR_Word check_hlds__typeclasses__Constraints_13,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
  MR_Word * check_hlds__typeclasses__Changed_16);

static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
  MR_Word check_hlds__typeclasses__C0_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word * check_hlds__typeclasses__HeadVar__3_3);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3);

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_16,
  MR_Word check_hlds__typeclasses__InstanceTable_17,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_18,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg);

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_2);

static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_8,
  MR_Word check_hlds__typeclasses__InstanceTable_9,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33);

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box * check_hlds__typeclasses__wrapper_arg_2);

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);


static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[3][11];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_6[1][14];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][13];

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][5];




static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
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
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
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
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_5[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
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
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
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
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_7[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0
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
  MR_Word check_hlds__typeclasses__ClassTable_14,
  MR_Word check_hlds__typeclasses__LambdaHeadVar__1_36,
  MR_Word * check_hlds__typeclasses__LambdaHeadVar__2_37)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__Constraints0_24;
    MR_Word check_hlds__typeclasses__TVarSet_25;
    MR_Word check_hlds__typeclasses__Constraints_26;
    MR_Word check_hlds__typeclasses__V_39_39;
    MR_Word check_hlds__typeclasses__V_52_52;
    MR_Word check_hlds__typeclasses__V_53_53;
    MR_Word check_hlds__typeclasses__V_54_54;

    {
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__LambdaHeadVar__1_36, &check_hlds__typeclasses__Constraints0_24);
    }
    {
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__LambdaHeadVar__1_36, &check_hlds__typeclasses__TVarSet_25);
    }
    check_hlds__typeclasses__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 0)));
    check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 1)));
    check_hlds__typeclasses__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 2)));
    check_hlds__typeclasses__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 3)));
    {
      hlds__hlds_data__make_hlds_constraints_5_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__TVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typeclasses__V_39_39, &check_hlds__typeclasses__Constraints_26);
    }
    {
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typeclasses__Constraints_26, check_hlds__typeclasses__LambdaHeadVar__1_36, check_hlds__typeclasses__LambdaHeadVar__2_37);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
  MR_Word check_hlds__typeclasses__Constraint_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;

        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3;
        else
          {
            MR_Word check_hlds__typeclasses__Descendant_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Descendants_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__V_15_15;
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16;

            {
              check_hlds__typeclasses__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_15_15, 0) = ((MR_Box) (check_hlds__typeclasses__Descendant_10));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__Constraint_1)), ((MR_Box) (check_hlds__typeclasses__V_15_15)), check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__typeclasses__Constraint__tmp_copy_1 = check_hlds__typeclasses__Descendant_10;
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Descendants_11;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16;

              check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_3;
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
              check_hlds__typeclasses__Constraint_1 = check_hlds__typeclasses__Constraint__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
  MR_Word check_hlds__typeclasses__Ancestors_1,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
  MR_Word * check_hlds__typeclasses__HeadVar__8_8)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;

    if ((check_hlds__typeclasses__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typeclasses__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 0;
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4;
        *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2;
      }
    else
      {
        MR_Word check_hlds__typeclasses__Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word check_hlds__typeclasses__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word check_hlds__typeclasses__ProgConstraint0_23;
        MR_Word check_hlds__typeclasses__Descendants_24;
        MR_Box check_hlds__typeclasses__conv0_Descendants_24;

        {
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint0_19, &check_hlds__typeclasses__ProgConstraint0_23);
        }
        {
          check_hlds__typeclasses__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[2], check_hlds__typeclasses__Ancestors_1, ((MR_Box) (check_hlds__typeclasses__ProgConstraint0_23)), &check_hlds__typeclasses__conv0_Descendants_24);
        }
        if (check_hlds__typeclasses__succeeded)
          {
            check_hlds__typeclasses__Descendants_24 = ((MR_Word) check_hlds__typeclasses__conv0_Descendants_24);
            check_hlds__typeclasses__succeeded = MR_TRUE;
          }
        if (check_hlds__typeclasses__succeeded)
          {
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31;
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32;
            MR_Word check_hlds__typeclasses__V_25_25;

            {
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__Constraint0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31);
            }
            {
              check_hlds__typeclasses__add_superclass_proofs_4_p_0(check_hlds__typeclasses__ProgConstraint0_23, check_hlds__typeclasses__Descendants_24, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32);
            }
            {
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, check_hlds__typeclasses__HeadVar__7_7, &check_hlds__typeclasses__V_25_25);
            }
            *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 1;
          }
        else
          {
            MR_Word check_hlds__typeclasses__TailConstraints_26;

            {
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, &check_hlds__typeclasses__TailConstraints_26, check_hlds__typeclasses__HeadVar__8_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__typeclasses__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__Constraint0_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__TailConstraints_26));
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
  MR_Word * check_hlds__typeclasses__Changed_11)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
    MR_Word check_hlds__typeclasses__Unproven_16;
    MR_Word check_hlds__typeclasses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__V_27_27;
    MR_Word check_hlds__typeclasses__V_28_28;
    MR_Word check_hlds__typeclasses__V_29_29;
    MR_Word check_hlds__typeclasses__V_26_26;

    {
      check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_15, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20, check_hlds__typeclasses__Unproven0_12, &check_hlds__typeclasses__Unproven_16, check_hlds__typeclasses__Changed_11);
    }
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_27_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_28_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_29_29));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
  MR_Word check_hlds__typeclasses__Constraint_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
  MR_Word * check_hlds__typeclasses__NewConstraints_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__typeclasses__Instance_9;
        MR_Word check_hlds__typeclasses__Instances_10;
        MR_Word check_hlds__typeclasses__ArgTypes_18;
        MR_Word check_hlds__typeclasses__ProgConstraints0_19;
        MR_Word check_hlds__typeclasses__InstanceTypes0_20;
        MR_Word check_hlds__typeclasses__InstanceTVarSet_21;
        MR_Word check_hlds__typeclasses__NewTVarSet_22;
        MR_Word check_hlds__typeclasses__Renaming_23;
        MR_Word check_hlds__typeclasses__InstanceTypes_24;
        MR_Word check_hlds__typeclasses___Ids_16;
        MR_Word check_hlds__typeclasses___ClassName_17;
        MR_Word check_hlds__typeclasses__V_40_40;
        MR_Word check_hlds__typeclasses__V_42_42;
        MR_Word check_hlds__typeclasses__V_43_43;
        MR_Word check_hlds__typeclasses__V_44_44;
        MR_Word check_hlds__typeclasses__V_45_45;
        MR_Word check_hlds__typeclasses__V_46_46;
        MR_Word check_hlds__typeclasses__V_48_48;
        MR_Word check_hlds__typeclasses__Subst_25;

        if (check_hlds__typeclasses__succeeded)
          {
            check_hlds__typeclasses__Instance_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__typeclasses__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__typeclasses___Ids_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 0)));
            check_hlds__typeclasses___ClassName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 1)));
            check_hlds__typeclasses__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 2)));
            check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 0)));
            check_hlds__typeclasses__InstanceTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 1)));
            check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 2)));
            check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 3)));
            check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 4)));
            check_hlds__typeclasses__ProgConstraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 5)));
            check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 6)));
            check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 7)));
            check_hlds__typeclasses__InstanceTVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 8)));
            check_hlds__typeclasses__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 9)));
            {
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, check_hlds__typeclasses__InstanceTVarSet_21, &check_hlds__typeclasses__NewTVarSet_22, &check_hlds__typeclasses__Renaming_23);
            }
            {
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__InstanceTypes0_20, &check_hlds__typeclasses__InstanceTypes_24);
            }
            {
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typeclasses__InstanceTypes_24, check_hlds__typeclasses__ArgTypes_18, &check_hlds__typeclasses__Subst_25);
            }
            if (check_hlds__typeclasses__succeeded)
              {
                MR_Word check_hlds__typeclasses__ProgConstraints1_26;
                MR_Word check_hlds__typeclasses__ProgConstraints_27;
                MR_Word check_hlds__typeclasses__NewProof_28;
                MR_Word check_hlds__typeclasses__ProgConstraint_29;

                *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__NewTVarSet_22;
                {
                  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__ProgConstraints0_19, &check_hlds__typeclasses__ProgConstraints1_26);
                }
                {
                  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Subst_25, check_hlds__typeclasses__ProgConstraints1_26, &check_hlds__typeclasses__ProgConstraints_27);
                }
                {
                  hlds__hlds_data__init_hlds_constraint_list_2_p_0(check_hlds__typeclasses__ProgConstraints_27, check_hlds__typeclasses__NewConstraints_15);
                }
                {
                  check_hlds__typeclasses__NewProof_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__typeclasses__NewProof_28, 0) = ((MR_Box) (check_hlds__typeclasses__InstanceNum0_11));
                }
                {
                  hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint_12, &check_hlds__typeclasses__ProgConstraint_29);
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__ProgConstraint_29)), ((MR_Box) (check_hlds__typeclasses__NewProof_28)), check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34);
                }
                check_hlds__typeclasses__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer check_hlds__typeclasses__InstanceNum_30 = (check_hlds__typeclasses__InstanceNum0_11 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Instances_10;
                  MR_Integer check_hlds__typeclasses__InstanceNum0__tmp_copy_11 = check_hlds__typeclasses__InstanceNum_30;

                  check_hlds__typeclasses__InstanceNum0_11 = check_hlds__typeclasses__InstanceNum0__tmp_copy_11;
                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__typeclasses__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
  MR_Word check_hlds__typeclasses__Instances_8,
  MR_Word check_hlds__typeclasses__Constraint_9,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16,
  MR_Word * check_hlds__typeclasses__NewConstraints_12)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;

    {
      check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(check_hlds__typeclasses__Instances_8, (MR_Integer) 1, check_hlds__typeclasses__Constraint_9, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16, check_hlds__typeclasses__NewConstraints_12);
    }
    return check_hlds__typeclasses__succeeded;
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6);
    {
      check_hlds__typeclasses__matches_no_constraint_2_p_0_2(check_hlds__typeclasses__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    {
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4);
    }
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded)
      {
        check_hlds__typeclasses__matches_no_constraint_2_p_0_1(check_hlds__typeclasses__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3, check_hlds__typeclasses__matches_no_constraint_2_p_0_3, check_hlds__typeclasses__env_ptr);
          }
        }
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
  MR_Word check_hlds__typeclasses__Seen_3,
  MR_Word check_hlds__typeclasses__Constraint_4)
{
  {
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s check_hlds__typeclasses__env;

    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3 = check_hlds__typeclasses__Seen_3;
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4 = check_hlds__typeclasses__Constraint_4;
    {
      check_hlds__typeclasses__matches_no_constraint_2_p_0_4(&check_hlds__typeclasses__env);
    }
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded);
    return (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;

    {
      check_hlds__typeclasses__succeeded = check_hlds__typeclasses__matches_no_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1));
    }
    return check_hlds__typeclasses__succeeded;
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_1,
  MR_Word check_hlds__typeclasses__InstanceTable_2,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
  MR_Word * check_hlds__typeclasses__HeadVar__15_15)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;

    if ((check_hlds__typeclasses__HeadVar__13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typeclasses__HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typeclasses__HeadVar__15_15 = (MR_Integer) 0;
        *check_hlds__typeclasses__STATE_VARIABLE_Seen_12 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
        *check_hlds__typeclasses__STATE_VARIABLE_Redundant_10 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
        *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5;
        *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
      }
    else
      {
        MR_Word check_hlds__typeclasses__C_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 0)));
        MR_Word check_hlds__typeclasses__Cs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 1)));
        MR_Word check_hlds__typeclasses__ClassName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 1)));
        MR_Word check_hlds__typeclasses__ArgTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 2)));
        MR_Integer check_hlds__typeclasses__Arity_47;
        MR_Word check_hlds__typeclasses__Instances_48;
        MR_Word check_hlds__typeclasses__NewConstraints_51;
        MR_Word check_hlds__typeclasses__Changed1_52;
        MR_Word check_hlds__typeclasses__TailConstraints_53;
        MR_Word check_hlds__typeclasses__Changed2_54;
        MR_Word check_hlds__typeclasses__V_65_65;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74;
        MR_Word check_hlds__typeclasses___Ids_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 0)));
        MR_Box check_hlds__typeclasses__conv0_Instances_48;
        MR_Word check_hlds__typeclasses__NewConstraints0_50;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typeclasses__ArgTypes_46, &check_hlds__typeclasses__Arity_47);
        }
        {
          check_hlds__typeclasses__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 0) = ((MR_Box) (check_hlds__typeclasses__ClassName_45));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 1) = ((MR_Box) (check_hlds__typeclasses__Arity_47));
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_2, ((MR_Box) (check_hlds__typeclasses__V_65_65)), &check_hlds__typeclasses__conv0_Instances_48);
        }
        check_hlds__typeclasses__Instances_48 = ((MR_Word) check_hlds__typeclasses__conv0_Instances_48);
        {
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_7_p_0(check_hlds__typeclasses__Instances_48, check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67, &check_hlds__typeclasses__NewConstraints0_50);
        }
        if (check_hlds__typeclasses__succeeded)
          {
            MR_Word check_hlds__typeclasses__TypeCtorInfo_84_84;
            MR_Word check_hlds__typeclasses__V_69_69;

            check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67;
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
            {
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68);
            }
            {
              check_hlds__typeclasses__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 1) = ((MR_Box) (check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 3) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11));
            }
            check_hlds__typeclasses__TypeCtorInfo_84_84 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
            {
              mercury__list__filter_3_p_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__V_69_69, check_hlds__typeclasses__NewConstraints0_50, &check_hlds__typeclasses__NewConstraints_51);
            }
            {
              hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9, &check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70);
            }
            {
              check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11);
            }
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 1;
          }
        else
          {
            {
              check_hlds__typeclasses__NewConstraints_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 0) = ((MR_Box) (check_hlds__typeclasses__C_40));
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 0;
            check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
            check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
            check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
            check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5;
          }
        {
          check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__InstanceTable_2, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8, check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70, check_hlds__typeclasses__STATE_VARIABLE_Redundant_10, check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71, check_hlds__typeclasses__STATE_VARIABLE_Seen_12, check_hlds__typeclasses__Cs_41, &check_hlds__typeclasses__TailConstraints_53, &check_hlds__typeclasses__Changed2_54);
        }
        {
          mercury__bool__or_3_p_0(check_hlds__typeclasses__Changed1_52, check_hlds__typeclasses__Changed2_54, check_hlds__typeclasses__HeadVar__15_15);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__TailConstraints_53, check_hlds__typeclasses__HeadVar__14_14);
        }
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_14,
  MR_Word check_hlds__typeclasses__InstanceTable_15,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
  MR_Word * check_hlds__typeclasses__Changed_21)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__Unproven0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__Assumed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__Redundant0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__Ancestors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 3)));
    MR_Word check_hlds__typeclasses__Redundant_26;
    MR_Word check_hlds__typeclasses__Unproven_27;

    {
      check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33, check_hlds__typeclasses__Redundant0_24, &check_hlds__typeclasses__Redundant_26, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34, check_hlds__typeclasses__STATE_VARIABLE_Seen_35, check_hlds__typeclasses__Unproven0_22, &check_hlds__typeclasses__Unproven_27, check_hlds__typeclasses__Changed_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_37 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_25));
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24);
    {
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(check_hlds__typeclasses__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    {
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13);
    }
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
      {
        check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(check_hlds__typeclasses__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3, check_hlds__typeclasses__env_ptr);
          }
        }
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
  MR_Word check_hlds__typeclasses__AssumedCs_1,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
  MR_Word * check_hlds__typeclasses__HeadVar__6_6)
{
  {
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s check_hlds__typeclasses__env;

    (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1 = check_hlds__typeclasses__AssumedCs_1;
    if ((check_hlds__typeclasses__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typeclasses__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2;
      }
    else
      {
        MR_Word check_hlds__typeclasses__Cs_14;
        MR_Word check_hlds__typeclasses__NewCs0_17;
        MR_Word check_hlds__typeclasses__Changed0_18;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;

        (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 0)));
        check_hlds__typeclasses__Cs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 1)));
        {
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__Cs_14, &check_hlds__typeclasses__NewCs0_17, &check_hlds__typeclasses__Changed0_18);
        }
        {
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(&check_hlds__typeclasses__env);
        }
        if ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
          {
            {
              hlds__hlds_data__update_constraint_map_3_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3);
            }
            *check_hlds__typeclasses__HeadVar__5_5 = check_hlds__typeclasses__NewCs0_17;
            *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 1;
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__typeclasses__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__NewCs0_17));
            }
            *check_hlds__typeclasses__HeadVar__6_6 = check_hlds__typeclasses__Changed0_18;
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;
          }
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
  MR_Word check_hlds__typeclasses__Constraint_9,
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_11,
  MR_Word check_hlds__typeclasses__FunDep_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__ConstraintTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__Domain_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__Range_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses___Ids_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses___ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_17_60;
    MR_Word check_hlds__typeclasses__Subst_20;
    MR_Word check_hlds__typeclasses__InstanceTypes_21;
    MR_Word check_hlds__typeclasses__RTypesA_34;
    MR_Word check_hlds__typeclasses__RTypesB_35;
    MR_Word check_hlds__typeclasses__RTypesBVars_36;
    MR_Word check_hlds__typeclasses__Subst0_37;
    MR_Word check_hlds__typeclasses__RTypesA_57;
    MR_Word check_hlds__typeclasses__RTypesB_58;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_48;
    MR_Word check_hlds__typeclasses__TypeInfo_14_49;
    MR_Word check_hlds__typeclasses__RTypesA_44;
    MR_Word check_hlds__typeclasses__RTypesB_45;
    MR_Word check_hlds__typeclasses__RTypesBVars_46;
    MR_Word check_hlds__typeclasses__Subst0_47;
    MR_Word check_hlds__typeclasses__V_22_22;

    {
      check_hlds__typeclasses__RTypesA_34 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__InstanceTypes0_10);
    }
    {
      check_hlds__typeclasses__RTypesB_35 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__ConstraintTypes_17);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_35, &check_hlds__typeclasses__RTypesBVars_36);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], check_hlds__typeclasses__TypeCtorInfo_13_38, &check_hlds__typeclasses__Subst0_37);
    }
    {
      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_34, check_hlds__typeclasses__RTypesB_35, check_hlds__typeclasses__RTypesBVars_36, check_hlds__typeclasses__Subst0_37, &check_hlds__typeclasses__Subst_20);
    }
    if (check_hlds__typeclasses__succeeded)
      {
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typeclasses__Subst_20, check_hlds__typeclasses__InstanceTypes0_10, &check_hlds__typeclasses__InstanceTypes_21);
        }
        check_hlds__typeclasses__TypeCtorInfo_13_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          check_hlds__typeclasses__RTypesA_44 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
        }
        {
          check_hlds__typeclasses__RTypesB_45 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
        }
        {
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_45, &check_hlds__typeclasses__RTypesBVars_46);
        }
        check_hlds__typeclasses__TypeInfo_14_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[3];
        {
          mercury__map__init_1_p_0(check_hlds__typeclasses__TypeInfo_14_49, check_hlds__typeclasses__TypeCtorInfo_13_48, &check_hlds__typeclasses__Subst0_47);
        }
        {
          check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_44, check_hlds__typeclasses__RTypesB_45, check_hlds__typeclasses__RTypesBVars_46, check_hlds__typeclasses__Subst0_47, &check_hlds__typeclasses__V_22_22);
        }
        check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
        if (check_hlds__typeclasses__succeeded)
          {
            check_hlds__typeclasses__TypeCtorInfo_17_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            {
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
            }
            {
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
            }
            {
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_57, check_hlds__typeclasses__RTypesB_58, check_hlds__typeclasses__ExternalTypeParams_11, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27);
            }
          }
      }
    if (check_hlds__typeclasses__succeeded)
      {
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = (MR_Integer) 1;
      }
    else
      {
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25;
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23;
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24;
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26;

    {
      check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
  MR_Word check_hlds__typeclasses__FunDeps_9,
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_11,
  MR_Word check_hlds__typeclasses__Constraint_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__V_19_19;
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16;
    MR_Box check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18;

    {
      check_hlds__typeclasses__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 3) = ((MR_Box) (check_hlds__typeclasses__Constraint_12));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_10));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 5) = ((MR_Box) (check_hlds__typeclasses__ExternalTypeParams_11));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_19_19, check_hlds__typeclasses__FunDeps_9, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17)), &check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
    }
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_16 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16);
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_18 = ((MR_Word) check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16;
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18;

    {
      check_hlds__typeclasses__do_instance_improvement_4_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
  MR_Word check_hlds__typeclasses__Constraints_11,
  MR_Word check_hlds__typeclasses__FunDeps_12,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_13,
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__InstanceTVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 8)));
    MR_Word check_hlds__typeclasses__InstanceTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__NewTVarSet_20;
    MR_Word check_hlds__typeclasses__Renaming_21;
    MR_Word check_hlds__typeclasses__InstanceTypes_22;
    MR_Word check_hlds__typeclasses__Changed0_23;
    MR_Word check_hlds__typeclasses__V_30_30;
    MR_Word check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 3)));
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 4)));
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 5)));
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 6)));
    MR_Word check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 7)));
    MR_Word check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 9)));
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27;
    MR_Box check_hlds__typeclasses__conv2_Changed0_23;

    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24, check_hlds__typeclasses__InstanceTVarSet_18, &check_hlds__typeclasses__NewTVarSet_20, &check_hlds__typeclasses__Renaming_21);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_21, check_hlds__typeclasses__InstanceTypes0_19, &check_hlds__typeclasses__InstanceTypes_22);
    }
    {
      check_hlds__typeclasses__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 3) = ((MR_Box) (check_hlds__typeclasses__FunDeps_12));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_22));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 5) = ((MR_Box) (check_hlds__typeclasses__ExternalTypeParams_13));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_30_30, check_hlds__typeclasses__Constraints_11, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed0_23);
    }
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_27 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27);
    check_hlds__typeclasses__Changed0_23 = ((MR_Word) check_hlds__typeclasses__conv2_Changed0_23);
    switch (check_hlds__typeclasses__Changed0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24;
          *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__NewTVarSet_20;
          *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25;
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27;
    MR_Word check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29;

    {
      check_hlds__typeclasses__do_instance_improvement_3_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27));
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29));
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_12,
  MR_Word check_hlds__typeclasses__InstanceTable_13,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_14,
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
  MR_Word check_hlds__typeclasses__ClassId_16,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word check_hlds__typeclasses__ClassDefn_20;
    MR_Word check_hlds__typeclasses__FunDeps_21;
    MR_Word check_hlds__typeclasses__InstanceDefns_22;
    MR_Word check_hlds__typeclasses__ConstraintSet_23;
    MR_Word check_hlds__typeclasses__ConstraintList_24;
    MR_Word check_hlds__typeclasses__V_31_31;
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_20;
    MR_Word check_hlds__typeclasses__V_35_35;
    MR_Word check_hlds__typeclasses__V_36_36;
    MR_Word check_hlds__typeclasses__V_37_37;
    MR_Word check_hlds__typeclasses__V_38_38;
    MR_Word check_hlds__typeclasses__V_39_39;
    MR_Word check_hlds__typeclasses__V_40_40;
    MR_Word check_hlds__typeclasses__V_41_41;
    MR_Word check_hlds__typeclasses__V_42_42;
    MR_Word check_hlds__typeclasses__V_43_43;
    MR_Box check_hlds__typeclasses__conv1_InstanceDefns_22;
    MR_Box check_hlds__typeclasses__conv2_ConstraintSet_23;
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26;
    MR_Box check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28;
    MR_Box check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30;

    {
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_12, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv0_ClassDefn_20);
    }
    check_hlds__typeclasses__ClassDefn_20 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_20);
    check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 0)));
    check_hlds__typeclasses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 1)));
    check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 2)));
    check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 3)));
    check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 4)));
    check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 5)));
    check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 6)));
    check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 7)));
    check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 8)));
    check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 9)));
    {
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_13, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv1_InstanceDefns_22);
    }
    check_hlds__typeclasses__InstanceDefns_22 = ((MR_Word) check_hlds__typeclasses__conv1_InstanceDefns_22);
    {
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_15, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv2_ConstraintSet_23);
    }
    check_hlds__typeclasses__ConstraintSet_23 = ((MR_Word) check_hlds__typeclasses__conv2_ConstraintSet_23);
    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_23, &check_hlds__typeclasses__ConstraintList_24);
    }
    {
      check_hlds__typeclasses__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 3) = ((MR_Box) (check_hlds__typeclasses__ConstraintList_24));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 4) = ((MR_Box) (check_hlds__typeclasses__FunDeps_21));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 5) = ((MR_Box) (check_hlds__typeclasses__ExternalTypeParams_14));
    }
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_31_31, check_hlds__typeclasses__InstanceDefns_22, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27)), &check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29)), &check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
    }
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26);
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_28 = ((MR_Word) check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28);
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_30 = ((MR_Word) check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
  }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
  MR_Word check_hlds__typeclasses__ConstraintA_1,
  MR_Word check_hlds__typeclasses__ConstraintB_2,
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;

        if ((check_hlds__typeclasses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
          }
        else
          {
            MR_Word check_hlds__typeclasses__FunDep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;
            MR_Word check_hlds__typeclasses__TypesA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 2)));
            MR_Word check_hlds__typeclasses__TypesB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 2)));
            MR_Word check_hlds__typeclasses__Domain_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Range_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses___IdsA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses___ClassNameA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses___IdsB_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses___ClassNameB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            MR_Word check_hlds__typeclasses__TypeCtorInfo_17_78;
            MR_Word check_hlds__typeclasses__RTypesA_57;
            MR_Word check_hlds__typeclasses__RTypesB_58;
            MR_Word check_hlds__typeclasses__RTypesA_75;
            MR_Word check_hlds__typeclasses__RTypesB_76;
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_66;
            MR_Word check_hlds__typeclasses__TypeInfo_10_67;
            MR_Word check_hlds__typeclasses__RTypesA_64;
            MR_Word check_hlds__typeclasses__RTypesB_65;

            {
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesA_45);
            }
            {
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesB_48);
            }
            {
              check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[6], ((MR_Box) (check_hlds__typeclasses__RTypesA_57)), ((MR_Box) (check_hlds__typeclasses__RTypesB_58)));
            }
            if (check_hlds__typeclasses__succeeded)
              {
                check_hlds__typeclasses__TypeCtorInfo_9_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                {
                  check_hlds__typeclasses__RTypesA_64 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                }
                {
                  check_hlds__typeclasses__RTypesB_65 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                }
                check_hlds__typeclasses__TypeInfo_10_67 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
                {
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_10_67, ((MR_Box) (check_hlds__typeclasses__RTypesA_64)), ((MR_Box) (check_hlds__typeclasses__RTypesB_65)));
                }
                check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
                if (check_hlds__typeclasses__succeeded)
                  {
                    check_hlds__typeclasses__TypeCtorInfo_17_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    {
                      check_hlds__typeclasses__RTypesA_75 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                    }
                    {
                      check_hlds__typeclasses__RTypesB_76 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                    }
                    {
                      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_75, check_hlds__typeclasses__RTypesB_76, check_hlds__typeclasses__ExternalTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51);
                    }
                  }
              }
            if (check_hlds__typeclasses__succeeded)
              {
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = (MR_Integer) 1;
              }
            else
              {
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__typeclasses__HeadVar__3__tmp_copy_3 = check_hlds__typeclasses__FunDeps_21;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
              check_hlds__typeclasses__HeadVar__3_3 = check_hlds__typeclasses__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
  MR_Word check_hlds__typeclasses__Constraint_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word check_hlds__typeclasses__FunDeps_3,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_4,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;

        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
          }
        else
          {
            MR_Word check_hlds__typeclasses__HeadConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__TailConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

            {
              check_hlds__typeclasses__do_class_improvement_pair_8_p_0(check_hlds__typeclasses__Constraint_1, check_hlds__typeclasses__HeadConstraint_19, check_hlds__typeclasses__FunDeps_3, check_hlds__typeclasses__ExternalTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7, &check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__TailConstraints_20;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Word check_hlds__typeclasses__FunDeps_2,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_3,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;

        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6;
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4;
          }
        else
          {
            MR_Word check_hlds__typeclasses__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

            {
              check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(check_hlds__typeclasses__Constraint_16, check_hlds__typeclasses__Constraints_17, check_hlds__typeclasses__FunDeps_2, check_hlds__typeclasses__ExternalTypeParams_3, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6, &check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_17;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6;
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4;
              check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_9,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_10,
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
  MR_Word check_hlds__typeclasses__ClassId_12,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word check_hlds__typeclasses__ClassDefn_15;
    MR_Word check_hlds__typeclasses__FunDeps_16;
    MR_Word check_hlds__typeclasses__ConstraintSet_17;
    MR_Word check_hlds__typeclasses__ConstraintList_18;
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_15;
    MR_Word check_hlds__typeclasses__V_25_25;
    MR_Word check_hlds__typeclasses__V_26_26;
    MR_Word check_hlds__typeclasses__V_27_27;
    MR_Word check_hlds__typeclasses__V_28_28;
    MR_Word check_hlds__typeclasses__V_29_29;
    MR_Word check_hlds__typeclasses__V_30_30;
    MR_Word check_hlds__typeclasses__V_31_31;
    MR_Word check_hlds__typeclasses__V_32_32;
    MR_Word check_hlds__typeclasses__V_33_33;
    MR_Box check_hlds__typeclasses__conv1_ConstraintSet_17;

    {
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_9, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv0_ClassDefn_15);
    }
    check_hlds__typeclasses__ClassDefn_15 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_15);
    check_hlds__typeclasses__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 0)));
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 1)));
    check_hlds__typeclasses__FunDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 2)));
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 3)));
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 4)));
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 5)));
    check_hlds__typeclasses__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 6)));
    check_hlds__typeclasses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 7)));
    check_hlds__typeclasses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 8)));
    check_hlds__typeclasses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 9)));
    {
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_11, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv1_ConstraintSet_17);
    }
    check_hlds__typeclasses__ConstraintSet_17 = ((MR_Word) check_hlds__typeclasses__conv1_ConstraintSet_17);
    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_17, &check_hlds__typeclasses__ConstraintList_18);
    }
    {
      check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(check_hlds__typeclasses__ConstraintList_18, check_hlds__typeclasses__FunDeps_16, check_hlds__typeclasses__ExternalTypeParams_10, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19, check_hlds__typeclasses__STATE_VARIABLE_Bindings_20, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21, check_hlds__typeclasses__STATE_VARIABLE_Changed_22);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26;
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28;
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30;

    {
      check_hlds__typeclasses__do_instance_improvement_2_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28));
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30));
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20;
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22;

    {
      check_hlds__typeclasses__do_class_improvement_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22));
  }
}

static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_10,
  MR_Word check_hlds__typeclasses__InstanceTable_11,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_12,
  MR_Word check_hlds__typeclasses__Constraints_13,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
  MR_Word * check_hlds__typeclasses__Changed_16)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_22_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_30_70;
    MR_Word check_hlds__typeclasses__Changed1_17;
    MR_Word check_hlds__typeclasses__Changed2_18;
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23;
    MR_Word check_hlds__typeclasses__Redundant_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__ClassIds_34;
    MR_Word check_hlds__typeclasses__V_35_35;
    MR_Word check_hlds__typeclasses__RedundantConstraints_61;
    MR_Word check_hlds__typeclasses__ClassIds_62;
    MR_Word check_hlds__typeclasses__V_63_63;
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23;
    MR_Box check_hlds__typeclasses__conv2_Changed1_17;
    MR_Word check_hlds__typeclasses__V_67_67;
    MR_Word check_hlds__typeclasses__V_68_68;
    MR_Word check_hlds__typeclasses__V_69_69;
    MR_Box check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20;
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22;
    MR_Box check_hlds__typeclasses__conv7_Changed2_18;

    {
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__Redundant_33, &check_hlds__typeclasses__ClassIds_34);
    }
    {
      check_hlds__typeclasses__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 4) = ((MR_Box) (check_hlds__typeclasses__ExternalTypeParams_12));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 5) = ((MR_Box) (check_hlds__typeclasses__Redundant_33));
    }
    {
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_35_35, check_hlds__typeclasses__ClassIds_34, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed1_17);
    }
    check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23);
    check_hlds__typeclasses__Changed1_17 = ((MR_Word) check_hlds__typeclasses__conv2_Changed1_17);
    check_hlds__typeclasses__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
    check_hlds__typeclasses__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
    check_hlds__typeclasses__RedundantConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
    check_hlds__typeclasses__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
    check_hlds__typeclasses__TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    {
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_61, &check_hlds__typeclasses__ClassIds_62);
    }
    {
      check_hlds__typeclasses__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_11));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 5) = ((MR_Box) (check_hlds__typeclasses__ExternalTypeParams_12));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 6) = ((MR_Box) (check_hlds__typeclasses__RedundantConstraints_61));
    }
    {
      mercury__list__foldl3_8_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_63_63, check_hlds__typeclasses__ClassIds_62, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19)), &check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv7_Changed2_18);
    }
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20 = ((MR_Word) check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20);
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_22 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22);
    check_hlds__typeclasses__Changed2_18 = ((MR_Word) check_hlds__typeclasses__conv7_Changed2_18);
    {
      *check_hlds__typeclasses__Changed_16 = mercury__bool__or_2_f_0(check_hlds__typeclasses__Changed1_17, check_hlds__typeclasses__Changed2_18);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
  MR_Word check_hlds__typeclasses__C0_1,
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
  MR_Word * check_hlds__typeclasses__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;

        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__typeclasses__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word check_hlds__typeclasses__C1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__C_10;
            MR_Word check_hlds__typeclasses__TypeCtorInfo_13_21;
            MR_Word check_hlds__typeclasses__TypeInfo_17_25;
            MR_Word check_hlds__typeclasses__IdsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 2)));
            MR_Word check_hlds__typeclasses__IdsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Ids0_19;
            MR_Word check_hlds__typeclasses__Ids_20;
            MR_Word check_hlds__typeclasses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 2)));

            {
              check_hlds__typeclasses__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typeclasses__ClassName_16, check_hlds__typeclasses__V_22_22);
            }
            if (check_hlds__typeclasses__succeeded)
              {
                check_hlds__typeclasses__TypeInfo_17_25 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
                {
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_17_25, ((MR_Box) (check_hlds__typeclasses__ArgTypes_17)), ((MR_Box) (check_hlds__typeclasses__V_23_23)));
                }
                if (check_hlds__typeclasses__succeeded)
                  {
                    check_hlds__typeclasses__TypeCtorInfo_13_21 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
                    {
                      mercury__list__append_3_p_1(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__IdsA_15, check_hlds__typeclasses__IdsB_18, &check_hlds__typeclasses__Ids0_19);
                    }
                    {
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__Ids0_19, &check_hlds__typeclasses__Ids_20);
                    }
                    {
                      check_hlds__typeclasses__C_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 0) = ((MR_Box) (check_hlds__typeclasses__Ids_20));
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 1) = ((MR_Box) (check_hlds__typeclasses__ClassName_16));
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 2) = ((MR_Box) (check_hlds__typeclasses__ArgTypes_17));
                    }
                    check_hlds__typeclasses__succeeded = MR_TRUE;
                  }
              }
            if (check_hlds__typeclasses__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__typeclasses__C0__tmp_copy_1 = check_hlds__typeclasses__C_10;
                  MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Cs_8;

                  check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
                  check_hlds__typeclasses__C0_1 = check_hlds__typeclasses__C0__tmp_copy_1;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__typeclasses__Constraints0_11;

                {
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C1_7, check_hlds__typeclasses__Cs_8, &check_hlds__typeclasses__Constraints0_11);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__typeclasses__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__Constraints0_11));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv0_HeadVar__3_3;

    {
      hlds__hlds_data__compare_hlds_constraints_3_p_0(((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv0_HeadVar__3_3);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_16,
  MR_Word check_hlds__typeclasses__InstanceTable_17,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_18,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__typeclasses__succeeded;
        MR_Word check_hlds__typeclasses__AppliedImprovementRule_25;
        MR_Word check_hlds__typeclasses__EliminatedAssumed_26;
        MR_Word check_hlds__typeclasses__AppliedInstanceRule_27;
        MR_Word check_hlds__typeclasses__AppliedClassRule_28;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
        MR_Word check_hlds__typeclasses__Unproven0_69;
        MR_Word check_hlds__typeclasses__Assumed_70;
        MR_Word check_hlds__typeclasses__Redundant_71;
        MR_Word check_hlds__typeclasses__Ancestors_72;
        MR_Word check_hlds__typeclasses__Unproven_73;

        {
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41);
        }
        {
          check_hlds__typeclasses__apply_improvement_rules_9_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__ExternalTypeParams_18, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, &check_hlds__typeclasses__AppliedImprovementRule_25);
        }
        switch (check_hlds__typeclasses__AppliedImprovementRule_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
            break;
          case (MR_Integer) 1:
            {
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44);
            }
            break;
        }
        check_hlds__typeclasses__Unproven0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 0)));
        check_hlds__typeclasses__Assumed_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 1)));
        check_hlds__typeclasses__Redundant_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 2)));
        check_hlds__typeclasses__Ancestors_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 3)));
        {
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(check_hlds__typeclasses__Assumed_70, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, check_hlds__typeclasses__Unproven0_69, &check_hlds__typeclasses__Unproven_73, &check_hlds__typeclasses__EliminatedAssumed_26);
        }
        {
          check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_73));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_70));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_71));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_72));
        }
        {
          check_hlds__typeclasses__apply_instance_rules_13_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39, &check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50, check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__AppliedInstanceRule_27);
        }
        {
          check_hlds__typeclasses__apply_class_rules_7_p_0(check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53, check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, &check_hlds__typeclasses__AppliedClassRule_28);
        }
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedImprovementRule_25 == (MR_Integer) 0);
        if (check_hlds__typeclasses__succeeded)
          {
            check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__EliminatedAssumed_26 == (MR_Integer) 0);
            if (check_hlds__typeclasses__succeeded)
              {
                check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedInstanceRule_27 == (MR_Integer) 0);
                if (check_hlds__typeclasses__succeeded)
                  check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedClassRule_28 == (MR_Integer) 0);
              }
          }
        if (check_hlds__typeclasses__succeeded)
          {
            MR_Word check_hlds__typeclasses__Unproven0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Unproven1_80;
            MR_Word check_hlds__typeclasses__Unproven_81;
            MR_Word check_hlds__typeclasses__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
            MR_Word check_hlds__typeclasses__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
            MR_Word check_hlds__typeclasses__V_88_88;
            MR_Word check_hlds__typeclasses__V_89_89;
            MR_Word check_hlds__typeclasses__V_90_90;
            MR_Word check_hlds__typeclasses__V_87_87;

            {
              mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[1], check_hlds__typeclasses__Unproven0_79, &check_hlds__typeclasses__Unproven1_80);
            }
            if ((check_hlds__typeclasses__Unproven1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              check_hlds__typeclasses__Unproven_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word check_hlds__typeclasses__C_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 0)));
                MR_Word check_hlds__typeclasses__Cs_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 1)));

                {
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C_95, check_hlds__typeclasses__Cs_96, &check_hlds__typeclasses__Unproven_81);
                }
              }
            check_hlds__typeclasses__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
            check_hlds__typeclasses__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
            check_hlds__typeclasses__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
            check_hlds__typeclasses__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__typeclasses__STATE_VARIABLE_Constraints_38 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_81));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_88_88));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_89_89));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_90_90));
            }
            *check_hlds__typeclasses__STATE_VARIABLE_Seen_40 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
            *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
            *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_30 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
          }
        else
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_33 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;

              check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39;
              check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37;
              check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35;
              check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_33;
              check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31;
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    {
      {
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], ((MR_Box) ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11)), (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2);
      }
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded);
      if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
        {
          check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(check_hlds__typeclasses__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
  void * check_hlds__typeclasses__env_ptr_arg)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0) == 0)
      {
        {
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11, check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2, check_hlds__typeclasses__env_ptr);
        }
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_2)
{
  {
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s check_hlds__typeclasses__env;

    (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ExternalTypeParams_2 = check_hlds__typeclasses__ExternalTypeParams_2;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__typeclasses__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__typeclasses___Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 0)));
            MR_Word check_hlds__typeclasses___ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 1)));

            (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 2)));
            {
              check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(&check_hlds__typeclasses__env);
            }
            if ((check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_5;

                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
        break;
      }
  }
}

static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_8,
  MR_Word check_hlds__typeclasses__InstanceTable_9,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__Constraints0_13;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_46_46;
    MR_Word check_hlds__typeclasses__TypeInfo_47_47;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_48_48;
    MR_Word check_hlds__typeclasses__TypeInfo_49_49;
    MR_Word check_hlds__typeclasses__Unproven0_14;
    MR_Word check_hlds__typeclasses__Assumed0_15;
    MR_Word check_hlds__typeclasses__Redundant0_16;
    MR_Word check_hlds__typeclasses__Ancestors0_17;

    {
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Constraints0_13);
    }
    check_hlds__typeclasses__Unproven0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
    check_hlds__typeclasses__Assumed0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
    check_hlds__typeclasses__Redundant0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
    check_hlds__typeclasses__Ancestors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
    check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Unproven0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__typeclasses__succeeded)
      {
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Assumed0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__typeclasses__succeeded)
          {
            check_hlds__typeclasses__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
            check_hlds__typeclasses__TypeInfo_47_47 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[1];
            {
              check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_46_46, check_hlds__typeclasses__TypeInfo_47_47, check_hlds__typeclasses__Redundant0_16);
            }
            if (check_hlds__typeclasses__succeeded)
              {
                check_hlds__typeclasses__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                check_hlds__typeclasses__TypeInfo_49_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[2];
                {
                  check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_48_48, check_hlds__typeclasses__TypeInfo_49_49, check_hlds__typeclasses__Ancestors0_17);
                }
              }
          }
      }
    if (check_hlds__typeclasses__succeeded)
      {
        MR_Word check_hlds__typeclasses__V_35_35;

        {
          check_hlds__typeclasses__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29));
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_35_35);
        }
        *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
      }
    else
      {
        MR_Word check_hlds__typeclasses__ExternalTypeParams_18;
        MR_Word check_hlds__typeclasses__TVarSet0_19;
        MR_Word check_hlds__typeclasses__Bindings0_20;
        MR_Word check_hlds__typeclasses__ProofMap0_21;
        MR_Word check_hlds__typeclasses__ConstraintMap0_22;
        MR_Word check_hlds__typeclasses__Bindings_23;
        MR_Word check_hlds__typeclasses__TVarSet_24;
        MR_Word check_hlds__typeclasses__ProofMap_25;
        MR_Word check_hlds__typeclasses__ConstraintMap_26;
        MR_Word check_hlds__typeclasses__Constraints_27;
        MR_Word check_hlds__typeclasses__Unproven_28;
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42;
        MR_Word check_hlds__typeclasses__V_76_76;
        MR_Word check_hlds__typeclasses__V_77_77;
        MR_Word check_hlds__typeclasses__V_78_78;
        MR_Word check_hlds__typeclasses__V_79_79;
        MR_Word check_hlds__typeclasses__V_70_70;
        MR_Word check_hlds__typeclasses__V_43_43;
        MR_Word check_hlds__typeclasses__V_44_44;
        MR_Word check_hlds__typeclasses__V_45_45;

        {
          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ExternalTypeParams_18);
        }
        {
          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__TVarSet0_19);
        }
        {
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Bindings0_20);
        }
        {
          check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ProofMap0_21);
        }
        {
          check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ConstraintMap0_22);
        }
        check_hlds__typeclasses__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
        check_hlds__typeclasses__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
        check_hlds__typeclasses__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
        check_hlds__typeclasses__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
        {
          check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_8, check_hlds__typeclasses__InstanceTable_9, check_hlds__typeclasses__ExternalTypeParams_18, check_hlds__typeclasses__Bindings0_20, &check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__TVarSet0_19, &check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__ProofMap0_21, &check_hlds__typeclasses__ProofMap_25, check_hlds__typeclasses__ConstraintMap0_22, &check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__Constraints0_13, &check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__V_76_76, &check_hlds__typeclasses__V_70_70);
        }
        {
          check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__ProofMap_25, check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42);
        }
        check_hlds__typeclasses__Unproven_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 0)));
        check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 1)));
        check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 2)));
        check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 3)));
        {
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(check_hlds__typeclasses__Unproven_28, check_hlds__typeclasses__ExternalTypeParams_18);
        }
        if (check_hlds__typeclasses__succeeded)
          {
            MR_Word check_hlds__typeclasses__V_39_39;

            {
              check_hlds__typeclasses__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_39_39);
            }
            *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32));
            }
            *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30;
          }
      }
  }
}

void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(
  MR_Word check_hlds__typeclasses__ClassTable_14,
  MR_Word check_hlds__typeclasses__InstanceTable_15,
  MR_Word check_hlds__typeclasses__ExternalTypeParams_16,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_27,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_28,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_32)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 0)));
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 1)));
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 2)));
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 3)));
    MR_Word check_hlds__typeclasses__V_22_22;

    {
      check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__ExternalTypeParams_16, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, check_hlds__typeclasses__STATE_VARIABLE_Bindings_24, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_27, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_28, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, check_hlds__typeclasses__STATE_VARIABLE_Constraints_32, check_hlds__typeclasses__V_38_38, &check_hlds__typeclasses__V_22_22);
    }
  }
}

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box * check_hlds__typeclasses__wrapper_arg_2)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv4_LambdaHeadVar__2_37;

    {
      check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), &check_hlds__typeclasses__conv4_LambdaHeadVar__2_37);
    }
    *check_hlds__typeclasses__wrapper_arg_2 = ((MR_Box) (check_hlds__typeclasses__conv4_LambdaHeadVar__2_37));
  }
}

static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
  MR_Box check_hlds__typeclasses__closure_arg,
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
{
  {
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31;
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33;

    {
      check_hlds__typeclasses__reduce_type_assign_context_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33);
    }
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31));
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33));
  }
}

void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0(
  MR_Word check_hlds__typeclasses__Context_6,
  MR_Word check_hlds__typeclasses__TypeAssignSet0_7,
  MR_Word * check_hlds__typeclasses__TypeAssignSet_8,
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Info_0_27,
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Info_28)
{
  {
    MR_bool check_hlds__typeclasses__succeeded;
    MR_Word check_hlds__typeclasses__TypeCtorInfo_60_60;
    MR_Word check_hlds__typeclasses__TypeInfo_61_61;
    MR_Word check_hlds__typeclasses__ClauseContext_10;
    MR_Word check_hlds__typeclasses__ModuleInfo_11;
    MR_Word check_hlds__typeclasses__ClassTable_14;
    MR_Word check_hlds__typeclasses__InstanceTable_15;
    MR_Word check_hlds__typeclasses__TypeAssignSet1_16;
    MR_Word check_hlds__typeclasses__UnsatTypeAssignSet_17;
    MR_Word check_hlds__typeclasses__V_32_32;
    MR_Word check_hlds__typeclasses__V_42_42;
    MR_Word check_hlds__typeclasses__V_43_43;
    MR_Integer check_hlds__typeclasses__V_44_44;
    MR_Word check_hlds__typeclasses__V_45_45;
    MR_Word check_hlds__typeclasses__V_46_46;
    MR_Box check_hlds__typeclasses__conv3_TypeAssignSet1_16;
    MR_Box check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17;
    MR_Word check_hlds__typeclasses__V_18_18;
    MR_Word check_hlds__typeclasses__V_19_19;

    {
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_Info_0_27, &check_hlds__typeclasses__ClauseContext_10);
    }
    check_hlds__typeclasses__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 0)));
    check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 1)));
    check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 2)));
    check_hlds__typeclasses__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 3)));
    check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 4)));
    check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 5)));
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typeclasses__ModuleInfo_11, &check_hlds__typeclasses__ClassTable_14);
    }
    {
      hlds__hlds_module__module_info_get_instance_table_2_p_0(check_hlds__typeclasses__ModuleInfo_11, &check_hlds__typeclasses__InstanceTable_15);
    }
    {
      check_hlds__typeclasses__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_14));
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_15));
    }
    check_hlds__typeclasses__TypeCtorInfo_60_60 = (MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0;
    check_hlds__typeclasses__TypeInfo_61_61 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[0];
    {
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__TypeInfo_61_61, check_hlds__typeclasses__TypeInfo_61_61, check_hlds__typeclasses__V_32_32, check_hlds__typeclasses__TypeAssignSet0_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv3_TypeAssignSet1_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17);
    }
    check_hlds__typeclasses__TypeAssignSet1_16 = ((MR_Word) check_hlds__typeclasses__conv3_TypeAssignSet1_16);
    check_hlds__typeclasses__UnsatTypeAssignSet_17 = ((MR_Word) check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17);
    check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__TypeAssignSet0_7)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typeclasses__succeeded)
      {
        check_hlds__typeclasses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_7, (MR_Integer) 0)));
        check_hlds__typeclasses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_7, (MR_Integer) 1)));
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__typeclasses__succeeded)
      {
        MR_Word check_hlds__typeclasses__Spec_20;
        MR_Word check_hlds__typeclasses__DeleteConstraints_21;

        {
          check_hlds__typeclasses__Spec_20 = check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(check_hlds__typeclasses__ClauseContext_10, check_hlds__typeclasses__Context_6, check_hlds__typeclasses__UnsatTypeAssignSet_17);
        }
        {
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typeclasses__Spec_20, check_hlds__typeclasses__STATE_VARIABLE_Info_0_27, check_hlds__typeclasses__STATE_VARIABLE_Info_28);
        }
        {
          check_hlds__typeclasses__DeleteConstraints_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_14));
        }
        {
          mercury__list__map_3_p_0(check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__DeleteConstraints_21, check_hlds__typeclasses__TypeAssignSet0_7, check_hlds__typeclasses__TypeAssignSet_8);
        }
      }
    else
      {
        *check_hlds__typeclasses__TypeAssignSet_8 = check_hlds__typeclasses__TypeAssignSet1_16;
        *check_hlds__typeclasses__STATE_VARIABLE_Info_28 = check_hlds__typeclasses__STATE_VARIABLE_Info_0_27;
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

/* :- end_module check_hlds.typeclasses. */
