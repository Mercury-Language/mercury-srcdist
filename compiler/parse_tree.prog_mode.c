/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 618 "prog_mode.m"
struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
#line 618 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
#line 622 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 622 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 622 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
#line 623 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
#line 618 "prog_mode.m"
};

#line 107 "prog_mode.m"
struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
#line 107 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
#line 572 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 577 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 577 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
#line 577 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
#line 581 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12;
#line 588 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13;
#line 604 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
#line 604 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37;
#line 605 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37;
#line 592 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
#line 592 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41;
#line 592 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24;
#line 592 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26;
#line 592 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27;
#line 596 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24;
#line 598 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27;
#line 577 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
#line 577 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65;
#line 577 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66;
#line 581 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65;
#line 588 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66;
#line 107 "prog_mode.m"
};


#line 199 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 202 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 205 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 208 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1029 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0(
#line 1029 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1029 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1029 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48);

#line 911 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0_1(
#line 911 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 911 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 911 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 908 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0(
#line 908 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 908 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 908 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42);

#line 522 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__522__1_2_f_0(
#line 522 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 522 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41);

#line 507 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0_1(
#line 507 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 507 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 507 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0(
#line 504 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 504 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_44,
#line 504 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_45);

#line 1065 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1065 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1060 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1060 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1029 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1029 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1012 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1012 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1012 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1012 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31);

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1006 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1006 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1006 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1006 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 993 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 993 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 993 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 993 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11);

#line 982 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 982 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 976 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 976 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 972 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 972 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 972 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 972 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 961 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 961 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 961 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 956 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 956 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6);

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 953 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 948 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 948 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 948 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 948 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6);

#line 908 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 908 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 908 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 908 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 943 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 943 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 943 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 943 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 876 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 876 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 876 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 876 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 730 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 730 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 844 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 844 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 844 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4);

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 800 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 800 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 800 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4);

#line 797 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 797 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 797 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 791 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 791 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 791 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4);

#line 789 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 789 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 789 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 789 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 785 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 785 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 785 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4);

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 732 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 732 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 732 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4);

#line 707 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 707 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 707 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 707 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 623 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 623 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 618 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 618 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2);

#line 549 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 549 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 549 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 549 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 543 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 543 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 543 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 543 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 473 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 473 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 473 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 473 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 522 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 522 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 522 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 504 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 538 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 538 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 538 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 538 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 486 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 486 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 486 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 486 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 458 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 458 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 458 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 458 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 454 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 454 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 454 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 454 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 443 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 443 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 443 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 443 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6);

#line 429 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 429 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 411 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 411 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 411 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 411 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 400 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 400 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 400 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 400 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 381 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 381 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 381 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 381 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 304 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 304 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 979 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 979 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 976 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 976 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 872 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 872 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 730 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 730 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 581 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 581 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 605 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 605 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 596 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 596 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 581 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 581 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 441 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 441 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 441 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 441 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[11][6];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[1]))),
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
    ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
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
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
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



#line 1253 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1261 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1270 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1279 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1010 "prog_mode.m"
{
#line 1010 "prog_mode.m"
  {
#line 1010 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1010 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1010 "prog_mode.m"
    {
#line 1010 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1010 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1010 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
      }
#line 1010 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
  }
#line 1010 "prog_mode.m"
}

#line 1029 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0(
#line 1029 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1029 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1029 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48)
#line 1029 "prog_mode.m"
{
#line 1029 "prog_mode.m"
  {
#line 1029 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1029 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 1)));
#line 1030 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 0)));
#line 1010 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_HeadVar__3_48;

#line 1010 "prog_mode.m"
    {
#line 1010 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__Insts_51, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_47)), &parse_tree__prog_mode__conv1_HeadVar__3_48);
    }
#line 1010 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_48 = ((MR_Word) parse_tree__prog_mode__conv1_HeadVar__3_48);
#line 1010 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
      }
#line 1029 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1029 "prog_mode.m"
  }
#line 1029 "prog_mode.m"
}

#line 911 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0_1(
#line 911 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 911 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 911 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 911 "prog_mode.m"
{
#line 911 "prog_mode.m"
  {
#line 911 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 911 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 911 "prog_mode.m"
    {
#line 911 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 911 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 911 "prog_mode.m"
  }
#line 911 "prog_mode.m"
}

#line 908 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0(
#line 908 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 908 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 908 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42)
#line 908 "prog_mode.m"
{
#line 908 "prog_mode.m"
  {
#line 908 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_43_43;
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 0)));
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 1)));
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_58;

#line 911 "prog_mode.m"
    {
#line 911 "prog_mode.m"
      parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 911 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 911 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0_1));
#line 911 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 911 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 911 "prog_mode.m"
    }
#line 1445 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 911 "prog_mode.m"
    {
#line 911 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__Is0_57, &parse_tree__prog_mode__Is_58);
    }
#line 909 "prog_mode.m"
    {
#line 909 "prog_mode.m"
      MR_Word base;
#line 909 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 909 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_42 = base;
#line 909 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_56));
#line 909 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_58));
#line 909 "prog_mode.m"
    }
#line 908 "prog_mode.m"
  }
#line 908 "prog_mode.m"
}

#line 522 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__522__1_2_f_0(
#line 522 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 522 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41)
#line 522 "prog_mode.m"
{
#line 522 "prog_mode.m"
  {
#line 522 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 522 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__3_42;
#line 522 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Var_33;
#line 523 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeInfo_88_88 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 523 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_Var_33;

#line 523 "prog_mode.m"
    {
#line 523 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_41)), &parse_tree__prog_mode__conv0_Var_33);
    }
#line 523 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 523 "prog_mode.m"
      {
#line 523 "prog_mode.m"
        parse_tree__prog_mode__Var_33 = ((MR_Word) parse_tree__prog_mode__conv0_Var_33);
#line 523 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 523 "prog_mode.m"
      }
#line 522 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 524 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_42 = parse_tree__prog_mode__Var_33;
#line 522 "prog_mode.m"
    else
#line 526 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_42 = parse_tree__prog_mode__HeadVar__2_41;
#line 522 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__3_42;
#line 522 "prog_mode.m"
  }
#line 522 "prog_mode.m"
}

#line 507 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0_1(
#line 507 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 507 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 507 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 507 "prog_mode.m"
{
#line 507 "prog_mode.m"
  {
#line 507 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 507 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 507 "prog_mode.m"
    {
#line 507 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 507 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 507 "prog_mode.m"
  }
#line 507 "prog_mode.m"
}

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0(
#line 504 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 504 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_44,
#line 504 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_45)
#line 504 "prog_mode.m"
{
#line 504 "prog_mode.m"
  {
#line 504 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_84_84;
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_46_46;
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_44, (MR_Integer) 0)));
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_44, (MR_Integer) 1)));
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_74;

#line 507 "prog_mode.m"
    {
#line 507 "prog_mode.m"
      parse_tree__prog_mode__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 507 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 507 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0_1));
#line 507 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 507 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 507 "prog_mode.m"
    }
#line 1593 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 507 "prog_mode.m"
    {
#line 507 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_84_84, parse_tree__prog_mode__TypeCtorInfo_84_84, parse_tree__prog_mode__V_46_46, parse_tree__prog_mode__Is0_73, &parse_tree__prog_mode__Is_74);
    }
#line 505 "prog_mode.m"
    {
#line 505 "prog_mode.m"
      MR_Word base;
#line 505 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_45 = base;
#line 505 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_72));
#line 505 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_74));
#line 505 "prog_mode.m"
    }
#line 504 "prog_mode.m"
  }
#line 504 "prog_mode.m"
}

#line 1065 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1065 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1065 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1065 "prog_mode.m"
{
#line 1073 "prog_mode.m"
  {
#line 1073 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1073 "prog_mode.m"
    MR_Word parse_tree__prog_mode__InstVarInst_8;
#line 1069 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_8;

#line 1069 "prog_mode.m"
    {
#line 1069 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), &parse_tree__prog_mode__conv0_InstVarInst_8);
    }
#line 1069 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1069 "prog_mode.m"
      {
#line 1069 "prog_mode.m"
        parse_tree__prog_mode__InstVarInst_8 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_8);
#line 1069 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1069 "prog_mode.m"
      }
#line 1073 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
      {
#line 1072 "prog_mode.m"
        {
#line 1072 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_8, parse_tree__prog_mode__SubInst_5);
        }
#line 1072 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
          {
#line 1072 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1072 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1072 "prog_mode.m"
          }
#line 1072 "prog_mode.m"
      }
#line 1073 "prog_mode.m"
    else
#line 1074 "prog_mode.m"
      {
#line 1074 "prog_mode.m"
        {
#line 1074 "prog_mode.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), ((MR_Box) (parse_tree__prog_mode__SubInst_5)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
        }
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1074 "prog_mode.m"
      }
#line 1073 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1073 "prog_mode.m"
  }
#line 1065 "prog_mode.m"
}

#line 1060 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1060 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1060 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1060 "prog_mode.m"
{
#line 1060 "prog_mode.m"
  {
#line 1060 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1060 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1060 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10;

#line 1060 "prog_mode.m"
    {
#line 1060 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10);
    }
#line 1060 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1060 "prog_mode.m"
      {
#line 1060 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10));
#line 1060 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1060 "prog_mode.m"
      }
#line 1060 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1060 "prog_mode.m"
  }
#line 1060 "prog_mode.m"
}

#line 1029 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1029 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1029 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1029 "prog_mode.m"
{
#line 1029 "prog_mode.m"
  {
#line 1029 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1029 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1029 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_48;

#line 1029 "prog_mode.m"
    {
#line 1029 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1029__1_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv2_HeadVar__3_48);
    }
#line 1029 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1029 "prog_mode.m"
      {
#line 1029 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_48));
#line 1029 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1029 "prog_mode.m"
      }
#line 1029 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1029 "prog_mode.m"
  }
#line 1029 "prog_mode.m"
}

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1010 "prog_mode.m"
{
#line 1010 "prog_mode.m"
  {
#line 1010 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1010 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1010 "prog_mode.m"
    {
#line 1010 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1010 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1010 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
      }
#line 1010 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
  }
#line 1010 "prog_mode.m"
}

#line 1012 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1012 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1012 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1012 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31)
#line 1012 "prog_mode.m"
{
#line 1017 "prog_mode.m"
  while (MR_TRUE)
#line 1017 "prog_mode.m"
    {
#line 1017 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 1017 "prog_mode.m"
      {
#line 1017 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 1017 "prog_mode.m"
        if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "prog_mode.m"
          {
#line 1017 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1017 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1017 "prog_mode.m"
          }
#line 1017 "prog_mode.m"
        else
#line 1017 "prog_mode.m"
          if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1019 "prog_mode.m"
            {
#line 1019 "prog_mode.m"
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1019 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1019 "prog_mode.m"
            }
#line 1017 "prog_mode.m"
          else
#line 1017 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1038 "prog_mode.m"
              {
#line 1038 "prog_mode.m"
                MR_Word parse_tree__prog_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1037 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)));

#line 1041 "prog_mode.m"
                if ((parse_tree__prog_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "prog_mode.m"
                  {
#line 1040 "prog_mode.m"
                    *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1040 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1040 "prog_mode.m"
                  }
#line 1041 "prog_mode.m"
                else
#line 1042 "prog_mode.m"
                  {
#line 1042 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Modes_20;
#line 1042 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_40_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_17), (MR_Integer) 1);
#line 1042 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 0)));
#line 1042 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_21_21;
#line 1042 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_22_22;

#line 1042 "prog_mode.m"
                    parse_tree__prog_mode__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 1)));
#line 1042 "prog_mode.m"
                    parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 2)));
#line 1042 "prog_mode.m"
                    parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 3)));
#line 1043 "prog_mode.m"
                    {
#line 1043 "prog_mode.m"
                      return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_20, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                    }
#line 1042 "prog_mode.m"
                  }
#line 1038 "prog_mode.m"
              }
#line 1017 "prog_mode.m"
            else
#line 1017 "prog_mode.m"
              if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 1018 "prog_mode.m"
                {
#line 1018 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1018 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
                }
#line 1017 "prog_mode.m"
              else
#line 1017 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1056 "prog_mode.m"
                  {
#line 1056 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ArgInsts_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1056 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1010 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31;

#line 1010 "prog_mode.m"
                    {
#line 1010 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__ArgInsts_54, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
                    }
#line 1010 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
                      {
#line 1010 "prog_mode.m"
                        *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
#line 1010 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
                      }
#line 1056 "prog_mode.m"
                  }
#line 1017 "prog_mode.m"
                else
#line 1017 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1022 "prog_mode.m"
                    {
#line 1022 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1022 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 3)));
#line 1022 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1025 "prog_mode.m"
                      if ((parse_tree__prog_mode__InstResults_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1024 "prog_mode.m"
                        {
#line 1024 "prog_mode.m"
                          *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1024 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1024 "prog_mode.m"
                        }
#line 1025 "prog_mode.m"
                      else
#line 1028 "prog_mode.m"
                        {
#line 1029 "prog_mode.m"
                          MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31;

#line 1029 "prog_mode.m"
                          {
#line 1029 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
                          }
#line 1029 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1029 "prog_mode.m"
                            {
#line 1029 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
#line 1029 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1029 "prog_mode.m"
                            }
#line 1028 "prog_mode.m"
                        }
#line 1022 "prog_mode.m"
                    }
#line 1017 "prog_mode.m"
                  else
#line 1017 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1059 "prog_mode.m"
                      {
#line 1059 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1059 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1059 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 1059 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;
#line 1060 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33;

#line 1060 "prog_mode.m"
                        {
#line 1060 "prog_mode.m"
                          parse_tree__prog_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
#line 1060 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3));
#line 1060 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1060 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
#line 1060 "prog_mode.m"
                        }
#line 1060 "prog_mode.m"
                        {
#line 1060 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__set__fold_4_p_3((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__V_32_32, parse_tree__prog_mode__InstVars_28, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
                        }
#line 1060 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1060 "prog_mode.m"
                          {
#line 1060 "prog_mode.m"
                            parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33 = ((MR_Word) parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
#line 1060 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1060 "prog_mode.m"
                          }
#line 1059 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1062 "prog_mode.m"
                          {
#line 1062 "prog_mode.m"
                            /* direct tailcall eliminated */
#line 1062 "prog_mode.m"
                            {
#line 1062 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__Inst__tmp_copy_4 = parse_tree__prog_mode__SubInst_29;
#line 1062 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;

#line 1062 "prog_mode.m"
                              parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30;
#line 1062 "prog_mode.m"
                              parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst__tmp_copy_4;
#line 1062 "prog_mode.m"
                            }
#line 1062 "prog_mode.m"
                            continue;
#line 1062 "prog_mode.m"
                          }
#line 1059 "prog_mode.m"
                      }
#line 1017 "prog_mode.m"
                    else
#line 1017 "prog_mode.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1049 "prog_mode.m"
                        {
#line 1049 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1052 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__ArgInsts_26;
#line 1050 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_25_25;

#line 1050 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_24)) == (MR_mktag((MR_Integer) 0)));
#line 1050 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1050 "prog_mode.m"
                            {
#line 1050 "prog_mode.m"
                              parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 0)));
#line 1050 "prog_mode.m"
                              parse_tree__prog_mode__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 1)));
#line 1051 "prog_mode.m"
                              {
#line 1051 "prog_mode.m"
                                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_26, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                              }
