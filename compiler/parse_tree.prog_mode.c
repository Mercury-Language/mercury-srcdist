/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module parse_tree.prog_mode. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_mode__init
ENDINIT
*/

#include "parse_tree.prog_mode.mih"


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
#include "require.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 612 "prog_mode.m"
struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
#line 612 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
#line 616 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 616 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 616 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
#line 617 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
#line 612 "prog_mode.m"
};

#line 101 "prog_mode.m"
struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
#line 101 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
#line 566 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 571 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 571 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
#line 571 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
#line 575 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12;
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13;
#line 598 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
#line 598 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37;
#line 599 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37;
#line 586 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
#line 586 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41;
#line 586 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24;
#line 586 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26;
#line 586 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27;
#line 590 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24;
#line 592 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27;
#line 571 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
#line 571 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65;
#line 571 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66;
#line 575 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65;
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66;
#line 101 "prog_mode.m"
};


#line 193 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 196 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 199 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 202 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 205 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1037 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0(
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1037 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48);

#line 919 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0_1(
#line 919 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 919 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 919 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 916 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0(
#line 916 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 916 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 916 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42);

#line 517 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__517__1_2_f_0(
#line 517 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 517 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_43);

#line 502 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0_1(
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 502 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 499 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0(
#line 499 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 499 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_48,
#line 499 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_49);

#line 1073 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1073 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1068 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1068 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1037 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1037 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1020 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1020 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1020 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31);

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1014 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1014 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1014 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1014 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1001 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1001 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1001 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1001 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11);

#line 990 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 990 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 990 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 990 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 984 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 984 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 980 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 980 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 980 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 980 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 969 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 969 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 969 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 969 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 964 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 964 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 964 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 964 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6);

#line 961 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 961 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 956 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 956 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6);

#line 916 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 916 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 916 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 916 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 951 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 951 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 951 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 951 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 884 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 884 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 884 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 884 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 717 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 717 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 852 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 852 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 852 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4);

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 808 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 808 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 808 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4);

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 805 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 799 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 799 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 799 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4);

#line 797 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 797 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 793 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 793 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 793 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4);

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 719 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 719 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4);

#line 694 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 694 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 694 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 694 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 617 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 617 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 612 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 612 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2);

#line 543 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 543 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 543 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 543 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 537 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 537 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 537 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 537 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 468 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 468 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 468 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 468 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 517 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 517 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 517 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

#line 499 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 499 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 499 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 499 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 533 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 533 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 533 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 533 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 481 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 481 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 481 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 481 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 453 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 453 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 453 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 453 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 449 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 449 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 449 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 449 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 438 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 438 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 438 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 438 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6);

#line 424 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 424 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 424 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 424 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 406 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 406 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 406 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 406 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 395 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 395 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 395 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 395 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 376 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 376 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 376 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 376 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 304 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 304 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 293 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 293 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 293 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 293 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 987 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 987 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 984 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 984 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 880 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 880 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 880 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 880 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 717 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 717 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 575 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 575 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 582 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 582 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 599 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 599 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 590 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 590 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 575 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 575 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 582 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 582 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 436 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_4_p_0_1(
#line 436 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 436 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 436 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[11][6];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[9])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[9])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[10])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[9])),
    ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1265 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1273 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1281 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1290 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1299 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1018 "prog_mode.m"
{
#line 1018 "prog_mode.m"
  {
#line 1018 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1018 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1018 "prog_mode.m"
    {
#line 1018 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1018 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
      {
#line 1018 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1018 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
      }
#line 1018 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
  }
#line 1018 "prog_mode.m"
}

#line 1037 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0(
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1037 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48)
#line 1037 "prog_mode.m"
{
#line 1037 "prog_mode.m"
  {
#line 1037 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1037 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 1)));
#line 1037 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 0)));
#line 1018 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_HeadVar__3_48;

#line 1018 "prog_mode.m"
    {
#line 1018 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__Insts_51, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_47)), &parse_tree__prog_mode__conv1_HeadVar__3_48);
    }
#line 1018 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
      {
#line 1018 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_48 = ((MR_Word) parse_tree__prog_mode__conv1_HeadVar__3_48);
#line 1018 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
      }
#line 1037 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1037 "prog_mode.m"
  }
#line 1037 "prog_mode.m"
}

#line 919 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0_1(
#line 919 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 919 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 919 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 919 "prog_mode.m"
{
#line 919 "prog_mode.m"
  {
#line 919 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 919 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 919 "prog_mode.m"
    {
#line 919 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 919 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 919 "prog_mode.m"
  }
#line 919 "prog_mode.m"
}

#line 916 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0(
#line 916 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 916 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 916 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42)
#line 916 "prog_mode.m"
{
#line 916 "prog_mode.m"
  {
#line 916 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_43_43;
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 0)));
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 1)));
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_58;

#line 919 "prog_mode.m"
    {
#line 919 "prog_mode.m"
      parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0_1));
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 919 "prog_mode.m"
    }
#line 1465 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 919 "prog_mode.m"
    {
#line 919 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__Is0_57, &parse_tree__prog_mode__Is_58);
    }
#line 916 "prog_mode.m"
    {
#line 916 "prog_mode.m"
      MR_Word base;
#line 916 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_42 = base;
#line 916 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_56));
#line 916 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_58));
#line 916 "prog_mode.m"
    }
#line 916 "prog_mode.m"
  }
#line 916 "prog_mode.m"
}

#line 517 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__517__1_2_f_0(
#line 517 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 517 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_43)
#line 517 "prog_mode.m"
{
#line 517 "prog_mode.m"
  {
#line 517 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 517 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__3_44;
#line 517 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Var_34;
#line 518 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_45_45;
#line 518 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_V_45_45;
#line 518 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_35_35;

#line 518 "prog_mode.m"
    {
#line 518 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], parse_tree__prog_mode__Sub_4, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_43)), &parse_tree__prog_mode__conv0_V_45_45);
    }
#line 518 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 518 "prog_mode.m"
      {
#line 518 "prog_mode.m"
        parse_tree__prog_mode__V_45_45 = ((MR_Word) parse_tree__prog_mode__conv0_V_45_45);
#line 518 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 518 "prog_mode.m"
      }
#line 518 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 518 "prog_mode.m"
      {
#line 518 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 518 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 518 "prog_mode.m"
          {
#line 518 "prog_mode.m"
            parse_tree__prog_mode__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_45_45, (MR_Integer) 0)));
#line 518 "prog_mode.m"
            parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_45_45, (MR_Integer) 1)));
#line 518 "prog_mode.m"
          }
#line 518 "prog_mode.m"
      }
#line 517 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 517 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_44 = parse_tree__prog_mode__Var_34;
#line 517 "prog_mode.m"
    else
#line 517 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_44 = parse_tree__prog_mode__HeadVar__2_43;
#line 517 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__3_44;
#line 517 "prog_mode.m"
  }
#line 517 "prog_mode.m"
}

#line 502 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0_1(
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 502 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 502 "prog_mode.m"
{
#line 502 "prog_mode.m"
  {
#line 502 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 502 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 502 "prog_mode.m"
    {
#line 502 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 502 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 502 "prog_mode.m"
  }
#line 502 "prog_mode.m"
}

#line 499 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0(
#line 499 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 499 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_48,
#line 499 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_49)
#line 499 "prog_mode.m"
{
#line 499 "prog_mode.m"
  {
#line 499 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_88_88;
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_50_50;
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_48, (MR_Integer) 0)));
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_48, (MR_Integer) 1)));
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_78;

#line 502 "prog_mode.m"
    {
#line 502 "prog_mode.m"
      parse_tree__prog_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 502 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0_1));
#line 502 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 502 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 502 "prog_mode.m"
    }
#line 1633 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 502 "prog_mode.m"
    {
#line 502 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_88_88, parse_tree__prog_mode__TypeCtorInfo_88_88, parse_tree__prog_mode__V_50_50, parse_tree__prog_mode__Is0_77, &parse_tree__prog_mode__Is_78);
    }
#line 499 "prog_mode.m"
    {
#line 499 "prog_mode.m"
      MR_Word base;
#line 499 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_49 = base;
#line 499 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_76));
#line 499 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_78));
#line 499 "prog_mode.m"
    }
#line 499 "prog_mode.m"
  }
#line 499 "prog_mode.m"
}

#line 1073 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1073 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1073 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1073 "prog_mode.m"
{
#line 1081 "prog_mode.m"
  {
#line 1081 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1081 "prog_mode.m"
    MR_Word parse_tree__prog_mode__InstVarInst_8;
#line 1077 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_8;

#line 1077 "prog_mode.m"
    {
#line 1077 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), &parse_tree__prog_mode__conv0_InstVarInst_8);
    }
#line 1077 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1077 "prog_mode.m"
      {
#line 1077 "prog_mode.m"
        parse_tree__prog_mode__InstVarInst_8 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_8);
#line 1077 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1077 "prog_mode.m"
      }
#line 1081 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1080 "prog_mode.m"
      {
#line 1080 "prog_mode.m"
        {
#line 1080 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_8, parse_tree__prog_mode__SubInst_5);
        }
#line 1080 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1080 "prog_mode.m"
          {
#line 1080 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1080 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1080 "prog_mode.m"
          }
#line 1080 "prog_mode.m"
      }
#line 1081 "prog_mode.m"
    else
#line 1082 "prog_mode.m"
      {
#line 1082 "prog_mode.m"
        {
#line 1082 "prog_mode.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), ((MR_Box) (parse_tree__prog_mode__SubInst_5)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
        }
#line 1082 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1082 "prog_mode.m"
      }
#line 1081 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1081 "prog_mode.m"
  }
#line 1073 "prog_mode.m"
}

#line 1068 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1068 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1068 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1068 "prog_mode.m"
{
#line 1068 "prog_mode.m"
  {
#line 1068 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1068 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1068 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10;

#line 1068 "prog_mode.m"
    {
#line 1068 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10);
    }
#line 1068 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1068 "prog_mode.m"
      {
#line 1068 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10));
#line 1068 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1068 "prog_mode.m"
      }
#line 1068 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1068 "prog_mode.m"
  }
#line 1068 "prog_mode.m"
}

#line 1037 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1037 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1037 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1037 "prog_mode.m"
{
#line 1037 "prog_mode.m"
  {
#line 1037 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1037 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1037 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_48;

#line 1037 "prog_mode.m"
    {
#line 1037 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1037__1_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv2_HeadVar__3_48);
    }
#line 1037 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1037 "prog_mode.m"
      {
#line 1037 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_48));
#line 1037 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1037 "prog_mode.m"
      }
#line 1037 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1037 "prog_mode.m"
  }
#line 1037 "prog_mode.m"
}

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1018 "prog_mode.m"
{
#line 1018 "prog_mode.m"
  {
#line 1018 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1018 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1018 "prog_mode.m"
    {
#line 1018 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1018 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
      {
#line 1018 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1018 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
      }
#line 1018 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
  }
#line 1018 "prog_mode.m"
}

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1020 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1020 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1020 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31)
#line 1020 "prog_mode.m"
{
#line 1025 "prog_mode.m"
  while (MR_TRUE)
#line 1025 "prog_mode.m"
    {
#line 1025 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 1025 "prog_mode.m"
      {
#line 1025 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 1025 "prog_mode.m"
        if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "prog_mode.m"
          {
#line 1025 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1025 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1025 "prog_mode.m"
          }
#line 1025 "prog_mode.m"
        else
#line 1025 "prog_mode.m"
          if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1027 "prog_mode.m"
            {
#line 1027 "prog_mode.m"
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1027 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1027 "prog_mode.m"
            }
#line 1025 "prog_mode.m"
          else
#line 1025 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1046 "prog_mode.m"
              {
#line 1046 "prog_mode.m"
                MR_Word parse_tree__prog_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1045 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)));

#line 1049 "prog_mode.m"
                if ((parse_tree__prog_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "prog_mode.m"
                  {
#line 1048 "prog_mode.m"
                    *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1048 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1048 "prog_mode.m"
                  }
#line 1049 "prog_mode.m"
                else
#line 1050 "prog_mode.m"
                  {
#line 1050 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Modes_20;
#line 1050 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_40_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_17), (MR_Integer) 1);
#line 1050 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 0)));
#line 1050 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_21_21;
#line 1050 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_22_22;

#line 1050 "prog_mode.m"
                    parse_tree__prog_mode__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 1)));
#line 1050 "prog_mode.m"
                    parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 2)));
#line 1050 "prog_mode.m"
                    parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 3)));
#line 1051 "prog_mode.m"
                    {
#line 1051 "prog_mode.m"
                      return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_20, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                    }
#line 1050 "prog_mode.m"
                  }
#line 1046 "prog_mode.m"
              }
#line 1025 "prog_mode.m"
            else
#line 1025 "prog_mode.m"
              if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 1026 "prog_mode.m"
                {
#line 1026 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1026 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1026 "prog_mode.m"
                }
#line 1025 "prog_mode.m"
              else
#line 1025 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1064 "prog_mode.m"
                  {
#line 1064 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ArgInsts_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1064 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1018 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31;

#line 1018 "prog_mode.m"
                    {
#line 1018 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__ArgInsts_54, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
                    }
#line 1018 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
                      {
#line 1018 "prog_mode.m"
                        *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
#line 1018 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
                      }
#line 1064 "prog_mode.m"
                  }
#line 1025 "prog_mode.m"
                else
#line 1025 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1030 "prog_mode.m"
                    {
#line 1030 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1030 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 3)));
#line 1030 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1033 "prog_mode.m"
                      if ((parse_tree__prog_mode__InstResults_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1032 "prog_mode.m"
                        {
#line 1032 "prog_mode.m"
                          *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1032 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1032 "prog_mode.m"
                        }
#line 1033 "prog_mode.m"
                      else
#line 1036 "prog_mode.m"
                        {
#line 1037 "prog_mode.m"
                          MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31;

#line 1037 "prog_mode.m"
                          {
#line 1037 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
                          }
#line 1037 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1037 "prog_mode.m"
                            {
#line 1037 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
#line 1037 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1037 "prog_mode.m"
                            }
#line 1036 "prog_mode.m"
                        }
#line 1030 "prog_mode.m"
                    }
#line 1025 "prog_mode.m"
                  else
#line 1025 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1067 "prog_mode.m"
                      {
#line 1067 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1067 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1067 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 1067 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;
#line 1068 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33;

#line 1068 "prog_mode.m"
                        {
#line 1068 "prog_mode.m"
                          parse_tree__prog_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
#line 1068 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3));
#line 1068 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1068 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
#line 1068 "prog_mode.m"
                        }
#line 1068 "prog_mode.m"
                        {
#line 1068 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__set__fold_4_p_3((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__V_32_32, parse_tree__prog_mode__InstVars_28, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
                        }
#line 1068 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1068 "prog_mode.m"
                          {
#line 1068 "prog_mode.m"
                            parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33 = ((MR_Word) parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
#line 1068 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1068 "prog_mode.m"
                          }
#line 1067 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1070 "prog_mode.m"
                          {
#line 1070 "prog_mode.m"
                            /* direct tailcall eliminated */
#line 1070 "prog_mode.m"
                            {
#line 1070 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__Inst__tmp_copy_4 = parse_tree__prog_mode__SubInst_29;
#line 1070 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;

#line 1070 "prog_mode.m"
                              parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30;
#line 1070 "prog_mode.m"
                              parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst__tmp_copy_4;
#line 1070 "prog_mode.m"
                            }
#line 1070 "prog_mode.m"
                            continue;
#line 1070 "prog_mode.m"
                          }
#line 1067 "prog_mode.m"
                      }
#line 1025 "prog_mode.m"
                    else
#line 1025 "prog_mode.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1057 "prog_mode.m"
                        {
#line 1057 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1060 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__ArgInsts_26;
#line 1058 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_25_25;

#line 1058 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_24)) == (MR_mktag((MR_Integer) 0)));
#line 1058 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1058 "prog_mode.m"
                            {
#line 1058 "prog_mode.m"
                              parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 0)));
#line 1058 "prog_mode.m"
                              parse_tree__prog_mode__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 1)));
#line 1059 "prog_mode.m"
                              {
#line 1059 "prog_mode.m"
                                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_26, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                              }
#line 1058 "prog_mode.m"
                            }
#line 1058 "prog_mode.m"
                          else
#line 1059 "prog_mode.m"
                            {
#line 1059 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1059 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1059 "prog_mode.m"
                            }
#line 1057 "prog_mode.m"
                        }
#line 1025 "prog_mode.m"
                      else
