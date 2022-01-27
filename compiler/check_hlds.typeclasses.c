/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 646 "typeclasses.m"
struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s {
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3;
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4;
#line 650 "typeclasses.m"
  MR_bool check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
#line 651 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0;
#line 651 "typeclasses.m"
  MR_Word check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6;
#line 651 "typeclasses.m"
  MR_Box check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6;
#line 646 "typeclasses.m"
};

#line 565 "typeclasses.m"
struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s {
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1;
#line 570 "typeclasses.m"
  MR_bool check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded;
#line 572 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13;
#line 577 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0;
#line 577 "typeclasses.m"
  MR_Word check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24;
#line 577 "typeclasses.m"
  MR_Box check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24;
#line 565 "typeclasses.m"
};

#line 208 "typeclasses.m"
struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s {
#line 208 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2;
#line 211 "typeclasses.m"
  MR_bool check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
#line 212 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__Types_9;
#line 215 "typeclasses.m"
  jmp_buf check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0;
#line 215 "typeclasses.m"
  MR_Word check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11;
#line 208 "typeclasses.m"
};


#line 185 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 188 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 191 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 194 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 197 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 203 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 206 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 209 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 212 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 215 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 218 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;

#line 221 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 121 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__121__1_3_p_0(
#line 121 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_7,
#line 121 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_30,
#line 121 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_31);

#line 746 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_3,
#line 746 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_4);

#line 723 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Ancestors_1,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_2,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_3,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__8_8);

#line 713 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_17,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_18,
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_11);

#line 676 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 676 "typeclasses.m"
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_34,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_15);

#line 665 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Instances_8,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_15,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_16,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_12);

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 646 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Seen_3,
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_4);

#line 628 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
#line 628 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 628 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1);

#line 605 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_1,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_2,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_5,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_6,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__15_15);

#line 589 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_30,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_31,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_21);

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 565 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__AssumedCs_1,
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__6_6);

#line 489 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDep_12,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 489 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
#line 489 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26);

#line 485 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 485 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 485 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 478 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_9,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
#line 478 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
#line 478 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18);

#line 468 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 468 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 468 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 455 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_11,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_12,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_13,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29);

#line 452 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

#line 439 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_12,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_13,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_14,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_16,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30);

#line 388 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintA_1,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintB_2,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 388 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 388 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

#line 373 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_3,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 373 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 373 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8);

#line 361 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_2,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_3,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
#line 361 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
#line 361 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7);

#line 340 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_9,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_10,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_12,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
#line 340 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
#line 340 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22);

#line 435 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7);

#line 337 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 337 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 337 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5);

#line 314 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_10,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_11,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_12,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_13,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_16);

#line 288 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
#line 288 "typeclasses.m"
  MR_Word check_hlds__typeclasses__C0_1,
#line 288 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 288 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_3);

#line 277 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 277 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3);

#line 226 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_16,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_17,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_18,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_34,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40);

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg);

#line 208 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
#line 208 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 208 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_2);

#line 137 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_8,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_9,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
#line 137 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
#line 137 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33);

#line 121 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_2_p_0_2(
#line 121 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 121 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 121 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_2);

#line 111 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_2_p_0_1(
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 111 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 111 "typeclasses.m"
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
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0))
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
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typeclasses_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1092 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1101 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1109 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1118 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 1126 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1134 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1142 "check_hlds.typeclasses.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1150 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__set_ordlist__ti_set_ordlist_1hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1159 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typeclasses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typeclasses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1168 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1176 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1184 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0
  }
};

#line 1192 "check_hlds.typeclasses.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typeclasses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 121 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__121__1_3_p_0(
#line 121 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_7,
#line 121 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_30,
#line 121 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_31)
#line 121 "typeclasses.m"
{
#line 121 "typeclasses.m"
  {
#line 121 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 121 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints0_17;
#line 121 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TVarSet_18;
#line 121 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints_19;
#line 121 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_33_33;
#line 127 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_51_51;
#line 127 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_52_52;
#line 127 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_53_53;

#line 125 "typeclasses.m"
    {
#line 125 "typeclasses.m"
      check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__HeadVar__2_30, &check_hlds__typeclasses__Constraints0_17);
    }
#line 126 "typeclasses.m"
    {
#line 126 "typeclasses.m"
      check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__HeadVar__2_30, &check_hlds__typeclasses__TVarSet_18);
    }
#line 127 "typeclasses.m"
    check_hlds__typeclasses__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_17, (MR_Integer) 0)));
#line 127 "typeclasses.m"
    check_hlds__typeclasses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_17, (MR_Integer) 1)));
#line 127 "typeclasses.m"
    check_hlds__typeclasses__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_17, (MR_Integer) 2)));
#line 127 "typeclasses.m"
    check_hlds__typeclasses__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_17, (MR_Integer) 3)));
#line 127 "typeclasses.m"
    {
#line 127 "typeclasses.m"
      hlds__hlds_data__make_hlds_constraints_5_p_0(check_hlds__typeclasses__ClassTable_7, check_hlds__typeclasses__TVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typeclasses__V_33_33, &check_hlds__typeclasses__Constraints_19);
    }
#line 129 "typeclasses.m"
    {
#line 129 "typeclasses.m"
      check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typeclasses__Constraints_19, check_hlds__typeclasses__HeadVar__2_30, check_hlds__typeclasses__HeadVar__3_31);
#line 129 "typeclasses.m"
      return;
    }
#line 121 "typeclasses.m"
  }
#line 121 "typeclasses.m"
}

#line 746 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__add_superclass_proofs_4_p_0(
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 746 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_3,
#line 746 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_4)
#line 746 "typeclasses.m"
{
#line 749 "typeclasses.m"
  while (MR_TRUE)
#line 749 "typeclasses.m"
    {
#line 749 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 749 "typeclasses.m"
      {
#line 749 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 749 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_Proofs_4 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_3;
#line 749 "typeclasses.m"
        else
#line 750 "typeclasses.m"
          {
#line 750 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Descendant_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 750 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Descendants_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 750 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_15_15;
#line 750 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_16_16;

#line 751 "typeclasses.m"
            {
#line 751 "typeclasses.m"
              check_hlds__typeclasses__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 751 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_15_15, 0) = ((MR_Box) (check_hlds__typeclasses__Descendant_10));
#line 751 "typeclasses.m"
            }
#line 751 "typeclasses.m"
            {
#line 751 "typeclasses.m"
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__Constraint_1)), ((MR_Box) (check_hlds__typeclasses__V_15_15)), check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_3, &check_hlds__typeclasses__STATE_VARIABLE_Proofs_16_16);
            }
#line 752 "typeclasses.m"
            /* direct tailcall eliminated */
#line 752 "typeclasses.m"
            {
#line 752 "typeclasses.m"
              MR_Word check_hlds__typeclasses__Constraint__tmp_copy_1 = check_hlds__typeclasses__Descendant_10;
#line 752 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Descendants_11;
#line 752 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0__tmp_copy_3 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_16_16;

#line 752 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_3 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0__tmp_copy_3;
#line 752 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 752 "typeclasses.m"
              check_hlds__typeclasses__Constraint_1 = check_hlds__typeclasses__Constraint__tmp_copy_1;
#line 752 "typeclasses.m"
            }
#line 752 "typeclasses.m"
            continue;
#line 750 "typeclasses.m"
          }
#line 749 "typeclasses.m"
      }
#line 749 "typeclasses.m"
      break;
#line 749 "typeclasses.m"
    }
#line 746 "typeclasses.m"
}

#line 723 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_2_8_p_0(
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Ancestors_1,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_2,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_3,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5,
#line 723 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__6_6,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__7_7,
#line 723 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__8_8)
#line 723 "typeclasses.m"
{
#line 728 "typeclasses.m"
  {
#line 728 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 728 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "typeclasses.m"
      {
#line 728 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 0;
#line 728 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4;
#line 728 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Proofs_3 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_2;
#line 728 "typeclasses.m"
      }
#line 728 "typeclasses.m"
    else
#line 730 "typeclasses.m"
      {
#line 730 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 0)));
#line 730 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__6_6, (MR_Integer) 1)));
#line 730 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProgConstraint0_23;
#line 740 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Descendants_24;
#line 733 "typeclasses.m"
        MR_Box check_hlds__typeclasses__conv0_Descendants_24;

#line 731 "typeclasses.m"
        {
#line 731 "typeclasses.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint0_19, &check_hlds__typeclasses__ProgConstraint0_23);
        }
#line 733 "typeclasses.m"
        {
#line 733 "typeclasses.m"
          check_hlds__typeclasses__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[2], check_hlds__typeclasses__Ancestors_1, ((MR_Box) (check_hlds__typeclasses__ProgConstraint0_23)), &check_hlds__typeclasses__conv0_Descendants_24);
        }
#line 733 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 733 "typeclasses.m"
          {
#line 733 "typeclasses.m"
            check_hlds__typeclasses__Descendants_24 = ((MR_Word) check_hlds__typeclasses__conv0_Descendants_24);
#line 733 "typeclasses.m"
            check_hlds__typeclasses__succeeded = MR_TRUE;
#line 733 "typeclasses.m"
          }
#line 740 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 735 "typeclasses.m"
          {
#line 735 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31;
#line 735 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_32_32;
#line 737 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_25_25;

#line 735 "typeclasses.m"
            {
#line 735 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__Constraint0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31);
            }
#line 736 "typeclasses.m"
            {
#line 736 "typeclasses.m"
              check_hlds__typeclasses__add_superclass_proofs_4_p_0(check_hlds__typeclasses__ProgConstraint0_23, check_hlds__typeclasses__Descendants_24, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_2, &check_hlds__typeclasses__STATE_VARIABLE_Proofs_32_32);
            }
#line 737 "typeclasses.m"
            {
#line 737 "typeclasses.m"
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_Proofs_32_32, check_hlds__typeclasses__STATE_VARIABLE_Proofs_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_31_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, check_hlds__typeclasses__HeadVar__7_7, &check_hlds__typeclasses__V_25_25);
            }
#line 739 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__8_8 = (MR_Integer) 1;
#line 735 "typeclasses.m"
          }
#line 740 "typeclasses.m"
        else
#line 742 "typeclasses.m"
          {
#line 742 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TailConstraints_26;

#line 741 "typeclasses.m"
            {
#line 741 "typeclasses.m"
              check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_1, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_2, check_hlds__typeclasses__STATE_VARIABLE_Proofs_3, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_4, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_5, check_hlds__typeclasses__Constraints0_20, &check_hlds__typeclasses__TailConstraints_26, check_hlds__typeclasses__HeadVar__8_8);
            }
#line 743 "typeclasses.m"
            {
#line 743 "typeclasses.m"
              MR_Word base;
#line 743 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__7_7 = base;
#line 743 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__Constraint0_19));
#line 743 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__TailConstraints_26));
#line 743 "typeclasses.m"
            }
#line 742 "typeclasses.m"
          }
#line 730 "typeclasses.m"
      }
#line 728 "typeclasses.m"
  }
#line 723 "typeclasses.m"
}

#line 713 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_class_rules_7_p_0(
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_17,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_18,
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20,
#line 713 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_22,
#line 713 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_11)
#line 713 "typeclasses.m"
{
#line 717 "typeclasses.m"
  {
#line 717 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 717 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
#line 717 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
#line 717 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven_16;
#line 718 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
#line 718 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_27_27;
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_28_28;
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_29_29;
#line 721 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_26_26;

#line 719 "typeclasses.m"
    {
#line 719 "typeclasses.m"
      check_hlds__typeclasses__apply_class_rules_2_8_p_0(check_hlds__typeclasses__Ancestors_15, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_17, check_hlds__typeclasses__STATE_VARIABLE_Proofs_18, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_19, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_20, check_hlds__typeclasses__Unproven0_12, &check_hlds__typeclasses__Unproven_16, check_hlds__typeclasses__Changed_11);
    }
#line 721 "typeclasses.m"
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 0)));
#line 721 "typeclasses.m"
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 1)));
#line 721 "typeclasses.m"
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 2)));
#line 721 "typeclasses.m"
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_21, (MR_Integer) 3)));
#line 721 "typeclasses.m"
    {
#line 721 "typeclasses.m"
      MR_Word base;
#line 721 "typeclasses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "typeclasses.m"
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_22 = base;
#line 721 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_16));
#line 721 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_27_27));
#line 721 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_28_28));
#line 721 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_29_29));
#line 721 "typeclasses.m"
    }
#line 717 "typeclasses.m"
  }
#line 713 "typeclasses.m"
}