#line 1050 "prog_mode.m"
                            }
#line 1050 "prog_mode.m"
                          else
#line 1052 "prog_mode.m"
                            {
#line 1052 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1052 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1052 "prog_mode.m"
                            }
#line 1049 "prog_mode.m"
                        }
#line 1017 "prog_mode.m"
                      else
#line 1017 "prog_mode.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1038 "prog_mode.m"
                          {
#line 1038 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__HOInstInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1036 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1041 "prog_mode.m"
                            if ((parse_tree__prog_mode__HOInstInfo_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "prog_mode.m"
                              {
#line 1040 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1040 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1040 "prog_mode.m"
                              }
#line 1041 "prog_mode.m"
                            else
#line 1042 "prog_mode.m"
                              {
#line 1042 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__Modes_66;
#line 1042 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_69_69 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_75), (MR_Integer) 1);
#line 1042 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 0)));
#line 1042 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_63_63;
#line 1042 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_64_64;

#line 1042 "prog_mode.m"
                                parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 1)));
#line 1042 "prog_mode.m"
                                parse_tree__prog_mode__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 2)));
#line 1042 "prog_mode.m"
                                parse_tree__prog_mode__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 3)));
#line 1043 "prog_mode.m"
                                {
#line 1043 "prog_mode.m"
                                  return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                                }
#line 1042 "prog_mode.m"
                              }
#line 1038 "prog_mode.m"
                          }
#line 1017 "prog_mode.m"
                        else
#line 1046 "prog_mode.m"
                          {
#line 1047 "prog_mode.m"
                            {
#line 1047 "prog_mode.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_var_constraints_are_consistent_in_inst\'/3", (MR_String) "unconstrained inst_var");
                            }
#line 1046 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1046 "prog_mode.m"
                          }
#line 1017 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 1017 "prog_mode.m"
      }
#line 1017 "prog_mode.m"
      break;
#line 1017 "prog_mode.m"
    }
#line 1012 "prog_mode.m"
}

#line 1010 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1010 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1010 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1010 "prog_mode.m"
{
#line 1010 "prog_mode.m"
  {
#line 1010 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1010 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1010 "prog_mode.m"
    {
#line 1010 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1010 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1010 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
      }
#line 1010 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
  }
#line 1010 "prog_mode.m"
}

#line 1006 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1006 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1006 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1006 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1006 "prog_mode.m"
{
#line 1009 "prog_mode.m"
  {
#line 1009 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1010 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1010 "prog_mode.m"
    {
#line 1010 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1010 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
      {
#line 1010 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1010 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1010 "prog_mode.m"
      }
#line 1009 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1009 "prog_mode.m"
  }
#line 1006 "prog_mode.m"
}

#line 993 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 993 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 993 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 993 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11)
#line 993 "prog_mode.m"
{
#line 998 "prog_mode.m"
  {
#line 998 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 998 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_4)) == (MR_mktag((MR_Integer) 0))))
#line 998 "prog_mode.m"
      {
#line 998 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InitialInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));
#line 998 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 998 "prog_mode.m"
        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13;

#line 999 "prog_mode.m"
        {
#line 999 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_6, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13);
        }
#line 998 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1000 "prog_mode.m"
          {
#line 1000 "prog_mode.m"
            return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_7, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
          }
#line 998 "prog_mode.m"
      }
#line 998 "prog_mode.m"
    else
#line 1002 "prog_mode.m"
      {
#line 1002 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1002 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));

#line 1003 "prog_mode.m"
        {
#line 1003 "prog_mode.m"
          return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
        }
#line 1002 "prog_mode.m"
      }
#line 998 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 998 "prog_mode.m"
  }
#line 993 "prog_mode.m"
}

#line 982 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 982 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 982 "prog_mode.m"
{
#line 987 "prog_mode.m"
  {
#line 987 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 987 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 989 "prog_mode.m"
      {
#line 989 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 1)));
#line 989 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 0)));

#line 998 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_8)) == (MR_mktag((MR_Integer) 0))))
#line 998 "prog_mode.m"
          {
#line 998 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InitialInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));
#line 998 "prog_mode.m"
            MR_Word parse_tree__prog_mode__FinalInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 998 "prog_mode.m"
            MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21;

#line 999 "prog_mode.m"
            {
#line 999 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_16, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21);
            }
#line 998 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 1000 "prog_mode.m"
              {
#line 1000 "prog_mode.m"
                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_17, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
              }
#line 998 "prog_mode.m"
          }
#line 998 "prog_mode.m"
        else
#line 1002 "prog_mode.m"
          {
#line 1002 "prog_mode.m"
            MR_Word parse_tree__prog_mode__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1002 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));

#line 1003 "prog_mode.m"
            {
#line 1003 "prog_mode.m"
              return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
            }
#line 1002 "prog_mode.m"
          }
#line 989 "prog_mode.m"
      }
#line 987 "prog_mode.m"
    else
#line 987 "prog_mode.m"
      {
#line 987 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 987 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 987 "prog_mode.m"
      }
#line 987 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 987 "prog_mode.m"
  }
#line 982 "prog_mode.m"
}

#line 976 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 976 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 976 "prog_mode.m"
{
#line 976 "prog_mode.m"
  {
#line 976 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 976 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 976 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 976 "prog_mode.m"
    {
#line 976 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 976 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 976 "prog_mode.m"
      {
#line 976 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 976 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 976 "prog_mode.m"
      }
#line 976 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 976 "prog_mode.m"
  }
#line 976 "prog_mode.m"
}

#line 972 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 972 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 972 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 972 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 972 "prog_mode.m"
{
#line 975 "prog_mode.m"
  {
#line 975 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 976 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 976 "prog_mode.m"
    {
#line 976 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__Modes_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 976 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 976 "prog_mode.m"
      {
#line 976 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 976 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 976 "prog_mode.m"
      }
#line 975 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 975 "prog_mode.m"
  }
#line 972 "prog_mode.m"
}

#line 961 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 961 "prog_mode.m"
    {
#line 961 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 961 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 961 "prog_mode.m"
  }
#line 961 "prog_mode.m"
}

#line 956 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 956 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 956 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6)
#line 956 "prog_mode.m"
{
#line 963 "prog_mode.m"
  {
#line 963 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
#line 963 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_7;
#line 963 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Args0_8;

#line 960 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 960 "prog_mode.m"
      {
#line 960 "prog_mode.m"
        parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 960 "prog_mode.m"
        parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 961 "prog_mode.m"
        {
#line 961 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 961 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_9;
#line 961 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_10_10;

#line 961 "prog_mode.m"
          {
#line 961 "prog_mode.m"
            parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 961 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 961 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
#line 961 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 961 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 961 "prog_mode.m"
          }
#line 2601 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 961 "prog_mode.m"
          {
#line 961 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
          }
#line 962 "prog_mode.m"
          {
#line 962 "prog_mode.m"
            MR_Word base;
#line 962 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_mode.m"
            *parse_tree__prog_mode__Name_6 = base;
#line 962 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 962 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
#line 962 "prog_mode.m"
          }
#line 961 "prog_mode.m"
        }
#line 960 "prog_mode.m"
      }
#line 960 "prog_mode.m"
    else
#line 964 "prog_mode.m"
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
#line 963 "prog_mode.m"
  }
#line 956 "prog_mode.m"
}

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 953 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 953 "prog_mode.m"
{
#line 953 "prog_mode.m"
  {
#line 953 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 953 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 953 "prog_mode.m"
    {
#line 953 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 953 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 953 "prog_mode.m"
  }
#line 953 "prog_mode.m"
}

#line 948 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 948 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 948 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 948 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6)
#line 948 "prog_mode.m"
{
#line 951 "prog_mode.m"
  {
#line 951 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes_11;
#line 951 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 953 "prog_mode.m"
    {
#line 953 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 953 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[8]));
#line 953 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
#line 953 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 953 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 953 "prog_mode.m"
    }
#line 2709 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 953 "prog_mode.m"
    {
#line 953 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
#line 954 "prog_mode.m"
    {
#line 954 "prog_mode.m"
      MR_Word base;
#line 954 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 954 "prog_mode.m"
      *parse_tree__prog_mode__PII_6 = base;
#line 954 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
#line 954 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
#line 954 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
#line 954 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
#line 954 "prog_mode.m"
    }
#line 951 "prog_mode.m"
  }
#line 948 "prog_mode.m"
}

#line 908 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 908 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 908 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 908 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 908 "prog_mode.m"
{
#line 908 "prog_mode.m"
  {
#line 908 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 908 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_HeadVar__3_42;

#line 908 "prog_mode.m"
    {
#line 908 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__908__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_HeadVar__3_42);
    }
#line 908 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_HeadVar__3_42));
#line 908 "prog_mode.m"
  }
#line 908 "prog_mode.m"
}

#line 943 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 943 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 943 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 943 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 943 "prog_mode.m"
{
#line 943 "prog_mode.m"
  {
#line 943 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 943 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 943 "prog_mode.m"
    {
#line 943 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 943 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 943 "prog_mode.m"
  }
#line 943 "prog_mode.m"
}

#line 876 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 876 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 876 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 876 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 876 "prog_mode.m"
{
#line 886 "prog_mode.m"
  {
#line 886 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 886 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "prog_mode.m"
      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 886 "prog_mode.m"
    else
#line 886 "prog_mode.m"
      if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 886 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 886 "prog_mode.m"
      else
#line 886 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 886 "prog_mode.m"
          {
#line 886 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 886 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

#line 886 "prog_mode.m"
            if ((parse_tree__prog_mode__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 886 "prog_mode.m"
            else
#line 894 "prog_mode.m"
              {
#line 894 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_46_46;
#line 894 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_72_72), (MR_Integer) 1);
#line 894 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo_55;

#line 895 "prog_mode.m"
                {
#line 895 "prog_mode.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_54, &parse_tree__prog_mode__PredInstInfo_55);
                }
#line 897 "prog_mode.m"
                parse_tree__prog_mode__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
#line 897 "prog_mode.m"
                {
#line 897 "prog_mode.m"
                  MR_Word base;
#line 897 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 897 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__V_73_73));
#line 897 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_46_46));
#line 897 "prog_mode.m"
                }
#line 894 "prog_mode.m"
              }
#line 886 "prog_mode.m"
          }
#line 886 "prog_mode.m"
        else
#line 886 "prog_mode.m"
          if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1))))
#line 887 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 886 "prog_mode.m"
          else
#line 886 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 942 "prog_mode.m"
              {
#line 942 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_71_71;
#line 942 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 942 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 942 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts_35;
#line 942 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_36_36;

#line 943 "prog_mode.m"
                {
#line 943 "prog_mode.m"
                  parse_tree__prog_mode__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 943 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
#line 943 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 943 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 943 "prog_mode.m"
                }
#line 2913 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 943 "prog_mode.m"
                {
#line 943 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__V_36_36, parse_tree__prog_mode__SubInsts0_34, &parse_tree__prog_mode__SubInsts_35);
                }
#line 945 "prog_mode.m"
                {
#line 945 "prog_mode.m"
                  MR_Word base;
#line 945 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 945 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 945 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 945 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 945 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_35));
#line 945 "prog_mode.m"
                }
#line 942 "prog_mode.m"
              }
#line 886 "prog_mode.m"
            else
#line 886 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 899 "prog_mode.m"
                {
#line 899 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 899 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
#line 899 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 904 "prog_mode.m"
                  if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 901 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 904 "prog_mode.m"
                  else
#line 907 "prog_mode.m"
                    {
#line 907 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__TypeCtorInfo_64_64;
#line 907 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_21;
#line 907 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_40_40;

#line 908 "prog_mode.m"
                      {
#line 908 "prog_mode.m"
                        parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 908 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 908 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
#line 908 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 908 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 908 "prog_mode.m"
                      }
#line 2980 "parse_tree.prog_mode.c"
                      parse_tree__prog_mode__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 908 "prog_mode.m"
                      {
#line 908 "prog_mode.m"
                        mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_21);
                      }
#line 916 "prog_mode.m"
                      {
#line 916 "prog_mode.m"
                        MR_Word base;
#line 916 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 916 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_59));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_21));
#line 916 "prog_mode.m"
                      }
#line 907 "prog_mode.m"
                    }
#line 899 "prog_mode.m"
                }
#line 886 "prog_mode.m"
              else
#line 886 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 919 "prog_mode.m"
                  {
#line 919 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 919 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 919 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst1_24;
#line 919 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars_27;
#line 919 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst_28;
#line 924 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubVars_25;
#line 924 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubSubInst_26;

#line 920 "prog_mode.m"
                    {
#line 920 "prog_mode.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_23, &parse_tree__prog_mode__SubInst1_24);
                    }
#line 921 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 921 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 921 "prog_mode.m"
                      {
#line 921 "prog_mode.m"
                        parse_tree__prog_mode__SubVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 1)));
#line 921 "prog_mode.m"
                        parse_tree__prog_mode__SubSubInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 2)));
#line 922 "prog_mode.m"
                        {
#line 922 "prog_mode.m"
                          mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_22, parse_tree__prog_mode__SubVars_25, &parse_tree__prog_mode__Vars_27);
                        }
#line 923 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubSubInst_26;
#line 921 "prog_mode.m"
                      }
#line 921 "prog_mode.m"
                    else
#line 925 "prog_mode.m"
                      {
#line 925 "prog_mode.m"
                        parse_tree__prog_mode__Vars_27 = parse_tree__prog_mode__Vars0_22;
#line 926 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubInst1_24;
#line 925 "prog_mode.m"
                      }
#line 928 "prog_mode.m"
                    {
#line 928 "prog_mode.m"
                      MR_Word base;
#line 928 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 928 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 928 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 928 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_27));
#line 928 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
#line 928 "prog_mode.m"
                    }
#line 919 "prog_mode.m"
                  }
#line 886 "prog_mode.m"
                else
#line 886 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 938 "prog_mode.m"
                    {
#line 938 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 938 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name_32;

#line 939 "prog_mode.m"
                      {
#line 939 "prog_mode.m"
                        parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_31, &parse_tree__prog_mode__Name_32);
                      }
#line 940 "prog_mode.m"
                      {
#line 940 "prog_mode.m"
                        MR_Word base;
#line 940 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 940 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 940 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_32));
#line 940 "prog_mode.m"
                      }
#line 938 "prog_mode.m"
                    }
#line 886 "prog_mode.m"
                  else