#line 1025 "prog_mode.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1046 "prog_mode.m"
                          {
#line 1046 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__HOInstInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1044 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1049 "prog_mode.m"
                            if ((parse_tree__prog_mode__HOInstInfo_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "prog_mode.m"
                              {
#line 1048 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1048 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1048 "prog_mode.m"
                              }
#line 1049 "prog_mode.m"
                            else
#line 1050 "prog_mode.m"
                              {
#line 1050 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__Modes_66;
#line 1050 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_69_69 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_75), (MR_Integer) 1);
#line 1050 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 0)));
#line 1050 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_63_63;
#line 1050 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_64_64;

#line 1050 "prog_mode.m"
                                parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 1)));
#line 1050 "prog_mode.m"
                                parse_tree__prog_mode__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 2)));
#line 1050 "prog_mode.m"
                                parse_tree__prog_mode__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 3)));
#line 1051 "prog_mode.m"
                                {
#line 1051 "prog_mode.m"
                                  return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                                }
#line 1050 "prog_mode.m"
                              }
#line 1046 "prog_mode.m"
                          }
#line 1025 "prog_mode.m"
                        else
#line 1054 "prog_mode.m"
                          {
#line 1055 "prog_mode.m"
                            {
#line 1055 "prog_mode.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_var_constraints_are_consistent_in_inst\'/3", (MR_String) "unconstrained inst_var");
                            }
#line 1054 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1054 "prog_mode.m"
                          }
#line 1025 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 1025 "prog_mode.m"
      }
#line 1025 "prog_mode.m"
      break;
#line 1025 "prog_mode.m"
    }
#line 1020 "prog_mode.m"
}

#line 1018 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1018 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1018 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1018 "prog_mode.m"
{
#line 1018 "prog_mode.m"
  {
#line 1018 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1018 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1018 "prog_mode.m"
    {
#line 1018 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1018 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
      {
#line 1018 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1018 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
      }
#line 1018 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
  }
#line 1018 "prog_mode.m"
}

#line 1014 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1014 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1014 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1014 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1014 "prog_mode.m"
{
#line 1017 "prog_mode.m"
  {
#line 1017 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1018 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1018 "prog_mode.m"
    {
#line 1018 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1018 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
      {
#line 1018 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1018 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
      }
#line 1017 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1017 "prog_mode.m"
  }
#line 1014 "prog_mode.m"
}

#line 1001 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1001 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1001 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1001 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11)
#line 1001 "prog_mode.m"
{
#line 1006 "prog_mode.m"
  {
#line 1006 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1006 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_4)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_mode.m"
      {
#line 1006 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InitialInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));
#line 1006 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1006 "prog_mode.m"
        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13;

#line 1007 "prog_mode.m"
        {
#line 1007 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_6, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13);
        }
#line 1006 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1008 "prog_mode.m"
          {
#line 1008 "prog_mode.m"
            return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_7, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
          }
#line 1006 "prog_mode.m"
      }
#line 1006 "prog_mode.m"
    else
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1010 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));

#line 1011 "prog_mode.m"
        {
#line 1011 "prog_mode.m"
          return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
        }
#line 1010 "prog_mode.m"
      }
#line 1006 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1006 "prog_mode.m"
  }
#line 1001 "prog_mode.m"
}

#line 990 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 990 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 990 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 990 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 990 "prog_mode.m"
{
#line 995 "prog_mode.m"
  {
#line 995 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 995 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 997 "prog_mode.m"
      {
#line 997 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 1)));
#line 997 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 0)));

#line 1006 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_8)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_mode.m"
          {
#line 1006 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InitialInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));
#line 1006 "prog_mode.m"
            MR_Word parse_tree__prog_mode__FinalInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1006 "prog_mode.m"
            MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21;

#line 1007 "prog_mode.m"
            {
#line 1007 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_16, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21);
            }
#line 1006 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 1008 "prog_mode.m"
              {
#line 1008 "prog_mode.m"
                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_17, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
              }
#line 1006 "prog_mode.m"
          }
#line 1006 "prog_mode.m"
        else
#line 1010 "prog_mode.m"
          {
#line 1010 "prog_mode.m"
            MR_Word parse_tree__prog_mode__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1010 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));

#line 1011 "prog_mode.m"
            {
#line 1011 "prog_mode.m"
              return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
            }
#line 1010 "prog_mode.m"
          }
#line 997 "prog_mode.m"
      }
#line 995 "prog_mode.m"
    else
#line 995 "prog_mode.m"
      {
#line 995 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 995 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 995 "prog_mode.m"
      }
#line 995 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 995 "prog_mode.m"
  }
#line 990 "prog_mode.m"
}

#line 984 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 984 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 984 "prog_mode.m"
{
#line 984 "prog_mode.m"
  {
#line 984 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 984 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 984 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 984 "prog_mode.m"
    {
#line 984 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 984 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 984 "prog_mode.m"
      {
#line 984 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 984 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 984 "prog_mode.m"
      }
#line 984 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 984 "prog_mode.m"
  }
#line 984 "prog_mode.m"
}

#line 980 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 980 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 980 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 980 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 980 "prog_mode.m"
{
#line 983 "prog_mode.m"
  {
#line 983 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 984 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 984 "prog_mode.m"
    {
#line 984 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__Modes_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 984 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 984 "prog_mode.m"
      {
#line 984 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 984 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 984 "prog_mode.m"
      }
#line 983 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 983 "prog_mode.m"
  }
#line 980 "prog_mode.m"
}

#line 969 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 969 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 969 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 969 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 969 "prog_mode.m"
{
#line 969 "prog_mode.m"
  {
#line 969 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 969 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 969 "prog_mode.m"
    {
#line 969 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 969 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 969 "prog_mode.m"
  }
#line 969 "prog_mode.m"
}

#line 964 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 964 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 964 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 964 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6)
#line 964 "prog_mode.m"
{
#line 971 "prog_mode.m"
  {
#line 971 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
#line 971 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_7;
#line 971 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Args0_8;

#line 968 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 968 "prog_mode.m"
      {
#line 968 "prog_mode.m"
        parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 968 "prog_mode.m"
        parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 969 "prog_mode.m"
        {
#line 969 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 969 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_9;
#line 969 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_10_10;

#line 969 "prog_mode.m"
          {
#line 969 "prog_mode.m"
            parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 969 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 969 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
#line 969 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 969 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 969 "prog_mode.m"
          }
#line 2641 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 969 "prog_mode.m"
          {
#line 969 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
          }
#line 970 "prog_mode.m"
          {
#line 970 "prog_mode.m"
            MR_Word base;
#line 970 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 970 "prog_mode.m"
            *parse_tree__prog_mode__Name_6 = base;
#line 970 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 970 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
#line 970 "prog_mode.m"
          }
#line 969 "prog_mode.m"
        }
#line 968 "prog_mode.m"
      }
#line 968 "prog_mode.m"
    else
#line 972 "prog_mode.m"
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
#line 971 "prog_mode.m"
  }
#line 964 "prog_mode.m"
}

#line 961 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 961 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 961 "prog_mode.m"
{
#line 961 "prog_mode.m"
  {
#line 961 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 961 "prog_mode.m"
    {
#line 961 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 961 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 961 "prog_mode.m"
  }
#line 961 "prog_mode.m"
}

#line 956 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 956 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6)
#line 956 "prog_mode.m"
{
#line 959 "prog_mode.m"
  {
#line 959 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes_11;
#line 959 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 961 "prog_mode.m"
    {
#line 961 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 961 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[8]));
#line 961 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
#line 961 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 961 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 961 "prog_mode.m"
    }
#line 2749 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 961 "prog_mode.m"
    {
#line 961 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
#line 962 "prog_mode.m"
    {
#line 962 "prog_mode.m"
      MR_Word base;
#line 962 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_mode.m"
      *parse_tree__prog_mode__PII_6 = base;
#line 962 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
#line 962 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
#line 962 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
#line 962 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
#line 962 "prog_mode.m"
    }
#line 959 "prog_mode.m"
  }
#line 956 "prog_mode.m"
}

#line 916 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 916 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 916 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 916 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 916 "prog_mode.m"
{
#line 916 "prog_mode.m"
  {
#line 916 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 916 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_HeadVar__3_42;

#line 916 "prog_mode.m"
    {
#line 916 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__916__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_HeadVar__3_42);
    }
#line 916 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_HeadVar__3_42));
#line 916 "prog_mode.m"
  }
#line 916 "prog_mode.m"
}

#line 951 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 951 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 951 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 951 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 951 "prog_mode.m"
{
#line 951 "prog_mode.m"
  {
#line 951 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 951 "prog_mode.m"
    {
#line 951 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 951 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 951 "prog_mode.m"
  }
#line 951 "prog_mode.m"
}

#line 884 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 884 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 884 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 884 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 884 "prog_mode.m"
{
#line 894 "prog_mode.m"
  {
#line 894 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 894 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "prog_mode.m"
      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 894 "prog_mode.m"
    else
#line 894 "prog_mode.m"
      if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 894 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 894 "prog_mode.m"
      else
#line 894 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 894 "prog_mode.m"
          {
#line 894 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 894 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

#line 894 "prog_mode.m"
            if ((parse_tree__prog_mode__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 894 "prog_mode.m"
            else
#line 902 "prog_mode.m"
              {
#line 902 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_46_46;
#line 902 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_72_72), (MR_Integer) 1);
#line 902 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo_55;

#line 903 "prog_mode.m"
                {
#line 903 "prog_mode.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_54, &parse_tree__prog_mode__PredInstInfo_55);
                }
#line 905 "prog_mode.m"
                parse_tree__prog_mode__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
#line 905 "prog_mode.m"
                {
#line 905 "prog_mode.m"
                  MR_Word base;
#line 905 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 905 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__V_73_73));
#line 905 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_46_46));
#line 905 "prog_mode.m"
                }
#line 902 "prog_mode.m"
              }
#line 894 "prog_mode.m"
          }
#line 894 "prog_mode.m"
        else
#line 894 "prog_mode.m"
          if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1))))
#line 895 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 894 "prog_mode.m"
          else
#line 894 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 950 "prog_mode.m"
              {
#line 950 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_71_71;
#line 950 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 950 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 950 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts_35;
#line 950 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_36_36;

#line 951 "prog_mode.m"
                {
#line 951 "prog_mode.m"
                  parse_tree__prog_mode__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 951 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 951 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
#line 951 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 951 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 951 "prog_mode.m"
                }
#line 2953 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 951 "prog_mode.m"
                {
#line 951 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__V_36_36, parse_tree__prog_mode__SubInsts0_34, &parse_tree__prog_mode__SubInsts_35);
                }
#line 953 "prog_mode.m"
                {
#line 953 "prog_mode.m"
                  MR_Word base;
#line 953 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 953 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_35));
#line 953 "prog_mode.m"
                }
#line 950 "prog_mode.m"
              }
#line 894 "prog_mode.m"
            else
#line 894 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 907 "prog_mode.m"
                {
#line 907 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 907 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
#line 907 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 912 "prog_mode.m"
                  if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 909 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 912 "prog_mode.m"
                  else
#line 915 "prog_mode.m"
                    {
#line 915 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__TypeCtorInfo_64_64;
#line 915 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_21;
#line 915 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_40_40;

#line 916 "prog_mode.m"
                      {
#line 916 "prog_mode.m"
                        parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 916 "prog_mode.m"
                      }
#line 3020 "parse_tree.prog_mode.c"
                      parse_tree__prog_mode__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 916 "prog_mode.m"
                      {
#line 916 "prog_mode.m"
                        mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_21);
                      }
#line 924 "prog_mode.m"
                      {
#line 924 "prog_mode.m"
                        MR_Word base;
#line 924 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 924 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 924 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 924 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_59));
#line 924 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_21));
#line 924 "prog_mode.m"
                      }
#line 915 "prog_mode.m"
                    }
#line 907 "prog_mode.m"
                }
#line 894 "prog_mode.m"
              else
#line 894 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 927 "prog_mode.m"
                  {
#line 927 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 927 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 927 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst1_24;
#line 927 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars_27;
#line 927 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst_28;
#line 932 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubVars_25;
#line 932 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubSubInst_26;

#line 928 "prog_mode.m"
                    {
#line 928 "prog_mode.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_23, &parse_tree__prog_mode__SubInst1_24);
                    }
#line 929 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 929 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 929 "prog_mode.m"
                      {
#line 929 "prog_mode.m"
                        parse_tree__prog_mode__SubVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 1)));
#line 929 "prog_mode.m"
                        parse_tree__prog_mode__SubSubInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 2)));
#line 930 "prog_mode.m"
                        {
#line 930 "prog_mode.m"
                          mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_22, parse_tree__prog_mode__SubVars_25, &parse_tree__prog_mode__Vars_27);
                        }
#line 931 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubSubInst_26;
#line 929 "prog_mode.m"
                      }
#line 929 "prog_mode.m"
                    else
#line 933 "prog_mode.m"
                      {
#line 933 "prog_mode.m"
                        parse_tree__prog_mode__Vars_27 = parse_tree__prog_mode__Vars0_22;
#line 934 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubInst1_24;
#line 933 "prog_mode.m"
                      }
#line 936 "prog_mode.m"
                    {
#line 936 "prog_mode.m"
                      MR_Word base;
#line 936 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 936 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 936 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_27));
#line 936 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
#line 936 "prog_mode.m"
                    }
#line 927 "prog_mode.m"
                  }
#line 894 "prog_mode.m"
                else
#line 894 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 946 "prog_mode.m"
                    {
#line 946 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 946 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name_32;

#line 947 "prog_mode.m"
                      {
#line 947 "prog_mode.m"
                        parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_31, &parse_tree__prog_mode__Name_32);
                      }
#line 948 "prog_mode.m"
                      {
#line 948 "prog_mode.m"
                        MR_Word base;
#line 948 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 948 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 948 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_32));
#line 948 "prog_mode.m"
                      }
#line 946 "prog_mode.m"
                    }
#line 894 "prog_mode.m"
                  else
#line 894 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 894 "prog_mode.m"
                      {
#line 894 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 894 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 894 "prog_mode.m"
                        if ((parse_tree__prog_mode__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 894 "prog_mode.m"
                        else
#line 897 "prog_mode.m"
                          {
#line 897 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_74_74), (MR_Integer) 1);
#line 897 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo_11;
#line 897 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_48_48;

#line 898 "prog_mode.m"
                            {
#line 898 "prog_mode.m"
                              parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                            }
#line 900 "prog_mode.m"
                            parse_tree__prog_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
#line 900 "prog_mode.m"
                            {
#line 900 "prog_mode.m"
                              MR_Word base;
#line 900 "prog_mode.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_mode.m"
                              *parse_tree__prog_mode__Inst_6 = base;
#line 900 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_75_75));
#line 900 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__V_48_48));
#line 900 "prog_mode.m"
                            }
#line 897 "prog_mode.m"
                          }
#line 894 "prog_mode.m"
                      }
#line 894 "prog_mode.m"
                    else
#line 938 "prog_mode.m"
                      {
#line 938 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 938 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_39_39;
#line 938 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_60;
#line 941 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstPrime_30;
#line 939 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv2_SubInstPrime_30;

#line 939 "prog_mode.m"
                        {
#line 939 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_29)), &parse_tree__prog_mode__conv2_SubInstPrime_30);
                        }
#line 939 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 939 "prog_mode.m"
                          {
#line 939 "prog_mode.m"
                            parse_tree__prog_mode__SubInstPrime_30 = ((MR_Word) parse_tree__prog_mode__conv2_SubInstPrime_30);
#line 939 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 939 "prog_mode.m"
                          }
#line 941 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 940 "prog_mode.m"
                          parse_tree__prog_mode__SubInst_60 = parse_tree__prog_mode__SubInstPrime_30;
#line 941 "prog_mode.m"
                        else
#line 942 "prog_mode.m"
                          {
#line 942 "prog_mode.m"
                            parse_tree__prog_mode__SubInst_60 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 942 "prog_mode.m"
                          }
#line 944 "prog_mode.m"
                        {
#line 944 "prog_mode.m"
                          parse_tree__prog_mode__V_39_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_29)));
                        }
#line 944 "prog_mode.m"
                        {
#line 944 "prog_mode.m"
                          MR_Word base;
#line 944 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 944 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 944 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_39_39));
#line 944 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_60));
#line 944 "prog_mode.m"
                        }
#line 938 "prog_mode.m"
                      }
#line 894 "prog_mode.m"
  }
#line 884 "prog_mode.m"
}

#line 717 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 717 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 717 "prog_mode.m"
{
#line 717 "prog_mode.m"
  {
#line 717 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 717 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 717 "prog_mode.m"
    {
#line 717 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 717 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 717 "prog_mode.m"
  }
#line 717 "prog_mode.m"
}

#line 852 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 852 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 852 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4)
#line 852 "prog_mode.m"
{
#line 857 "prog_mode.m"
  {
#line 857 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 857 "prog_mode.m"
    if ((parse_tree__prog_mode__HOInstInfo0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "prog_mode.m"
      *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_mode.m"
    else
#line 860 "prog_mode.m"
      {
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred0_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_3), (MR_Integer) 1);
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PorF_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 0)));
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 1)));
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 2)));
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 3)));
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_10;
#line 860 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred_11;

