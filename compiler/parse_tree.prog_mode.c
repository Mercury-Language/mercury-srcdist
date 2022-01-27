/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 614 "prog_mode.m"
struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
#line 614 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
#line 618 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 618 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 618 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
#line 619 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
#line 614 "prog_mode.m"
};

#line 107 "prog_mode.m"
struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
#line 107 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
#line 568 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 573 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 573 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
#line 573 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
#line 577 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12;
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13;
#line 600 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
#line 600 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37;
#line 601 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37;
#line 588 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
#line 588 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41;
#line 588 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24;
#line 588 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26;
#line 588 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27;
#line 592 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24;
#line 594 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27;
#line 573 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
#line 573 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65;
#line 573 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66;
#line 577 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65;
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66;
#line 107 "prog_mode.m"
};


#line 196 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 199 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 202 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 205 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1039 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0(
#line 1039 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1039 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1039 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48);

#line 921 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0_1(
#line 921 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 921 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 921 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 918 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0(
#line 918 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 918 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 918 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42);

#line 518 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__518__1_2_f_0(
#line 518 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 518 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41);

#line 503 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0_1(
#line 503 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 503 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 503 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 500 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0(
#line 500 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 500 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_44,
#line 500 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_45);

#line 1075 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1075 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1070 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1070 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1039 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1039 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1022 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1022 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1022 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1022 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31);

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1016 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1016 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1016 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1016 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1003 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1003 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1003 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1003 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11);

#line 992 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 992 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 992 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 992 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 986 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 986 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 982 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 982 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 971 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 971 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 971 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 971 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 966 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 966 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 966 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 966 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6);

#line 963 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 963 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 963 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 963 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 958 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 958 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 958 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 958 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6);

#line 918 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 918 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 918 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 918 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 953 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 953 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 886 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 886 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 886 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 886 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 719 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 854 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 854 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 854 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4);

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 810 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 810 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 810 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4);

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 807 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 801 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 801 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 801 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4);

#line 799 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 799 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 799 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 799 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 795 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 795 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 795 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4);

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 721 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 721 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 721 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4);

#line 696 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 696 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 696 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 696 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 619 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 619 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 614 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 614 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2);

#line 545 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 545 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 545 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 545 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 539 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 539 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 539 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 539 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 469 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 469 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 469 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 469 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 518 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 518 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 518 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

#line 500 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 500 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 500 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 500 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 534 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 534 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 534 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 534 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 482 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 482 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 482 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 482 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 454 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 454 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 454 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 454 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 450 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 450 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 450 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 450 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 439 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 439 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 439 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 439 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6);

#line 425 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 425 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 425 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 425 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 407 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 407 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 407 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 407 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 396 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 396 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 396 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 396 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 377 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 377 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 377 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 377 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 300 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 300 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 300 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 300 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 989 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 989 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 986 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 986 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 882 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 882 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 882 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 882 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 719 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 584 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 584 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 601 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 601 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 594 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 594 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 584 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 584 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 437 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 437 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 437 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 437 "prog_mode.m"
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
    ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0_1)),
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



#line 1250 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1258 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1267 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1276 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1020 "prog_mode.m"
{
#line 1020 "prog_mode.m"
  {
#line 1020 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1020 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1020 "prog_mode.m"
    {
#line 1020 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1020 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
      {
#line 1020 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1020 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
      }
#line 1020 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
  }
#line 1020 "prog_mode.m"
}

#line 1039 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0(
#line 1039 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_46,
#line 1039 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_47,
#line 1039 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_48)
#line 1039 "prog_mode.m"
{
#line 1039 "prog_mode.m"
  {
#line 1039 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1039 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 1)));
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_46, (MR_Integer) 0)));
#line 1020 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_HeadVar__3_48;

#line 1020 "prog_mode.m"
    {
#line 1020 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__Insts_51, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_47)), &parse_tree__prog_mode__conv1_HeadVar__3_48);
    }
#line 1020 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
      {
#line 1020 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_48 = ((MR_Word) parse_tree__prog_mode__conv1_HeadVar__3_48);
#line 1020 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
      }
#line 1039 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1039 "prog_mode.m"
  }
#line 1039 "prog_mode.m"
}

#line 921 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0_1(
#line 921 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 921 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 921 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 921 "prog_mode.m"
{
#line 921 "prog_mode.m"
  {
#line 921 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 921 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 921 "prog_mode.m"
    {
#line 921 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 921 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 921 "prog_mode.m"
  }
#line 921 "prog_mode.m"
}

#line 918 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0(
#line 918 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 918 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41,
#line 918 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_42)
#line 918 "prog_mode.m"
{
#line 918 "prog_mode.m"
  {
#line 918 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_43_43;
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 0)));
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_41, (MR_Integer) 1)));
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_58;

#line 921 "prog_mode.m"
    {
#line 921 "prog_mode.m"
      parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 921 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 921 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0_1));
#line 921 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 921 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 921 "prog_mode.m"
    }
#line 1442 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 921 "prog_mode.m"
    {
#line 921 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__Is0_57, &parse_tree__prog_mode__Is_58);
    }
#line 919 "prog_mode.m"
    {
#line 919 "prog_mode.m"
      MR_Word base;
#line 919 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_42 = base;
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_56));
#line 919 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_58));
#line 919 "prog_mode.m"
    }
#line 918 "prog_mode.m"
  }
#line 918 "prog_mode.m"
}

#line 518 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__518__1_2_f_0(
#line 518 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 518 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_41)
#line 518 "prog_mode.m"
{
#line 518 "prog_mode.m"
  {
#line 518 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 518 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__3_42;
#line 518 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Var_33;
#line 519 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeInfo_88_88 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 519 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_Var_33;

#line 519 "prog_mode.m"
    {
#line 519 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__HeadVar__2_41)), &parse_tree__prog_mode__conv0_Var_33);
    }
#line 519 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 519 "prog_mode.m"
      {
#line 519 "prog_mode.m"
        parse_tree__prog_mode__Var_33 = ((MR_Word) parse_tree__prog_mode__conv0_Var_33);
#line 519 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 519 "prog_mode.m"
      }
#line 518 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 518 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_42 = parse_tree__prog_mode__Var_33;
#line 518 "prog_mode.m"
    else
#line 518 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__3_42 = parse_tree__prog_mode__HeadVar__2_41;
#line 518 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__3_42;
#line 518 "prog_mode.m"
  }
#line 518 "prog_mode.m"
}

#line 503 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0_1(
#line 503 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 503 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 503 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 503 "prog_mode.m"
{
#line 503 "prog_mode.m"
  {
#line 503 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 503 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 503 "prog_mode.m"
    {
#line 503 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 503 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 503 "prog_mode.m"
  }
#line 503 "prog_mode.m"
}

#line 500 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0(
#line 500 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 500 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_44,
#line 500 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_45)
#line 500 "prog_mode.m"
{
#line 500 "prog_mode.m"
  {
#line 500 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_84_84;
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_46_46;
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__C_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_44, (MR_Integer) 0)));
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__2_44, (MR_Integer) 1)));
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Is_74;

#line 503 "prog_mode.m"
    {
#line 503 "prog_mode.m"
      parse_tree__prog_mode__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 503 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0_1));
#line 503 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 503 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 503 "prog_mode.m"
    }
#line 1590 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 503 "prog_mode.m"
    {
#line 503 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_84_84, parse_tree__prog_mode__TypeCtorInfo_84_84, parse_tree__prog_mode__V_46_46, parse_tree__prog_mode__Is0_73, &parse_tree__prog_mode__Is_74);
    }
#line 501 "prog_mode.m"
    {
#line 501 "prog_mode.m"
      MR_Word base;
#line 501 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_45 = base;
#line 501 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__C_72));
#line 501 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Is_74));
#line 501 "prog_mode.m"
    }
#line 500 "prog_mode.m"
  }
#line 500 "prog_mode.m"
}

#line 1075 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1075 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1075 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1075 "prog_mode.m"
{
#line 1083 "prog_mode.m"
  {
#line 1083 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1083 "prog_mode.m"
    MR_Word parse_tree__prog_mode__InstVarInst_8;
#line 1079 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_8;

#line 1079 "prog_mode.m"
    {
#line 1079 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), &parse_tree__prog_mode__conv0_InstVarInst_8);
    }
#line 1079 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1079 "prog_mode.m"
      {
#line 1079 "prog_mode.m"
        parse_tree__prog_mode__InstVarInst_8 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_8);
#line 1079 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1079 "prog_mode.m"
      }
#line 1083 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1082 "prog_mode.m"
      {
#line 1082 "prog_mode.m"
        {
#line 1082 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_8, parse_tree__prog_mode__SubInst_5);
        }
#line 1082 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1082 "prog_mode.m"
          {
#line 1082 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1082 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1082 "prog_mode.m"
          }
#line 1082 "prog_mode.m"
      }
#line 1083 "prog_mode.m"
    else
#line 1084 "prog_mode.m"
      {
#line 1084 "prog_mode.m"
        {
#line 1084 "prog_mode.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), ((MR_Box) (parse_tree__prog_mode__SubInst_5)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
        }
#line 1084 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1084 "prog_mode.m"
      }
#line 1083 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1083 "prog_mode.m"
  }
#line 1075 "prog_mode.m"
}

#line 1070 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1070 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1070 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1070 "prog_mode.m"
{
#line 1070 "prog_mode.m"
  {
#line 1070 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1070 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1070 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10;

#line 1070 "prog_mode.m"
    {
#line 1070 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10);
    }
#line 1070 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1070 "prog_mode.m"
      {
#line 1070 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_10));
#line 1070 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1070 "prog_mode.m"
      }
#line 1070 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1070 "prog_mode.m"
  }
#line 1070 "prog_mode.m"
}

#line 1039 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1039 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1039 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1039 "prog_mode.m"
{
#line 1039 "prog_mode.m"
  {
#line 1039 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1039 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1039 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_48;

#line 1039 "prog_mode.m"
    {
#line 1039 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__1039__1_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv2_HeadVar__3_48);
    }
#line 1039 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1039 "prog_mode.m"
      {
#line 1039 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_48));
#line 1039 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1039 "prog_mode.m"
      }
#line 1039 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1039 "prog_mode.m"
  }
#line 1039 "prog_mode.m"
}

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1020 "prog_mode.m"
{
#line 1020 "prog_mode.m"
  {
#line 1020 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1020 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1020 "prog_mode.m"
    {
#line 1020 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1020 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
      {
#line 1020 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1020 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
      }
#line 1020 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
  }
#line 1020 "prog_mode.m"
}

#line 1022 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1022 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1022 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30,
#line 1022 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_31)
#line 1022 "prog_mode.m"
{
#line 1027 "prog_mode.m"
  while (MR_TRUE)
#line 1027 "prog_mode.m"
    {
#line 1027 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 1027 "prog_mode.m"
      {
#line 1027 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 1027 "prog_mode.m"
        if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "prog_mode.m"
          {
#line 1027 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1027 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1027 "prog_mode.m"
          }
#line 1027 "prog_mode.m"
        else
#line 1027 "prog_mode.m"
          if ((parse_tree__prog_mode__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1029 "prog_mode.m"
            {
#line 1029 "prog_mode.m"
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1029 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1029 "prog_mode.m"
            }
#line 1027 "prog_mode.m"
          else
#line 1027 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1048 "prog_mode.m"
              {
#line 1048 "prog_mode.m"
                MR_Word parse_tree__prog_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1047 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)));

#line 1051 "prog_mode.m"
                if ((parse_tree__prog_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "prog_mode.m"
                  {
#line 1050 "prog_mode.m"
                    *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1050 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1050 "prog_mode.m"
                  }
#line 1051 "prog_mode.m"
                else
#line 1052 "prog_mode.m"
                  {
#line 1052 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Modes_20;
#line 1052 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_40_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_17), (MR_Integer) 1);
#line 1052 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 0)));
#line 1052 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_21_21;
#line 1052 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_22_22;

#line 1052 "prog_mode.m"
                    parse_tree__prog_mode__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 1)));
#line 1052 "prog_mode.m"
                    parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 2)));
#line 1052 "prog_mode.m"
                    parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, (MR_Integer) 3)));
#line 1053 "prog_mode.m"
                    {
#line 1053 "prog_mode.m"
                      return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_20, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                    }
#line 1052 "prog_mode.m"
                  }
#line 1048 "prog_mode.m"
              }
#line 1027 "prog_mode.m"
            else
#line 1027 "prog_mode.m"
              if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 1028 "prog_mode.m"
                {
#line 1028 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1028 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1028 "prog_mode.m"
                }
#line 1027 "prog_mode.m"
              else
#line 1027 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1066 "prog_mode.m"
                  {
#line 1066 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ArgInsts_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1066 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1020 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31;

#line 1020 "prog_mode.m"
                    {
#line 1020 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__ArgInsts_54, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
                    }
#line 1020 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
                      {
#line 1020 "prog_mode.m"
                        *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_31);
#line 1020 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
                      }
#line 1066 "prog_mode.m"
                  }
#line 1027 "prog_mode.m"
                else
#line 1027 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1032 "prog_mode.m"
                    {
#line 1032 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1032 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 3)));
#line 1032 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1035 "prog_mode.m"
                      if ((parse_tree__prog_mode__InstResults_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1034 "prog_mode.m"
                        {
#line 1034 "prog_mode.m"
                          *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1034 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1034 "prog_mode.m"
                        }
#line 1035 "prog_mode.m"
                      else
#line 1038 "prog_mode.m"
                        {
#line 1039 "prog_mode.m"
                          MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31;

#line 1039 "prog_mode.m"
                          {
#line 1039 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
                          }
#line 1039 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1039 "prog_mode.m"
                            {
#line 1039 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_31);
#line 1039 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1039 "prog_mode.m"
                            }
#line 1038 "prog_mode.m"
                        }
#line 1032 "prog_mode.m"
                    }
#line 1027 "prog_mode.m"
                  else
#line 1027 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1069 "prog_mode.m"
                      {
#line 1069 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1069 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1069 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 1069 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;
#line 1070 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33;

#line 1070 "prog_mode.m"
                        {
#line 1070 "prog_mode.m"
                          parse_tree__prog_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
#line 1070 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3));
#line 1070 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1070 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_32_32, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
#line 1070 "prog_mode.m"
                        }
#line 1070 "prog_mode.m"
                        {
#line 1070 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__set__fold_4_p_3((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__V_32_32, parse_tree__prog_mode__InstVars_28, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30)), &parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
                        }
#line 1070 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1070 "prog_mode.m"
                          {
#line 1070 "prog_mode.m"
                            parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33 = ((MR_Word) parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_33_33);
#line 1070 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1070 "prog_mode.m"
                          }
#line 1069 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
                          {
#line 1072 "prog_mode.m"
                            /* direct tailcall eliminated */
#line 1072 "prog_mode.m"
                            {
#line 1072 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__Inst__tmp_copy_4 = parse_tree__prog_mode__SubInst_29;
#line 1072 "prog_mode.m"
                              MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_33_33;

#line 1072 "prog_mode.m"
                              parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_30;
#line 1072 "prog_mode.m"
                              parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst__tmp_copy_4;
#line 1072 "prog_mode.m"
                            }
#line 1072 "prog_mode.m"
                            continue;
#line 1072 "prog_mode.m"
                          }
#line 1069 "prog_mode.m"
                      }
#line 1027 "prog_mode.m"
                    else
#line 1027 "prog_mode.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1059 "prog_mode.m"
                        {
#line 1059 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1062 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__ArgInsts_26;
#line 1060 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_25_25;

#line 1060 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_24)) == (MR_mktag((MR_Integer) 0)));
#line 1060 "prog_mode.m"
                          if (parse_tree__prog_mode__succeeded)
#line 1060 "prog_mode.m"
                            {
#line 1060 "prog_mode.m"
                              parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 0)));
#line 1060 "prog_mode.m"
                              parse_tree__prog_mode__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_24, (MR_Integer) 1)));
#line 1061 "prog_mode.m"
                              {
#line 1061 "prog_mode.m"
                                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_26, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                              }
#line 1060 "prog_mode.m"
                            }
#line 1060 "prog_mode.m"
                          else
#line 1061 "prog_mode.m"
                            {
#line 1061 "prog_mode.m"
                              *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1061 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1061 "prog_mode.m"
                            }
#line 1059 "prog_mode.m"
                        }
#line 1027 "prog_mode.m"
                      else