#line 676 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 676 "typeclasses.m"
  MR_Integer check_hlds__typeclasses__InstanceNum0_11,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 676 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_34,
#line 676 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_15)
#line 676 "typeclasses.m"
{
#line 682 "typeclasses.m"
  while (MR_TRUE)
#line 682 "typeclasses.m"
    {
#line 682 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 682 "typeclasses.m"
      {
#line 682 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instance_9;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instances_10;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Types_18;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ProgConstraints0_19;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTypes0_20;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTVarSet_21;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewTVarSet_22;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Renaming_23;
#line 682 "typeclasses.m"
        MR_Word check_hlds__typeclasses__InstanceTypes_24;
#line 683 "typeclasses.m"
        MR_Word check_hlds__typeclasses___Ids_16;
#line 683 "typeclasses.m"
        MR_Word check_hlds__typeclasses___Name_17;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_40_40;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_41_41;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_42_42;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_44_44;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_45_45;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_46_46;
#line 684 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_48_48;
#line 703 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Subst_25;

#line 681 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 681 "typeclasses.m"
          {
#line 681 "typeclasses.m"
            check_hlds__typeclasses__Instance_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 681 "typeclasses.m"
            check_hlds__typeclasses__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 683 "typeclasses.m"
            check_hlds__typeclasses___Ids_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 0)));
#line 683 "typeclasses.m"
            check_hlds__typeclasses___Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 1)));
#line 683 "typeclasses.m"
            check_hlds__typeclasses__Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_12, (MR_Integer) 2)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 0)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 1)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 2)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__ProgConstraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 3)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__InstanceTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 4)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 5)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 6)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 7)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__InstanceTVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 8)));
#line 684 "typeclasses.m"
            check_hlds__typeclasses__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Instance_9, (MR_Integer) 9)));
#line 687 "typeclasses.m"
            {
#line 687 "typeclasses.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, check_hlds__typeclasses__InstanceTVarSet_21, &check_hlds__typeclasses__NewTVarSet_22, &check_hlds__typeclasses__Renaming_23);
            }
#line 688 "typeclasses.m"
            {
#line 688 "typeclasses.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__InstanceTypes0_20, &check_hlds__typeclasses__InstanceTypes_24);
            }
#line 691 "typeclasses.m"
            {
#line 691 "typeclasses.m"
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typeclasses__InstanceTypes_24, check_hlds__typeclasses__Types_18, &check_hlds__typeclasses__Subst_25);
            }
#line 703 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 693 "typeclasses.m"
              {
#line 693 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraints1_26;
#line 693 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraints_27;
#line 693 "typeclasses.m"
                MR_Word check_hlds__typeclasses__NewProof_28;
#line 693 "typeclasses.m"
                MR_Word check_hlds__typeclasses__ProgConstraint_29;

#line 693 "typeclasses.m"
                *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__NewTVarSet_22;
#line 694 "typeclasses.m"
                {
#line 694 "typeclasses.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Renaming_23, check_hlds__typeclasses__ProgConstraints0_19, &check_hlds__typeclasses__ProgConstraints1_26);
                }
#line 696 "typeclasses.m"
                {
#line 696 "typeclasses.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__typeclasses__Subst_25, check_hlds__typeclasses__ProgConstraints1_26, &check_hlds__typeclasses__ProgConstraints_27);
                }
#line 698 "typeclasses.m"
                {
#line 698 "typeclasses.m"
                  hlds__hlds_data__init_hlds_constraint_list_2_p_0(check_hlds__typeclasses__ProgConstraints_27, check_hlds__typeclasses__NewConstraints_15);
                }
#line 700 "typeclasses.m"
                {
#line 700 "typeclasses.m"
                  check_hlds__typeclasses__NewProof_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 700 "typeclasses.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typeclasses__NewProof_28, 0) = ((MR_Box) (check_hlds__typeclasses__InstanceNum0_11));
#line 700 "typeclasses.m"
                }
#line 701 "typeclasses.m"
                {
#line 701 "typeclasses.m"
                  hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typeclasses__Constraint_12, &check_hlds__typeclasses__ProgConstraint_29);
                }
#line 702 "typeclasses.m"
                {
#line 702 "typeclasses.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__typeclasses__ProgConstraint_29)), ((MR_Box) (check_hlds__typeclasses__NewProof_28)), check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33, check_hlds__typeclasses__STATE_VARIABLE_Proofs_34);
                }
#line 693 "typeclasses.m"
                check_hlds__typeclasses__succeeded = MR_TRUE;
#line 693 "typeclasses.m"
              }
#line 703 "typeclasses.m"
            else
#line 704 "typeclasses.m"
              {
#line 704 "typeclasses.m"
                MR_Integer check_hlds__typeclasses__InstanceNum_30 = (check_hlds__typeclasses__InstanceNum0_11 + (MR_Integer) 1);

#line 705 "typeclasses.m"
                /* direct tailcall eliminated */
#line 705 "typeclasses.m"
                {
#line 705 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Instances_10;
#line 705 "typeclasses.m"
                  MR_Integer check_hlds__typeclasses__InstanceNum0__tmp_copy_11 = check_hlds__typeclasses__InstanceNum_30;

#line 705 "typeclasses.m"
                  check_hlds__typeclasses__InstanceNum0_11 = check_hlds__typeclasses__InstanceNum0__tmp_copy_11;
#line 705 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 705 "typeclasses.m"
                }
#line 705 "typeclasses.m"
                continue;
#line 704 "typeclasses.m"
              }
#line 681 "typeclasses.m"
          }
#line 682 "typeclasses.m"
        return check_hlds__typeclasses__succeeded;
#line 682 "typeclasses.m"
      }
#line 682 "typeclasses.m"
      break;
#line 682 "typeclasses.m"
    }
#line 676 "typeclasses.m"
}

#line 665 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__find_matching_instance_rule_7_p_0(
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Instances_8,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14,
#line 665 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_15,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_16,
#line 665 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__NewConstraints_12)
#line 665 "typeclasses.m"
{
#line 671 "typeclasses.m"
  {
#line 671 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 673 "typeclasses.m"
    {
#line 673 "typeclasses.m"
      return check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_2_8_p_0(check_hlds__typeclasses__Instances_8, (MR_Integer) 1, check_hlds__typeclasses__Constraint_9, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_13, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_14, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_15, check_hlds__typeclasses__STATE_VARIABLE_Proofs_16, check_hlds__typeclasses__NewConstraints_12);
    }
#line 671 "typeclasses.m"
    return check_hlds__typeclasses__succeeded;
#line 671 "typeclasses.m"
  }
#line 665 "typeclasses.m"
}

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_1(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 651 "typeclasses.m"
{
#line 651 "typeclasses.m"
  {
#line 651 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 651 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0, 1);
#line 651 "typeclasses.m"
  }
#line 651 "typeclasses.m"
}

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_3(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 651 "typeclasses.m"
{
#line 651 "typeclasses.m"
  {
#line 651 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 651 "typeclasses.m"
    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6);
#line 651 "typeclasses.m"
    {
#line 651 "typeclasses.m"
      check_hlds__typeclasses__matches_no_constraint_2_p_0_2(check_hlds__typeclasses__env_ptr);
#line 651 "typeclasses.m"
      return;
    }
#line 651 "typeclasses.m"
  }
#line 651 "typeclasses.m"
}

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_2(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 651 "typeclasses.m"
{
#line 651 "typeclasses.m"
  {
#line 651 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 652 "typeclasses.m"
    {
#line 652 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4);
    }
#line 652 "typeclasses.m"
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded)
#line 652 "typeclasses.m"
      {
#line 652 "typeclasses.m"
        check_hlds__typeclasses__matches_no_constraint_2_p_0_1(check_hlds__typeclasses__env_ptr);
#line 652 "typeclasses.m"
        return;
      }
#line 651 "typeclasses.m"
  }
#line 651 "typeclasses.m"
}

#line 651 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0_4(
#line 651 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 651 "typeclasses.m"
{
#line 651 "typeclasses.m"
  {
#line 651 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 651 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__commit_0) == 0)
#line 651 "typeclasses.m"
      {
#line 651 "typeclasses.m"
        {
#line 651 "typeclasses.m"
          {
#line 651 "typeclasses.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__conv0_S_6, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3, check_hlds__typeclasses__matches_no_constraint_2_p_0_3, check_hlds__typeclasses__env_ptr);
          }
#line 651 "typeclasses.m"
        }
#line 651 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 651 "typeclasses.m"
      }
#line 651 "typeclasses.m"
    else
#line 651 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 651 "typeclasses.m"
  }
#line 651 "typeclasses.m"
}

#line 646 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__matches_no_constraint_2_p_0(
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Seen_3,
#line 646 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_4)
#line 646 "typeclasses.m"
{
#line 646 "typeclasses.m"
  {
#line 646 "typeclasses.m"
    struct check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0_s check_hlds__typeclasses__env;

#line 646 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Seen_3 = check_hlds__typeclasses__Seen_3;
#line 646 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__Constraint_4 = check_hlds__typeclasses__Constraint_4;
#line 651 "typeclasses.m"
    {
#line 651 "typeclasses.m"
      check_hlds__typeclasses__matches_no_constraint_2_p_0_4(&check_hlds__typeclasses__env);
    }
#line 650 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded);
#line 650 "typeclasses.m"
    return (check_hlds__typeclasses__env).check_hlds__typeclasses__matches_no_constraint_2_p_0_env_0__succeeded;
#line 646 "typeclasses.m"
  }
#line 646 "typeclasses.m"
}

#line 628 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1(
#line 628 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 628 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1)
#line 628 "typeclasses.m"
{
#line 628 "typeclasses.m"
  {
#line 628 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 628 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;

#line 628 "typeclasses.m"
    {
#line 628 "typeclasses.m"
      return check_hlds__typeclasses__succeeded = check_hlds__typeclasses__matches_no_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1));
    }
#line 628 "typeclasses.m"
    return check_hlds__typeclasses__succeeded;
#line 628 "typeclasses.m"
  }
#line 628 "typeclasses.m"
}

#line 605 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_2_15_p_0(
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_1,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_2,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_5,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_6,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Redundant_10,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_12,
#line 605 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__13_13,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__14_14,
#line 605 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__15_15)
#line 605 "typeclasses.m"
{
#line 613 "typeclasses.m"
  {
#line 613 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;

#line 613 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "typeclasses.m"
      {
#line 614 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__15_15 = (MR_Integer) 0;
#line 614 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Seen_12 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
#line 613 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Redundant_10 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
#line 613 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
#line 613 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Proofs_6 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_5;
#line 613 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
#line 613 "typeclasses.m"
      }
#line 613 "typeclasses.m"
    else
#line 616 "typeclasses.m"
      {
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__C_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 0)));
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Cs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__13_13, (MR_Integer) 1)));
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ClassName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 1)));
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Types_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 2)));
#line 616 "typeclasses.m"
        MR_Integer check_hlds__typeclasses__Arity_47;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Instances_48;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewConstraints_51;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed1_52;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TailConstraints_53;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed2_54;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_65_65;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73;
#line 616 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_74_74;
#line 617 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_40, (MR_Integer) 0)));
#line 619 "typeclasses.m"
        MR_Box check_hlds__typeclasses__conv0_Instances_48;
#line 635 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewConstraints0_50;
#line 635 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
#line 635 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_67_67;

#line 618 "typeclasses.m"
        {
#line 618 "typeclasses.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typeclasses__Types_46, &check_hlds__typeclasses__Arity_47);
        }
#line 619 "typeclasses.m"
        {
#line 619 "typeclasses.m"
          check_hlds__typeclasses__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 0) = ((MR_Box) (check_hlds__typeclasses__ClassName_45));
#line 619 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_65_65, 1) = ((MR_Box) (check_hlds__typeclasses__Arity_47));
#line 619 "typeclasses.m"
        }
#line 619 "typeclasses.m"
        {
#line 619 "typeclasses.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_2, ((MR_Box) (check_hlds__typeclasses__V_65_65)), &check_hlds__typeclasses__conv0_Instances_48);
        }
#line 619 "typeclasses.m"
        check_hlds__typeclasses__Instances_48 = ((MR_Word) check_hlds__typeclasses__conv0_Instances_48);
#line 622 "typeclasses.m"
        {
#line 622 "typeclasses.m"
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__find_matching_instance_rule_7_p_0(check_hlds__typeclasses__Instances_48, check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Proofs_67_67, &check_hlds__typeclasses__NewConstraints0_50);
        }