#line 717 "prog_mode.m"
        {
#line 717 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_17, parse_tree__prog_mode__TypeCtorInfo_8_17, (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_10);
        }
#line 863 "prog_mode.m"
        {
#line 863 "prog_mode.m"
          parse_tree__prog_mode__Pred_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 863 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_6));
#line 863 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_10));
#line 863 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_8));
#line 863 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 3) = ((MR_Box) (parse_tree__prog_mode__Det_9));
#line 863 "prog_mode.m"
        }
#line 864 "prog_mode.m"
        *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_11);
#line 860 "prog_mode.m"
      }
#line 857 "prog_mode.m"
  }
#line 852 "prog_mode.m"
}

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 756 "prog_mode.m"
{
#line 756 "prog_mode.m"
  {
#line 756 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 756 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 756 "prog_mode.m"
    {
#line 756 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 756 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 756 "prog_mode.m"
  }
#line 756 "prog_mode.m"
}

#line 808 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 808 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 808 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 808 "prog_mode.m"
{
#line 813 "prog_mode.m"
  {
#line 813 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 813 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 1))))
#line 818 "prog_mode.m"
      {
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA_11;
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB_12;

#line 819 "prog_mode.m"
        {
#line 819 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_9, &parse_tree__prog_mode__InstA_11);
        }
#line 820 "prog_mode.m"
        {
#line 820 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_10, &parse_tree__prog_mode__InstB_12);
        }
#line 821 "prog_mode.m"
        {
#line 821 "prog_mode.m"
          MR_Word base;
#line 821 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 821 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_11));
#line 821 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_12));
#line 821 "prog_mode.m"
        }
#line 818 "prog_mode.m"
      }
#line 813 "prog_mode.m"
    else
#line 813 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 823 "prog_mode.m"
        {
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Live_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Real_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_23;
#line 823 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_24;

#line 824 "prog_mode.m"
          {
#line 824 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
          }
#line 825 "prog_mode.m"
          {
#line 825 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
          }
#line 826 "prog_mode.m"
          {
#line 826 "prog_mode.m"
            MR_Word base;
#line 826 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 826 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 826 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_13));
#line 826 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
#line 826 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
#line 826 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_mode__Real_14));
#line 826 "prog_mode.m"
          }
#line 823 "prog_mode.m"
        }
#line 813 "prog_mode.m"
      else
#line 813 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 0))))
#line 813 "prog_mode.m"
          {
#line 813 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_8_49;
#line 813 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 813 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 813 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName_7;
#line 813 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts_8;
#line 751 "prog_mode.m"
            MR_String parse_tree__prog_mode__Name_41;
#line 747 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Module_40;
#line 747 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_42_42;

#line 747 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__SymName0_5)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 747 "prog_mode.m"
              {
#line 747 "prog_mode.m"
                parse_tree__prog_mode__Module_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_5, (MR_Integer) 0)));
#line 747 "prog_mode.m"
                parse_tree__prog_mode__Name_41 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_5, (MR_Integer) 1)));
#line 748 "prog_mode.m"
                {
#line 748 "prog_mode.m"
                  parse_tree__prog_mode__V_42_42 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                }
#line 748 "prog_mode.m"
                {
#line 748 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_mode__Module_40, parse_tree__prog_mode__V_42_42);
                }
#line 747 "prog_mode.m"
              }
#line 751 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 750 "prog_mode.m"
              {
#line 750 "prog_mode.m"
                parse_tree__prog_mode__SymName_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__SymName_7, 0) = ((MR_Box) (parse_tree__prog_mode__Name_41));
#line 750 "prog_mode.m"
              }
#line 751 "prog_mode.m"
            else
#line 752 "prog_mode.m"
              parse_tree__prog_mode__SymName_7 = parse_tree__prog_mode__SymName0_5;
#line 3565 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_8_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 756 "prog_mode.m"
            {
#line 756 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_49, parse_tree__prog_mode__TypeCtorInfo_8_49, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
            }
#line 816 "prog_mode.m"
            {
#line 816 "prog_mode.m"
              MR_Word base;
#line 816 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 816 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 816 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 816 "prog_mode.m"
            }
#line 813 "prog_mode.m"
          }
#line 813 "prog_mode.m"
        else
#line 813 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 832 "prog_mode.m"
            {
#line 832 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 832 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 832 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 832 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 832 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31;

#line 833 "prog_mode.m"
              {
#line 833 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
              }
#line 834 "prog_mode.m"
              {
#line 834 "prog_mode.m"
                MR_Word base;
#line 834 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 834 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 834 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
#line 834 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_27 | ((((parse_tree__prog_mode__Uniq_30 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
#line 834 "prog_mode.m"
              }
#line 832 "prog_mode.m"
            }
#line 813 "prog_mode.m"
          else
#line 813 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 828 "prog_mode.m"
              {
#line 828 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 828 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 828 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;
#line 828 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Live_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 828 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 829 "prog_mode.m"
                {
#line 829 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
                }
#line 830 "prog_mode.m"
                {
#line 830 "prog_mode.m"
                  MR_Word base;
#line 830 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 830 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 830 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 830 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_25 | ((((parse_tree__prog_mode__Uniq_16 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
#line 830 "prog_mode.m"
                }
#line 828 "prog_mode.m"
              }
#line 813 "prog_mode.m"
            else
#line 813 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 840 "prog_mode.m"
                {
#line 840 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 840 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName_35;

#line 841 "prog_mode.m"
                  {
#line 841 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
                  }
#line 842 "prog_mode.m"
                  {
#line 842 "prog_mode.m"
                    MR_Word base;
#line 842 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = base;
#line 842 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 842 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
#line 842 "prog_mode.m"
                  }
#line 840 "prog_mode.m"
                }
#line 813 "prog_mode.m"
              else
#line 813 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 836 "prog_mode.m"
                  {
#line 836 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 836 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName_33;

#line 837 "prog_mode.m"
                    {
#line 837 "prog_mode.m"
                      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
                    }
#line 838 "prog_mode.m"
                    {
#line 838 "prog_mode.m"
                      MR_Word base;
#line 838 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_4 = base;
#line 838 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 838 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 838 "prog_mode.m"
                    }
#line 836 "prog_mode.m"
                  }
#line 813 "prog_mode.m"
                else
#line 813 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 845 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 813 "prog_mode.m"
                  else
#line 847 "prog_mode.m"
                    {
#line 847 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 847 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 847 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName_37;

#line 848 "prog_mode.m"
                      {
#line 848 "prog_mode.m"
                        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
                      }
#line 849 "prog_mode.m"
                      {
#line 849 "prog_mode.m"
                        MR_Word base;
#line 849 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 849 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_4 = base;
#line 849 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 849 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
#line 849 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
#line 849 "prog_mode.m"
                      }
#line 847 "prog_mode.m"
                    }
#line 813 "prog_mode.m"
  }
#line 808 "prog_mode.m"
}

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 805 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 805 "prog_mode.m"
{
#line 805 "prog_mode.m"
  {
#line 805 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 805 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 805 "prog_mode.m"
    {
#line 805 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 805 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 805 "prog_mode.m"
  }
#line 805 "prog_mode.m"
}

#line 799 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 799 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 799 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4)
#line 799 "prog_mode.m"
{
#line 802 "prog_mode.m"
  {
#line 802 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 802 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
#line 802 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
#line 802 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
#line 802 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7;
#line 802 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_8;

#line 804 "prog_mode.m"
    {
#line 804 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
#line 3836 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 805 "prog_mode.m"
    {
#line 805 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
#line 806 "prog_mode.m"
    {
#line 806 "prog_mode.m"
      MR_Word base;
#line 806 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_4 = base;
#line 806 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 806 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 806 "prog_mode.m"
    }
#line 802 "prog_mode.m"
  }
#line 799 "prog_mode.m"
}

#line 797 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 797 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 797 "prog_mode.m"
{
#line 797 "prog_mode.m"
  {
#line 797 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 797 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_BoundInst_4;

#line 797 "prog_mode.m"
    {
#line 797 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_BoundInst_4);
    }
#line 797 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_BoundInst_4));
#line 797 "prog_mode.m"
  }
#line 797 "prog_mode.m"
}

#line 793 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 793 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 793 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 793 "prog_mode.m"
{
#line 796 "prog_mode.m"
  {
#line 796 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 796 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 797 "prog_mode.m"
    {
#line 797 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 797 "prog_mode.m"
      return;
    }
#line 796 "prog_mode.m"
  }
#line 793 "prog_mode.m"
}

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 756 "prog_mode.m"
{
#line 756 "prog_mode.m"
  {
#line 756 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 756 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 756 "prog_mode.m"
    {
#line 756 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 756 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 756 "prog_mode.m"
  }
#line 756 "prog_mode.m"
}

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 719 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 719 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 719 "prog_mode.m"
{
#line 723 "prog_mode.m"
  {
#line 723 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 723 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
#line 723 "prog_mode.m"
      {
#line 723 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 723 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 723 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial_7;
#line 723 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final_8;

#line 724 "prog_mode.m"
        {
#line 724 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
        }
#line 725 "prog_mode.m"
        {
#line 725 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
        }
#line 726 "prog_mode.m"
        {
#line 726 "prog_mode.m"
          MR_Word base;
#line 726 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 726 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
#line 726 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
#line 726 "prog_mode.m"
        }
#line 723 "prog_mode.m"
      }
#line 723 "prog_mode.m"
    else
#line 728 "prog_mode.m"
      {
#line 728 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 728 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 728 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 728 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_11;
#line 728 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_12;
#line 751 "prog_mode.m"
        MR_String parse_tree__prog_mode__Name_22;
#line 747 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Module_21;
#line 747 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23;

#line 756 "prog_mode.m"
        {
#line 756 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
        }
#line 747 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 747 "prog_mode.m"
          {
#line 747 "prog_mode.m"
            parse_tree__prog_mode__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_9, (MR_Integer) 0)));
#line 747 "prog_mode.m"
            parse_tree__prog_mode__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_9, (MR_Integer) 1)));
#line 748 "prog_mode.m"
            {
#line 748 "prog_mode.m"
              parse_tree__prog_mode__V_23_23 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 748 "prog_mode.m"
            {
#line 748 "prog_mode.m"
              parse_tree__prog_mode__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_mode__Module_21, parse_tree__prog_mode__V_23_23);
            }
#line 747 "prog_mode.m"
          }
#line 751 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 750 "prog_mode.m"
          {
#line 750 "prog_mode.m"
            parse_tree__prog_mode__SymName_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__SymName_12, 0) = ((MR_Box) (parse_tree__prog_mode__Name_22));
#line 750 "prog_mode.m"
          }
#line 751 "prog_mode.m"
        else
#line 752 "prog_mode.m"
          parse_tree__prog_mode__SymName_12 = parse_tree__prog_mode__SymName0_9;
#line 731 "prog_mode.m"
        {
#line 731 "prog_mode.m"
          MR_Word base;
#line 731 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 731 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
#line 731 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
#line 731 "prog_mode.m"
        }
#line 728 "prog_mode.m"
      }
#line 723 "prog_mode.m"
  }
#line 719 "prog_mode.m"
}

#line 694 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 694 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 694 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 694 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
#line 694 "prog_mode.m"
{
#line 697 "prog_mode.m"
  while (MR_TRUE)
#line 697 "prog_mode.m"
    {
#line 697 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 697 "prog_mode.m"
      {
#line 697 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 697 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_4;
#line 697 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_5;
#line 703 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_9;
#line 699 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FunctorConsId_8;

#line 697 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 697 "prog_mode.m"
          {
#line 697 "prog_mode.m"
            parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 697 "prog_mode.m"
            parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 699 "prog_mode.m"
            parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 699 "prog_mode.m"
            parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 700 "prog_mode.m"
            {
#line 700 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
            }
#line 703 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 702 "prog_mode.m"
              {
#line 702 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
#line 702 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 702 "prog_mode.m"
              }
#line 703 "prog_mode.m"
            else
#line 704 "prog_mode.m"
              {
#line 704 "prog_mode.m"
                /* direct tailcall eliminated */
#line 704 "prog_mode.m"
                {
#line 704 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__BoundInsts_5;

#line 704 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 704 "prog_mode.m"
                }
#line 704 "prog_mode.m"
                continue;
#line 704 "prog_mode.m"
              }
#line 697 "prog_mode.m"
          }
#line 697 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 697 "prog_mode.m"
      }
#line 697 "prog_mode.m"
      break;
#line 697 "prog_mode.m"
    }
#line 694 "prog_mode.m"
}

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 616 "prog_mode.m"
{
#line 616 "prog_mode.m"
  {
#line 616 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 616 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 616 "prog_mode.m"
  }
#line 616 "prog_mode.m"
}

#line 617 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 617 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 617 "prog_mode.m"
{
#line 617 "prog_mode.m"
  {
#line 617 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 617 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
#line 617 "prog_mode.m"
    {
#line 617 "prog_mode.m"
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 617 "prog_mode.m"
      return;
    }
#line 617 "prog_mode.m"
  }
#line 617 "prog_mode.m"
}

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 616 "prog_mode.m"
{
#line 616 "prog_mode.m"
  {
#line 616 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 618 "prog_mode.m"
    {
#line 618 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
#line 618 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 618 "prog_mode.m"
      {
#line 618 "prog_mode.m"
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 618 "prog_mode.m"
        return;
      }
#line 616 "prog_mode.m"
  }
#line 616 "prog_mode.m"
}

#line 616 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 616 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 616 "prog_mode.m"
{
#line 616 "prog_mode.m"
  {
#line 616 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 616 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 616 "prog_mode.m"
      {
#line 616 "prog_mode.m"
        {
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 617 "prog_mode.m"
          {
#line 617 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 616 "prog_mode.m"
        }
#line 616 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 616 "prog_mode.m"
      }
#line 616 "prog_mode.m"
    else
#line 616 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 616 "prog_mode.m"
  }
#line 616 "prog_mode.m"
}

#line 612 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 612 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2)
#line 612 "prog_mode.m"
{
#line 612 "prog_mode.m"
  {
#line 612 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 612 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
#line 616 "prog_mode.m"
    while (MR_TRUE)
#line 616 "prog_mode.m"
      {
#line 616 "prog_mode.m"
        /* tailcall optimized into a loop */
#line 616 "prog_mode.m"
        if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 1))))
#line 616 "prog_mode.m"
          {
#line 616 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 616 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 621 "prog_mode.m"
            {
#line 621 "prog_mode.m"
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_32_32);
            }
#line 616 "prog_mode.m"
            if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 624 "prog_mode.m"
              {
#line 624 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_31_31);
              }
#line 616 "prog_mode.m"
          }
#line 616 "prog_mode.m"
        else
#line 616 "prog_mode.m"
          if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 2))))
#line 616 "prog_mode.m"
            {
#line 616 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 616 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 626 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
#line 626 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 627 "prog_mode.m"
              {
#line 627 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_35_35);
              }
#line 616 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 630 "prog_mode.m"
                {
#line 630 "prog_mode.m"
                  return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_34_34);
                }
#line 616 "prog_mode.m"
            }
#line 616 "prog_mode.m"
          else
#line 616 "prog_mode.m"
            if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 0))))
#line 616 "prog_mode.m"
              {
#line 616 "prog_mode.m"
                {
#line 616 "prog_mode.m"
                  parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
                }
#line 616 "prog_mode.m"
              }
#line 616 "prog_mode.m"
            else
#line 616 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 635 "prog_mode.m"
                {
#line 635 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 635 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 635 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 635 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 636 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 636 "prog_mode.m"
                  {
#line 636 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_26;

#line 636 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 636 "prog_mode.m"
                  }
#line 636 "prog_mode.m"
                  continue;
#line 635 "prog_mode.m"
                }
#line 616 "prog_mode.m"
              else