#line 1027 "prog_mode.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1048 "prog_mode.m"
                          {
#line 1048 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__HOInstInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1046 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1051 "prog_mode.m"
                            if ((parse_tree__prog_mode__HOInstInfo_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "prog_mode.m"
                              {
#line 1050 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30;
#line 1050 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1050 "prog_mode.m"
                              }
#line 1051 "prog_mode.m"
                            else
#line 1052 "prog_mode.m"
                              {
#line 1052 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__Modes_66;
#line 1052 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_69_69 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_75), (MR_Integer) 1);
#line 1052 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 0)));
#line 1052 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_63_63;
#line 1052 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_64_64;

#line 1052 "prog_mode.m"
                                parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 1)));
#line 1052 "prog_mode.m"
                                parse_tree__prog_mode__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 2)));
#line 1052 "prog_mode.m"
                                parse_tree__prog_mode__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_69_69, (MR_Integer) 3)));
#line 1053 "prog_mode.m"
                                {
#line 1053 "prog_mode.m"
                                  return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_30, parse_tree__prog_mode__STATE_VARIABLE_Sub_31);
                                }
#line 1052 "prog_mode.m"
                              }
#line 1048 "prog_mode.m"
                          }
#line 1027 "prog_mode.m"
                        else
#line 1056 "prog_mode.m"
                          {
#line 1057 "prog_mode.m"
                            {
#line 1057 "prog_mode.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_var_constraints_are_consistent_in_inst\'/3", (MR_String) "unconstrained inst_var");
                            }
#line 1056 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1056 "prog_mode.m"
                          }
#line 1027 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 1027 "prog_mode.m"
      }
#line 1027 "prog_mode.m"
      break;
#line 1027 "prog_mode.m"
    }
#line 1022 "prog_mode.m"
}

#line 1020 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1020 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1020 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1020 "prog_mode.m"
{
#line 1020 "prog_mode.m"
  {
#line 1020 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1020 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31;

#line 1020 "prog_mode.m"
    {
#line 1020 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31);
    }
#line 1020 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
      {
#line 1020 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_31));
#line 1020 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
      }
#line 1020 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
  }
#line 1020 "prog_mode.m"
}

#line 1016 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1016 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1016 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1016 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1016 "prog_mode.m"
{
#line 1019 "prog_mode.m"
  {
#line 1019 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1020 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1020 "prog_mode.m"
    {
#line 1020 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1020 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
      {
#line 1020 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1020 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
      }
#line 1019 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1019 "prog_mode.m"
  }
#line 1016 "prog_mode.m"
}

#line 1003 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1003 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1003 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1003 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11)
#line 1003 "prog_mode.m"
{
#line 1008 "prog_mode.m"
  {
#line 1008 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1008 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_4)) == (MR_mktag((MR_Integer) 0))))
#line 1008 "prog_mode.m"
      {
#line 1008 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InitialInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));
#line 1008 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1008 "prog_mode.m"
        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13;

#line 1009 "prog_mode.m"
        {
#line 1009 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_6, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13);
        }
#line 1008 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
          {
#line 1010 "prog_mode.m"
            return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_7, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
          }
#line 1008 "prog_mode.m"
      }
#line 1008 "prog_mode.m"
    else
#line 1012 "prog_mode.m"
      {
#line 1012 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1012 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));

#line 1013 "prog_mode.m"
        {
#line 1013 "prog_mode.m"
          return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
        }
#line 1012 "prog_mode.m"
      }
#line 1008 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1008 "prog_mode.m"
  }
#line 1003 "prog_mode.m"
}

#line 992 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 992 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 992 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 992 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 992 "prog_mode.m"
{
#line 997 "prog_mode.m"
  {
#line 997 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 997 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 999 "prog_mode.m"
      {
#line 999 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 1)));
#line 999 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 0)));

#line 1008 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_8)) == (MR_mktag((MR_Integer) 0))))
#line 1008 "prog_mode.m"
          {
#line 1008 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InitialInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));
#line 1008 "prog_mode.m"
            MR_Word parse_tree__prog_mode__FinalInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1008 "prog_mode.m"
            MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21;

#line 1009 "prog_mode.m"
            {
#line 1009 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_16, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21);
            }
#line 1008 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
              {
#line 1010 "prog_mode.m"
                return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_17, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
              }
#line 1008 "prog_mode.m"
          }
#line 1008 "prog_mode.m"
        else
#line 1012 "prog_mode.m"
          {
#line 1012 "prog_mode.m"
            MR_Word parse_tree__prog_mode__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1012 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));

#line 1013 "prog_mode.m"
            {
#line 1013 "prog_mode.m"
              return parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
            }
#line 1012 "prog_mode.m"
          }
#line 999 "prog_mode.m"
      }
#line 997 "prog_mode.m"
    else
#line 997 "prog_mode.m"
      {
#line 997 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 997 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 997 "prog_mode.m"
      }
#line 997 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 997 "prog_mode.m"
  }
#line 992 "prog_mode.m"
}

#line 986 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 986 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 986 "prog_mode.m"
{
#line 986 "prog_mode.m"
  {
#line 986 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 986 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 986 "prog_mode.m"
    {
#line 986 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 986 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 986 "prog_mode.m"
      {
#line 986 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 986 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 986 "prog_mode.m"
      }
#line 986 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
  }
#line 986 "prog_mode.m"
}

#line 982 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 982 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 982 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 982 "prog_mode.m"
{
#line 985 "prog_mode.m"
  {
#line 985 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 986 "prog_mode.m"
    {
#line 986 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__Modes_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 986 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 986 "prog_mode.m"
      {
#line 986 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 986 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 986 "prog_mode.m"
      }
#line 985 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 985 "prog_mode.m"
  }
#line 982 "prog_mode.m"
}

#line 971 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 971 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 971 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 971 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 971 "prog_mode.m"
{
#line 971 "prog_mode.m"
  {
#line 971 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 971 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 971 "prog_mode.m"
    {
#line 971 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 971 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 971 "prog_mode.m"
  }
#line 971 "prog_mode.m"
}

#line 966 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 966 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 966 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 966 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6)
#line 966 "prog_mode.m"
{
#line 973 "prog_mode.m"
  {
#line 973 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
#line 973 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_7;
#line 973 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Args0_8;

#line 970 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 970 "prog_mode.m"
      {
#line 970 "prog_mode.m"
        parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 970 "prog_mode.m"
        parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 971 "prog_mode.m"
        {
#line 971 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 971 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_9;
#line 971 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_10_10;

#line 971 "prog_mode.m"
          {
#line 971 "prog_mode.m"
            parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 971 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 971 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
#line 971 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 971 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 971 "prog_mode.m"
          }
#line 2598 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 971 "prog_mode.m"
          {
#line 971 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
          }
#line 972 "prog_mode.m"
          {
#line 972 "prog_mode.m"
            MR_Word base;
#line 972 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_mode.m"
            *parse_tree__prog_mode__Name_6 = base;
#line 972 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 972 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
#line 972 "prog_mode.m"
          }
#line 971 "prog_mode.m"
        }
#line 970 "prog_mode.m"
      }
#line 970 "prog_mode.m"
    else
#line 974 "prog_mode.m"
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
#line 973 "prog_mode.m"
  }
#line 966 "prog_mode.m"
}

#line 963 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 963 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 963 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 963 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 963 "prog_mode.m"
{
#line 963 "prog_mode.m"
  {
#line 963 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 963 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 963 "prog_mode.m"
    {
#line 963 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 963 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 963 "prog_mode.m"
  }
#line 963 "prog_mode.m"
}

#line 958 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 958 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 958 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 958 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6)
#line 958 "prog_mode.m"
{
#line 961 "prog_mode.m"
  {
#line 961 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes_11;
#line 961 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 963 "prog_mode.m"
    {
#line 963 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 963 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[8]));
#line 963 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
#line 963 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 963 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 963 "prog_mode.m"
    }
#line 2706 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 963 "prog_mode.m"
    {
#line 963 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
#line 964 "prog_mode.m"
    {
#line 964 "prog_mode.m"
      MR_Word base;
#line 964 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "prog_mode.m"
      *parse_tree__prog_mode__PII_6 = base;
#line 964 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
#line 964 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
#line 964 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
#line 964 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
#line 964 "prog_mode.m"
    }
#line 961 "prog_mode.m"
  }
#line 958 "prog_mode.m"
}

#line 918 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 918 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 918 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 918 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 918 "prog_mode.m"
{
#line 918 "prog_mode.m"
  {
#line 918 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 918 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_HeadVar__3_42;

#line 918 "prog_mode.m"
    {
#line 918 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__constrain_inst_vars_in_inst__918__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_HeadVar__3_42);
    }
#line 918 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_HeadVar__3_42));
#line 918 "prog_mode.m"
  }
#line 918 "prog_mode.m"
}

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 953 "prog_mode.m"
    {
#line 953 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 953 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 953 "prog_mode.m"
  }
#line 953 "prog_mode.m"
}

#line 886 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 886 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 886 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 886 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 886 "prog_mode.m"
{
#line 896 "prog_mode.m"
  {
#line 896 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 896 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "prog_mode.m"
      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 896 "prog_mode.m"
    else
#line 896 "prog_mode.m"
      if ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 896 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 896 "prog_mode.m"
      else
#line 896 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 896 "prog_mode.m"
          {
#line 896 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 896 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

#line 896 "prog_mode.m"
            if ((parse_tree__prog_mode__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 896 "prog_mode.m"
            else
#line 904 "prog_mode.m"
              {
#line 904 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_46_46;
#line 904 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_72_72), (MR_Integer) 1);
#line 904 "prog_mode.m"
                MR_Word parse_tree__prog_mode__PredInstInfo_55;

#line 905 "prog_mode.m"
                {
#line 905 "prog_mode.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_54, &parse_tree__prog_mode__PredInstInfo_55);
                }
#line 907 "prog_mode.m"
                parse_tree__prog_mode__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
#line 907 "prog_mode.m"
                {
#line 907 "prog_mode.m"
                  MR_Word base;
#line 907 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 907 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__V_73_73));
#line 907 "prog_mode.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_46_46));
#line 907 "prog_mode.m"
                }
#line 904 "prog_mode.m"
              }
#line 896 "prog_mode.m"
          }
#line 896 "prog_mode.m"
        else
#line 896 "prog_mode.m"
          if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1))))
#line 897 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 896 "prog_mode.m"
          else
#line 896 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 952 "prog_mode.m"
              {
#line 952 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_71_71;
#line 952 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 952 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 952 "prog_mode.m"
                MR_Word parse_tree__prog_mode__SubInsts_35;
#line 952 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_36_36;

#line 953 "prog_mode.m"
                {
#line 953 "prog_mode.m"
                  parse_tree__prog_mode__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 953 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_36_36, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 953 "prog_mode.m"
                }
#line 2910 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 953 "prog_mode.m"
                {
#line 953 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__TypeCtorInfo_71_71, parse_tree__prog_mode__V_36_36, parse_tree__prog_mode__SubInsts0_34, &parse_tree__prog_mode__SubInsts_35);
                }
#line 955 "prog_mode.m"
                {
#line 955 "prog_mode.m"
                  MR_Word base;
#line 955 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 955 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 955 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 955 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 955 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_35));
#line 955 "prog_mode.m"
                }
#line 952 "prog_mode.m"
              }
#line 896 "prog_mode.m"
            else
#line 896 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 909 "prog_mode.m"
                {
#line 909 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 909 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
#line 909 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 914 "prog_mode.m"
                  if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 911 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 914 "prog_mode.m"
                  else
#line 917 "prog_mode.m"
                    {
#line 917 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__TypeCtorInfo_64_64;
#line 917 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__BoundInsts_21;
#line 917 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_40_40;

#line 918 "prog_mode.m"
                      {
#line 918 "prog_mode.m"
                        parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 918 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
#line 918 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 918 "prog_mode.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 918 "prog_mode.m"
                      }
#line 2977 "parse_tree.prog_mode.c"
                      parse_tree__prog_mode__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 918 "prog_mode.m"
                      {
#line 918 "prog_mode.m"
                        mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__TypeCtorInfo_64_64, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_21);
                      }
#line 926 "prog_mode.m"
                      {
#line 926 "prog_mode.m"
                        MR_Word base;
#line 926 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 926 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 926 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_59));
#line 926 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_21));
#line 926 "prog_mode.m"
                      }
#line 917 "prog_mode.m"
                    }
#line 909 "prog_mode.m"
                }
#line 896 "prog_mode.m"
              else
#line 896 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 929 "prog_mode.m"
                  {
#line 929 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 929 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 929 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst1_24;
#line 929 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Vars_27;
#line 929 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInst_28;
#line 934 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubVars_25;
#line 934 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubSubInst_26;

#line 930 "prog_mode.m"
                    {
#line 930 "prog_mode.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_23, &parse_tree__prog_mode__SubInst1_24);
                    }
#line 931 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 931 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 931 "prog_mode.m"
                      {
#line 931 "prog_mode.m"
                        parse_tree__prog_mode__SubVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 1)));
#line 931 "prog_mode.m"
                        parse_tree__prog_mode__SubSubInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_24, (MR_Integer) 2)));
#line 932 "prog_mode.m"
                        {
#line 932 "prog_mode.m"
                          mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_22, parse_tree__prog_mode__SubVars_25, &parse_tree__prog_mode__Vars_27);
                        }
#line 933 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubSubInst_26;
#line 931 "prog_mode.m"
                      }
#line 931 "prog_mode.m"
                    else
#line 935 "prog_mode.m"
                      {
#line 935 "prog_mode.m"
                        parse_tree__prog_mode__Vars_27 = parse_tree__prog_mode__Vars0_22;
#line 936 "prog_mode.m"
                        parse_tree__prog_mode__SubInst_28 = parse_tree__prog_mode__SubInst1_24;
#line 935 "prog_mode.m"
                      }
#line 938 "prog_mode.m"
                    {
#line 938 "prog_mode.m"
                      MR_Word base;
#line 938 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 938 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 938 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_27));
#line 938 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
#line 938 "prog_mode.m"
                    }
#line 929 "prog_mode.m"
                  }
#line 896 "prog_mode.m"
                else
#line 896 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 948 "prog_mode.m"
                    {
#line 948 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 948 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Name_32;

#line 949 "prog_mode.m"
                      {
#line 949 "prog_mode.m"
                        parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_31, &parse_tree__prog_mode__Name_32);
                      }
#line 950 "prog_mode.m"
                      {
#line 950 "prog_mode.m"
                        MR_Word base;
#line 950 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 950 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 950 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_32));
#line 950 "prog_mode.m"
                      }
#line 948 "prog_mode.m"
                    }
#line 896 "prog_mode.m"
                  else
#line 896 "prog_mode.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 896 "prog_mode.m"
                      {
#line 896 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 896 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 896 "prog_mode.m"
                        if ((parse_tree__prog_mode__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 896 "prog_mode.m"
                        else
#line 899 "prog_mode.m"
                          {
#line 899 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_74_74), (MR_Integer) 1);
#line 899 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__PredInstInfo_11;
#line 899 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_48_48;

#line 900 "prog_mode.m"
                            {
#line 900 "prog_mode.m"
                              parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                            }
#line 902 "prog_mode.m"
                            parse_tree__prog_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
#line 902 "prog_mode.m"
                            {
#line 902 "prog_mode.m"
                              MR_Word base;
#line 902 "prog_mode.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_mode.m"
                              *parse_tree__prog_mode__Inst_6 = base;
#line 902 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 902 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_75_75));
#line 902 "prog_mode.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__V_48_48));
#line 902 "prog_mode.m"
                            }
#line 899 "prog_mode.m"
                          }
#line 896 "prog_mode.m"
                      }
#line 896 "prog_mode.m"
                    else
#line 940 "prog_mode.m"
                      {
#line 940 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 940 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_39_39;
#line 940 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInst_60;
#line 943 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstPrime_30;
#line 941 "prog_mode.m"
                        MR_Box parse_tree__prog_mode__conv2_SubInstPrime_30;

#line 941 "prog_mode.m"
                        {
#line 941 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_29)), &parse_tree__prog_mode__conv2_SubInstPrime_30);
                        }
#line 941 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 941 "prog_mode.m"
                          {
#line 941 "prog_mode.m"
                            parse_tree__prog_mode__SubInstPrime_30 = ((MR_Word) parse_tree__prog_mode__conv2_SubInstPrime_30);
#line 941 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 941 "prog_mode.m"
                          }
#line 943 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 942 "prog_mode.m"
                          parse_tree__prog_mode__SubInst_60 = parse_tree__prog_mode__SubInstPrime_30;
#line 943 "prog_mode.m"
                        else
#line 944 "prog_mode.m"
                          {
#line 944 "prog_mode.m"
                            parse_tree__prog_mode__SubInst_60 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 944 "prog_mode.m"
                          }
#line 946 "prog_mode.m"
                        {
#line 946 "prog_mode.m"
                          parse_tree__prog_mode__V_39_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_29)));
                        }