#line 635 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 625 "typeclasses.m"
          {
#line 625 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_84_84;
#line 625 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_69_69;

#line 625 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Proofs_74_74 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_67_67;
#line 625 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66;
#line 625 "typeclasses.m"
            {
#line 625 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0(check_hlds__typeclasses__C_40, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68);
            }
#line 628 "typeclasses.m"
            {
#line 628 "typeclasses.m"
              check_hlds__typeclasses__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 628 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_8[0]));
#line 628 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 1) = ((MR_Box) (check_hlds__typeclasses__apply_instance_rules_2_15_p_0_1));
#line 628 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 628 "typeclasses.m"
              MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_69_69, 3) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11));
#line 628 "typeclasses.m"
            }
#line 2155 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_84_84 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 628 "typeclasses.m"
            {
#line 628 "typeclasses.m"
              mercury__list__filter_3_p_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__V_69_69, check_hlds__typeclasses__NewConstraints0_50, &check_hlds__typeclasses__NewConstraints_51);
            }
#line 630 "typeclasses.m"
            {
#line 630 "typeclasses.m"
              hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_66_66, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9, &check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70);
            }
#line 633 "typeclasses.m"
            {
#line 633 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typeclasses__TypeCtorInfo_84_84, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11);
            }
#line 634 "typeclasses.m"
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 1;
#line 625 "typeclasses.m"
          }
#line 635 "typeclasses.m"
        else
#line 637 "typeclasses.m"
          {
#line 637 "typeclasses.m"
            {
#line 637 "typeclasses.m"
              check_hlds__typeclasses__NewConstraints_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 0) = ((MR_Box) (check_hlds__typeclasses__C_40));
#line 637 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__NewConstraints_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "typeclasses.m"
            }
#line 638 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_3;
#line 639 "typeclasses.m"
            check_hlds__typeclasses__Changed1_52 = (MR_Integer) 0;
#line 639 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0_11;
#line 639 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70 = check_hlds__typeclasses__STATE_VARIABLE_Redundant_0_9;
#line 639 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_7;
#line 639 "typeclasses.m"
            check_hlds__typeclasses__STATE_VARIABLE_Proofs_74_74 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_5;
#line 637 "typeclasses.m"
          }
#line 641 "typeclasses.m"
        {
#line 641 "typeclasses.m"
          check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_1, check_hlds__typeclasses__InstanceTable_2, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_73_73, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_4, check_hlds__typeclasses__STATE_VARIABLE_Proofs_74_74, check_hlds__typeclasses__STATE_VARIABLE_Proofs_6, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_68_68, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_8, check_hlds__typeclasses__STATE_VARIABLE_Redundant_70_70, check_hlds__typeclasses__STATE_VARIABLE_Redundant_10, check_hlds__typeclasses__STATE_VARIABLE_Seen_71_71, check_hlds__typeclasses__STATE_VARIABLE_Seen_12, check_hlds__typeclasses__Cs_41, &check_hlds__typeclasses__TailConstraints_53, &check_hlds__typeclasses__Changed2_54);
        }
#line 643 "typeclasses.m"
        {
#line 643 "typeclasses.m"
          mercury__bool__or_3_p_0(check_hlds__typeclasses__Changed1_52, check_hlds__typeclasses__Changed2_54, check_hlds__typeclasses__HeadVar__15_15);
        }
#line 644 "typeclasses.m"
        {
#line 644 "typeclasses.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__NewConstraints_51, check_hlds__typeclasses__TailConstraints_53, check_hlds__typeclasses__HeadVar__14_14);
#line 644 "typeclasses.m"
          return;
        }
#line 616 "typeclasses.m"
      }
#line 613 "typeclasses.m"
  }
#line 605 "typeclasses.m"
}

#line 589 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_instance_rules_13_p_0(
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_30,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_31,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_35,
#line 589 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_37,
#line 589 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_21)
#line 589 "typeclasses.m"
{
#line 597 "typeclasses.m"
  {
#line 597 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 0)));
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Assumed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 1)));
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 2)));
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_36, (MR_Integer) 3)));
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant_26;
#line 597 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven_27;

#line 600 "typeclasses.m"
    {
#line 600 "typeclasses.m"
      check_hlds__typeclasses__apply_instance_rules_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_28, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_29, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_30, check_hlds__typeclasses__STATE_VARIABLE_Proofs_31, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_32, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_33, check_hlds__typeclasses__Redundant0_24, &check_hlds__typeclasses__Redundant_26, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_34, check_hlds__typeclasses__STATE_VARIABLE_Seen_35, check_hlds__typeclasses__Unproven0_22, &check_hlds__typeclasses__Unproven_27, check_hlds__typeclasses__Changed_21);
    }
#line 603 "typeclasses.m"
    {
#line 603 "typeclasses.m"
      MR_Word base;
#line 603 "typeclasses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 603 "typeclasses.m"
      *check_hlds__typeclasses__STATE_VARIABLE_Constraints_37 = base;
#line 603 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_27));
#line 603 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_23));
#line 603 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_26));
#line 603 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_25));
#line 603 "typeclasses.m"
    }
#line 597 "typeclasses.m"
  }
#line 589 "typeclasses.m"
}

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 577 "typeclasses.m"
{
#line 577 "typeclasses.m"
  {
#line 577 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 577 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0, 1);
#line 577 "typeclasses.m"
  }
#line 577 "typeclasses.m"
}

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 577 "typeclasses.m"
{
#line 577 "typeclasses.m"
  {
#line 577 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 577 "typeclasses.m"
    (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24 = ((MR_Word) (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24);
#line 577 "typeclasses.m"
    {
#line 577 "typeclasses.m"
      check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(check_hlds__typeclasses__env_ptr);
#line 577 "typeclasses.m"
      return;
    }
#line 577 "typeclasses.m"
  }
#line 577 "typeclasses.m"
}

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_2(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 577 "typeclasses.m"
{
#line 577 "typeclasses.m"
  {
#line 577 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 578 "typeclasses.m"
    {
#line 578 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = hlds__hlds_data__matching_constraints_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13);
    }
#line 578 "typeclasses.m"
    if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
#line 578 "typeclasses.m"
      {
#line 578 "typeclasses.m"
        check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_1(check_hlds__typeclasses__env_ptr);
#line 578 "typeclasses.m"
        return;
      }
#line 577 "typeclasses.m"
  }
#line 577 "typeclasses.m"
}

#line 577 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(
#line 577 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 577 "typeclasses.m"
{
#line 577 "typeclasses.m"
  {
#line 577 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 577 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__commit_0) == 0)
#line 577 "typeclasses.m"
      {
#line 577 "typeclasses.m"
        {
#line 577 "typeclasses.m"
          {
#line 577 "typeclasses.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__conv0_A_24, (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_3, check_hlds__typeclasses__env_ptr);
          }
#line 577 "typeclasses.m"
        }
#line 577 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 577 "typeclasses.m"
      }
#line 577 "typeclasses.m"
    else
#line 577 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 577 "typeclasses.m"
  }
#line 577 "typeclasses.m"
}

#line 565 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__AssumedCs_1,
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3,
#line 565 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__4_4,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__5_5,
#line 565 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__6_6)
#line 565 "typeclasses.m"
{
#line 565 "typeclasses.m"
  {
#line 565 "typeclasses.m"
    struct check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0_s check_hlds__typeclasses__env;

#line 565 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1 = check_hlds__typeclasses__AssumedCs_1;
#line 570 "typeclasses.m"
    if ((check_hlds__typeclasses__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "typeclasses.m"
      {
#line 570 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "typeclasses.m"
        *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 0;
#line 570 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2;
#line 570 "typeclasses.m"
      }
#line 570 "typeclasses.m"
    else
#line 572 "typeclasses.m"
      {
#line 572 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Cs_14;
#line 572 "typeclasses.m"
        MR_Word check_hlds__typeclasses__NewCs0_17;
#line 572 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Changed0_18;
#line 572 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;

#line 571 "typeclasses.m"
        (check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 0)));
#line 571 "typeclasses.m"
        check_hlds__typeclasses__Cs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__4_4, (MR_Integer) 1)));
#line 573 "typeclasses.m"
        {
#line 573 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__AssumedCs_1, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_2, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__Cs_14, &check_hlds__typeclasses__NewCs0_17, &check_hlds__typeclasses__Changed0_18);
        }
#line 577 "typeclasses.m"
        {
#line 577 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_4(&check_hlds__typeclasses__env);
        }
#line 584 "typeclasses.m"
        if ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__succeeded)
#line 581 "typeclasses.m"
          {
#line 581 "typeclasses.m"
            {
#line 581 "typeclasses.m"
              hlds__hlds_data__update_constraint_map_3_p_0((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3);
            }
#line 582 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__5_5 = check_hlds__typeclasses__NewCs0_17;
#line 583 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__6_6 = (MR_Integer) 1;
#line 581 "typeclasses.m"
          }
#line 584 "typeclasses.m"
        else
#line 585 "typeclasses.m"
          {
#line 585 "typeclasses.m"
            {
#line 585 "typeclasses.m"
              MR_Word base;
#line 585 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__5_5 = base;
#line 585 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__typeclasses__env).check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0_env_0__C_13));
#line 585 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__NewCs0_17));
#line 585 "typeclasses.m"
            }
#line 586 "typeclasses.m"
            *check_hlds__typeclasses__HeadVar__6_6 = check_hlds__typeclasses__Changed0_18;
#line 586 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_3 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_22_22;
#line 585 "typeclasses.m"
          }
#line 572 "typeclasses.m"
      }
#line 565 "typeclasses.m"
  }
#line 565 "typeclasses.m"
}

#line 489 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_9,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes0_10,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDep_12,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 489 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 489 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25,
#line 489 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_26)
#line 489 "typeclasses.m"
{
#line 494 "typeclasses.m"
  {
#line 494 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 494 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 2)));
#line 494 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Domain_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 0)));
#line 494 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Range_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_12, (MR_Integer) 1)));
#line 495 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 0)));
#line 495 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_9, (MR_Integer) 1)));
#line 516 "typeclasses.m"
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_17_60;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst_20;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes_21;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_34;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_35;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesBVars_36;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst0_37;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_57;
#line 500 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_58;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_13_48;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_14_49;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesA_44;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesB_45;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RTypesBVars_46;
#line 549 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Subst0_47;
#line 554 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_22_22;

#line 550 "typeclasses.m"
    {
#line 550 "typeclasses.m"
      check_hlds__typeclasses__RTypesA_34 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__InstanceTypes0_10);
    }
#line 551 "typeclasses.m"
    {
#line 551 "typeclasses.m"
      check_hlds__typeclasses__RTypesB_35 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_38, check_hlds__typeclasses__Domain_18, check_hlds__typeclasses__ConstraintTypes_17);
    }
#line 552 "typeclasses.m"
    {
#line 552 "typeclasses.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_35, &check_hlds__typeclasses__RTypesBVars_36);
    }
#line 553 "typeclasses.m"
    {
#line 553 "typeclasses.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], check_hlds__typeclasses__TypeCtorInfo_13_38, &check_hlds__typeclasses__Subst0_37);
    }
#line 554 "typeclasses.m"
    {
#line 554 "typeclasses.m"
      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_34, check_hlds__typeclasses__RTypesB_35, check_hlds__typeclasses__RTypesBVars_36, check_hlds__typeclasses__Subst0_37, &check_hlds__typeclasses__Subst_20);
    }
#line 500 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 500 "typeclasses.m"
      {
#line 501 "typeclasses.m"
        {
#line 501 "typeclasses.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typeclasses__Subst_20, check_hlds__typeclasses__InstanceTypes0_10, &check_hlds__typeclasses__InstanceTypes_21);
        }
#line 2633 "check_hlds.typeclasses.c"
        check_hlds__typeclasses__TypeCtorInfo_13_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 550 "typeclasses.m"
        {
#line 550 "typeclasses.m"
          check_hlds__typeclasses__RTypesA_44 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
        }
#line 551 "typeclasses.m"
        {
#line 551 "typeclasses.m"
          check_hlds__typeclasses__RTypesB_45 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_13_48, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
        }
#line 552 "typeclasses.m"
        {
#line 552 "typeclasses.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typeclasses__RTypesB_45, &check_hlds__typeclasses__RTypesBVars_46);
        }
#line 2650 "check_hlds.typeclasses.c"
        check_hlds__typeclasses__TypeInfo_14_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[3];
#line 553 "typeclasses.m"
        {
#line 553 "typeclasses.m"
          mercury__map__init_1_p_0(check_hlds__typeclasses__TypeInfo_14_49, check_hlds__typeclasses__TypeCtorInfo_13_48, &check_hlds__typeclasses__Subst0_47);
        }
#line 554 "typeclasses.m"
        {
#line 554 "typeclasses.m"
          check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_44, check_hlds__typeclasses__RTypesB_45, check_hlds__typeclasses__RTypesBVars_46, check_hlds__typeclasses__Subst0_47, &check_hlds__typeclasses__V_22_22);
        }