#line 886 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 886 "prog_mode.m"
                      {
#line 886 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 886 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 886 "prog_mode.m"
                        if ((parse_tree__prog_mode__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 886 "prog_mode.m"
                        else
#line 889 "prog_mode.m"
                          {
#line 889 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_74_74), (MR_Integer) 1);
#line 889 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo_11;
#line 889 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_48_48;

#line 890 "prog_mode.m"
                            {
#line 890 "prog_mode.m"
                              parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                            }
#line 892 "prog_mode.m"
                            parse_tree__prog_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
#line 892 "prog_mode.m"
                            {
#line 892 "prog_mode.m"
                              MR_Word base;
#line 892 "prog_mode.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_mode.m"
                              *parse_tree__prog_mode__Inst_6 = base;
#line 892 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 892 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_75_75));
#line 892 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__V_48_48));
#line 892 "prog_mode.m"
                            }
#line 889 "prog_mode.m"
                          }
#line 886 "prog_mode.m"
                      }
#line 886 "prog_mode.m"
                    else
#line 930 "prog_mode.m"
                      {
#line 930 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 930 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_39_39;
#line 930 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_60;
#line 933 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstPrime_30;
#line 931 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv2_SubInstPrime_30;

#line 931 "prog_mode.m"
                        {
#line 931 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_29)), &parse_tree__prog_mode__conv2_SubInstPrime_30);
                        }
#line 931 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 931 "prog_mode.m"
                          {
#line 931 "prog_mode.m"
                            parse_tree__prog_mode__SubInstPrime_30 = ((MR_Word) parse_tree__prog_mode__conv2_SubInstPrime_30);
#line 931 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 931 "prog_mode.m"
                          }
#line 933 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 932 "prog_mode.m"
                          parse_tree__prog_mode__SubInst_60 = parse_tree__prog_mode__SubInstPrime_30;
#line 933 "prog_mode.m"
                        else
#line 934 "prog_mode.m"
                          {
#line 934 "prog_mode.m"
                            parse_tree__prog_mode__SubInst_60 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 934 "prog_mode.m"
                          }
#line 936 "prog_mode.m"
                        {
#line 936 "prog_mode.m"
                          parse_tree__prog_mode__V_39_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_29)));
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
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_39_39));
#line 936 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_60));
#line 936 "prog_mode.m"
                        }
#line 930 "prog_mode.m"
                      }
#line 886 "prog_mode.m"
  }
#line 876 "prog_mode.m"
}

#line 730 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 730 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 730 "prog_mode.m"
{
#line 730 "prog_mode.m"
  {
#line 730 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 730 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 730 "prog_mode.m"
    {
#line 730 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 730 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 730 "prog_mode.m"
  }
#line 730 "prog_mode.m"
}

#line 844 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 844 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 844 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4)
#line 844 "prog_mode.m"
{
#line 849 "prog_mode.m"
  {
#line 849 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 849 "prog_mode.m"
    if ((parse_tree__prog_mode__HOInstInfo0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "prog_mode.m"
      *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "prog_mode.m"
    else
#line 852 "prog_mode.m"
      {
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred0_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_3), (MR_Integer) 1);
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PorF_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 0)));
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 1)));
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 2)));
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 3)));
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_10;
#line 852 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred_11;

#line 730 "prog_mode.m"
        {
#line 730 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_17, parse_tree__prog_mode__TypeCtorInfo_8_17, (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_10);
        }
#line 855 "prog_mode.m"
        {
#line 855 "prog_mode.m"
          parse_tree__prog_mode__Pred_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 855 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_6));
#line 855 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_10));
#line 855 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_8));
#line 855 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 3) = ((MR_Box) (parse_tree__prog_mode__Det_9));
#line 855 "prog_mode.m"
        }
#line 856 "prog_mode.m"
        *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_11);
#line 852 "prog_mode.m"
      }
#line 849 "prog_mode.m"
  }
#line 844 "prog_mode.m"
}

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 748 "prog_mode.m"
{
#line 748 "prog_mode.m"
  {
#line 748 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 748 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 748 "prog_mode.m"
    {
#line 748 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 748 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 748 "prog_mode.m"
  }
#line 748 "prog_mode.m"
}

#line 800 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 800 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 800 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 800 "prog_mode.m"
{
#line 805 "prog_mode.m"
  {
#line 805 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 805 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 1))))
#line 810 "prog_mode.m"
      {
#line 810 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 810 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 810 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA_11;
#line 810 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB_12;

#line 811 "prog_mode.m"
        {
#line 811 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_9, &parse_tree__prog_mode__InstA_11);
        }
#line 812 "prog_mode.m"
        {
#line 812 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_10, &parse_tree__prog_mode__InstB_12);
        }
#line 813 "prog_mode.m"
        {
#line 813 "prog_mode.m"
          MR_Word base;
#line 813 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 813 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_11));
#line 813 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_12));
#line 813 "prog_mode.m"
        }
#line 810 "prog_mode.m"
      }
#line 805 "prog_mode.m"
    else
#line 805 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 815 "prog_mode.m"
        {
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Live_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Real_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_23;
#line 815 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_24;

#line 816 "prog_mode.m"
          {
#line 816 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
          }
#line 817 "prog_mode.m"
          {
#line 817 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
          }
#line 818 "prog_mode.m"
          {
#line 818 "prog_mode.m"
            MR_Word base;
#line 818 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 818 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 818 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_13));
#line 818 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
#line 818 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
#line 818 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_mode__Real_14));
#line 818 "prog_mode.m"
          }
#line 815 "prog_mode.m"
        }
#line 805 "prog_mode.m"
      else
#line 805 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 0))))
#line 805 "prog_mode.m"
          {
#line 805 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_8_43;
#line 805 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 805 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 805 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName_7;
#line 805 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts_8;

#line 806 "prog_mode.m"
            {
#line 806 "prog_mode.m"
              parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_5, &parse_tree__prog_mode__SymName_7);
            }
#line 3488 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_8_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 748 "prog_mode.m"
            {
#line 748 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_43, parse_tree__prog_mode__TypeCtorInfo_8_43, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
            }
#line 808 "prog_mode.m"
            {
#line 808 "prog_mode.m"
              MR_Word base;
#line 808 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 808 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 808 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 808 "prog_mode.m"
            }
#line 805 "prog_mode.m"
          }
#line 805 "prog_mode.m"
        else
#line 805 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 824 "prog_mode.m"
            {
#line 824 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 824 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 824 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 824 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 824 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31;

#line 825 "prog_mode.m"
              {
#line 825 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
              }
#line 826 "prog_mode.m"
              {
#line 826 "prog_mode.m"
                MR_Word base;
#line 826 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 826 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 826 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 826 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
#line 826 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_27 | ((((parse_tree__prog_mode__Uniq_30 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
#line 826 "prog_mode.m"
              }
#line 824 "prog_mode.m"
            }
#line 805 "prog_mode.m"
          else
#line 805 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 820 "prog_mode.m"
              {
#line 820 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 820 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 820 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;
#line 820 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Live_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 820 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 821 "prog_mode.m"
                {
#line 821 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
                }
#line 822 "prog_mode.m"
                {
#line 822 "prog_mode.m"
                  MR_Word base;
#line 822 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 822 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 822 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 822 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_25 | ((((parse_tree__prog_mode__Uniq_16 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
#line 822 "prog_mode.m"
                }
#line 820 "prog_mode.m"
              }
#line 805 "prog_mode.m"
            else
#line 805 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 832 "prog_mode.m"
                {
#line 832 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 832 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName_35;

#line 833 "prog_mode.m"
                  {
#line 833 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
                  }
#line 834 "prog_mode.m"
                  {
#line 834 "prog_mode.m"
                    MR_Word base;
#line 834 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = base;
#line 834 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 834 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
#line 834 "prog_mode.m"
                  }
#line 832 "prog_mode.m"
                }
#line 805 "prog_mode.m"
              else
#line 805 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 828 "prog_mode.m"
                  {
#line 828 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 828 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName_33;

#line 829 "prog_mode.m"
                    {
#line 829 "prog_mode.m"
                      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
                    }
#line 830 "prog_mode.m"
                    {
#line 830 "prog_mode.m"
                      MR_Word base;
#line 830 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_4 = base;
#line 830 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 830 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 830 "prog_mode.m"
                    }
#line 828 "prog_mode.m"
                  }
#line 805 "prog_mode.m"
                else
#line 805 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 837 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 805 "prog_mode.m"
                  else
#line 839 "prog_mode.m"
                    {
#line 839 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 839 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 839 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName_37;

#line 840 "prog_mode.m"
                      {
#line 840 "prog_mode.m"
                        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
                      }
#line 841 "prog_mode.m"
                      {
#line 841 "prog_mode.m"
                        MR_Word base;
#line 841 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_4 = base;
#line 841 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 841 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
#line 841 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
#line 841 "prog_mode.m"
                      }
#line 839 "prog_mode.m"
                    }
#line 805 "prog_mode.m"
  }
#line 800 "prog_mode.m"
}

#line 797 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 797 "prog_mode.m"
    {
#line 797 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 797 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 797 "prog_mode.m"
  }
#line 797 "prog_mode.m"
}

#line 791 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 791 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 791 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4)
#line 791 "prog_mode.m"
{
#line 794 "prog_mode.m"
  {
#line 794 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 794 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
#line 794 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
#line 794 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
#line 794 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7;
#line 794 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_8;

#line 796 "prog_mode.m"
    {
#line 796 "prog_mode.m"
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
#line 3759 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 797 "prog_mode.m"
    {
#line 797 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
#line 798 "prog_mode.m"
    {
#line 798 "prog_mode.m"
      MR_Word base;
#line 798 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_4 = base;
#line 798 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 798 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 798 "prog_mode.m"
    }
#line 794 "prog_mode.m"
  }
#line 791 "prog_mode.m"
}

#line 789 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 789 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 789 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 789 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 789 "prog_mode.m"
{
#line 789 "prog_mode.m"
  {
#line 789 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 789 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_BoundInst_4;

#line 789 "prog_mode.m"
    {
#line 789 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_BoundInst_4);
    }
#line 789 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_BoundInst_4));
#line 789 "prog_mode.m"
  }
#line 789 "prog_mode.m"
}

#line 785 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 785 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 785 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 785 "prog_mode.m"
{
#line 788 "prog_mode.m"
  {
#line 788 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 788 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 789 "prog_mode.m"
    {
#line 789 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 789 "prog_mode.m"
      return;
    }
#line 788 "prog_mode.m"
  }
#line 785 "prog_mode.m"
}

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 748 "prog_mode.m"
{
#line 748 "prog_mode.m"
  {
#line 748 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 748 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 748 "prog_mode.m"
    {
#line 748 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 748 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 748 "prog_mode.m"
  }
#line 748 "prog_mode.m"
}

#line 732 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 732 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 732 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 732 "prog_mode.m"
{
#line 736 "prog_mode.m"
  {
#line 736 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 736 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
#line 736 "prog_mode.m"
      {
#line 736 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 736 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 736 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial_7;
#line 736 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final_8;

#line 737 "prog_mode.m"
        {
#line 737 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
        }
#line 738 "prog_mode.m"
        {
#line 738 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
        }
#line 739 "prog_mode.m"
        {
#line 739 "prog_mode.m"
          MR_Word base;
#line 739 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 739 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
#line 739 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
#line 739 "prog_mode.m"
        }
#line 736 "prog_mode.m"
      }
#line 736 "prog_mode.m"
    else
#line 741 "prog_mode.m"
      {
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_11;
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_12;

#line 748 "prog_mode.m"
        {
#line 748 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
        }
#line 743 "prog_mode.m"
        {
#line 743 "prog_mode.m"
          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_9, &parse_tree__prog_mode__SymName_12);
        }
#line 744 "prog_mode.m"
        {
#line 744 "prog_mode.m"
          MR_Word base;
#line 744 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 744 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
#line 744 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
#line 744 "prog_mode.m"
        }
#line 741 "prog_mode.m"
      }
#line 736 "prog_mode.m"
  }
#line 732 "prog_mode.m"
}

#line 707 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 707 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 707 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 707 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
#line 707 "prog_mode.m"
{
#line 710 "prog_mode.m"
  while (MR_TRUE)
#line 710 "prog_mode.m"
    {
#line 710 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 710 "prog_mode.m"
      {
#line 710 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 710 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_4;
#line 710 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_5;
#line 716 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_9;
#line 712 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FunctorConsId_8;

#line 710 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 710 "prog_mode.m"
          {
#line 710 "prog_mode.m"
            parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 710 "prog_mode.m"
            parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 712 "prog_mode.m"
            parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 712 "prog_mode.m"
            parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 713 "prog_mode.m"
            {
#line 713 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
            }
#line 716 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 715 "prog_mode.m"
              {
#line 715 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
#line 715 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 715 "prog_mode.m"
              }
#line 716 "prog_mode.m"
            else
#line 717 "prog_mode.m"
              {
#line 717 "prog_mode.m"
                /* direct tailcall eliminated */
#line 717 "prog_mode.m"
                {
#line 717 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__BoundInsts_5;

#line 717 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 717 "prog_mode.m"
                }
#line 717 "prog_mode.m"
                continue;
#line 717 "prog_mode.m"
              }
#line 710 "prog_mode.m"
          }
#line 710 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 710 "prog_mode.m"
      }
#line 710 "prog_mode.m"
      break;
#line 710 "prog_mode.m"
    }
#line 707 "prog_mode.m"
}

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 622 "prog_mode.m"
{
#line 622 "prog_mode.m"
  {
#line 622 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 622 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 622 "prog_mode.m"
  }
#line 622 "prog_mode.m"
}

#line 623 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 623 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 623 "prog_mode.m"
{
#line 623 "prog_mode.m"
  {
#line 623 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 623 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
#line 623 "prog_mode.m"
    {
#line 623 "prog_mode.m"
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 623 "prog_mode.m"
      return;
    }
#line 623 "prog_mode.m"
  }
#line 623 "prog_mode.m"
}

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 622 "prog_mode.m"
{
#line 622 "prog_mode.m"
  {
#line 622 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 624 "prog_mode.m"
    {
#line 624 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
#line 624 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 624 "prog_mode.m"
      {
#line 624 "prog_mode.m"
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 624 "prog_mode.m"
        return;
      }
#line 622 "prog_mode.m"
  }
#line 622 "prog_mode.m"
}

#line 622 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 622 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 622 "prog_mode.m"
{
#line 622 "prog_mode.m"
  {
#line 622 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 622 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 622 "prog_mode.m"
      {
#line 622 "prog_mode.m"
        {
#line 622 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 622 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 623 "prog_mode.m"
          {
#line 623 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 622 "prog_mode.m"
        }
#line 622 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 622 "prog_mode.m"
      }
#line 622 "prog_mode.m"
    else
#line 622 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 622 "prog_mode.m"
  }
#line 622 "prog_mode.m"
}

#line 618 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 618 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2)
#line 618 "prog_mode.m"
{
#line 618 "prog_mode.m"
  {
#line 618 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 618 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
#line 622 "prog_mode.m"
    while (MR_TRUE)
#line 622 "prog_mode.m"
      {
#line 622 "prog_mode.m"
        /* tailcall optimized into a loop */
#line 622 "prog_mode.m"
        if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 1))))
#line 622 "prog_mode.m"
          {
#line 622 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 622 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 627 "prog_mode.m"
            {
#line 627 "prog_mode.m"
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_32_32);
            }
#line 622 "prog_mode.m"
            if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 630 "prog_mode.m"
              {
#line 630 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_31_31);
              }
#line 622 "prog_mode.m"
          }
#line 622 "prog_mode.m"
        else
#line 622 "prog_mode.m"
          if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 2))))
#line 622 "prog_mode.m"
            {
#line 622 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 622 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 632 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
#line 632 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 633 "prog_mode.m"
              {
#line 633 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_35_35);
              }
#line 622 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 636 "prog_mode.m"
                {
#line 636 "prog_mode.m"
                  return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_34_34);
                }
#line 622 "prog_mode.m"
            }
#line 622 "prog_mode.m"
          else
#line 622 "prog_mode.m"
            if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 0))))