#line 946 "prog_mode.m"
                        {
#line 946 "prog_mode.m"
                          MR_Word base;
#line 946 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 946 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 946 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_39_39));
#line 946 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_60));
#line 946 "prog_mode.m"
                        }
#line 940 "prog_mode.m"
                      }
#line 896 "prog_mode.m"
  }
#line 886 "prog_mode.m"
}

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 719 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 719 "prog_mode.m"
{
#line 719 "prog_mode.m"
  {
#line 719 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 719 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 719 "prog_mode.m"
    {
#line 719 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 719 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 719 "prog_mode.m"
  }
#line 719 "prog_mode.m"
}

#line 854 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 854 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 854 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4)
#line 854 "prog_mode.m"
{
#line 859 "prog_mode.m"
  {
#line 859 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 859 "prog_mode.m"
    if ((parse_tree__prog_mode__HOInstInfo0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "prog_mode.m"
      *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "prog_mode.m"
    else
#line 862 "prog_mode.m"
      {
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred0_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_3), (MR_Integer) 1);
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PorF_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 0)));
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 1)));
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 2)));
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 3)));
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_10;
#line 862 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred_11;

#line 719 "prog_mode.m"
        {
#line 719 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_17, parse_tree__prog_mode__TypeCtorInfo_8_17, (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_10);
        }
#line 865 "prog_mode.m"
        {
#line 865 "prog_mode.m"
          parse_tree__prog_mode__Pred_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_6));
#line 865 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_10));
#line 865 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_8));
#line 865 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 3) = ((MR_Box) (parse_tree__prog_mode__Det_9));
#line 865 "prog_mode.m"
        }
#line 866 "prog_mode.m"
        *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_11);
#line 862 "prog_mode.m"
      }
#line 859 "prog_mode.m"
  }
#line 854 "prog_mode.m"
}

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 758 "prog_mode.m"
{
#line 758 "prog_mode.m"
  {
#line 758 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 758 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 758 "prog_mode.m"
    {
#line 758 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 758 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 758 "prog_mode.m"
  }
#line 758 "prog_mode.m"
}

#line 810 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 810 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 810 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 810 "prog_mode.m"
{
#line 815 "prog_mode.m"
  {
#line 815 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 815 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 1))))
#line 820 "prog_mode.m"
      {
#line 820 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 820 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 820 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstA_11;
#line 820 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InstB_12;

#line 821 "prog_mode.m"
        {
#line 821 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_9, &parse_tree__prog_mode__InstA_11);
        }
#line 822 "prog_mode.m"
        {
#line 822 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_10, &parse_tree__prog_mode__InstB_12);
        }
#line 823 "prog_mode.m"
        {
#line 823 "prog_mode.m"
          MR_Word base;
#line 823 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 823 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_11));
#line 823 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_12));
#line 823 "prog_mode.m"
        }
#line 820 "prog_mode.m"
      }
#line 815 "prog_mode.m"
    else
#line 815 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 825 "prog_mode.m"
        {
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Live_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Real_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_23;
#line 825 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_24;

#line 826 "prog_mode.m"
          {
#line 826 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
          }
#line 827 "prog_mode.m"
          {
#line 827 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
          }
#line 828 "prog_mode.m"
          {
#line 828 "prog_mode.m"
            MR_Word base;
#line 828 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 828 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_13));
#line 828 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
#line 828 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
#line 828 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_mode__Real_14));
#line 828 "prog_mode.m"
          }
#line 825 "prog_mode.m"
        }
#line 815 "prog_mode.m"
      else
#line 815 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 0))))
#line 815 "prog_mode.m"
          {
#line 815 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_8_49;
#line 815 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 815 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 815 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SymName_7;
#line 815 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Insts_8;
#line 753 "prog_mode.m"
            MR_String parse_tree__prog_mode__Name_41;
#line 749 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Module_40;
#line 749 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_42_42;

#line 749 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__SymName0_5)) == (MR_mktag((MR_Integer) 1)));
#line 749 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 749 "prog_mode.m"
              {
#line 749 "prog_mode.m"
                parse_tree__prog_mode__Module_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_5, (MR_Integer) 0)));
#line 749 "prog_mode.m"
                parse_tree__prog_mode__Name_41 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_5, (MR_Integer) 1)));
#line 750 "prog_mode.m"
                {
#line 750 "prog_mode.m"
                  parse_tree__prog_mode__V_42_42 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 750 "prog_mode.m"
                {
#line 750 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_mode__Module_40, parse_tree__prog_mode__V_42_42);
                }
#line 749 "prog_mode.m"
              }
#line 753 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 752 "prog_mode.m"
              {
#line 752 "prog_mode.m"
                parse_tree__prog_mode__SymName_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__SymName_7, 0) = ((MR_Box) (parse_tree__prog_mode__Name_41));
#line 752 "prog_mode.m"
              }
#line 753 "prog_mode.m"
            else
#line 754 "prog_mode.m"
              parse_tree__prog_mode__SymName_7 = parse_tree__prog_mode__SymName0_5;
#line 3522 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_8_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 758 "prog_mode.m"
            {
#line 758 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_49, parse_tree__prog_mode__TypeCtorInfo_8_49, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
            }
#line 818 "prog_mode.m"
            {
#line 818 "prog_mode.m"
              MR_Word base;
#line 818 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 818 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 818 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 818 "prog_mode.m"
            }
#line 815 "prog_mode.m"
          }
#line 815 "prog_mode.m"
        else
#line 815 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 834 "prog_mode.m"
            {
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31;

#line 835 "prog_mode.m"
              {
#line 835 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
              }
#line 836 "prog_mode.m"
              {
#line 836 "prog_mode.m"
                MR_Word base;
#line 836 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 836 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 836 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 836 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
#line 836 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_27 | ((((parse_tree__prog_mode__Uniq_30 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
#line 836 "prog_mode.m"
              }
#line 834 "prog_mode.m"
            }
#line 815 "prog_mode.m"
          else
#line 815 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 830 "prog_mode.m"
              {
#line 830 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 830 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 830 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;
#line 830 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Live_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 830 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 831 "prog_mode.m"
                {
#line 831 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
                }
#line 832 "prog_mode.m"
                {
#line 832 "prog_mode.m"
                  MR_Word base;
#line 832 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 832 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 832 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 832 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 832 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Live_25 | ((((parse_tree__prog_mode__Uniq_16 << (MR_Integer) 1)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
#line 832 "prog_mode.m"
                }
#line 830 "prog_mode.m"
              }
#line 815 "prog_mode.m"
            else
#line 815 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 842 "prog_mode.m"
                {
#line 842 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 842 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName_35;

#line 843 "prog_mode.m"
                  {
#line 843 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
                  }
#line 844 "prog_mode.m"
                  {
#line 844 "prog_mode.m"
                    MR_Word base;
#line 844 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = base;
#line 844 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 844 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
#line 844 "prog_mode.m"
                  }
#line 842 "prog_mode.m"
                }
#line 815 "prog_mode.m"
              else
#line 815 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 838 "prog_mode.m"
                  {
#line 838 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 838 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName_33;

#line 839 "prog_mode.m"
                    {
#line 839 "prog_mode.m"
                      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
                    }
#line 840 "prog_mode.m"
                    {
#line 840 "prog_mode.m"
                      MR_Word base;
#line 840 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_4 = base;
#line 840 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 840 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 840 "prog_mode.m"
                    }
#line 838 "prog_mode.m"
                  }
#line 815 "prog_mode.m"
                else
#line 815 "prog_mode.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 847 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 815 "prog_mode.m"
                  else
#line 849 "prog_mode.m"
                    {
#line 849 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 849 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 849 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName_37;

#line 850 "prog_mode.m"
                      {
#line 850 "prog_mode.m"
                        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
                      }
#line 851 "prog_mode.m"
                      {
#line 851 "prog_mode.m"
                        MR_Word base;
#line 851 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 851 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_4 = base;
#line 851 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 851 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
#line 851 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
#line 851 "prog_mode.m"
                      }
#line 849 "prog_mode.m"
                    }
#line 815 "prog_mode.m"
  }
#line 810 "prog_mode.m"
}

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 807 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 807 "prog_mode.m"
{
#line 807 "prog_mode.m"
  {
#line 807 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 807 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 807 "prog_mode.m"
    {
#line 807 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 807 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 807 "prog_mode.m"
  }
#line 807 "prog_mode.m"
}

#line 801 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 801 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 801 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4)
#line 801 "prog_mode.m"
{
#line 804 "prog_mode.m"
  {
#line 804 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7;
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_8;

#line 806 "prog_mode.m"
    {
#line 806 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
#line 3793 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 807 "prog_mode.m"
    {
#line 807 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
#line 808 "prog_mode.m"
    {
#line 808 "prog_mode.m"
      MR_Word base;
#line 808 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_4 = base;
#line 808 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 808 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 808 "prog_mode.m"
    }
#line 804 "prog_mode.m"
  }
#line 801 "prog_mode.m"
}

#line 799 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 799 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 799 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 799 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 799 "prog_mode.m"
{
#line 799 "prog_mode.m"
  {
#line 799 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 799 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_BoundInst_4;

#line 799 "prog_mode.m"
    {
#line 799 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_BoundInst_4);
    }
#line 799 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_BoundInst_4));
#line 799 "prog_mode.m"
  }
#line 799 "prog_mode.m"
}

#line 795 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 795 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 795 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 795 "prog_mode.m"
{
#line 798 "prog_mode.m"
  {
#line 798 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 798 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 799 "prog_mode.m"
    {
#line 799 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 799 "prog_mode.m"
      return;
    }
#line 798 "prog_mode.m"
  }
#line 795 "prog_mode.m"
}

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 758 "prog_mode.m"
{
#line 758 "prog_mode.m"
  {
#line 758 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 758 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 758 "prog_mode.m"
    {
#line 758 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 758 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 758 "prog_mode.m"
  }
#line 758 "prog_mode.m"
}

#line 721 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 721 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 721 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 721 "prog_mode.m"
{
#line 725 "prog_mode.m"
  {
#line 725 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 725 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
#line 725 "prog_mode.m"
      {
#line 725 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 725 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 725 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial_7;
#line 725 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final_8;

#line 726 "prog_mode.m"
        {
#line 726 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
        }
#line 727 "prog_mode.m"
        {
#line 727 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
        }
#line 728 "prog_mode.m"
        {
#line 728 "prog_mode.m"
          MR_Word base;
#line 728 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 728 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 728 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
#line 728 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
#line 728 "prog_mode.m"
        }
#line 725 "prog_mode.m"
      }
#line 725 "prog_mode.m"
    else
#line 730 "prog_mode.m"
      {
#line 730 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 730 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 730 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 730 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_11;
#line 730 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_12;
#line 753 "prog_mode.m"
        MR_String parse_tree__prog_mode__Name_22;
#line 749 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Module_21;
#line 749 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23;

#line 758 "prog_mode.m"
        {
#line 758 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
        }
#line 749 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
#line 749 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 749 "prog_mode.m"
          {
#line 749 "prog_mode.m"
            parse_tree__prog_mode__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_9, (MR_Integer) 0)));
#line 749 "prog_mode.m"
            parse_tree__prog_mode__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__SymName0_9, (MR_Integer) 1)));
#line 750 "prog_mode.m"
            {
#line 750 "prog_mode.m"
              parse_tree__prog_mode__V_23_23 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 750 "prog_mode.m"
            {
#line 750 "prog_mode.m"
              parse_tree__prog_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_mode__Module_21, parse_tree__prog_mode__V_23_23);
            }
#line 749 "prog_mode.m"
          }
#line 753 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 752 "prog_mode.m"
          {
#line 752 "prog_mode.m"
            parse_tree__prog_mode__SymName_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__SymName_12, 0) = ((MR_Box) (parse_tree__prog_mode__Name_22));
#line 752 "prog_mode.m"
          }
#line 753 "prog_mode.m"
        else
#line 754 "prog_mode.m"
          parse_tree__prog_mode__SymName_12 = parse_tree__prog_mode__SymName0_9;
#line 733 "prog_mode.m"
        {
#line 733 "prog_mode.m"
          MR_Word base;
#line 733 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 733 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
#line 733 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
#line 733 "prog_mode.m"
        }
#line 730 "prog_mode.m"
      }
#line 725 "prog_mode.m"
  }
#line 721 "prog_mode.m"
}

#line 696 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 696 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 696 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 696 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
#line 696 "prog_mode.m"
{
#line 699 "prog_mode.m"
  while (MR_TRUE)
#line 699 "prog_mode.m"
    {
#line 699 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 699 "prog_mode.m"
      {
#line 699 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 699 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_4;
#line 699 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_5;
#line 705 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_9;
#line 701 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FunctorConsId_8;

#line 699 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 699 "prog_mode.m"
          {
#line 699 "prog_mode.m"
            parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 699 "prog_mode.m"
            parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 701 "prog_mode.m"
            parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 701 "prog_mode.m"
            parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 702 "prog_mode.m"
            {
#line 702 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
            }
#line 705 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 704 "prog_mode.m"
              {
#line 704 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
#line 704 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 704 "prog_mode.m"
              }
#line 705 "prog_mode.m"
            else
#line 706 "prog_mode.m"
              {
#line 706 "prog_mode.m"
                /* direct tailcall eliminated */
#line 706 "prog_mode.m"
                {
#line 706 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__BoundInsts_5;

#line 706 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 706 "prog_mode.m"
                }
#line 706 "prog_mode.m"
                continue;
#line 706 "prog_mode.m"
              }
#line 699 "prog_mode.m"
          }
#line 699 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 699 "prog_mode.m"
      }
#line 699 "prog_mode.m"
      break;
#line 699 "prog_mode.m"
    }
#line 696 "prog_mode.m"
}

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 618 "prog_mode.m"
{
#line 618 "prog_mode.m"
  {
#line 618 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 618 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 618 "prog_mode.m"
  }
#line 618 "prog_mode.m"
}

#line 619 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 619 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 619 "prog_mode.m"
{
#line 619 "prog_mode.m"
  {
#line 619 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 619 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
#line 619 "prog_mode.m"
    {
#line 619 "prog_mode.m"
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 619 "prog_mode.m"
      return;
    }
#line 619 "prog_mode.m"
  }
#line 619 "prog_mode.m"
}

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 618 "prog_mode.m"
{
#line 618 "prog_mode.m"
  {
#line 618 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 620 "prog_mode.m"
    {
#line 620 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
#line 620 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 620 "prog_mode.m"
      {
#line 620 "prog_mode.m"
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 620 "prog_mode.m"
        return;
      }
#line 618 "prog_mode.m"
  }
#line 618 "prog_mode.m"
}

#line 618 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 618 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 618 "prog_mode.m"
{
#line 618 "prog_mode.m"
  {
#line 618 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 618 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 618 "prog_mode.m"
      {
#line 618 "prog_mode.m"
        {
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 619 "prog_mode.m"
          {
#line 619 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 618 "prog_mode.m"
        }
#line 618 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 618 "prog_mode.m"
      }
#line 618 "prog_mode.m"
    else
#line 618 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 618 "prog_mode.m"
  }
#line 618 "prog_mode.m"
}

#line 614 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 614 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2)
#line 614 "prog_mode.m"
{
#line 614 "prog_mode.m"
  {
#line 614 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 614 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
#line 618 "prog_mode.m"
    while (MR_TRUE)
#line 618 "prog_mode.m"
      {
#line 618 "prog_mode.m"
        /* tailcall optimized into a loop */
#line 618 "prog_mode.m"
        if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 1))))
#line 618 "prog_mode.m"
          {
#line 618 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 618 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 623 "prog_mode.m"
            {
#line 623 "prog_mode.m"
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_32_32);
            }
#line 618 "prog_mode.m"
            if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 626 "prog_mode.m"
              {
#line 626 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_31_31);
              }
#line 618 "prog_mode.m"
          }