#line 616 "prog_mode.m"
                if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 632 "prog_mode.m"
                  {
#line 632 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInstName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 632 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 632 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 632 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 633 "prog_mode.m"
                    /* direct tailcall eliminated */
#line 633 "prog_mode.m"
                    {
#line 633 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_14;

#line 633 "prog_mode.m"
                      (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 633 "prog_mode.m"
                    }
#line 633 "prog_mode.m"
                    continue;
#line 632 "prog_mode.m"
                  }
#line 616 "prog_mode.m"
                else
#line 616 "prog_mode.m"
                  if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 641 "prog_mode.m"
                    {
#line 641 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 642 "prog_mode.m"
                      /* direct tailcall eliminated */
#line 642 "prog_mode.m"
                      {
#line 642 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_28;

#line 642 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 642 "prog_mode.m"
                      }
#line 642 "prog_mode.m"
                      continue;
#line 641 "prog_mode.m"
                    }
#line 616 "prog_mode.m"
                  else
#line 616 "prog_mode.m"
                    if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 638 "prog_mode.m"
                      {
#line 638 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 639 "prog_mode.m"
                        /* direct tailcall eliminated */
#line 639 "prog_mode.m"
                        {
#line 639 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_27;

#line 639 "prog_mode.m"
                          (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 639 "prog_mode.m"
                        }
#line 639 "prog_mode.m"
                        continue;
#line 638 "prog_mode.m"
                      }
#line 616 "prog_mode.m"
                    else
#line 616 "prog_mode.m"
                      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 644 "prog_mode.m"
                        {
#line 644 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__SubInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 644 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 645 "prog_mode.m"
                          /* direct tailcall eliminated */
#line 645 "prog_mode.m"
                          {
#line 645 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_29;

#line 645 "prog_mode.m"
                            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 645 "prog_mode.m"
                          }
#line 645 "prog_mode.m"
                          continue;
#line 644 "prog_mode.m"
                        }
#line 616 "prog_mode.m"
                      else
#line 616 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 616 "prog_mode.m"
        return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 616 "prog_mode.m"
        break;
#line 616 "prog_mode.m"
      }
#line 612 "prog_mode.m"
  }
#line 612 "prog_mode.m"
}

#line 543 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 543 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 543 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 543 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 543 "prog_mode.m"
{
#line 543 "prog_mode.m"
  {
#line 543 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 543 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 543 "prog_mode.m"
    {
#line 543 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 543 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 543 "prog_mode.m"
  }
#line 543 "prog_mode.m"
}

#line 537 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 537 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 537 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 537 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 537 "prog_mode.m"
{
#line 542 "prog_mode.m"
  {
#line 542 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 542 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 542 "prog_mode.m"
      {
#line 542 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
#line 542 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 542 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 542 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_9;
#line 542 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_15_15;

#line 543 "prog_mode.m"
        {
#line 543 "prog_mode.m"
          parse_tree__prog_mode__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 543 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 543 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
#line 543 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 543 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 543 "prog_mode.m"
        }
#line 4603 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 543 "prog_mode.m"
        {
#line 543 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__V_15_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
        }
#line 544 "prog_mode.m"
        {
#line 544 "prog_mode.m"
          MR_Word base;
#line 544 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 544 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
#line 544 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 544 "prog_mode.m"
        }
#line 542 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 542 "prog_mode.m"
      }
#line 542 "prog_mode.m"
    else
#line 542 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 553 "prog_mode.m"
        {
#line 553 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 553 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 553 "prog_mode.m"
        }
#line 542 "prog_mode.m"
      else
#line 542 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 546 "prog_mode.m"
          {
#line 546 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 546 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 546 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_12;

#line 547 "prog_mode.m"
            {
#line 547 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Sub_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
            }
#line 546 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 546 "prog_mode.m"
              {
#line 548 "prog_mode.m"
                {
#line 548 "prog_mode.m"
                  MR_Word base;
#line 548 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 548 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 548 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
#line 548 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 548 "prog_mode.m"
                }
#line 548 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 546 "prog_mode.m"
              }
#line 546 "prog_mode.m"
          }
#line 542 "prog_mode.m"
        else
#line 542 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 542 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 542 "prog_mode.m"
  }
#line 537 "prog_mode.m"
}

#line 468 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 468 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 468 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 468 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 468 "prog_mode.m"
{
#line 468 "prog_mode.m"
  {
#line 468 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 468 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_Mode_6;

#line 468 "prog_mode.m"
    {
#line 468 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv4_Mode_6);
    }
#line 468 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_Mode_6));
#line 468 "prog_mode.m"
  }
#line 468 "prog_mode.m"
}

#line 517 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 517 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 517 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
#line 517 "prog_mode.m"
{
#line 517 "prog_mode.m"
  {
#line 517 "prog_mode.m"
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
#line 517 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 517 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv3_HeadVar__3_44;

#line 517 "prog_mode.m"
    {
#line 517 "prog_mode.m"
      parse_tree__prog_mode__conv3_HeadVar__3_44 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__517__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
#line 517 "prog_mode.m"
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_HeadVar__3_44));
#line 517 "prog_mode.m"
    return parse_tree__prog_mode__wrapper_arg_2;
#line 517 "prog_mode.m"
  }
#line 517 "prog_mode.m"
}

#line 499 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 499 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 499 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 499 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 499 "prog_mode.m"
{
#line 499 "prog_mode.m"
  {
#line 499 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 499 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_49;

#line 499 "prog_mode.m"
    {
#line 499 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__499__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_HeadVar__3_49);
    }
#line 499 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_49));
#line 499 "prog_mode.m"
  }
#line 499 "prog_mode.m"
}

#line 533 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 533 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 533 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 533 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 533 "prog_mode.m"
{
#line 533 "prog_mode.m"
  {
#line 533 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 533 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_Inst_6;

#line 533 "prog_mode.m"
    {
#line 533 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Inst_6);
    }
#line 533 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Inst_6));
#line 533 "prog_mode.m"
  }
#line 533 "prog_mode.m"
}

#line 481 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 481 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 481 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 481 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 481 "prog_mode.m"
{
#line 481 "prog_mode.m"
  {
#line 481 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 481 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 481 "prog_mode.m"
    {
#line 481 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 481 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 481 "prog_mode.m"
  }
#line 481 "prog_mode.m"
}

#line 453 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 453 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 453 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 453 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 453 "prog_mode.m"
{
#line 461 "prog_mode.m"
  {
#line 461 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 461 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 477 "prog_mode.m"
      {
#line 477 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 477 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 477 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_75;

#line 484 "prog_mode.m"
        if ((parse_tree__prog_mode__HOInstInfo0_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "prog_mode.m"
          parse_tree__prog_mode__HOInstInfo_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "prog_mode.m"
        else
#line 480 "prog_mode.m"
          {
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_85_85;
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_69), (MR_Integer) 1);
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_53_53;
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_54_54;
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__PorF_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, (MR_Integer) 0)));
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, (MR_Integer) 1)));
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MaybeArgRegs_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, (MR_Integer) 2)));
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Det_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, (MR_Integer) 3)));
#line 480 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_62;

#line 481 "prog_mode.m"
            {
#line 481 "prog_mode.m"
              parse_tree__prog_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 481 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
#line 481 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 481 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 481 "prog_mode.m"
            }
#line 4915 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 481 "prog_mode.m"
            {
#line 481 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__V_53_53, parse_tree__prog_mode__Modes0_59, &parse_tree__prog_mode__Modes_62);
            }
#line 482 "prog_mode.m"
            {
#line 482 "prog_mode.m"
              parse_tree__prog_mode__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_54_54, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_58));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_54_54, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_62));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_54_54, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_60));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_54_54, 3) = ((MR_Box) (parse_tree__prog_mode__Det_61));
#line 482 "prog_mode.m"
            }
#line 482 "prog_mode.m"
            parse_tree__prog_mode__HOInstInfo_75 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_54_54);
#line 480 "prog_mode.m"
          }
#line 488 "prog_mode.m"
        {
#line 488 "prog_mode.m"
          MR_Word base;
#line 488 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 488 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_68));
#line 488 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_75));
#line 488 "prog_mode.m"
        }
#line 477 "prog_mode.m"
      }
#line 461 "prog_mode.m"
    else
#line 461 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 532 "prog_mode.m"
        {
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_97_97;
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Sym_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_40;
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_41_41;

#line 533 "prog_mode.m"
          {
#line 533 "prog_mode.m"
            parse_tree__prog_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 533 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 533 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
#line 533 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 533 "prog_mode.m"
          }
#line 4987 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 533 "prog_mode.m"
          {
#line 533 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_97_97, parse_tree__prog_mode__TypeCtorInfo_97_97, parse_tree__prog_mode__V_41_41, parse_tree__prog_mode__SubInsts0_39, &parse_tree__prog_mode__SubInsts_40);
          }
#line 534 "prog_mode.m"
          {
#line 534 "prog_mode.m"
            MR_Word base;
#line 534 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_38));
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_40));
#line 534 "prog_mode.m"
          }
#line 532 "prog_mode.m"
        }
#line 461 "prog_mode.m"
      else
#line 461 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 490 "prog_mode.m"
          {
#line 490 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 490 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 490 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 495 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 494 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 495 "prog_mode.m"
            else
#line 498 "prog_mode.m"
              {
#line 498 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_89_89;
#line 498 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_26;
#line 498 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_47_47;

#line 499 "prog_mode.m"
                {
#line 499 "prog_mode.m"
                  parse_tree__prog_mode__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_47_47, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 499 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_47_47, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
#line 499 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_47_47, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 499 "prog_mode.m"
                }
#line 5054 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 499 "prog_mode.m"
                {
#line 499 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_89_89, parse_tree__prog_mode__TypeCtorInfo_89_89, parse_tree__prog_mode__V_47_47, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_26);
                }
#line 505 "prog_mode.m"
                {
#line 505 "prog_mode.m"
                  MR_Word base;
#line 505 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 505 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 505 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 505 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 505 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_26));
#line 505 "prog_mode.m"
                }
#line 498 "prog_mode.m"
              }
#line 490 "prog_mode.m"
          }
#line 461 "prog_mode.m"
        else
#line 461 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 515 "prog_mode.m"
            {
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_92_92;
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_32;
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_33;
#line 515 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_42_42;

#line 516 "prog_mode.m"
              {
#line 516 "prog_mode.m"
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Sub_4, parse_tree__prog_mode__SubInst0_31, &parse_tree__prog_mode__SubInst_32);
              }
#line 5107 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeInfo_92_92 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 517 "prog_mode.m"
              {
#line 517 "prog_mode.m"
                parse_tree__prog_mode__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_42_42, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
#line 517 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_42_42, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
#line 517 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_42_42, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 517 "prog_mode.m"
              }
#line 517 "prog_mode.m"
              {
#line 517 "prog_mode.m"
                parse_tree__prog_mode__Vars_33 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_92_92, parse_tree__prog_mode__TypeInfo_92_92, parse_tree__prog_mode__V_42_42, parse_tree__prog_mode__Vars0_30);
              }
#line 523 "prog_mode.m"
              {
#line 523 "prog_mode.m"
                MR_Word base;
#line 523 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 523 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 523 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_33));
#line 523 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_32));
#line 523 "prog_mode.m"
              }
#line 515 "prog_mode.m"
            }
#line 461 "prog_mode.m"
          else
#line 461 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 525 "prog_mode.m"
              {
#line 525 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 528 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name1_37;

#line 526 "prog_mode.m"
                {
#line 526 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Sub_4, parse_tree__prog_mode__Name0_36, &parse_tree__prog_mode__Name1_37);
                }
#line 528 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 527 "prog_mode.m"
                  {
#line 527 "prog_mode.m"
                    MR_Word base;
#line 527 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 527 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 527 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_37));
#line 527 "prog_mode.m"
                  }
#line 528 "prog_mode.m"
                else
#line 529 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 525 "prog_mode.m"
              }
#line 461 "prog_mode.m"
            else
#line 461 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 462 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 461 "prog_mode.m"
              else
#line 461 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 464 "prog_mode.m"
                  {
#line 464 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 464 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 464 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_15;

#line 471 "prog_mode.m"
                    if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "prog_mode.m"
                      parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "prog_mode.m"
                    else
#line 467 "prog_mode.m"
                      {
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_82_82;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__PorF_10;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes0_11;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Det_13;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes_14;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_56_56;
#line 467 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_57_57;

#line 466 "prog_mode.m"
                        parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_55_55, (MR_Integer) 0)));
#line 466 "prog_mode.m"
                        parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_55_55, (MR_Integer) 1)));
#line 466 "prog_mode.m"
                        parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_55_55, (MR_Integer) 2)));
#line 466 "prog_mode.m"
                        parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_55_55, (MR_Integer) 3)));
#line 468 "prog_mode.m"
                        {
#line 468 "prog_mode.m"
                          parse_tree__prog_mode__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_56_56, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 468 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_56_56, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
#line 468 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_56_56, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 468 "prog_mode.m"
                        }
#line 5252 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 468 "prog_mode.m"
                        {
#line 468 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_82_82, parse_tree__prog_mode__TypeCtorInfo_82_82, parse_tree__prog_mode__V_56_56, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                        }
#line 469 "prog_mode.m"
                        {
#line 469 "prog_mode.m"
                          parse_tree__prog_mode__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_57_57, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_57_57, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_57_57, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_57_57, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
#line 469 "prog_mode.m"
                        }
#line 469 "prog_mode.m"
                        parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_57_57);
#line 467 "prog_mode.m"
                      }
#line 475 "prog_mode.m"
                    {
#line 475 "prog_mode.m"
                      MR_Word base;
#line 475 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 475 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 475 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 475 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
#line 475 "prog_mode.m"
                    }
#line 464 "prog_mode.m"
                  }
#line 461 "prog_mode.m"
                else
#line 508 "prog_mode.m"
                  {
#line 508 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 511 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var1_28;
#line 509 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_46_46;
#line 509 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv5_V_46_46;
#line 509 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_29_29;

#line 509 "prog_mode.m"
                    {
#line 509 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], parse_tree__prog_mode__Sub_4, ((MR_Box) (parse_tree__prog_mode__Var0_27)), &parse_tree__prog_mode__conv5_V_46_46);
                    }
#line 509 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 509 "prog_mode.m"
                      {
#line 509 "prog_mode.m"
                        parse_tree__prog_mode__V_46_46 = ((MR_Word) parse_tree__prog_mode__conv5_V_46_46);
#line 509 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 509 "prog_mode.m"
                      }
#line 509 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 509 "prog_mode.m"
                      {
#line 509 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 509 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 509 "prog_mode.m"
                          {
#line 509 "prog_mode.m"
                            parse_tree__prog_mode__Var1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_46_46, (MR_Integer) 0)));
#line 509 "prog_mode.m"
                            parse_tree__prog_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_46_46, (MR_Integer) 1)));
#line 509 "prog_mode.m"
                          }
#line 509 "prog_mode.m"
                      }
#line 511 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 510 "prog_mode.m"
                      {
#line 510 "prog_mode.m"
                        MR_Word base;
#line 510 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 510 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 510 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_28));
#line 510 "prog_mode.m"
                      }
#line 511 "prog_mode.m"
                    else
#line 512 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 508 "prog_mode.m"
                  }
#line 461 "prog_mode.m"
  }
#line 453 "prog_mode.m"
}

#line 449 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 449 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 449 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 449 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 449 "prog_mode.m"
{
#line 449 "prog_mode.m"
  {
#line 449 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 449 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 449 "prog_mode.m"
    {
#line 449 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 449 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 449 "prog_mode.m"
  }
#line 449 "prog_mode.m"
}

#line 438 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 438 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Sub_4,
#line 438 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 438 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 438 "prog_mode.m"
{
#line 443 "prog_mode.m"
  {
#line 443 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 443 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 443 "prog_mode.m"
      {
#line 443 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 443 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 443 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 443 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 444 "prog_mode.m"
        {
#line 444 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Sub_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 445 "prog_mode.m"
        {
#line 445 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Sub_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 446 "prog_mode.m"
        {
#line 446 "prog_mode.m"
          MR_Word base;
#line 446 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 446 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 446 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 446 "prog_mode.m"
        }
#line 443 "prog_mode.m"
      }
#line 443 "prog_mode.m"
    else
#line 448 "prog_mode.m"
      {
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_13;
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 449 "prog_mode.m"
        {
#line 449 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 449 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 449 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
#line 449 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 449 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_4));
#line 449 "prog_mode.m"
        }
#line 5484 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 449 "prog_mode.m"
        {
#line 449 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
        }
#line 450 "prog_mode.m"
        {
#line 450 "prog_mode.m"
          MR_Word base;
#line 450 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
#line 450 "prog_mode.m"
        }
#line 448 "prog_mode.m"
      }
#line 443 "prog_mode.m"
  }
#line 438 "prog_mode.m"
}

#line 424 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 424 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 424 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 424 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 424 "prog_mode.m"
{
#line 427 "prog_mode.m"
  {
#line 427 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 427 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "prog_mode.m"
    else
#line 428 "prog_mode.m"
      {
#line 428 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 428 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 279 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__A0_6)) == (MR_mktag((MR_Integer) 0))))
#line 279 "prog_mode.m"
          {
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_13;
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_14;

#line 280 "prog_mode.m"
            {
#line 280 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_11, &parse_tree__prog_mode__I_13);
            }
#line 281 "prog_mode.m"
            {
#line 281 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_12, &parse_tree__prog_mode__F_14);
            }
#line 279 "prog_mode.m"
            {
#line 279 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_13));
#line 279 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_14));
#line 279 "prog_mode.m"
            }
#line 279 "prog_mode.m"
          }
#line 279 "prog_mode.m"
        else
#line 283 "prog_mode.m"
          {
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_18;

#line 284 "prog_mode.m"
            {
#line 284 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_17, &parse_tree__prog_mode__Args_18);
            }
#line 283 "prog_mode.m"
            {
#line 283 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_16));
#line 283 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_18));
#line 283 "prog_mode.m"
            }
#line 283 "prog_mode.m"
          }
#line 430 "prog_mode.m"
        {
#line 430 "prog_mode.m"
          parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 428 "prog_mode.m"
        {
#line 428 "prog_mode.m"
          MR_Word base;
#line 428 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 428 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 428 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 428 "prog_mode.m"
        }
#line 428 "prog_mode.m"
      }
#line 427 "prog_mode.m"
  }
#line 424 "prog_mode.m"
}

#line 406 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 406 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 406 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 406 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 406 "prog_mode.m"
{
#line 409 "prog_mode.m"
  {
#line 409 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 409 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "prog_mode.m"
    else
#line 410 "prog_mode.m"
      {
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PredOrFunc_8;
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_9;
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MaybeArgRegs_10;
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_11;
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_12;
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HeadVar__2_2), (MR_Integer) 1);
#line 410 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 411 "prog_mode.m"
        parse_tree__prog_mode__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 0)));
#line 411 "prog_mode.m"
        parse_tree__prog_mode__Modes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 1)));