#line 622 "prog_mode.m"
              {
#line 622 "prog_mode.m"
                {
#line 622 "prog_mode.m"
                  parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
                }
#line 622 "prog_mode.m"
              }
#line 622 "prog_mode.m"
            else
#line 622 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 641 "prog_mode.m"
                {
#line 641 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 641 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 641 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 641 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 642 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 642 "prog_mode.m"
                  {
#line 642 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_26;

#line 642 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 642 "prog_mode.m"
                  }
#line 642 "prog_mode.m"
                  continue;
#line 641 "prog_mode.m"
                }
#line 622 "prog_mode.m"
              else
#line 622 "prog_mode.m"
                if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 638 "prog_mode.m"
                  {
#line 638 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInstName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 638 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 638 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 638 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 639 "prog_mode.m"
                    /* direct tailcall eliminated */
#line 639 "prog_mode.m"
                    {
#line 639 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_14;

#line 639 "prog_mode.m"
                      (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 639 "prog_mode.m"
                    }
#line 639 "prog_mode.m"
                    continue;
#line 638 "prog_mode.m"
                  }
#line 622 "prog_mode.m"
                else
#line 622 "prog_mode.m"
                  if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 647 "prog_mode.m"
                    {
#line 647 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 648 "prog_mode.m"
                      /* direct tailcall eliminated */
#line 648 "prog_mode.m"
                      {
#line 648 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_28;

#line 648 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 648 "prog_mode.m"
                      }
#line 648 "prog_mode.m"
                      continue;
#line 647 "prog_mode.m"
                    }
#line 622 "prog_mode.m"
                  else
#line 622 "prog_mode.m"
                    if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 644 "prog_mode.m"
                      {
#line 644 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 645 "prog_mode.m"
                        /* direct tailcall eliminated */
#line 645 "prog_mode.m"
                        {
#line 645 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_27;

#line 645 "prog_mode.m"
                          (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 645 "prog_mode.m"
                        }
#line 645 "prog_mode.m"
                        continue;
#line 644 "prog_mode.m"
                      }
#line 622 "prog_mode.m"
                    else
#line 622 "prog_mode.m"
                      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 650 "prog_mode.m"
                        {
#line 650 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__SubInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 650 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 651 "prog_mode.m"
                          /* direct tailcall eliminated */
#line 651 "prog_mode.m"
                          {
#line 651 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_29;

#line 651 "prog_mode.m"
                            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 651 "prog_mode.m"
                          }
#line 651 "prog_mode.m"
                          continue;
#line 650 "prog_mode.m"
                        }
#line 622 "prog_mode.m"
                      else
#line 622 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 622 "prog_mode.m"
        return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 622 "prog_mode.m"
        break;
#line 622 "prog_mode.m"
      }
#line 618 "prog_mode.m"
  }
#line 618 "prog_mode.m"
}

#line 549 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 549 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 549 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 549 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 549 "prog_mode.m"
{
#line 549 "prog_mode.m"
  {
#line 549 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 549 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 549 "prog_mode.m"
    {
#line 549 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 549 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 549 "prog_mode.m"
  }
#line 549 "prog_mode.m"
}

#line 543 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 543 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 543 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 543 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 543 "prog_mode.m"
{
#line 548 "prog_mode.m"
  {
#line 548 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 548 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 548 "prog_mode.m"
      {
#line 548 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
#line 548 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 548 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 548 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_9;
#line 548 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_15_15;

#line 549 "prog_mode.m"
        {
#line 549 "prog_mode.m"
          parse_tree__prog_mode__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 549 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
#line 549 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 549 "prog_mode.m"
        }
#line 4489 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 549 "prog_mode.m"
        {
#line 549 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__V_15_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
        }
#line 550 "prog_mode.m"
        {
#line 550 "prog_mode.m"
          MR_Word base;
#line 550 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 550 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
#line 550 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 550 "prog_mode.m"
        }
#line 548 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 548 "prog_mode.m"
      }
#line 548 "prog_mode.m"
    else
#line 548 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 559 "prog_mode.m"
        {
#line 559 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 559 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 559 "prog_mode.m"
        }
#line 548 "prog_mode.m"
      else
#line 548 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 552 "prog_mode.m"
          {
#line 552 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 552 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 552 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_12;

#line 553 "prog_mode.m"
            {
#line 553 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
            }
#line 552 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 552 "prog_mode.m"
              {
#line 554 "prog_mode.m"
                {
#line 554 "prog_mode.m"
                  MR_Word base;
#line 554 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 554 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 554 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
#line 554 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 554 "prog_mode.m"
                }
#line 554 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 552 "prog_mode.m"
              }
#line 552 "prog_mode.m"
          }
#line 548 "prog_mode.m"
        else
#line 548 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 548 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 548 "prog_mode.m"
  }
#line 543 "prog_mode.m"
}

#line 473 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 473 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 473 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 473 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 473 "prog_mode.m"
{
#line 473 "prog_mode.m"
  {
#line 473 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 473 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_Mode_6;

#line 473 "prog_mode.m"
    {
#line 473 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv4_Mode_6);
    }
#line 473 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_Mode_6));
#line 473 "prog_mode.m"
  }
#line 473 "prog_mode.m"
}

#line 522 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 522 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 522 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
#line 522 "prog_mode.m"
{
#line 522 "prog_mode.m"
  {
#line 522 "prog_mode.m"
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
#line 522 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 522 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv3_HeadVar__3_42;

#line 522 "prog_mode.m"
    {
#line 522 "prog_mode.m"
      parse_tree__prog_mode__conv3_HeadVar__3_42 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__522__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
#line 522 "prog_mode.m"
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_HeadVar__3_42));
#line 522 "prog_mode.m"
    return parse_tree__prog_mode__wrapper_arg_2;
#line 522 "prog_mode.m"
  }
#line 522 "prog_mode.m"
}

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 504 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 504 "prog_mode.m"
{
#line 504 "prog_mode.m"
  {
#line 504 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 504 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_45;

#line 504 "prog_mode.m"
    {
#line 504 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__504__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_HeadVar__3_45);
    }
#line 504 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_45));
#line 504 "prog_mode.m"
  }
#line 504 "prog_mode.m"
}

#line 538 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 538 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 538 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 538 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 538 "prog_mode.m"
{
#line 538 "prog_mode.m"
  {
#line 538 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 538 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_Inst_6;

#line 538 "prog_mode.m"
    {
#line 538 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Inst_6);
    }
#line 538 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Inst_6));
#line 538 "prog_mode.m"
  }
#line 538 "prog_mode.m"
}

#line 486 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 486 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 486 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 486 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 486 "prog_mode.m"
{
#line 486 "prog_mode.m"
  {
#line 486 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 486 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 486 "prog_mode.m"
    {
#line 486 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 486 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 486 "prog_mode.m"
  }
#line 486 "prog_mode.m"
}

#line 458 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 458 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 458 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 458 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 458 "prog_mode.m"
{
#line 466 "prog_mode.m"
  {
#line 466 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 466 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 482 "prog_mode.m"
      {
#line 482 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 482 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 482 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_71;

#line 489 "prog_mode.m"
        if ((parse_tree__prog_mode__HOInstInfo0_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "prog_mode.m"
          parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "prog_mode.m"
        else
#line 485 "prog_mode.m"
          {
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_81_81;
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_48_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_65), (MR_Integer) 1);
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_49_49;
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_50_50;
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__PorF_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 0)));
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 1)));
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MaybeArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 2)));
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 3)));
#line 485 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_58;

#line 486 "prog_mode.m"
            {
#line 486 "prog_mode.m"
              parse_tree__prog_mode__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 486 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 486 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
#line 486 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 486 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 486 "prog_mode.m"
            }
#line 4801 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 486 "prog_mode.m"
            {
#line 486 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_81_81, parse_tree__prog_mode__TypeCtorInfo_81_81, parse_tree__prog_mode__V_49_49, parse_tree__prog_mode__Modes0_55, &parse_tree__prog_mode__Modes_58);
            }
#line 487 "prog_mode.m"
            {
#line 487 "prog_mode.m"
              parse_tree__prog_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_54));
#line 487 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_58));
#line 487 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_56));
#line 487 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 3) = ((MR_Box) (parse_tree__prog_mode__Det_57));
#line 487 "prog_mode.m"
            }
#line 487 "prog_mode.m"
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_50_50);
#line 485 "prog_mode.m"
          }
#line 493 "prog_mode.m"
        {
#line 493 "prog_mode.m"
          MR_Word base;
#line 493 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 493 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_64));
#line 493 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_71));
#line 493 "prog_mode.m"
        }
#line 482 "prog_mode.m"
      }
#line 466 "prog_mode.m"
    else
#line 466 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 537 "prog_mode.m"
        {
#line 537 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_91_91;
#line 537 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 537 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 537 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_38;
#line 537 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_39_39;

#line 538 "prog_mode.m"
          {
#line 538 "prog_mode.m"
            parse_tree__prog_mode__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 538 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
#line 538 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 538 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 538 "prog_mode.m"
          }
#line 4873 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 538 "prog_mode.m"
          {
#line 538 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_91_91, parse_tree__prog_mode__TypeCtorInfo_91_91, parse_tree__prog_mode__V_39_39, parse_tree__prog_mode__SubInsts0_37, &parse_tree__prog_mode__SubInsts_38);
          }
#line 540 "prog_mode.m"
          {
#line 540 "prog_mode.m"
            MR_Word base;
#line 540 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 540 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 540 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_36));
#line 540 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_38));
#line 540 "prog_mode.m"
          }
#line 537 "prog_mode.m"
        }
#line 466 "prog_mode.m"
      else
#line 466 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 495 "prog_mode.m"
          {
#line 495 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 495 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 495 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 500 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 499 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 500 "prog_mode.m"
            else
#line 503 "prog_mode.m"
              {
#line 503 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_85_85;
#line 503 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_26;
#line 503 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_43_43;

#line 504 "prog_mode.m"
                {
#line 504 "prog_mode.m"
                  parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 504 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
#line 504 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 504 "prog_mode.m"
                }
#line 4940 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 504 "prog_mode.m"
                {
#line 504 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_26);
                }
#line 510 "prog_mode.m"
                {
#line 510 "prog_mode.m"
                  MR_Word base;
#line 510 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 510 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 510 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 510 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_26));
#line 510 "prog_mode.m"
                }
#line 503 "prog_mode.m"
              }
#line 495 "prog_mode.m"
          }
#line 466 "prog_mode.m"
        else
#line 466 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 520 "prog_mode.m"
            {
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_87_87;
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_31;
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_32;
#line 520 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;

#line 521 "prog_mode.m"
              {
#line 521 "prog_mode.m"
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__SubInst0_30, &parse_tree__prog_mode__SubInst_31);
              }
#line 4993 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 522 "prog_mode.m"
              {
#line 522 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
#line 522 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
#line 522 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 522 "prog_mode.m"
              }
#line 522 "prog_mode.m"
              {
#line 522 "prog_mode.m"
                parse_tree__prog_mode__Vars_32 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__Vars0_29);
              }
#line 528 "prog_mode.m"
              {
#line 528 "prog_mode.m"
                MR_Word base;
#line 528 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 528 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 528 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_32));
#line 528 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_31));
#line 528 "prog_mode.m"
              }
#line 520 "prog_mode.m"
            }
#line 466 "prog_mode.m"
          else
#line 466 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 530 "prog_mode.m"
              {
#line 530 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 533 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name1_35;

#line 531 "prog_mode.m"
                {
#line 531 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_34, &parse_tree__prog_mode__Name1_35);
                }
#line 533 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 532 "prog_mode.m"
                  {
#line 532 "prog_mode.m"
                    MR_Word base;
#line 532 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 532 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 532 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_35));
#line 532 "prog_mode.m"
                  }
#line 533 "prog_mode.m"
                else
#line 534 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 530 "prog_mode.m"
              }
#line 466 "prog_mode.m"
            else
#line 466 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 467 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 466 "prog_mode.m"
              else
#line 466 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 469 "prog_mode.m"
                  {
#line 469 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 469 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 469 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_15;

#line 476 "prog_mode.m"
                    if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "prog_mode.m"
                      parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "prog_mode.m"
                    else
#line 472 "prog_mode.m"
                      {
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_78_78;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__PorF_10;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes0_11;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Det_13;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes_14;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_51_51 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_52_52;
#line 472 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_53_53;

#line 471 "prog_mode.m"
                        parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 0)));
#line 471 "prog_mode.m"
                        parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 1)));
#line 471 "prog_mode.m"
                        parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 2)));
#line 471 "prog_mode.m"
                        parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 3)));
#line 473 "prog_mode.m"
                        {
#line 473 "prog_mode.m"
                          parse_tree__prog_mode__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 473 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
#line 473 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 473 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 473 "prog_mode.m"
                        }
#line 5138 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 473 "prog_mode.m"
                        {
#line 473 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_78_78, parse_tree__prog_mode__TypeCtorInfo_78_78, parse_tree__prog_mode__V_52_52, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                        }
#line 474 "prog_mode.m"
                        {
#line 474 "prog_mode.m"
                          parse_tree__prog_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
#line 474 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
#line 474 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
#line 474 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
#line 474 "prog_mode.m"
                        }
#line 474 "prog_mode.m"
                        parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_53_53);
#line 472 "prog_mode.m"
                      }
#line 480 "prog_mode.m"
                    {
#line 480 "prog_mode.m"
                      MR_Word base;
#line 480 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 480 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 480 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 480 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
#line 480 "prog_mode.m"
                    }
#line 469 "prog_mode.m"
                  }
#line 466 "prog_mode.m"
                else
#line 513 "prog_mode.m"
                  {
#line 513 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 516 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var1_28;
#line 514 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_86_86 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 514 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv5_Var1_28;

#line 514 "prog_mode.m"
                    {
#line 514 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_86_86, parse_tree__prog_mode__TypeInfo_86_86, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__Var0_27)), &parse_tree__prog_mode__conv5_Var1_28);
                    }
#line 514 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 514 "prog_mode.m"
                      {
#line 514 "prog_mode.m"
                        parse_tree__prog_mode__Var1_28 = ((MR_Word) parse_tree__prog_mode__conv5_Var1_28);
#line 514 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 514 "prog_mode.m"
                      }
#line 516 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 515 "prog_mode.m"
                      {
#line 515 "prog_mode.m"
                        MR_Word base;
#line 515 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 515 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_28));
#line 515 "prog_mode.m"
                      }
#line 516 "prog_mode.m"
                    else
#line 517 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 513 "prog_mode.m"
                  }
#line 466 "prog_mode.m"
  }
#line 458 "prog_mode.m"
}