#line 618 "prog_mode.m"
        else
#line 618 "prog_mode.m"
          if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 2))))
#line 618 "prog_mode.m"
            {
#line 618 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 618 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 628 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
#line 628 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 629 "prog_mode.m"
              {
#line 629 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_35_35);
              }
#line 618 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 632 "prog_mode.m"
                {
#line 632 "prog_mode.m"
                  return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__V_34_34);
                }
#line 618 "prog_mode.m"
            }
#line 618 "prog_mode.m"
          else
#line 618 "prog_mode.m"
            if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 0))))
#line 618 "prog_mode.m"
              {
#line 618 "prog_mode.m"
                {
#line 618 "prog_mode.m"
                  parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
                }
#line 618 "prog_mode.m"
              }
#line 618 "prog_mode.m"
            else
#line 618 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 637 "prog_mode.m"
                {
#line 637 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 637 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 637 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 637 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 638 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 638 "prog_mode.m"
                  {
#line 638 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_26;

#line 638 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 638 "prog_mode.m"
                  }
#line 638 "prog_mode.m"
                  continue;
#line 637 "prog_mode.m"
                }
#line 618 "prog_mode.m"
              else
#line 618 "prog_mode.m"
                if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 634 "prog_mode.m"
                  {
#line 634 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__SubInstName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 634 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 634 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 634 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 635 "prog_mode.m"
                    /* direct tailcall eliminated */
#line 635 "prog_mode.m"
                    {
#line 635 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_14;

#line 635 "prog_mode.m"
                      (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 635 "prog_mode.m"
                    }
#line 635 "prog_mode.m"
                    continue;
#line 634 "prog_mode.m"
                  }
#line 618 "prog_mode.m"
                else
#line 618 "prog_mode.m"
                  if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 643 "prog_mode.m"
                    {
#line 643 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 644 "prog_mode.m"
                      /* direct tailcall eliminated */
#line 644 "prog_mode.m"
                      {
#line 644 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_28;

#line 644 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 644 "prog_mode.m"
                      }
#line 644 "prog_mode.m"
                      continue;
#line 643 "prog_mode.m"
                    }
#line 618 "prog_mode.m"
                  else
#line 618 "prog_mode.m"
                    if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 640 "prog_mode.m"
                      {
#line 640 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 641 "prog_mode.m"
                        /* direct tailcall eliminated */
#line 641 "prog_mode.m"
                        {
#line 641 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_27;

#line 641 "prog_mode.m"
                          (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 641 "prog_mode.m"
                        }
#line 641 "prog_mode.m"
                        continue;
#line 640 "prog_mode.m"
                      }
#line 618 "prog_mode.m"
                    else
#line 618 "prog_mode.m"
                      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 646 "prog_mode.m"
                        {
#line 646 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__SubInstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 646 "prog_mode.m"
                          MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 647 "prog_mode.m"
                          /* direct tailcall eliminated */
#line 647 "prog_mode.m"
                          {
#line 647 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_29;

#line 647 "prog_mode.m"
                            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 647 "prog_mode.m"
                          }
#line 647 "prog_mode.m"
                          continue;
#line 646 "prog_mode.m"
                        }
#line 618 "prog_mode.m"
                      else
#line 618 "prog_mode.m"
                        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 618 "prog_mode.m"
        return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 618 "prog_mode.m"
        break;
#line 618 "prog_mode.m"
      }
#line 614 "prog_mode.m"
  }
#line 614 "prog_mode.m"
}

#line 545 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 545 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 545 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 545 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 545 "prog_mode.m"
{
#line 545 "prog_mode.m"
  {
#line 545 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 545 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 545 "prog_mode.m"
    {
#line 545 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 545 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 545 "prog_mode.m"
  }
#line 545 "prog_mode.m"
}

#line 539 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 539 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 539 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 539 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 539 "prog_mode.m"
{
#line 544 "prog_mode.m"
  {
#line 544 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 544 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 544 "prog_mode.m"
      {
#line 544 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
#line 544 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 544 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 544 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_9;
#line 544 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_15_15;

#line 545 "prog_mode.m"
        {
#line 545 "prog_mode.m"
          parse_tree__prog_mode__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 545 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
#line 545 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 545 "prog_mode.m"
        }
#line 4560 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 545 "prog_mode.m"
        {
#line 545 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__V_15_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
        }
#line 546 "prog_mode.m"
        {
#line 546 "prog_mode.m"
          MR_Word base;
#line 546 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 546 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
#line 546 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 546 "prog_mode.m"
        }
#line 544 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 544 "prog_mode.m"
      }
#line 544 "prog_mode.m"
    else
#line 544 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 555 "prog_mode.m"
        {
#line 555 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 555 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 555 "prog_mode.m"
        }
#line 544 "prog_mode.m"
      else
#line 544 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 548 "prog_mode.m"
          {
#line 548 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 548 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 548 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_12;

#line 549 "prog_mode.m"
            {
#line 549 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
            }
#line 548 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 548 "prog_mode.m"
              {
#line 550 "prog_mode.m"
                {
#line 550 "prog_mode.m"
                  MR_Word base;
#line 550 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 550 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 550 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
#line 550 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 550 "prog_mode.m"
                }
#line 550 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 548 "prog_mode.m"
              }
#line 548 "prog_mode.m"
          }
#line 544 "prog_mode.m"
        else
#line 544 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 544 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 544 "prog_mode.m"
  }
#line 539 "prog_mode.m"
}

#line 469 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 469 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 469 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 469 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 469 "prog_mode.m"
{
#line 469 "prog_mode.m"
  {
#line 469 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 469 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_Mode_6;

#line 469 "prog_mode.m"
    {
#line 469 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv4_Mode_6);
    }
#line 469 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_Mode_6));
#line 469 "prog_mode.m"
  }
#line 469 "prog_mode.m"
}

#line 518 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 518 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 518 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
#line 518 "prog_mode.m"
{
#line 518 "prog_mode.m"
  {
#line 518 "prog_mode.m"
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
#line 518 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 518 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv3_HeadVar__3_42;

#line 518 "prog_mode.m"
    {
#line 518 "prog_mode.m"
      parse_tree__prog_mode__conv3_HeadVar__3_42 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__518__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
#line 518 "prog_mode.m"
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_HeadVar__3_42));
#line 518 "prog_mode.m"
    return parse_tree__prog_mode__wrapper_arg_2;
#line 518 "prog_mode.m"
  }
#line 518 "prog_mode.m"
}

#line 500 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 500 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 500 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 500 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 500 "prog_mode.m"
{
#line 500 "prog_mode.m"
  {
#line 500 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 500 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_HeadVar__3_45;

#line 500 "prog_mode.m"
    {
#line 500 "prog_mode.m"
      parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__500__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_HeadVar__3_45);
    }
#line 500 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_HeadVar__3_45));
#line 500 "prog_mode.m"
  }
#line 500 "prog_mode.m"
}

#line 534 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 534 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 534 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 534 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 534 "prog_mode.m"
{
#line 534 "prog_mode.m"
  {
#line 534 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 534 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_Inst_6;

#line 534 "prog_mode.m"
    {
#line 534 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Inst_6);
    }
#line 534 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Inst_6));
#line 534 "prog_mode.m"
  }
#line 534 "prog_mode.m"
}

#line 482 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 482 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 482 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 482 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 482 "prog_mode.m"
{
#line 482 "prog_mode.m"
  {
#line 482 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 482 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 482 "prog_mode.m"
    {
#line 482 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 482 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 482 "prog_mode.m"
  }
#line 482 "prog_mode.m"
}

#line 454 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 454 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 454 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 454 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 454 "prog_mode.m"
{
#line 462 "prog_mode.m"
  {
#line 462 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 462 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 478 "prog_mode.m"
      {
#line 478 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 478 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 478 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_71;

#line 485 "prog_mode.m"
        if ((parse_tree__prog_mode__HOInstInfo0_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "prog_mode.m"
          parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "prog_mode.m"
        else
#line 481 "prog_mode.m"
          {
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__TypeCtorInfo_81_81;
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_48_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_65), (MR_Integer) 1);
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_49_49;
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_50_50;
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__PorF_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 0)));
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 1)));
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MaybeArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 2)));
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 3)));
#line 481 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_58;

#line 482 "prog_mode.m"
            {
#line 482 "prog_mode.m"
              parse_tree__prog_mode__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 482 "prog_mode.m"
            }
#line 4872 "parse_tree.prog_mode.c"
            parse_tree__prog_mode__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 482 "prog_mode.m"
            {
#line 482 "prog_mode.m"
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_81_81, parse_tree__prog_mode__TypeCtorInfo_81_81, parse_tree__prog_mode__V_49_49, parse_tree__prog_mode__Modes0_55, &parse_tree__prog_mode__Modes_58);
            }
#line 483 "prog_mode.m"
            {
#line 483 "prog_mode.m"
              parse_tree__prog_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_54));
#line 483 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_58));
#line 483 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_56));
#line 483 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 3) = ((MR_Box) (parse_tree__prog_mode__Det_57));
#line 483 "prog_mode.m"
            }
#line 483 "prog_mode.m"
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_50_50);
#line 481 "prog_mode.m"
          }
#line 489 "prog_mode.m"
        {
#line 489 "prog_mode.m"
          MR_Word base;
#line 489 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 489 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_64));
#line 489 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_71));
#line 489 "prog_mode.m"
        }
#line 478 "prog_mode.m"
      }
#line 462 "prog_mode.m"
    else
#line 462 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 533 "prog_mode.m"
        {
#line 533 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_91_91;
#line 533 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 533 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 533 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_38;
#line 533 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_39_39;

#line 534 "prog_mode.m"
          {
#line 534 "prog_mode.m"
            parse_tree__prog_mode__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_39_39, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 534 "prog_mode.m"
          }
#line 4944 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 534 "prog_mode.m"
          {
#line 534 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_91_91, parse_tree__prog_mode__TypeCtorInfo_91_91, parse_tree__prog_mode__V_39_39, parse_tree__prog_mode__SubInsts0_37, &parse_tree__prog_mode__SubInsts_38);
          }
#line 536 "prog_mode.m"
          {
#line 536 "prog_mode.m"
            MR_Word base;
#line 536 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 536 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 536 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_36));
#line 536 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_38));
#line 536 "prog_mode.m"
          }
#line 533 "prog_mode.m"
        }
#line 462 "prog_mode.m"
      else
#line 462 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 491 "prog_mode.m"
          {
#line 491 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 491 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 491 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 496 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 495 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 496 "prog_mode.m"
            else
#line 499 "prog_mode.m"
              {
#line 499 "prog_mode.m"
                MR_Word parse_tree__prog_mode__TypeCtorInfo_85_85;
#line 499 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_26;
#line 499 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_43_43;

#line 500 "prog_mode.m"
                {
#line 500 "prog_mode.m"
                  parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 500 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
#line 500 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 500 "prog_mode.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 500 "prog_mode.m"
                }
#line 5011 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 500 "prog_mode.m"
                {
#line 500 "prog_mode.m"
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__TypeCtorInfo_85_85, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_26);
                }
#line 506 "prog_mode.m"
                {
#line 506 "prog_mode.m"
                  MR_Word base;
#line 506 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 506 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 506 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 506 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_26));
#line 506 "prog_mode.m"
                }
#line 499 "prog_mode.m"
              }
#line 491 "prog_mode.m"
          }
#line 462 "prog_mode.m"
        else
#line 462 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 516 "prog_mode.m"
            {
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_87_87;
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_31;
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_32;
#line 516 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;

#line 517 "prog_mode.m"
              {
#line 517 "prog_mode.m"
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__SubInst0_30, &parse_tree__prog_mode__SubInst_31);
              }
#line 5064 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 518 "prog_mode.m"
              {
#line 518 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
#line 518 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
#line 518 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 518 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 518 "prog_mode.m"
              }
#line 518 "prog_mode.m"
              {
#line 518 "prog_mode.m"
                parse_tree__prog_mode__Vars_32 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__Vars0_29);
              }
#line 524 "prog_mode.m"
              {
#line 524 "prog_mode.m"
                MR_Word base;
#line 524 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 524 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 524 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_32));
#line 524 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_31));
#line 524 "prog_mode.m"
              }
#line 516 "prog_mode.m"
            }
#line 462 "prog_mode.m"
          else
#line 462 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 526 "prog_mode.m"
              {
#line 526 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 529 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Name1_35;

#line 527 "prog_mode.m"
                {
#line 527 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_34, &parse_tree__prog_mode__Name1_35);
                }
#line 529 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 528 "prog_mode.m"
                  {
#line 528 "prog_mode.m"
                    MR_Word base;
#line 528 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 528 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 528 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_35));
#line 528 "prog_mode.m"
                  }
#line 529 "prog_mode.m"
                else
#line 530 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 526 "prog_mode.m"
              }
#line 462 "prog_mode.m"
            else
#line 462 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 463 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 462 "prog_mode.m"
              else
#line 462 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 465 "prog_mode.m"
                  {
#line 465 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 465 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 465 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_15;

#line 472 "prog_mode.m"
                    if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "prog_mode.m"
                      parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "prog_mode.m"
                    else
#line 468 "prog_mode.m"
                      {
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_78_78;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__PorF_10;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes0_11;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Det_13;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Modes_14;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_51_51 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_52_52;
#line 468 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_53_53;

#line 467 "prog_mode.m"
                        parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 0)));
#line 467 "prog_mode.m"
                        parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 1)));
#line 467 "prog_mode.m"
                        parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 2)));
#line 467 "prog_mode.m"
                        parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 3)));
#line 469 "prog_mode.m"
                        {
#line 469 "prog_mode.m"
                          parse_tree__prog_mode__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 469 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 469 "prog_mode.m"
                        }
#line 5209 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 469 "prog_mode.m"
                        {
#line 469 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_78_78, parse_tree__prog_mode__TypeCtorInfo_78_78, parse_tree__prog_mode__V_52_52, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                        }
#line 470 "prog_mode.m"
                        {
#line 470 "prog_mode.m"
                          parse_tree__prog_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
#line 470 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
#line 470 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
#line 470 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
#line 470 "prog_mode.m"
                        }
#line 470 "prog_mode.m"
                        parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_53_53);
#line 468 "prog_mode.m"
                      }
#line 476 "prog_mode.m"
                    {
#line 476 "prog_mode.m"
                      MR_Word base;
#line 476 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 476 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 476 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 476 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
#line 476 "prog_mode.m"
                    }
#line 465 "prog_mode.m"
                  }
#line 462 "prog_mode.m"
                else
#line 509 "prog_mode.m"
                  {
#line 509 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 512 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var1_28;
#line 510 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_86_86 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 510 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv5_Var1_28;

#line 510 "prog_mode.m"
                    {
#line 510 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_86_86, parse_tree__prog_mode__TypeInfo_86_86, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__Var0_27)), &parse_tree__prog_mode__conv5_Var1_28);
                    }
#line 510 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 510 "prog_mode.m"
                      {
#line 510 "prog_mode.m"
                        parse_tree__prog_mode__Var1_28 = ((MR_Word) parse_tree__prog_mode__conv5_Var1_28);
#line 510 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 510 "prog_mode.m"
                      }
#line 512 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 511 "prog_mode.m"
                      {
#line 511 "prog_mode.m"
                        MR_Word base;
#line 511 "prog_mode.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_mode.m"
                        *parse_tree__prog_mode__Inst_6 = base;
#line 511 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 511 "prog_mode.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_28));
#line 511 "prog_mode.m"
                      }
#line 512 "prog_mode.m"
                    else
#line 513 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 509 "prog_mode.m"
                  }
#line 462 "prog_mode.m"
  }
#line 454 "prog_mode.m"
}

