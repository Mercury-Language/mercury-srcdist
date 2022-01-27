/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version DEV
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 652 "typeclasses.m"
struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s {
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3;
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4;
#line 656 "typeclasses.m"
  MR_bool check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
#line 657 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0;
#line 657 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6;
#line 657 "typeclasses.m"
  MR_Box check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6;
#line 652 "typeclasses.m"
};

#line 571 "typeclasses.m"
struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s {
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1;
#line 576 "typeclasses.m"
  MR_bool check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded;
#line 578 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13;
#line 583 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0;
#line 583 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24;
#line 583 "typeclasses.m"
  MR_Box check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24;
#line 571 "typeclasses.m"
};

#line 211 "typeclasses.m"
struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s {
#line 211 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2;
#line 214 "typeclasses.m"
  MR_bool check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
#line 215 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9;
#line 218 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0;
#line 218 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11;
#line 211 "typeclasses.m"
};


#line 190 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 193 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 196 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 199 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

#line 202 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 208 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 211 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 214 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 217 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 220 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 223 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;

#line 226 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 126 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(
#line 126 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 126 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_36,
#line 126 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_37);

#line 750 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3,
#line 750 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4);

#line 727 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Ancestors_1,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__8_8);

#line 717 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18,
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_11);

#line 682 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 682 "typeclasses.m"
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_15);

#line 671 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Instances_8,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_12);

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 652 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Seen_3,
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_4);

#line 634 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
#line 634 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 634 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1);

#line 611 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_1,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_2,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__15_15);

#line 595 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_21);

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 571 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__AssumedCs_1,
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__6_6);

#line 495 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDep_12,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 495 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
#line 495 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26);

#line 491 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 491 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 491 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 484 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_9,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
#line 484 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
#line 484 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18);

#line 474 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 474 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 474 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 461 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_11,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_12,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_13,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29);

#line 458 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

#line 445 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_12,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_13,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_14,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_16,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30);

#line 394 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintA_1,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintB_2,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 394 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 394 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

#line 379 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_3,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 379 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 379 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

#line 367 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_2,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_3,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
#line 367 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
#line 367 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7);

#line 344 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_9,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_10,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_12,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
#line 344 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
#line 344 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22);

#line 441 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

#line 341 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 341 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 341 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 318 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_10,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_11,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_12,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_13,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_16);

#line 292 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
#line 292 "typeclasses.m"
  MR_Word check_hlds__typeclasses__C0_1,
#line 292 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 292 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_3);

#line 281 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 281 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3);

#line 229 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_16,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_17,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_18,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40);

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 211 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
#line 211 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 211 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_2);

#line 141 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_8,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_9,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
#line 141 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
#line 141 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33);

#line 126 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
#line 126 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 126 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 126 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_2);

#line 115 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 115 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 115 "typeclasses.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1091 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1100 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1108 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1117 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

#line 1125 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1133 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1141 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1149 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1158 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1167 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1175 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1183 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0
  }
};

#line 1191 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 126 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(
#line 126 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 126 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_36,
#line 126 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_37)
#line 126 "typeclasses.m"
{
#line 126 "typeclasses.m"
  {
#line 126 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 126 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints0_24;
#line 126 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TVarSet_25;
#line 126 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints_26;
#line 126 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39;
#line 132 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_52_52;
#line 132 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_53_53;
#line 132 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_54_54;

#line 130 "typeclasses.m"
    {
#line 130 "typeclasses.m"
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__HeadVar__2_36, &check_hlds__typeclasses__Constraints0_24);
    }
#line 131 "typeclasses.m"
    {
#line 131 "typeclasses.m"
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__HeadVar__2_36, &check_hlds__typeclasses__TVarSet_25);
    }
#line 132 "typeclasses.m"
    check_hlds__typeclasses__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 0)));
#line 132 "typeclasses.m"
    check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 1)));
#line 132 "typeclasses.m"
    check_hlds__typeclasses__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 2)));
#line 132 "typeclasses.m"
    check_hlds__typeclasses__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_24, (MR_Integer) 3)));
#line 132 "typeclasses.m"
    {
#line 132 "typeclasses.m"
      hlds__hlds_data__make_hlds_constraints_5_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__TVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typeclasses__V_39_39, &check_hlds__typeclasses__Constraints_26);
    }
#line 134 "typeclasses.m"
    {
#line 134 "typeclasses.m"
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typeclasses__Constraints_26, check_hlds__typeclasses__HeadVar__2_36, check_hlds__typeclasses__HeadVar__3_37);
#line 134 "typeclasses.m"
      return;
    }
#line 126 "typeclasses.m"
  }
#line 126 "typeclasses.m"
}

#line 750 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 750 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3,
#line 750 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4)
#line 750 "typeclasses.m"
{
#line 753 "typeclasses.m"
  while (MR_TRUE)
#line 753 "typeclasses.m"
    {
#line 753 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 753 "typeclasses.m"
      {
#line 753 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 753 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_4 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3;
#line 753 "typeclasses.m"
        else
#line 754 "typeclasses.m"
          {
#line 754 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Descendant_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 754 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Descendants_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 754 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_15_15;
#line 754 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16;

#line 755 "typeclasses.m"
            {
#line 755 "typeclasses.m"
              check_hlds__typeclasses__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_15_15, 0) = ((MR_Box) (check_hlds__typeclasses__Descendant_10));
#line 755 "typeclasses.m"
            }
#line 755 "typeclasses.m"
            {
#line 755 "typeclasses.m"
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__Constraint_1)), ((MR_Box) (check_hlds__typeclasses__V_15_15)), check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16);
            }
#line 756 "typeclasses.m"
            /* direct tailcall eliminated */
#line 756 "typeclasses.m"
            {
#line 756 "typeclasses.m"
              MR_Word check_hlds__typeclasses__Constraint__tmp_copy_1 = check_hlds__typeclasses__Descendant_10;
#line 756 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Descendants_11;
#line 756 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16_16;

#line 756 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_3;
#line 756 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 756 "typeclasses.m"
              check_hlds__typeclasses__Constraint_1 = check_hlds__typeclasses__Constraint__tmp_copy_1;
#line 756 "typeclasses.m"
            }
#line 756 "typeclasses.m"
            continue;
#line 754 "typeclasses.m"
          }
#line 753 "typeclasses.m"
      }
#line 753 "typeclasses.m"
      break;
#line 753 "typeclasses.m"
    }
#line 750 "typeclasses.m"
}

#line 727 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Ancestors_1,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
#line 727 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
#line 727 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__8_8)
#line 727 "typeclasses.m"
{
#line 732 "typeclasses.m"
  {
#line 732 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 732 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "typeclasses.m"
      {
#line 732 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 0;
#line 732 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4;
#line 732 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2;
#line 732 "typeclasses.m"
      }
#line 732 "typeclasses.m"
    else
#line 734 "typeclasses.m"
      {
#line 734 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 0)));
#line 734 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 1)));
#line 734 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProgConstraint0_23;
#line 744 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Descendants_24;
#line 737 "typeclasses.m"
        MR_Box check_hlds__typeclasses__conv0_Descendants_24;

#line 735 "typeclasses.m"
        {
#line 735 "typeclasses.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint0_19, &check_hlds__typeclasses__ProgConstraint0_23);
        }
#line 737 "typeclasses.m"
        {
#line 737 "typeclasses.m"
          check_hlds__typeclasses__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[2], check_hlds__typeclasses__Ancestors_1, ((MR_Box) (check_hlds__typeclasses__ProgConstraint0_23)), &check_hlds__typeclasses__conv0_Descendants_24);
        }
#line 737 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 737 "typeclasses.m"
          {
#line 737 "typeclasses.m"
            check_hlds__typeclasses__Descendants_24 = ((MR_Word) check_hlds__typeclasses__conv0_Descendants_24);
#line 737 "typeclasses.m"
            check_hlds__typeclasses__succeeded = MR_TRUE;
#line 737 "typeclasses.m"
          }
#line 744 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 739 "typeclasses.m"
          {
#line 739 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31;
#line 739 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32;
#line 741 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_25_25;

#line 739 "typeclasses.m"
            {
#line 739 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__Constraint0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31);
            }
#line 740 "typeclasses.m"
            {
#line 740 "typeclasses.m"
              check_hlds__typeclasses__add_superclass_proofs_4_p_0(check_hlds__typeclasses__ProgConstraint0_23, check_hlds__typeclasses__Descendants_24, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32);
            }
#line 741 "typeclasses.m"
            {
#line 741 "typeclasses.m"
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_32_32, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, check_hlds__typeclasses__HeadVar__7_7, &check_hlds__typeclasses__V_25_25);
            }
#line 743 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 1;
#line 739 "typeclasses.m"
          }
#line 744 "typeclasses.m"
        else
#line 746 "typeclasses.m"
          {
#line 746 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TailConstraints_26;

#line 745 "typeclasses.m"
            {
#line 745 "typeclasses.m"
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_2, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, &check_hlds__typeclasses__TailConstraints_26, check_hlds__typeclasses__HeadVar__8_8);
            }
#line 747 "typeclasses.m"
            {
#line 747 "typeclasses.m"
              MR_Word base;
#line 747 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__7_7 = base;
#line 747 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__Constraint0_19));
#line 747 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__TailConstraints_26));
#line 747 "typeclasses.m"
            }
#line 746 "typeclasses.m"
          }
#line 734 "typeclasses.m"
      }
#line 732 "typeclasses.m"
  }
#line 727 "typeclasses.m"
}

#line 717 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18,
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
#line 717 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
#line 717 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_11)
#line 717 "typeclasses.m"
{
#line 721 "typeclasses.m"
  {
#line 721 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven_16;
#line 722 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
#line 722 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
#line 725 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_27_27;
#line 725 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_28_28;
#line 725 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_29_29;
#line 725 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_26_26;

#line 723 "typeclasses.m"
    {
#line 723 "typeclasses.m"
      check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_15, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_17, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_18, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20, check_hlds__typeclasses__Unproven0_12, &check_hlds__typeclasses__Unproven_16, check_hlds__typeclasses__Changed_11);
    }
#line 725 "typeclasses.m"
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
#line 725 "typeclasses.m"
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
#line 725 "typeclasses.m"
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
#line 725 "typeclasses.m"
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
#line 725 "typeclasses.m"
    {
#line 725 "typeclasses.m"
      MR_Word base;
#line 725 "typeclasses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 725 "typeclasses.m"
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_22 = base;
#line 725 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_16));
#line 725 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_27_27));
#line 725 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_28_28));
#line 725 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_29_29));
#line 725 "typeclasses.m"
    }
#line 721 "typeclasses.m"
  }