#line 454 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 454 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 454 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 454 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 454 "prog_mode.m"
{
#line 454 "prog_mode.m"
  {
#line 454 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 454 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 454 "prog_mode.m"
    {
#line 454 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 454 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 454 "prog_mode.m"
  }
#line 454 "prog_mode.m"
}

#line 443 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 443 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 443 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 443 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 443 "prog_mode.m"
{
#line 448 "prog_mode.m"
  {
#line 448 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 448 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 448 "prog_mode.m"
      {
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 448 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 449 "prog_mode.m"
        {
#line 449 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 450 "prog_mode.m"
        {
#line 450 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 451 "prog_mode.m"
        {
#line 451 "prog_mode.m"
          MR_Word base;
#line 451 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 451 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 451 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 451 "prog_mode.m"
        }
#line 448 "prog_mode.m"
      }
#line 448 "prog_mode.m"
    else
#line 453 "prog_mode.m"
      {
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_13;
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 454 "prog_mode.m"
        {
#line 454 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 454 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
#line 454 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 454 "prog_mode.m"
        }
#line 5350 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 454 "prog_mode.m"
        {
#line 454 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
        }
#line 455 "prog_mode.m"
        {
#line 455 "prog_mode.m"
          MR_Word base;
#line 455 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 455 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 455 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
#line 455 "prog_mode.m"
        }
#line 453 "prog_mode.m"
      }
#line 448 "prog_mode.m"
  }
#line 443 "prog_mode.m"
}

#line 429 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 429 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 429 "prog_mode.m"
{
#line 432 "prog_mode.m"
  {
#line 432 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 432 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "prog_mode.m"
    else
#line 433 "prog_mode.m"
      {
#line 433 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 433 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 433 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 433 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 290 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__A0_6)) == (MR_mktag((MR_Integer) 0))))
#line 290 "prog_mode.m"
          {
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_13;
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_14;

#line 291 "prog_mode.m"
            {
#line 291 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_11, &parse_tree__prog_mode__I_13);
            }
#line 292 "prog_mode.m"
            {
#line 292 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_12, &parse_tree__prog_mode__F_14);
            }
#line 290 "prog_mode.m"
            {
#line 290 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_13));
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_14));
#line 290 "prog_mode.m"
            }
#line 290 "prog_mode.m"
          }
#line 290 "prog_mode.m"
        else
#line 294 "prog_mode.m"
          {
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_18;

#line 295 "prog_mode.m"
            {
#line 295 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_17, &parse_tree__prog_mode__Args_18);
            }
#line 294 "prog_mode.m"
            {
#line 294 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_16));
#line 294 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_18));
#line 294 "prog_mode.m"
            }
#line 294 "prog_mode.m"
          }
#line 435 "prog_mode.m"
        {
#line 435 "prog_mode.m"
          parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 433 "prog_mode.m"
        {
#line 433 "prog_mode.m"
          MR_Word base;
#line 433 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 433 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 433 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 433 "prog_mode.m"
        }
#line 433 "prog_mode.m"
      }
#line 432 "prog_mode.m"
  }
#line 429 "prog_mode.m"
}

#line 411 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 411 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 411 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 411 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 411 "prog_mode.m"
{
#line 414 "prog_mode.m"
  {
#line 414 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 414 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "prog_mode.m"
    else
#line 415 "prog_mode.m"
      {
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PredOrFunc_8;
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_9;
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MaybeArgRegs_10;
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_11;
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_12;
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HeadVar__2_2), (MR_Integer) 1);
#line 415 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 416 "prog_mode.m"
        parse_tree__prog_mode__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 0)));
#line 416 "prog_mode.m"
        parse_tree__prog_mode__Modes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 1)));
#line 416 "prog_mode.m"
        parse_tree__prog_mode__MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 2)));
#line 416 "prog_mode.m"
        parse_tree__prog_mode__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 3)));
#line 423 "prog_mode.m"
        {
#line 423 "prog_mode.m"
          parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_1);
        }
#line 425 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 424 "prog_mode.m"
          parse_tree__prog_mode__Modes_12 = parse_tree__prog_mode__Modes0_9;
#line 425 "prog_mode.m"
        else
#line 426 "prog_mode.m"
          {
#line 426 "prog_mode.m"
            parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_9, &parse_tree__prog_mode__Modes_12);
          }
#line 419 "prog_mode.m"
        {
#line 419 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_8));
#line 419 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_12));
#line 419 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_10));
#line 419 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Det_11));
#line 419 "prog_mode.m"
        }
#line 419 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_14_14);
#line 415 "prog_mode.m"
      }
#line 414 "prog_mode.m"
  }
#line 411 "prog_mode.m"
}

#line 400 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 400 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 400 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 400 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 400 "prog_mode.m"
{
#line 403 "prog_mode.m"
  {
#line 403 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 403 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "prog_mode.m"
    else
#line 405 "prog_mode.m"
      {
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_8;
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_9;
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
#line 405 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_12;

#line 407 "prog_mode.m"
        {
#line 407 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
        }
#line 408 "prog_mode.m"
        {
#line 408 "prog_mode.m"
          parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
#line 408 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
#line 408 "prog_mode.m"
        }
#line 409 "prog_mode.m"
        {
#line 409 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
        }
#line 405 "prog_mode.m"
        {
#line 405 "prog_mode.m"
          MR_Word base;
#line 405 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 405 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
#line 405 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
#line 405 "prog_mode.m"
        }
#line 405 "prog_mode.m"
      }
#line 403 "prog_mode.m"
  }
#line 400 "prog_mode.m"
}

#line 381 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 381 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 381 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 381 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 381 "prog_mode.m"
{
#line 386 "prog_mode.m"
  {
#line 386 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 386 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 386 "prog_mode.m"
      {
#line 386 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 386 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 386 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9;

#line 387 "prog_mode.m"
        {
#line 387 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
        }
#line 388 "prog_mode.m"
        {
#line 388 "prog_mode.m"
          MR_Word base;
#line 388 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 388 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
#line 388 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 388 "prog_mode.m"
        }
#line 386 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 386 "prog_mode.m"
      }
#line 386 "prog_mode.m"
    else
#line 386 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 397 "prog_mode.m"
        {
#line 397 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 397 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 397 "prog_mode.m"
        }
#line 386 "prog_mode.m"
      else
#line 386 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 390 "prog_mode.m"
          {
#line 390 "prog_mode.m"
            MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 390 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 390 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst_12;

#line 391 "prog_mode.m"
            {
#line 391 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
            }
#line 390 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 390 "prog_mode.m"
              {
#line 392 "prog_mode.m"
                {
#line 392 "prog_mode.m"
                  MR_Word base;
#line 392 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 392 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
#line 392 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
#line 392 "prog_mode.m"
                }
#line 392 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 390 "prog_mode.m"
              }
#line 390 "prog_mode.m"
          }
#line 386 "prog_mode.m"
        else
#line 386 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 386 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 386 "prog_mode.m"
  }
#line 381 "prog_mode.m"
}