#line 450 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 450 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 450 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 450 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 450 "prog_mode.m"
{
#line 450 "prog_mode.m"
  {
#line 450 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 450 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 450 "prog_mode.m"
    {
#line 450 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 450 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 450 "prog_mode.m"
  }
#line 450 "prog_mode.m"
}

#line 439 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 439 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 439 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 439 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 439 "prog_mode.m"
{
#line 444 "prog_mode.m"
  {
#line 444 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 444 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 444 "prog_mode.m"
      {
#line 444 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 444 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 444 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 444 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 445 "prog_mode.m"
        {
#line 445 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 446 "prog_mode.m"
        {
#line 446 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 447 "prog_mode.m"
        {
#line 447 "prog_mode.m"
          MR_Word base;
#line 447 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 447 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 447 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 447 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 447 "prog_mode.m"
        }
#line 444 "prog_mode.m"
      }
#line 444 "prog_mode.m"
    else
#line 449 "prog_mode.m"
      {
#line 449 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 449 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 449 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 449 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_13;
#line 449 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 450 "prog_mode.m"
        {
#line 450 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 450 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 450 "prog_mode.m"
        }
#line 5421 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 450 "prog_mode.m"
        {
#line 450 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
        }
#line 451 "prog_mode.m"
        {
#line 451 "prog_mode.m"
          MR_Word base;
#line 451 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 451 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 451 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
#line 451 "prog_mode.m"
        }
#line 449 "prog_mode.m"
      }
#line 444 "prog_mode.m"
  }
#line 439 "prog_mode.m"
}

#line 425 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 425 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 425 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 425 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 425 "prog_mode.m"
{
#line 428 "prog_mode.m"
  {
#line 428 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 428 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "prog_mode.m"
    else
#line 429 "prog_mode.m"
      {
#line 429 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 429 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 429 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 429 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 286 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__A0_6)) == (MR_mktag((MR_Integer) 0))))
#line 286 "prog_mode.m"
          {
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_13;
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_14;

#line 287 "prog_mode.m"
            {
#line 287 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_11, &parse_tree__prog_mode__I_13);
            }
#line 288 "prog_mode.m"
            {
#line 288 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_12, &parse_tree__prog_mode__F_14);
            }
#line 286 "prog_mode.m"
            {
#line 286 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_13));
#line 286 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_14));
#line 286 "prog_mode.m"
            }
#line 286 "prog_mode.m"
          }
#line 286 "prog_mode.m"
        else
#line 290 "prog_mode.m"
          {
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 0)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A0_6, (MR_Integer) 1)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_18;

#line 291 "prog_mode.m"
            {
#line 291 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_17, &parse_tree__prog_mode__Args_18);
            }
#line 290 "prog_mode.m"
            {
#line 290 "prog_mode.m"
              parse_tree__prog_mode__A_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_16));
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__A_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_18));
#line 290 "prog_mode.m"
            }
#line 290 "prog_mode.m"
          }
#line 431 "prog_mode.m"
        {
#line 431 "prog_mode.m"
          parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 429 "prog_mode.m"
        {
#line 429 "prog_mode.m"
          MR_Word base;
#line 429 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 429 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 429 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 429 "prog_mode.m"
        }
#line 429 "prog_mode.m"
      }
#line 428 "prog_mode.m"
  }
#line 425 "prog_mode.m"
}

#line 407 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 407 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 407 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 407 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 407 "prog_mode.m"
{
#line 410 "prog_mode.m"
  {
#line 410 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 410 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "prog_mode.m"
    else
#line 411 "prog_mode.m"
      {
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PredOrFunc_8;
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_9;
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MaybeArgRegs_10;
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_11;
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_12;
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HeadVar__2_2), (MR_Integer) 1);
#line 411 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 412 "prog_mode.m"
        parse_tree__prog_mode__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 0)));
#line 412 "prog_mode.m"
        parse_tree__prog_mode__Modes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 1)));
#line 412 "prog_mode.m"
        parse_tree__prog_mode__MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 2)));
#line 412 "prog_mode.m"
        parse_tree__prog_mode__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 3)));
#line 419 "prog_mode.m"
        {
#line 419 "prog_mode.m"
          parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_1);
        }
#line 421 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 420 "prog_mode.m"
          parse_tree__prog_mode__Modes_12 = parse_tree__prog_mode__Modes0_9;
#line 421 "prog_mode.m"
        else
#line 422 "prog_mode.m"
          {
#line 422 "prog_mode.m"
            parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_9, &parse_tree__prog_mode__Modes_12);
          }
#line 415 "prog_mode.m"
        {
#line 415 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_8));
#line 415 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_12));
#line 415 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_10));
#line 415 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Det_11));
#line 415 "prog_mode.m"
        }
#line 415 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_14_14);
#line 411 "prog_mode.m"
      }
#line 410 "prog_mode.m"
  }
#line 407 "prog_mode.m"
}

#line 396 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 396 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 396 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 396 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 396 "prog_mode.m"
{
#line 399 "prog_mode.m"
  {
#line 399 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 399 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "prog_mode.m"
    else
#line 401 "prog_mode.m"
      {
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_8;
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_9;
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
#line 401 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_12;

#line 403 "prog_mode.m"
        {
#line 403 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
        }
#line 404 "prog_mode.m"
        {
#line 404 "prog_mode.m"
          parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
#line 404 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
#line 404 "prog_mode.m"
        }
#line 405 "prog_mode.m"
        {
#line 405 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
        }
#line 401 "prog_mode.m"
        {
#line 401 "prog_mode.m"
          MR_Word base;
#line 401 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 401 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
#line 401 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
#line 401 "prog_mode.m"
        }
#line 401 "prog_mode.m"
      }
#line 399 "prog_mode.m"
  }
#line 396 "prog_mode.m"
}

#line 377 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 377 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 377 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 377 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 377 "prog_mode.m"
{
#line 382 "prog_mode.m"
  {
#line 382 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 382 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 0))))
#line 382 "prog_mode.m"
      {
#line 382 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 382 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 382 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9;

#line 383 "prog_mode.m"
        {
#line 383 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
        }
#line 384 "prog_mode.m"
        {
#line 384 "prog_mode.m"
          MR_Word base;
#line 384 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = base;
#line 384 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
#line 384 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 384 "prog_mode.m"
        }
#line 382 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 382 "prog_mode.m"
      }
#line 382 "prog_mode.m"
    else
#line 382 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 393 "prog_mode.m"
        {
#line 393 "prog_mode.m"
          *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 393 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 393 "prog_mode.m"
        }
#line 382 "prog_mode.m"
      else
#line 382 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 386 "prog_mode.m"
          {
#line 386 "prog_mode.m"
            MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 386 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 386 "prog_mode.m"
            MR_Word parse_tree__prog_mode__SubInst_12;

#line 387 "prog_mode.m"
            {
#line 387 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
            }
#line 386 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 386 "prog_mode.m"
              {
#line 388 "prog_mode.m"
                {
#line 388 "prog_mode.m"
                  MR_Word base;
#line 388 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_mode.m"
                  *parse_tree__prog_mode__InstName_6 = base;
#line 388 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 388 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
#line 388 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
#line 388 "prog_mode.m"
                }
#line 388 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 386 "prog_mode.m"
              }
#line 386 "prog_mode.m"
          }
#line 382 "prog_mode.m"
        else
#line 382 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_FALSE;
#line 382 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 382 "prog_mode.m"
  }
#line 377 "prog_mode.m"
}

#line 300 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 300 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 300 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 300 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 300 "prog_mode.m"
{
#line 303 "prog_mode.m"
  {
#line 303 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 303 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "prog_mode.m"
    else
#line 304 "prog_mode.m"
      {
#line 304 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 304 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "prog_mode.m"
        MR_Word parse_tree__prog_mode__A_8;
#line 304 "prog_mode.m"
        MR_Word parse_tree__prog_mode__As_9;

#line 305 "prog_mode.m"
        {
#line 305 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__A0_6, &parse_tree__prog_mode__A_8);
        }
#line 306 "prog_mode.m"
        {
#line 306 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__As0_7, &parse_tree__prog_mode__As_9);
        }
#line 304 "prog_mode.m"
        {
#line 304 "prog_mode.m"
          MR_Word base;
#line 304 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 304 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__A_8));
#line 304 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__As_9));
#line 304 "prog_mode.m"
        }
#line 304 "prog_mode.m"
      }
#line 303 "prog_mode.m"
  }
#line 300 "prog_mode.m"
}

#line 989 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 989 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 989 "prog_mode.m"
{
#line 989 "prog_mode.m"
  {
#line 989 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 989 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 989 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10;

#line 989 "prog_mode.m"
    {
#line 989 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10);
    }
#line 989 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 989 "prog_mode.m"
      {
#line 989 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10));
#line 989 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 989 "prog_mode.m"
      }
#line 989 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 989 "prog_mode.m"
  }
#line 989 "prog_mode.m"
}

#line 164 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(
#line 164 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndModes_2)
#line 164 "prog_mode.m"
{
#line 988 "prog_mode.m"
  {
#line 988 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 988 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 989 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 989 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 990 "prog_mode.m"
    {
#line 990 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 989 "prog_mode.m"
    {
#line 989 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__TypeAndModes_2, ((MR_Box) (parse_tree__prog_mode__V_5_5)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 989 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 989 "prog_mode.m"
      {
#line 989 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 989 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 989 "prog_mode.m"
      }
#line 988 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 988 "prog_mode.m"
  }
#line 164 "prog_mode.m"
}

#line 986 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 986 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 986 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 986 "prog_mode.m"
{
#line 986 "prog_mode.m"
  {
#line 986 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 986 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 986 "prog_mode.m"
    {
#line 986 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 986 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 986 "prog_mode.m"
      {
#line 986 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 986 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 986 "prog_mode.m"
      }
#line 986 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 986 "prog_mode.m"
  }
#line 986 "prog_mode.m"
}

#line 161 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(
#line 161 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_2)
#line 161 "prog_mode.m"
{
#line 979 "prog_mode.m"
  {
#line 979 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 979 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_4_4;
#line 986 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 986 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 980 "prog_mode.m"
    {
#line 980 "prog_mode.m"
      parse_tree__prog_mode__V_4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 986 "prog_mode.m"
    {
#line 986 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[5], parse_tree__prog_mode__Modes_2, ((MR_Box) (parse_tree__prog_mode__V_4_4)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 986 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 986 "prog_mode.m"
      {
#line 986 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 986 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 986 "prog_mode.m"
      }
#line 979 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 979 "prog_mode.m"
  }
#line 161 "prog_mode.m"
}

#line 882 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 882 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 882 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 882 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 882 "prog_mode.m"
{
#line 882 "prog_mode.m"
  {
#line 882 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 882 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 882 "prog_mode.m"
    {
#line 882 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 882 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 882 "prog_mode.m"
  }
#line 882 "prog_mode.m"
}

#line 153 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
#line 153 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 153 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 153 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 153 "prog_mode.m"
{
#line 876 "prog_mode.m"
  {
#line 876 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 876 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 876 "prog_mode.m"
      {
#line 876 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 876 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 876 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 876 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 877 "prog_mode.m"
        {
#line 877 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 878 "prog_mode.m"
        {
#line 878 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 879 "prog_mode.m"
        {
#line 879 "prog_mode.m"
          MR_Word base;
#line 879 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 879 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 879 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 879 "prog_mode.m"
        }
#line 876 "prog_mode.m"
      }
#line 876 "prog_mode.m"
    else
#line 881 "prog_mode.m"
      {
#line 881 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 881 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 881 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 881 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_13;
#line 881 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 882 "prog_mode.m"
        {
#line 882 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 882 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 882 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
#line 882 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 882 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 882 "prog_mode.m"
        }
#line 6210 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 882 "prog_mode.m"
        {
#line 882 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
        }
#line 883 "prog_mode.m"
        {
#line 883 "prog_mode.m"
          MR_Word base;
#line 883 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 883 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 883 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
#line 883 "prog_mode.m"
        }
#line 881 "prog_mode.m"
      }
#line 876 "prog_mode.m"
  }
#line 153 "prog_mode.m"
}

#line 146 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
#line 146 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 146 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 146 "prog_mode.m"
{
#line 871 "prog_mode.m"
  {
#line 871 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;

#line 872 "prog_mode.m"
    {
#line 872 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 872 "prog_mode.m"
    {
#line 872 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__V_5_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
#line 872 "prog_mode.m"
      return;
    }
#line 871 "prog_mode.m"
  }
#line 146 "prog_mode.m"
}

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 758 "prog_mode.m"
{
#line 758 "prog_mode.m"
  {
#line 758 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 758 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 758 "prog_mode.m"
    {
#line 758 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 758 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 758 "prog_mode.m"
  }
#line 758 "prog_mode.m"
}

#line 139 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
#line 139 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 139 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 139 "prog_mode.m"
{
#line 766 "prog_mode.m"
  {
#line 766 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 766 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 2))))
#line 773 "prog_mode.m"
      {
#line 773 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 773 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 773 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_12;

#line 774 "prog_mode.m"
        {
#line 774 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_11, &parse_tree__prog_mode__HOInstInfo_12);
        }
#line 775 "prog_mode.m"
        {
#line 775 "prog_mode.m"
          MR_Word base;
#line 775 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_mode.m"
          *parse_tree__prog_mode__Inst_4 = base;
#line 775 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
#line 775 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
#line 775 "prog_mode.m"
        }
#line 773 "prog_mode.m"
      }
#line 766 "prog_mode.m"
    else
#line 766 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 789 "prog_mode.m"
        {
#line 789 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_8_37;
#line 789 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 789 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 789 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_20;
#line 789 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_21;
#line 753 "prog_mode.m"
          MR_String parse_tree__prog_mode__Name_29;
#line 749 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Module_28;
#line 749 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_30_30;

#line 749 "prog_mode.m"
          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_18)) == (MR_mktag((MR_Integer) 1)));
#line 749 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 749 "prog_mode.m"
            {
#line 749 "prog_mode.m"
              parse_tree__prog_mode__Module_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_18, (MR_Integer) 0)));
#line 749 "prog_mode.m"
              parse_tree__prog_mode__Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_18, (MR_Integer) 1)));
#line 750 "prog_mode.m"
              {
#line 750 "prog_mode.m"
                parse_tree__prog_mode__V_30_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 750 "prog_mode.m"
              {
#line 750 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_mode__Module_28, parse_tree__prog_mode__V_30_30);
              }
#line 749 "prog_mode.m"
            }
#line 753 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 752 "prog_mode.m"
            {
#line 752 "prog_mode.m"
              parse_tree__prog_mode__Name_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name_20, 0) = ((MR_Box) (parse_tree__prog_mode__Name_29));
#line 752 "prog_mode.m"
            }
#line 753 "prog_mode.m"
          else
#line 754 "prog_mode.m"
            parse_tree__prog_mode__Name_20 = parse_tree__prog_mode__Name0_18;
#line 6406 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_8_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 758 "prog_mode.m"
          {
#line 758 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_37, parse_tree__prog_mode__TypeCtorInfo_8_37, (MR_Word) &parse_tree__prog_mode_scalar_common_2[4], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
          }
#line 792 "prog_mode.m"
          {
#line 792 "prog_mode.m"
            MR_Word base;
#line 792 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 792 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 792 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 792 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
#line 792 "prog_mode.m"
          }
#line 789 "prog_mode.m"
        }
#line 766 "prog_mode.m"
      else
#line 766 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 781 "prog_mode.m"
          {
#line 781 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 781 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 781 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts_15;
#line 781 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

#line 782 "prog_mode.m"
            {
#line 782 "prog_mode.m"
              parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
            }
#line 783 "prog_mode.m"
            {
#line 783 "prog_mode.m"
              MR_Word base;
#line 783 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 783 "prog_mode.m"
              *parse_tree__prog_mode__Inst_4 = base;
#line 783 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 783 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
#line 783 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
#line 783 "prog_mode.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
#line 783 "prog_mode.m"
            }
#line 781 "prog_mode.m"
          }
#line 766 "prog_mode.m"
        else
#line 766 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 769 "prog_mode.m"
            {
#line 769 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 769 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 769 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_9;

#line 770 "prog_mode.m"
              {
#line 770 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
              }
#line 771 "prog_mode.m"
              {
#line 771 "prog_mode.m"
                MR_Word base;
#line 771 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 771 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 771 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 771 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
#line 771 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
#line 771 "prog_mode.m"
              }
#line 769 "prog_mode.m"
            }
#line 766 "prog_mode.m"
          else
#line 766 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 785 "prog_mode.m"
              {
#line 785 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 785 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_17;

#line 786 "prog_mode.m"
                {
#line 786 "prog_mode.m"
                  parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
                }
#line 787 "prog_mode.m"
                {
#line 787 "prog_mode.m"
                  MR_Word base;
#line 787 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_4 = base;
#line 787 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 787 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 787 "prog_mode.m"
                }
#line 785 "prog_mode.m"
              }
#line 766 "prog_mode.m"
            else
#line 766 "prog_mode.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 777 "prog_mode.m"
                {
#line 777 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 777 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 777 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo_24;

#line 778 "prog_mode.m"
                  {
#line 778 "prog_mode.m"
                    parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_23, &parse_tree__prog_mode__HOInstInfo_24);
                  }
#line 779 "prog_mode.m"
                  {
#line 779 "prog_mode.m"
                    MR_Word base;
#line 779 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_4 = base;
#line 779 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 779 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
#line 779 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
#line 779 "prog_mode.m"
                  }
#line 777 "prog_mode.m"
                }
#line 766 "prog_mode.m"
              else
#line 767 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 766 "prog_mode.m"
  }
#line 139 "prog_mode.m"
}