#line 717 "typeclasses.m"
}

#line 682 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 682 "typeclasses.m"
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 682 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
#line 682 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_15)
#line 682 "typeclasses.m"
{
#line 688 "typeclasses.m"
  while (MR_TRUE)
#line 688 "typeclasses.m"
    {
#line 688 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 688 "typeclasses.m"
      {
#line 688 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instance_9;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instances_10;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ArgTypes_18;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProgConstraints0_19;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTypes0_20;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTVarSet_21;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewTVarSet_22;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Renaming_23;
#line 688 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTypes_24;
#line 689 "typeclasses.m"
        MR_Word check_hlds__typeclasses___Ids_16;
#line 689 "typeclasses.m"
        MR_Word check_hlds__typeclasses___ClassName_17;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_40_40;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_41_41;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_42_42;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_44_44;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_45_45;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_46_46;
#line 690 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_48_48;
#line 707 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Subst_25;

#line 687 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 687 "typeclasses.m"
          {
#line 687 "typeclasses.m"
            check_hlds__typeclasses__Instance_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 687 "typeclasses.m"
            check_hlds__typeclasses__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 689 "typeclasses.m"
            check_hlds__typeclasses___Ids_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 0)));
#line 689 "typeclasses.m"
            check_hlds__typeclasses___ClassName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 1)));
#line 689 "typeclasses.m"
            check_hlds__typeclasses__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 2)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 0)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 1)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 2)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__ProgConstraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 3)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__InstanceTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 4)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 5)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 6)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 7)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__InstanceTVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 8)));
#line 690 "typeclasses.m"
            check_hlds__typeclasses__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 9)));
#line 693 "typeclasses.m"
            {
#line 693 "typeclasses.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, check_hlds__typeclasses__InstanceTVarSet_21, &check_hlds__typeclasses__NewTVarSet_22, &check_hlds__typeclasses__Renaming_23);
            }
#line 694 "typeclasses.m"
            {
#line 694 "typeclasses.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__InstanceTypes0_20, &check_hlds__typeclasses__InstanceTypes_24);
            }
#line 696 "typeclasses.m"
            {
#line 696 "typeclasses.m"
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typeclasses__InstanceTypes_24, check_hlds__typeclasses__ArgTypes_18, &check_hlds__typeclasses__Subst_25);
            }
#line 707 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 697 "typeclasses.m"
              {
#line 697 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraints1_26;
#line 697 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraints_27;
#line 697 "typeclasses.m"
                MR_Word check_hlds__typeclasses__NewProof_28;
#line 697 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraint_29;

#line 697 "typeclasses.m"
                *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__NewTVarSet_22;
#line 698 "typeclasses.m"
                {
#line 698 "typeclasses.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__ProgConstraints0_19, &check_hlds__typeclasses__ProgConstraints1_26);
                }
#line 700 "typeclasses.m"
                {
#line 700 "typeclasses.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Subst_25, check_hlds__typeclasses__ProgConstraints1_26, &check_hlds__typeclasses__ProgConstraints_27);
                }
#line 702 "typeclasses.m"
                {
#line 702 "typeclasses.m"
                  hlds__hlds_data__init_hlds_constraint_list_2_p_0(check_hlds__typeclasses__ProgConstraints_27, check_hlds__typeclasses__NewConstraints_15);
                }
#line 704 "typeclasses.m"
                {
#line 704 "typeclasses.m"
                  check_hlds__typeclasses__NewProof_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 704 "typeclasses.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typeclasses__NewProof_28, 0) = ((MR_Box) (check_hlds__typeclasses__InstanceNum0_11));
#line 704 "typeclasses.m"
                }
#line 705 "typeclasses.m"
                {
#line 705 "typeclasses.m"
                  hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint_12, &check_hlds__typeclasses__ProgConstraint_29);
                }
#line 706 "typeclasses.m"
                {
#line 706 "typeclasses.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__ProgConstraint_29)), ((MR_Box) (check_hlds__typeclasses__NewProof_28)), check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34);
                }
#line 697 "typeclasses.m"
                check_hlds__typeclasses__succeeded = MR_TRUE;
#line 697 "typeclasses.m"
              }
#line 707 "typeclasses.m"
            else
#line 708 "typeclasses.m"
              {
#line 708 "typeclasses.m"
                MR_Integer check_hlds__typeclasses__InstanceNum_30 = (check_hlds__typeclasses__InstanceNum0_11 + (MR_Integer) 1);

#line 709 "typeclasses.m"
                /* direct tailcall eliminated */
#line 709 "typeclasses.m"
                {
#line 709 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Instances_10;
#line 709 "typeclasses.m"
                  MR_Integer check_hlds__typeclasses__InstanceNum0__tmp_copy_11 = check_hlds__typeclasses__InstanceNum_30;

#line 709 "typeclasses.m"
                  check_hlds__typeclasses__InstanceNum0_11 = check_hlds__typeclasses__InstanceNum0__tmp_copy_11;
#line 709 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 709 "typeclasses.m"
                }
#line 709 "typeclasses.m"
                continue;
#line 708 "typeclasses.m"
              }
#line 687 "typeclasses.m"
          }
#line 688 "typeclasses.m"
        return check_hlds__typeclasses__succeeded;
#line 688 "typeclasses.m"
      }
#line 688 "typeclasses.m"
      break;
#line 688 "typeclasses.m"
    }
#line 682 "typeclasses.m"
}

#line 671 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Instances_8,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
#line 671 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16,
#line 671 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_12)
#line 671 "typeclasses.m"
{
#line 677 "typeclasses.m"
  {
#line 677 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 679 "typeclasses.m"
    {
#line 679 "typeclasses.m"
      return check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(check_hlds__typeclasses__Instances_8, (MR_Integer) 1, check_hlds__typeclasses__Constraint_9, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_15, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_16, check_hlds__typeclasses__NewConstraints_12);
    }
#line 677 "typeclasses.m"
    return check_hlds__typeclasses__succeeded;
#line 677 "typeclasses.m"
  }
#line 671 "typeclasses.m"
}

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 657 "typeclasses.m"
{
#line 657 "typeclasses.m"
  {
#line 657 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 657 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0, 1);
#line 657 "typeclasses.m"
  }
#line 657 "typeclasses.m"
}

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 657 "typeclasses.m"
{
#line 657 "typeclasses.m"
  {
#line 657 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 657 "typeclasses.m"
    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6);
#line 657 "typeclasses.m"
    {
#line 657 "typeclasses.m"
      check_hlds__typeclasses__matches_no_constraint_2_p_0_2(check_hlds__typeclasses__env_ptr);
#line 657 "typeclasses.m"
      return;
    }
#line 657 "typeclasses.m"
  }
#line 657 "typeclasses.m"
}

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 657 "typeclasses.m"
{
#line 657 "typeclasses.m"
  {
#line 657 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 658 "typeclasses.m"
    {
#line 658 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4);
    }
#line 658 "typeclasses.m"
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded)
#line 658 "typeclasses.m"
      {
#line 658 "typeclasses.m"
        check_hlds__typeclasses__matches_no_constraint_2_p_0_1(check_hlds__typeclasses__env_ptr);
#line 658 "typeclasses.m"
        return;
      }
#line 657 "typeclasses.m"
  }
#line 657 "typeclasses.m"
}

#line 657 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
#line 657 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 657 "typeclasses.m"
{
#line 657 "typeclasses.m"
  {
#line 657 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 657 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0) == 0)
#line 657 "typeclasses.m"
      {
#line 657 "typeclasses.m"
        {
#line 657 "typeclasses.m"
          {
#line 657 "typeclasses.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3, check_hlds__typeclasses__matches_no_constraint_2_p_0_3, check_hlds__typeclasses__env_ptr);
          }
#line 657 "typeclasses.m"
        }
#line 657 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 657 "typeclasses.m"
      }
#line 657 "typeclasses.m"
    else
#line 657 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 657 "typeclasses.m"
  }
#line 657 "typeclasses.m"
}

#line 652 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Seen_3,
#line 652 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_4)
#line 652 "typeclasses.m"
{
#line 652 "typeclasses.m"
  {
#line 652 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s check_hlds__typeclasses__env;

#line 652 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3 = check_hlds__typeclasses__Seen_3;
#line 652 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4 = check_hlds__typeclasses__Constraint_4;
#line 657 "typeclasses.m"
    {
#line 657 "typeclasses.m"
      check_hlds__typeclasses__matches_no_constraint_2_p_0_4(&check_hlds__typeclasses__env);
    }
#line 656 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded);
#line 656 "typeclasses.m"
    return (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
#line 652 "typeclasses.m"
  }
#line 652 "typeclasses.m"
}

#line 634 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
#line 634 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 634 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1)
#line 634 "typeclasses.m"
{
#line 634 "typeclasses.m"
  {
#line 634 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 634 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;

#line 634 "typeclasses.m"
    {
#line 634 "typeclasses.m"
      return check_hlds__typeclasses__succeeded = check_hlds__typeclasses__matches_no_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1));
    }
#line 634 "typeclasses.m"
    return check_hlds__typeclasses__succeeded;
#line 634 "typeclasses.m"
  }
#line 634 "typeclasses.m"
}

#line 611 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_1,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_2,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
#line 611 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
#line 611 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__15_15)
#line 611 "typeclasses.m"
{
#line 619 "typeclasses.m"
  {
#line 619 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 619 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "typeclasses.m"
      {
#line 620 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__15_15 = (MR_Integer) 0;
#line 620 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Seen_12 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
#line 619 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Redundant_10 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
#line 619 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
#line 619 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5;
#line 619 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
#line 619 "typeclasses.m"
      }
#line 619 "typeclasses.m"
    else
#line 622 "typeclasses.m"
      {
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__C_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 0)));
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Cs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 1)));
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ClassName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 1)));
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ArgTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 2)));
#line 622 "typeclasses.m"
        MR_Integer check_hlds__typeclasses__Arity_47;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instances_48;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewConstraints_51;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed1_52;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TailConstraints_53;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed2_54;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_65_65;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73;