#line 411 "prog_mode.m"
        parse_tree__prog_mode__MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 2)));
#line 411 "prog_mode.m"
        parse_tree__prog_mode__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 3)));
#line 418 "prog_mode.m"
        {
#line 418 "prog_mode.m"
          parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_1);
        }
#line 420 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 419 "prog_mode.m"
          parse_tree__prog_mode__Modes_12 = parse_tree__prog_mode__Modes0_9;
#line 420 "prog_mode.m"
        else
#line 421 "prog_mode.m"
          {
#line 421 "prog_mode.m"
            parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_9, &parse_tree__prog_mode__Modes_12);
          }
#line 414 "prog_mode.m"
        {
#line 414 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_8));
#line 414 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_12));
#line 414 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_10));
#line 414 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Det_11));
#line 414 "prog_mode.m"
        }
#line 414 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_14_14);
#line 410 "prog_mode.m"
      }
#line 409 "prog_mode.m"
  }
#line 406 "prog_mode.m"
}

#line 395 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 395 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 395 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 395 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 395 "prog_mode.m"
{
#line 398 "prog_mode.m"
  {
#line 398 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 398 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "prog_mode.m"
    else
#line 400 "prog_mode.m"
      {
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_8;
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_9;
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
#line 400 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_12;

#line 402 "prog_mode.m"
        {
#line 402 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
        }
#line 403 "prog_mode.m"
        {
#line 403 "prog_mode.m"
          parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
#line 403 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
#line 403 "prog_mode.m"
        }
#line 404 "prog_mode.m"
        {
#line 404 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
        }
#line 400 "prog_mode.m"
        {
#line 400 "prog_mode.m"
          MR_Word base;
#line 400 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 400 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
#line 400 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
#line 400 "prog_mode.m"
        }
#line 400 "prog_mode.m"
      }
#line 398 "prog_mode.m"
  }
#line 395 "prog_mode.m"
}

#line 376 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 376 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 376 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 376 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 376 "prog_mode.m"
{
#line 381 "prog_mode.m"
  {
#line 381 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 381 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 381 "prog_mode.m"
      {
#line 381 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 381 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 381 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9;

#line 382 "prog_mode.m"
        {
#line 382 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
        }
#line 383 "prog_mode.m"
        {
#line 383 "prog_mode.m"
          MR_Word base;
#line 383 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 383 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
#line 383 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 383 "prog_mode.m"
        }
#line 381 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 381 "prog_mode.m"
      }
#line 381 "prog_mode.m"
    else
#line 381 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 392 "prog_mode.m"
        {
#line 392 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 392 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 392 "prog_mode.m"
        }
#line 381 "prog_mode.m"
      else
#line 381 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 385 "prog_mode.m"
          {
#line 385 "prog_mode.m"
            MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 385 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 385 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst_12;

#line 386 "prog_mode.m"
            {
#line 386 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
            }
#line 385 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 385 "prog_mode.m"
              {
#line 387 "prog_mode.m"
                {
#line 387 "prog_mode.m"
                  MR_Word base;
#line 387 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 387 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 387 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
#line 387 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
#line 387 "prog_mode.m"
                }
#line 387 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 385 "prog_mode.m"
              }
#line 385 "prog_mode.m"
          }
#line 381 "prog_mode.m"
        else
#line 381 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 381 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 381 "prog_mode.m"
  }
#line 376 "prog_mode.m"
}

#line 304 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 304 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 304 "prog_mode.m"
{
#line 312 "prog_mode.m"
  {
#line 312 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 312 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 319 "prog_mode.m"
      {
#line 319 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 319 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 319 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_36;

#line 320 "prog_mode.m"
        {
#line 320 "prog_mode.m"
          parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_35, &parse_tree__prog_mode__HOInstInfo_36);
        }
#line 321 "prog_mode.m"
        {
#line 321 "prog_mode.m"
          MR_Word base;
#line 321 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 321 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_34));
#line 321 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_36));
#line 321 "prog_mode.m"
        }
#line 319 "prog_mode.m"
      }
#line 312 "prog_mode.m"
    else
#line 312 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 366 "prog_mode.m"
        {
#line 366 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 366 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 366 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_29;

#line 367 "prog_mode.m"
          {
#line 367 "prog_mode.m"
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_28, &parse_tree__prog_mode__ArgInsts_29);
          }
#line 368 "prog_mode.m"
          {
#line 368 "prog_mode.m"
            MR_Word base;
#line 368 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 368 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 368 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_27));
#line 368 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_29));
#line 368 "prog_mode.m"
          }
#line 366 "prog_mode.m"
        }
#line 312 "prog_mode.m"
      else
#line 312 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 323 "prog_mode.m"
          {
#line 323 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 323 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 323 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 328 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 327 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 328 "prog_mode.m"
            else
#line 331 "prog_mode.m"
              {
#line 331 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_18;

#line 332 "prog_mode.m"
                {
#line 332 "prog_mode.m"
                  parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_18);
                }
#line 334 "prog_mode.m"
                {
#line 334 "prog_mode.m"
                  MR_Word base;
#line 334 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 334 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 334 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 334 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_18));
#line 334 "prog_mode.m"
                }
#line 331 "prog_mode.m"
              }
#line 323 "prog_mode.m"
          }
#line 312 "prog_mode.m"
        else
#line 312 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 344 "prog_mode.m"
            {
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_38;
#line 347 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_23;
#line 345 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv0_Var0_23;
#line 354 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_37;
#line 350 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_37;

#line 345 "prog_mode.m"
              {
#line 345 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_21, &parse_tree__prog_mode__conv0_Var0_23);
              }
#line 345 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 345 "prog_mode.m"
                {
#line 345 "prog_mode.m"
                  parse_tree__prog_mode__Var0_23 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_23);
#line 345 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 345 "prog_mode.m"
                }
#line 347 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 346 "prog_mode.m"
                parse_tree__prog_mode__Var_38 = parse_tree__prog_mode__Var0_23;
#line 347 "prog_mode.m"
              else
#line 348 "prog_mode.m"
                {
#line 348 "prog_mode.m"
                  {
#line 348 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
#line 348 "prog_mode.m"
                    return;
                  }
#line 348 "prog_mode.m"
                }
#line 350 "prog_mode.m"
              {
#line 350 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_38)), &parse_tree__prog_mode__conv1_ReplacementInst_37);
              }
#line 350 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 350 "prog_mode.m"
                {
#line 350 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_37 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_37);
#line 350 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 350 "prog_mode.m"
                }
#line 354 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 351 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_37;
#line 354 "prog_mode.m"
              else
#line 355 "prog_mode.m"
                {
#line 355 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_24;

#line 355 "prog_mode.m"
                  {
#line 355 "prog_mode.m"
                    parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_22, &parse_tree__prog_mode__SubInst_24);
                  }
#line 356 "prog_mode.m"
                  {
#line 356 "prog_mode.m"
                    MR_Word base;
#line 356 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 356 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 356 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_21));
#line 356 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_24));
#line 356 "prog_mode.m"
                  }
#line 355 "prog_mode.m"
                }
#line 344 "prog_mode.m"
            }
#line 312 "prog_mode.m"
          else
#line 312 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 359 "prog_mode.m"
              {
#line 359 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 362 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_26;

#line 360 "prog_mode.m"
                {
#line 360 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_25, &parse_tree__prog_mode__InstName_26);
                }
#line 362 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 361 "prog_mode.m"
                  {
#line 361 "prog_mode.m"
                    MR_Word base;
#line 361 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 361 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 361 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_26));
#line 361 "prog_mode.m"
                  }
#line 362 "prog_mode.m"
                else
#line 363 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 359 "prog_mode.m"
              }
#line 312 "prog_mode.m"
            else
#line 312 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 313 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 312 "prog_mode.m"
              else
#line 312 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 315 "prog_mode.m"
                  {
#line 315 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 315 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 315 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_10;

#line 316 "prog_mode.m"
                    {
#line 316 "prog_mode.m"
                      parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_9, &parse_tree__prog_mode__HOInstInfo_10);
                    }
#line 317 "prog_mode.m"
                    {
#line 317 "prog_mode.m"
                      MR_Word base;
#line 317 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 317 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 317 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 317 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
#line 317 "prog_mode.m"
                    }
#line 315 "prog_mode.m"
                  }
#line 312 "prog_mode.m"
                else
#line 337 "prog_mode.m"
                  {
#line 337 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 340 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ReplacementInst_20;
#line 338 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv2_ReplacementInst_20;

#line 338 "prog_mode.m"
                    {
#line 338 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_19)), &parse_tree__prog_mode__conv2_ReplacementInst_20);
                    }
#line 338 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 338 "prog_mode.m"
                      {
#line 338 "prog_mode.m"
                        parse_tree__prog_mode__ReplacementInst_20 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_20);
#line 338 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 338 "prog_mode.m"
                      }
#line 340 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 339 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_20;
#line 340 "prog_mode.m"
                    else
#line 341 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 337 "prog_mode.m"
                  }
#line 312 "prog_mode.m"
  }
#line 304 "prog_mode.m"
}

#line 293 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 293 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 293 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 293 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 293 "prog_mode.m"
{
#line 296 "prog_mode.m"
  {
#line 296 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 296 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "prog_mode.m"
    else
#line 297 "prog_mode.m"
      {
#line 297 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 297 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 298 "prog_mode.m"
        {
#line 298 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__A0_6, &parse_tree__prog_mode__A_8);
        }
#line 299 "prog_mode.m"
        {
#line 299 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 297 "prog_mode.m"
        {
#line 297 "prog_mode.m"
          MR_Word base;
#line 297 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 297 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 297 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 297 "prog_mode.m"
        }
#line 297 "prog_mode.m"
      }
#line 296 "prog_mode.m"
  }
#line 293 "prog_mode.m"
}

#line 987 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 987 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 987 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 987 "prog_mode.m"
{
#line 987 "prog_mode.m"
  {
#line 987 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 987 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 987 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10;

#line 987 "prog_mode.m"
    {
#line 987 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10);
    }
#line 987 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 987 "prog_mode.m"
      {
#line 987 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10));
#line 987 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 987 "prog_mode.m"
      }
#line 987 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 987 "prog_mode.m"
  }
#line 987 "prog_mode.m"
}

#line 158 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(
#line 158 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndModes_2)
#line 158 "prog_mode.m"
{
#line 986 "prog_mode.m"
  {
#line 986 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 987 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 987 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 987 "prog_mode.m"
    {
#line 987 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 987 "prog_mode.m"
    {
#line 987 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__TypeAndModes_2, ((MR_Box) (parse_tree__prog_mode__V_5_5)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 987 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 987 "prog_mode.m"
      {
#line 987 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 987 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 987 "prog_mode.m"
      }
#line 986 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
  }
#line 158 "prog_mode.m"
}

#line 984 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 984 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 984 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 984 "prog_mode.m"
{
#line 984 "prog_mode.m"
  {
#line 984 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 984 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 984 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 984 "prog_mode.m"
    {
#line 984 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 984 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 984 "prog_mode.m"
      {
#line 984 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 984 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 984 "prog_mode.m"
      }
#line 984 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 984 "prog_mode.m"
  }
#line 984 "prog_mode.m"
}

#line 155 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(
#line 155 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_2)
#line 155 "prog_mode.m"
{
#line 977 "prog_mode.m"
  {
#line 977 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 977 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_4_4;
#line 984 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 984 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 978 "prog_mode.m"
    {
#line 978 "prog_mode.m"
      parse_tree__prog_mode__V_4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 984 "prog_mode.m"
    {
#line 984 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[5], parse_tree__prog_mode__Modes_2, ((MR_Box) (parse_tree__prog_mode__V_4_4)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 984 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 984 "prog_mode.m"
      {
#line 984 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 984 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 984 "prog_mode.m"
      }
#line 977 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 977 "prog_mode.m"
  }
#line 155 "prog_mode.m"
}

#line 880 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 880 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 880 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 880 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 880 "prog_mode.m"
{
#line 880 "prog_mode.m"
  {
#line 880 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 880 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 880 "prog_mode.m"
    {
#line 880 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 880 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 880 "prog_mode.m"
  }
#line 880 "prog_mode.m"
}

#line 147 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
#line 147 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 147 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 147 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 147 "prog_mode.m"
{
#line 874 "prog_mode.m"
  {
#line 874 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 874 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 874 "prog_mode.m"
      {
#line 874 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 874 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 874 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 874 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 875 "prog_mode.m"
        {
#line 875 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 876 "prog_mode.m"
        {
#line 876 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 877 "prog_mode.m"
        {
#line 877 "prog_mode.m"
          MR_Word base;
#line 877 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 877 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 877 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 877 "prog_mode.m"
        }
#line 874 "prog_mode.m"
      }
#line 874 "prog_mode.m"
    else
#line 879 "prog_mode.m"
      {
#line 879 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 879 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 879 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 879 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_13;
#line 879 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 880 "prog_mode.m"
        {
#line 880 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 880 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 880 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
#line 880 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 880 "prog_mode.m"
        }
#line 6633 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 880 "prog_mode.m"
        {
#line 880 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
        }
#line 881 "prog_mode.m"
        {
#line 881 "prog_mode.m"
          MR_Word base;
#line 881 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 881 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 881 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
#line 881 "prog_mode.m"
        }
#line 879 "prog_mode.m"
      }
#line 874 "prog_mode.m"
  }
#line 147 "prog_mode.m"
}

#line 140 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
#line 140 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 140 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 140 "prog_mode.m"
{
#line 869 "prog_mode.m"
  {
#line 869 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;

#line 870 "prog_mode.m"
    {
#line 870 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 870 "prog_mode.m"
    {
#line 870 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__V_5_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
#line 870 "prog_mode.m"
      return;
    }
#line 869 "prog_mode.m"
  }
#line 140 "prog_mode.m"
}

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 756 "prog_mode.m"
{
#line 756 "prog_mode.m"
  {
#line 756 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 756 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 756 "prog_mode.m"
    {
#line 756 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 756 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 756 "prog_mode.m"
  }
#line 756 "prog_mode.m"
}

#line 133 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
#line 133 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 133 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 133 "prog_mode.m"
{
#line 764 "prog_mode.m"
  {
#line 764 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 764 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 771 "prog_mode.m"
      {
#line 771 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 771 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 771 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_12;

#line 772 "prog_mode.m"
        {
#line 772 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_11, &parse_tree__prog_mode__HOInstInfo_12);
        }
#line 773 "prog_mode.m"
        {
#line 773 "prog_mode.m"
          MR_Word base;
#line 773 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 773 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
#line 773 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
#line 773 "prog_mode.m"
        }
#line 771 "prog_mode.m"
      }
#line 764 "prog_mode.m"
    else
#line 764 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 787 "prog_mode.m"
        {
#line 787 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_8_37;
#line 787 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 787 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 787 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_20;
#line 787 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_21;
#line 751 "prog_mode.m"
          MR_String parse_tree__prog_mode__Name_29;
#line 747 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Module_28;
#line 747 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_30_30;

#line 747 "prog_mode.m"
          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_18)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 747 "prog_mode.m"
            {
#line 747 "prog_mode.m"
              parse_tree__prog_mode__Module_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_18, (MR_Integer) 0)));
#line 747 "prog_mode.m"
              parse_tree__prog_mode__Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_18, (MR_Integer) 1)));
#line 748 "prog_mode.m"
              {
#line 748 "prog_mode.m"
                parse_tree__prog_mode__V_30_30 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
              }
#line 748 "prog_mode.m"
              {
#line 748 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_mode__Module_28, parse_tree__prog_mode__V_30_30);
              }
#line 747 "prog_mode.m"
            }
#line 751 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 750 "prog_mode.m"
            {
#line 750 "prog_mode.m"
              parse_tree__prog_mode__Name_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name_20, 0) = ((MR_Box) (parse_tree__prog_mode__Name_29));
#line 750 "prog_mode.m"
            }
#line 751 "prog_mode.m"
          else
#line 752 "prog_mode.m"
            parse_tree__prog_mode__Name_20 = parse_tree__prog_mode__Name0_18;
#line 6829 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_8_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 756 "prog_mode.m"
          {
#line 756 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_37, parse_tree__prog_mode__TypeCtorInfo_8_37, (MR_Word) &parse_tree__prog_mode_scalar_common_2[4], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
          }
#line 790 "prog_mode.m"
          {
#line 790 "prog_mode.m"
            MR_Word base;
#line 790 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 790 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 790 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 790 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
#line 790 "prog_mode.m"
          }
#line 787 "prog_mode.m"
        }
#line 764 "prog_mode.m"
      else
#line 764 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 779 "prog_mode.m"
          {
#line 779 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 779 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 779 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts_15;
#line 779 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

#line 780 "prog_mode.m"
            {
#line 780 "prog_mode.m"
              parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
            }
#line 781 "prog_mode.m"
            {
#line 781 "prog_mode.m"
              MR_Word base;
#line 781 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 781 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 781 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
#line 781 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
#line 781 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
#line 781 "prog_mode.m"
            }
#line 779 "prog_mode.m"
          }
#line 764 "prog_mode.m"
        else
#line 764 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 767 "prog_mode.m"
            {
#line 767 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 767 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 767 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_9;

#line 768 "prog_mode.m"
              {
#line 768 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
              }
#line 769 "prog_mode.m"
              {
#line 769 "prog_mode.m"
                MR_Word base;
#line 769 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 769 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 769 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
#line 769 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
#line 769 "prog_mode.m"
              }
#line 767 "prog_mode.m"
            }
#line 764 "prog_mode.m"
          else
#line 764 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 783 "prog_mode.m"
              {
#line 783 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 783 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;

#line 784 "prog_mode.m"
                {
#line 784 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
                }
#line 785 "prog_mode.m"
                {
#line 785 "prog_mode.m"
                  MR_Word base;
#line 785 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 785 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 785 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 785 "prog_mode.m"
                }
#line 783 "prog_mode.m"
              }
#line 764 "prog_mode.m"
            else
#line 764 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 775 "prog_mode.m"
                {
#line 775 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 775 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 775 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo_24;

#line 776 "prog_mode.m"
                  {
#line 776 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_23, &parse_tree__prog_mode__HOInstInfo_24);
                  }
#line 777 "prog_mode.m"
                  {
#line 777 "prog_mode.m"
                    MR_Word base;
#line 777 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = base;
#line 777 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 777 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
#line 777 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
#line 777 "prog_mode.m"
                  }
#line 775 "prog_mode.m"
                }
#line 764 "prog_mode.m"
              else
#line 765 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 764 "prog_mode.m"
  }
#line 133 "prog_mode.m"
}

#line 756 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 756 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 756 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 756 "prog_mode.m"
{
#line 756 "prog_mode.m"
  {
#line 756 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 756 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 756 "prog_mode.m"
    {
#line 756 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 756 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 756 "prog_mode.m"
  }
#line 756 "prog_mode.m"
}

#line 130 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
#line 130 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 130 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 130 "prog_mode.m"
{
#line 755 "prog_mode.m"
  {
#line 755 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 755 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 756 "prog_mode.m"
    {
#line 756 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[3], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 756 "prog_mode.m"
      return;
    }
#line 755 "prog_mode.m"
  }
#line 130 "prog_mode.m"
}

#line 717 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 717 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 717 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 717 "prog_mode.m"
{
#line 717 "prog_mode.m"
  {
#line 717 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 717 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 717 "prog_mode.m"
    {
#line 717 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 717 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 717 "prog_mode.m"
  }
#line 717 "prog_mode.m"
}

#line 127 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
#line 127 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_3,
#line 127 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_4)
#line 127 "prog_mode.m"
{
#line 716 "prog_mode.m"
  {
#line 716 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 716 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 717 "prog_mode.m"
    {
#line 717 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[2], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
#line 717 "prog_mode.m"
      return;
    }
#line 716 "prog_mode.m"
  }
#line 127 "prog_mode.m"
}

#line 125 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_p_0(
#line 125 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId0_3,
#line 125 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_4)
#line 125 "prog_mode.m"
{
#line 738 "prog_mode.m"
  {
#line 738 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 738 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Name0_5;
#line 738 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_6;
#line 738 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtor_7;

#line 735 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 735 "prog_mode.m"
      {
#line 735 "prog_mode.m"
        parse_tree__prog_mode__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 1)));
#line 735 "prog_mode.m"
        parse_tree__prog_mode__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 2)));
#line 735 "prog_mode.m"
        parse_tree__prog_mode__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 3)));