#line 758 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 758 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 758 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 758 "prog_mode.m"
{
#line 758 "prog_mode.m"
  {
#line 758 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 758 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 758 "prog_mode.m"
    {
#line 758 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 758 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 758 "prog_mode.m"
  }
#line 758 "prog_mode.m"
}

#line 136 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
#line 136 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 136 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 136 "prog_mode.m"
{
#line 757 "prog_mode.m"
  {
#line 757 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 757 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 758 "prog_mode.m"
    {
#line 758 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[3], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
#line 758 "prog_mode.m"
      return;
    }
#line 757 "prog_mode.m"
  }
#line 136 "prog_mode.m"
}

#line 719 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 719 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 719 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 719 "prog_mode.m"
{
#line 719 "prog_mode.m"
  {
#line 719 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 719 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 719 "prog_mode.m"
    {
#line 719 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 719 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 719 "prog_mode.m"
  }
#line 719 "prog_mode.m"
}

#line 133 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
#line 133 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_3,
#line 133 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_4)
#line 133 "prog_mode.m"
{
#line 718 "prog_mode.m"
  {
#line 718 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 718 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 719 "prog_mode.m"
    {
#line 719 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[2], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
#line 719 "prog_mode.m"
      return;
    }
#line 718 "prog_mode.m"
  }
#line 133 "prog_mode.m"
}

#line 131 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_p_0(
#line 131 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId0_3,
#line 131 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_4)
#line 131 "prog_mode.m"
{
#line 740 "prog_mode.m"
  {
#line 740 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 740 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Name0_5;
#line 740 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_6;
#line 740 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtor_7;

#line 737 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 737 "prog_mode.m"
      {
#line 737 "prog_mode.m"
        parse_tree__prog_mode__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 1)));
#line 737 "prog_mode.m"
        parse_tree__prog_mode__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 2)));
#line 737 "prog_mode.m"
        parse_tree__prog_mode__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_3, (MR_Integer) 3)));
#line 738 "prog_mode.m"
        {
#line 738 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_8;
#line 753 "prog_mode.m"
          MR_String parse_tree__prog_mode__Name_12;
#line 749 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Module_11;
#line 749 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_13_13;

#line 749 "prog_mode.m"
          parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 749 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 749 "prog_mode.m"
            {
#line 749 "prog_mode.m"
              parse_tree__prog_mode__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 749 "prog_mode.m"
              parse_tree__prog_mode__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 750 "prog_mode.m"
              {
#line 750 "prog_mode.m"
                parse_tree__prog_mode__V_13_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 750 "prog_mode.m"
              {
#line 750 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_mode__Module_11, parse_tree__prog_mode__V_13_13);
              }
#line 749 "prog_mode.m"
            }
#line 753 "prog_mode.m"
          if (parse_tree__prog_mode__succeeded)
#line 752 "prog_mode.m"
            {
#line 752 "prog_mode.m"
              parse_tree__prog_mode__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 752 "prog_mode.m"
            }
#line 753 "prog_mode.m"
          else
#line 754 "prog_mode.m"
            parse_tree__prog_mode__Name_8 = parse_tree__prog_mode__Name0_5;
#line 739 "prog_mode.m"
          {
#line 739 "prog_mode.m"
            MR_Word base;
#line 739 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 739 "prog_mode.m"
            *parse_tree__prog_mode__ConsId_4 = base;
#line 739 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_8));
#line 739 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_6));
#line 739 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_7));
#line 739 "prog_mode.m"
          }
#line 738 "prog_mode.m"
        }
#line 737 "prog_mode.m"
      }
#line 737 "prog_mode.m"
    else
#line 741 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_4 = parse_tree__prog_mode__ConsId0_3;
#line 740 "prog_mode.m"
  }
#line 131 "prog_mode.m"
}

#line 126 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_id_to_int_2_p_0(
#line 126 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 126 "prog_mode.m"
  MR_Integer * parse_tree__prog_mode__X_4)
#line 126 "prog_mode.m"
{
#line 710 "prog_mode.m"
  {
#line 710 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 710 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 710 "prog_mode.m"
    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 710 "prog_mode.m"
  }
#line 126 "prog_mode.m"
}

#line 123 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
#line 123 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_1,
#line 123 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 123 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 123 "prog_mode.m"
{
#line 660 "prog_mode.m"
  {
#line 660 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 660 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "prog_mode.m"
    else
#line 662 "prog_mode.m"
      {
#line 662 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 662 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId_8;
#line 662 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsIds_9;
#line 662 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
#line 653 "prog_mode.m"
        MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
#line 656 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_15;
#line 656 "prog_mode.m"
        MR_Integer parse_tree__prog_mode__Arity_16;
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode___TypeCtor_17;

#line 654 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 654 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 654 "prog_mode.m"
          {
#line 654 "prog_mode.m"
            parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
#line 654 "prog_mode.m"
            parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
#line 654 "prog_mode.m"
            parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
#line 655 "prog_mode.m"
            {
#line 655 "prog_mode.m"
              parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 655 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 655 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
#line 655 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
#line 655 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
#line 655 "prog_mode.m"
            }
#line 654 "prog_mode.m"
          }
#line 654 "prog_mode.m"
        else
#line 657 "prog_mode.m"
          parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
#line 664 "prog_mode.m"
        {
#line 664 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
        }
#line 662 "prog_mode.m"
        {
#line 662 "prog_mode.m"
          MR_Word base;
#line 662 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 662 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
#line 662 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
#line 662 "prog_mode.m"
        }
#line 662 "prog_mode.m"
      }
#line 660 "prog_mode.m"
  }
#line 123 "prog_mode.m"
}

#line 121 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
#line 121 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_4,
#line 121 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_5,
#line 121 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_6)
#line 121 "prog_mode.m"
{
#line 652 "prog_mode.m"
  {
#line 652 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 652 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
#line 653 "prog_mode.m"
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
#line 656 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_9;
#line 656 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_10;
#line 654 "prog_mode.m"
    MR_Word parse_tree__prog_mode___TypeCtor_11;

#line 654 "prog_mode.m"
    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 654 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 654 "prog_mode.m"
      {
#line 654 "prog_mode.m"
        parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
#line 654 "prog_mode.m"
        parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
#line 654 "prog_mode.m"
        parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
#line 655 "prog_mode.m"
        {
#line 655 "prog_mode.m"
          MR_Word base;
#line 655 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 655 "prog_mode.m"
          *parse_tree__prog_mode__ConsId_6 = base;
#line 655 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 655 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
#line 655 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
#line 655 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
#line 655 "prog_mode.m"
        }
#line 654 "prog_mode.m"
      }
#line 654 "prog_mode.m"
    else
#line 657 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
#line 652 "prog_mode.m"
  }
#line 121 "prog_mode.m"
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
#line 673 "prog_mode.m"
  {
#line 673 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 673 "prog_mode.m"
    if ((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 673 "prog_mode.m"
      {
#line 674 "prog_mode.m"
        {
#line 674 "prog_mode.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
        }
#line 673 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 673 "prog_mode.m"
      }
#line 673 "prog_mode.m"
    else
#line 673 "prog_mode.m"
      if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 2))))
#line 692 "prog_mode.m"
        {
#line 692 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_17_17;
#line 692 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
#line 692 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

#line 693 "prog_mode.m"
          {
#line 693 "prog_mode.m"
            parse_tree__prog_mode__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_24));
#line 693 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_mode.m"
          }
#line 693 "prog_mode.m"
          {
#line 693 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_17_17)), parse_tree__prog_mode__ArgInsts_8);
          }
#line 692 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 692 "prog_mode.m"
        }
#line 673 "prog_mode.m"
      else
#line 673 "prog_mode.m"
        if ((((parse_tree__prog_mode__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 1))))))
#line 689 "prog_mode.m"
          {
#line 690 "prog_mode.m"
            {
#line 690 "prog_mode.m"
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
            }
#line 689 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 689 "prog_mode.m"
          }
#line 673 "prog_mode.m"
        else
#line 673 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 679 "prog_mode.m"
            {
#line 679 "prog_mode.m"
              MR_Word parse_tree__prog_mode__List_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
#line 679 "prog_mode.m"
              MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 679 "prog_mode.m"
              MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
#line 682 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_14;

#line 680 "prog_mode.m"
              {
#line 680 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__List_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
              }
#line 682 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 681 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
#line 682 "prog_mode.m"
              else
#line 684 "prog_mode.m"
                {
#line 684 "prog_mode.m"
                  {
#line 684 "prog_mode.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
#line 684 "prog_mode.m"
                }
#line 679 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 679 "prog_mode.m"
            }
#line 673 "prog_mode.m"
          else
#line 673 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 676 "prog_mode.m"
              {
#line 676 "prog_mode.m"
                MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 676 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 676 "prog_mode.m"
                MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

#line 677 "prog_mode.m"
                {
#line 677 "prog_mode.m"
                  parse_tree__prog_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 677 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
#line 677 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_mode.m"
                }
#line 677 "prog_mode.m"
                {
#line 677 "prog_mode.m"
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_21_21)), parse_tree__prog_mode__ArgInsts_8);
                }
#line 676 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 676 "prog_mode.m"
              }
#line 673 "prog_mode.m"
            else
#line 673 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_FALSE;
#line 673 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 673 "prog_mode.m"
  }