#line 622 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74;
#line 623 "typeclasses.m"
        MR_Word check_hlds__typeclasses___Ids_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 0)));
#line 625 "typeclasses.m"
        MR_Box check_hlds__typeclasses__conv0_Instances_48;
#line 641 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewConstraints0_50;
#line 641 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
#line 641 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67;

#line 624 "typeclasses.m"
        {
#line 624 "typeclasses.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typeclasses__ArgTypes_46, &check_hlds__typeclasses__Arity_47);
        }
#line 625 "typeclasses.m"
        {
#line 625 "typeclasses.m"
          check_hlds__typeclasses__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 0) = ((MR_Box) (check_hlds__typeclasses__ClassName_45));
#line 625 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 1) = ((MR_Box) (check_hlds__typeclasses__Arity_47));
#line 625 "typeclasses.m"
        }
#line 625 "typeclasses.m"
        {
#line 625 "typeclasses.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_2, ((MR_Box) (check_hlds__typeclasses__V_65_65)), &check_hlds__typeclasses__conv0_Instances_48);
        }
#line 625 "typeclasses.m"
        check_hlds__typeclasses__Instances_48 = ((MR_Word) check_hlds__typeclasses__conv0_Instances_48);
#line 628 "typeclasses.m"
        {
#line 628 "typeclasses.m"
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_7_p_0(check_hlds__typeclasses__Instances_48, check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67, &check_hlds__typeclasses__NewConstraints0_50);
        }
#line 641 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 631 "typeclasses.m"
          {
#line 631 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_84_84;
#line 631 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_69_69;

#line 631 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_67_67;
#line 631 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
#line 631 "typeclasses.m"
            {
#line 631 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68);
            }
#line 634 "typeclasses.m"
            {
#line 634 "typeclasses.m"
              check_hlds__typeclasses__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 634 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_8[0]));
#line 634 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 1) = ((MR_Box) (check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1));
#line 634 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 634 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 3) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11));
#line 634 "typeclasses.m"
            }
#line 2154 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_84_84 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 634 "typeclasses.m"
            {
#line 634 "typeclasses.m"
              mercury__list__filter_3_p_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__V_69_69, check_hlds__typeclasses__NewConstraints0_50, &check_hlds__typeclasses__NewConstraints_51);
            }
#line 636 "typeclasses.m"
            {
#line 636 "typeclasses.m"
              hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9, &check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70);
            }
#line 639 "typeclasses.m"
            {
#line 639 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11);
            }
#line 640 "typeclasses.m"
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 1;
#line 631 "typeclasses.m"
          }
#line 641 "typeclasses.m"
        else
#line 643 "typeclasses.m"
          {
#line 643 "typeclasses.m"
            {
#line 643 "typeclasses.m"
              check_hlds__typeclasses__NewConstraints_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 0) = ((MR_Box) (check_hlds__typeclasses__C_40));
#line 643 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "typeclasses.m"
            }
#line 644 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
#line 645 "typeclasses.m"
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 0;
#line 643 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
#line 643 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
#line 643 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
#line 643 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_5;
#line 643 "typeclasses.m"
          }
#line 647 "typeclasses.m"
        {
#line 647 "typeclasses.m"
          check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__InstanceTable_2, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_74_74, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_6, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8, check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70, check_hlds__typeclasses__STATE_VARIABLE_Redundant_10, check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71, check_hlds__typeclasses__STATE_VARIABLE_Seen_12, check_hlds__typeclasses__Cs_41, &check_hlds__typeclasses__TailConstraints_53, &check_hlds__typeclasses__Changed2_54);
        }
#line 649 "typeclasses.m"
        {
#line 649 "typeclasses.m"
          mercury__bool__or_3_p_0(check_hlds__typeclasses__Changed1_52, check_hlds__typeclasses__Changed2_54, check_hlds__typeclasses__HeadVar__15_15);
        }
#line 650 "typeclasses.m"
        {
#line 650 "typeclasses.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__TailConstraints_53, check_hlds__typeclasses__HeadVar__14_14);
#line 650 "typeclasses.m"
          return;
        }
#line 622 "typeclasses.m"
      }
#line 619 "typeclasses.m"
  }
#line 611 "typeclasses.m"
}

#line 595 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
#line 595 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
#line 595 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_21)
#line 595 "typeclasses.m"
{
#line 603 "typeclasses.m"
  {
#line 603 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 0)));
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Assumed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 1)));
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 2)));
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 3)));
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant_26;
#line 603 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven_27;

#line 606 "typeclasses.m"
    {
#line 606 "typeclasses.m"
      check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_30, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33, check_hlds__typeclasses__Redundant0_24, &check_hlds__typeclasses__Redundant_26, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34, check_hlds__typeclasses__STATE_VARIABLE_Seen_35, check_hlds__typeclasses__Unproven0_22, &check_hlds__typeclasses__Unproven_27, check_hlds__typeclasses__Changed_21);
    }
#line 609 "typeclasses.m"
    {
#line 609 "typeclasses.m"
      MR_Word base;
#line 609 "typeclasses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 609 "typeclasses.m"
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_37 = base;
#line 609 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_27));
#line 609 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_23));
#line 609 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_26));
#line 609 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_25));
#line 609 "typeclasses.m"
    }
#line 603 "typeclasses.m"
  }
#line 595 "typeclasses.m"
}

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 583 "typeclasses.m"
{
#line 583 "typeclasses.m"
  {
#line 583 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 583 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0, 1);
#line 583 "typeclasses.m"
  }
#line 583 "typeclasses.m"
}

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 583 "typeclasses.m"
{
#line 583 "typeclasses.m"
  {
#line 583 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 583 "typeclasses.m"
    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24);
#line 583 "typeclasses.m"
    {
#line 583 "typeclasses.m"
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(check_hlds__typeclasses__env_ptr);
#line 583 "typeclasses.m"
      return;
    }
#line 583 "typeclasses.m"
  }
#line 583 "typeclasses.m"
}

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 583 "typeclasses.m"
{
#line 583 "typeclasses.m"
  {
#line 583 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 584 "typeclasses.m"
    {
#line 584 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13);
    }
#line 584 "typeclasses.m"
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
#line 584 "typeclasses.m"
      {
#line 584 "typeclasses.m"
        check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(check_hlds__typeclasses__env_ptr);
#line 584 "typeclasses.m"
        return;
      }
#line 583 "typeclasses.m"
  }
#line 583 "typeclasses.m"
}

#line 583 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
#line 583 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 583 "typeclasses.m"
{
#line 583 "typeclasses.m"
  {
#line 583 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 583 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0) == 0)
#line 583 "typeclasses.m"
      {
#line 583 "typeclasses.m"
        {
#line 583 "typeclasses.m"
          {
#line 583 "typeclasses.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3, check_hlds__typeclasses__env_ptr);
          }
#line 583 "typeclasses.m"
        }
#line 583 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 583 "typeclasses.m"
      }
#line 583 "typeclasses.m"
    else
#line 583 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 583 "typeclasses.m"
  }
#line 583 "typeclasses.m"
}

#line 571 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__AssumedCs_1,
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
#line 571 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
#line 571 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__6_6)
#line 571 "typeclasses.m"
{
#line 571 "typeclasses.m"
  {
#line 571 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s check_hlds__typeclasses__env;

#line 571 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1 = check_hlds__typeclasses__AssumedCs_1;
#line 576 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "typeclasses.m"
      {
#line 576 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 0;
#line 576 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2;
#line 576 "typeclasses.m"
      }
#line 576 "typeclasses.m"
    else
#line 578 "typeclasses.m"
      {
#line 578 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Cs_14;
#line 578 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewCs0_17;
#line 578 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed0_18;
#line 578 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;

#line 577 "typeclasses.m"
        (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 0)));
#line 577 "typeclasses.m"
        check_hlds__typeclasses__Cs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 1)));
#line 579 "typeclasses.m"
        {
#line 579 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__Cs_14, &check_hlds__typeclasses__NewCs0_17, &check_hlds__typeclasses__Changed0_18);
        }
#line 583 "typeclasses.m"
        {
#line 583 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(&check_hlds__typeclasses__env);
        }
#line 590 "typeclasses.m"
        if ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
#line 587 "typeclasses.m"
          {
#line 587 "typeclasses.m"
            {
#line 587 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3);
            }
#line 588 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__5_5 = check_hlds__typeclasses__NewCs0_17;
#line 589 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 1;
#line 587 "typeclasses.m"
          }
#line 590 "typeclasses.m"
        else
#line 591 "typeclasses.m"
          {
#line 591 "typeclasses.m"
            {
#line 591 "typeclasses.m"
              MR_Word base;
#line 591 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__5_5 = base;
#line 591 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13));
#line 591 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__NewCs0_17));
#line 591 "typeclasses.m"
            }
#line 592 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__6_6 = check_hlds__typeclasses__Changed0_18;
#line 591 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;
#line 591 "typeclasses.m"
          }
#line 578 "typeclasses.m"
      }
#line 571 "typeclasses.m"
  }
#line 571 "typeclasses.m"
}

#line 495 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDep_12,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 495 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 495 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
#line 495 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26)
#line 495 "typeclasses.m"
{
#line 500 "typeclasses.m"
  {
#line 500 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 2)));
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Domain_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 0)));
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Range_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 1)));
#line 501 "typeclasses.m"
    MR_Word check_hlds__typeclasses___Ids_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 0)));
#line 501 "typeclasses.m"
    MR_Word check_hlds__typeclasses___ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 1)));
#line 522 "typeclasses.m"
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_17_60;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst_20;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes_21;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_34;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_35;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesBVars_36;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst0_37;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_57;
#line 506 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_58;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_48;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_14_49;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_44;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_45;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesBVars_46;
#line 555 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst0_47;
#line 560 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_22_22;

#line 556 "typeclasses.m"
    {
#line 556 "typeclasses.m"
      check_hlds__typeclasses__RTypesA_34 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__InstanceTypes0_10);
    }