#line 506 "typeclasses.m"
        check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
#line 500 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 500 "typeclasses.m"
          {
#line 2668 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_17_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 539 "typeclasses.m"
            {
#line 539 "typeclasses.m"
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__InstanceTypes_21);
            }
#line 540 "typeclasses.m"
            {
#line 540 "typeclasses.m"
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_60, check_hlds__typeclasses__Range_19, check_hlds__typeclasses__ConstraintTypes_17);
            }
#line 541 "typeclasses.m"
            {
#line 541 "typeclasses.m"
              check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_57, check_hlds__typeclasses__RTypesB_58, check_hlds__typeclasses__HeadTypeParams_11, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27);
            }
#line 500 "typeclasses.m"
          }
#line 500 "typeclasses.m"
      }
#line 516 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 515 "typeclasses.m"
      {
#line 515 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_27;
#line 515 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = (MR_Integer) 1;
#line 515 "typeclasses.m"
      }
#line 516 "typeclasses.m"
    else
#line 517 "typeclasses.m"
      {
#line 517 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_26 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_25;
#line 517 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Bindings_24 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23;
#line 517 "typeclasses.m"
      }
#line 494 "typeclasses.m"
  }
#line 489 "typeclasses.m"
}

#line 485 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1(
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 485 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 485 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 485 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 485 "typeclasses.m"
{
#line 485 "typeclasses.m"
  {
#line 485 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 485 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24;
#line 485 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26;

#line 485 "typeclasses.m"
    {
#line 485 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_fundep_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26);
    }
#line 485 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_24));
#line 485 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_26));
#line 485 "typeclasses.m"
  }
#line 485 "typeclasses.m"
}

#line 478 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_4_8_p_0(
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_9,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTypes_10,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_11,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_12,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15,
#line 478 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_16,
#line 478 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17,
#line 478 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_18)
#line 478 "typeclasses.m"
{
#line 483 "typeclasses.m"
  {
#line 483 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 483 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_19_19;
#line 484 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16;
#line 484 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18;

#line 485 "typeclasses.m"
    {
#line 485 "typeclasses.m"
      check_hlds__typeclasses__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[2]));
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_4_8_p_0_1));
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 3) = ((MR_Box) (check_hlds__typeclasses__Constraint_12));
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_10));
#line 485 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_19_19, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_11));
#line 485 "typeclasses.m"
    }
#line 484 "typeclasses.m"
    {
#line 484 "typeclasses.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_19_19, check_hlds__typeclasses__FunDeps_9, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_15)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_17)), &check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
    }
#line 484 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_16 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_16);
#line 484 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_18 = ((MR_Word) check_hlds__typeclasses__conv2_STATE_VARIABLE_Changed_18);
#line 483 "typeclasses.m"
  }
#line 478 "typeclasses.m"
}

#line 468 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1(
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 468 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 468 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 468 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 468 "typeclasses.m"
{
#line 468 "typeclasses.m"
  {
#line 468 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16;
#line 468 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18;

#line 468 "typeclasses.m"
    {
#line 468 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_4_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18);
    }
#line 468 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_16));
#line 468 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_18));
#line 468 "typeclasses.m"
  }
#line 468 "typeclasses.m"
}

#line 455 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_3_10_p_0(
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_11,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_12,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_13,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceDefn_14,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_27,
#line 455 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28,
#line 455 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_29)
#line 455 "typeclasses.m"
{
#line 461 "typeclasses.m"
  {
#line 461 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 8)));
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 4)));
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__NewTVarSet_20;
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Renaming_21;
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTypes_22;
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed0_23;
#line 461 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_30_30;
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 0)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 1)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 2)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 3)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 5)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 6)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 7)));
#line 462 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__InstanceDefn_14, (MR_Integer) 9)));
#line 467 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27;
#line 467 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_Changed0_23;

#line 464 "typeclasses.m"
    {
#line 464 "typeclasses.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24, check_hlds__typeclasses__InstanceTVarSet_18, &check_hlds__typeclasses__NewTVarSet_20, &check_hlds__typeclasses__Renaming_21);
    }
#line 465 "typeclasses.m"
    {
#line 465 "typeclasses.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typeclasses__Renaming_21, check_hlds__typeclasses__InstanceTypes0_19, &check_hlds__typeclasses__InstanceTypes_22);
    }
#line 468 "typeclasses.m"
    {
#line 468 "typeclasses.m"
      check_hlds__typeclasses__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[1]));
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_3_10_p_0_1));
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 3) = ((MR_Box) (check_hlds__typeclasses__FunDeps_12));
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTypes_22));
#line 468 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_30_30, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_13));
#line 468 "typeclasses.m"
    }
#line 467 "typeclasses.m"
    {
#line 467 "typeclasses.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_30_30, check_hlds__typeclasses__Constraints_11, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_26)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed0_23);
    }
#line 467 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_27 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_27);
#line 467 "typeclasses.m"
    check_hlds__typeclasses__Changed0_23 = ((MR_Word) check_hlds__typeclasses__conv2_Changed0_23);
#line 474 "typeclasses.m"
    if ((check_hlds__typeclasses__Changed0_23 == (MR_Integer) 0))
#line 475 "typeclasses.m"
      {
#line 475 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_24;
#line 475 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_28;
#line 475 "typeclasses.m"
      }
#line 474 "typeclasses.m"
    else
#line 471 "typeclasses.m"
      {
#line 472 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_25 = check_hlds__typeclasses__NewTVarSet_20;
#line 473 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_Changed_29 = (MR_Integer) 1;
#line 471 "typeclasses.m"
      }
#line 461 "typeclasses.m"
  }
#line 455 "typeclasses.m"
}

#line 452 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1(
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 452 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 452 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
#line 452 "typeclasses.m"
{
#line 452 "typeclasses.m"
  {
#line 452 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 452 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25;
#line 452 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27;
#line 452 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29;

#line 452 "typeclasses.m"
    {
#line 452 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_3_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29);
    }
#line 452 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_TVarSet_25));
#line 452 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Bindings_27));
#line 452 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv3_STATE_VARIABLE_Changed_29));
#line 452 "typeclasses.m"
  }
#line 452 "typeclasses.m"
}

#line 439 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_instance_improvement_2_11_p_0(
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_12,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_13,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_14,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_15,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_16,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_28,
#line 439 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29,
#line 439 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_30)
#line 439 "typeclasses.m"
{
#line 445 "typeclasses.m"
  {
#line 445 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassDefn_20;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__FunDeps_21;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceDefns_22;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintSet_23;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintList_24;
#line 445 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_31_31;
#line 446 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_20;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_36_36;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_37_37;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42;
#line 447 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_43_43;
#line 448 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv1_InstanceDefns_22;
#line 449 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_ConstraintSet_23;
#line 451 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26;
#line 451 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28;
#line 451 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30;

#line 446 "typeclasses.m"
    {
#line 446 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_12, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv0_ClassDefn_20);
    }
#line 446 "typeclasses.m"
    check_hlds__typeclasses__ClassDefn_20 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_20);
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 0)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 1)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 2)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 3)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 4)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 5)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 6)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 7)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 8)));
#line 447 "typeclasses.m"
    check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_20, (MR_Integer) 9)));
#line 448 "typeclasses.m"
    {
#line 448 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[5], check_hlds__typeclasses__InstanceTable_13, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv1_InstanceDefns_22);
    }
#line 448 "typeclasses.m"
    check_hlds__typeclasses__InstanceDefns_22 = ((MR_Word) check_hlds__typeclasses__conv1_InstanceDefns_22);
#line 449 "typeclasses.m"
    {
#line 449 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_44_44, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_15, ((MR_Box) (check_hlds__typeclasses__ClassId_16)), &check_hlds__typeclasses__conv2_ConstraintSet_23);
    }
#line 449 "typeclasses.m"
    check_hlds__typeclasses__ConstraintSet_23 = ((MR_Word) check_hlds__typeclasses__conv2_ConstraintSet_23);
#line 450 "typeclasses.m"
    {
#line 450 "typeclasses.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_23, &check_hlds__typeclasses__ConstraintList_24);
    }
#line 452 "typeclasses.m"
    {
#line 452 "typeclasses.m"
      check_hlds__typeclasses__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_7[0]));
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 1) = ((MR_Box) (check_hlds__typeclasses__do_instance_improvement_2_11_p_0_1));
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 3) = ((MR_Box) (check_hlds__typeclasses__ConstraintList_24));
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 4) = ((MR_Box) (check_hlds__typeclasses__FunDeps_21));
#line 452 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_31_31, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_14));
#line 452 "typeclasses.m"
    }
#line 451 "typeclasses.m"
    {
#line 451 "typeclasses.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_31_31, check_hlds__typeclasses__InstanceDefns_22, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_27)), &check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Changed_0_29)), &check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
    }
#line 451 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_TVarSet_26);
#line 451 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_28 = ((MR_Word) check_hlds__typeclasses__conv7_STATE_VARIABLE_Bindings_28);
#line 451 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Changed_30 = ((MR_Word) check_hlds__typeclasses__conv6_STATE_VARIABLE_Changed_30);
#line 445 "typeclasses.m"
  }
#line 439 "typeclasses.m"
}

#line 388 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_pair_8_p_0(
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintA_1,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ConstraintB_2,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__3_3,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 388 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 388 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 388 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
#line 388 "typeclasses.m"
{
#line 392 "typeclasses.m"
  while (MR_TRUE)
#line 392 "typeclasses.m"
    {
#line 392 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 392 "typeclasses.m"
      {
#line 392 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 392 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "typeclasses.m"
          {
#line 392 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 392 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 392 "typeclasses.m"
          }
#line 392 "typeclasses.m"
        else
#line 394 "typeclasses.m"
          {
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__FunDep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 0)));
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__3_3, (MR_Integer) 1)));
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypesA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 2)));
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypesB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 2)));
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Domain_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 0)));
#line 394 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Range_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__FunDep_20, (MR_Integer) 1)));
#line 406 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 0)));
#line 406 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintA_1, (MR_Integer) 1)));
#line 407 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 0)));
#line 407 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ConstraintB_2, (MR_Integer) 1)));
#line 422 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_17_78;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_57;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_58;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_75;
#line 412 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_76;
#line 526 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_9_66;
#line 526 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeInfo_10_67;
#line 526 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesA_64;
#line 526 "typeclasses.m"
            MR_Word check_hlds__typeclasses__RTypesB_65;

#line 527 "typeclasses.m"
            {
#line 527 "typeclasses.m"
              check_hlds__typeclasses__RTypesA_57 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesA_45);
            }
#line 528 "typeclasses.m"
            {
#line 528 "typeclasses.m"
              check_hlds__typeclasses__RTypesB_58 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_59, check_hlds__typeclasses__Domain_49, check_hlds__typeclasses__TypesB_48);
            }
#line 529 "typeclasses.m"
            {
#line 529 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[6], ((MR_Box) (check_hlds__typeclasses__RTypesA_57)), ((MR_Box) (check_hlds__typeclasses__RTypesB_58)));
            }
#line 412 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 412 "typeclasses.m"
              {
#line 3300 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeCtorInfo_9_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 527 "typeclasses.m"
                {
#line 527 "typeclasses.m"
                  check_hlds__typeclasses__RTypesA_64 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                }
#line 528 "typeclasses.m"
                {
#line 528 "typeclasses.m"
                  check_hlds__typeclasses__RTypesB_65 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_9_66, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                }
#line 3312 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_10_67 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
#line 529 "typeclasses.m"
                {
#line 529 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_10_67, ((MR_Box) (check_hlds__typeclasses__RTypesA_64)), ((MR_Box) (check_hlds__typeclasses__RTypesB_65)));
                }
#line 413 "typeclasses.m"
                check_hlds__typeclasses__succeeded = !(check_hlds__typeclasses__succeeded);
#line 412 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 412 "typeclasses.m"
                  {
#line 3325 "check_hlds.typeclasses.c"
                    check_hlds__typeclasses__TypeCtorInfo_17_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 539 "typeclasses.m"
                    {
#line 539 "typeclasses.m"
                      check_hlds__typeclasses__RTypesA_75 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesA_45);
                    }
#line 540 "typeclasses.m"
                    {
#line 540 "typeclasses.m"
                      check_hlds__typeclasses__RTypesB_76 = hlds__hlds_data__restrict_list_elements_2_f_0(check_hlds__typeclasses__TypeCtorInfo_17_78, check_hlds__typeclasses__Range_50, check_hlds__typeclasses__TypesB_48);
                    }
#line 541 "typeclasses.m"
                    {
#line 541 "typeclasses.m"
                      check_hlds__typeclasses__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__typeclasses__RTypesA_75, check_hlds__typeclasses__RTypesB_76, check_hlds__typeclasses__HeadTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51);
                    }