#line 115 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 573 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12);
#line 577 "prog_mode.m"
    {
#line 577 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
#line 577 "prog_mode.m"
      return;
    }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 586 "prog_mode.m"
    {
#line 586 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
#line 586 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 586 "prog_mode.m"
      {
#line 586 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
#line 586 "prog_mode.m"
        return;
      }
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 584 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 584 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 584 "prog_mode.m"
{
#line 584 "prog_mode.m"
  {
#line 584 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13);
#line 584 "prog_mode.m"
    {
#line 584 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
#line 584 "prog_mode.m"
      return;
    }
#line 584 "prog_mode.m"
  }
#line 584 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 580 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
#line 580 "prog_mode.m"
      {
#line 580 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 580 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 579 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_74_74;
#line 579 "prog_mode.m"
        {
#line 579 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 581 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_73_73;
#line 581 "prog_mode.m"
        {
#line 581 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(parse_tree__prog_mode__env_ptr);
        }
#line 580 "prog_mode.m"
      }
#line 580 "prog_mode.m"
    else
#line 583 "prog_mode.m"
      {
#line 583 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 583 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 584 "prog_mode.m"
        {
#line 584 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5, parse_tree__prog_mode__env_ptr);
        }
#line 583 "prog_mode.m"
      }
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 573 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 573 "prog_mode.m"
      {
#line 573 "prog_mode.m"
        {
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_38;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_9;
#line 572 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_11;

#line 574 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
#line 574 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 574 "prog_mode.m"
            {
#line 574 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
#line 573 "prog_mode.m"
              {
#line 575 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
#line 7374 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 577 "prog_mode.m"
                {
#line 577 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_38, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
                }
#line 573 "prog_mode.m"
              }
#line 574 "prog_mode.m"
            }
#line 573 "prog_mode.m"
        }
#line 573 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 573 "prog_mode.m"
      }
#line 573 "prog_mode.m"
    else
#line 573 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 600 "prog_mode.m"
{
#line 600 "prog_mode.m"
  {
#line 600 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 600 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
#line 600 "prog_mode.m"
  }
#line 600 "prog_mode.m"
}

#line 601 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 601 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 601 "prog_mode.m"
{
#line 601 "prog_mode.m"
  {
#line 601 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 601 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37);
#line 601 "prog_mode.m"
    {
#line 601 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
#line 601 "prog_mode.m"
      return;
    }
#line 601 "prog_mode.m"
  }
#line 601 "prog_mode.m"
}

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 600 "prog_mode.m"
{
#line 600 "prog_mode.m"
  {
#line 600 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 602 "prog_mode.m"
    {
#line 602 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_37);
    }
#line 602 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 602 "prog_mode.m"
      {
#line 602 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(parse_tree__prog_mode__env_ptr);
#line 602 "prog_mode.m"
        return;
      }
#line 600 "prog_mode.m"
  }
#line 600 "prog_mode.m"
}

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 600 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 600 "prog_mode.m"
{
#line 600 "prog_mode.m"
  {
#line 600 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 600 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
#line 600 "prog_mode.m"
      {
#line 600 "prog_mode.m"
        {
#line 600 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 600 "prog_mode.m"
          MR_Word parse_tree__prog_mode___SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 601 "prog_mode.m"
          {
#line 601 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_ArgInst_37, parse_tree__prog_mode__ArgInsts_36, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
          }
#line 600 "prog_mode.m"
        }
#line 600 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 600 "prog_mode.m"
      }
#line 600 "prog_mode.m"
    else
#line 600 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 600 "prog_mode.m"
  }
#line 600 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 588 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 592 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 592 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 592 "prog_mode.m"
{
#line 592 "prog_mode.m"
  {
#line 592 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 592 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24);
#line 592 "prog_mode.m"
    {
#line 592 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
#line 592 "prog_mode.m"
      return;
    }
#line 592 "prog_mode.m"
  }
#line 592 "prog_mode.m"
}

#line 594 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 594 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 594 "prog_mode.m"
{
#line 594 "prog_mode.m"
  {
#line 594 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 594 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27);
#line 594 "prog_mode.m"
    {
#line 594 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
#line 594 "prog_mode.m"
      return;
    }
#line 594 "prog_mode.m"
  }
#line 594 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 595 "prog_mode.m"
    {
#line 595 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_27);
    }
#line 595 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 595 "prog_mode.m"
      {
#line 595 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
#line 595 "prog_mode.m"
        return;
      }
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 588 "prog_mode.m"
    {
#line 593 "prog_mode.m"
      MR_Word parse_tree__prog_mode___ConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 0)));

#line 593 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_24, (MR_Integer) 1)));
#line 7640 "parse_tree.prog_mode.c"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 594 "prog_mode.m"
      {
#line 594 "prog_mode.m"
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_27, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_26, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
#line 588 "prog_mode.m"
    }
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 588 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 588 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 588 "prog_mode.m"
{
#line 588 "prog_mode.m"
  {
#line 588 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 588 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
#line 588 "prog_mode.m"
      {
#line 588 "prog_mode.m"
        {
#line 588 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_40_40;
#line 588 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 588 "prog_mode.m"
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
#line 588 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 590 "prog_mode.m"
          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 590 "prog_mode.m"
          else
#line 590 "prog_mode.m"
            if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
#line 590 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 590 "prog_mode.m"
            else
#line 590 "prog_mode.m"
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 588 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 588 "prog_mode.m"
            {
#line 7699 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 592 "prog_mode.m"
              {
#line 592 "prog_mode.m"
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_40_40, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_24, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
              }
#line 588 "prog_mode.m"
            }
#line 588 "prog_mode.m"
        }
#line 588 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 588 "prog_mode.m"
      }
#line 588 "prog_mode.m"
    else
#line 588 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 588 "prog_mode.m"
  }
#line 588 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 573 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 577 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 577 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 577 "prog_mode.m"
{
#line 577 "prog_mode.m"
  {
#line 577 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 577 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65);
#line 577 "prog_mode.m"
    {
#line 577 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
#line 577 "prog_mode.m"
      return;
    }
#line 577 "prog_mode.m"
  }
#line 577 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 586 "prog_mode.m"
    {
#line 586 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66);
    }
#line 586 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 586 "prog_mode.m"
      {
#line 586 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
#line 586 "prog_mode.m"
        return;
      }
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 584 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 584 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 584 "prog_mode.m"
{
#line 584 "prog_mode.m"
  {
#line 584 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 584 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66);
#line 584 "prog_mode.m"
    {
#line 584 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
#line 584 "prog_mode.m"
      return;
    }
#line 584 "prog_mode.m"
  }
#line 584 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 580 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65)) == (MR_mktag((MR_Integer) 0))))
#line 580 "prog_mode.m"
      {
#line 580 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 580 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 579 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_76_76;
#line 579 "prog_mode.m"
        {
#line 579 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 581 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_66 = parse_tree__prog_mode__V_75_75;
#line 581 "prog_mode.m"
        {
#line 581 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 580 "prog_mode.m"
      }
#line 580 "prog_mode.m"
    else
#line 583 "prog_mode.m"
      {
#line 583 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 1)));
#line 583 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_65, (MR_Integer) 0)));

#line 584 "prog_mode.m"
        {
#line 584 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_66, parse_tree__prog_mode__SubInsts_52, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
        }
#line 583 "prog_mode.m"
      }
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
}

#line 573 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 573 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 573 "prog_mode.m"
{
#line 573 "prog_mode.m"
  {
#line 573 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 573 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
#line 573 "prog_mode.m"
      {
#line 573 "prog_mode.m"
        {
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_38_71;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_60;
#line 573 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_62;
#line 571 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_43;
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_44;
#line 575 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_45;

#line 574 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_59)) == (MR_mktag((MR_Integer) 1)));
#line 574 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 574 "prog_mode.m"
            {
#line 574 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_59), (MR_Integer) 1);
#line 573 "prog_mode.m"
              {
#line 575 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 0)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 1)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 2)));
#line 575 "prog_mode.m"
                parse_tree__prog_mode___Detism_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_60, (MR_Integer) 3)));
#line 7936 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_38_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 577 "prog_mode.m"
                {
#line 577 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_38_71, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_65, parse_tree__prog_mode__Modes_62, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
                }
#line 573 "prog_mode.m"
              }
#line 574 "prog_mode.m"
            }
#line 573 "prog_mode.m"
        }
#line 573 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 573 "prog_mode.m"
      }
#line 573 "prog_mode.m"
    else
#line 573 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 573 "prog_mode.m"
  }
#line 573 "prog_mode.m"
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
#line 568 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 2))))
#line 573 "prog_mode.m"
      {
#line 573 "prog_mode.m"
        {
#line 573 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(&parse_tree__prog_mode__env);
        }
#line 573 "prog_mode.m"
      }
#line 568 "prog_mode.m"
    else
#line 568 "prog_mode.m"
      if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 600 "prog_mode.m"
        {
#line 600 "prog_mode.m"
          {
#line 600 "prog_mode.m"
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
#line 600 "prog_mode.m"
        }
#line 568 "prog_mode.m"
      else
#line 568 "prog_mode.m"
        if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 588 "prog_mode.m"
          {
#line 588 "prog_mode.m"
            {
#line 588 "prog_mode.m"
              parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
            }
#line 588 "prog_mode.m"
          }
#line 568 "prog_mode.m"
        else
#line 568 "prog_mode.m"
          if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 597 "prog_mode.m"
            {
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 598 "prog_mode.m"
              {
#line 598 "prog_mode.m"
                return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_28);
              }
#line 597 "prog_mode.m"
            }
#line 568 "prog_mode.m"
          else
#line 568 "prog_mode.m"
            if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 573 "prog_mode.m"
              {
#line 573 "prog_mode.m"
                {
#line 573 "prog_mode.m"
                  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
                }
#line 573 "prog_mode.m"
              }
#line 568 "prog_mode.m"
            else
#line 568 "prog_mode.m"
              if (((((MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 569 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 568 "prog_mode.m"
              else
#line 568 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 568 "prog_mode.m"
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 107 "prog_mode.m"
  }
#line 107 "prog_mode.m"
}

#line 437 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 437 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 437 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 437 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 437 "prog_mode.m"
{
#line 437 "prog_mode.m"
  {
#line 437 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 437 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 437 "prog_mode.m"
    {
#line 437 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 437 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 437 "prog_mode.m"
  }
#line 437 "prog_mode.m"
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
#line 435 "prog_mode.m"
  {
#line 435 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 435 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_16_16;
#line 435 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Renaming_11;
#line 435 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 436 "prog_mode.m"
    {
#line 436 "prog_mode.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_6, parse_tree__prog_mode__NewVarSet_7, parse_tree__prog_mode__MergedVarSet_8, &parse_tree__prog_mode__Renaming_11);
    }
#line 437 "prog_mode.m"
    {
#line 437 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 437 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
#line 437 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 437 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_11));
#line 437 "prog_mode.m"
    }
#line 8134 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 437 "prog_mode.m"
    {
#line 437 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_9, parse_tree__prog_mode__Modes_10);
#line 437 "prog_mode.m"
      return;
    }
#line 435 "prog_mode.m"
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
#line 421 "prog_mode.m"
  {
#line 421 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 419 "prog_mode.m"
    {
#line 419 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 421 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 420 "prog_mode.m"
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
#line 421 "prog_mode.m"
    else
#line 422 "prog_mode.m"
      {
#line 422 "prog_mode.m"
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
#line 422 "prog_mode.m"
        return;
      }
#line 421 "prog_mode.m"
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
#line 313 "prog_mode.m"
  {
#line 313 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 313 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 320 "prog_mode.m"
      {
#line 320 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 320 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 320 "prog_mode.m"
        MR_Word parse_tree__prog_mode__HOInstInfo_36;

#line 321 "prog_mode.m"
        {
#line 321 "prog_mode.m"
          parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_35, &parse_tree__prog_mode__HOInstInfo_36);
        }
#line 322 "prog_mode.m"
        {
#line 322 "prog_mode.m"
          MR_Word base;
#line 322 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_mode.m"
          *parse_tree__prog_mode__Inst_6 = base;
#line 322 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_34));
#line 322 "prog_mode.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_36));
#line 322 "prog_mode.m"
        }
#line 320 "prog_mode.m"
      }
#line 313 "prog_mode.m"
    else
#line 313 "prog_mode.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 367 "prog_mode.m"
        {
#line 367 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 367 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 367 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_29;

#line 368 "prog_mode.m"
          {
#line 368 "prog_mode.m"
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_28, &parse_tree__prog_mode__ArgInsts_29);
          }
#line 369 "prog_mode.m"
          {
#line 369 "prog_mode.m"
            MR_Word base;
#line 369 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 369 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 369 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_27));
#line 369 "prog_mode.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_29));
#line 369 "prog_mode.m"
          }
#line 367 "prog_mode.m"
        }
#line 313 "prog_mode.m"
      else
#line 313 "prog_mode.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 324 "prog_mode.m"
          {
#line 324 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 324 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 324 "prog_mode.m"
            MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 329 "prog_mode.m"
            if ((parse_tree__prog_mode__InstResults0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 328 "prog_mode.m"
              *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 329 "prog_mode.m"
            else
#line 332 "prog_mode.m"
              {
#line 332 "prog_mode.m"
                MR_Word parse_tree__prog_mode__BoundInsts_18;

#line 333 "prog_mode.m"
                {
#line 333 "prog_mode.m"
                  parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_18);
                }
#line 335 "prog_mode.m"
                {
#line 335 "prog_mode.m"
                  MR_Word base;
#line 335 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 335 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 335 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 335 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_18));
#line 335 "prog_mode.m"
                }
#line 332 "prog_mode.m"
              }
#line 324 "prog_mode.m"
          }
#line 313 "prog_mode.m"
        else
#line 313 "prog_mode.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 345 "prog_mode.m"
            {
#line 345 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 345 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 345 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_38;
#line 348 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_23;
#line 346 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv0_Var0_23;
#line 355 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_37;
#line 351 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_37;

#line 346 "prog_mode.m"
              {
#line 346 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_21, &parse_tree__prog_mode__conv0_Var0_23);
              }
#line 346 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 346 "prog_mode.m"
                {
#line 346 "prog_mode.m"
                  parse_tree__prog_mode__Var0_23 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_23);
#line 346 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 346 "prog_mode.m"
                }
#line 348 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 347 "prog_mode.m"
                parse_tree__prog_mode__Var_38 = parse_tree__prog_mode__Var0_23;
#line 348 "prog_mode.m"
              else
#line 349 "prog_mode.m"
                {
#line 349 "prog_mode.m"
                  {
#line 349 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
#line 349 "prog_mode.m"
                    return;
                  }
#line 349 "prog_mode.m"
                }
#line 351 "prog_mode.m"
              {
#line 351 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_38)), &parse_tree__prog_mode__conv1_ReplacementInst_37);
              }
#line 351 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 351 "prog_mode.m"
                {
#line 351 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_37 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_37);
#line 351 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 351 "prog_mode.m"
                }
#line 355 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 352 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_37;
#line 355 "prog_mode.m"
              else
#line 356 "prog_mode.m"
                {
#line 356 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_24;

#line 356 "prog_mode.m"
                  {
#line 356 "prog_mode.m"
                    parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_22, &parse_tree__prog_mode__SubInst_24);
                  }
#line 357 "prog_mode.m"
                  {
#line 357 "prog_mode.m"
                    MR_Word base;
#line 357 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 357 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 357 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_21));
#line 357 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_24));
#line 357 "prog_mode.m"
                  }
#line 356 "prog_mode.m"
                }
#line 345 "prog_mode.m"
            }
#line 313 "prog_mode.m"
          else
#line 313 "prog_mode.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 360 "prog_mode.m"
              {
#line 360 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 363 "prog_mode.m"
                MR_Word parse_tree__prog_mode__InstName_26;

#line 361 "prog_mode.m"
                {
#line 361 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_25, &parse_tree__prog_mode__InstName_26);
                }
#line 363 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 362 "prog_mode.m"
                  {
#line 362 "prog_mode.m"
                    MR_Word base;
#line 362 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 362 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 362 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_26));
#line 362 "prog_mode.m"
                  }
#line 363 "prog_mode.m"
                else
#line 364 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 360 "prog_mode.m"
              }
#line 313 "prog_mode.m"
            else
#line 313 "prog_mode.m"
              if ((((((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__prog_mode__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 314 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 313 "prog_mode.m"
              else
#line 313 "prog_mode.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 316 "prog_mode.m"
                  {
#line 316 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 316 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 316 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__HOInstInfo_10;

#line 317 "prog_mode.m"
                    {
#line 317 "prog_mode.m"
                      parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_9, &parse_tree__prog_mode__HOInstInfo_10);
                    }
#line 318 "prog_mode.m"
                    {
#line 318 "prog_mode.m"
                      MR_Word base;
#line 318 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = base;
#line 318 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 318 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 318 "prog_mode.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
#line 318 "prog_mode.m"
                    }
#line 316 "prog_mode.m"
                  }
#line 313 "prog_mode.m"
                else
#line 338 "prog_mode.m"
                  {
#line 338 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 341 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__ReplacementInst_20;
#line 339 "prog_mode.m"
                    MR_Box parse_tree__prog_mode__conv2_ReplacementInst_20;

#line 339 "prog_mode.m"
                    {
#line 339 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_19)), &parse_tree__prog_mode__conv2_ReplacementInst_20);
                    }
#line 339 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 339 "prog_mode.m"
                      {
#line 339 "prog_mode.m"
                        parse_tree__prog_mode__ReplacementInst_20 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_20);
#line 339 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 339 "prog_mode.m"
                      }
#line 341 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 340 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_20;
#line 341 "prog_mode.m"
                    else
#line 342 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 338 "prog_mode.m"
                  }
#line 313 "prog_mode.m"
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
#line 296 "prog_mode.m"
  {
#line 296 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 294 "prog_mode.m"
    {
#line 294 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 296 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 295 "prog_mode.m"
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
#line 296 "prog_mode.m"
    else
#line 297 "prog_mode.m"
      {
#line 297 "prog_mode.m"
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
#line 297 "prog_mode.m"
        return;
      }
#line 296 "prog_mode.m"
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
#line 272 "prog_mode.m"
  {
#line 272 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 272 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "prog_mode.m"
      *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
#line 272 "prog_mode.m"
    else
#line 275 "prog_mode.m"
      {
#line 275 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 276 "prog_mode.m"
        {
#line 276 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
        }
#line 277 "prog_mode.m"
        {
#line 277 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
#line 277 "prog_mode.m"
          return;
        }
#line 275 "prog_mode.m"
      }
#line 272 "prog_mode.m"
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
#line 232 "prog_mode.m"
  {
#line 232 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_7_7;
#line 230 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_8_8;

#line 230 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 230 "prog_mode.m"
      {
#line 230 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 230 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 230 "prog_mode.m"
          {
#line 230 "prog_mode.m"
            parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 230 "prog_mode.m"
            parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 230 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_7_7 == (MR_Integer) 0);
#line 230 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 230 "prog_mode.m"
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "prog_mode.m"
          }
#line 230 "prog_mode.m"
      }
#line 232 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 231 "prog_mode.m"
      {
#line 231 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
#line 231 "prog_mode.m"
        MR_Word parse_tree__prog_mode__QualifiedName_67;

#line 210 "prog_mode.m"
        {
#line 210 "prog_mode.m"
          parse_tree__prog_mode__MercuryBuiltin_66 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 211 "prog_mode.m"
        {
#line 211 "prog_mode.m"
          parse_tree__prog_mode__QualifiedName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_66));
#line 211 "prog_mode.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 1) = ((MR_Box) ((MR_String) "out"));
#line 211 "prog_mode.m"
        }
#line 212 "prog_mode.m"
        {
#line 212 "prog_mode.m"
          MR_Word base;
#line 212 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 212 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_67));
#line 212 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
        }
#line 231 "prog_mode.m"
      }
#line 232 "prog_mode.m"
    else
#line 234 "prog_mode.m"
      {
#line 232 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_11_11;
#line 232 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_12_12;

#line 232 "prog_mode.m"
        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 232 "prog_mode.m"
          {
#line 232 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 232 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 232 "prog_mode.m"
              {
#line 232 "prog_mode.m"
                parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 232 "prog_mode.m"
                parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 232 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_11_11 == (MR_Integer) 1);
#line 232 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 232 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_mode.m"
              }
#line 232 "prog_mode.m"
          }
#line 234 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 233 "prog_mode.m"
          {
#line 233 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
#line 233 "prog_mode.m"
            MR_Word parse_tree__prog_mode__QualifiedName_74;

#line 210 "prog_mode.m"
            {
#line 210 "prog_mode.m"
              parse_tree__prog_mode__MercuryBuiltin_73 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 211 "prog_mode.m"
            {
#line 211 "prog_mode.m"
              parse_tree__prog_mode__QualifiedName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_73));
#line 211 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 1) = ((MR_Box) ((MR_String) "uo"));
#line 211 "prog_mode.m"
            }
#line 212 "prog_mode.m"
            {
#line 212 "prog_mode.m"
              MR_Word base;
#line 212 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
              *parse_tree__prog_mode__Mode_6 = base;
#line 212 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_74));
#line 212 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
            }
#line 233 "prog_mode.m"
          }
#line 234 "prog_mode.m"
        else
#line 236 "prog_mode.m"
          {
#line 234 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_15_15;
#line 234 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_16_16;

#line 234 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 234 "prog_mode.m"
                    parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 234 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_15_15 == (MR_Integer) 2);
#line 234 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 234 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_mode.m"
                  }
#line 234 "prog_mode.m"
              }
#line 236 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 235 "prog_mode.m"
              {
#line 235 "prog_mode.m"
                MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
#line 235 "prog_mode.m"
                MR_Word parse_tree__prog_mode__QualifiedName_81;

#line 210 "prog_mode.m"
                {
#line 210 "prog_mode.m"
                  parse_tree__prog_mode__MercuryBuiltin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 211 "prog_mode.m"
                {
#line 211 "prog_mode.m"
                  parse_tree__prog_mode__QualifiedName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_80));
#line 211 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 1) = ((MR_Box) ((MR_String) "muo"));
#line 211 "prog_mode.m"
                }
#line 212 "prog_mode.m"
                {
#line 212 "prog_mode.m"
                  MR_Word base;
#line 212 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
                  *parse_tree__prog_mode__Mode_6 = base;
#line 212 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_81));
#line 212 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
                }
#line 235 "prog_mode.m"
              }
#line 236 "prog_mode.m"
            else
#line 238 "prog_mode.m"
              {
#line 236 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_19_19;
#line 236 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_20_20;
#line 236 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_21_21;
#line 236 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_22_22;

#line 236 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 236 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                  {
#line 236 "prog_mode.m"
                    parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 236 "prog_mode.m"
                    parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 236 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_19_19 == (MR_Integer) 0);
#line 236 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                      {
#line 236 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 236 "prog_mode.m"
                                parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 236 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_21_21 == (MR_Integer) 0);
#line 236 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 236 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
#line 237 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_88;

#line 210 "prog_mode.m"
                    {
#line 210 "prog_mode.m"
                      parse_tree__prog_mode__MercuryBuiltin_87 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 211 "prog_mode.m"
                    {
#line 211 "prog_mode.m"
                      parse_tree__prog_mode__QualifiedName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_87));
#line 211 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "in"));
#line 211 "prog_mode.m"
                    }
#line 212 "prog_mode.m"
                    {
#line 212 "prog_mode.m"
                      MR_Word base;
#line 212 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
                      *parse_tree__prog_mode__Mode_6 = base;
#line 212 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_88));
#line 212 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
                    }
#line 237 "prog_mode.m"
                  }
#line 238 "prog_mode.m"
                else
#line 240 "prog_mode.m"
                  {
#line 238 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_25_25;
#line 238 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_26_26;
#line 238 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_27_27;
#line 238 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_28_28;

#line 238 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 238 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                      {
#line 238 "prog_mode.m"
                        parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 238 "prog_mode.m"
                        parse_tree__prog_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 238 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_25_25 == (MR_Integer) 1);
#line 238 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                          {
#line 238 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                    parse_tree__prog_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 238 "prog_mode.m"
                                    parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 238 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_27_27 == (MR_Integer) 3);
#line 238 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
                                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_mode.m"
                                  }
#line 238 "prog_mode.m"
                              }
#line 238 "prog_mode.m"
                          }
#line 238 "prog_mode.m"
                      }
#line 240 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
                      {
#line 239 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
#line 239 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__QualifiedName_95;

#line 210 "prog_mode.m"
                        {
#line 210 "prog_mode.m"
                          parse_tree__prog_mode__MercuryBuiltin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 211 "prog_mode.m"
                        {
#line 211 "prog_mode.m"
                          parse_tree__prog_mode__QualifiedName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_94));
#line 211 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "di"));
#line 211 "prog_mode.m"
                        }
#line 212 "prog_mode.m"
                        {
#line 212 "prog_mode.m"
                          MR_Word base;
#line 212 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
                          *parse_tree__prog_mode__Mode_6 = base;
#line 212 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_95));
#line 212 "prog_mode.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
                        }
#line 239 "prog_mode.m"
                      }
#line 240 "prog_mode.m"
                    else
#line 243 "prog_mode.m"
                      {
#line 240 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_31_31;
#line 240 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_32_32;
#line 240 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_33_33;
#line 240 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_34_34;

#line 240 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 240 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                          {
#line 240 "prog_mode.m"
                            parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 240 "prog_mode.m"
                            parse_tree__prog_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 240 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_31_31 == (MR_Integer) 2);
#line 240 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                              {
#line 240 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
                                  {
#line 241 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 241 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                                      {
#line 241 "prog_mode.m"
                                        parse_tree__prog_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 241 "prog_mode.m"
                                        parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 241 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_33_33 == (MR_Integer) 4);
#line 240 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "prog_mode.m"
                                      }
#line 240 "prog_mode.m"
                                  }
#line 240 "prog_mode.m"
                              }
#line 240 "prog_mode.m"
                          }