#line 557 "typeclasses.m"
    {
#line 557 "typeclasses.m"
      check_hlds__typeclasses__RTypesB_35 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__ConstraintTypes_17);
    }
#line 558 "typeclasses.m"
    {
#line 558 "typeclasses.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_35, &check_hlds__typeclasses__RTypesBVars_36);
    }
#line 559 "typeclasses.m"
    {
#line 559 "typeclasses.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], check_hlds__typeclasses__TypeCtorInfo_13_38, &check_hlds__typeclasses__Subst0_37);
    }
#line 560 "typeclasses.m"
    {
#line 560 "typeclasses.m"
      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_34, check_hlds__typeclasses__RTypesB_35, check_hlds__typeclasses__RTypesBVars_36, check_hlds__typeclasses__Subst0_37, &check_hlds__typeclasses__Subst_20);
    }
#line 506 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 506 "typeclasses.m"
      {
#line 507 "typeclasses.m"
        {
#line 507 "typeclasses.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typeclasses__Subst_20, check_hlds__typeclasses__InstanceTypes0_10, &check_hlds__typeclasses__InstanceTypes_21);
        }
#line 2632 "check_hlds.typeclasses.c"
        check_hlds__typeclasses__TypeCtorInfo_13_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 556 "typeclasses.m"
        {
#line 556 "typeclasses.m"
          check_hlds__typeclasses__RTypesA_44 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
        }
#line 557 "typeclasses.m"
        {
#line 557 "typeclasses.m"
          check_hlds__typeclasses__RTypesB_45 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
        }
#line 558 "typeclasses.m"
        {
#line 558 "typeclasses.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_45, &check_hlds__typeclasses__RTypesBVars_46);
        }
#line 2649 "check_hlds.typeclasses.c"
        check_hlds__typeclasses__TypeInfo_14_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[3];
#line 559 "typeclasses.m"
        {
#line 559 "typeclasses.m"
          mercury__map__init_1_p_0(check_hlds__typeclasses__TypeInfo_14_49, check_hlds__typeclasses__TypeCtorInfo_13_48, &check_hlds__typeclasses__Subst0_47);
        }
#line 560 "typeclasses.m"
        {
#line 560 "typeclasses.m"
          check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_44, check_hlds__typeclasses__RTypesB_45, check_hlds__typeclasses__RTypesBVars_46, check_hlds__typeclasses__Subst0_47, &check_hlds__typeclasses__V_22_22);
        }
#line 512 "typeclasses.m"
        check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
#line 506 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 506 "typeclasses.m"
          {
#line 2667 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_17_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 545 "typeclasses.m"
            {
#line 545 "typeclasses.m"
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
            }
#line 546 "typeclasses.m"
            {
#line 546 "typeclasses.m"
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
            }
#line 547 "typeclasses.m"
            {
#line 547 "typeclasses.m"
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_57, check_hlds__typeclasses__RTypesB_58, check_hlds__typeclasses__HeadTypeParams_11, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27);
            }
#line 506 "typeclasses.m"
          }
#line 506 "typeclasses.m"
      }
#line 522 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 521 "typeclasses.m"
      {
#line 521 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
#line 521 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = (MR_Integer) 1;
#line 521 "typeclasses.m"
      }
#line 522 "typeclasses.m"
    else
#line 523 "typeclasses.m"
      {
#line 523 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25;
#line 523 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23;
#line 523 "typeclasses.m"
      }
#line 500 "typeclasses.m"
  }
#line 495 "typeclasses.m"
}

#line 491 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 491 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 491 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 491 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 491 "typeclasses.m"
{
#line 491 "typeclasses.m"
  {
#line 491 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 491 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24;
#line 491 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26;

#line 491 "typeclasses.m"
    {
#line 491 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26);
    }
#line 491 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24));
#line 491 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26));
#line 491 "typeclasses.m"
  }
#line 491 "typeclasses.m"
}

#line 484 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_9,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
#line 484 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
#line 484 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
#line 484 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18)
#line 484 "typeclasses.m"
{
#line 489 "typeclasses.m"
  {
#line 489 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 489 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_19_19;
#line 490 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16;
#line 490 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18;

#line 491 "typeclasses.m"
    {
#line 491 "typeclasses.m"
      check_hlds__typeclasses__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[2]));
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1));
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 3) = ((MR_Box) (check_hlds__typeclasses__Constraint_12));
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_10));
#line 491 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_11));
#line 491 "typeclasses.m"
    }
#line 490 "typeclasses.m"
    {
#line 490 "typeclasses.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_19_19, check_hlds__typeclasses__FunDeps_9, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17)), &check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
    }
#line 490 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_16 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16);
#line 490 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_18 = ((MR_Word) check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
#line 489 "typeclasses.m"
  }
#line 484 "typeclasses.m"
}

#line 474 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 474 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 474 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 474 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 474 "typeclasses.m"
{
#line 474 "typeclasses.m"
  {
#line 474 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 474 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16;
#line 474 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18;

#line 474 "typeclasses.m"
    {
#line 474 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_4_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18);
    }
#line 474 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16));
#line 474 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18));
#line 474 "typeclasses.m"
  }
#line 474 "typeclasses.m"
}

#line 461 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_11,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_12,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_13,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
#line 461 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
#line 461 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29)
#line 461 "typeclasses.m"
{
#line 467 "typeclasses.m"
  {
#line 467 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 8)));
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 4)));
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__NewTVarSet_20;
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Renaming_21;
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes_22;
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed0_23;
#line 467 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_30_30;
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 0)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 1)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 2)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 3)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 5)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 6)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 7)));
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 9)));
#line 473 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27;
#line 473 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_Changed0_23;

#line 470 "typeclasses.m"
    {
#line 470 "typeclasses.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24, check_hlds__typeclasses__InstanceTVarSet_18, &check_hlds__typeclasses__NewTVarSet_20, &check_hlds__typeclasses__Renaming_21);
    }
#line 471 "typeclasses.m"
    {
#line 471 "typeclasses.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_21, check_hlds__typeclasses__InstanceTypes0_19, &check_hlds__typeclasses__InstanceTypes_22);
    }
#line 474 "typeclasses.m"
    {
#line 474 "typeclasses.m"
      check_hlds__typeclasses__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[1]));
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1));
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 3) = ((MR_Box) (check_hlds__typeclasses__FunDeps_12));
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_22));
#line 474 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_13));
#line 474 "typeclasses.m"
    }
#line 473 "typeclasses.m"
    {
#line 473 "typeclasses.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_30_30, check_hlds__typeclasses__Constraints_11, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed0_23);
    }
#line 473 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_27 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27);
#line 473 "typeclasses.m"
    check_hlds__typeclasses__Changed0_23 = ((MR_Word) check_hlds__typeclasses__conv2_Changed0_23);
#line 480 "typeclasses.m"
#line 480 "typeclasses.m"
    switch (check_hlds__typeclasses__Changed0_23) {
#line 480 "typeclasses.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 480 "typeclasses.m"
      case (MR_Integer) 0:
#line 481 "typeclasses.m"
        {
#line 481 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24;
#line 481 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28;
#line 481 "typeclasses.m"
        }
#line 480 "typeclasses.m"
        break;
#line 480 "typeclasses.m"
      case (MR_Integer) 1:
#line 477 "typeclasses.m"
        {
#line 478 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__NewTVarSet_20;
#line 479 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = (MR_Integer) 1;
#line 477 "typeclasses.m"
        }
#line 480 "typeclasses.m"
        break;
#line 480 "typeclasses.m"
    }
#line 467 "typeclasses.m"
  }
#line 461 "typeclasses.m"
}

#line 458 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 458 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 458 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
#line 458 "typeclasses.m"
{
#line 458 "typeclasses.m"
  {
#line 458 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 458 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25;
#line 458 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27;
#line 458 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29;

#line 458 "typeclasses.m"
    {
#line 458 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_3_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29);
    }
#line 458 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25));
#line 458 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27));
#line 458 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29));
#line 458 "typeclasses.m"
  }
#line 458 "typeclasses.m"
}

#line 445 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_12,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_13,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_14,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_16,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
#line 445 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
#line 445 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30)
#line 445 "typeclasses.m"
{
#line 451 "typeclasses.m"
  {
#line 451 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassDefn_20;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__FunDeps_21;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceDefns_22;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintSet_23;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintList_24;
#line 451 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_31_31;
#line 452 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_20;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_36_36;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_37_37;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42;
#line 453 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_43_43;
#line 454 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv1_InstanceDefns_22;
#line 455 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_ConstraintSet_23;
#line 457 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26;
#line 457 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28;
#line 457 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30;

#line 452 "typeclasses.m"
    {
#line 452 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_12, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv0_ClassDefn_20);
    }
#line 452 "typeclasses.m"
    check_hlds__typeclasses__ClassDefn_20 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_20);
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 0)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 1)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 2)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 3)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 4)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 5)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 6)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 7)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 8)));
#line 453 "typeclasses.m"
    check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 9)));
#line 454 "typeclasses.m"
    {
#line 454 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_13, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv1_InstanceDefns_22);
    }
#line 454 "typeclasses.m"
    check_hlds__typeclasses__InstanceDefns_22 = ((MR_Word) check_hlds__typeclasses__conv1_InstanceDefns_22);
#line 455 "typeclasses.m"
    {
#line 455 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_15, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv2_ConstraintSet_23);
    }
#line 455 "typeclasses.m"
    check_hlds__typeclasses__ConstraintSet_23 = ((MR_Word) check_hlds__typeclasses__conv2_ConstraintSet_23);
#line 456 "typeclasses.m"
    {
#line 456 "typeclasses.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_23, &check_hlds__typeclasses__ConstraintList_24);
    }
#line 458 "typeclasses.m"
    {
#line 458 "typeclasses.m"
      check_hlds__typeclasses__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_7[0]));
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1));
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 3) = ((MR_Box) (check_hlds__typeclasses__ConstraintList_24));
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 4) = ((MR_Box) (check_hlds__typeclasses__FunDeps_21));
#line 458 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_14));
#line 458 "typeclasses.m"
    }