#line 736 "prog_mode.m"
        {
#line 736 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_8;
#line 751 "prog_mode.m"
          MR_String parse_tree__prog_mode__Name_12;
#line 747 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Module_11;
#line 747 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_13_13;

#line 747 "prog_mode.m"
          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 747 "prog_mode.m"
            {
#line 747 "prog_mode.m"
              parse_tree__prog_mode__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 747 "prog_mode.m"
              parse_tree__prog_mode__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 748 "prog_mode.m"
              {
#line 748 "prog_mode.m"
                parse_tree__prog_mode__V_13_13 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
              }
#line 748 "prog_mode.m"
              {
#line 748 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_mode__Module_11, parse_tree__prog_mode__V_13_13);
              }
#line 747 "prog_mode.m"
            }
#line 751 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 750 "prog_mode.m"
            {
#line 750 "prog_mode.m"
              parse_tree__prog_mode__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 750 "prog_mode.m"
            }
#line 751 "prog_mode.m"
          else
#line 752 "prog_mode.m"
            parse_tree__prog_mode__Name_8 = parse_tree__prog_mode__Name0_5;
#line 737 "prog_mode.m"
          {
#line 737 "prog_mode.m"
            MR_Word base;
#line 737 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 737 "prog_mode.m"
            *parse_tree__prog_mode__ConsId_4 = base;
#line 737 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_8));
#line 737 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_6));
#line 737 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_7));
#line 737 "prog_mode.m"
          }
#line 736 "prog_mode.m"
        }
#line 735 "prog_mode.m"
      }
#line 735 "prog_mode.m"
    else
#line 739 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_4 = parse_tree__prog_mode__ConsId0_3;
#line 738 "prog_mode.m"
  }
#line 125 "prog_mode.m"
}

#line 120 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_id_to_int_2_p_0(
#line 120 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 120 "prog_mode.m"
  MR_Integer * parse_tree__prog_mode__X_4)
#line 120 "prog_mode.m"
{
#line 708 "prog_mode.m"
  {
#line 708 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 708 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 708 "prog_mode.m"
    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 708 "prog_mode.m"
  }
#line 120 "prog_mode.m"
}

#line 117 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
#line 117 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_1,
#line 117 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 117 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 117 "prog_mode.m"
{
#line 658 "prog_mode.m"
  {
#line 658 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 658 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 658 "prog_mode.m"
    else
#line 660 "prog_mode.m"
      {
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId_8;
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsIds_9;
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
#line 651 "prog_mode.m"
        MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_15;
#line 654 "prog_mode.m"
        MR_Integer parse_tree__prog_mode__Arity_16;
#line 652 "prog_mode.m"
        MR_Word parse_tree__prog_mode___TypeCtor_17;

#line 652 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 652 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 652 "prog_mode.m"
          {
#line 652 "prog_mode.m"
            parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
#line 652 "prog_mode.m"
            parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
#line 652 "prog_mode.m"
            parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
#line 653 "prog_mode.m"
            {
#line 653 "prog_mode.m"
              parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
#line 653 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
#line 653 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
#line 653 "prog_mode.m"
            }
#line 652 "prog_mode.m"
          }
#line 652 "prog_mode.m"
        else
#line 655 "prog_mode.m"
          parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
#line 662 "prog_mode.m"
        {
#line 662 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
        }
#line 660 "prog_mode.m"
        {
#line 660 "prog_mode.m"
          MR_Word base;
#line 660 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 660 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
#line 660 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
#line 660 "prog_mode.m"
        }
#line 660 "prog_mode.m"
      }
#line 658 "prog_mode.m"
  }
#line 117 "prog_mode.m"
}

#line 115 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
#line 115 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_4,
#line 115 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_5,
#line 115 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_6)
#line 115 "prog_mode.m"
{
#line 650 "prog_mode.m"
  {
#line 650 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 650 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
#line 651 "prog_mode.m"
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
#line 654 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_9;
#line 654 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_10;
#line 652 "prog_mode.m"
    MR_Word parse_tree__prog_mode___TypeCtor_11;

#line 652 "prog_mode.m"
    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 652 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 652 "prog_mode.m"
      {
#line 652 "prog_mode.m"
        parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
#line 652 "prog_mode.m"
        parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
#line 652 "prog_mode.m"
        parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
#line 653 "prog_mode.m"
        {
#line 653 "prog_mode.m"
          MR_Word base;
#line 653 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_mode.m"
          *parse_tree__prog_mode__ConsId_6 = base;
#line 653 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
#line 653 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
#line 653 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
#line 653 "prog_mode.m"
        }
#line 652 "prog_mode.m"
      }
#line 652 "prog_mode.m"
    else
#line 655 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
#line 650 "prog_mode.m"
  }
#line 115 "prog_mode.m"
}

#line 109 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_4_p_0(
#line 109 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_5,
#line 109 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 109 "prog_mode.m"
  MR_Integer parse_tree__prog_mode__Arity_7,
#line 109 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
#line 109 "prog_mode.m"
{
#line 671 "prog_mode.m"
  {
#line 671 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 671 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 671 "prog_mode.m"
      {
#line 672 "prog_mode.m"
        {
#line 672 "prog_mode.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
        }
#line 671 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 671 "prog_mode.m"
      }
#line 671 "prog_mode.m"
    else
#line 671 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 2))))
#line 690 "prog_mode.m"
        {
#line 690 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_17_17;
#line 690 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
#line 690 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

#line 691 "prog_mode.m"
          {
#line 691 "prog_mode.m"
            parse_tree__prog_mode__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_24));
#line 691 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "prog_mode.m"
          }
#line 691 "prog_mode.m"
          {
#line 691 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_17_17)), parse_tree__prog_mode__ArgInsts_8);
          }
#line 690 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 690 "prog_mode.m"
        }
#line 671 "prog_mode.m"
      else
#line 671 "prog_mode.m"
        if ((((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 1))))))
#line 687 "prog_mode.m"
          {
#line 688 "prog_mode.m"
            {
#line 688 "prog_mode.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
            }
#line 687 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 687 "prog_mode.m"
          }
#line 671 "prog_mode.m"
        else
#line 671 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 677 "prog_mode.m"
            {
#line 677 "prog_mode.m"
              MR_Word parse_tree__prog_mode__List_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
#line 677 "prog_mode.m"
              MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 677 "prog_mode.m"
              MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
#line 680 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_14;

#line 678 "prog_mode.m"
              {
#line 678 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__List_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
              }
#line 680 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 679 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
#line 680 "prog_mode.m"
              else
#line 682 "prog_mode.m"
                {
#line 682 "prog_mode.m"
                  {
#line 682 "prog_mode.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
#line 682 "prog_mode.m"
                }
#line 677 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 677 "prog_mode.m"
            }
#line 671 "prog_mode.m"
          else
#line 671 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 674 "prog_mode.m"
              {
#line 674 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 674 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 674 "prog_mode.m"
                MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

#line 675 "prog_mode.m"
                {
#line 675 "prog_mode.m"
                  parse_tree__prog_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 675 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 675 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
#line 675 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "prog_mode.m"
                }
#line 675 "prog_mode.m"
                {
#line 675 "prog_mode.m"
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_21_21)), parse_tree__prog_mode__ArgInsts_8);
                }
#line 674 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 674 "prog_mode.m"
              }
#line 671 "prog_mode.m"
            else
#line 671 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_FALSE;
#line 671 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 671 "prog_mode.m"
  }