#line 412 "typeclasses.m"
                  }
#line 412 "typeclasses.m"
              }
#line 422 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 421 "typeclasses.m"
              {
#line 421 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_27_51;
#line 421 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = (MR_Integer) 1;
#line 421 "typeclasses.m"
              }
#line 422 "typeclasses.m"
            else
#line 423 "typeclasses.m"
              {
#line 423 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 423 "typeclasses.m"
                check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 423 "typeclasses.m"
              }
#line 397 "typeclasses.m"
            /* direct tailcall eliminated */
#line 397 "typeclasses.m"
            {
#line 397 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__3__tmp_copy_3 = check_hlds__typeclasses__FunDeps_21;
#line 397 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 397 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 397 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 397 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
#line 397 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__3_3 = check_hlds__typeclasses__HeadVar__3__tmp_copy_3;
#line 397 "typeclasses.m"
            }
#line 397 "typeclasses.m"
            continue;
#line 394 "typeclasses.m"
          }
#line 392 "typeclasses.m"
      }
#line 392 "typeclasses.m"
      break;
#line 392 "typeclasses.m"
    }
#line 388 "typeclasses.m"
}

#line 373 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraint_1,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_3,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_4,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5,
#line 373 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_6,
#line 373 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7,
#line 373 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_8)
#line 373 "typeclasses.m"
{
#line 377 "typeclasses.m"
  while (MR_TRUE)
#line 377 "typeclasses.m"
    {
#line 377 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 377 "typeclasses.m"
      {
#line 377 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 377 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "typeclasses.m"
          {
#line 377 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_8 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7;
#line 377 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_6 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5;
#line 377 "typeclasses.m"
          }
#line 377 "typeclasses.m"
        else
#line 379 "typeclasses.m"
          {
#line 379 "typeclasses.m"
            MR_Word check_hlds__typeclasses__HeadConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TailConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 379 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 380 "typeclasses.m"
            {
#line 380 "typeclasses.m"
              check_hlds__typeclasses__do_class_improvement_pair_8_p_0(check_hlds__typeclasses__Constraint_1, check_hlds__typeclasses__HeadConstraint_19, check_hlds__typeclasses__FunDeps_3, check_hlds__typeclasses__HeadTypeParams_4, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7, &check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30);
            }
#line 382 "typeclasses.m"
            /* direct tailcall eliminated */
#line 382 "typeclasses.m"
            {
#line 382 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__TailConstraints_20;
#line 382 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_29_29;
#line 382 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_30_30;

#line 382 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 382 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_5;
#line 382 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 382 "typeclasses.m"
            }
#line 382 "typeclasses.m"
            continue;
#line 379 "typeclasses.m"
          }
#line 377 "typeclasses.m"
      }
#line 377 "typeclasses.m"
      break;
#line 377 "typeclasses.m"
    }
#line 373 "typeclasses.m"
}

#line 361 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__FunDeps_2,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_3,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4,
#line 361 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_5,
#line 361 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6,
#line 361 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_7)
#line 361 "typeclasses.m"
{
#line 365 "typeclasses.m"
  while (MR_TRUE)
#line 365 "typeclasses.m"
    {
#line 365 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 365 "typeclasses.m"
      {
#line 365 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 365 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "typeclasses.m"
          {
#line 365 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Changed_7 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6;
#line 365 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_5 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4;
#line 365 "typeclasses.m"
          }
#line 365 "typeclasses.m"
        else
#line 367 "typeclasses.m"
          {
#line 367 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
#line 367 "typeclasses.m"
            MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

#line 368 "typeclasses.m"
            {
#line 368 "typeclasses.m"
              check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_p_0(check_hlds__typeclasses__Constraint_16, check_hlds__typeclasses__Constraints_17, check_hlds__typeclasses__FunDeps_2, check_hlds__typeclasses__HeadTypeParams_3, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6, &check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27);
            }
#line 370 "typeclasses.m"
            /* direct tailcall eliminated */
#line 370 "typeclasses.m"
            {
#line 370 "typeclasses.m"
              MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_17;
#line 370 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_26_26;
#line 370 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_27_27;

#line 370 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Changed_0_6 = check_hlds__typeclasses__STATE_VARIABLE_Changed_0__tmp_copy_6;
#line 370 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_4 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 370 "typeclasses.m"
              check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 370 "typeclasses.m"
            }
#line 370 "typeclasses.m"
            continue;
#line 367 "typeclasses.m"
          }
#line 365 "typeclasses.m"
      }
#line 365 "typeclasses.m"
      break;
#line 365 "typeclasses.m"
    }
#line 361 "typeclasses.m"
}

#line 340 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__do_class_improvement_2_8_p_0(
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_9,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_10,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__RedundantConstraints_11,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassId_12,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19,
#line 340 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_20,
#line 340 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21,
#line 340 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Changed_22)
#line 340 "typeclasses.m"
{
#line 345 "typeclasses.m"
  {
#line 345 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 345 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 345 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassDefn_15;
#line 345 "typeclasses.m"
    MR_Word check_hlds__typeclasses__FunDeps_16;
#line 345 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintSet_17;
#line 345 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ConstraintList_18;
#line 346 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv0_ClassDefn_15;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_25_25;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_26_26;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_27_27;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_28_28;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_29_29;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_30_30;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_31_31;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_32_32;
#line 347 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_33_33;
#line 348 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv1_ConstraintSet_17;

#line 346 "typeclasses.m"
    {
#line 346 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__typeclasses__ClassTable_9, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv0_ClassDefn_15);
    }
#line 346 "typeclasses.m"
    check_hlds__typeclasses__ClassDefn_15 = ((MR_Word) check_hlds__typeclasses__conv0_ClassDefn_15);
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 0)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 1)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__FunDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 2)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 3)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 4)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 5)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 6)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 7)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 8)));
#line 347 "typeclasses.m"
    check_hlds__typeclasses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__ClassDefn_15, (MR_Integer) 9)));
#line 348 "typeclasses.m"
    {
#line 348 "typeclasses.m"
      mercury__map__lookup_3_p_0(check_hlds__typeclasses__TypeCtorInfo_34_34, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_11, ((MR_Box) (check_hlds__typeclasses__ClassId_12)), &check_hlds__typeclasses__conv1_ConstraintSet_17);
    }
#line 348 "typeclasses.m"
    check_hlds__typeclasses__ConstraintSet_17 = ((MR_Word) check_hlds__typeclasses__conv1_ConstraintSet_17);
#line 349 "typeclasses.m"
    {
#line 349 "typeclasses.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, check_hlds__typeclasses__ConstraintSet_17, &check_hlds__typeclasses__ConstraintList_18);
    }
#line 350 "typeclasses.m"
    {
#line 350 "typeclasses.m"
      check_hlds__typeclasses__do_class_improvement_by_pairs_7_p_0(check_hlds__typeclasses__ConstraintList_18, check_hlds__typeclasses__FunDeps_16, check_hlds__typeclasses__HeadTypeParams_10, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_19, check_hlds__typeclasses__STATE_VARIABLE_Bindings_20, check_hlds__typeclasses__STATE_VARIABLE_Changed_0_21, check_hlds__typeclasses__STATE_VARIABLE_Changed_22);
#line 350 "typeclasses.m"
      return;
    }
#line 345 "typeclasses.m"
  }
#line 340 "typeclasses.m"
}

#line 435 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_2(
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5,
#line 435 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_6,
#line 435 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_7)
#line 435 "typeclasses.m"
{
#line 435 "typeclasses.m"
  {
#line 435 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 435 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26;
#line 435 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28;
#line 435 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30;

#line 435 "typeclasses.m"
    {
#line 435 "typeclasses.m"
      check_hlds__typeclasses__do_instance_improvement_2_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28, ((MR_Word) check_hlds__typeclasses__wrapper_arg_6), &check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30);
    }
#line 435 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv6_STATE_VARIABLE_TVarSet_26));
#line 435 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv5_STATE_VARIABLE_Bindings_28));
#line 435 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_7 = ((MR_Box) (check_hlds__typeclasses__conv4_STATE_VARIABLE_Changed_30));
#line 435 "typeclasses.m"
  }
#line 435 "typeclasses.m"
}

#line 337 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0_1(
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 337 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 337 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 337 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 337 "typeclasses.m"
{
#line 337 "typeclasses.m"
  {
#line 337 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 337 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20;
#line 337 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22;

#line 337 "typeclasses.m"
    {
#line 337 "typeclasses.m"
      check_hlds__typeclasses__do_class_improvement_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22);
    }
#line 337 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_Bindings_20));
#line 337 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_Changed_22));
#line 337 "typeclasses.m"
  }
#line 337 "typeclasses.m"
}

#line 314 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__apply_improvement_rules_9_p_0(
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_10,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_11,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_12,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__Constraints_13,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20,
#line 314 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_22,
#line 314 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__Changed_16)
#line 314 "typeclasses.m"
{
#line 319 "typeclasses.m"
  {
#line 319 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_22_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_30_70;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed1_17;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Changed2_18;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassIds_34;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_35_35;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__RedundantConstraints_61;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassIds_62;
#line 319 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_63_63;
#line 334 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
#line 334 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
#line 334 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
#line 336 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23;
#line 336 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_Changed1_17;
#line 432 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_67_67;
#line 432 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_68_68;
#line 432 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_69_69;
#line 434 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20;
#line 434 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22;
#line 434 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv7_Changed2_18;

#line 335 "typeclasses.m"
    {
#line 335 "typeclasses.m"
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__Redundant_33, &check_hlds__typeclasses__ClassIds_34);
    }
#line 337 "typeclasses.m"
    {
#line 337 "typeclasses.m"
      check_hlds__typeclasses__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_5[0]));
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_1));
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 4) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_12));
#line 337 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_35_35, 5) = ((MR_Box) (check_hlds__typeclasses__Redundant_33));
#line 337 "typeclasses.m"
    }
#line 336 "typeclasses.m"
    {
#line 336 "typeclasses.m"
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_22_41, (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_35_35, check_hlds__typeclasses__ClassIds_34, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_21)), &check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv2_Changed1_17);
    }
#line 336 "typeclasses.m"
    check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23 = ((MR_Word) check_hlds__typeclasses__conv3_STATE_VARIABLE_Bindings_23_23);
#line 336 "typeclasses.m"
    check_hlds__typeclasses__Changed1_17 = ((MR_Word) check_hlds__typeclasses__conv2_Changed1_17);
#line 432 "typeclasses.m"
    check_hlds__typeclasses__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 0)));
#line 432 "typeclasses.m"
    check_hlds__typeclasses__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 1)));
#line 432 "typeclasses.m"
    check_hlds__typeclasses__RedundantConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 2)));
#line 432 "typeclasses.m"
    check_hlds__typeclasses__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_13, (MR_Integer) 3)));
#line 3889 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 433 "typeclasses.m"
    {
#line 433 "typeclasses.m"
      mercury__map__keys_2_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[1], check_hlds__typeclasses__RedundantConstraints_61, &check_hlds__typeclasses__ClassIds_62);
    }
#line 435 "typeclasses.m"
    {
#line 435 "typeclasses.m"
      check_hlds__typeclasses__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_6[0]));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 1) = ((MR_Box) (check_hlds__typeclasses__apply_improvement_rules_9_p_0_2));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_10));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_11));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 5) = ((MR_Box) (check_hlds__typeclasses__HeadTypeParams_12));
#line 435 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_63_63, 6) = ((MR_Box) (check_hlds__typeclasses__RedundantConstraints_61));
#line 435 "typeclasses.m"
    }
#line 434 "typeclasses.m"
    {
#line 434 "typeclasses.m"
      mercury__list__foldl3_8_p_0(check_hlds__typeclasses__TypeCtorInfo_30_70, (MR_Word) &check_hlds__typeclasses_scalar_common_1[4], (MR_Word) &check_hlds__typeclasses_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__typeclasses__V_63_63, check_hlds__typeclasses__ClassIds_62, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_19)), &check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20, ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_Bindings_23_23)), &check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22, ((MR_Box) ((MR_Integer) 0)), &check_hlds__typeclasses__conv7_Changed2_18);
    }