#line 457 "typeclasses.m"
    {
#line 457 "typeclasses.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_31_31, check_hlds__typeclasses__InstanceDefns_22, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27)), &check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29)), &check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
    }
#line 457 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26);
#line 457 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_28 = ((MR_Word) check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28);
#line 457 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_30 = ((MR_Word) check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
#line 451 "typeclasses.m"
  }
#line 445 "typeclasses.m"
}

#line 394 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintA_1,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintB_2,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 394 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 394 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 394 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
#line 394 "typeclasses.m"
{
#line 398 "typeclasses.m"
  while (MR_TRUE)
#line 398 "typeclasses.m"
    {
#line 398 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 398 "typeclasses.m"
      {
#line 398 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 398 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "typeclasses.m"
          {
#line 398 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 398 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 398 "typeclasses.m"
          }
#line 398 "typeclasses.m"
        else
#line 400 "typeclasses.m"
          {
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__FunDep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 0)));
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 1)));
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypesA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 2)));
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypesB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 2)));
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Domain_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 0)));
#line 400 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Range_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 1)));
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses___IdsA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 0)));
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses___ClassNameA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 1)));
#line 413 "typeclasses.m"
            MR_Word check_hlds__typeclasses___IdsB_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 0)));
#line 413 "typeclasses.m"
            MR_Word check_hlds__typeclasses___ClassNameB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 1)));
#line 428 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_17_78;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_57;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_58;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_75;
#line 418 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_76;
#line 532 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_66;
#line 532 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeInfo_10_67;
#line 532 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_64;
#line 532 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_65;

#line 533 "typeclasses.m"
            {
#line 533 "typeclasses.m"
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesA_45);
            }
#line 534 "typeclasses.m"
            {
#line 534 "typeclasses.m"
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesB_48);
            }
#line 535 "typeclasses.m"
            {
#line 535 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[6], ((MR_Box) (check_hlds__typeclasses__RTypesA_57)), ((MR_Box) (check_hlds__typeclasses__RTypesB_58)));
            }
#line 418 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 418 "typeclasses.m"
              {
#line 3310 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeCtorInfo_9_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 533 "typeclasses.m"
                {
#line 533 "typeclasses.m"
                  check_hlds__typeclasses__RTypesA_64 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                }
#line 534 "typeclasses.m"
                {
#line 534 "typeclasses.m"
                  check_hlds__typeclasses__RTypesB_65 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                }
#line 3322 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_10_67 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
#line 535 "typeclasses.m"
                {
#line 535 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_10_67, ((MR_Box) (check_hlds__typeclasses__RTypesA_64)), ((MR_Box) (check_hlds__typeclasses__RTypesB_65)));
                }
#line 419 "typeclasses.m"
                check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
#line 418 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 418 "typeclasses.m"
                  {
#line 3335 "check_hlds.typeclasses.c"
                    check_hlds__typeclasses__TypeCtorInfo_17_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 545 "typeclasses.m"
                    {
#line 545 "typeclasses.m"
                      check_hlds__typeclasses__RTypesA_75 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                    }
#line 546 "typeclasses.m"
                    {
#line 546 "typeclasses.m"
                      check_hlds__typeclasses__RTypesB_76 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                    }
#line 547 "typeclasses.m"
                    {
#line 547 "typeclasses.m"
                      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_75, check_hlds__typeclasses__RTypesB_76, check_hlds__typeclasses__HeadTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51);
                    }
#line 418 "typeclasses.m"
                  }
#line 418 "typeclasses.m"
              }
#line 428 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 427 "typeclasses.m"
              {
#line 427 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
#line 427 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = (MR_Integer) 1;
#line 427 "typeclasses.m"
              }
#line 428 "typeclasses.m"
            else
#line 429 "typeclasses.m"
              {
#line 429 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 429 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 429 "typeclasses.m"
              }
#line 403 "typeclasses.m"
            /* direct tailcall eliminated */
#line 403 "typeclasses.m"
            {
#line 403 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__3__tmp_copy_3 = check_hlds__typeclasses__FunDeps_21;
#line 403 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 403 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 403 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 403 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
#line 403 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__3_3 = check_hlds__typeclasses__HeadVar__3__tmp_copy_3;
#line 403 "typeclasses.m"
            }
#line 403 "typeclasses.m"
            continue;
#line 400 "typeclasses.m"
          }
#line 398 "typeclasses.m"
      }
#line 398 "typeclasses.m"
      break;
#line 398 "typeclasses.m"
    }
#line 394 "typeclasses.m"
}

#line 379 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_3,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 379 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 379 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 379 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
#line 379 "typeclasses.m"
{
#line 383 "typeclasses.m"
  while (MR_TRUE)
#line 383 "typeclasses.m"
    {
#line 383 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 383 "typeclasses.m"
      {
#line 383 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 383 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "typeclasses.m"
          {
#line 383 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 383 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 383 "typeclasses.m"
          }
#line 383 "typeclasses.m"
        else
#line 385 "typeclasses.m"
          {
#line 385 "typeclasses.m"
            MR_Word check_hlds__typeclasses__HeadConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TailConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 385 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 386 "typeclasses.m"
            {
#line 386 "typeclasses.m"
              check_hlds__typeclasses__do_class_improvement_pair_8_p_0(check_hlds__typeclasses__Constraint_1, check_hlds__typeclasses__HeadConstraint_19, check_hlds__typeclasses__FunDeps_3, check_hlds__typeclasses__HeadTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7, &check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30);
            }
#line 388 "typeclasses.m"
            /* direct tailcall eliminated */
#line 388 "typeclasses.m"
            {
#line 388 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__TailConstraints_20;
#line 388 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 388 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 388 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 388 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
#line 388 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 388 "typeclasses.m"
            }
#line 388 "typeclasses.m"
            continue;
#line 385 "typeclasses.m"
          }
#line 383 "typeclasses.m"
      }
#line 383 "typeclasses.m"
      break;
#line 383 "typeclasses.m"
    }
#line 379 "typeclasses.m"
}

#line 367 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_2,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_3,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
#line 367 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
#line 367 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
#line 367 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7)
#line 367 "typeclasses.m"
{
#line 371 "typeclasses.m"
  while (MR_TRUE)
#line 371 "typeclasses.m"
    {
#line 371 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 371 "typeclasses.m"
      {
#line 371 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 371 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "typeclasses.m"
          {
#line 371 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6;
#line 371 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4;
#line 371 "typeclasses.m"
          }
#line 371 "typeclasses.m"
        else
#line 373 "typeclasses.m"
          {
#line 373 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 373 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
#line 373 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

#line 374 "typeclasses.m"
            {
#line 374 "typeclasses.m"
              check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(check_hlds__typeclasses__Constraint_16, check_hlds__typeclasses__Constraints_17, check_hlds__typeclasses__FunDeps_2, check_hlds__typeclasses__HeadTypeParams_3, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6, &check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27);
            }
#line 376 "typeclasses.m"
            /* direct tailcall eliminated */
#line 376 "typeclasses.m"
            {
#line 376 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_17;
#line 376 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
#line 376 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

#line 376 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6;
#line 376 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 376 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 376 "typeclasses.m"
            }
#line 376 "typeclasses.m"
            continue;
#line 373 "typeclasses.m"
          }
#line 371 "typeclasses.m"
      }
#line 371 "typeclasses.m"
      break;
#line 371 "typeclasses.m"
    }
#line 367 "typeclasses.m"
}

#line 344 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_9,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_10,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_12,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
#line 344 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
#line 344 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
#line 344 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22)
#line 344 "typeclasses.m"
{
#line 349 "typeclasses.m"
  {
#line 349 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 349 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 349 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassDefn_15;
#line 349 "typeclasses.m"
    MR_Word check_hlds__typeclasses__FunDeps_16;
#line 349 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintSet_17;
#line 349 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintList_18;
#line 350 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_15;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_25_25;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_26_26;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_27_27;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_28_28;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_29_29;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_30_30;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_31_31;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_32_32;
#line 351 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_33_33;
#line 352 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv1_ConstraintSet_17;

#line 350 "typeclasses.m"
    {
#line 350 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_9, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv0_ClassDefn_15);
    }
#line 350 "typeclasses.m"
    check_hlds__typeclasses__ClassDefn_15 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_15);
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 0)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 1)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__FunDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 2)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 3)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 4)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 5)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 6)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 7)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 8)));
#line 351 "typeclasses.m"
    check_hlds__typeclasses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 9)));
#line 352 "typeclasses.m"
    {
#line 352 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_11, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv1_ConstraintSet_17);
    }
#line 352 "typeclasses.m"
    check_hlds__typeclasses__ConstraintSet_17 = ((MR_Word) check_hlds__typeclasses__conv1_ConstraintSet_17);
#line 353 "typeclasses.m"
    {
#line 353 "typeclasses.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_17, &check_hlds__typeclasses__ConstraintList_18);
    }
#line 354 "typeclasses.m"
    {
#line 354 "typeclasses.m"
      check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(check_hlds__typeclasses__ConstraintList_18, check_hlds__typeclasses__FunDeps_16, check_hlds__typeclasses__HeadTypeParams_10, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19, check_hlds__typeclasses__STATE_VARIABLE_Bindings_20, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21, check_hlds__typeclasses__STATE_VARIABLE_Changed_22);
#line 354 "typeclasses.m"
      return;
    }
#line 349 "typeclasses.m"
  }
#line 344 "typeclasses.m"
}

#line 441 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 441 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 441 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
#line 441 "typeclasses.m"
{
#line 441 "typeclasses.m"
  {
#line 441 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 441 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26;
#line 441 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28;
#line 441 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30;

#line 441 "typeclasses.m"
    {
#line 441 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_2_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30);
    }
#line 441 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26));
#line 441 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28));
#line 441 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30));
#line 441 "typeclasses.m"
  }
#line 441 "typeclasses.m"
}

#line 341 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 341 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 341 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 341 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 341 "typeclasses.m"
{
#line 341 "typeclasses.m"
  {
#line 341 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 341 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20;
#line 341 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22;

#line 341 "typeclasses.m"
    {
#line 341 "typeclasses.m"
      check_hlds__typeclasses__do_class_improvement_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22);
    }
#line 341 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20));
#line 341 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22));
#line 341 "typeclasses.m"
  }