#line 304 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 304 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 304 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 304 "prog_mode.m"
{
#line 307 "prog_mode.m"
  {
#line 307 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 307 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "prog_mode.m"
    else
#line 308 "prog_mode.m"
      {
#line 308 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 308 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 308 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 308 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 309 "prog_mode.m"
        {
#line 309 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__A0_6, &parse_tree__prog_mode__A_8);
        }
#line 310 "prog_mode.m"
        {
#line 310 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 308 "prog_mode.m"
        {
#line 308 "prog_mode.m"
          MR_Word base;
#line 308 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 308 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 308 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 308 "prog_mode.m"
        }
#line 308 "prog_mode.m"
      }
#line 307 "prog_mode.m"
  }
#line 304 "prog_mode.m"
}

#line 979 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 979 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 979 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 979 "prog_mode.m"
{
#line 979 "prog_mode.m"
  {
#line 979 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 979 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 979 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10;

#line 979 "prog_mode.m"
    {
#line 979 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10);
    }
#line 979 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 979 "prog_mode.m"
      {
#line 979 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10));
#line 979 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 979 "prog_mode.m"
      }
#line 979 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 979 "prog_mode.m"
  }
#line 979 "prog_mode.m"
}

#line 167 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(
#line 167 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndModes_2)
#line 167 "prog_mode.m"
{
#line 978 "prog_mode.m"
  {
#line 978 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 978 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 979 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 979 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 980 "prog_mode.m"
    {
#line 980 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 979 "prog_mode.m"
    {
#line 979 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__TypeAndModes_2, ((MR_Box) (parse_tree__prog_mode__V_5_5)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 979 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 979 "prog_mode.m"
      {
#line 979 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 979 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 979 "prog_mode.m"
      }
#line 978 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 978 "prog_mode.m"
  }
#line 167 "prog_mode.m"
}

#line 976 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 976 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 976 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 976 "prog_mode.m"
{
#line 976 "prog_mode.m"
  {
#line 976 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 976 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 976 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 976 "prog_mode.m"
    {
#line 976 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 976 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 976 "prog_mode.m"
      {
#line 976 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 976 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 976 "prog_mode.m"
      }
#line 976 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 976 "prog_mode.m"
  }
#line 976 "prog_mode.m"
}

#line 164 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(
#line 164 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_2)
#line 164 "prog_mode.m"
{
#line 969 "prog_mode.m"
  {
#line 969 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 969 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_4_4;
#line 976 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 976 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 970 "prog_mode.m"
    {
#line 970 "prog_mode.m"
      parse_tree__prog_mode__V_4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 976 "prog_mode.m"
    {
#line 976 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[5], parse_tree__prog_mode__Modes_2, ((MR_Box) (parse_tree__prog_mode__V_4_4)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 976 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 976 "prog_mode.m"
      {
#line 976 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 976 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 976 "prog_mode.m"
      }
#line 969 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 969 "prog_mode.m"
  }
#line 164 "prog_mode.m"
}

#line 872 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 872 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 872 "prog_mode.m"
{
#line 872 "prog_mode.m"
  {
#line 872 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 872 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 872 "prog_mode.m"
    {
#line 872 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 872 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 872 "prog_mode.m"
  }
#line 872 "prog_mode.m"
}

#line 156 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
#line 156 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 156 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 156 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 156 "prog_mode.m"
{
#line 866 "prog_mode.m"
  {
#line 866 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 866 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 866 "prog_mode.m"
      {
#line 866 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 866 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 866 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 866 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 867 "prog_mode.m"
        {
#line 867 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 868 "prog_mode.m"
        {
#line 868 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 869 "prog_mode.m"
        {
#line 869 "prog_mode.m"
          MR_Word base;
#line 869 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 869 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 869 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 869 "prog_mode.m"
        }
#line 866 "prog_mode.m"
      }
#line 866 "prog_mode.m"
    else
#line 871 "prog_mode.m"
      {
#line 871 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 871 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 871 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 871 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_13;
#line 871 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 872 "prog_mode.m"
        {
#line 872 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 872 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 872 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
#line 872 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 872 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 872 "prog_mode.m"
        }
#line 6139 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 872 "prog_mode.m"
        {
#line 872 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
        }
#line 873 "prog_mode.m"
        {
#line 873 "prog_mode.m"
          MR_Word base;
#line 873 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 873 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 873 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
#line 873 "prog_mode.m"
        }
#line 871 "prog_mode.m"
      }
#line 866 "prog_mode.m"
  }
#line 156 "prog_mode.m"
}

#line 149 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
#line 149 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 149 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 149 "prog_mode.m"
{
#line 861 "prog_mode.m"
  {
#line 861 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 861 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;

#line 862 "prog_mode.m"
    {
#line 862 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 862 "prog_mode.m"
    {
#line 862 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__V_5_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
#line 862 "prog_mode.m"
      return;
    }
#line 861 "prog_mode.m"
  }
#line 149 "prog_mode.m"
}

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 748 "prog_mode.m"
{
#line 748 "prog_mode.m"
  {
#line 748 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 748 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 748 "prog_mode.m"
    {
#line 748 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 748 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 748 "prog_mode.m"
  }
#line 748 "prog_mode.m"
}

#line 142 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
#line 142 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 142 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 142 "prog_mode.m"
{
#line 756 "prog_mode.m"
  {
#line 756 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 756 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 763 "prog_mode.m"
      {
#line 763 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 763 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 763 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_12;

#line 764 "prog_mode.m"
        {
#line 764 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_11, &parse_tree__prog_mode__HOInstInfo_12);
        }
#line 765 "prog_mode.m"
        {
#line 765 "prog_mode.m"
          MR_Word base;
#line 765 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 765 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
#line 765 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
#line 765 "prog_mode.m"
        }
#line 763 "prog_mode.m"
      }
#line 756 "prog_mode.m"
    else
#line 756 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 779 "prog_mode.m"
        {
#line 779 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_8_31;
#line 779 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 779 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 779 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_20;
#line 779 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_21;

#line 780 "prog_mode.m"
          {
#line 780 "prog_mode.m"
            parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__Name0_18, &parse_tree__prog_mode__Name_20);
          }
#line 6298 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_8_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 748 "prog_mode.m"
          {
#line 748 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_31, parse_tree__prog_mode__TypeCtorInfo_8_31, (MR_Word) &parse_tree__prog_mode_scalar_common_2[4], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
          }
#line 782 "prog_mode.m"
          {
#line 782 "prog_mode.m"
            MR_Word base;
#line 782 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 782 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 782 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 782 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
#line 782 "prog_mode.m"
          }
#line 779 "prog_mode.m"
        }
#line 756 "prog_mode.m"
      else
#line 756 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 771 "prog_mode.m"
          {
#line 771 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 771 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 771 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts_15;
#line 771 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

#line 772 "prog_mode.m"
            {
#line 772 "prog_mode.m"
              parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
            }
#line 773 "prog_mode.m"
            {
#line 773 "prog_mode.m"
              MR_Word base;
#line 773 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 773 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 773 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
#line 773 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
#line 773 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
#line 773 "prog_mode.m"
            }
#line 771 "prog_mode.m"
          }
#line 756 "prog_mode.m"
        else
#line 756 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 759 "prog_mode.m"
            {
#line 759 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 759 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 759 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_9;

#line 760 "prog_mode.m"
              {
#line 760 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
              }
#line 761 "prog_mode.m"
              {
#line 761 "prog_mode.m"
                MR_Word base;
#line 761 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 761 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 761 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
#line 761 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
#line 761 "prog_mode.m"
              }
#line 759 "prog_mode.m"
            }
#line 756 "prog_mode.m"
          else
#line 756 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 775 "prog_mode.m"
              {
#line 775 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 775 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;

#line 776 "prog_mode.m"
                {
#line 776 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
                }
#line 777 "prog_mode.m"
                {
#line 777 "prog_mode.m"
                  MR_Word base;
#line 777 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 777 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 777 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 777 "prog_mode.m"
                }
#line 775 "prog_mode.m"
              }
#line 756 "prog_mode.m"
            else
#line 756 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 767 "prog_mode.m"
                {
#line 767 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 767 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 767 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo_24;

#line 768 "prog_mode.m"
                  {
#line 768 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_23, &parse_tree__prog_mode__HOInstInfo_24);
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
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 769 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
#line 769 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
#line 769 "prog_mode.m"
                  }
#line 767 "prog_mode.m"
                }
#line 756 "prog_mode.m"
              else
#line 757 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 756 "prog_mode.m"
  }
#line 142 "prog_mode.m"
}

#line 748 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 748 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 748 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 748 "prog_mode.m"
{
#line 748 "prog_mode.m"
  {
#line 748 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 748 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 748 "prog_mode.m"
    {
#line 748 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 748 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 748 "prog_mode.m"
  }
#line 748 "prog_mode.m"
}

#line 139 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
#line 139 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 139 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 139 "prog_mode.m"
{
#line 747 "prog_mode.m"
  {
#line 747 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 747 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 748 "prog_mode.m"
    {
#line 748 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[3], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 748 "prog_mode.m"
      return;
    }
#line 747 "prog_mode.m"
  }
#line 139 "prog_mode.m"
}

#line 730 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 730 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 730 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 730 "prog_mode.m"
{
#line 730 "prog_mode.m"
  {
#line 730 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 730 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 730 "prog_mode.m"
    {
#line 730 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 730 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 730 "prog_mode.m"
  }
#line 730 "prog_mode.m"
}

#line 136 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
#line 136 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_3,
#line 136 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_4)
#line 136 "prog_mode.m"
{
#line 729 "prog_mode.m"
  {
#line 729 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 729 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 730 "prog_mode.m"
    {
#line 730 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[2], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
#line 730 "prog_mode.m"
      return;
    }
#line 729 "prog_mode.m"
  }
#line 136 "prog_mode.m"
}

#line 131 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_id_to_int_2_p_0(
#line 131 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 131 "prog_mode.m"
  MR_Integer * parse_tree__prog_mode__X_4)
#line 131 "prog_mode.m"
{
#line 721 "prog_mode.m"
  {
#line 721 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 721 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 721 "prog_mode.m"
    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 721 "prog_mode.m"
  }
#line 131 "prog_mode.m"
}

#line 128 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
#line 128 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_1,
#line 128 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 128 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 128 "prog_mode.m"
{
#line 664 "prog_mode.m"
  {
#line 664 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 664 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 664 "prog_mode.m"
    else
#line 666 "prog_mode.m"
      {
#line 666 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId_8;
#line 666 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsIds_9;
#line 666 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
#line 657 "prog_mode.m"
        MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
#line 660 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_15;
#line 660 "prog_mode.m"
        MR_Integer parse_tree__prog_mode__Arity_16;
#line 658 "prog_mode.m"
        MR_Word parse_tree__prog_mode___TypeCtor_17;

#line 658 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 658 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 658 "prog_mode.m"
          {
#line 658 "prog_mode.m"
            parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
#line 658 "prog_mode.m"
            parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
#line 658 "prog_mode.m"
            parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
#line 659 "prog_mode.m"
            {
#line 659 "prog_mode.m"
              parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 659 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
#line 659 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
#line 659 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
#line 659 "prog_mode.m"
            }
#line 658 "prog_mode.m"
          }
#line 658 "prog_mode.m"
        else
#line 661 "prog_mode.m"
          parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
#line 668 "prog_mode.m"
        {
#line 668 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
        }
#line 666 "prog_mode.m"
        {
#line 666 "prog_mode.m"
          MR_Word base;
#line 666 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 666 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
#line 666 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
#line 666 "prog_mode.m"
        }
#line 666 "prog_mode.m"
      }
#line 664 "prog_mode.m"
  }
#line 128 "prog_mode.m"
}

#line 126 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
#line 126 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_4,
#line 126 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_5,
#line 126 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_6)
#line 126 "prog_mode.m"
{
#line 656 "prog_mode.m"
  {
#line 656 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 656 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
#line 657 "prog_mode.m"
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
#line 660 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_9;
#line 660 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_10;
#line 658 "prog_mode.m"
    MR_Word parse_tree__prog_mode___TypeCtor_11;

#line 658 "prog_mode.m"
    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 658 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 658 "prog_mode.m"
      {
#line 658 "prog_mode.m"
        parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
#line 658 "prog_mode.m"
        parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
#line 658 "prog_mode.m"
        parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
#line 659 "prog_mode.m"
        {
#line 659 "prog_mode.m"
          MR_Word base;
#line 659 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_mode.m"
          *parse_tree__prog_mode__ConsId_6 = base;
#line 659 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 659 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
#line 659 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
#line 659 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
#line 659 "prog_mode.m"
        }
#line 658 "prog_mode.m"
      }
#line 658 "prog_mode.m"
    else
#line 661 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
#line 656 "prog_mode.m"
  }
#line 126 "prog_mode.m"
}

#line 120 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__get_arg_insts_det_4_p_0(
#line 120 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_5,
#line 120 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 120 "prog_mode.m"
  MR_Integer parse_tree__prog_mode__Arity_7,
#line 120 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
#line 120 "prog_mode.m"
{
#line 703 "prog_mode.m"
  {
#line 703 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 703 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInstsPrime_9;

#line 701 "prog_mode.m"
    {
#line 701 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(parse_tree__prog_mode__Inst_5, parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__Arity_7, &parse_tree__prog_mode__ArgInstsPrime_9);
    }
#line 703 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 702 "prog_mode.m"
      *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInstsPrime_9;
#line 703 "prog_mode.m"
    else
#line 704 "prog_mode.m"
      {
#line 704 "prog_mode.m"
        {
#line 704 "prog_mode.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts_det\'/4", (MR_String) "get_arg_insts failed");
#line 704 "prog_mode.m"
          return;
        }
#line 704 "prog_mode.m"
      }
#line 703 "prog_mode.m"
  }
#line 120 "prog_mode.m"
}

#line 115 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_4_p_0(
#line 115 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_5,
#line 115 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 115 "prog_mode.m"
  MR_Integer parse_tree__prog_mode__Arity_7,
#line 115 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
#line 115 "prog_mode.m"
{
#line 677 "prog_mode.m"
  {
#line 677 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 677 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 677 "prog_mode.m"
      {
#line 678 "prog_mode.m"
        {
#line 678 "prog_mode.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
        }
#line 677 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 677 "prog_mode.m"
      }
#line 677 "prog_mode.m"
    else
#line 677 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 2))))
#line 696 "prog_mode.m"
        {
#line 696 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_17_17;
#line 696 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
#line 696 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

#line 697 "prog_mode.m"
          {
#line 697 "prog_mode.m"
            parse_tree__prog_mode__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_24));
#line 697 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "prog_mode.m"
          }
#line 697 "prog_mode.m"
          {
#line 697 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_17_17)), parse_tree__prog_mode__ArgInsts_8);
          }
#line 696 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 696 "prog_mode.m"
        }
#line 677 "prog_mode.m"
      else
#line 677 "prog_mode.m"
        if ((((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 1))))))
#line 693 "prog_mode.m"
          {
#line 694 "prog_mode.m"
            {
#line 694 "prog_mode.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
            }
#line 693 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 693 "prog_mode.m"
          }
#line 677 "prog_mode.m"
        else
#line 677 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 683 "prog_mode.m"
            {
#line 683 "prog_mode.m"
              MR_Word parse_tree__prog_mode__List_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
#line 683 "prog_mode.m"
              MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 683 "prog_mode.m"
              MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
#line 686 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_14;

#line 684 "prog_mode.m"
              {
#line 684 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__List_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
              }
#line 686 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 685 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
#line 686 "prog_mode.m"
              else
#line 688 "prog_mode.m"
                {
#line 688 "prog_mode.m"
                  {
#line 688 "prog_mode.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
#line 688 "prog_mode.m"
                }
#line 683 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 683 "prog_mode.m"
            }
#line 677 "prog_mode.m"
          else
#line 677 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 680 "prog_mode.m"
              {
#line 680 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 680 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 680 "prog_mode.m"
                MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

#line 681 "prog_mode.m"
                {
#line 681 "prog_mode.m"
                  parse_tree__prog_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
#line 681 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "prog_mode.m"
                }
#line 681 "prog_mode.m"
                {
#line 681 "prog_mode.m"
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_21_21)), parse_tree__prog_mode__ArgInsts_8);
                }
#line 680 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 680 "prog_mode.m"
              }
#line 677 "prog_mode.m"
            else
#line 677 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_FALSE;
#line 677 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 677 "prog_mode.m"
  }
#line 115 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 581 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 581 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 581 "prog_mode.m"
{
#line 581 "prog_mode.m"
  {
#line 581 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 581 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12);
#line 581 "prog_mode.m"
    {
#line 581 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 581 "prog_mode.m"
      return;
    }
#line 581 "prog_mode.m"
  }
#line 581 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 590 "prog_mode.m"
    {
#line 590 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
#line 590 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 590 "prog_mode.m"
      {
#line 590 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 590 "prog_mode.m"
        return;
      }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 588 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13);
#line 588 "prog_mode.m"
    {
#line 588 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
#line 588 "prog_mode.m"
      return;
    }
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
#line 584 "prog_mode.m"
      {
#line 584 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 584 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 583 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_74_74;
#line 583 "prog_mode.m"
        {
#line 583 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 585 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_73_73;
#line 585 "prog_mode.m"
        {
#line 585 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 584 "prog_mode.m"
      }
#line 584 "prog_mode.m"
    else
#line 587 "prog_mode.m"
      {
#line 587 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 587 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 588 "prog_mode.m"
        {
#line 588 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5, parse_tree__prog_mode__env_ptr);
        }
#line 587 "prog_mode.m"
      }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 577 "prog_mode.m"
      {
#line 577 "prog_mode.m"
        {
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_38;
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_9;
#line 576 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_11;

#line 578 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
#line 578 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 578 "prog_mode.m"
            {
#line 578 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
#line 577 "prog_mode.m"
              {
#line 579 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
#line 7205 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 581 "prog_mode.m"
                {
#line 581 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_38, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
                }
#line 577 "prog_mode.m"
              }
#line 578 "prog_mode.m"
            }
#line 577 "prog_mode.m"
        }
#line 577 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 577 "prog_mode.m"
      }
#line 577 "prog_mode.m"
    else
#line 577 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 604 "prog_mode.m"
{
#line 604 "prog_mode.m"
  {
#line 604 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 604 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
#line 604 "prog_mode.m"
  }
#line 604 "prog_mode.m"
}

#line 605 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 605 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 605 "prog_mode.m"
{
#line 605 "prog_mode.m"
  {
#line 605 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 605 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37);
#line 605 "prog_mode.m"
    {
#line 605 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
#line 605 "prog_mode.m"
      return;
    }
#line 605 "prog_mode.m"
  }
#line 605 "prog_mode.m"
}

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 604 "prog_mode.m"
{
#line 604 "prog_mode.m"
  {
#line 604 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 606 "prog_mode.m"
    {
#line 606 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37);
    }
#line 606 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 606 "prog_mode.m"
      {
#line 606 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(parse_tree__prog_mode__env_ptr);
#line 606 "prog_mode.m"
        return;
      }
#line 604 "prog_mode.m"
  }
#line 604 "prog_mode.m"
}

#line 604 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 604 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 604 "prog_mode.m"
{
#line 604 "prog_mode.m"
  {
#line 604 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 604 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
#line 604 "prog_mode.m"
      {
#line 604 "prog_mode.m"
        {
#line 604 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 604 "prog_mode.m"
          MR_Word parse_tree__prog_mode___SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 605 "prog_mode.m"
          {
#line 605 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37, parse_tree__prog_mode__ArgInsts_36, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
          }
#line 604 "prog_mode.m"
        }
#line 604 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 604 "prog_mode.m"
      }
#line 604 "prog_mode.m"
    else
#line 604 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 604 "prog_mode.m"
  }
#line 604 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 592 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 596 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 596 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 596 "prog_mode.m"
{
#line 596 "prog_mode.m"
  {
#line 596 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 596 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24);
#line 596 "prog_mode.m"
    {
#line 596 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
#line 596 "prog_mode.m"
      return;
    }
#line 596 "prog_mode.m"
  }
#line 596 "prog_mode.m"
}

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 598 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 598 "prog_mode.m"
{
#line 598 "prog_mode.m"
  {
#line 598 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 598 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27);
#line 598 "prog_mode.m"
    {
#line 598 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
#line 598 "prog_mode.m"
      return;
    }
#line 598 "prog_mode.m"
  }
#line 598 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 599 "prog_mode.m"
    {
#line 599 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27);
    }
#line 599 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 599 "prog_mode.m"
      {
#line 599 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
#line 599 "prog_mode.m"
        return;
      }
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 592 "prog_mode.m"
    {
#line 597 "prog_mode.m"
      MR_Word parse_tree__prog_mode___ConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 0)));

#line 597 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 1)));
#line 7471 "parse_tree.prog_mode.c"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 598 "prog_mode.m"
      {
#line 598 "prog_mode.m"
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
#line 592 "prog_mode.m"
    }
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 592 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
#line 592 "prog_mode.m"
      {
#line 592 "prog_mode.m"
        {
#line 592 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_40_40;
#line 592 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 592 "prog_mode.m"
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
#line 592 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 594 "prog_mode.m"
          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 594 "prog_mode.m"
          else
#line 594 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
#line 594 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 594 "prog_mode.m"
            else
#line 594 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 592 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 592 "prog_mode.m"
            {
#line 7530 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 596 "prog_mode.m"
              {
#line 596 "prog_mode.m"
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_40_40, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
              }
#line 592 "prog_mode.m"
            }
#line 592 "prog_mode.m"
        }
#line 592 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 592 "prog_mode.m"
      }
#line 592 "prog_mode.m"
    else
#line 592 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 581 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 581 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 581 "prog_mode.m"
{
#line 581 "prog_mode.m"
  {
#line 581 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 581 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65);
#line 581 "prog_mode.m"
    {
#line 581 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
#line 581 "prog_mode.m"
      return;
    }
#line 581 "prog_mode.m"
  }
#line 581 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 590 "prog_mode.m"
    {
#line 590 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66);
    }
#line 590 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 590 "prog_mode.m"
      {
#line 590 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
#line 590 "prog_mode.m"
        return;
      }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 588 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66);
#line 588 "prog_mode.m"
    {
#line 588 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
#line 588 "prog_mode.m"
      return;
    }
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65)) == (MR_mktag((MR_Integer) 0))))
#line 584 "prog_mode.m"
      {
#line 584 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 584 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 583 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_76_76;
#line 583 "prog_mode.m"
        {
#line 583 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 585 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_75_75;
#line 585 "prog_mode.m"
        {
#line 585 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 584 "prog_mode.m"
      }
#line 584 "prog_mode.m"
    else
#line 587 "prog_mode.m"
      {
#line 587 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 587 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 588 "prog_mode.m"
        {
#line 588 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66, parse_tree__prog_mode__SubInsts_52, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
        }
#line 587 "prog_mode.m"
      }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
#line 577 "prog_mode.m"
      {
#line 577 "prog_mode.m"
        {
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_71;
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_60;
#line 577 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_62;
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_43;
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_44;
#line 579 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_45;

#line 578 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_59)) == (MR_mktag((MR_Integer) 1)));
#line 578 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 578 "prog_mode.m"
            {
#line 578 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_59), (MR_Integer) 1);
#line 577 "prog_mode.m"
              {
#line 579 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 0)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 1)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 2)));
#line 579 "prog_mode.m"
                parse_tree__prog_mode___Detism_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 3)));
#line 7767 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 581 "prog_mode.m"
                {
#line 581 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_71, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65, parse_tree__prog_mode__Modes_62, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
                }
#line 577 "prog_mode.m"
              }
#line 578 "prog_mode.m"
            }
#line 577 "prog_mode.m"
        }
#line 577 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 577 "prog_mode.m"
      }
#line 577 "prog_mode.m"
    else
#line 577 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 107 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
#line 107 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_2)
#line 107 "prog_mode.m"
{
#line 107 "prog_mode.m"
  {
#line 107 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 107 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = parse_tree__prog_mode__Inst_2;
#line 572 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 2))))
#line 577 "prog_mode.m"
      {
#line 577 "prog_mode.m"
        {
#line 577 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(&parse_tree__prog_mode__env);
        }
#line 577 "prog_mode.m"
      }
#line 572 "prog_mode.m"
    else
#line 572 "prog_mode.m"
      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 604 "prog_mode.m"
        {
#line 604 "prog_mode.m"
          {
#line 604 "prog_mode.m"
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
#line 604 "prog_mode.m"
        }
#line 572 "prog_mode.m"
      else
#line 572 "prog_mode.m"
        if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 592 "prog_mode.m"
          {
#line 592 "prog_mode.m"
            {
#line 592 "prog_mode.m"
              parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
            }
#line 592 "prog_mode.m"
          }
#line 572 "prog_mode.m"
        else
#line 572 "prog_mode.m"
          if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 601 "prog_mode.m"
            {
#line 601 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 602 "prog_mode.m"
              {
#line 602 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_28);
              }
#line 601 "prog_mode.m"
            }
#line 572 "prog_mode.m"
          else
#line 572 "prog_mode.m"
            if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 577 "prog_mode.m"
              {
#line 577 "prog_mode.m"
                {
#line 577 "prog_mode.m"
                  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
                }
#line 577 "prog_mode.m"
              }
#line 572 "prog_mode.m"
            else
#line 572 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 573 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 572 "prog_mode.m"
              else
#line 572 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 572 "prog_mode.m"
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 107 "prog_mode.m"
  }
#line 107 "prog_mode.m"
}

#line 441 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 441 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 441 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 441 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 441 "prog_mode.m"
{
#line 441 "prog_mode.m"
  {
#line 441 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 441 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 441 "prog_mode.m"
    {
#line 441 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 441 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 441 "prog_mode.m"
  }
#line 441 "prog_mode.m"
}

#line 101 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(
#line 101 "prog_mode.m"
  MR_Word parse_tree__prog_mode__VarSet_6,
#line 101 "prog_mode.m"
  MR_Word parse_tree__prog_mode__NewVarSet_7,
#line 101 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__MergedVarSet_8,
#line 101 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_9,
#line 101 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_10)
#line 101 "prog_mode.m"
{
#line 439 "prog_mode.m"
  {
#line 439 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 439 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_16_16;
#line 439 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Renaming_11;
#line 439 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 440 "prog_mode.m"
    {
#line 440 "prog_mode.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_6, parse_tree__prog_mode__NewVarSet_7, parse_tree__prog_mode__MergedVarSet_8, &parse_tree__prog_mode__Renaming_11);
    }
#line 441 "prog_mode.m"
    {
#line 441 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 441 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
#line 441 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 441 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_11));
#line 441 "prog_mode.m"
    }
#line 7965 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 441 "prog_mode.m"
    {
#line 441 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_9, parse_tree__prog_mode__Modes_10);
#line 441 "prog_mode.m"
      return;
    }
#line 439 "prog_mode.m"
  }
#line 101 "prog_mode.m"
}

#line 98 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(
#line 98 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 98 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_5,
#line 98 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_6)
#line 98 "prog_mode.m"
{
#line 425 "prog_mode.m"
  {
#line 425 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 423 "prog_mode.m"
    {
#line 423 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 425 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 424 "prog_mode.m"
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
#line 425 "prog_mode.m"
    else
#line 426 "prog_mode.m"
      {
#line 426 "prog_mode.m"
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
#line 426 "prog_mode.m"
        return;
      }
#line 425 "prog_mode.m"
  }
#line 98 "prog_mode.m"
}

#line 92 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
#line 92 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 92 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 92 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 92 "prog_mode.m"
{
#line 317 "prog_mode.m"
  {
#line 317 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 317 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 324 "prog_mode.m"
      {
#line 324 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 324 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 324 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_36;

#line 325 "prog_mode.m"
        {
#line 325 "prog_mode.m"
          parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_35, &parse_tree__prog_mode__HOInstInfo_36);
        }
#line 326 "prog_mode.m"
        {
#line 326 "prog_mode.m"
          MR_Word base;
#line 326 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 326 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_34));
#line 326 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_36));
#line 326 "prog_mode.m"
        }
#line 324 "prog_mode.m"
      }
#line 317 "prog_mode.m"
    else
#line 317 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 371 "prog_mode.m"
        {
#line 371 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 371 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 371 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_29;

#line 372 "prog_mode.m"
          {
#line 372 "prog_mode.m"
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_28, &parse_tree__prog_mode__ArgInsts_29);
          }
#line 373 "prog_mode.m"
          {
#line 373 "prog_mode.m"
            MR_Word base;
#line 373 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 373 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 373 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_27));
#line 373 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_29));
#line 373 "prog_mode.m"
          }
#line 371 "prog_mode.m"
        }
#line 317 "prog_mode.m"
      else
#line 317 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 328 "prog_mode.m"
          {
#line 328 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 328 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 328 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 333 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 332 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 333 "prog_mode.m"
            else
#line 336 "prog_mode.m"
              {
#line 336 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_18;

#line 337 "prog_mode.m"
                {
#line 337 "prog_mode.m"
                  parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_18);
                }
#line 339 "prog_mode.m"
                {
#line 339 "prog_mode.m"
                  MR_Word base;
#line 339 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 339 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 339 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 339 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_18));
#line 339 "prog_mode.m"
                }
#line 336 "prog_mode.m"
              }
#line 328 "prog_mode.m"
          }
#line 317 "prog_mode.m"
        else
#line 317 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 349 "prog_mode.m"
            {
#line 349 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 349 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 349 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_38;
#line 352 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_23;
#line 350 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv0_Var0_23;
#line 359 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_37;
#line 355 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_37;

#line 350 "prog_mode.m"
              {
#line 350 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_21, &parse_tree__prog_mode__conv0_Var0_23);
              }
#line 350 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 350 "prog_mode.m"
                {
#line 350 "prog_mode.m"
                  parse_tree__prog_mode__Var0_23 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_23);
#line 350 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 350 "prog_mode.m"
                }
#line 352 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 351 "prog_mode.m"
                parse_tree__prog_mode__Var_38 = parse_tree__prog_mode__Var0_23;
#line 352 "prog_mode.m"
              else
#line 353 "prog_mode.m"
                {
#line 353 "prog_mode.m"
                  {
#line 353 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
#line 353 "prog_mode.m"
                    return;
                  }
#line 353 "prog_mode.m"
                }
#line 355 "prog_mode.m"
              {
#line 355 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_38)), &parse_tree__prog_mode__conv1_ReplacementInst_37);
              }
#line 355 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 355 "prog_mode.m"
                {
#line 355 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_37 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_37);
#line 355 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 355 "prog_mode.m"
                }
#line 359 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 356 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_37;
#line 359 "prog_mode.m"
              else
#line 360 "prog_mode.m"
                {
#line 360 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_24;

#line 360 "prog_mode.m"
                  {
#line 360 "prog_mode.m"
                    parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_22, &parse_tree__prog_mode__SubInst_24);
                  }
#line 361 "prog_mode.m"
                  {
#line 361 "prog_mode.m"
                    MR_Word base;
#line 361 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 361 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 361 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_21));
#line 361 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_24));
#line 361 "prog_mode.m"
                  }
#line 360 "prog_mode.m"
                }
#line 349 "prog_mode.m"
            }
#line 317 "prog_mode.m"
          else
#line 317 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 364 "prog_mode.m"
              {
#line 364 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 367 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_26;

#line 365 "prog_mode.m"
                {
#line 365 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_25, &parse_tree__prog_mode__InstName_26);
                }
#line 367 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 366 "prog_mode.m"
                  {
#line 366 "prog_mode.m"
                    MR_Word base;
#line 366 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 366 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 366 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_26));
#line 366 "prog_mode.m"
                  }
#line 367 "prog_mode.m"
                else
#line 368 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 364 "prog_mode.m"
              }
#line 317 "prog_mode.m"
            else
#line 317 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 318 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 317 "prog_mode.m"
              else
#line 317 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 320 "prog_mode.m"
                  {
#line 320 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 320 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 320 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_10;

#line 321 "prog_mode.m"
                    {
#line 321 "prog_mode.m"
                      parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_9, &parse_tree__prog_mode__HOInstInfo_10);
                    }
#line 322 "prog_mode.m"
                    {
#line 322 "prog_mode.m"
                      MR_Word base;
#line 322 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 322 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 322 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 322 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
#line 322 "prog_mode.m"
                    }
#line 320 "prog_mode.m"
                  }
#line 317 "prog_mode.m"
                else
#line 342 "prog_mode.m"
                  {
#line 342 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 345 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ReplacementInst_20;
#line 343 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv2_ReplacementInst_20;

#line 343 "prog_mode.m"
                    {
#line 343 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_19)), &parse_tree__prog_mode__conv2_ReplacementInst_20);
                    }
#line 343 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 343 "prog_mode.m"
                      {
#line 343 "prog_mode.m"
                        parse_tree__prog_mode__ReplacementInst_20 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_20);
#line 343 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 343 "prog_mode.m"
                      }
#line 345 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 344 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_20;
#line 345 "prog_mode.m"
                    else
#line 346 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 342 "prog_mode.m"
                  }
#line 317 "prog_mode.m"
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
#line 300 "prog_mode.m"
  {
#line 300 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 298 "prog_mode.m"
    {
#line 298 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 300 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 299 "prog_mode.m"
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
#line 300 "prog_mode.m"
    else
#line 301 "prog_mode.m"
      {
#line 301 "prog_mode.m"
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
#line 301 "prog_mode.m"
        return;
      }
#line 300 "prog_mode.m"
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
#line 276 "prog_mode.m"
  {
#line 276 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 276 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_mode.m"
      *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
#line 276 "prog_mode.m"
    else
#line 279 "prog_mode.m"
      {
#line 279 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 280 "prog_mode.m"
        {
#line 280 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
        }
#line 281 "prog_mode.m"
        {
#line 281 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
#line 281 "prog_mode.m"
          return;
        }
#line 279 "prog_mode.m"
      }
#line 276 "prog_mode.m"
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
#line 236 "prog_mode.m"
  {
#line 236 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_7_7;
#line 234 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_8_8;

#line 234 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
      {
#line 234 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 234 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
          {
#line 234 "prog_mode.m"
            parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 234 "prog_mode.m"
            parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 234 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_7_7 == (MR_Integer) 0);
#line 234 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_mode.m"
          }
#line 234 "prog_mode.m"
      }
#line 236 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 235 "prog_mode.m"
      {
#line 235 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
#line 235 "prog_mode.m"
        MR_Word parse_tree__prog_mode__QualifiedName_67;

#line 214 "prog_mode.m"
        {
#line 214 "prog_mode.m"
          parse_tree__prog_mode__MercuryBuiltin_66 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 215 "prog_mode.m"
        {
#line 215 "prog_mode.m"
          parse_tree__prog_mode__QualifiedName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_66));
#line 215 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 1) = ((MR_Box) ((MR_String) "out"));
#line 215 "prog_mode.m"
        }
#line 216 "prog_mode.m"
        {
#line 216 "prog_mode.m"
          MR_Word base;
#line 216 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 216 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_67));
#line 216 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
        }
#line 235 "prog_mode.m"
      }
#line 236 "prog_mode.m"
    else
#line 238 "prog_mode.m"
      {
#line 236 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_11_11;
#line 236 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_12_12;

#line 236 "prog_mode.m"
        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 236 "prog_mode.m"
                parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 236 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_11_11 == (MR_Integer) 1);
#line 236 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_mode.m"
              }
#line 236 "prog_mode.m"
          }
#line 238 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 237 "prog_mode.m"
          {
#line 237 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
#line 237 "prog_mode.m"
            MR_Word parse_tree__prog_mode__QualifiedName_74;

#line 214 "prog_mode.m"
            {
#line 214 "prog_mode.m"
              parse_tree__prog_mode__MercuryBuiltin_73 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 215 "prog_mode.m"
            {
#line 215 "prog_mode.m"
              parse_tree__prog_mode__QualifiedName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_73));
#line 215 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 1) = ((MR_Box) ((MR_String) "uo"));
#line 215 "prog_mode.m"
            }
#line 216 "prog_mode.m"
            {
#line 216 "prog_mode.m"
              MR_Word base;
#line 216 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
              *parse_tree__prog_mode__Mode_6 = base;
#line 216 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_74));
#line 216 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
            }
#line 237 "prog_mode.m"
          }
#line 238 "prog_mode.m"
        else
#line 240 "prog_mode.m"
          {
#line 238 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_15_15;
#line 238 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_16_16;

#line 238 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
              {
#line 238 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 238 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                  {
#line 238 "prog_mode.m"
                    parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 238 "prog_mode.m"
                    parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 238 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_15_15 == (MR_Integer) 2);
#line 238 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_mode.m"
                  }
#line 238 "prog_mode.m"
              }