#line 109 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 571 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 575 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 575 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 575 "prog_mode.m"
{
#line 575 "prog_mode.m"
  {
#line 575 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 575 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12);
#line 575 "prog_mode.m"
    {
#line 575 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 575 "prog_mode.m"
      return;
    }
#line 575 "prog_mode.m"
  }
#line 575 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    {
#line 584 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
#line 584 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 584 "prog_mode.m"
      {
#line 584 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 584 "prog_mode.m"
        return;
      }
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 582 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 582 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 582 "prog_mode.m"
{
#line 582 "prog_mode.m"
  {
#line 582 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 582 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13);
#line 582 "prog_mode.m"
    {
#line 582 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
#line 582 "prog_mode.m"
      return;
    }
#line 582 "prog_mode.m"
  }
#line 582 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 578 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
#line 578 "prog_mode.m"
      {
#line 578 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 578 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 577 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_74_74;
#line 577 "prog_mode.m"
        {
#line 577 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 579 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_73_73;
#line 579 "prog_mode.m"
        {
#line 579 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 578 "prog_mode.m"
      }
#line 578 "prog_mode.m"
    else
#line 581 "prog_mode.m"
      {
#line 581 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 581 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 582 "prog_mode.m"
        {
#line 582 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5, parse_tree__prog_mode__env_ptr);
        }
#line 581 "prog_mode.m"
      }
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 571 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 571 "prog_mode.m"
      {
#line 571 "prog_mode.m"
        {
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_38;
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_9;
#line 570 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_11;

#line 572 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
#line 572 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 572 "prog_mode.m"
            {
#line 572 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
#line 571 "prog_mode.m"
              {
#line 573 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
#line 7797 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 575 "prog_mode.m"
                {
#line 575 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_38, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
                }
#line 571 "prog_mode.m"
              }
#line 572 "prog_mode.m"
            }
#line 571 "prog_mode.m"
        }
#line 571 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 571 "prog_mode.m"
      }
#line 571 "prog_mode.m"
    else
#line 571 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 598 "prog_mode.m"
{
#line 598 "prog_mode.m"
  {
#line 598 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 598 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
#line 598 "prog_mode.m"
  }
#line 598 "prog_mode.m"
}

#line 599 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 599 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 599 "prog_mode.m"
{
#line 599 "prog_mode.m"
  {
#line 599 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 599 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37);
#line 599 "prog_mode.m"
    {
#line 599 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
#line 599 "prog_mode.m"
      return;
    }
#line 599 "prog_mode.m"
  }
#line 599 "prog_mode.m"
}

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 598 "prog_mode.m"
{
#line 598 "prog_mode.m"
  {
#line 598 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 600 "prog_mode.m"
    {
#line 600 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37);
    }
#line 600 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 600 "prog_mode.m"
      {
#line 600 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(parse_tree__prog_mode__env_ptr);
#line 600 "prog_mode.m"
        return;
      }
#line 598 "prog_mode.m"
  }
#line 598 "prog_mode.m"
}

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 598 "prog_mode.m"
{
#line 598 "prog_mode.m"
  {
#line 598 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 598 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
#line 598 "prog_mode.m"
      {
#line 598 "prog_mode.m"
        {
#line 598 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 598 "prog_mode.m"
          MR_Word parse_tree__prog_mode___SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 599 "prog_mode.m"
          {
#line 599 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37, parse_tree__prog_mode__ArgInsts_36, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
          }
#line 598 "prog_mode.m"
        }
#line 598 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 598 "prog_mode.m"
      }
#line 598 "prog_mode.m"
    else
#line 598 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 598 "prog_mode.m"
  }
#line 598 "prog_mode.m"
}

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 586 "prog_mode.m"
{
#line 586 "prog_mode.m"
  {
#line 586 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 586 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
#line 586 "prog_mode.m"
  }
#line 586 "prog_mode.m"
}

#line 590 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 590 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 590 "prog_mode.m"
{
#line 590 "prog_mode.m"
  {
#line 590 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 590 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24);
#line 590 "prog_mode.m"
    {
#line 590 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
#line 590 "prog_mode.m"
      return;
    }
#line 590 "prog_mode.m"
  }
#line 590 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 592 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27);
#line 592 "prog_mode.m"
    {
#line 592 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
#line 592 "prog_mode.m"
      return;
    }
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 586 "prog_mode.m"
{
#line 586 "prog_mode.m"
  {
#line 586 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 593 "prog_mode.m"
    {
#line 593 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27);
    }
#line 593 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 593 "prog_mode.m"
      {
#line 593 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
#line 593 "prog_mode.m"
        return;
      }
#line 586 "prog_mode.m"
  }
#line 586 "prog_mode.m"
}

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 586 "prog_mode.m"
{
#line 586 "prog_mode.m"
  {
#line 586 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 586 "prog_mode.m"
    {
#line 591 "prog_mode.m"
      MR_Word parse_tree__prog_mode___ConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 0)));

#line 591 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 1)));
#line 8063 "parse_tree.prog_mode.c"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 592 "prog_mode.m"
      {
#line 592 "prog_mode.m"
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
#line 586 "prog_mode.m"
    }
#line 586 "prog_mode.m"
  }
#line 586 "prog_mode.m"
}

#line 586 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 586 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 586 "prog_mode.m"
{
#line 586 "prog_mode.m"
  {
#line 586 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 586 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
#line 586 "prog_mode.m"
      {
#line 586 "prog_mode.m"
        {
#line 586 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_40_40;
#line 586 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 586 "prog_mode.m"
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
#line 586 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 588 "prog_mode.m"
          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 588 "prog_mode.m"
          else
#line 588 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
#line 588 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 588 "prog_mode.m"
            else
#line 588 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 586 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 586 "prog_mode.m"
            {
#line 8122 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 590 "prog_mode.m"
              {
#line 590 "prog_mode.m"
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_40_40, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
              }
#line 586 "prog_mode.m"
            }
#line 586 "prog_mode.m"
        }
#line 586 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 586 "prog_mode.m"
      }
#line 586 "prog_mode.m"
    else
#line 586 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 586 "prog_mode.m"
  }
#line 586 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 571 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 575 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 575 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 575 "prog_mode.m"
{
#line 575 "prog_mode.m"
  {
#line 575 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 575 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65);
#line 575 "prog_mode.m"
    {
#line 575 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
#line 575 "prog_mode.m"
      return;
    }
#line 575 "prog_mode.m"
  }
#line 575 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    {
#line 584 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66);
    }
#line 584 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 584 "prog_mode.m"
      {
#line 584 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
#line 584 "prog_mode.m"
        return;
      }
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 582 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 582 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 582 "prog_mode.m"
{
#line 582 "prog_mode.m"
  {
#line 582 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 582 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66);
#line 582 "prog_mode.m"
    {
#line 582 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
#line 582 "prog_mode.m"
      return;
    }
#line 582 "prog_mode.m"
  }
#line 582 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 578 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65)) == (MR_mktag((MR_Integer) 0))))
#line 578 "prog_mode.m"
      {
#line 578 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 578 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 577 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_76_76;
#line 577 "prog_mode.m"
        {
#line 577 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 579 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_75_75;
#line 579 "prog_mode.m"
        {
#line 579 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 578 "prog_mode.m"
      }
#line 578 "prog_mode.m"
    else
#line 581 "prog_mode.m"
      {
#line 581 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 581 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 582 "prog_mode.m"
        {
#line 582 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66, parse_tree__prog_mode__SubInsts_52, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
        }
#line 581 "prog_mode.m"
      }
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 571 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 571 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 571 "prog_mode.m"
{
#line 571 "prog_mode.m"
  {
#line 571 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 571 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
#line 571 "prog_mode.m"
      {
#line 571 "prog_mode.m"
        {
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_71;
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_60;
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_62;
#line 569 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_43;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_44;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_45;

#line 572 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_59)) == (MR_mktag((MR_Integer) 1)));
#line 572 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 572 "prog_mode.m"
            {
#line 572 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_59), (MR_Integer) 1);
#line 571 "prog_mode.m"
              {
#line 573 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 0)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 1)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 2)));
#line 573 "prog_mode.m"
                parse_tree__prog_mode___Detism_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 3)));
#line 8359 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 575 "prog_mode.m"
                {
#line 575 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_71, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65, parse_tree__prog_mode__Modes_62, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
                }
#line 571 "prog_mode.m"
              }
#line 572 "prog_mode.m"
            }
#line 571 "prog_mode.m"
        }
#line 571 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 571 "prog_mode.m"
      }
#line 571 "prog_mode.m"
    else
#line 571 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 571 "prog_mode.m"
  }
#line 571 "prog_mode.m"
}

#line 101 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
#line 101 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_2)
#line 101 "prog_mode.m"
{
#line 101 "prog_mode.m"
  {
#line 101 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 101 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = parse_tree__prog_mode__Inst_2;
#line 566 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 2))))
#line 571 "prog_mode.m"
      {
#line 571 "prog_mode.m"
        {
#line 571 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(&parse_tree__prog_mode__env);
        }
#line 571 "prog_mode.m"
      }
#line 566 "prog_mode.m"
    else
#line 566 "prog_mode.m"
      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 598 "prog_mode.m"
        {
#line 598 "prog_mode.m"
          {
#line 598 "prog_mode.m"
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
#line 598 "prog_mode.m"
        }
#line 566 "prog_mode.m"
      else
#line 566 "prog_mode.m"
        if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 586 "prog_mode.m"
          {
#line 586 "prog_mode.m"
            {
#line 586 "prog_mode.m"
              parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
            }
#line 586 "prog_mode.m"
          }
#line 566 "prog_mode.m"
        else
#line 566 "prog_mode.m"
          if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 595 "prog_mode.m"
            {
#line 595 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 596 "prog_mode.m"
              {
#line 596 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_28);
              }
#line 595 "prog_mode.m"
            }
#line 566 "prog_mode.m"
          else
#line 566 "prog_mode.m"
            if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 571 "prog_mode.m"
              {
#line 571 "prog_mode.m"
                {
#line 571 "prog_mode.m"
                  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
                }
#line 571 "prog_mode.m"
              }
#line 566 "prog_mode.m"
            else
#line 566 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 567 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 566 "prog_mode.m"
              else
#line 566 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 566 "prog_mode.m"
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 101 "prog_mode.m"
  }
#line 101 "prog_mode.m"
}

#line 436 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_4_p_0_1(
#line 436 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 436 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 436 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 436 "prog_mode.m"
{
#line 436 "prog_mode.m"
  {
#line 436 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 436 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 436 "prog_mode.m"
    {
#line 436 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 436 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 436 "prog_mode.m"
  }
#line 436 "prog_mode.m"
}

#line 95 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_4_p_0(
#line 95 "prog_mode.m"
  MR_Word parse_tree__prog_mode__VarSet_5,
#line 95 "prog_mode.m"
  MR_Word parse_tree__prog_mode__NewVarSet_6,
#line 95 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_7,
#line 95 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_8)
#line 95 "prog_mode.m"
{
#line 434 "prog_mode.m"
  {
#line 434 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 434 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 434 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Sub_10;
#line 434 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_11_11;
#line 435 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_9_9;

#line 435 "prog_mode.m"
    {
#line 435 "prog_mode.m"
      mercury__varset__merge_subst_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_5, parse_tree__prog_mode__NewVarSet_6, &parse_tree__prog_mode__V_9_9, &parse_tree__prog_mode__Sub_10);
    }
#line 436 "prog_mode.m"
    {
#line 436 "prog_mode.m"
      parse_tree__prog_mode__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_11_11, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 436 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_11_11, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_4_p_0_1));
#line 436 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 436 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_11_11, 3) = ((MR_Box) (parse_tree__prog_mode__Sub_10));
#line 436 "prog_mode.m"
    }
#line 8557 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 436 "prog_mode.m"
    {
#line 436 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_11_11, parse_tree__prog_mode__Modes0_7, parse_tree__prog_mode__Modes_8);
#line 436 "prog_mode.m"
      return;
    }
#line 434 "prog_mode.m"
  }
#line 95 "prog_mode.m"
}

#line 92 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(
#line 92 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 92 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_5,
#line 92 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_6)
#line 92 "prog_mode.m"
{
#line 420 "prog_mode.m"
  {
#line 420 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 418 "prog_mode.m"
    {
#line 418 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 420 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 419 "prog_mode.m"
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
#line 420 "prog_mode.m"
    else
#line 421 "prog_mode.m"
      {
#line 421 "prog_mode.m"
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
#line 421 "prog_mode.m"
        return;
      }
#line 420 "prog_mode.m"
  }
#line 92 "prog_mode.m"
}

#line 86 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(
#line 86 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 86 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_5,
#line 86 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_6)
#line 86 "prog_mode.m"
{
#line 289 "prog_mode.m"
  {
#line 289 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 287 "prog_mode.m"
    {
#line 287 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 289 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 288 "prog_mode.m"
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
#line 289 "prog_mode.m"
    else
#line 290 "prog_mode.m"
      {
#line 290 "prog_mode.m"
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
#line 290 "prog_mode.m"
        return;
      }
#line 289 "prog_mode.m"
  }
#line 86 "prog_mode.m"
}

#line 80 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(
#line 80 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Params_5,
#line 80 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_6,
#line 80 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_7,
#line 80 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_8)
#line 80 "prog_mode.m"
{
#line 265 "prog_mode.m"
  {
#line 265 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 265 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "prog_mode.m"
      *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
#line 265 "prog_mode.m"
    else
#line 268 "prog_mode.m"
      {
#line 268 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 269 "prog_mode.m"
        {
#line 269 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
        }
#line 270 "prog_mode.m"
        {
#line 270 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
#line 270 "prog_mode.m"
          return;
        }
#line 268 "prog_mode.m"
      }
#line 265 "prog_mode.m"
  }
#line 80 "prog_mode.m"
}

#line 72 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__insts_to_mode_3_p_0(
#line 72 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Initial_4,
#line 72 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Final_5,
#line 72 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 72 "prog_mode.m"
{
#line 225 "prog_mode.m"
  {
#line 225 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_7_7;
#line 223 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_8_8;

#line 223 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 223 "prog_mode.m"
      {
#line 223 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 223 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 223 "prog_mode.m"
          {
#line 223 "prog_mode.m"
            parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 223 "prog_mode.m"
            parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 223 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_7_7 == (MR_Integer) 0);
#line 223 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 223 "prog_mode.m"
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "prog_mode.m"
          }
#line 223 "prog_mode.m"
      }
#line 225 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 224 "prog_mode.m"
      {
#line 224 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
#line 224 "prog_mode.m"
        MR_Word parse_tree__prog_mode__QualifiedName_67;

#line 203 "prog_mode.m"
        {
#line 203 "prog_mode.m"
          parse_tree__prog_mode__MercuryBuiltin_66 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
        }
#line 204 "prog_mode.m"
        {
#line 204 "prog_mode.m"
          parse_tree__prog_mode__QualifiedName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_66));
#line 204 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 1) = ((MR_Box) ((MR_String) "out"));
#line 204 "prog_mode.m"
        }
#line 205 "prog_mode.m"
        {
#line 205 "prog_mode.m"
          MR_Word base;
#line 205 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 205 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_67));
#line 205 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
        }
#line 224 "prog_mode.m"
      }
#line 225 "prog_mode.m"
    else
#line 227 "prog_mode.m"
      {
#line 225 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_11_11;
#line 225 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_12_12;

#line 225 "prog_mode.m"
        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 225 "prog_mode.m"
          {
#line 225 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 225 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 225 "prog_mode.m"
              {
#line 225 "prog_mode.m"
                parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 225 "prog_mode.m"
                parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 225 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_11_11 == (MR_Integer) 1);
#line 225 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 225 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "prog_mode.m"
              }
#line 225 "prog_mode.m"
          }
#line 227 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 226 "prog_mode.m"
          {
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__QualifiedName_74;

#line 203 "prog_mode.m"
            {
#line 203 "prog_mode.m"
              parse_tree__prog_mode__MercuryBuiltin_73 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 204 "prog_mode.m"
            {
#line 204 "prog_mode.m"
              parse_tree__prog_mode__QualifiedName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_73));
#line 204 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 1) = ((MR_Box) ((MR_String) "uo"));
#line 204 "prog_mode.m"
            }
#line 205 "prog_mode.m"
            {
#line 205 "prog_mode.m"
              MR_Word base;
#line 205 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
              *parse_tree__prog_mode__Mode_6 = base;
#line 205 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_74));
#line 205 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
            }
#line 226 "prog_mode.m"
          }
#line 227 "prog_mode.m"
        else
#line 229 "prog_mode.m"
          {
#line 227 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_15_15;
#line 227 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_16_16;

#line 227 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 227 "prog_mode.m"
              {
#line 227 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 227 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 227 "prog_mode.m"
                  {
#line 227 "prog_mode.m"
                    parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 227 "prog_mode.m"
                    parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 227 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_15_15 == (MR_Integer) 2);
#line 227 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 227 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_mode.m"
                  }
#line 227 "prog_mode.m"
              }
#line 229 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 228 "prog_mode.m"
              {
#line 228 "prog_mode.m"
                MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
#line 228 "prog_mode.m"
                MR_Word parse_tree__prog_mode__QualifiedName_81;

#line 203 "prog_mode.m"
                {
#line 203 "prog_mode.m"
                  parse_tree__prog_mode__MercuryBuiltin_80 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                }
#line 204 "prog_mode.m"
                {
#line 204 "prog_mode.m"
                  parse_tree__prog_mode__QualifiedName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_80));
#line 204 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 1) = ((MR_Box) ((MR_String) "muo"));
#line 204 "prog_mode.m"
                }
#line 205 "prog_mode.m"
                {
#line 205 "prog_mode.m"
                  MR_Word base;
#line 205 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
                  *parse_tree__prog_mode__Mode_6 = base;
#line 205 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_81));
#line 205 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
                }
#line 228 "prog_mode.m"
              }
#line 229 "prog_mode.m"
            else
#line 231 "prog_mode.m"
              {
#line 229 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_19_19;
#line 229 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_20_20;
#line 229 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 229 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_22_22;

#line 229 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 229 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 229 "prog_mode.m"
                  {
#line 229 "prog_mode.m"
                    parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 229 "prog_mode.m"
                    parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 229 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_19_19 == (MR_Integer) 0);
#line 229 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 229 "prog_mode.m"
                      {
#line 229 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 229 "prog_mode.m"
                          {
#line 229 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 229 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 229 "prog_mode.m"
                              {
#line 229 "prog_mode.m"
                                parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 229 "prog_mode.m"
                                parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 229 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_21_21 == (MR_Integer) 0);
#line 229 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 229 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_mode.m"
                              }
#line 229 "prog_mode.m"
                          }
#line 229 "prog_mode.m"
                      }
#line 229 "prog_mode.m"
                  }
#line 231 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 230 "prog_mode.m"
                  {
#line 230 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
#line 230 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_88;

#line 203 "prog_mode.m"
                    {
#line 203 "prog_mode.m"
                      parse_tree__prog_mode__MercuryBuiltin_87 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                    }
#line 204 "prog_mode.m"
                    {
#line 204 "prog_mode.m"
                      parse_tree__prog_mode__QualifiedName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_87));
#line 204 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "in"));
#line 204 "prog_mode.m"
                    }
#line 205 "prog_mode.m"
                    {
#line 205 "prog_mode.m"
                      MR_Word base;
#line 205 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
                      *parse_tree__prog_mode__Mode_6 = base;
#line 205 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_88));
#line 205 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
                    }
#line 230 "prog_mode.m"
                  }
#line 231 "prog_mode.m"
                else
#line 233 "prog_mode.m"
                  {
#line 231 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_25_25;
#line 231 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_26_26;
#line 231 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27;
#line 231 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_28_28;

#line 231 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 231 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
                      {
#line 231 "prog_mode.m"
                        parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 231 "prog_mode.m"
                        parse_tree__prog_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 231 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_25_25 == (MR_Integer) 1);
#line 231 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
                          {
#line 231 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
                              {
#line 231 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 231 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
                                  {
#line 231 "prog_mode.m"
                                    parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 231 "prog_mode.m"
                                    parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 231 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_27_27 == (MR_Integer) 3);
#line 231 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
                                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "prog_mode.m"
                                  }
#line 231 "prog_mode.m"
                              }
#line 231 "prog_mode.m"
                          }
#line 231 "prog_mode.m"
                      }
#line 233 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 232 "prog_mode.m"
                      {
#line 232 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
#line 232 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__QualifiedName_95;

#line 203 "prog_mode.m"
                        {
#line 203 "prog_mode.m"
                          parse_tree__prog_mode__MercuryBuiltin_94 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                        }
#line 204 "prog_mode.m"
                        {
#line 204 "prog_mode.m"
                          parse_tree__prog_mode__QualifiedName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_94));
#line 204 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "di"));
#line 204 "prog_mode.m"
                        }
#line 205 "prog_mode.m"
                        {
#line 205 "prog_mode.m"
                          MR_Word base;
#line 205 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
                          *parse_tree__prog_mode__Mode_6 = base;
#line 205 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_95));
#line 205 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
                        }
#line 232 "prog_mode.m"
                      }
#line 233 "prog_mode.m"
                    else