#line 341 "typeclasses.m"
}

#line 318 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_10,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_11,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_12,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_13,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
#line 318 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
#line 318 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_16)
#line 318 "typeclasses.m"
{
#line 323 "typeclasses.m"
  {
#line 323 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_22_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_30_70;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed1_17;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed2_18;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassIds_34;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RedundantConstraints_61;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassIds_62;
#line 323 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_63_63;
#line 338 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
#line 338 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
#line 338 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
#line 340 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23;
#line 340 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_Changed1_17;
#line 438 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_67_67;
#line 438 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_68_68;
#line 438 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_69_69;
#line 440 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20;
#line 440 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22;
#line 440 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv7_Changed2_18;

#line 339 "typeclasses.m"
    {
#line 339 "typeclasses.m"
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__Redundant_33, &check_hlds__typeclasses__ClassIds_34);
    }
#line 341 "typeclasses.m"
    {
#line 341 "typeclasses.m"
      check_hlds__typeclasses__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[0]));
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_1));
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 4) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_12));
#line 341 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 5) = ((MR_Box) (check_hlds__typeclasses__Redundant_33));
#line 341 "typeclasses.m"
    }
#line 340 "typeclasses.m"
    {
#line 340 "typeclasses.m"
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_35_35, check_hlds__typeclasses__ClassIds_34, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed1_17);
    }
#line 340 "typeclasses.m"
    check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23);
#line 340 "typeclasses.m"
    check_hlds__typeclasses__Changed1_17 = ((MR_Word) check_hlds__typeclasses__conv2_Changed1_17);
#line 438 "typeclasses.m"
    check_hlds__typeclasses__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
#line 438 "typeclasses.m"
    check_hlds__typeclasses__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
#line 438 "typeclasses.m"
    check_hlds__typeclasses__RedundantConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
#line 438 "typeclasses.m"
    check_hlds__typeclasses__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
#line 3899 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 439 "typeclasses.m"
    {
#line 439 "typeclasses.m"
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_61, &check_hlds__typeclasses__ClassIds_62);
    }
#line 441 "typeclasses.m"
    {
#line 441 "typeclasses.m"
      check_hlds__typeclasses__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[0]));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_2));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_11));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_12));
#line 441 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 6) = ((MR_Box) (check_hlds__typeclasses__RedundantConstraints_61));
#line 441 "typeclasses.m"
    }
#line 440 "typeclasses.m"
    {
#line 440 "typeclasses.m"
      mercury__list__foldl3_8_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_63_63, check_hlds__typeclasses__ClassIds_62, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19)), &check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv7_Changed2_18);
    }
#line 440 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20 = ((MR_Word) check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20);
#line 440 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_22 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22);
#line 440 "typeclasses.m"
    check_hlds__typeclasses__Changed2_18 = ((MR_Word) check_hlds__typeclasses__conv7_Changed2_18);
#line 331 "typeclasses.m"
    {
#line 331 "typeclasses.m"
      *check_hlds__typeclasses__Changed_16 = mercury__bool__or_2_f_0(check_hlds__typeclasses__Changed1_17, check_hlds__typeclasses__Changed2_18);
    }
#line 323 "typeclasses.m"
  }
#line 318 "typeclasses.m"
}

#line 292 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
#line 292 "typeclasses.m"
  MR_Word check_hlds__typeclasses__C0_1,
#line 292 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 292 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_3)
#line 292 "typeclasses.m"
{
#line 295 "typeclasses.m"
  while (MR_TRUE)
#line 295 "typeclasses.m"
    {
#line 295 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 295 "typeclasses.m"
      {
#line 295 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 295 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "typeclasses.m"
          {
#line 295 "typeclasses.m"
            {
#line 295 "typeclasses.m"
              MR_Word base;
#line 295 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__3_3 = base;
#line 295 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
#line 295 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "typeclasses.m"
            }
#line 295 "typeclasses.m"
          }
#line 295 "typeclasses.m"
        else
#line 296 "typeclasses.m"
          {
#line 296 "typeclasses.m"
            MR_Word check_hlds__typeclasses__C1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "typeclasses.m"
            MR_Word check_hlds__typeclasses__C_10;
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_13_21;
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeInfo_17_25;
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__IdsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 0)));
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 1)));
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 2)));
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__IdsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 0)));
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Ids0_19;
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Ids_20;
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 1)));
#line 311 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 2)));

#line 313 "typeclasses.m"
            {
#line 313 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typeclasses__ClassName_16, check_hlds__typeclasses__V_22_22);
            }
#line 311 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 311 "typeclasses.m"
              {
#line 4029 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_17_25 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
#line 313 "typeclasses.m"
                {
#line 313 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_17_25, ((MR_Box) (check_hlds__typeclasses__ArgTypes_17)), ((MR_Box) (check_hlds__typeclasses__V_23_23)));
                }
#line 311 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 311 "typeclasses.m"
                  {
#line 4040 "check_hlds.typeclasses.c"
                    check_hlds__typeclasses__TypeCtorInfo_13_21 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
#line 314 "typeclasses.m"
                    {
#line 314 "typeclasses.m"
                      mercury__list__append_3_p_1(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__IdsA_15, check_hlds__typeclasses__IdsB_18, &check_hlds__typeclasses__Ids0_19);
                    }
#line 315 "typeclasses.m"
                    {
#line 315 "typeclasses.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__Ids0_19, &check_hlds__typeclasses__Ids_20);
                    }
#line 316 "typeclasses.m"
                    {
#line 316 "typeclasses.m"
                      check_hlds__typeclasses__C_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 0) = ((MR_Box) (check_hlds__typeclasses__Ids_20));
#line 316 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 1) = ((MR_Box) (check_hlds__typeclasses__ClassName_16));
#line 316 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 2) = ((MR_Box) (check_hlds__typeclasses__ArgTypes_17));
#line 316 "typeclasses.m"
                    }
#line 316 "typeclasses.m"
                    check_hlds__typeclasses__succeeded = MR_TRUE;
#line 311 "typeclasses.m"
                  }
#line 311 "typeclasses.m"
              }
#line 299 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 298 "typeclasses.m"
              {
#line 298 "typeclasses.m"
                /* direct tailcall eliminated */
#line 298 "typeclasses.m"
                {
#line 298 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__C0__tmp_copy_1 = check_hlds__typeclasses__C_10;
#line 298 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Cs_8;

#line 298 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 298 "typeclasses.m"
                  check_hlds__typeclasses__C0_1 = check_hlds__typeclasses__C0__tmp_copy_1;
#line 298 "typeclasses.m"
                }
#line 298 "typeclasses.m"
                continue;
#line 298 "typeclasses.m"
              }
#line 299 "typeclasses.m"
            else
#line 300 "typeclasses.m"
              {
#line 300 "typeclasses.m"
                MR_Word check_hlds__typeclasses__Constraints0_11;

#line 300 "typeclasses.m"
                {
#line 300 "typeclasses.m"
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C1_7, check_hlds__typeclasses__Cs_8, &check_hlds__typeclasses__Constraints0_11);
                }
#line 301 "typeclasses.m"
                {
#line 301 "typeclasses.m"
                  MR_Word base;
#line 301 "typeclasses.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "typeclasses.m"
                  *check_hlds__typeclasses__HeadVar__3_3 = base;
#line 301 "typeclasses.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
#line 301 "typeclasses.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__Constraints0_11));
#line 301 "typeclasses.m"
                }
#line 300 "typeclasses.m"
              }
#line 296 "typeclasses.m"
          }
#line 295 "typeclasses.m"
      }
#line 295 "typeclasses.m"
      break;
#line 295 "typeclasses.m"
    }
#line 292 "typeclasses.m"
}

#line 281 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 281 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 281 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3)
#line 281 "typeclasses.m"
{
#line 281 "typeclasses.m"
  {
#line 281 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 281 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_HeadVar__3_3;

#line 281 "typeclasses.m"
    {
#line 281 "typeclasses.m"
      hlds__hlds_data__compare_hlds_constraints_3_p_0(((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv0_HeadVar__3_3);
    }
#line 281 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv0_HeadVar__3_3));
#line 281 "typeclasses.m"
  }
#line 281 "typeclasses.m"
}

#line 229 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_16,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_17,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_18,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
#line 229 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
#line 229 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40)
#line 229 "typeclasses.m"
{
#line 238 "typeclasses.m"
  while (MR_TRUE)
#line 238 "typeclasses.m"
    {
#line 238 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 238 "typeclasses.m"
      {
#line 238 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedImprovementRule_25;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__EliminatedAssumed_26;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedInstanceRule_27;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedClassRule_28;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven0_69;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Assumed_70;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Redundant_71;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Ancestors_72;
#line 238 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven_73;

#line 239 "typeclasses.m"
        {
#line 239 "typeclasses.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41);
        }
#line 240 "typeclasses.m"
        {
#line 240 "typeclasses.m"
          check_hlds__typeclasses__apply_improvement_rules_9_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__HeadTypeParams_18, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, &check_hlds__typeclasses__AppliedImprovementRule_25);
        }
#line 251 "typeclasses.m"
#line 251 "typeclasses.m"
        switch (check_hlds__typeclasses__AppliedImprovementRule_25) {
#line 251 "typeclasses.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 251 "typeclasses.m"
          case (MR_Integer) 0:
#line 252 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
#line 251 "typeclasses.m"
            break;
#line 251 "typeclasses.m"
          case (MR_Integer) 1:
#line 250 "typeclasses.m"
            {
#line 250 "typeclasses.m"
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44);
            }
#line 251 "typeclasses.m"
            break;
#line 251 "typeclasses.m"
        }
#line 566 "typeclasses.m"
        check_hlds__typeclasses__Unproven0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 0)));
#line 566 "typeclasses.m"
        check_hlds__typeclasses__Assumed_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 1)));
#line 566 "typeclasses.m"
        check_hlds__typeclasses__Redundant_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 2)));
#line 566 "typeclasses.m"
        check_hlds__typeclasses__Ancestors_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 3)));
#line 567 "typeclasses.m"
        {
#line 567 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(check_hlds__typeclasses__Assumed_70, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, check_hlds__typeclasses__Unproven0_69, &check_hlds__typeclasses__Unproven_73, &check_hlds__typeclasses__EliminatedAssumed_26);
        }