#line 243 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                          {
#line 242 "prog_mode.m"
                            {
#line 242 "prog_mode.m"
                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
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
                            MR_Word parse_tree__prog_mode__V_37_37;
#line 243 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_38_38;
#line 243 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_39_39;
#line 243 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_40_40;

#line 243 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 243 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                              {
#line 243 "prog_mode.m"
                                parse_tree__prog_mode__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 243 "prog_mode.m"
                                parse_tree__prog_mode__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 243 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_37_37 == (MR_Integer) 1);
#line 243 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                  {
#line 243 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                      {
#line 243 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 243 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                          {
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 243 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_39_39 == (MR_Integer) 1);
#line 243 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_mode.m"
                                          }
#line 243 "prog_mode.m"
                                      }
#line 243 "prog_mode.m"
                                  }
#line 243 "prog_mode.m"
                              }
#line 245 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                              {
#line 244 "prog_mode.m"
                                {
#line 244 "prog_mode.m"
                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 244 "prog_mode.m"
                                  return;
                                }
#line 244 "prog_mode.m"
                              }
#line 245 "prog_mode.m"
                            else
#line 248 "prog_mode.m"
                              {
#line 245 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_43_43;
#line 245 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_44_44;
#line 245 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_45_45;
#line 245 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_46_46;

#line 245 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 245 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 245 "prog_mode.m"
                                  {
#line 245 "prog_mode.m"
                                    parse_tree__prog_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 245 "prog_mode.m"
                                    parse_tree__prog_mode__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 245 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_43_43 == (MR_Integer) 2);
#line 245 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 245 "prog_mode.m"
                                      {
#line 245 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 245 "prog_mode.m"
                                          {
#line 246 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 246 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 246 "prog_mode.m"
                                              {
#line 246 "prog_mode.m"
                                                parse_tree__prog_mode__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 246 "prog_mode.m"
                                                parse_tree__prog_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 246 "prog_mode.m"
                                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_45_45 == (MR_Integer) 2);
#line 245 "prog_mode.m"
                                                if (parse_tree__prog_mode__succeeded)
#line 246 "prog_mode.m"
                                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_mode.m"
                                              }
#line 245 "prog_mode.m"
                                          }
#line 245 "prog_mode.m"
                                      }
#line 245 "prog_mode.m"
                                  }
#line 248 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                                  {
#line 247 "prog_mode.m"
                                    {
#line 247 "prog_mode.m"
                                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
#line 247 "prog_mode.m"
                                      return;
                                    }
#line 247 "prog_mode.m"
                                  }
#line 248 "prog_mode.m"
                                else
#line 250 "prog_mode.m"
                                  {
#line 248 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
                                      {
#line 249 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_50_50;

#line 249 "prog_mode.m"
                                        {
#line 249 "prog_mode.m"
                                          parse_tree__prog_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 249 "prog_mode.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "prog_mode.m"
                                        }
#line 249 "prog_mode.m"
                                        {
#line 249 "prog_mode.m"
                                          parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "out", parse_tree__prog_mode__V_50_50, parse_tree__prog_mode__Mode_6);
#line 249 "prog_mode.m"
                                          return;
                                        }
#line 249 "prog_mode.m"
                                      }
#line 250 "prog_mode.m"
                                    else
#line 252 "prog_mode.m"
                                      {
#line 250 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_52_52;
#line 250 "prog_mode.m"
                                        MR_Word parse_tree__prog_mode__V_53_53;

#line 250 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 250 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
                                          {
#line 250 "prog_mode.m"
                                            parse_tree__prog_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 250 "prog_mode.m"
                                            parse_tree__prog_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 250 "prog_mode.m"
                                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_52_52 == (MR_Integer) 3);
#line 250 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_mode.m"
                                          }
#line 252 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 251 "prog_mode.m"
                                          {
#line 251 "prog_mode.m"
                                            MR_Word parse_tree__prog_mode__V_55_55;

#line 251 "prog_mode.m"
                                            {
#line 251 "prog_mode.m"
                                              parse_tree__prog_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 251 "prog_mode.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_mode.m"
                                            }
#line 251 "prog_mode.m"
                                            {
#line 251 "prog_mode.m"
                                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__V_55_55, parse_tree__prog_mode__Mode_6);
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
                                            {
#line 252 "prog_mode.m"
                                              parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                                            }
#line 254 "prog_mode.m"
                                            if (parse_tree__prog_mode__succeeded)
#line 253 "prog_mode.m"
                                              {
#line 253 "prog_mode.m"
                                                MR_Word parse_tree__prog_mode__V_58_58;

#line 253 "prog_mode.m"
                                                {
#line 253 "prog_mode.m"
                                                  parse_tree__prog_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 253 "prog_mode.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_mode.m"
                                                }
#line 253 "prog_mode.m"
                                                {
#line 253 "prog_mode.m"
                                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__V_58_58, parse_tree__prog_mode__Mode_6);
#line 253 "prog_mode.m"
                                                  return;
                                                }
#line 253 "prog_mode.m"
                                              }
#line 254 "prog_mode.m"
                                            else
#line 255 "prog_mode.m"
                                              {
#line 255 "prog_mode.m"
                                                MR_Word base;
#line 255 "prog_mode.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "prog_mode.m"
                                                *parse_tree__prog_mode__Mode_6 = base;
#line 255 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 255 "prog_mode.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 255 "prog_mode.m"
                                              }
#line 254 "prog_mode.m"
                                          }
#line 252 "prog_mode.m"
                                      }
#line 250 "prog_mode.m"
                                  }
#line 248 "prog_mode.m"
                              }
#line 245 "prog_mode.m"
                          }
#line 243 "prog_mode.m"
                      }
#line 240 "prog_mode.m"
                  }
#line 238 "prog_mode.m"
              }
#line 236 "prog_mode.m"
          }
#line 234 "prog_mode.m"
      }
#line 232 "prog_mode.m"
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
#line 216 "prog_mode.m"
  {
#line 216 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 216 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "prog_mode.m"
      if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "prog_mode.m"
      else
#line 216 "prog_mode.m"
        {
#line 217 "prog_mode.m"
          {
#line 217 "prog_mode.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 217 "prog_mode.m"
            return;
          }
#line 216 "prog_mode.m"
        }
#line 216 "prog_mode.m"
    else
#line 216 "prog_mode.m"
      {
#line 216 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 216 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "prog_mode.m"
          {
#line 219 "prog_mode.m"
            {
#line 219 "prog_mode.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 219 "prog_mode.m"
              return;
            }
#line 218 "prog_mode.m"
          }
#line 216 "prog_mode.m"
        else
#line 222 "prog_mode.m"
          {
#line 222 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Final_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Finals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Mode_20;
#line 222 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_21;

#line 223 "prog_mode.m"
            {
#line 223 "prog_mode.m"
              parse_tree__prog_mode__insts_to_mode_3_p_0(parse_tree__prog_mode__V_23_23, parse_tree__prog_mode__Final_18, &parse_tree__prog_mode__Mode_20);
            }
#line 224 "prog_mode.m"
            {
#line 224 "prog_mode.m"
              parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(parse_tree__prog_mode__V_22_22, parse_tree__prog_mode__Finals_19, &parse_tree__prog_mode__Modes_21);
            }
#line 222 "prog_mode.m"
            {
#line 222 "prog_mode.m"
              MR_Word base;
#line 222 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_mode.m"
              *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 222 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_20));
#line 222 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_21));
#line 222 "prog_mode.m"
            }
#line 222 "prog_mode.m"
          }
#line 216 "prog_mode.m"
      }
#line 216 "prog_mode.m"
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
#line 262 "prog_mode.m"
  {
#line 262 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 262 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "prog_mode.m"
      *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
#line 262 "prog_mode.m"
    else
#line 265 "prog_mode.m"
      {
#line 265 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 266 "prog_mode.m"
        {
#line 266 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
        }
#line 286 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 286 "prog_mode.m"
          {
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_17;
#line 286 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_18;

#line 287 "prog_mode.m"
            {
#line 287 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_15, &parse_tree__prog_mode__I_17);
            }
#line 288 "prog_mode.m"
            {
#line 288 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_16, &parse_tree__prog_mode__F_18);
            }
#line 286 "prog_mode.m"
            {
#line 286 "prog_mode.m"
              MR_Word base;
#line 286 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 286 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_17));
#line 286 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_18));
#line 286 "prog_mode.m"
            }
#line 286 "prog_mode.m"
          }
#line 286 "prog_mode.m"
        else
#line 290 "prog_mode.m"
          {
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 290 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_22;

#line 291 "prog_mode.m"
            {
#line 291 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_21, &parse_tree__prog_mode__Args_22);
            }
#line 290 "prog_mode.m"
            {
#line 290 "prog_mode.m"
              MR_Word base;
#line 290 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 290 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_22));
#line 290 "prog_mode.m"
            }
#line 290 "prog_mode.m"
          }
#line 265 "prog_mode.m"
      }
#line 262 "prog_mode.m"
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
#line 209 "prog_mode.m"
  {
#line 209 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 209 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Mode_6;
#line 209 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 209 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 212 "prog_mode.m"
    }
#line 209 "prog_mode.m"
    return parse_tree__prog_mode__Mode_6;
#line 209 "prog_mode.m"
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
#line 209 "prog_mode.m"
  {
#line 209 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 209 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_9;
#line 209 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_10;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_9));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_10));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 212 "prog_mode.m"
    }
#line 209 "prog_mode.m"
  }
#line 52 "prog_mode.m"
}

#line 50 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
#line 50 "prog_mode.m"
{
#line 205 "prog_mode.m"
  {
#line 205 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 205 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[1]);
#line 205 "prog_mode.m"
  }
#line 50 "prog_mode.m"
}

#line 49 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
#line 49 "prog_mode.m"
{
#line 204 "prog_mode.m"
  {
#line 204 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 204 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "prog_mode.m"
  }
#line 49 "prog_mode.m"
}

#line 48 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
#line 48 "prog_mode.m"
{
#line 203 "prog_mode.m"
  {
#line 203 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 203 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 203 "prog_mode.m"
  }
#line 48 "prog_mode.m"
}

#line 46 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
#line 46 "prog_mode.m"
{
#line 201 "prog_mode.m"
  {
#line 201 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 212 "prog_mode.m"
    }
#line 201 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 201 "prog_mode.m"
  }
#line 46 "prog_mode.m"
}

#line 45 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
#line 45 "prog_mode.m"
{
#line 200 "prog_mode.m"
  {
#line 200 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 212 "prog_mode.m"
    }
#line 200 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 200 "prog_mode.m"
  }
#line 45 "prog_mode.m"
}

#line 44 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
#line 44 "prog_mode.m"
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

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 199 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 199 "prog_mode.m"
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
#line 199 "prog_mode.m"
  {
#line 199 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 199 "prog_mode.m"
  }
#line 43 "prog_mode.m"
}

#line 42 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
#line 42 "prog_mode.m"
{
#line 198 "prog_mode.m"
  {
#line 198 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 198 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 198 "prog_mode.m"
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
#line 198 "prog_mode.m"
  {
#line 198 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 198 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 198 "prog_mode.m"
  }
#line 41 "prog_mode.m"
}

#line 40 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
#line 40 "prog_mode.m"
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

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 197 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 197 "prog_mode.m"
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
#line 197 "prog_mode.m"
  {
#line 197 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 197 "prog_mode.m"
  }
#line 39 "prog_mode.m"
}

#line 38 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
#line 38 "prog_mode.m"
{
#line 196 "prog_mode.m"
  {
#line 196 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 196 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 196 "prog_mode.m"
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
#line 196 "prog_mode.m"
  {
#line 196 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 196 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 196 "prog_mode.m"
  }
#line 37 "prog_mode.m"
}

#line 36 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
#line 36 "prog_mode.m"
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

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 195 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 195 "prog_mode.m"
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
#line 195 "prog_mode.m"
  {
#line 195 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 195 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 195 "prog_mode.m"
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
#line 194 "prog_mode.m"
  {
#line 194 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 194 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 194 "prog_mode.m"
    {
#line 194 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 194 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "prog_mode.m"
    }
#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 212 "prog_mode.m"
    }
#line 194 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 194 "prog_mode.m"
  }
#line 34 "prog_mode.m"
}

#line 33 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
#line 33 "prog_mode.m"
{
#line 193 "prog_mode.m"
  {
#line 193 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 193 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 193 "prog_mode.m"
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
#line 193 "prog_mode.m"
  {
#line 193 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 193 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 193 "prog_mode.m"
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
#line 192 "prog_mode.m"
  {
#line 192 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 192 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 192 "prog_mode.m"
    {
#line 192 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 192 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "prog_mode.m"
    }
#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 212 "prog_mode.m"
    }
#line 192 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 192 "prog_mode.m"
  }
#line 31 "prog_mode.m"
}

#line 30 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
#line 30 "prog_mode.m"
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

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 191 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 191 "prog_mode.m"
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
#line 191 "prog_mode.m"
  {
#line 191 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 191 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 210 "prog_mode.m"
    {
#line 210 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 211 "prog_mode.m"
    {
#line 211 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 211 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 211 "prog_mode.m"
    }
#line 212 "prog_mode.m"
    {
#line 212 "prog_mode.m"
      MR_Word base;
#line 212 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 212 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_mode.m"
    }
#line 191 "prog_mode.m"
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