#line 434 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_20 = ((MR_Word) check_hlds__typeclasses__conv9_STATE_VARIABLE_TVarSet_20);
#line 434 "typeclasses.m"
    *check_hlds__typeclasses__STATE_VARIABLE_Bindings_22 = ((MR_Word) check_hlds__typeclasses__conv8_STATE_VARIABLE_Bindings_22);
#line 434 "typeclasses.m"
    check_hlds__typeclasses__Changed2_18 = ((MR_Word) check_hlds__typeclasses__conv7_Changed2_18);
#line 327 "typeclasses.m"
    {
#line 327 "typeclasses.m"
      *check_hlds__typeclasses__Changed_16 = mercury__bool__or_2_f_0(check_hlds__typeclasses__Changed1_17, check_hlds__typeclasses__Changed2_18);
    }
#line 319 "typeclasses.m"
  }
#line 314 "typeclasses.m"
}

#line 288 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(
#line 288 "typeclasses.m"
  MR_Word check_hlds__typeclasses__C0_1,
#line 288 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__2_2,
#line 288 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__HeadVar__3_3)
#line 288 "typeclasses.m"
{
#line 291 "typeclasses.m"
  while (MR_TRUE)
#line 291 "typeclasses.m"
    {
#line 291 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 291 "typeclasses.m"
      {
#line 291 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;

#line 291 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "typeclasses.m"
          {
#line 291 "typeclasses.m"
            {
#line 291 "typeclasses.m"
              MR_Word base;
#line 291 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "typeclasses.m"
              *check_hlds__typeclasses__HeadVar__3_3 = base;
#line 291 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
#line 291 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "typeclasses.m"
            }
#line 291 "typeclasses.m"
          }
#line 291 "typeclasses.m"
        else
#line 292 "typeclasses.m"
          {
#line 292 "typeclasses.m"
            MR_Word check_hlds__typeclasses__C1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "typeclasses.m"
            MR_Word check_hlds__typeclasses__C_10;
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeCtorInfo_13_21;
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__TypeInfo_17_25;
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__IdsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 0)));
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 1)));
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C0_1, (MR_Integer) 2)));
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__IdsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 0)));
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Ids0_19;
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Ids_20;
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 1)));
#line 307 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C1_7, (MR_Integer) 2)));

#line 309 "typeclasses.m"
            {
#line 309 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typeclasses__Name_16, check_hlds__typeclasses__V_22_22);
            }
#line 307 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 307 "typeclasses.m"
              {
#line 4019 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_17_25 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[6];
#line 309 "typeclasses.m"
                {
#line 309 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typeclasses__TypeInfo_17_25, ((MR_Box) (check_hlds__typeclasses__Types_17)), ((MR_Box) (check_hlds__typeclasses__V_23_23)));
                }
#line 307 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 307 "typeclasses.m"
                  {
#line 4030 "check_hlds.typeclasses.c"
                    check_hlds__typeclasses__TypeCtorInfo_13_21 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
#line 310 "typeclasses.m"
                    {
#line 310 "typeclasses.m"
                      mercury__list__append_3_p_1(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__IdsA_15, check_hlds__typeclasses__IdsB_18, &check_hlds__typeclasses__Ids0_19);
                    }
#line 311 "typeclasses.m"
                    {
#line 311 "typeclasses.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typeclasses__TypeCtorInfo_13_21, check_hlds__typeclasses__Ids0_19, &check_hlds__typeclasses__Ids_20);
                    }
#line 312 "typeclasses.m"
                    {
#line 312 "typeclasses.m"
                      check_hlds__typeclasses__C_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 0) = ((MR_Box) (check_hlds__typeclasses__Ids_20));
#line 312 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 1) = ((MR_Box) (check_hlds__typeclasses__Name_16));
#line 312 "typeclasses.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__C_10, 2) = ((MR_Box) (check_hlds__typeclasses__Types_17));
#line 312 "typeclasses.m"
                    }
#line 312 "typeclasses.m"
                    check_hlds__typeclasses__succeeded = MR_TRUE;
#line 307 "typeclasses.m"
                  }
#line 307 "typeclasses.m"
              }
#line 295 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 294 "typeclasses.m"
              {
#line 294 "typeclasses.m"
                /* direct tailcall eliminated */
#line 294 "typeclasses.m"
                {
#line 294 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__C0__tmp_copy_1 = check_hlds__typeclasses__C_10;
#line 294 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__2__tmp_copy_2 = check_hlds__typeclasses__Cs_8;

#line 294 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__2_2 = check_hlds__typeclasses__HeadVar__2__tmp_copy_2;
#line 294 "typeclasses.m"
                  check_hlds__typeclasses__C0_1 = check_hlds__typeclasses__C0__tmp_copy_1;
#line 294 "typeclasses.m"
                }
#line 294 "typeclasses.m"
                continue;
#line 294 "typeclasses.m"
              }
#line 295 "typeclasses.m"
            else
#line 296 "typeclasses.m"
              {
#line 296 "typeclasses.m"
                MR_Word check_hlds__typeclasses__Constraints0_11;

#line 296 "typeclasses.m"
                {
#line 296 "typeclasses.m"
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C1_7, check_hlds__typeclasses__Cs_8, &check_hlds__typeclasses__Constraints0_11);
                }
#line 297 "typeclasses.m"
                {
#line 297 "typeclasses.m"
                  MR_Word base;
#line 297 "typeclasses.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "typeclasses.m"
                  *check_hlds__typeclasses__HeadVar__3_3 = base;
#line 297 "typeclasses.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__C0_1));
#line 297 "typeclasses.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__Constraints0_11));
#line 297 "typeclasses.m"
                }
#line 296 "typeclasses.m"
              }
#line 292 "typeclasses.m"
          }
#line 291 "typeclasses.m"
      }
#line 291 "typeclasses.m"
      break;
#line 291 "typeclasses.m"
    }
#line 288 "typeclasses.m"
}

#line 277 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0_1(
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 277 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 277 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3)
#line 277 "typeclasses.m"
{
#line 277 "typeclasses.m"
  {
#line 277 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 277 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_HeadVar__3_3;

#line 277 "typeclasses.m"
    {
#line 277 "typeclasses.m"
      hlds__hlds_data__compare_hlds_constraints_3_p_0(((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv0_HeadVar__3_3);
    }
#line 277 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv0_HeadVar__3_3));
#line 277 "typeclasses.m"
  }
#line 277 "typeclasses.m"
}

#line 226 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_16,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_17,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_18,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_30,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_34,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_38,
#line 226 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39,
#line 226 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Seen_40)
#line 226 "typeclasses.m"
{
#line 235 "typeclasses.m"
  while (MR_TRUE)
#line 235 "typeclasses.m"
    {
#line 235 "typeclasses.m"
      /* tailcall optimized into a loop */
#line 235 "typeclasses.m"
      {
#line 235 "typeclasses.m"
        MR_bool check_hlds__typeclasses__succeeded;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedImprovementRule_25;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__EliminatedAssumed_26;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedInstanceRule_27;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__AppliedClassRule_28;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_48_48;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_52_52;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven0_69;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Assumed_70;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Redundant_71;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Ancestors_72;
#line 235 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven_73;

#line 236 "typeclasses.m"
        {
#line 236 "typeclasses.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41);
        }
#line 237 "typeclasses.m"
        {
#line 237 "typeclasses.m"
          check_hlds__typeclasses__apply_improvement_rules_9_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__HeadTypeParams_18, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29, &check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, &check_hlds__typeclasses__AppliedImprovementRule_25);
        }
#line 248 "typeclasses.m"
        if ((check_hlds__typeclasses__AppliedImprovementRule_25 == (MR_Integer) 0))
#line 249 "typeclasses.m"
          check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41;
#line 248 "typeclasses.m"
        else
#line 247 "typeclasses.m"
          {
#line 247 "typeclasses.m"
            check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43, check_hlds__typeclasses__STATE_VARIABLE_Constraints_41_41, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44);
          }
#line 560 "typeclasses.m"
        check_hlds__typeclasses__Unproven0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 0)));
#line 560 "typeclasses.m"
        check_hlds__typeclasses__Assumed_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 1)));
#line 560 "typeclasses.m"
        check_hlds__typeclasses__Redundant_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 2)));
#line 560 "typeclasses.m"
        check_hlds__typeclasses__Ancestors_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_44_44, (MR_Integer) 3)));
#line 561 "typeclasses.m"
        {
#line 561 "typeclasses.m"
          check_hlds__typeclasses__eliminate_assumed_constraints_2_6_p_0(check_hlds__typeclasses__Assumed_70, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, check_hlds__typeclasses__Unproven0_69, &check_hlds__typeclasses__Unproven_73, &check_hlds__typeclasses__EliminatedAssumed_26);
        }
#line 563 "typeclasses.m"
        {
#line 563 "typeclasses.m"
          check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_73));
#line 563 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 1) = ((MR_Box) (check_hlds__typeclasses__Assumed_70));
#line 563 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 2) = ((MR_Box) (check_hlds__typeclasses__Redundant_71));
#line 563 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, 3) = ((MR_Box) (check_hlds__typeclasses__Ancestors_72));
#line 563 "typeclasses.m"
        }
#line 254 "typeclasses.m"
        {
#line 254 "typeclasses.m"
          check_hlds__typeclasses__apply_instance_rules_13_p_0(check_hlds__typeclasses__ClassTable_16, check_hlds__typeclasses__InstanceTable_17, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_42_42, &check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33, &check_hlds__typeclasses__STATE_VARIABLE_Proofs_48_48, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_45_45, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39, &check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50, check_hlds__typeclasses__STATE_VARIABLE_Constraints_46_46, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__AppliedInstanceRule_27);
        }
#line 256 "typeclasses.m"
        {
#line 256 "typeclasses.m"
          check_hlds__typeclasses__apply_class_rules_7_p_0(check_hlds__typeclasses__STATE_VARIABLE_Proofs_48_48, &check_hlds__typeclasses__STATE_VARIABLE_Proofs_52_52, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_49_49, &check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53, check_hlds__typeclasses__STATE_VARIABLE_Constraints_51_51, &check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, &check_hlds__typeclasses__AppliedClassRule_28);
        }
#line 258 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedImprovementRule_25 == (MR_Integer) 0);
#line 258 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 258 "typeclasses.m"
          {
#line 259 "typeclasses.m"
            check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__EliminatedAssumed_26 == (MR_Integer) 0);
#line 258 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 258 "typeclasses.m"
              {
#line 260 "typeclasses.m"
                check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedInstanceRule_27 == (MR_Integer) 0);
#line 258 "typeclasses.m"
                if (check_hlds__typeclasses__succeeded)
#line 261 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__AppliedClassRule_28 == (MR_Integer) 0);
#line 258 "typeclasses.m"
              }
#line 258 "typeclasses.m"
          }
#line 265 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 264 "typeclasses.m"
          {
#line 264 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
#line 264 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven1_80;
#line 264 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Unproven_81;
#line 276 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
#line 276 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
#line 276 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
#line 279 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_88_88;
#line 279 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_89_89;
#line 279 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_90_90;
#line 279 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_87_87;

#line 277 "typeclasses.m"
            {
#line 277 "typeclasses.m"
              mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0, (MR_Word) &check_hlds__typeclasses_scalar_common_2[1], check_hlds__typeclasses__Unproven0_79, &check_hlds__typeclasses__Unproven1_80);
            }
#line 284 "typeclasses.m"
            if ((check_hlds__typeclasses__Unproven1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "typeclasses.m"
              check_hlds__typeclasses__Unproven_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "typeclasses.m"
            else
#line 285 "typeclasses.m"
              {
#line 285 "typeclasses.m"
                MR_Word check_hlds__typeclasses__C_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 0)));
#line 285 "typeclasses.m"
                MR_Word check_hlds__typeclasses__Cs_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__Unproven1_80, (MR_Integer) 1)));

#line 286 "typeclasses.m"
                {
#line 286 "typeclasses.m"
                  check_hlds__typeclasses__merge_adjacent_constraints_2_3_p_0(check_hlds__typeclasses__C_95, check_hlds__typeclasses__Cs_96, &check_hlds__typeclasses__Unproven_81);
                }
#line 285 "typeclasses.m"
              }
#line 279 "typeclasses.m"
            check_hlds__typeclasses__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 0)));
#line 279 "typeclasses.m"
            check_hlds__typeclasses__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 1)));
#line 279 "typeclasses.m"
            check_hlds__typeclasses__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 2)));
#line 279 "typeclasses.m"
            check_hlds__typeclasses__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54, (MR_Integer) 3)));