#line 569 "typeclasses.m"
        {
#line 569 "typeclasses.m"
          check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 569 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_73));
#line 569 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_70));
#line 569 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_71));
#line 569 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_72));
#line 569 "typeclasses.m"
        }
#line 257 "typeclasses.m"
        {
#line 257 "typeclasses.m"
          check_hlds__typeclasses__apply_instance_rules_13_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39, &check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50, check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__AppliedInstanceRule_27);
        }
#line 259 "typeclasses.m"
        {
#line 259 "typeclasses.m"
          check_hlds__typeclasses__apply_class_rules_7_p_0(check_hlds__typeclasses__STATE_VARIABLE_ProofMap_48_48, &check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53, check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, &check_hlds__typeclasses__AppliedClassRule_28);
        }
#line 262 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedImprovementRule_25 == (MR_Integer) 0);
#line 262 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 262 "typeclasses.m"
          {
#line 263 "typeclasses.m"
            check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__EliminatedAssumed_26 == (MR_Integer) 0);
#line 262 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 262 "typeclasses.m"
              {
#line 264 "typeclasses.m"
                check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedInstanceRule_27 == (MR_Integer) 0);
#line 262 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 265 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedClassRule_28 == (MR_Integer) 0);
#line 262 "typeclasses.m"
              }
#line 262 "typeclasses.m"
          }
#line 269 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 268 "typeclasses.m"
          {
#line 268 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
#line 268 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven1_80;
#line 268 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven_81;
#line 280 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
#line 280 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
#line 280 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
#line 283 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_88_88;
#line 283 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_89_89;
#line 283 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_90_90;
#line 283 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_87_87;

#line 281 "typeclasses.m"
            {
#line 281 "typeclasses.m"
              mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[1], check_hlds__typeclasses__Unproven0_79, &check_hlds__typeclasses__Unproven1_80);
            }
#line 288 "typeclasses.m"
            if ((check_hlds__typeclasses__Unproven1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "typeclasses.m"
              check_hlds__typeclasses__Unproven_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "typeclasses.m"
            else
#line 289 "typeclasses.m"
              {
#line 289 "typeclasses.m"
                MR_Word check_hlds__typeclasses__C_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 0)));
#line 289 "typeclasses.m"
                MR_Word check_hlds__typeclasses__Cs_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 1)));

#line 290 "typeclasses.m"
                {
#line 290 "typeclasses.m"
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C_95, check_hlds__typeclasses__Cs_96, &check_hlds__typeclasses__Unproven_81);
                }
#line 289 "typeclasses.m"
              }
#line 283 "typeclasses.m"
            check_hlds__typeclasses__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
#line 283 "typeclasses.m"
            check_hlds__typeclasses__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
#line 283 "typeclasses.m"
            check_hlds__typeclasses__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
#line 283 "typeclasses.m"
            check_hlds__typeclasses__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
#line 283 "typeclasses.m"
            {
#line 283 "typeclasses.m"
              MR_Word base;
#line 283 "typeclasses.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_Constraints_38 = base;
#line 283 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_81));
#line 283 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_88_88));
#line 283 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_89_89));
#line 283 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_90_90));
#line 283 "typeclasses.m"
            }
#line 268 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Seen_40 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
#line 268 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 268 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_ProofMap_34 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
#line 268 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 268 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_30 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 268 "typeclasses.m"
          }
#line 269 "typeclasses.m"
        else
#line 270 "typeclasses.m"
          {
#line 270 "typeclasses.m"
            /* direct tailcall eliminated */
#line 270 "typeclasses.m"
            {
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_33 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_52_52;
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
#line 270 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;

#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39;
#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37;
#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35;
#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_33 = check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0__tmp_copy_33;
#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31;
#line 270 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29;
#line 270 "typeclasses.m"
            }
#line 270 "typeclasses.m"
            continue;
#line 270 "typeclasses.m"
          }
#line 238 "typeclasses.m"
      }
#line 238 "typeclasses.m"
      break;
#line 238 "typeclasses.m"
    }
#line 229 "typeclasses.m"
}

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 218 "typeclasses.m"
{
#line 218 "typeclasses.m"
  {
#line 218 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 218 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0, 1);
#line 218 "typeclasses.m"
  }
#line 218 "typeclasses.m"
}

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 218 "typeclasses.m"
{
#line 218 "typeclasses.m"
  {
#line 218 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 218 "typeclasses.m"
    {
#line 219 "typeclasses.m"
      {
#line 219 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], ((MR_Box) ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11)), (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2);
      }
#line 219 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded);
#line 219 "typeclasses.m"
      if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
#line 219 "typeclasses.m"
        {
#line 219 "typeclasses.m"
          check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(check_hlds__typeclasses__env_ptr);
#line 219 "typeclasses.m"
          return;
        }
#line 218 "typeclasses.m"
    }
#line 218 "typeclasses.m"
  }
#line 218 "typeclasses.m"
}

#line 218 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
#line 218 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 218 "typeclasses.m"
{
#line 218 "typeclasses.m"
  {
#line 218 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 218 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0) == 0)
#line 218 "typeclasses.m"
      {
#line 218 "typeclasses.m"
        {
#line 218 "typeclasses.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11, check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2, check_hlds__typeclasses__env_ptr);
        }
#line 218 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_FALSE;
#line 218 "typeclasses.m"
      }
#line 218 "typeclasses.m"
    else
#line 218 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
#line 218 "typeclasses.m"
  }
#line 218 "typeclasses.m"
}

#line 211 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
#line 211 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 211 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_2)
#line 211 "typeclasses.m"
{
#line 211 "typeclasses.m"
  {
#line 211 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s check_hlds__typeclasses__env;

#line 211 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2 = check_hlds__typeclasses__HeadTypeParams_2;
#line 214 "typeclasses.m"
    while (MR_TRUE)
#line 214 "typeclasses.m"
      {
#line 214 "typeclasses.m"
        /* tailcall optimized into a loop */
#line 214 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "typeclasses.m"
          (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
#line 214 "typeclasses.m"
        else
#line 215 "typeclasses.m"
          {
#line 215 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "typeclasses.m"
            MR_Word check_hlds__typeclasses___Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 0)));
#line 216 "typeclasses.m"
            MR_Word check_hlds__typeclasses___ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 1)));

#line 216 "typeclasses.m"
            (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__ArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 2)));
#line 218 "typeclasses.m"
            {
#line 218 "typeclasses.m"
              check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(&check_hlds__typeclasses__env);
            }
#line 215 "typeclasses.m"
            if ((check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
#line 221 "typeclasses.m"
              {
#line 221 "typeclasses.m"
                /* direct tailcall eliminated */
#line 221 "typeclasses.m"
                {
#line 221 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_5;

#line 221 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 221 "typeclasses.m"
                }
#line 221 "typeclasses.m"
                continue;
#line 221 "typeclasses.m"
              }
#line 215 "typeclasses.m"
          }
#line 214 "typeclasses.m"
        return (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
#line 214 "typeclasses.m"
        break;
#line 214 "typeclasses.m"
      }
#line 211 "typeclasses.m"
  }
#line 211 "typeclasses.m"
}

#line 141 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_8,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_9,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
#line 141 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
#line 141 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
#line 141 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33)
#line 141 "typeclasses.m"
{
#line 146 "typeclasses.m"
  {
#line 146 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 146 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints0_13;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_46_46;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_47_47;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_48_48;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_49_49;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_14;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Assumed0_15;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant0_16;
#line 151 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors0_17;

#line 147 "typeclasses.m"
    {
#line 147 "typeclasses.m"
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Constraints0_13);
    }
#line 150 "typeclasses.m"
    check_hlds__typeclasses__Unproven0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
#line 150 "typeclasses.m"
    check_hlds__typeclasses__Assumed0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
#line 150 "typeclasses.m"
    check_hlds__typeclasses__Redundant0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
#line 150 "typeclasses.m"
    check_hlds__typeclasses__Ancestors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
#line 152 "typeclasses.m"
    check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Unproven0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 151 "typeclasses.m"
      {
#line 153 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Assumed0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 151 "typeclasses.m"
          {
#line 4718 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 4720 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeInfo_47_47 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[1];
#line 154 "typeclasses.m"
            {
#line 154 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_46_46, check_hlds__typeclasses__TypeInfo_47_47, check_hlds__typeclasses__Redundant0_16);
            }
#line 151 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 151 "typeclasses.m"
              {
#line 4731 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4733 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_49_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[2];
#line 155 "typeclasses.m"
                {
#line 155 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_48_48, check_hlds__typeclasses__TypeInfo_49_49, check_hlds__typeclasses__Ancestors0_17);
                }
#line 151 "typeclasses.m"
              }
#line 151 "typeclasses.m"
          }
#line 151 "typeclasses.m"
      }
#line 158 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 157 "typeclasses.m"
      {
#line 157 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_35_35;

#line 157 "typeclasses.m"
        {
#line 157 "typeclasses.m"
          check_hlds__typeclasses__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "typeclasses.m"
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29));
#line 157 "typeclasses.m"
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "typeclasses.m"
        }
#line 157 "typeclasses.m"
        {
#line 157 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_35_35);
        }
#line 157 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
#line 157 "typeclasses.m"
      }
#line 158 "typeclasses.m"
    else
#line 159 "typeclasses.m"
      {
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__HeadTypeParams_18;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TVarSet0_19;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Bindings0_20;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProofMap0_21;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ConstraintMap0_22;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Bindings_23;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TVarSet_24;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProofMap_25;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ConstraintMap_26;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraints_27;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven_28;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42;
#line 159 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_76_76;
#line 225 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_77_77;
#line 225 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_78_78;
#line 225 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_79_79;
#line 225 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_70_70;
#line 173 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_43_43;
#line 173 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_44_44;
#line 173 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_45_45;

#line 159 "typeclasses.m"
        {
#line 159 "typeclasses.m"
          check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__HeadTypeParams_18);
        }
#line 160 "typeclasses.m"
        {
#line 160 "typeclasses.m"
          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__TVarSet0_19);
        }