#line 240 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
              {
#line 239 "prog_mode.m"
                MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
#line 239 "prog_mode.m"
                MR_Word parse_tree__prog_mode__QualifiedName_81;

#line 214 "prog_mode.m"
                {
#line 214 "prog_mode.m"
                  parse_tree__prog_mode__MercuryBuiltin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 215 "prog_mode.m"
                {
#line 215 "prog_mode.m"
                  parse_tree__prog_mode__QualifiedName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_80));
#line 215 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 1) = ((MR_Box) ((MR_String) "muo"));
#line 215 "prog_mode.m"
                }
#line 216 "prog_mode.m"
                {
#line 216 "prog_mode.m"
                  MR_Word base;
#line 216 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
                  *parse_tree__prog_mode__Mode_6 = base;
#line 216 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_81));
#line 216 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
                }
#line 239 "prog_mode.m"
              }
#line 240 "prog_mode.m"
            else
#line 242 "prog_mode.m"
              {
#line 240 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_19_19;
#line 240 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_20_20;
#line 240 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 240 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_22_22;

#line 240 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 240 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                  {
#line 240 "prog_mode.m"
                    parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 240 "prog_mode.m"
                    parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 240 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_19_19 == (MR_Integer) 0);
#line 240 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                      {
#line 240 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                          {
#line 240 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 240 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                              {
#line 240 "prog_mode.m"
                                parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 240 "prog_mode.m"
                                parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 240 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_21_21 == (MR_Integer) 0);
#line 240 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "prog_mode.m"
                              }
#line 240 "prog_mode.m"
                          }
#line 240 "prog_mode.m"
                      }
#line 240 "prog_mode.m"
                  }
#line 242 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                  {
#line 241 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
#line 241 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_88;

#line 214 "prog_mode.m"
                    {
#line 214 "prog_mode.m"
                      parse_tree__prog_mode__MercuryBuiltin_87 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 215 "prog_mode.m"
                    {
#line 215 "prog_mode.m"
                      parse_tree__prog_mode__QualifiedName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_87));
#line 215 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "in"));
#line 215 "prog_mode.m"
                    }
#line 216 "prog_mode.m"
                    {
#line 216 "prog_mode.m"
                      MR_Word base;
#line 216 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
                      *parse_tree__prog_mode__Mode_6 = base;
#line 216 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_88));
#line 216 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
                    }
#line 241 "prog_mode.m"
                  }
#line 242 "prog_mode.m"
                else
#line 244 "prog_mode.m"
                  {
#line 242 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_25_25;
#line 242 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_26_26;
#line 242 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27;
#line 242 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_28_28;

#line 242 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 242 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                      {
#line 242 "prog_mode.m"
                        parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 242 "prog_mode.m"
                        parse_tree__prog_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 242 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_25_25 == (MR_Integer) 1);
#line 242 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                          {
#line 242 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                              {
#line 242 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 242 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                                  {
#line 242 "prog_mode.m"
                                    parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 242 "prog_mode.m"
                                    parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 242 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_27_27 == (MR_Integer) 3);