#line 279 "typeclasses.m"
            {
#line 279 "typeclasses.m"
              MR_Word base;
#line 279 "typeclasses.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 279 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_Constraints_38 = base;
#line 279 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__Unproven_81));
#line 279 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_88_88));
#line 279 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_89_89));
#line 279 "typeclasses.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_90_90));
#line 279 "typeclasses.m"
            }
#line 264 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Seen_40 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;
#line 264 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_36 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 264 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Proofs_34 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_52_52;
#line 264 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_TVarSet_32 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 264 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_Bindings_30 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 264 "typeclasses.m"
          }
#line 265 "typeclasses.m"
        else
#line 266 "typeclasses.m"
          {
#line 266 "typeclasses.m"
            /* direct tailcall eliminated */
#line 266 "typeclasses.m"
            {
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_43_43;
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_47_47;
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0__tmp_copy_33 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_52_52;
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_53_53;
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_54_54;
#line 266 "typeclasses.m"
              MR_Word check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_50_50;

#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Seen_0_39 = check_hlds__typeclasses__STATE_VARIABLE_Seen_0__tmp_copy_39;
#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_37 = check_hlds__typeclasses__STATE_VARIABLE_Constraints_0__tmp_copy_37;
#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_35 = check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0__tmp_copy_35;
#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_33 = check_hlds__typeclasses__STATE_VARIABLE_Proofs_0__tmp_copy_33;
#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_31 = check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0__tmp_copy_31;
#line 266 "typeclasses.m"
              check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_29 = check_hlds__typeclasses__STATE_VARIABLE_Bindings_0__tmp_copy_29;
#line 266 "typeclasses.m"
            }
#line 266 "typeclasses.m"
            continue;
#line 266 "typeclasses.m"
          }
#line 235 "typeclasses.m"
      }
#line 235 "typeclasses.m"
      break;
#line 235 "typeclasses.m"
    }
#line 226 "typeclasses.m"
}

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 215 "typeclasses.m"
{
#line 215 "typeclasses.m"
  {
#line 215 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 215 "typeclasses.m"
    MR_builtin_longjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0, 1);
#line 215 "typeclasses.m"
  }
#line 215 "typeclasses.m"
}

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 215 "typeclasses.m"
{
#line 215 "typeclasses.m"
  {
#line 215 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 215 "typeclasses.m"
    {
#line 216 "typeclasses.m"
      {
#line 216 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typeclasses_scalar_common_1[3], ((MR_Box) ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11)), (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2);
      }
#line 216 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = !((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded);
#line 216 "typeclasses.m"
      if ((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
#line 216 "typeclasses.m"
        {
#line 216 "typeclasses.m"
          check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_1(check_hlds__typeclasses__env_ptr);
#line 216 "typeclasses.m"
          return;
        }
#line 215 "typeclasses.m"
    }
#line 215 "typeclasses.m"
  }
#line 215 "typeclasses.m"
}

#line 215 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(
#line 215 "typeclasses.m"
  void * check_hlds__typeclasses__env_ptr_arg)
#line 215 "typeclasses.m"
{
#line 215 "typeclasses.m"
  {
#line 215 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s * check_hlds__typeclasses__env_ptr = (struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s *) check_hlds__typeclasses__env_ptr_arg;

#line 215 "typeclasses.m"
    if (MR_builtin_setjmp((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__commit_0) == 0)
#line 215 "typeclasses.m"
      {
#line 215 "typeclasses.m"
        {
#line 215 "typeclasses.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__Types_9, &(check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__TVar_11, check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_2, check_hlds__typeclasses__env_ptr);
        }
#line 215 "typeclasses.m"
        (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_FALSE;
#line 215 "typeclasses.m"
      }
#line 215 "typeclasses.m"
    else
#line 215 "typeclasses.m"
      (check_hlds__typeclasses__env_ptr)->check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
#line 215 "typeclasses.m"
  }
#line 215 "typeclasses.m"
}

#line 208 "typeclasses.m"
static MR_bool MR_CALL 
check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(
#line 208 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadVar__1_1,
#line 208 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_2)
#line 208 "typeclasses.m"
{
#line 208 "typeclasses.m"
  {
#line 208 "typeclasses.m"
    struct check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0_s check_hlds__typeclasses__env;

#line 208 "typeclasses.m"
    (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__HeadTypeParams_2 = check_hlds__typeclasses__HeadTypeParams_2;
#line 211 "typeclasses.m"
    while (MR_TRUE)
#line 211 "typeclasses.m"
      {
#line 211 "typeclasses.m"
        /* tailcall optimized into a loop */
#line 211 "typeclasses.m"
        if ((check_hlds__typeclasses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "typeclasses.m"
          (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded = MR_TRUE;
#line 211 "typeclasses.m"
        else
#line 212 "typeclasses.m"
          {
#line 212 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "typeclasses.m"
            MR_Word check_hlds__typeclasses__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "typeclasses.m"
            MR_Word check_hlds__typeclasses___Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 0)));
#line 213 "typeclasses.m"
            MR_Word check_hlds__typeclasses___ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 1)));

#line 213 "typeclasses.m"
            (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraint_4, (MR_Integer) 2)));
#line 215 "typeclasses.m"
            {
#line 215 "typeclasses.m"
              check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_3(&check_hlds__typeclasses__env);
            }
#line 212 "typeclasses.m"
            if ((check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded)
#line 218 "typeclasses.m"
              {
#line 218 "typeclasses.m"
                /* direct tailcall eliminated */
#line 218 "typeclasses.m"
                {
#line 218 "typeclasses.m"
                  MR_Word check_hlds__typeclasses__HeadVar__1__tmp_copy_1 = check_hlds__typeclasses__Constraints_5;

#line 218 "typeclasses.m"
                  check_hlds__typeclasses__HeadVar__1_1 = check_hlds__typeclasses__HeadVar__1__tmp_copy_1;
#line 218 "typeclasses.m"
                }
#line 218 "typeclasses.m"
                continue;
#line 218 "typeclasses.m"
              }
#line 212 "typeclasses.m"
          }
#line 211 "typeclasses.m"
        return (check_hlds__typeclasses__env).check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0_env_0__succeeded;
#line 211 "typeclasses.m"
        break;
#line 211 "typeclasses.m"
      }
#line 208 "typeclasses.m"
  }
#line 208 "typeclasses.m"
}

#line 137 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__reduce_type_assign_context_7_p_0(
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_8,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_9,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30,
#line 137 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31,
#line 137 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32,
#line 137 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33)
#line 137 "typeclasses.m"
{
#line 142 "typeclasses.m"
  {
#line 142 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 142 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Constraints0_13;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_46_46;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_47_47;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_48_48;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_49_49;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Unproven0_14;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Assumed0_15;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Redundant0_16;
#line 147 "typeclasses.m"
    MR_Word check_hlds__typeclasses__Ancestors0_17;

#line 143 "typeclasses.m"
    {
#line 143 "typeclasses.m"
      check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Constraints0_13);
    }
#line 146 "typeclasses.m"
    check_hlds__typeclasses__Unproven0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
#line 146 "typeclasses.m"
    check_hlds__typeclasses__Assumed0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
#line 146 "typeclasses.m"
    check_hlds__typeclasses__Redundant0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
#line 146 "typeclasses.m"
    check_hlds__typeclasses__Ancestors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
#line 148 "typeclasses.m"
    check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Unproven0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 147 "typeclasses.m"
      {
#line 149 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__Assumed0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 147 "typeclasses.m"
          {
#line 4697 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 4699 "check_hlds.typeclasses.c"
            check_hlds__typeclasses__TypeInfo_47_47 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[1];
#line 150 "typeclasses.m"
            {
#line 150 "typeclasses.m"
              check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_46_46, check_hlds__typeclasses__TypeInfo_47_47, check_hlds__typeclasses__Redundant0_16);
            }
#line 147 "typeclasses.m"
            if (check_hlds__typeclasses__succeeded)
#line 147 "typeclasses.m"
              {
#line 4710 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4712 "check_hlds.typeclasses.c"
                check_hlds__typeclasses__TypeInfo_49_49 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[2];
#line 151 "typeclasses.m"
                {
#line 151 "typeclasses.m"
                  check_hlds__typeclasses__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typeclasses__TypeCtorInfo_48_48, check_hlds__typeclasses__TypeInfo_49_49, check_hlds__typeclasses__Ancestors0_17);
                }
#line 147 "typeclasses.m"
              }
#line 147 "typeclasses.m"
          }
#line 147 "typeclasses.m"
      }
#line 154 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 153 "typeclasses.m"
      {
#line 153 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_35_35;

#line 153 "typeclasses.m"
        {
#line 153 "typeclasses.m"
          check_hlds__typeclasses__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "typeclasses.m"
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29));
#line 153 "typeclasses.m"
          MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "typeclasses.m"
        }
#line 153 "typeclasses.m"
        {
#line 153 "typeclasses.m"
          *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_35_35);
        }
#line 153 "typeclasses.m"
        *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
#line 153 "typeclasses.m"
      }
#line 154 "typeclasses.m"
    else
#line 155 "typeclasses.m"
      {
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__HeadTypeParams_18;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Bindings0_19;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TVarSet0_20;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Proofs0_21;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ConstraintMap0_22;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Bindings_23;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__TVarSet_24;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Proofs_25;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__ConstraintMap_26;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Constraints_27;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Unproven_28;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42;
#line 155 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_76_76;
#line 222 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_77_77;
#line 222 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_78_78;
#line 222 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_79_79;
#line 222 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_70_70;
#line 170 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_43_43;
#line 170 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_44_44;
#line 170 "typeclasses.m"
        MR_Word check_hlds__typeclasses__V_45_45;

#line 155 "typeclasses.m"
        {
#line 155 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__HeadTypeParams_18);
        }
#line 156 "typeclasses.m"
        {
#line 156 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Bindings0_19);
        }
#line 157 "typeclasses.m"
        {
#line 157 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__TVarSet0_20);
        }
#line 158 "typeclasses.m"
        {
#line 158 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__Proofs0_21);
        }
#line 159 "typeclasses.m"
        {
#line 159 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__ConstraintMap0_22);
        }
#line 222 "typeclasses.m"
        check_hlds__typeclasses__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 0)));
#line 222 "typeclasses.m"
        check_hlds__typeclasses__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 1)));
#line 222 "typeclasses.m"
        check_hlds__typeclasses__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 2)));
#line 222 "typeclasses.m"
        check_hlds__typeclasses__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints0_13, (MR_Integer) 3)));
#line 222 "typeclasses.m"
        {
#line 222 "typeclasses.m"
          check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_8, check_hlds__typeclasses__InstanceTable_9, check_hlds__typeclasses__HeadTypeParams_18, check_hlds__typeclasses__Bindings0_19, &check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__TVarSet0_20, &check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__Proofs0_21, &check_hlds__typeclasses__Proofs_25, check_hlds__typeclasses__ConstraintMap0_22, &check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__Constraints0_13, &check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__V_76_76, &check_hlds__typeclasses__V_70_70);
        }
#line 166 "typeclasses.m"
        {
#line 166 "typeclasses.m"
          check_hlds__typecheck_info__type_assign_set_reduce_results_7_p_0(check_hlds__typeclasses__Bindings_23, check_hlds__typeclasses__TVarSet_24, check_hlds__typeclasses__Constraints_27, check_hlds__typeclasses__Proofs_25, check_hlds__typeclasses__ConstraintMap_26, check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_0_29, &check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42);
        }
#line 170 "typeclasses.m"
        check_hlds__typeclasses__Unproven_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 0)));
#line 170 "typeclasses.m"
        check_hlds__typeclasses__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 1)));
#line 170 "typeclasses.m"
        check_hlds__typeclasses__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 2)));
#line 170 "typeclasses.m"
        check_hlds__typeclasses__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__Constraints_27, (MR_Integer) 3)));
#line 171 "typeclasses.m"
        {
#line 171 "typeclasses.m"
          check_hlds__typeclasses__succeeded = check_hlds__typeclasses__all_constraints_are_satisfiable_2_p_0(check_hlds__typeclasses__Unproven_28, check_hlds__typeclasses__HeadTypeParams_18);
        }
#line 173 "typeclasses.m"
        if (check_hlds__typeclasses__succeeded)