#line 161 "typeclasses.m"
        {
#line 161 "typeclasses.m"
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Bindings0_20);
        }
#line 162 "typeclasses.m"
        {
#line 162 "typeclasses.m"
          check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ProofMap0_21);
        }
#line 163 "typeclasses.m"
        {
#line 163 "typeclasses.m"
          check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ConstraintMap0_22);
        }
#line 225 "typeclasses.m"
        check_hlds__typeclasses__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
#line 225 "typeclasses.m"
        check_hlds__typeclasses__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
#line 225 "typeclasses.m"
        check_hlds__typeclasses__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
#line 225 "typeclasses.m"
        check_hlds__typeclasses__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
#line 225 "typeclasses.m"
        {
#line 225 "typeclasses.m"
          check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_8, check_hlds__typeclasses__InstanceTable_9, check_hlds__typeclasses__HeadTypeParams_18, check_hlds__typeclasses__Bindings0_20, &check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__TVarSet0_19, &check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__ProofMap0_21, &check_hlds__typeclasses__ProofMap_25, check_hlds__typeclasses__ConstraintMap0_22, &check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__Constraints0_13, &check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__V_76_76, &check_hlds__typeclasses__V_70_70);
        }
#line 170 "typeclasses.m"
        {
#line 170 "typeclasses.m"
          check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__ProofMap_25, check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42);
        }
#line 173 "typeclasses.m"
        check_hlds__typeclasses__Unproven_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 0)));
#line 173 "typeclasses.m"
        check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 1)));
#line 173 "typeclasses.m"
        check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 2)));
#line 173 "typeclasses.m"
        check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 3)));
#line 174 "typeclasses.m"
        {
#line 174 "typeclasses.m"
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(check_hlds__typeclasses__Unproven_28, check_hlds__typeclasses__HeadTypeParams_18);
        }
#line 176 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 175 "typeclasses.m"
          {
#line 175 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_39_39;

#line 175 "typeclasses.m"
            {
#line 175 "typeclasses.m"
              check_hlds__typeclasses__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
#line 175 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "typeclasses.m"
            }
#line 175 "typeclasses.m"
            {
#line 175 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_39_39);
            }
#line 175 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
#line 175 "typeclasses.m"
          }
#line 176 "typeclasses.m"
        else
#line 179 "typeclasses.m"
          {
#line 179 "typeclasses.m"
            {
#line 179 "typeclasses.m"
              MR_Word base;
#line 179 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = base;
#line 179 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
#line 179 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32));
#line 179 "typeclasses.m"
            }
#line 179 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30;
#line 179 "typeclasses.m"
          }
#line 159 "typeclasses.m"
      }
#line 146 "typeclasses.m"
  }
#line 141 "typeclasses.m"
}

#line 78 "typeclasses.m"
void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_16,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 78 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 78 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_27,
#line 78 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ProofMap_28,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29,
#line 78 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30,
#line 78 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31,
#line 78 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_32)
#line 78 "typeclasses.m"
{
#line 224 "typeclasses.m"
  {
#line 224 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 224 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 0)));
#line 225 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 1)));
#line 225 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 2)));
#line 225 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 3)));
#line 225 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_22_22;

#line 225 "typeclasses.m"
    {
#line 225 "typeclasses.m"
      check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__HeadTypeParams_16, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, check_hlds__typeclasses__STATE_VARIABLE_Bindings_24, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_0_27, check_hlds__typeclasses__STATE_VARIABLE_ProofMap_28, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, check_hlds__typeclasses__STATE_VARIABLE_Constraints_32, check_hlds__typeclasses__V_38_38, &check_hlds__typeclasses__V_22_22);
    }
#line 224 "typeclasses.m"
  }
#line 78 "typeclasses.m"
}

#line 126 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_2(
#line 126 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 126 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 126 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_2)
#line 126 "typeclasses.m"
{
#line 126 "typeclasses.m"
  {
#line 126 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 126 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_HeadVar__3_37;

#line 126 "typeclasses.m"
    {
#line 126 "typeclasses.m"
      check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__126__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), &check_hlds__typeclasses__conv4_HeadVar__3_37);
    }
#line 126 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_2 = ((MR_Box) (check_hlds__typeclasses__conv4_HeadVar__3_37));
#line 126 "typeclasses.m"
  }
#line 126 "typeclasses.m"
}

#line 115 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0_1(
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 115 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 115 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 115 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 115 "typeclasses.m"
{
#line 115 "typeclasses.m"
  {
#line 115 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 115 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31;
#line 115 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33;

#line 115 "typeclasses.m"
    {
#line 115 "typeclasses.m"
      check_hlds__typeclasses__reduce_type_assign_context_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33);
    }
#line 115 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31));
#line 115 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33));
#line 115 "typeclasses.m"
  }
#line 115 "typeclasses.m"
}

#line 70 "typeclasses.m"
void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_5_p_0(
#line 70 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Context_6,
#line 70 "typeclasses.m"
  MR_Word check_hlds__typeclasses__TypeAssignSet0_7,
#line 70 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__TypeAssignSet_8,
#line 70 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Info_0_27,
#line 70 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Info_28)
#line 70 "typeclasses.m"
{
#line 105 "typeclasses.m"
  {
#line 105 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_60_60;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_61_61;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClauseContext_10;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ModuleInfo_11;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassTable_14;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTable_15;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeAssignSet1_16;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__UnsatTypeAssignSet_17;
#line 105 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_32_32;
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42;
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_43_43;
#line 107 "typeclasses.m"
    MR_Integer check_hlds__typeclasses__V_44_44;
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_45_45;
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_46_46;
#line 115 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_TypeAssignSet1_16;
#line 115 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17;
#line 120 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_18_18;
#line 120 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_19_19;

#line 106 "typeclasses.m"
    {
#line 106 "typeclasses.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_Info_0_27, &check_hlds__typeclasses__ClauseContext_10);
    }
#line 107 "typeclasses.m"
    check_hlds__typeclasses__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 0)));
#line 107 "typeclasses.m"
    check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 1)));
#line 107 "typeclasses.m"
    check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 2)));
#line 107 "typeclasses.m"
    check_hlds__typeclasses__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 3)));
#line 107 "typeclasses.m"
    check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 4)));
#line 107 "typeclasses.m"
    check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClauseContext_10, (MR_Integer) 5)));
#line 113 "typeclasses.m"
    {
#line 113 "typeclasses.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typeclasses__ModuleInfo_11, &check_hlds__typeclasses__ClassTable_14);
    }
#line 114 "typeclasses.m"
    {
#line 114 "typeclasses.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(check_hlds__typeclasses__ModuleInfo_11, &check_hlds__typeclasses__InstanceTable_15);
    }
#line 115 "typeclasses.m"
    {
#line 115 "typeclasses.m"
      check_hlds__typeclasses__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 115 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_3[0]));
#line 115 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_1));
#line 115 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 115 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_14));
#line 115 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_32_32, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_15));
#line 115 "typeclasses.m"
    }
#line 5153 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeCtorInfo_60_60 = (MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0;
#line 5155 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeInfo_61_61 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[0];
#line 115 "typeclasses.m"
    {
#line 115 "typeclasses.m"
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__TypeInfo_61_61, check_hlds__typeclasses__TypeInfo_61_61, check_hlds__typeclasses__V_32_32, check_hlds__typeclasses__TypeAssignSet0_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv3_TypeAssignSet1_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17);
    }
#line 115 "typeclasses.m"
    check_hlds__typeclasses__TypeAssignSet1_16 = ((MR_Word) check_hlds__typeclasses__conv3_TypeAssignSet1_16);
#line 115 "typeclasses.m"
    check_hlds__typeclasses__UnsatTypeAssignSet_17 = ((MR_Word) check_hlds__typeclasses__conv2_UnsatTypeAssignSet_17);
#line 120 "typeclasses.m"
    check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__TypeAssignSet0_7)) == (MR_mktag((MR_Integer) 1)));
#line 120 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 120 "typeclasses.m"
      {
#line 120 "typeclasses.m"
        check_hlds__typeclasses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_7, (MR_Integer) 0)));
#line 120 "typeclasses.m"
        check_hlds__typeclasses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_7, (MR_Integer) 1)));
#line 121 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "typeclasses.m"
      }
#line 137 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 124 "typeclasses.m"
      {
#line 124 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Spec_20;
#line 124 "typeclasses.m"
        MR_Word check_hlds__typeclasses__DeleteConstraints_21;

#line 123 "typeclasses.m"
        {
#line 123 "typeclasses.m"
          check_hlds__typeclasses__Spec_20 = check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(check_hlds__typeclasses__ClauseContext_10, check_hlds__typeclasses__Context_6, check_hlds__typeclasses__UnsatTypeAssignSet_17);
        }
#line 125 "typeclasses.m"
        {
#line 125 "typeclasses.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typeclasses__Spec_20, check_hlds__typeclasses__STATE_VARIABLE_Info_0_27, check_hlds__typeclasses__STATE_VARIABLE_Info_28);
        }
#line 126 "typeclasses.m"
        {
#line 126 "typeclasses.m"
          check_hlds__typeclasses__DeleteConstraints_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 126 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[0]));
#line 126 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_5_p_0_2));
#line 126 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 126 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_21, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_14));
#line 126 "typeclasses.m"
        }
#line 136 "typeclasses.m"
        {
#line 136 "typeclasses.m"
          mercury__list__map_3_p_0(check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__TypeCtorInfo_60_60, check_hlds__typeclasses__DeleteConstraints_21, check_hlds__typeclasses__TypeAssignSet0_7, check_hlds__typeclasses__TypeAssignSet_8);
#line 136 "typeclasses.m"
          return;
        }
#line 124 "typeclasses.m"
      }
#line 137 "typeclasses.m"
    else
#line 138 "typeclasses.m"
      {
#line 138 "typeclasses.m"
        *check_hlds__typeclasses__TypeAssignSet_8 = check_hlds__typeclasses__TypeAssignSet1_16;
#line 138 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Info_28 = check_hlds__typeclasses__STATE_VARIABLE_Info_0_27;
#line 138 "typeclasses.m"
      }
#line 105 "typeclasses.m"
  }
#line 70 "typeclasses.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typeclasses. */