#line 236 "prog_mode.m"
                      {
#line 233 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_31_31;
#line 233 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 233 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_33_33;
#line 233 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_34_34;

#line 233 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 233 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 233 "prog_mode.m"
                          {
#line 233 "prog_mode.m"
                            parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 233 "prog_mode.m"
                            parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 233 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_31_31 == (MR_Integer) 2);
#line 233 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 233 "prog_mode.m"
                              {
#line 233 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 233 "prog_mode.m"
                                  {
#line 234 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 234 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
                                      {
#line 234 "prog_mode.m"
                                        parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 234 "prog_mode.m"
                                        parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 234 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_33_33 == (MR_Integer) 4);
#line 233 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
                                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_mode.m"
                                      }
#line 233 "prog_mode.m"
                                  }
#line 233 "prog_mode.m"
                              }
#line 233 "prog_mode.m"
                          }
#line 236 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 235 "prog_mode.m"
                          {
#line 235 "prog_mode.m"
                            {
#line 235 "prog_mode.m"
                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 235 "prog_mode.m"
                              return;
                            }
#line 235 "prog_mode.m"
                          }
#line 236 "prog_mode.m"
                        else
#line 238 "prog_mode.m"
                          {
#line 236 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_37_37;
#line 236 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_38_38;
#line 236 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_39_39;
#line 236 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_40_40;

#line 236 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 236 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                              {
#line 236 "prog_mode.m"
                                parse_tree__prog_mode__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 236 "prog_mode.m"
                                parse_tree__prog_mode__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 236 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_37_37 == (MR_Integer) 1);
#line 236 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                                  {
#line 236 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                                      {
#line 236 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 236 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                                          {
#line 236 "prog_mode.m"
                                            parse_tree__prog_mode__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 236 "prog_mode.m"
                                            parse_tree__prog_mode__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 236 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_39_39 == (MR_Integer) 1);
#line 236 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_mode.m"
                                          }
#line 236 "prog_mode.m"
                                      }
#line 236 "prog_mode.m"
                                  }
#line 236 "prog_mode.m"
                              }
#line 238 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 237 "prog_mode.m"
                              {
#line 237 "prog_mode.m"
                                {
#line 237 "prog_mode.m"
                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 237 "prog_mode.m"
                                  return;
                                }
#line 237 "prog_mode.m"
                              }
#line 238 "prog_mode.m"
                            else
#line 241 "prog_mode.m"
                              {
#line 238 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_43_43;
#line 238 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_44_44;
#line 238 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_45_45;
#line 238 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_46_46;

#line 238 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 238 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                                  {
#line 238 "prog_mode.m"
                                    parse_tree__prog_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 238 "prog_mode.m"
                                    parse_tree__prog_mode__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 238 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_43_43 == (MR_Integer) 2);
#line 238 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                                      {
#line 238 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                                          {
#line 239 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 239 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
                                              {
#line 239 "prog_mode.m"
                                                parse_tree__prog_mode__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 239 "prog_mode.m"
                                                parse_tree__prog_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 239 "prog_mode.m"
                                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_45_45 == (MR_Integer) 2);
#line 238 "prog_mode.m"
                                                if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
                                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_mode.m"
                                              }
#line 238 "prog_mode.m"
                                          }
#line 238 "prog_mode.m"
                                      }
#line 238 "prog_mode.m"
                                  }
#line 241 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                                  {
#line 240 "prog_mode.m"
                                    {
#line 240 "prog_mode.m"
                                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 240 "prog_mode.m"
                                      return;
                                    }
#line 240 "prog_mode.m"
                                  }
#line 241 "prog_mode.m"
                                else
#line 243 "prog_mode.m"
                                  {
#line 241 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                                      {
#line 242 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_50_50;

#line 242 "prog_mode.m"
                                        {
#line 242 "prog_mode.m"
                                          parse_tree__prog_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 242 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_mode.m"
                                        }
#line 242 "prog_mode.m"
                                        {
#line 242 "prog_mode.m"
                                          parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "out", parse_tree__prog_mode__V_50_50, parse_tree__prog_mode__Mode_6);
#line 242 "prog_mode.m"
                                          return;
                                        }
#line 242 "prog_mode.m"
                                      }
#line 243 "prog_mode.m"
                                    else
#line 245 "prog_mode.m"
                                      {
#line 243 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_52_52;
#line 243 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_53_53;

#line 243 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 243 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                          {
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_52_52 == (MR_Integer) 3);
#line 243 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_mode.m"
                                          }
#line 245 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                                          {
#line 244 "prog_mode.m"
                                            MR_Word parse_tree__prog_mode__V_55_55;

#line 244 "prog_mode.m"
                                            {
#line 244 "prog_mode.m"
                                              parse_tree__prog_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 244 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_mode.m"
                                            }
#line 244 "prog_mode.m"
                                            {
#line 244 "prog_mode.m"
                                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__V_55_55, parse_tree__prog_mode__Mode_6);
#line 244 "prog_mode.m"
                                              return;
                                            }
#line 244 "prog_mode.m"
                                          }
#line 245 "prog_mode.m"
                                        else
#line 247 "prog_mode.m"
                                          {
#line 245 "prog_mode.m"
                                            {
#line 245 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                                            }
#line 247 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 246 "prog_mode.m"
                                              {
#line 246 "prog_mode.m"
                                                MR_Word parse_tree__prog_mode__V_58_58;

#line 246 "prog_mode.m"
                                                {
#line 246 "prog_mode.m"
                                                  parse_tree__prog_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 246 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_mode.m"
                                                }
#line 246 "prog_mode.m"
                                                {
#line 246 "prog_mode.m"
                                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__V_58_58, parse_tree__prog_mode__Mode_6);
#line 246 "prog_mode.m"
                                                  return;
                                                }
#line 246 "prog_mode.m"
                                              }
#line 247 "prog_mode.m"
                                            else
#line 248 "prog_mode.m"
                                              {
#line 248 "prog_mode.m"
                                                MR_Word base;
#line 248 "prog_mode.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_mode.m"
                                                *parse_tree__prog_mode__Mode_6 = base;
#line 248 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 248 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 248 "prog_mode.m"
                                              }
#line 247 "prog_mode.m"
                                          }
#line 245 "prog_mode.m"
                                      }
#line 243 "prog_mode.m"
                                  }
#line 241 "prog_mode.m"
                              }
#line 238 "prog_mode.m"
                          }
#line 236 "prog_mode.m"
                      }
#line 233 "prog_mode.m"
                  }
#line 231 "prog_mode.m"
              }
#line 229 "prog_mode.m"
          }
#line 227 "prog_mode.m"
      }
#line 225 "prog_mode.m"
  }
#line 72 "prog_mode.m"
}

#line 69 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(
#line 69 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 69 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 69 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 69 "prog_mode.m"
{
#line 209 "prog_mode.m"
  {
#line 209 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 209 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "prog_mode.m"
      if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "prog_mode.m"
      else
#line 209 "prog_mode.m"
        {
#line 210 "prog_mode.m"
          {
#line 210 "prog_mode.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 210 "prog_mode.m"
            return;
          }
#line 209 "prog_mode.m"
        }
#line 209 "prog_mode.m"
    else
#line 209 "prog_mode.m"
      {
#line 209 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 209 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "prog_mode.m"
          {
#line 212 "prog_mode.m"
            {
#line 212 "prog_mode.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 212 "prog_mode.m"
              return;
            }
#line 211 "prog_mode.m"
          }
#line 209 "prog_mode.m"
        else
#line 215 "prog_mode.m"
          {
#line 215 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Final_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Finals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Mode_20;
#line 215 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_21;

#line 216 "prog_mode.m"
            {
#line 216 "prog_mode.m"
              parse_tree__prog_mode__insts_to_mode_3_p_0(parse_tree__prog_mode__V_23_23, parse_tree__prog_mode__Final_18, &parse_tree__prog_mode__Mode_20);
            }
#line 217 "prog_mode.m"
            {
#line 217 "prog_mode.m"
              parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(parse_tree__prog_mode__V_22_22, parse_tree__prog_mode__Finals_19, &parse_tree__prog_mode__Modes_21);
            }
#line 215 "prog_mode.m"
            {
#line 215 "prog_mode.m"
              MR_Word base;
#line 215 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
              *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 215 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_20));
#line 215 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_21));
#line 215 "prog_mode.m"
            }
#line 215 "prog_mode.m"
          }
#line 209 "prog_mode.m"
      }
#line 209 "prog_mode.m"
  }
#line 69 "prog_mode.m"
}

#line 61 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(
#line 61 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 61 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Params_6,
#line 61 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_7,
#line 61 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_8)
#line 61 "prog_mode.m"
{
#line 255 "prog_mode.m"
  {
#line 255 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 255 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "prog_mode.m"
      *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
#line 255 "prog_mode.m"
    else
#line 258 "prog_mode.m"
      {
#line 258 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 259 "prog_mode.m"
        {
#line 259 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
        }
#line 279 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 279 "prog_mode.m"
          {
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_17;
#line 279 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_18;

#line 280 "prog_mode.m"
            {
#line 280 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_15, &parse_tree__prog_mode__I_17);
            }
#line 281 "prog_mode.m"
            {
#line 281 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_16, &parse_tree__prog_mode__F_18);
            }
#line 279 "prog_mode.m"
            {
#line 279 "prog_mode.m"
              MR_Word base;
#line 279 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 279 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_17));
#line 279 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_18));
#line 279 "prog_mode.m"
            }
#line 279 "prog_mode.m"
          }
#line 279 "prog_mode.m"
        else
#line 283 "prog_mode.m"
          {
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 283 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_22;

#line 284 "prog_mode.m"
            {
#line 284 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_21, &parse_tree__prog_mode__Args_22);
            }
#line 283 "prog_mode.m"
            {
#line 283 "prog_mode.m"
              MR_Word base;
#line 283 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 283 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 283 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_22));
#line 283 "prog_mode.m"
            }
#line 283 "prog_mode.m"
          }
#line 258 "prog_mode.m"
      }
#line 255 "prog_mode.m"
  }
#line 61 "prog_mode.m"
}

#line 53 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__make_std_mode_2_f_0(
#line 53 "prog_mode.m"
  MR_String parse_tree__prog_mode__Name_4,
#line 53 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_5)
#line 53 "prog_mode.m"
{
#line 202 "prog_mode.m"
  {
#line 202 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Mode_6;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 205 "prog_mode.m"
    }
#line 202 "prog_mode.m"
    return parse_tree__prog_mode__Mode_6;
#line 202 "prog_mode.m"
  }
#line 53 "prog_mode.m"
}

#line 52 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__make_std_mode_3_p_0(
#line 52 "prog_mode.m"
  MR_String parse_tree__prog_mode__Name_4,
#line 52 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_5,
#line 52 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 52 "prog_mode.m"
{
#line 202 "prog_mode.m"
  {
#line 202 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_9;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_10;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_9 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_9));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_10));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 205 "prog_mode.m"
    }
#line 202 "prog_mode.m"
  }
#line 52 "prog_mode.m"
}

#line 50 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
#line 50 "prog_mode.m"
{
#line 198 "prog_mode.m"
  {
#line 198 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 198 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[2]);
#line 198 "prog_mode.m"
  }
#line 50 "prog_mode.m"
}

#line 49 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
#line 49 "prog_mode.m"
{
#line 197 "prog_mode.m"
  {
#line 197 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 197 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "prog_mode.m"
  }
#line 49 "prog_mode.m"
}

#line 48 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
#line 48 "prog_mode.m"
{
#line 196 "prog_mode.m"
  {
#line 196 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 196 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 196 "prog_mode.m"
  }
#line 48 "prog_mode.m"
}

#line 46 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
#line 46 "prog_mode.m"
{
#line 194 "prog_mode.m"
  {
#line 194 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[3])));
#line 205 "prog_mode.m"
    }
#line 194 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 194 "prog_mode.m"
  }
#line 46 "prog_mode.m"
}

#line 45 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
#line 45 "prog_mode.m"
{
#line 193 "prog_mode.m"
  {
#line 193 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[3])));
#line 205 "prog_mode.m"
    }
#line 193 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 193 "prog_mode.m"
  }
#line 45 "prog_mode.m"
}

#line 44 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
#line 44 "prog_mode.m"
{
#line 192 "prog_mode.m"
  {
#line 192 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 192 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 192 "prog_mode.m"
  }
#line 44 "prog_mode.m"
}

#line 43 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__unused_mode_1_p_0(
#line 43 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 43 "prog_mode.m"
{
#line 192 "prog_mode.m"
  {
#line 192 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 192 "prog_mode.m"
  }
#line 43 "prog_mode.m"
}

#line 42 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
#line 42 "prog_mode.m"
{
#line 191 "prog_mode.m"
  {
#line 191 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 191 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 191 "prog_mode.m"
  }
#line 42 "prog_mode.m"
}

#line 41 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__muo_mode_1_p_0(
#line 41 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 41 "prog_mode.m"
{
#line 191 "prog_mode.m"
  {
#line 191 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 191 "prog_mode.m"
  }
#line 41 "prog_mode.m"
}

#line 40 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
#line 40 "prog_mode.m"
{
#line 190 "prog_mode.m"
  {
#line 190 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 190 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 190 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 190 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 190 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 190 "prog_mode.m"
  }
#line 40 "prog_mode.m"
}

#line 39 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mdi_mode_1_p_0(
#line 39 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 39 "prog_mode.m"
{
#line 190 "prog_mode.m"
  {
#line 190 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 190 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 190 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 190 "prog_mode.m"
  }
#line 39 "prog_mode.m"
}

#line 38 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
#line 38 "prog_mode.m"
{
#line 189 "prog_mode.m"
  {
#line 189 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 189 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 189 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 189 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 189 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 189 "prog_mode.m"
  }
#line 38 "prog_mode.m"
}

#line 37 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__uo_mode_1_p_0(
#line 37 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 37 "prog_mode.m"
{
#line 189 "prog_mode.m"
  {
#line 189 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 189 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 189 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 189 "prog_mode.m"
  }
#line 37 "prog_mode.m"
}

#line 36 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
#line 36 "prog_mode.m"
{
#line 188 "prog_mode.m"
  {
#line 188 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 188 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 188 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 188 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 188 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 188 "prog_mode.m"
  }
#line 36 "prog_mode.m"
}

#line 35 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__di_mode_1_p_0(
#line 35 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 35 "prog_mode.m"
{
#line 188 "prog_mode.m"
  {
#line 188 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 188 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 188 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 188 "prog_mode.m"
  }
#line 35 "prog_mode.m"
}

#line 34 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_1_f_0(
#line 34 "prog_mode.m"
  MR_Word parse_tree__prog_mode__I_3)
#line 34 "prog_mode.m"
{
#line 187 "prog_mode.m"
  {
#line 187 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 187 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 187 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 187 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 187 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 187 "prog_mode.m"
    {
#line 187 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 187 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "prog_mode.m"
    }
#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 205 "prog_mode.m"
    }
#line 187 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 187 "prog_mode.m"
  }
#line 34 "prog_mode.m"
}

#line 33 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
#line 33 "prog_mode.m"
{
#line 186 "prog_mode.m"
  {
#line 186 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 186 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 186 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 186 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 186 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 186 "prog_mode.m"
  }
#line 33 "prog_mode.m"
}

#line 32 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__out_mode_1_p_0(
#line 32 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 32 "prog_mode.m"
{
#line 186 "prog_mode.m"
  {
#line 186 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 186 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 186 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 186 "prog_mode.m"
  }
#line 32 "prog_mode.m"
}

#line 31 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_1_f_0(
#line 31 "prog_mode.m"
  MR_Word parse_tree__prog_mode__I_3)
#line 31 "prog_mode.m"
{
#line 185 "prog_mode.m"
  {
#line 185 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 185 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 185 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 185 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 185 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 185 "prog_mode.m"
    {
#line 185 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 185 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_mode.m"
    }
#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 205 "prog_mode.m"
    }
#line 185 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 185 "prog_mode.m"
  }
#line 31 "prog_mode.m"
}

#line 30 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
#line 30 "prog_mode.m"
{
#line 184 "prog_mode.m"
  {
#line 184 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 184 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 184 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 184 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 184 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 184 "prog_mode.m"
  }
#line 30 "prog_mode.m"
}

#line 29 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__in_mode_1_p_0(
#line 29 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 29 "prog_mode.m"
{
#line 184 "prog_mode.m"
  {
#line 184 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 184 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 184 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 203 "prog_mode.m"
    {
#line 203 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 204 "prog_mode.m"
    {
#line 204 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 204 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 204 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    {
#line 205 "prog_mode.m"
      MR_Word base;
#line 205 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 205 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_mode.m"
    }
#line 184 "prog_mode.m"
  }
#line 29 "prog_mode.m"
}

void mercury__parse_tree__prog_mode__init(void)
{
}

void mercury__parse_tree__prog_mode__init_type_tables(void)
{
}

void mercury__parse_tree__prog_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_mode. */