#line 172 "typeclasses.m"
          {
#line 172 "typeclasses.m"
            MR_Word check_hlds__typeclasses__V_39_39;

#line 172 "typeclasses.m"
            {
#line 172 "typeclasses.m"
              check_hlds__typeclasses__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
#line 172 "typeclasses.m"
              MR_hl_field(MR_mktag(1), check_hlds__typeclasses__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "typeclasses.m"
            }
#line 172 "typeclasses.m"
            {
#line 172 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30, check_hlds__typeclasses__V_39_39);
            }
#line 172 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32;
#line 172 "typeclasses.m"
          }
#line 173 "typeclasses.m"
        else
#line 176 "typeclasses.m"
          {
#line 176 "typeclasses.m"
            {
#line 176 "typeclasses.m"
              MR_Word base;
#line 176 "typeclasses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "typeclasses.m"
              *check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_33 = base;
#line 176 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_TypeAssign_37_42));
#line 176 "typeclasses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typeclasses__STATE_VARIABLE_UnsatTypeAssignSet_0_32));
#line 176 "typeclasses.m"
            }
#line 176 "typeclasses.m"
            *check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_31 = check_hlds__typeclasses__STATE_VARIABLE_TypeAssignSet_0_30;
#line 176 "typeclasses.m"
          }
#line 155 "typeclasses.m"
      }
#line 142 "typeclasses.m"
  }
#line 137 "typeclasses.m"
}

#line 76 "typeclasses.m"
void MR_CALL 
check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__ClassTable_14,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__InstanceTable_15,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__HeadTypeParams_16,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23,
#line 76 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Bindings_24,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25,
#line 76 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_27,
#line 76 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Proofs_28,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29,
#line 76 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30,
#line 76 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31,
#line 76 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Constraints_32)
#line 76 "typeclasses.m"
{
#line 221 "typeclasses.m"
  {
#line 221 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 221 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 0)));
#line 222 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 1)));
#line 222 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 2)));
#line 222 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, (MR_Integer) 3)));
#line 222 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_22_22;

#line 222 "typeclasses.m"
    {
#line 222 "typeclasses.m"
      check_hlds__typeclasses__reduce_context_by_rule_application_2_15_p_0(check_hlds__typeclasses__ClassTable_14, check_hlds__typeclasses__InstanceTable_15, check_hlds__typeclasses__HeadTypeParams_16, check_hlds__typeclasses__STATE_VARIABLE_Bindings_0_23, check_hlds__typeclasses__STATE_VARIABLE_Bindings_24, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_0_25, check_hlds__typeclasses__STATE_VARIABLE_TVarSet_26, check_hlds__typeclasses__STATE_VARIABLE_Proofs_0_27, check_hlds__typeclasses__STATE_VARIABLE_Proofs_28, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_0_29, check_hlds__typeclasses__STATE_VARIABLE_ConstraintMap_30, check_hlds__typeclasses__STATE_VARIABLE_Constraints_0_31, check_hlds__typeclasses__STATE_VARIABLE_Constraints_32, check_hlds__typeclasses__V_38_38, &check_hlds__typeclasses__V_22_22);
    }
#line 221 "typeclasses.m"
  }
#line 76 "typeclasses.m"
}

#line 121 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_2_p_0_2(
#line 121 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 121 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 121 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_2)
#line 121 "typeclasses.m"
{
#line 121 "typeclasses.m"
  {
#line 121 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 121 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv4_HeadVar__3_31;

#line 121 "typeclasses.m"
    {
#line 121 "typeclasses.m"
      check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__121__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), &check_hlds__typeclasses__conv4_HeadVar__3_31);
    }
#line 121 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_2 = ((MR_Box) (check_hlds__typeclasses__conv4_HeadVar__3_31));
#line 121 "typeclasses.m"
  }
#line 121 "typeclasses.m"
}

#line 111 "typeclasses.m"
static void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_2_p_0_1(
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__closure_arg,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_1,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_2,
#line 111 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_3,
#line 111 "typeclasses.m"
  MR_Box check_hlds__typeclasses__wrapper_arg_4,
#line 111 "typeclasses.m"
  MR_Box * check_hlds__typeclasses__wrapper_arg_5)
#line 111 "typeclasses.m"
{
#line 111 "typeclasses.m"
  {
#line 111 "typeclasses.m"
    MR_Box check_hlds__typeclasses__closure = check_hlds__typeclasses__closure_arg;
#line 111 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31;
#line 111 "typeclasses.m"
    MR_Word check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33;

#line 111 "typeclasses.m"
    {
#line 111 "typeclasses.m"
      check_hlds__typeclasses__reduce_type_assign_context_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typeclasses__wrapper_arg_1), ((MR_Word) check_hlds__typeclasses__wrapper_arg_2), &check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31, ((MR_Word) check_hlds__typeclasses__wrapper_arg_4), &check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33);
    }
#line 111 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_3 = ((MR_Box) (check_hlds__typeclasses__conv1_STATE_VARIABLE_TypeAssignSet_31));
#line 111 "typeclasses.m"
    *check_hlds__typeclasses__wrapper_arg_5 = ((MR_Box) (check_hlds__typeclasses__conv0_STATE_VARIABLE_UnsatTypeAssignSet_33));
#line 111 "typeclasses.m"
  }
#line 111 "typeclasses.m"
}

#line 69 "typeclasses.m"
void MR_CALL 
check_hlds__typeclasses__perform_context_reduction_2_p_0(
#line 69 "typeclasses.m"
  MR_Word check_hlds__typeclasses__STATE_VARIABLE_Info_0_21,
#line 69 "typeclasses.m"
  MR_Word * check_hlds__typeclasses__STATE_VARIABLE_Info_22)
#line 69 "typeclasses.m"
{
#line 103 "typeclasses.m"
  {
#line 103 "typeclasses.m"
    MR_bool check_hlds__typeclasses__succeeded;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeCtorInfo_67_67;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeInfo_68_68;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeAssignSet0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__ClassTable_7;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__InstanceTable_8;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeAssignSet1_9;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__UnsatTypeAssignSet_10;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__TypeAssignSet_20;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_26_26;
#line 103 "typeclasses.m"
    MR_Word check_hlds__typeclasses__STATE_VARIABLE_Info_29_29;
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 107 "typeclasses.m"
    MR_Integer check_hlds__typeclasses__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 107 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 107 "typeclasses.m"
    MR_Integer check_hlds__typeclasses__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 111 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv3_TypeAssignSet1_9;
#line 111 "typeclasses.m"
    MR_Box check_hlds__typeclasses__conv2_UnsatTypeAssignSet_10;
#line 116 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_11_11;
#line 116 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_12_12;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_54_54;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_55_55;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_56_56;
#line 135 "typeclasses.m"
    MR_Integer check_hlds__typeclasses__V_57_57;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_58_58;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_59_59;
#line 135 "typeclasses.m"
    MR_Integer check_hlds__typeclasses__V_61_61;
#line 135 "typeclasses.m"
    MR_Word check_hlds__typeclasses__V_60_60;

#line 109 "typeclasses.m"
    {
#line 109 "typeclasses.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typeclasses__ModuleInfo_6, &check_hlds__typeclasses__ClassTable_7);
    }
#line 110 "typeclasses.m"
    {
#line 110 "typeclasses.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(check_hlds__typeclasses__ModuleInfo_6, &check_hlds__typeclasses__InstanceTable_8);
    }
#line 111 "typeclasses.m"
    {
#line 111 "typeclasses.m"
      check_hlds__typeclasses__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 111 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_26_26, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_3[0]));
#line 111 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_26_26, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_2_p_0_1));
#line 111 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 111 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_26_26, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_7));
#line 111 "typeclasses.m"
      MR_hl_field(MR_mktag(0), check_hlds__typeclasses__V_26_26, 4) = ((MR_Box) (check_hlds__typeclasses__InstanceTable_8));
#line 111 "typeclasses.m"
    }
#line 5131 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeCtorInfo_67_67 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0;
#line 5133 "check_hlds.typeclasses.c"
    check_hlds__typeclasses__TypeInfo_68_68 = (MR_Word) &check_hlds__typeclasses_scalar_common_1[0];
#line 111 "typeclasses.m"
    {
#line 111 "typeclasses.m"
      mercury__list__foldl2_6_p_0(check_hlds__typeclasses__TypeCtorInfo_67_67, check_hlds__typeclasses__TypeInfo_68_68, check_hlds__typeclasses__TypeInfo_68_68, check_hlds__typeclasses__V_26_26, check_hlds__typeclasses__TypeAssignSet0_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv3_TypeAssignSet1_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typeclasses__conv2_UnsatTypeAssignSet_10);
    }
#line 111 "typeclasses.m"
    check_hlds__typeclasses__TypeAssignSet1_9 = ((MR_Word) check_hlds__typeclasses__conv3_TypeAssignSet1_9);
#line 111 "typeclasses.m"
    check_hlds__typeclasses__UnsatTypeAssignSet_10 = ((MR_Word) check_hlds__typeclasses__conv2_UnsatTypeAssignSet_10);
#line 116 "typeclasses.m"
    check_hlds__typeclasses__succeeded = ((MR_tag((MR_Word) check_hlds__typeclasses__TypeAssignSet0_5)) == (MR_mktag((MR_Integer) 1)));
#line 116 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 116 "typeclasses.m"
      {
#line 116 "typeclasses.m"
        check_hlds__typeclasses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_5, (MR_Integer) 0)));
#line 116 "typeclasses.m"
        check_hlds__typeclasses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typeclasses__TypeAssignSet0_5, (MR_Integer) 1)));
#line 117 "typeclasses.m"
        check_hlds__typeclasses__succeeded = (check_hlds__typeclasses__TypeAssignSet1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "typeclasses.m"
      }
#line 132 "typeclasses.m"
    if (check_hlds__typeclasses__succeeded)
#line 119 "typeclasses.m"
      {
#line 119 "typeclasses.m"
        MR_Word check_hlds__typeclasses__Spec_13;
#line 119 "typeclasses.m"
        MR_Word check_hlds__typeclasses__DeleteConstraints_14;

#line 119 "typeclasses.m"
        {
#line 119 "typeclasses.m"
          check_hlds__typeclasses__Spec_13 = check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_f_0(check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, check_hlds__typeclasses__UnsatTypeAssignSet_10);
        }
#line 120 "typeclasses.m"
        {
#line 120 "typeclasses.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typeclasses__Spec_13, check_hlds__typeclasses__STATE_VARIABLE_Info_0_21, &check_hlds__typeclasses__STATE_VARIABLE_Info_29_29);
        }
#line 121 "typeclasses.m"
        {
#line 121 "typeclasses.m"
          check_hlds__typeclasses__DeleteConstraints_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 121 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_14, 0) = ((MR_Box) (&check_hlds__typeclasses_scalar_common_4[0]));
#line 121 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_14, 1) = ((MR_Box) (check_hlds__typeclasses__perform_context_reduction_2_p_0_2));
#line 121 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "typeclasses.m"
          MR_hl_field(MR_mktag(0), check_hlds__typeclasses__DeleteConstraints_14, 3) = ((MR_Box) (check_hlds__typeclasses__ClassTable_7));
#line 121 "typeclasses.m"
        }
#line 131 "typeclasses.m"
        {
#line 131 "typeclasses.m"
          mercury__list__map_3_p_0(check_hlds__typeclasses__TypeCtorInfo_67_67, check_hlds__typeclasses__TypeCtorInfo_67_67, check_hlds__typeclasses__DeleteConstraints_14, check_hlds__typeclasses__TypeAssignSet0_5, &check_hlds__typeclasses__TypeAssignSet_20);
        }
#line 119 "typeclasses.m"
      }
#line 132 "typeclasses.m"
    else
#line 133 "typeclasses.m"
      {
#line 133 "typeclasses.m"
        check_hlds__typeclasses__TypeAssignSet_20 = check_hlds__typeclasses__TypeAssignSet1_9;
#line 133 "typeclasses.m"
        check_hlds__typeclasses__STATE_VARIABLE_Info_29_29 = check_hlds__typeclasses__STATE_VARIABLE_Info_0_21;
#line 133 "typeclasses.m"
      }
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 135 "typeclasses.m"
    check_hlds__typeclasses__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typeclasses__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 135 "typeclasses.m"
    {
#line 135 "typeclasses.m"
      MR_Word base;
#line 135 "typeclasses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 135 "typeclasses.m"
      *check_hlds__typeclasses__STATE_VARIABLE_Info_22 = base;
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typeclasses__V_54_54));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typeclasses__V_55_55));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typeclasses__V_56_56));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typeclasses__V_57_57));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typeclasses__V_58_58));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typeclasses__V_59_59));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typeclasses__TypeAssignSet_20));
#line 135 "typeclasses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typeclasses__V_61_61));
#line 135 "typeclasses.m"
    }
#line 103 "typeclasses.m"
  }
#line 69 "typeclasses.m"
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