#line 242 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_mode.m"
                                  }
#line 242 "prog_mode.m"
                              }
#line 242 "prog_mode.m"
                          }
#line 242 "prog_mode.m"
                      }
#line 244 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                      {
#line 243 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
#line 243 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__QualifiedName_95;

#line 214 "prog_mode.m"
                        {
#line 214 "prog_mode.m"
                          parse_tree__prog_mode__MercuryBuiltin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 215 "prog_mode.m"
                        {
#line 215 "prog_mode.m"
                          parse_tree__prog_mode__QualifiedName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_94));
#line 215 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "di"));
#line 215 "prog_mode.m"
                        }
#line 216 "prog_mode.m"
                        {
#line 216 "prog_mode.m"
                          MR_Word base;
#line 216 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
                          *parse_tree__prog_mode__Mode_6 = base;
#line 216 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_95));
#line 216 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
                        }
#line 243 "prog_mode.m"
                      }
#line 244 "prog_mode.m"
                    else
#line 247 "prog_mode.m"
                      {
#line 244 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_31_31;
#line 244 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 244 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_33_33;
#line 244 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_34_34;

#line 244 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 244 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                          {
#line 244 "prog_mode.m"
                            parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 244 "prog_mode.m"
                            parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 244 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_31_31 == (MR_Integer) 2);
#line 244 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                              {
#line 244 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                                  {
#line 245 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 245 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 245 "prog_mode.m"
                                      {
#line 245 "prog_mode.m"
                                        parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 245 "prog_mode.m"
                                        parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 245 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_33_33 == (MR_Integer) 4);
#line 244 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 245 "prog_mode.m"
                                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_mode.m"
                                      }
#line 244 "prog_mode.m"
                                  }
#line 244 "prog_mode.m"
                              }
#line 244 "prog_mode.m"
                          }
#line 247 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 246 "prog_mode.m"
                          {
#line 246 "prog_mode.m"
                            {
#line 246 "prog_mode.m"
                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 246 "prog_mode.m"
                              return;
                            }
#line 246 "prog_mode.m"
                          }
#line 247 "prog_mode.m"
                        else
#line 249 "prog_mode.m"
                          {
#line 247 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_37_37;
#line 247 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_38_38;
#line 247 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_39_39;
#line 247 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_40_40;

#line 247 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 247 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                              {
#line 247 "prog_mode.m"
                                parse_tree__prog_mode__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 247 "prog_mode.m"
                                parse_tree__prog_mode__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 247 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_37_37 == (MR_Integer) 1);
#line 247 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                                  {
#line 247 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                                      {
#line 247 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 247 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                                          {
#line 247 "prog_mode.m"
                                            parse_tree__prog_mode__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 247 "prog_mode.m"
                                            parse_tree__prog_mode__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 247 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_39_39 == (MR_Integer) 1);
#line 247 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_mode.m"
                                          }
#line 247 "prog_mode.m"
                                      }
#line 247 "prog_mode.m"
                                  }
#line 247 "prog_mode.m"
                              }
#line 249 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 248 "prog_mode.m"
                              {
#line 248 "prog_mode.m"
                                {
#line 248 "prog_mode.m"
                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 248 "prog_mode.m"
                                  return;
                                }
#line 248 "prog_mode.m"
                              }
#line 249 "prog_mode.m"
                            else
#line 252 "prog_mode.m"
                              {
#line 249 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_43_43;
#line 249 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_44_44;
#line 249 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_45_45;
#line 249 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_46_46;

#line 249 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 249 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
                                  {
#line 249 "prog_mode.m"
                                    parse_tree__prog_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 249 "prog_mode.m"
                                    parse_tree__prog_mode__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 249 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_43_43 == (MR_Integer) 2);
#line 249 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
                                      {
#line 249 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
                                          {
#line 250 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 250 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
                                              {
#line 250 "prog_mode.m"
                                                parse_tree__prog_mode__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 250 "prog_mode.m"
                                                parse_tree__prog_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 250 "prog_mode.m"
                                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_45_45 == (MR_Integer) 2);
#line 249 "prog_mode.m"
                                                if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
                                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_mode.m"
                                              }
#line 249 "prog_mode.m"
                                          }
#line 249 "prog_mode.m"
                                      }
#line 249 "prog_mode.m"
                                  }
#line 252 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 251 "prog_mode.m"
                                  {
#line 251 "prog_mode.m"
                                    {
#line 251 "prog_mode.m"
                                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 251 "prog_mode.m"
                                      return;
                                    }
#line 251 "prog_mode.m"
                                  }
#line 252 "prog_mode.m"
                                else
#line 254 "prog_mode.m"
                                  {
#line 252 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 253 "prog_mode.m"
                                      {
#line 253 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_50_50;

#line 253 "prog_mode.m"
                                        {
#line 253 "prog_mode.m"
                                          parse_tree__prog_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 253 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_mode.m"
                                        }
#line 253 "prog_mode.m"
                                        {
#line 253 "prog_mode.m"
                                          parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "out", parse_tree__prog_mode__V_50_50, parse_tree__prog_mode__Mode_6);
#line 253 "prog_mode.m"
                                          return;
                                        }
#line 253 "prog_mode.m"
                                      }
#line 254 "prog_mode.m"
                                    else
#line 256 "prog_mode.m"
                                      {
#line 254 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_52_52;
#line 254 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_53_53;

#line 254 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 254 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 254 "prog_mode.m"
                                          {
#line 254 "prog_mode.m"
                                            parse_tree__prog_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 254 "prog_mode.m"
                                            parse_tree__prog_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 254 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_52_52 == (MR_Integer) 3);
#line 254 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 254 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_mode.m"
                                          }
#line 256 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 255 "prog_mode.m"
                                          {
#line 255 "prog_mode.m"
                                            MR_Word parse_tree__prog_mode__V_55_55;

#line 255 "prog_mode.m"
                                            {
#line 255 "prog_mode.m"
                                              parse_tree__prog_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 255 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_mode.m"
                                            }
#line 255 "prog_mode.m"
                                            {
#line 255 "prog_mode.m"
                                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__V_55_55, parse_tree__prog_mode__Mode_6);
#line 255 "prog_mode.m"
                                              return;
                                            }
#line 255 "prog_mode.m"
                                          }
#line 256 "prog_mode.m"
                                        else
#line 258 "prog_mode.m"
                                          {
#line 256 "prog_mode.m"
                                            {
#line 256 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                                            }
#line 258 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 257 "prog_mode.m"
                                              {
#line 257 "prog_mode.m"
                                                MR_Word parse_tree__prog_mode__V_58_58;

#line 257 "prog_mode.m"
                                                {
#line 257 "prog_mode.m"
                                                  parse_tree__prog_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 257 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_mode.m"
                                                }
#line 257 "prog_mode.m"
                                                {
#line 257 "prog_mode.m"
                                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__V_58_58, parse_tree__prog_mode__Mode_6);
#line 257 "prog_mode.m"
                                                  return;
                                                }
#line 257 "prog_mode.m"
                                              }
#line 258 "prog_mode.m"
                                            else
#line 259 "prog_mode.m"
                                              {
#line 259 "prog_mode.m"
                                                MR_Word base;
#line 259 "prog_mode.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 259 "prog_mode.m"
                                                *parse_tree__prog_mode__Mode_6 = base;
#line 259 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 259 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 259 "prog_mode.m"
                                              }
#line 258 "prog_mode.m"
                                          }
#line 256 "prog_mode.m"
                                      }
#line 254 "prog_mode.m"
                                  }
#line 252 "prog_mode.m"
                              }
#line 249 "prog_mode.m"
                          }
#line 247 "prog_mode.m"
                      }
#line 244 "prog_mode.m"
                  }
#line 242 "prog_mode.m"
              }
#line 240 "prog_mode.m"
          }
#line 238 "prog_mode.m"
      }
#line 236 "prog_mode.m"
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
#line 220 "prog_mode.m"
  {
#line 220 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 220 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "prog_mode.m"
      if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 220 "prog_mode.m"
      else
#line 220 "prog_mode.m"
        {
#line 221 "prog_mode.m"
          {
#line 221 "prog_mode.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 221 "prog_mode.m"
            return;
          }
#line 220 "prog_mode.m"
        }
#line 220 "prog_mode.m"
    else
#line 220 "prog_mode.m"
      {
#line 220 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 220 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "prog_mode.m"
          {
#line 223 "prog_mode.m"
            {
#line 223 "prog_mode.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 223 "prog_mode.m"
              return;
            }
#line 222 "prog_mode.m"
          }
#line 220 "prog_mode.m"
        else
#line 226 "prog_mode.m"
          {
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Final_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Finals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Mode_20;
#line 226 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_21;

#line 227 "prog_mode.m"
            {
#line 227 "prog_mode.m"
              parse_tree__prog_mode__insts_to_mode_3_p_0(parse_tree__prog_mode__V_23_23, parse_tree__prog_mode__Final_18, &parse_tree__prog_mode__Mode_20);
            }
#line 228 "prog_mode.m"
            {
#line 228 "prog_mode.m"
              parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(parse_tree__prog_mode__V_22_22, parse_tree__prog_mode__Finals_19, &parse_tree__prog_mode__Modes_21);
            }
#line 226 "prog_mode.m"
            {
#line 226 "prog_mode.m"
              MR_Word base;
#line 226 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_mode.m"
              *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 226 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_20));
#line 226 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_21));
#line 226 "prog_mode.m"
            }
#line 226 "prog_mode.m"
          }
#line 220 "prog_mode.m"
      }
#line 220 "prog_mode.m"
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
#line 266 "prog_mode.m"
  {
#line 266 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 266 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "prog_mode.m"
      *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
#line 266 "prog_mode.m"
    else
#line 269 "prog_mode.m"
      {
#line 269 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 270 "prog_mode.m"
        {
#line 270 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
        }
#line 290 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 290 "prog_mode.m"
          {
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_17;
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_18;

#line 291 "prog_mode.m"
            {
#line 291 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_15, &parse_tree__prog_mode__I_17);
            }
#line 292 "prog_mode.m"
            {
#line 292 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_16, &parse_tree__prog_mode__F_18);
            }
#line 290 "prog_mode.m"
            {
#line 290 "prog_mode.m"
              MR_Word base;
#line 290 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_17));
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_18));
#line 290 "prog_mode.m"
            }
#line 290 "prog_mode.m"
          }
#line 290 "prog_mode.m"
        else
#line 294 "prog_mode.m"
          {
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 294 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_22;

#line 295 "prog_mode.m"
            {
#line 295 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_21, &parse_tree__prog_mode__Args_22);
            }
#line 294 "prog_mode.m"
            {
#line 294 "prog_mode.m"
              MR_Word base;
#line 294 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 294 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 294 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_22));
#line 294 "prog_mode.m"
            }
#line 294 "prog_mode.m"
          }
#line 269 "prog_mode.m"
      }
#line 266 "prog_mode.m"
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
#line 213 "prog_mode.m"
  {
#line 213 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 213 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Mode_6;
#line 213 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 213 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 216 "prog_mode.m"
    }
#line 213 "prog_mode.m"
    return parse_tree__prog_mode__Mode_6;
#line 213 "prog_mode.m"
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
#line 213 "prog_mode.m"
  {
#line 213 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 213 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_9;
#line 213 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_10;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_9));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_10));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 216 "prog_mode.m"
    }
#line 213 "prog_mode.m"
  }
#line 52 "prog_mode.m"
}

#line 50 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
#line 50 "prog_mode.m"
{
#line 209 "prog_mode.m"
  {
#line 209 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 209 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[1]);
#line 209 "prog_mode.m"
  }
#line 50 "prog_mode.m"
}

#line 49 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
#line 49 "prog_mode.m"
{
#line 208 "prog_mode.m"
  {
#line 208 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 208 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "prog_mode.m"
  }
#line 49 "prog_mode.m"
}

#line 48 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
#line 48 "prog_mode.m"
{
#line 207 "prog_mode.m"
  {
#line 207 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 207 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 207 "prog_mode.m"
  }
#line 48 "prog_mode.m"
}

#line 46 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
#line 46 "prog_mode.m"
{
#line 205 "prog_mode.m"
  {
#line 205 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 216 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 205 "prog_mode.m"
  }
#line 46 "prog_mode.m"
}

#line 45 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
#line 45 "prog_mode.m"
{
#line 204 "prog_mode.m"
  {
#line 204 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 216 "prog_mode.m"
    }
#line 204 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 204 "prog_mode.m"
  }
#line 45 "prog_mode.m"
}

#line 44 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
#line 44 "prog_mode.m"
{
#line 203 "prog_mode.m"
  {
#line 203 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 203 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 203 "prog_mode.m"
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
#line 203 "prog_mode.m"
  {
#line 203 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 203 "prog_mode.m"
  }
#line 43 "prog_mode.m"
}

#line 42 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
#line 42 "prog_mode.m"
{
#line 202 "prog_mode.m"
  {
#line 202 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 202 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 202 "prog_mode.m"
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
#line 202 "prog_mode.m"
  {
#line 202 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 202 "prog_mode.m"
  }
#line 41 "prog_mode.m"
}

#line 40 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
#line 40 "prog_mode.m"
{
#line 201 "prog_mode.m"
  {
#line 201 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 201 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 201 "prog_mode.m"
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
#line 201 "prog_mode.m"
  {
#line 201 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 201 "prog_mode.m"
  }
#line 39 "prog_mode.m"
}

#line 38 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
#line 38 "prog_mode.m"
{
#line 200 "prog_mode.m"
  {
#line 200 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 200 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 200 "prog_mode.m"
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
#line 200 "prog_mode.m"
  {
#line 200 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 200 "prog_mode.m"
  }
#line 37 "prog_mode.m"
}

#line 36 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
#line 36 "prog_mode.m"
{
#line 199 "prog_mode.m"
  {
#line 199 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 199 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 199 "prog_mode.m"
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
#line 199 "prog_mode.m"
  {
#line 199 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 199 "prog_mode.m"
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
#line 198 "prog_mode.m"
  {
#line 198 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 198 "prog_mode.m"
    {
#line 198 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 198 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_mode.m"
    }
#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 216 "prog_mode.m"
    }
#line 198 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 198 "prog_mode.m"
  }
#line 34 "prog_mode.m"
}

#line 33 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
#line 33 "prog_mode.m"
{
#line 197 "prog_mode.m"
  {
#line 197 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 197 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 197 "prog_mode.m"
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
#line 197 "prog_mode.m"
  {
#line 197 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 197 "prog_mode.m"
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
#line 196 "prog_mode.m"
  {
#line 196 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 196 "prog_mode.m"
    {
#line 196 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 196 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_mode.m"
    }
#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 216 "prog_mode.m"
    }
#line 196 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 196 "prog_mode.m"
  }
#line 31 "prog_mode.m"
}

#line 30 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
#line 30 "prog_mode.m"
{
#line 195 "prog_mode.m"
  {
#line 195 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 195 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 195 "prog_mode.m"
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
#line 195 "prog_mode.m"
  {
#line 195 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 214 "prog_mode.m"
    {
#line 214 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 215 "prog_mode.m"
    {
#line 215 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 215 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 215 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      MR_Word base;
#line 216 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 216 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_mode.m"
    }
#line 195 "prog_mode.m"
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
