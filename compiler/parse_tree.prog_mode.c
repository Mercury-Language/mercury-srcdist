/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 697 "prog_mode.m"
struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
#line 697 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
#line 701 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 701 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 701 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
#line 702 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
#line 697 "prog_mode.m"
};

#line 108 "prog_mode.m"
struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
#line 108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
#line 642 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 647 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
#line 647 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
#line 647 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
#line 651 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12;
#line 658 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13;
#line 662 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
#line 662 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45;
#line 662 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27;
#line 662 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29;
#line 662 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30;
#line 675 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27;
#line 677 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30;
#line 647 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
#line 647 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69;
#line 647 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70;
#line 651 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69;
#line 658 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70;
#line 683 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 683 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40;
#line 684 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40;
#line 108 "prog_mode.m"
};


#line 162 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 165 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 168 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 171 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 584 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__584__1_2_f_0(
#line 584 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 584 "prog_mode.m"
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42);

#line 1179 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1179 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1172 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(
#line 1172 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_4,
#line 1172 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8,
#line 1172 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_9);

#line 1167 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4(
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1167 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1133 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1133 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1139 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1139 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1110 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1110 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1110 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31,
#line 1110 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_32);

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1104 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1104 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1104 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1104 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1091 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1091 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1091 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1091 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11);

#line 1080 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 1080 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 1080 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1080 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1074 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1074 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1070 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 1070 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 1070 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1070 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1059 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 1059 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1059 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1059 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1054 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 1054 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1054 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 1054 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6);

#line 1051 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 1051 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1051 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1051 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1046 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 1046 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1046 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 1046 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6);

#line 1042 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
#line 1042 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1042 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1042 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1037 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 1037 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6);

#line 991 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
#line 991 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 991 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 991 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1000 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 1000 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1000 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1000 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1032 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 1032 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1032 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1032 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 953 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 953 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 953 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 807 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 921 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 921 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 921 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4);

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 877 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 877 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 877 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4);

#line 874 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 874 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 874 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 874 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 868 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 868 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 868 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4);

#line 866 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 866 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 866 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 866 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 862 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 862 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 862 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4);

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 809 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 809 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 809 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4);

#line 784 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 784 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 784 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 784 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 702 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 702 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 697 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 697 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2);

#line 619 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 619 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 619 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 619 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 613 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 613 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 613 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 613 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 610 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
#line 610 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 610 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 610 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 605 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
#line 605 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 605 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 605 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6);

#line 523 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
#line 523 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 523 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 523 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 584 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

#line 560 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 560 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 560 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 560 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 568 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 568 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 568 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 568 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 536 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 536 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 536 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 536 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 600 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 600 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 600 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 508 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 508 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 508 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 508 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 504 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 504 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 493 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 493 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 493 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 493 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6);

#line 479 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 479 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 479 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 479 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 461 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 461 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 461 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 461 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 450 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 450 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 450 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 450 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 431 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 431 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 431 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 431 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 416 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2);

#line 330 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 330 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 330 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 330 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 1077 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1077 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1074 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1074 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 949 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 949 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 949 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 949 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 807 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 807 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 651 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 651 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 658 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 658 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 675 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 675 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 677 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 677 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 651 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 651 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 658 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 658 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 684 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 684 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 491 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 491 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 491 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 491 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[18][3];

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

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[18][3] = {
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
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[10])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[9])),
    ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0_1)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1256 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1264 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1273 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1282 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 584 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__584__1_2_f_0(
#line 584 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 584 "prog_mode.m"
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42)
#line 584 "prog_mode.m"
{
#line 584 "prog_mode.m"
  {
#line 584 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 584 "prog_mode.m"
    MR_Word parse_tree__prog_mode__LambdaHeadVar__2_43;
#line 584 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Var_34;
#line 585 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeInfo_89_89 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 585 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_Var_34;

#line 585 "prog_mode.m"
    {
#line 585 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__LambdaHeadVar__1_42)), &parse_tree__prog_mode__conv0_Var_34);
    }
#line 585 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 585 "prog_mode.m"
      {
#line 585 "prog_mode.m"
        parse_tree__prog_mode__Var_34 = ((MR_Word) parse_tree__prog_mode__conv0_Var_34);
#line 585 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 585 "prog_mode.m"
      }
#line 584 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 586 "prog_mode.m"
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__Var_34;
#line 584 "prog_mode.m"
    else
#line 588 "prog_mode.m"
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__LambdaHeadVar__1_42;
#line 584 "prog_mode.m"
    return parse_tree__prog_mode__LambdaHeadVar__2_43;
#line 584 "prog_mode.m"
  }
#line 584 "prog_mode.m"
}

#line 1179 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1179 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1179 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1179 "prog_mode.m"
{
#line 1183 "prog_mode.m"
  {
#line 1183 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1183 "prog_mode.m"
    MR_Word parse_tree__prog_mode__InstVarInst_8;
#line 1183 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_8;

#line 1183 "prog_mode.m"
    {
#line 1183 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), &parse_tree__prog_mode__conv0_InstVarInst_8);
    }
#line 1183 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1183 "prog_mode.m"
      {
#line 1183 "prog_mode.m"
        parse_tree__prog_mode__InstVarInst_8 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_8);
#line 1183 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1183 "prog_mode.m"
      }
#line 1183 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1186 "prog_mode.m"
      {
#line 1186 "prog_mode.m"
        {
#line 1186 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_8, parse_tree__prog_mode__SubInst_5);
        }
#line 1186 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1186 "prog_mode.m"
          {
#line 1186 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1186 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1186 "prog_mode.m"
          }
#line 1186 "prog_mode.m"
      }
#line 1183 "prog_mode.m"
    else
#line 1188 "prog_mode.m"
      {
#line 1188 "prog_mode.m"
        {
#line 1188 "prog_mode.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), ((MR_Box) (parse_tree__prog_mode__SubInst_5)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
        }
#line 1188 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1188 "prog_mode.m"
      }
#line 1183 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1183 "prog_mode.m"
  }
#line 1179 "prog_mode.m"
}

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1108 "prog_mode.m"
{
#line 1108 "prog_mode.m"
  {
#line 1108 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1108 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1108 "prog_mode.m"
    {
#line 1108 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1108 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
      {
#line 1108 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1108 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
      }
#line 1108 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
  }
#line 1108 "prog_mode.m"
}

#line 1172 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(
#line 1172 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_4,
#line 1172 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8,
#line 1172 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_9)
#line 1172 "prog_mode.m"
{
#line 1175 "prog_mode.m"
  {
#line 1175 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1175 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 1176 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 1108 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9;

#line 1108 "prog_mode.m"
    {
#line 1108 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[17], parse_tree__prog_mode__ArgInsts_7, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9);
    }
#line 1108 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
      {
#line 1108 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_9 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9);
#line 1108 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
      }
#line 1175 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1175 "prog_mode.m"
  }
#line 1172 "prog_mode.m"
}

#line 1167 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4(
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1167 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1167 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1167 "prog_mode.m"
{
#line 1167 "prog_mode.m"
  {
#line 1167 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1167 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1167 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10;

#line 1167 "prog_mode.m"
    {
#line 1167 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10);
    }
#line 1167 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1167 "prog_mode.m"
      {
#line 1167 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10));
#line 1167 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1167 "prog_mode.m"
      }
#line 1167 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1167 "prog_mode.m"
  }
#line 1167 "prog_mode.m"
}

#line 1133 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1133 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1133 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1133 "prog_mode.m"
{
#line 1133 "prog_mode.m"
  {
#line 1133 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1133 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1133 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9;

#line 1133 "prog_mode.m"
    {
#line 1133 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9);
    }
#line 1133 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1133 "prog_mode.m"
      {
#line 1133 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9));
#line 1133 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1133 "prog_mode.m"
      }
#line 1133 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1133 "prog_mode.m"
  }
#line 1133 "prog_mode.m"
}

#line 1139 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1139 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1139 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1139 "prog_mode.m"
{
#line 1139 "prog_mode.m"
  {
#line 1139 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1139 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1139 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9;

#line 1139 "prog_mode.m"
    {
#line 1139 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9);
    }
#line 1139 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1139 "prog_mode.m"
      {
#line 1139 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9));
#line 1139 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1139 "prog_mode.m"
      }
#line 1139 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1139 "prog_mode.m"
  }
#line 1139 "prog_mode.m"
}

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1108 "prog_mode.m"
{
#line 1108 "prog_mode.m"
  {
#line 1108 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1108 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1108 "prog_mode.m"
    {
#line 1108 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1108 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
      {
#line 1108 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1108 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
      }
#line 1108 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
  }
#line 1108 "prog_mode.m"
}

#line 1110 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1110 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1110 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31,
#line 1110 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_32)
#line 1110 "prog_mode.m"
{
#line 1115 "prog_mode.m"
  while (MR_TRUE)
#line 1115 "prog_mode.m"
    {
#line 1115 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 1115 "prog_mode.m"
      {
#line 1115 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 1115 "prog_mode.m"
#line 1115 "prog_mode.m"
        switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) {
#line 1115 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1115 "prog_mode.m"
          case (MR_Integer) 0:
#line 1115 "prog_mode.m"
#line 1115 "prog_mode.m"
            switch (MR_unmkbody(parse_tree__prog_mode__Inst_4)) {
#line 1115 "prog_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1115 "prog_mode.m"
              case (MR_Integer) 0:
#line 1115 "prog_mode.m"
                {
#line 1115 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1115 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1115 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 1:
#line 1117 "prog_mode.m"
                {
#line 1117 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1117 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1117 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
            }
#line 1115 "prog_mode.m"
            break;
#line 1115 "prog_mode.m"
          case (MR_Integer) 1:
#line 1116 "prog_mode.m"
            {
#line 1116 "prog_mode.m"
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1116 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1116 "prog_mode.m"
            }
#line 1115 "prog_mode.m"
            break;
#line 1115 "prog_mode.m"
          case (MR_Integer) 2:
#line 1145 "prog_mode.m"
            {
#line 1145 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1144 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)));

#line 1148 "prog_mode.m"
              if ((parse_tree__prog_mode__HOInstInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "prog_mode.m"
                {
#line 1147 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1147 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1147 "prog_mode.m"
                }
#line 1148 "prog_mode.m"
              else
#line 1149 "prog_mode.m"
                {
#line 1149 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes_21;
#line 1149 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_41_41 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_18), (MR_Integer) 1);
#line 1149 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 0)));
#line 1149 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_22_22;
#line 1149 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_23_23;

#line 1149 "prog_mode.m"
                  parse_tree__prog_mode__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 1)));
#line 1149 "prog_mode.m"
                  parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 2)));
#line 1149 "prog_mode.m"
                  parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 3)));
#line 1150 "prog_mode.m"
                  {
#line 1150 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                  }
#line 1149 "prog_mode.m"
                }
#line 1145 "prog_mode.m"
            }
#line 1115 "prog_mode.m"
            break;
#line 1115 "prog_mode.m"
          case (MR_Integer) 3:
#line 1115 "prog_mode.m"
#line 1115 "prog_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) {
#line 1115 "prog_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1115 "prog_mode.m"
              case (MR_Integer) 0:
#line 1120 "prog_mode.m"
                {
#line 1120 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1120 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 3)));
#line 1120 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1123 "prog_mode.m"
#line 1123 "prog_mode.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults_8)) {
#line 1123 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1123 "prog_mode.m"
                    case (MR_Integer) 0:
#line 1123 "prog_mode.m"
#line 1123 "prog_mode.m"
                      switch (MR_unmkbody(parse_tree__prog_mode__InstResults_8)) {
#line 1123 "prog_mode.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1123 "prog_mode.m"
                        case (MR_Integer) 0:
#line 1137 "prog_mode.m"
                          {
#line 1138 "prog_mode.m"
                            MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32;

#line 1138 "prog_mode.m"
                            {
#line 1138 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32);
                            }
#line 1138 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 1138 "prog_mode.m"
                              {
#line 1138 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32);
#line 1138 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1138 "prog_mode.m"
                              }
#line 1137 "prog_mode.m"
                          }
#line 1123 "prog_mode.m"
                          break;
#line 1123 "prog_mode.m"
                        case (MR_Integer) 1:
#line 1122 "prog_mode.m"
                          {
#line 1122 "prog_mode.m"
                            *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1122 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1122 "prog_mode.m"
                          }
#line 1123 "prog_mode.m"
                          break;
#line 1123 "prog_mode.m"
                      }
#line 1123 "prog_mode.m"
                      break;
#line 1123 "prog_mode.m"
                    case (MR_Integer) 1:
#line 1124 "prog_mode.m"
                      {
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVarsResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 3)));
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 0)));
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 1)));
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 2)));
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 4)));
#line 1124 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 5)));
#line 1127 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeInfo_48_48;
#line 1127 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVarsSet_16;

#line 1126 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_13)) == (MR_mktag((MR_Integer) 1)));
#line 1126 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1126 "prog_mode.m"
                          {
#line 1126 "prog_mode.m"
                            parse_tree__prog_mode__InstVarsSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_13, (MR_Integer) 0)));
#line 1910 "parse_tree.prog_mode.c"
                            parse_tree__prog_mode__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 1128 "prog_mode.m"
                            {
#line 1128 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__set__is_empty_1_p_0(parse_tree__prog_mode__TypeInfo_48_48, parse_tree__prog_mode__InstVarsSet_16);
                            }
#line 1126 "prog_mode.m"
                          }
#line 1125 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1125 "prog_mode.m"
                          {
#line 1125 "prog_mode.m"
                            *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1125 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1125 "prog_mode.m"
                          }
#line 1125 "prog_mode.m"
                        else
#line 1132 "prog_mode.m"
                          {
#line 1132 "prog_mode.m"
                            MR_Box parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32;

#line 1132 "prog_mode.m"
                            {
#line 1132 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32);
                            }
#line 1132 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 1132 "prog_mode.m"
                              {
#line 1132 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32);
#line 1132 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1132 "prog_mode.m"
                              }
#line 1132 "prog_mode.m"
                          }
#line 1124 "prog_mode.m"
                      }
#line 1123 "prog_mode.m"
                      break;
#line 1123 "prog_mode.m"
                  }
#line 1120 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 1:
#line 1145 "prog_mode.m"
                {
#line 1145 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1143 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1148 "prog_mode.m"
                  if ((parse_tree__prog_mode__HOInstInfo_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "prog_mode.m"
                    {
#line 1147 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1147 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1147 "prog_mode.m"
                    }
#line 1148 "prog_mode.m"
                  else
#line 1149 "prog_mode.m"
                    {
#line 1149 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Modes_68;
#line 1149 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_71_71 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_77), (MR_Integer) 1);
#line 1149 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 0)));
#line 1149 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_65_65;
#line 1149 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_66_66;

#line 1149 "prog_mode.m"
                      parse_tree__prog_mode__Modes_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 1)));
#line 1149 "prog_mode.m"
                      parse_tree__prog_mode__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 2)));
#line 1149 "prog_mode.m"
                      parse_tree__prog_mode__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 3)));
#line 1150 "prog_mode.m"
                      {
#line 1150 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_68, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                      }
#line 1149 "prog_mode.m"
                    }
#line 1145 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 2:
#line 1153 "prog_mode.m"
                {
#line 1154 "prog_mode.m"
                  {
#line 1154 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_var_constraints_are_consistent_in_inst\'/3", (MR_String) "unconstrained inst_var");
                  }
#line 1153 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1153 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 3:
#line 1166 "prog_mode.m"
                {
#line 1166 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1166 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1166 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_33_33;
#line 1166 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34;
#line 1167 "prog_mode.m"
                  MR_Box parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34;

#line 1167 "prog_mode.m"
                  {
#line 1167 "prog_mode.m"
                    parse_tree__prog_mode__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
#line 1167 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 1) = ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4));
#line 1167 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1167 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_30));
#line 1167 "prog_mode.m"
                  }
#line 1167 "prog_mode.m"
                  {
#line 1167 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = mercury__set__fold_4_p_3((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__V_33_33, parse_tree__prog_mode__InstVars_29, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34);
                  }
#line 1167 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1167 "prog_mode.m"
                    {
#line 1167 "prog_mode.m"
                      parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34 = ((MR_Word) parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34);
#line 1167 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1167 "prog_mode.m"
                    }
#line 1166 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1169 "prog_mode.m"
                    {
#line 1169 "prog_mode.m"
                      /* direct tailcall eliminated */
#line 1169 "prog_mode.m"
                      {
#line 1169 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Inst__tmp_copy_4 = parse_tree__prog_mode__SubInst_30;
#line 1169 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34;

#line 1169 "prog_mode.m"
                        parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_31;
#line 1169 "prog_mode.m"
                        parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst__tmp_copy_4;
#line 1169 "prog_mode.m"
                      }
#line 1169 "prog_mode.m"
                      continue;
#line 1169 "prog_mode.m"
                    }
#line 1166 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 4:
#line 1156 "prog_mode.m"
                {
#line 1156 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1157 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__ArgInsts_27;
#line 1157 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_26_26;

#line 1157 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_25)) == (MR_mktag((MR_Integer) 0)));
#line 1157 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1157 "prog_mode.m"
                    {
#line 1157 "prog_mode.m"
                      parse_tree__prog_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_25, (MR_Integer) 0)));
#line 1157 "prog_mode.m"
                      parse_tree__prog_mode__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_25, (MR_Integer) 1)));
#line 1158 "prog_mode.m"
                      {
#line 1158 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_27, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                      }
#line 1157 "prog_mode.m"
                    }
#line 1157 "prog_mode.m"
                  else
#line 1157 "prog_mode.m"
                    {
#line 1157 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1157 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1157 "prog_mode.m"
                    }
#line 1156 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
              case (MR_Integer) 5:
#line 1163 "prog_mode.m"
                {
#line 1163 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__ArgInsts_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1163 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1108 "prog_mode.m"
                  MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32;

#line 1108 "prog_mode.m"
                  {
#line 1108 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__ArgInsts_47, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32);
                  }
#line 1108 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
                    {
#line 1108 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32);
#line 1108 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
                    }
#line 1163 "prog_mode.m"
                }
#line 1115 "prog_mode.m"
                break;
#line 1115 "prog_mode.m"
            }
#line 1115 "prog_mode.m"
            break;
#line 1115 "prog_mode.m"
        }
#line 1115 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 1115 "prog_mode.m"
      }
#line 1115 "prog_mode.m"
      break;
#line 1115 "prog_mode.m"
    }
#line 1110 "prog_mode.m"
}

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1108 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1108 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1108 "prog_mode.m"
{
#line 1108 "prog_mode.m"
  {
#line 1108 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1108 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1108 "prog_mode.m"
    {
#line 1108 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1108 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
      {
#line 1108 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1108 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
      }
#line 1108 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
  }
#line 1108 "prog_mode.m"
}

#line 1104 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1104 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1104 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1104 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1104 "prog_mode.m"
{
#line 1107 "prog_mode.m"
  {
#line 1107 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1108 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1108 "prog_mode.m"
    {
#line 1108 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1108 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1108 "prog_mode.m"
      {
#line 1108 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1108 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1108 "prog_mode.m"
      }
#line 1107 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1107 "prog_mode.m"
  }
#line 1104 "prog_mode.m"
}

#line 1091 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1091 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1091 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1091 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11)
#line 1091 "prog_mode.m"
{
#line 1096 "prog_mode.m"
  {
#line 1096 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1096 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_4)) == (MR_mktag((MR_Integer) 0))))
#line 1096 "prog_mode.m"
      {
#line 1096 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InitialInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));
#line 1096 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1096 "prog_mode.m"
        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13;

#line 1097 "prog_mode.m"
        {
#line 1097 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_6, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13);
        }
#line 1096 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1098 "prog_mode.m"
          {
#line 1098 "prog_mode.m"
            parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_7, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
          }
#line 1096 "prog_mode.m"
      }
#line 1096 "prog_mode.m"
    else
#line 1100 "prog_mode.m"
      {
#line 1100 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1100 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));

#line 1101 "prog_mode.m"
        {
#line 1101 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
        }
#line 1100 "prog_mode.m"
      }
#line 1096 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1096 "prog_mode.m"
  }
#line 1091 "prog_mode.m"
}

#line 1080 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 1080 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 1080 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1080 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1080 "prog_mode.m"
{
#line 1085 "prog_mode.m"
  {
#line 1085 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1085 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 1087 "prog_mode.m"
      {
#line 1087 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 1)));
#line 1087 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 0)));

#line 1096 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_8)) == (MR_mktag((MR_Integer) 0))))
#line 1096 "prog_mode.m"
          {
#line 1096 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InitialInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));
#line 1096 "prog_mode.m"
            MR_Word parse_tree__prog_mode__FinalInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1096 "prog_mode.m"
            MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21;

#line 1097 "prog_mode.m"
            {
#line 1097 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_16, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21);
            }
#line 1096 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 1098 "prog_mode.m"
              {
#line 1098 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_17, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
              }
#line 1096 "prog_mode.m"
          }
#line 1096 "prog_mode.m"
        else
#line 1100 "prog_mode.m"
          {
#line 1100 "prog_mode.m"
            MR_Word parse_tree__prog_mode__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1100 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));

#line 1101 "prog_mode.m"
            {
#line 1101 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
            }
#line 1100 "prog_mode.m"
          }
#line 1087 "prog_mode.m"
      }
#line 1085 "prog_mode.m"
    else
#line 1085 "prog_mode.m"
      {
#line 1085 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1085 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1085 "prog_mode.m"
      }
#line 1085 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1085 "prog_mode.m"
  }
#line 1080 "prog_mode.m"
}

#line 1074 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1074 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1074 "prog_mode.m"
{
#line 1074 "prog_mode.m"
  {
#line 1074 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1074 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 1074 "prog_mode.m"
    {
#line 1074 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 1074 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1074 "prog_mode.m"
      {
#line 1074 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1074 "prog_mode.m"
      }
#line 1074 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
  }
#line 1074 "prog_mode.m"
}

#line 1070 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 1070 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 1070 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1070 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1070 "prog_mode.m"
{
#line 1073 "prog_mode.m"
  {
#line 1073 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1074 "prog_mode.m"
    {
#line 1074 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__Modes_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1074 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1074 "prog_mode.m"
      {
#line 1074 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1074 "prog_mode.m"
      }
#line 1073 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1073 "prog_mode.m"
  }
#line 1070 "prog_mode.m"
}

#line 1059 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 1059 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1059 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1059 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1059 "prog_mode.m"
{
#line 1059 "prog_mode.m"
  {
#line 1059 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1059 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1059 "prog_mode.m"
    {
#line 1059 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1059 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1059 "prog_mode.m"
  }
#line 1059 "prog_mode.m"
}

#line 1054 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 1054 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1054 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 1054 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6)
#line 1054 "prog_mode.m"
{
#line 1058 "prog_mode.m"
  {
#line 1058 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
#line 1058 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_7;
#line 1058 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Args0_8;

#line 1058 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1058 "prog_mode.m"
      {
#line 1058 "prog_mode.m"
        parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 1058 "prog_mode.m"
        parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 1059 "prog_mode.m"
        {
#line 1059 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 1059 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_9;
#line 1059 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_10_10;

#line 1059 "prog_mode.m"
          {
#line 1059 "prog_mode.m"
            parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1059 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
#line 1059 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1059 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1059 "prog_mode.m"
          }
#line 2587 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1059 "prog_mode.m"
          {
#line 1059 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
          }
#line 1060 "prog_mode.m"
          {
#line 1060 "prog_mode.m"
            MR_Word base;
#line 1060 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "prog_mode.m"
            *parse_tree__prog_mode__Name_6 = base;
#line 1060 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 1060 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
#line 1060 "prog_mode.m"
          }
#line 1059 "prog_mode.m"
        }
#line 1058 "prog_mode.m"
      }
#line 1058 "prog_mode.m"
    else
#line 1062 "prog_mode.m"
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
#line 1058 "prog_mode.m"
  }
#line 1054 "prog_mode.m"
}

#line 1051 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 1051 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1051 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1051 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1051 "prog_mode.m"
{
#line 1051 "prog_mode.m"
  {
#line 1051 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1051 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 1051 "prog_mode.m"
    {
#line 1051 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 1051 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 1051 "prog_mode.m"
  }
#line 1051 "prog_mode.m"
}

#line 1046 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 1046 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1046 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 1046 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6)
#line 1046 "prog_mode.m"
{
#line 1049 "prog_mode.m"
  {
#line 1049 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes_11;
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 1051 "prog_mode.m"
    {
#line 1051 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[8]));
#line 1051 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
#line 1051 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1051 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1051 "prog_mode.m"
    }
#line 2695 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1051 "prog_mode.m"
    {
#line 1051 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
#line 1052 "prog_mode.m"
    {
#line 1052 "prog_mode.m"
      MR_Word base;
#line 1052 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_mode.m"
      *parse_tree__prog_mode__PII_6 = base;
#line 1052 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
#line 1052 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
#line 1052 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
#line 1052 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
#line 1052 "prog_mode.m"
    }
#line 1049 "prog_mode.m"
  }
#line 1046 "prog_mode.m"
}

#line 1042 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
#line 1042 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1042 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1042 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1042 "prog_mode.m"
{
#line 1042 "prog_mode.m"
  {
#line 1042 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1042 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1042 "prog_mode.m"
    {
#line 1042 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1042 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1042 "prog_mode.m"
  }
#line 1042 "prog_mode.m"
}

#line 1037 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1037 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 1037 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6)
#line 1037 "prog_mode.m"
{
#line 1040 "prog_mode.m"
  {
#line 1040 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_9;
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_10_10;

#line 1042 "prog_mode.m"
    {
#line 1042 "prog_mode.m"
      parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1));
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1042 "prog_mode.m"
    }
#line 2795 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1042 "prog_mode.m"
    {
#line 1042 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
#line 1044 "prog_mode.m"
    {
#line 1044 "prog_mode.m"
      MR_Word base;
#line 1044 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_6 = base;
#line 1044 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 1044 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 1044 "prog_mode.m"
    }
#line 1040 "prog_mode.m"
  }
#line 1037 "prog_mode.m"
}

#line 991 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
#line 991 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 991 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 991 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 991 "prog_mode.m"
{
#line 991 "prog_mode.m"
  {
#line 991 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 991 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

#line 991 "prog_mode.m"
    {
#line 991 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
#line 991 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
#line 991 "prog_mode.m"
  }
#line 991 "prog_mode.m"
}

#line 1000 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 1000 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1000 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1000 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1000 "prog_mode.m"
{
#line 1000 "prog_mode.m"
  {
#line 1000 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1000 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_BoundInst_6;

#line 1000 "prog_mode.m"
    {
#line 1000 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_BoundInst_6);
    }
#line 1000 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_BoundInst_6));
#line 1000 "prog_mode.m"
  }
#line 1000 "prog_mode.m"
}

#line 1032 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 1032 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1032 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1032 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1032 "prog_mode.m"
{
#line 1032 "prog_mode.m"
  {
#line 1032 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1032 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1032 "prog_mode.m"
    {
#line 1032 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1032 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1032 "prog_mode.m"
  }
#line 1032 "prog_mode.m"
}

#line 953 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 953 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 953 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 953 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 953 "prog_mode.m"
{
#line 963 "prog_mode.m"
  {
#line 963 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 963 "prog_mode.m"
#line 963 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 963 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 963 "prog_mode.m"
      case (MR_Integer) 0:
#line 963 "prog_mode.m"
#line 963 "prog_mode.m"
        switch (MR_unmkbody(parse_tree__prog_mode__Inst0_5)) {
#line 963 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 963 "prog_mode.m"
          case (MR_Integer) 0:
#line 963 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 1:
#line 963 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
        }
#line 963 "prog_mode.m"
        break;
#line 963 "prog_mode.m"
      case (MR_Integer) 1:
#line 964 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 963 "prog_mode.m"
        break;
#line 963 "prog_mode.m"
      case (MR_Integer) 2:
#line 963 "prog_mode.m"
        {
#line 963 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 963 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

#line 963 "prog_mode.m"
          if ((parse_tree__prog_mode__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 963 "prog_mode.m"
          else
#line 971 "prog_mode.m"
            {
#line 971 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_46_46;
#line 971 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_74_74), (MR_Integer) 1);
#line 971 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PredInstInfo_55;

#line 972 "prog_mode.m"
              {
#line 972 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_54, &parse_tree__prog_mode__PredInstInfo_55);
              }
#line 974 "prog_mode.m"
              parse_tree__prog_mode__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
#line 974 "prog_mode.m"
              {
#line 974 "prog_mode.m"
                MR_Word base;
#line 974 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 974 "prog_mode.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__V_75_75));
#line 974 "prog_mode.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_46_46));
#line 974 "prog_mode.m"
              }
#line 971 "prog_mode.m"
            }
#line 963 "prog_mode.m"
        }
#line 963 "prog_mode.m"
        break;
#line 963 "prog_mode.m"
      case (MR_Integer) 3:
#line 963 "prog_mode.m"
#line 963 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 963 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 963 "prog_mode.m"
          case (MR_Integer) 0:
#line 976 "prog_mode.m"
            {
#line 976 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 976 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
#line 976 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 981 "prog_mode.m"
#line 981 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
#line 981 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 981 "prog_mode.m"
                case (MR_Integer) 0:
#line 981 "prog_mode.m"
#line 981 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
#line 981 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 981 "prog_mode.m"
                    case (MR_Integer) 0:
#line 999 "prog_mode.m"
                      {
#line 999 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_66_66;
#line 999 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_41_41;
#line 999 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_56;

#line 1000 "prog_mode.m"
                        {
#line 1000 "prog_mode.m"
                          parse_tree__prog_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 1000 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
#line 1000 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1000 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1000 "prog_mode.m"
                        }
#line 3067 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1000 "prog_mode.m"
                        {
#line 1000 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__V_41_41, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_56);
                        }
#line 1005 "prog_mode.m"
                        {
#line 1005 "prog_mode.m"
                          MR_Word base;
#line 1005 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 1005 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1005 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
#line 1005 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_56));
#line 1005 "prog_mode.m"
                        }
#line 999 "prog_mode.m"
                      }
#line 981 "prog_mode.m"
                      break;
#line 981 "prog_mode.m"
                    case (MR_Integer) 1:
#line 978 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 981 "prog_mode.m"
                      break;
#line 981 "prog_mode.m"
                  }
#line 981 "prog_mode.m"
                  break;
#line 981 "prog_mode.m"
                case (MR_Integer) 1:
#line 982 "prog_mode.m"
                  {
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
#line 982 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
#line 985 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_59_59;
#line 985 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_60_60;
#line 985 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
#line 985 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_21;

#line 984 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
#line 984 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 984 "prog_mode.m"
                      {
#line 984 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
#line 3139 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 986 "prog_mode.m"
                        {
#line 986 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_59_59, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                        }
#line 3146 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 987 "prog_mode.m"
                        {
#line 987 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_60_60, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__InstConstraints_4);
                        }
#line 984 "prog_mode.m"
                      }
#line 983 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 989 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 983 "prog_mode.m"
                    else
#line 992 "prog_mode.m"
                      {
#line 992 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
#line 992 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_22;
#line 992 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_43_43;

#line 991 "prog_mode.m"
                        {
#line 991 "prog_mode.m"
                          parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 991 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 991 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3));
#line 991 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 991 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 991 "prog_mode.m"
                        }
#line 3184 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 991 "prog_mode.m"
                        {
#line 991 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                        }
#line 996 "prog_mode.m"
                        {
#line 996 "prog_mode.m"
                          MR_Word base;
#line 996 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 996 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 996 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
#line 996 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
#line 996 "prog_mode.m"
                        }
#line 992 "prog_mode.m"
                      }
#line 982 "prog_mode.m"
                  }
#line 981 "prog_mode.m"
                  break;
#line 981 "prog_mode.m"
              }
#line 976 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 1:
#line 963 "prog_mode.m"
            {
#line 963 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 963 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 963 "prog_mode.m"
              if ((parse_tree__prog_mode__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 963 "prog_mode.m"
              else
#line 966 "prog_mode.m"
                {
#line 966 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_76_76), (MR_Integer) 1);
#line 966 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PredInstInfo_11;
#line 966 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_48_48;

#line 967 "prog_mode.m"
                  {
#line 967 "prog_mode.m"
                    parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                  }
#line 969 "prog_mode.m"
                  parse_tree__prog_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
#line 969 "prog_mode.m"
                  {
#line 969 "prog_mode.m"
                    MR_Word base;
#line 969 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 969 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 969 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 969 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_77_77));
#line 969 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__V_48_48));
#line 969 "prog_mode.m"
                  }
#line 966 "prog_mode.m"
                }
#line 963 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 2:
#line 1019 "prog_mode.m"
            {
#line 1019 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1019 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;
#line 1019 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_58;
#line 1020 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstPrime_31;
#line 1020 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv3_SubInstPrime_31;

#line 1020 "prog_mode.m"
              {
#line 1020 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_30)), &parse_tree__prog_mode__conv3_SubInstPrime_31);
              }
#line 1020 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1020 "prog_mode.m"
                {
#line 1020 "prog_mode.m"
                  parse_tree__prog_mode__SubInstPrime_31 = ((MR_Word) parse_tree__prog_mode__conv3_SubInstPrime_31);
#line 1020 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1020 "prog_mode.m"
                }
#line 1020 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1021 "prog_mode.m"
                parse_tree__prog_mode__SubInst_58 = parse_tree__prog_mode__SubInstPrime_31;
#line 1020 "prog_mode.m"
              else
#line 1023 "prog_mode.m"
                {
#line 1023 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_58 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 1023 "prog_mode.m"
                }
#line 1025 "prog_mode.m"
              {
#line 1025 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_30)));
              }
#line 1025 "prog_mode.m"
              {
#line 1025 "prog_mode.m"
                MR_Word base;
#line 1025 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1025 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1025 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_40_40));
#line 1025 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_58));
#line 1025 "prog_mode.m"
              }
#line 1019 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 3:
#line 1008 "prog_mode.m"
            {
#line 1008 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1008 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 1008 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst1_25;
#line 1008 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_28;
#line 1008 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_29;
#line 1010 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubVars_26;
#line 1010 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubSubInst_27;

#line 1009 "prog_mode.m"
              {
#line 1009 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_24, &parse_tree__prog_mode__SubInst1_25);
              }
#line 1010 "prog_mode.m"
              parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1010 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1010 "prog_mode.m"
                {
#line 1010 "prog_mode.m"
                  parse_tree__prog_mode__SubVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 1)));
#line 1010 "prog_mode.m"
                  parse_tree__prog_mode__SubSubInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 2)));
#line 1011 "prog_mode.m"
                  {
#line 1011 "prog_mode.m"
                    mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_23, parse_tree__prog_mode__SubVars_26, &parse_tree__prog_mode__Vars_28);
                  }
#line 1012 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubSubInst_27;
#line 1010 "prog_mode.m"
                }
#line 1010 "prog_mode.m"
              else
#line 1014 "prog_mode.m"
                {
#line 1014 "prog_mode.m"
                  parse_tree__prog_mode__Vars_28 = parse_tree__prog_mode__Vars0_23;
#line 1015 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubInst1_25;
#line 1014 "prog_mode.m"
                }
#line 1017 "prog_mode.m"
              {
#line 1017 "prog_mode.m"
                MR_Word base;
#line 1017 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1017 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1017 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_28));
#line 1017 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
#line 1017 "prog_mode.m"
              }
#line 1008 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 4:
#line 1027 "prog_mode.m"
            {
#line 1027 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1027 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_33;

#line 1028 "prog_mode.m"
              {
#line 1028 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_32, &parse_tree__prog_mode__Name_33);
              }
#line 1029 "prog_mode.m"
              {
#line 1029 "prog_mode.m"
                MR_Word base;
#line 1029 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1029 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1029 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_33));
#line 1029 "prog_mode.m"
              }
#line 1027 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
          case (MR_Integer) 5:
#line 1031 "prog_mode.m"
            {
#line 1031 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_73_73;
#line 1031 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1031 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 1031 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts_36;
#line 1031 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_37_37;

#line 1032 "prog_mode.m"
              {
#line 1032 "prog_mode.m"
                parse_tree__prog_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1032 "prog_mode.m"
              }
#line 3475 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1032 "prog_mode.m"
              {
#line 1032 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__V_37_37, parse_tree__prog_mode__SubInsts0_35, &parse_tree__prog_mode__SubInsts_36);
              }
#line 1034 "prog_mode.m"
              {
#line 1034 "prog_mode.m"
                MR_Word base;
#line 1034 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1034 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1034 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_34));
#line 1034 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_36));
#line 1034 "prog_mode.m"
              }
#line 1031 "prog_mode.m"
            }
#line 963 "prog_mode.m"
            break;
#line 963 "prog_mode.m"
        }
#line 963 "prog_mode.m"
        break;
#line 963 "prog_mode.m"
    }
#line 963 "prog_mode.m"
  }
#line 953 "prog_mode.m"
}

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 807 "prog_mode.m"
    {
#line 807 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 807 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 807 "prog_mode.m"
  }
#line 807 "prog_mode.m"
}

#line 921 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 921 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 921 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4)
#line 921 "prog_mode.m"
{
#line 926 "prog_mode.m"
  {
#line 926 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 926 "prog_mode.m"
    if ((parse_tree__prog_mode__HOInstInfo0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_mode.m"
      *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 926 "prog_mode.m"
    else
#line 929 "prog_mode.m"
      {
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred0_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_3), (MR_Integer) 1);
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PorF_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 0)));
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 1)));
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 2)));
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 3)));
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_10;
#line 929 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred_11;

#line 807 "prog_mode.m"
        {
#line 807 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_17, parse_tree__prog_mode__TypeCtorInfo_8_17, (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_10);
        }
#line 932 "prog_mode.m"
        {
#line 932 "prog_mode.m"
          parse_tree__prog_mode__Pred_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 932 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_6));
#line 932 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_10));
#line 932 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_8));
#line 932 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 3) = ((MR_Box) (parse_tree__prog_mode__Det_9));
#line 932 "prog_mode.m"
        }
#line 933 "prog_mode.m"
        *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_11);
#line 929 "prog_mode.m"
      }
#line 926 "prog_mode.m"
  }
#line 921 "prog_mode.m"
}

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 825 "prog_mode.m"
{
#line 825 "prog_mode.m"
  {
#line 825 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 825 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 825 "prog_mode.m"
    {
#line 825 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 825 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 825 "prog_mode.m"
  }
#line 825 "prog_mode.m"
}

#line 877 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 877 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 877 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 877 "prog_mode.m"
{
#line 882 "prog_mode.m"
  {
#line 882 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 882 "prog_mode.m"
#line 882 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
#line 882 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 882 "prog_mode.m"
      case (MR_Integer) 0:
#line 882 "prog_mode.m"
        {
#line 882 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_8_43;
#line 882 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 882 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 882 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SymName_7;
#line 882 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts_8;

#line 883 "prog_mode.m"
          {
#line 883 "prog_mode.m"
            parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_5, &parse_tree__prog_mode__SymName_7);
          }
#line 3679 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_8_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 825 "prog_mode.m"
          {
#line 825 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_43, parse_tree__prog_mode__TypeCtorInfo_8_43, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
          }
#line 885 "prog_mode.m"
          {
#line 885 "prog_mode.m"
            MR_Word base;
#line 885 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 885 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 885 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 885 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 885 "prog_mode.m"
          }
#line 882 "prog_mode.m"
        }
#line 882 "prog_mode.m"
        break;
#line 882 "prog_mode.m"
      case (MR_Integer) 1:
#line 887 "prog_mode.m"
        {
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_13;
#line 887 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_14;

#line 888 "prog_mode.m"
          {
#line 888 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_11, &parse_tree__prog_mode__InstA_13);
          }
#line 889 "prog_mode.m"
          {
#line 889 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_12, &parse_tree__prog_mode__InstB_14);
          }
#line 890 "prog_mode.m"
          {
#line 890 "prog_mode.m"
            MR_Word base;
#line 890 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 890 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_9));
#line 890 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Real_10));
#line 890 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstA_13));
#line 890 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_mode__InstB_14));
#line 890 "prog_mode.m"
          }
#line 887 "prog_mode.m"
        }
#line 882 "prog_mode.m"
        break;
#line 882 "prog_mode.m"
      case (MR_Integer) 2:
#line 892 "prog_mode.m"
        {
#line 892 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 892 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 892 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_23;
#line 892 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_24;

#line 893 "prog_mode.m"
          {
#line 893 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
          }
#line 894 "prog_mode.m"
          {
#line 894 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
          }
#line 895 "prog_mode.m"
          {
#line 895 "prog_mode.m"
            MR_Word base;
#line 895 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 895 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
#line 895 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
#line 895 "prog_mode.m"
          }
#line 892 "prog_mode.m"
        }
#line 882 "prog_mode.m"
        break;
#line 882 "prog_mode.m"
      case (MR_Integer) 3:
#line 882 "prog_mode.m"
#line 882 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
#line 882 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 882 "prog_mode.m"
          case (MR_Integer) 0:
#line 897 "prog_mode.m"
            {
#line 897 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 897 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 897 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_17;
#line 897 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 897 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 898 "prog_mode.m"
              {
#line 898 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
              }
#line 899 "prog_mode.m"
              {
#line 899 "prog_mode.m"
                MR_Word base;
#line 899 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 899 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 899 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 899 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_16 | ((((parse_tree__prog_mode__Live_25 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
#line 899 "prog_mode.m"
              }
#line 897 "prog_mode.m"
            }
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
          case (MR_Integer) 1:
#line 901 "prog_mode.m"
            {
#line 901 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 901 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 901 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 901 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 901 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31;

#line 902 "prog_mode.m"
              {
#line 902 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
              }
#line 903 "prog_mode.m"
              {
#line 903 "prog_mode.m"
                MR_Word base;
#line 903 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 903 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 903 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
#line 903 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_30 | ((((parse_tree__prog_mode__Live_27 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
#line 903 "prog_mode.m"
              }
#line 901 "prog_mode.m"
            }
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
          case (MR_Integer) 2:
#line 905 "prog_mode.m"
            {
#line 905 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 905 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_33;

#line 906 "prog_mode.m"
              {
#line 906 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
              }
#line 907 "prog_mode.m"
              {
#line 907 "prog_mode.m"
                MR_Word base;
#line 907 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 907 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 907 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 907 "prog_mode.m"
              }
#line 905 "prog_mode.m"
            }
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
          case (MR_Integer) 3:
#line 909 "prog_mode.m"
            {
#line 909 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 909 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_35;

#line 910 "prog_mode.m"
              {
#line 910 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
              }
#line 911 "prog_mode.m"
              {
#line 911 "prog_mode.m"
                MR_Word base;
#line 911 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 911 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 911 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
#line 911 "prog_mode.m"
              }
#line 909 "prog_mode.m"
            }
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
          case (MR_Integer) 4:
#line 914 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
          case (MR_Integer) 5:
#line 916 "prog_mode.m"
            {
#line 916 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 916 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 916 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_37;

#line 917 "prog_mode.m"
              {
#line 917 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
              }
#line 918 "prog_mode.m"
              {
#line 918 "prog_mode.m"
                MR_Word base;
#line 918 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 918 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 918 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
#line 918 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
#line 918 "prog_mode.m"
              }
#line 916 "prog_mode.m"
            }
#line 882 "prog_mode.m"
            break;
#line 882 "prog_mode.m"
        }
#line 882 "prog_mode.m"
        break;
#line 882 "prog_mode.m"
    }
#line 882 "prog_mode.m"
  }
#line 877 "prog_mode.m"
}

#line 874 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 874 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 874 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 874 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 874 "prog_mode.m"
{
#line 874 "prog_mode.m"
  {
#line 874 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 874 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 874 "prog_mode.m"
    {
#line 874 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 874 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 874 "prog_mode.m"
  }
#line 874 "prog_mode.m"
}

#line 868 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 868 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 868 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4)
#line 868 "prog_mode.m"
{
#line 871 "prog_mode.m"
  {
#line 871 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7;
#line 871 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_8;

#line 873 "prog_mode.m"
    {
#line 873 "prog_mode.m"
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
#line 4057 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 874 "prog_mode.m"
    {
#line 874 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
#line 875 "prog_mode.m"
    {
#line 875 "prog_mode.m"
      MR_Word base;
#line 875 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_4 = base;
#line 875 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 875 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 875 "prog_mode.m"
    }
#line 871 "prog_mode.m"
  }
#line 868 "prog_mode.m"
}

#line 866 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 866 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 866 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 866 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 866 "prog_mode.m"
{
#line 866 "prog_mode.m"
  {
#line 866 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 866 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_BoundInst_4;

#line 866 "prog_mode.m"
    {
#line 866 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_BoundInst_4);
    }
#line 866 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_BoundInst_4));
#line 866 "prog_mode.m"
  }
#line 866 "prog_mode.m"
}

#line 862 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 862 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 862 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 862 "prog_mode.m"
{
#line 865 "prog_mode.m"
  {
#line 865 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 865 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 866 "prog_mode.m"
    {
#line 866 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
    }
#line 865 "prog_mode.m"
  }
#line 862 "prog_mode.m"
}

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 825 "prog_mode.m"
{
#line 825 "prog_mode.m"
  {
#line 825 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 825 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 825 "prog_mode.m"
    {
#line 825 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 825 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 825 "prog_mode.m"
  }
#line 825 "prog_mode.m"
}

#line 809 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 809 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 809 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 809 "prog_mode.m"
{
#line 813 "prog_mode.m"
  {
#line 813 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 813 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
#line 813 "prog_mode.m"
      {
#line 813 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 813 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 813 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial_7;
#line 813 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final_8;

#line 814 "prog_mode.m"
        {
#line 814 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
        }
#line 815 "prog_mode.m"
        {
#line 815 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
        }
#line 816 "prog_mode.m"
        {
#line 816 "prog_mode.m"
          MR_Word base;
#line 816 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 816 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
#line 816 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
#line 816 "prog_mode.m"
        }
#line 813 "prog_mode.m"
      }
#line 813 "prog_mode.m"
    else
#line 818 "prog_mode.m"
      {
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_11;
#line 818 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_12;

#line 825 "prog_mode.m"
        {
#line 825 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
        }
#line 820 "prog_mode.m"
        {
#line 820 "prog_mode.m"
          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_9, &parse_tree__prog_mode__SymName_12);
        }
#line 821 "prog_mode.m"
        {
#line 821 "prog_mode.m"
          MR_Word base;
#line 821 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 821 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
#line 821 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
#line 821 "prog_mode.m"
        }
#line 818 "prog_mode.m"
      }
#line 813 "prog_mode.m"
  }
#line 809 "prog_mode.m"
}

#line 784 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 784 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 784 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 784 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
#line 784 "prog_mode.m"
{
#line 787 "prog_mode.m"
  while (MR_TRUE)
#line 787 "prog_mode.m"
    {
#line 787 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 787 "prog_mode.m"
      {
#line 787 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 787 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_4;
#line 787 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_5;
#line 788 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_9;
#line 789 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FunctorConsId_8;

#line 787 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 787 "prog_mode.m"
          {
#line 787 "prog_mode.m"
            parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 787 "prog_mode.m"
            parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 789 "prog_mode.m"
            parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 789 "prog_mode.m"
            parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 790 "prog_mode.m"
            {
#line 790 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
            }
#line 788 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 792 "prog_mode.m"
              {
#line 792 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
#line 792 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 792 "prog_mode.m"
              }
#line 788 "prog_mode.m"
            else
#line 794 "prog_mode.m"
              {
#line 794 "prog_mode.m"
                /* direct tailcall eliminated */
#line 794 "prog_mode.m"
                {
#line 794 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__BoundInsts_5;

#line 794 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 794 "prog_mode.m"
                }
#line 794 "prog_mode.m"
                continue;
#line 794 "prog_mode.m"
              }
#line 787 "prog_mode.m"
          }
#line 787 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 787 "prog_mode.m"
      }
#line 787 "prog_mode.m"
      break;
#line 787 "prog_mode.m"
    }
#line 784 "prog_mode.m"
}

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 701 "prog_mode.m"
{
#line 701 "prog_mode.m"
  {
#line 701 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 701 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 701 "prog_mode.m"
  }
#line 701 "prog_mode.m"
}

#line 702 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 702 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 702 "prog_mode.m"
{
#line 702 "prog_mode.m"
  {
#line 702 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 702 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
#line 702 "prog_mode.m"
    {
#line 702 "prog_mode.m"
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
#line 702 "prog_mode.m"
  }
#line 702 "prog_mode.m"
}

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 701 "prog_mode.m"
{
#line 701 "prog_mode.m"
  {
#line 701 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 703 "prog_mode.m"
    {
#line 703 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
#line 703 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 703 "prog_mode.m"
      {
#line 703 "prog_mode.m"
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
#line 701 "prog_mode.m"
  }
#line 701 "prog_mode.m"
}

#line 701 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 701 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 701 "prog_mode.m"
{
#line 701 "prog_mode.m"
  {
#line 701 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 701 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 701 "prog_mode.m"
      {
#line 701 "prog_mode.m"
        {
#line 701 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 701 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 702 "prog_mode.m"
          {
#line 702 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 701 "prog_mode.m"
        }
#line 701 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 701 "prog_mode.m"
      }
#line 701 "prog_mode.m"
    else
#line 701 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 701 "prog_mode.m"
  }
#line 701 "prog_mode.m"
}

#line 697 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 697 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2)
#line 697 "prog_mode.m"
{
#line 697 "prog_mode.m"
  {
#line 697 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 697 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
#line 701 "prog_mode.m"
    while (MR_TRUE)
#line 701 "prog_mode.m"
      {
#line 701 "prog_mode.m"
        /* tailcall optimized into a loop */
#line 701 "prog_mode.m"
#line 701 "prog_mode.m"
        switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) {
#line 701 "prog_mode.m"
          default:
#line 701 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 701 "prog_mode.m"
            break;
#line 701 "prog_mode.m"
          case (MR_Integer) 0:
#line 701 "prog_mode.m"
            {
#line 701 "prog_mode.m"
              {
#line 701 "prog_mode.m"
                parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
              }
#line 701 "prog_mode.m"
            }
#line 701 "prog_mode.m"
            break;
#line 701 "prog_mode.m"
          case (MR_Integer) 1:
#line 705 "prog_mode.m"
            {
#line 705 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 705 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
#line 705 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
#line 705 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 706 "prog_mode.m"
              {
#line 706 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_8);
              }
#line 707 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 707 "prog_mode.m"
                {
#line 707 "prog_mode.m"
                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_9);
                }
#line 705 "prog_mode.m"
            }
#line 701 "prog_mode.m"
            break;
#line 701 "prog_mode.m"
          case (MR_Integer) 2:
#line 710 "prog_mode.m"
            {
#line 710 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstA_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
#line 710 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 711 "prog_mode.m"
              {
#line 711 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_18);
              }
#line 712 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 712 "prog_mode.m"
                {
#line 712 "prog_mode.m"
                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_19);
                }
#line 710 "prog_mode.m"
            }
#line 701 "prog_mode.m"
            break;
#line 701 "prog_mode.m"
          case (MR_Integer) 3:
#line 701 "prog_mode.m"
#line 701 "prog_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) {
#line 701 "prog_mode.m"
              default:
#line 701 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
              case (MR_Integer) 0:
#line 715 "prog_mode.m"
                {
#line 715 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 715 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 715 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 715 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 716 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 716 "prog_mode.m"
                  {
#line 716 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_10;

#line 716 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 716 "prog_mode.m"
                  }
#line 716 "prog_mode.m"
                  continue;
#line 715 "prog_mode.m"
                }
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
              case (MR_Integer) 1:
#line 718 "prog_mode.m"
                {
#line 718 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 718 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 718 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 718 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 719 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 719 "prog_mode.m"
                  {
#line 719 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_20;

#line 719 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 719 "prog_mode.m"
                  }
#line 719 "prog_mode.m"
                  continue;
#line 718 "prog_mode.m"
                }
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
              case (MR_Integer) 2:
#line 721 "prog_mode.m"
                {
#line 721 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 722 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 722 "prog_mode.m"
                  {
#line 722 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_21;

#line 722 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 722 "prog_mode.m"
                  }
#line 722 "prog_mode.m"
                  continue;
#line 721 "prog_mode.m"
                }
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
              case (MR_Integer) 3:
#line 724 "prog_mode.m"
                {
#line 724 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 725 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 725 "prog_mode.m"
                  {
#line 725 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_22;

#line 725 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 725 "prog_mode.m"
                  }
#line 725 "prog_mode.m"
                  continue;
#line 724 "prog_mode.m"
                }
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
              case (MR_Integer) 5:
#line 727 "prog_mode.m"
                {
#line 727 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 727 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 728 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 728 "prog_mode.m"
                  {
#line 728 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_23;

#line 728 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 728 "prog_mode.m"
                  }
#line 728 "prog_mode.m"
                  continue;
#line 727 "prog_mode.m"
                }
#line 701 "prog_mode.m"
                break;
#line 701 "prog_mode.m"
            }
#line 701 "prog_mode.m"
            break;
#line 701 "prog_mode.m"
        }
#line 701 "prog_mode.m"
        return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 701 "prog_mode.m"
        break;
#line 701 "prog_mode.m"
      }
#line 697 "prog_mode.m"
  }
#line 697 "prog_mode.m"
}

#line 619 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 619 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 619 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 619 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 619 "prog_mode.m"
{
#line 619 "prog_mode.m"
  {
#line 619 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 619 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 619 "prog_mode.m"
    {
#line 619 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 619 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 619 "prog_mode.m"
  }
#line 619 "prog_mode.m"
}

#line 613 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 613 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 613 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 613 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 613 "prog_mode.m"
{
#line 618 "prog_mode.m"
  {
#line 618 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 618 "prog_mode.m"
#line 618 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
#line 618 "prog_mode.m"
      default:
#line 618 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 618 "prog_mode.m"
        break;
#line 618 "prog_mode.m"
      case (MR_Integer) 0:
#line 618 "prog_mode.m"
        {
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts_9;
#line 618 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_15_15;

#line 619 "prog_mode.m"
          {
#line 619 "prog_mode.m"
            parse_tree__prog_mode__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 619 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 619 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
#line 619 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 619 "prog_mode.m"
          }
#line 4814 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 619 "prog_mode.m"
          {
#line 619 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__V_15_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
          }
#line 620 "prog_mode.m"
          {
#line 620 "prog_mode.m"
            MR_Word base;
#line 620 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 620 "prog_mode.m"
            *parse_tree__prog_mode__InstName_6 = base;
#line 620 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
#line 620 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 620 "prog_mode.m"
          }
#line 618 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 618 "prog_mode.m"
        }
#line 618 "prog_mode.m"
        break;
#line 618 "prog_mode.m"
      case (MR_Integer) 3:
#line 618 "prog_mode.m"
#line 618 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
#line 618 "prog_mode.m"
          default:
#line 618 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 618 "prog_mode.m"
            break;
#line 618 "prog_mode.m"
          case (MR_Integer) 4:
#line 629 "prog_mode.m"
            {
#line 629 "prog_mode.m"
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 629 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 629 "prog_mode.m"
            }
#line 618 "prog_mode.m"
            break;
#line 618 "prog_mode.m"
          case (MR_Integer) 5:
#line 622 "prog_mode.m"
            {
#line 622 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 622 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 622 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_12;

#line 623 "prog_mode.m"
              {
#line 623 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
              }
#line 622 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 622 "prog_mode.m"
                {
#line 624 "prog_mode.m"
                  {
#line 624 "prog_mode.m"
                    MR_Word base;
#line 624 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_mode.m"
                    *parse_tree__prog_mode__InstName_6 = base;
#line 624 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 624 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
#line 624 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 624 "prog_mode.m"
                  }
#line 624 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 622 "prog_mode.m"
                }
#line 622 "prog_mode.m"
            }
#line 618 "prog_mode.m"
            break;
#line 618 "prog_mode.m"
        }
#line 618 "prog_mode.m"
        break;
#line 618 "prog_mode.m"
    }
#line 618 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 618 "prog_mode.m"
  }
#line 613 "prog_mode.m"
}

#line 610 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
#line 610 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 610 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 610 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 610 "prog_mode.m"
{
#line 610 "prog_mode.m"
  {
#line 610 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 610 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 610 "prog_mode.m"
    {
#line 610 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 610 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 610 "prog_mode.m"
  }
#line 610 "prog_mode.m"
}

#line 605 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
#line 605 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 605 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 605 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6)
#line 605 "prog_mode.m"
{
#line 608 "prog_mode.m"
  {
#line 608 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_9;
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_10_10;

#line 610 "prog_mode.m"
    {
#line 610 "prog_mode.m"
      parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 610 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 610 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1));
#line 610 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 610 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 610 "prog_mode.m"
    }
#line 4991 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 610 "prog_mode.m"
    {
#line 610 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
#line 611 "prog_mode.m"
    {
#line 611 "prog_mode.m"
      MR_Word base;
#line 611 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_6 = base;
#line 611 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 611 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 611 "prog_mode.m"
    }
#line 608 "prog_mode.m"
  }
#line 605 "prog_mode.m"
}

#line 523 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
#line 523 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 523 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 523 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 523 "prog_mode.m"
{
#line 523 "prog_mode.m"
  {
#line 523 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 523 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv5_Mode_6;

#line 523 "prog_mode.m"
    {
#line 523 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv5_Mode_6);
    }
#line 523 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv5_Mode_6));
#line 523 "prog_mode.m"
  }
#line 523 "prog_mode.m"
}

#line 584 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 584 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
#line 584 "prog_mode.m"
{
#line 584 "prog_mode.m"
  {
#line 584 "prog_mode.m"
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
#line 584 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 584 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_LambdaHeadVar__2_43;

#line 584 "prog_mode.m"
    {
#line 584 "prog_mode.m"
      parse_tree__prog_mode__conv4_LambdaHeadVar__2_43 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__584__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
#line 584 "prog_mode.m"
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_LambdaHeadVar__2_43));
#line 584 "prog_mode.m"
    return parse_tree__prog_mode__wrapper_arg_2;
#line 584 "prog_mode.m"
  }
#line 584 "prog_mode.m"
}

#line 560 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 560 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 560 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 560 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 560 "prog_mode.m"
{
#line 560 "prog_mode.m"
  {
#line 560 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 560 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv3_BoundInst_6;

#line 560 "prog_mode.m"
    {
#line 560 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv3_BoundInst_6);
    }
#line 560 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_BoundInst_6));
#line 560 "prog_mode.m"
  }
#line 560 "prog_mode.m"
}

#line 568 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 568 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 568 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 568 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 568 "prog_mode.m"
{
#line 568 "prog_mode.m"
  {
#line 568 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 568 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

#line 568 "prog_mode.m"
    {
#line 568 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
#line 568 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
#line 568 "prog_mode.m"
  }
#line 568 "prog_mode.m"
}

#line 536 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
#line 536 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 536 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 536 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 536 "prog_mode.m"
{
#line 536 "prog_mode.m"
  {
#line 536 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 536 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_Mode_6;

#line 536 "prog_mode.m"
    {
#line 536 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Mode_6);
    }
#line 536 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Mode_6));
#line 536 "prog_mode.m"
  }
#line 536 "prog_mode.m"
}

#line 600 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 600 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 600 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 600 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 600 "prog_mode.m"
{
#line 600 "prog_mode.m"
  {
#line 600 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 600 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 600 "prog_mode.m"
    {
#line 600 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 600 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 600 "prog_mode.m"
  }
#line 600 "prog_mode.m"
}

#line 508 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 508 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 508 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 508 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 508 "prog_mode.m"
{
#line 516 "prog_mode.m"
  {
#line 516 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 516 "prog_mode.m"
#line 516 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 516 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 516 "prog_mode.m"
      case (MR_Integer) 0:
#line 517 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 516 "prog_mode.m"
        break;
#line 516 "prog_mode.m"
      case (MR_Integer) 1:
#line 517 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 516 "prog_mode.m"
        break;
#line 516 "prog_mode.m"
      case (MR_Integer) 2:
#line 532 "prog_mode.m"
        {
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 532 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_71;

#line 539 "prog_mode.m"
          if ((parse_tree__prog_mode__HOInstInfo0_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "prog_mode.m"
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "prog_mode.m"
          else
#line 535 "prog_mode.m"
            {
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_79_79;
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_48_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_65), (MR_Integer) 1);
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_49_49;
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_50_50;
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PorF_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 0)));
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Modes0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 1)));
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__MaybeArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 2)));
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 3)));
#line 535 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Modes_58;

#line 536 "prog_mode.m"
              {
#line 536 "prog_mode.m"
                parse_tree__prog_mode__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 536 "prog_mode.m"
              }
#line 5284 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 536 "prog_mode.m"
              {
#line 536 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__V_49_49, parse_tree__prog_mode__Modes0_55, &parse_tree__prog_mode__Modes_58);
              }
#line 538 "prog_mode.m"
              {
#line 538 "prog_mode.m"
                parse_tree__prog_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_54));
#line 538 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_58));
#line 538 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_56));
#line 538 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 3) = ((MR_Box) (parse_tree__prog_mode__Det_57));
#line 538 "prog_mode.m"
              }
#line 538 "prog_mode.m"
              parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_50_50);
#line 535 "prog_mode.m"
            }
#line 543 "prog_mode.m"
          {
#line 543 "prog_mode.m"
            MR_Word base;
#line 543 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 543 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_64));
#line 543 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_71));
#line 543 "prog_mode.m"
          }
#line 532 "prog_mode.m"
        }
#line 516 "prog_mode.m"
        break;
#line 516 "prog_mode.m"
      case (MR_Integer) 3:
#line 516 "prog_mode.m"
#line 516 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 516 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 516 "prog_mode.m"
          case (MR_Integer) 0:
#line 545 "prog_mode.m"
            {
#line 545 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 545 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 545 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 550 "prog_mode.m"
#line 550 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_17)) {
#line 550 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_mode.m"
                case (MR_Integer) 0:
#line 550 "prog_mode.m"
#line 550 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_17)) {
#line 550 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_mode.m"
                    case (MR_Integer) 0:
#line 567 "prog_mode.m"
                      {
#line 567 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_86_86;
#line 567 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_44_44;
#line 567 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_72;

#line 568 "prog_mode.m"
                        {
#line 568 "prog_mode.m"
                          parse_tree__prog_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 568 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 568 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
#line 568 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 568 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 568 "prog_mode.m"
                        }
#line 5382 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 568 "prog_mode.m"
                        {
#line 568 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__V_44_44, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_72);
                        }
#line 572 "prog_mode.m"
                        {
#line 572 "prog_mode.m"
                          MR_Word base;
#line 572 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 572 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 572 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 572 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_72));
#line 572 "prog_mode.m"
                        }
#line 567 "prog_mode.m"
                      }
#line 550 "prog_mode.m"
                      break;
#line 550 "prog_mode.m"
                    case (MR_Integer) 1:
#line 549 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 550 "prog_mode.m"
                      break;
#line 550 "prog_mode.m"
                  }
#line 550 "prog_mode.m"
                  break;
#line 550 "prog_mode.m"
                case (MR_Integer) 1:
#line 551 "prog_mode.m"
                  {
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 3)));
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 0)));
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 1)));
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 2)));
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 4)));
#line 551 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 5)));
#line 554 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_80_80;
#line 554 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_25;
#line 554 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_26;

#line 553 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_22)) == (MR_mktag((MR_Integer) 1)));
#line 553 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 553 "prog_mode.m"
                      {
#line 553 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_22, (MR_Integer) 0)));
#line 5452 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_80_80 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 555 "prog_mode.m"
                        {
#line 555 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVarsSet_25, &parse_tree__prog_mode__InstVars_26);
                        }
#line 556 "prog_mode.m"
                        {
#line 556 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVars_26, parse_tree__prog_mode__Renaming_4);
                        }
#line 553 "prog_mode.m"
                      }
#line 552 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 558 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 552 "prog_mode.m"
                    else
#line 561 "prog_mode.m"
                      {
#line 561 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_83_83;
#line 561 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_27;
#line 561 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_46_46;

#line 560 "prog_mode.m"
                        {
#line 560 "prog_mode.m"
                          parse_tree__prog_mode__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 560 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
#line 560 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 560 "prog_mode.m"
                        }
#line 5495 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 560 "prog_mode.m"
                        {
#line 560 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__V_46_46, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_27);
                        }
#line 564 "prog_mode.m"
                        {
#line 564 "prog_mode.m"
                          MR_Word base;
#line 564 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 564 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 564 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 564 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 564 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_27));
#line 564 "prog_mode.m"
                        }
#line 561 "prog_mode.m"
                      }
#line 551 "prog_mode.m"
                  }
#line 550 "prog_mode.m"
                  break;
#line 550 "prog_mode.m"
              }
#line 545 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
          case (MR_Integer) 1:
#line 519 "prog_mode.m"
            {
#line 519 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 519 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 519 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_15;

#line 526 "prog_mode.m"
              if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "prog_mode.m"
                parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "prog_mode.m"
              else
#line 522 "prog_mode.m"
                {
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__TypeCtorInfo_76_76;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PorF_10;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes0_11;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Det_13;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes_14;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_51_51 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_52_52;
#line 522 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_53_53;

#line 522 "prog_mode.m"
                  parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 0)));
#line 522 "prog_mode.m"
                  parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 1)));
#line 522 "prog_mode.m"
                  parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 2)));
#line 522 "prog_mode.m"
                  parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 3)));
#line 523 "prog_mode.m"
                  {
#line 523 "prog_mode.m"
                    parse_tree__prog_mode__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 523 "prog_mode.m"
                  }
#line 5592 "parse_tree.prog_mode.c"
                  parse_tree__prog_mode__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 523 "prog_mode.m"
                  {
#line 523 "prog_mode.m"
                    mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__V_52_52, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                  }
#line 525 "prog_mode.m"
                  {
#line 525 "prog_mode.m"
                    parse_tree__prog_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
#line 525 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
#line 525 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
#line 525 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
#line 525 "prog_mode.m"
                  }
#line 525 "prog_mode.m"
                  parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_53_53);
#line 522 "prog_mode.m"
                }
#line 530 "prog_mode.m"
              {
#line 530 "prog_mode.m"
                MR_Word base;
#line 530 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 530 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 530 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
#line 530 "prog_mode.m"
              }
#line 519 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
          case (MR_Integer) 2:
#line 575 "prog_mode.m"
            {
#line 575 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 576 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var1_29;
#line 576 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 576 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv6_Var1_29;

#line 576 "prog_mode.m"
              {
#line 576 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__Var0_28)), &parse_tree__prog_mode__conv6_Var1_29);
              }
#line 576 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 576 "prog_mode.m"
                {
#line 576 "prog_mode.m"
                  parse_tree__prog_mode__Var1_29 = ((MR_Word) parse_tree__prog_mode__conv6_Var1_29);
#line 576 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 576 "prog_mode.m"
                }
#line 576 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 577 "prog_mode.m"
                {
#line 577 "prog_mode.m"
                  MR_Word base;
#line 577 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 577 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 577 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_29));
#line 577 "prog_mode.m"
                }
#line 576 "prog_mode.m"
              else
#line 579 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 575 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
          case (MR_Integer) 3:
#line 582 "prog_mode.m"
            {
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_88_88;
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_32;
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_33;
#line 582 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_41_41;

#line 583 "prog_mode.m"
              {
#line 583 "prog_mode.m"
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__SubInst0_31, &parse_tree__prog_mode__SubInst_32);
              }
#line 5711 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeInfo_88_88 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 584 "prog_mode.m"
              {
#line 584 "prog_mode.m"
                parse_tree__prog_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
#line 584 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
#line 584 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 584 "prog_mode.m"
              }
#line 584 "prog_mode.m"
              {
#line 584 "prog_mode.m"
                parse_tree__prog_mode__Vars_33 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__V_41_41, parse_tree__prog_mode__Vars0_30);
              }
#line 590 "prog_mode.m"
              {
#line 590 "prog_mode.m"
                MR_Word base;
#line 590 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 590 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_33));
#line 590 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_32));
#line 590 "prog_mode.m"
              }
#line 582 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
          case (MR_Integer) 4:
#line 592 "prog_mode.m"
            {
#line 592 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 593 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name1_36;

#line 593 "prog_mode.m"
              {
#line 593 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_35, &parse_tree__prog_mode__Name1_36);
              }
#line 593 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 594 "prog_mode.m"
                {
#line 594 "prog_mode.m"
                  MR_Word base;
#line 594 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 594 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 594 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_36));
#line 594 "prog_mode.m"
                }
#line 593 "prog_mode.m"
              else
#line 596 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 592 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
          case (MR_Integer) 5:
#line 599 "prog_mode.m"
            {
#line 599 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_92_92;
#line 599 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Sym_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 599 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 599 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts_39;
#line 599 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;

#line 600 "prog_mode.m"
              {
#line 600 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 600 "prog_mode.m"
              }
#line 5819 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 600 "prog_mode.m"
              {
#line 600 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__SubInsts0_38, &parse_tree__prog_mode__SubInsts_39);
              }
#line 602 "prog_mode.m"
              {
#line 602 "prog_mode.m"
                MR_Word base;
#line 602 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 602 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 602 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 602 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_37));
#line 602 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_39));
#line 602 "prog_mode.m"
              }
#line 599 "prog_mode.m"
            }
#line 516 "prog_mode.m"
            break;
#line 516 "prog_mode.m"
        }
#line 516 "prog_mode.m"
        break;
#line 516 "prog_mode.m"
    }
#line 516 "prog_mode.m"
  }
#line 508 "prog_mode.m"
}

#line 504 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 504 "prog_mode.m"
    {
#line 504 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 504 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 504 "prog_mode.m"
  }
#line 504 "prog_mode.m"
}

#line 493 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 493 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 493 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 493 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 493 "prog_mode.m"
{
#line 498 "prog_mode.m"
  {
#line 498 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 498 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 498 "prog_mode.m"
      {
#line 498 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 498 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 498 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 498 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 499 "prog_mode.m"
        {
#line 499 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 500 "prog_mode.m"
        {
#line 500 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 501 "prog_mode.m"
        {
#line 501 "prog_mode.m"
          MR_Word base;
#line 501 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 501 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 501 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 501 "prog_mode.m"
        }
#line 498 "prog_mode.m"
      }
#line 498 "prog_mode.m"
    else
#line 503 "prog_mode.m"
      {
#line 503 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 503 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 503 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 503 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_13;
#line 503 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 504 "prog_mode.m"
        {
#line 504 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 504 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
#line 504 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 504 "prog_mode.m"
        }
#line 5971 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 504 "prog_mode.m"
        {
#line 504 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
        }
#line 505 "prog_mode.m"
        {
#line 505 "prog_mode.m"
          MR_Word base;
#line 505 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 505 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 505 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
#line 505 "prog_mode.m"
        }
#line 503 "prog_mode.m"
      }
#line 498 "prog_mode.m"
  }
#line 493 "prog_mode.m"
}

#line 479 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 479 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 479 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 479 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 479 "prog_mode.m"
{
#line 482 "prog_mode.m"
  {
#line 482 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 482 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "prog_mode.m"
    else
#line 483 "prog_mode.m"
      {
#line 483 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 483 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 483 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8;
#line 483 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_9;

#line 313 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_6)) == (MR_mktag((MR_Integer) 0))))
#line 313 "prog_mode.m"
          {
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_15;
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_16;

#line 314 "prog_mode.m"
            {
#line 314 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_13, &parse_tree__prog_mode__I_15);
            }
#line 315 "prog_mode.m"
            {
#line 315 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_14, &parse_tree__prog_mode__F_16);
            }
#line 316 "prog_mode.m"
            {
#line 316 "prog_mode.m"
              parse_tree__prog_mode__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_15));
#line 316 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_16));
#line 316 "prog_mode.m"
            }
#line 313 "prog_mode.m"
          }
#line 313 "prog_mode.m"
        else
#line 318 "prog_mode.m"
          {
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_19;

#line 319 "prog_mode.m"
            {
#line 319 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_18, &parse_tree__prog_mode__Args_19);
            }
#line 320 "prog_mode.m"
            {
#line 320 "prog_mode.m"
              parse_tree__prog_mode__Mode_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_17));
#line 320 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_19));
#line 320 "prog_mode.m"
            }
#line 318 "prog_mode.m"
          }
#line 485 "prog_mode.m"
        {
#line 485 "prog_mode.m"
          parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_9);
        }
#line 483 "prog_mode.m"
        {
#line 483 "prog_mode.m"
          MR_Word base;
#line 483 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 483 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_8));
#line 483 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_9));
#line 483 "prog_mode.m"
        }
#line 483 "prog_mode.m"
      }
#line 482 "prog_mode.m"
  }
#line 479 "prog_mode.m"
}

#line 461 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 461 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 461 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 461 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 461 "prog_mode.m"
{
#line 464 "prog_mode.m"
  {
#line 464 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 464 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "prog_mode.m"
    else
#line 465 "prog_mode.m"
      {
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PredOrFunc_8;
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_9;
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MaybeArgRegs_10;
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_11;
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_12;
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HeadVar__2_2), (MR_Integer) 1);
#line 465 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 467 "prog_mode.m"
        parse_tree__prog_mode__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 0)));
#line 467 "prog_mode.m"
        parse_tree__prog_mode__Modes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 1)));
#line 467 "prog_mode.m"
        parse_tree__prog_mode__MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 2)));
#line 467 "prog_mode.m"
        parse_tree__prog_mode__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 3)));
#line 473 "prog_mode.m"
        {
#line 473 "prog_mode.m"
          parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_1);
        }
#line 473 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 474 "prog_mode.m"
          parse_tree__prog_mode__Modes_12 = parse_tree__prog_mode__Modes0_9;
#line 473 "prog_mode.m"
        else
#line 476 "prog_mode.m"
          {
#line 476 "prog_mode.m"
            parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_9, &parse_tree__prog_mode__Modes_12);
          }
#line 470 "prog_mode.m"
        {
#line 470 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_8));
#line 470 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_12));
#line 470 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_10));
#line 470 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Det_11));
#line 470 "prog_mode.m"
        }
#line 470 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_14_14);
#line 465 "prog_mode.m"
      }
#line 464 "prog_mode.m"
  }
#line 461 "prog_mode.m"
}

#line 450 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 450 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 450 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 450 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 450 "prog_mode.m"
{
#line 453 "prog_mode.m"
  {
#line 453 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 453 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "prog_mode.m"
    else
#line 455 "prog_mode.m"
      {
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_8;
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_9;
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
#line 455 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_12;

#line 457 "prog_mode.m"
        {
#line 457 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
        }
#line 458 "prog_mode.m"
        {
#line 458 "prog_mode.m"
          parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
#line 458 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
#line 458 "prog_mode.m"
        }
#line 459 "prog_mode.m"
        {
#line 459 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
        }
#line 455 "prog_mode.m"
        {
#line 455 "prog_mode.m"
          MR_Word base;
#line 455 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 455 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
#line 455 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
#line 455 "prog_mode.m"
        }
#line 455 "prog_mode.m"
      }
#line 453 "prog_mode.m"
  }
#line 450 "prog_mode.m"
}

#line 431 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 431 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 431 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 431 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 431 "prog_mode.m"
{
#line 436 "prog_mode.m"
  {
#line 436 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 436 "prog_mode.m"
#line 436 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
#line 436 "prog_mode.m"
      default:
#line 436 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 436 "prog_mode.m"
        break;
#line 436 "prog_mode.m"
      case (MR_Integer) 0:
#line 436 "prog_mode.m"
        {
#line 436 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 436 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 436 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_9;

#line 437 "prog_mode.m"
          {
#line 437 "prog_mode.m"
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
          }
#line 438 "prog_mode.m"
          {
#line 438 "prog_mode.m"
            MR_Word base;
#line 438 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "prog_mode.m"
            *parse_tree__prog_mode__InstName_6 = base;
#line 438 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
#line 438 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 438 "prog_mode.m"
          }
#line 436 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 436 "prog_mode.m"
        }
#line 436 "prog_mode.m"
        break;
#line 436 "prog_mode.m"
      case (MR_Integer) 3:
#line 436 "prog_mode.m"
#line 436 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
#line 436 "prog_mode.m"
          default:
#line 436 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 436 "prog_mode.m"
            break;
#line 436 "prog_mode.m"
          case (MR_Integer) 4:
#line 447 "prog_mode.m"
            {
#line 447 "prog_mode.m"
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 447 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 447 "prog_mode.m"
            }
#line 436 "prog_mode.m"
            break;
#line 436 "prog_mode.m"
          case (MR_Integer) 5:
#line 440 "prog_mode.m"
            {
#line 440 "prog_mode.m"
              MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 440 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 440 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_12;

#line 441 "prog_mode.m"
              {
#line 441 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
              }
#line 440 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 440 "prog_mode.m"
                {
#line 442 "prog_mode.m"
                  {
#line 442 "prog_mode.m"
                    MR_Word base;
#line 442 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_mode.m"
                    *parse_tree__prog_mode__InstName_6 = base;
#line 442 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 442 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
#line 442 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
#line 442 "prog_mode.m"
                  }
#line 442 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 440 "prog_mode.m"
                }
#line 440 "prog_mode.m"
            }
#line 436 "prog_mode.m"
            break;
#line 436 "prog_mode.m"
        }
#line 436 "prog_mode.m"
        break;
#line 436 "prog_mode.m"
    }
#line 436 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 436 "prog_mode.m"
  }
#line 431 "prog_mode.m"
}

#line 416 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 416 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2)
#line 416 "prog_mode.m"
{
#line 419 "prog_mode.m"
  while (MR_TRUE)
#line 419 "prog_mode.m"
    {
#line 419 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 419 "prog_mode.m"
      {
#line 419 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 419 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 419 "prog_mode.m"
        else
#line 420 "prog_mode.m"
          {
#line 420 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 422 "prog_mode.m"
            MR_Box parse_tree__prog_mode___ReplacementInst_7;

#line 422 "prog_mode.m"
            {
#line 422 "prog_mode.m"
              parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__TypeInfo_for_T_8, parse_tree__prog_mode__HeadVar__2_2, ((MR_Box) (parse_tree__prog_mode__InstVar_4)), &parse_tree__prog_mode___ReplacementInst_7);
            }
#line 421 "prog_mode.m"
            parse_tree__prog_mode__succeeded = !(parse_tree__prog_mode__succeeded);
#line 420 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 424 "prog_mode.m"
              {
#line 424 "prog_mode.m"
                /* direct tailcall eliminated */
#line 424 "prog_mode.m"
                {
#line 424 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__InstVars_5;

#line 424 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 424 "prog_mode.m"
                }
#line 424 "prog_mode.m"
                continue;
#line 424 "prog_mode.m"
              }
#line 420 "prog_mode.m"
          }
#line 419 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 419 "prog_mode.m"
      }
#line 419 "prog_mode.m"
      break;
#line 419 "prog_mode.m"
    }
#line 416 "prog_mode.m"
}

#line 330 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 330 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 330 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 330 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 330 "prog_mode.m"
{
#line 333 "prog_mode.m"
  {
#line 333 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 333 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "prog_mode.m"
    else
#line 334 "prog_mode.m"
      {
#line 334 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Inst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Inst_8;
#line 334 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_9;

#line 335 "prog_mode.m"
        {
#line 335 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Inst0_6, &parse_tree__prog_mode__Inst_8);
        }
#line 336 "prog_mode.m"
        {
#line 336 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Insts0_7, &parse_tree__prog_mode__Insts_9);
        }
#line 334 "prog_mode.m"
        {
#line 334 "prog_mode.m"
          MR_Word base;
#line 334 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 334 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Inst_8));
#line 334 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 334 "prog_mode.m"
        }
#line 334 "prog_mode.m"
      }
#line 333 "prog_mode.m"
  }
#line 330 "prog_mode.m"
}

#line 1077 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1077 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1077 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1077 "prog_mode.m"
{
#line 1077 "prog_mode.m"
  {
#line 1077 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1077 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1077 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10;

#line 1077 "prog_mode.m"
    {
#line 1077 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10);
    }
#line 1077 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1077 "prog_mode.m"
      {
#line 1077 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10));
#line 1077 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1077 "prog_mode.m"
      }
#line 1077 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1077 "prog_mode.m"
  }
#line 1077 "prog_mode.m"
}

#line 168 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(
#line 168 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndModes_2)
#line 168 "prog_mode.m"
{
#line 1076 "prog_mode.m"
  {
#line 1076 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1076 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 1077 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 1077 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 1078 "prog_mode.m"
    {
#line 1078 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1077 "prog_mode.m"
    {
#line 1077 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__TypeAndModes_2, ((MR_Box) (parse_tree__prog_mode__V_5_5)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 1077 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1077 "prog_mode.m"
      {
#line 1077 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 1077 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1077 "prog_mode.m"
      }
#line 1076 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1076 "prog_mode.m"
  }
#line 168 "prog_mode.m"
}

#line 1074 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1074 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1074 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1074 "prog_mode.m"
{
#line 1074 "prog_mode.m"
  {
#line 1074 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1074 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 1074 "prog_mode.m"
    {
#line 1074 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 1074 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1074 "prog_mode.m"
      {
#line 1074 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1074 "prog_mode.m"
      }
#line 1074 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
  }
#line 1074 "prog_mode.m"
}

#line 165 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(
#line 165 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_2)
#line 165 "prog_mode.m"
{
#line 1067 "prog_mode.m"
  {
#line 1067 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1067 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_4_4;
#line 1074 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 1074 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 1068 "prog_mode.m"
    {
#line 1068 "prog_mode.m"
      parse_tree__prog_mode__V_4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1074 "prog_mode.m"
    {
#line 1074 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[5], parse_tree__prog_mode__Modes_2, ((MR_Box) (parse_tree__prog_mode__V_4_4)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 1074 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1074 "prog_mode.m"
      {
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 1074 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1074 "prog_mode.m"
      }
#line 1067 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1067 "prog_mode.m"
  }
#line 165 "prog_mode.m"
}

#line 949 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 949 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 949 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 949 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 949 "prog_mode.m"
{
#line 949 "prog_mode.m"
  {
#line 949 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 949 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 949 "prog_mode.m"
    {
#line 949 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 949 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 949 "prog_mode.m"
  }
#line 949 "prog_mode.m"
}

#line 157 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
#line 157 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 157 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 157 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 157 "prog_mode.m"
{
#line 943 "prog_mode.m"
  {
#line 943 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 943 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 943 "prog_mode.m"
      {
#line 943 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 943 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 943 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 943 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 944 "prog_mode.m"
        {
#line 944 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 945 "prog_mode.m"
        {
#line 945 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 946 "prog_mode.m"
        {
#line 946 "prog_mode.m"
          MR_Word base;
#line 946 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 946 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 946 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 946 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 946 "prog_mode.m"
        }
#line 943 "prog_mode.m"
      }
#line 943 "prog_mode.m"
    else
#line 948 "prog_mode.m"
      {
#line 948 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 948 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 948 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 948 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_13;
#line 948 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 949 "prog_mode.m"
        {
#line 949 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 949 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 949 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
#line 949 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 949 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 949 "prog_mode.m"
        }
#line 6860 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 949 "prog_mode.m"
        {
#line 949 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
        }
#line 950 "prog_mode.m"
        {
#line 950 "prog_mode.m"
          MR_Word base;
#line 950 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 950 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 950 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
#line 950 "prog_mode.m"
        }
#line 948 "prog_mode.m"
      }
#line 943 "prog_mode.m"
  }
#line 157 "prog_mode.m"
}

#line 150 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
#line 150 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 150 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 150 "prog_mode.m"
{
#line 938 "prog_mode.m"
  {
#line 938 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 938 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;

#line 939 "prog_mode.m"
    {
#line 939 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 939 "prog_mode.m"
    {
#line 939 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__V_5_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
    }
#line 938 "prog_mode.m"
  }
#line 150 "prog_mode.m"
}

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 825 "prog_mode.m"
{
#line 825 "prog_mode.m"
  {
#line 825 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 825 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 825 "prog_mode.m"
    {
#line 825 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 825 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 825 "prog_mode.m"
  }
#line 825 "prog_mode.m"
}

#line 143 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
#line 143 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 143 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 143 "prog_mode.m"
{
#line 833 "prog_mode.m"
  {
#line 833 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 833 "prog_mode.m"
#line 833 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
#line 833 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 833 "prog_mode.m"
      case (MR_Integer) 0:
#line 834 "prog_mode.m"
        *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 833 "prog_mode.m"
        break;
#line 833 "prog_mode.m"
      case (MR_Integer) 1:
#line 834 "prog_mode.m"
        *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 833 "prog_mode.m"
        break;
#line 833 "prog_mode.m"
      case (MR_Integer) 2:
#line 840 "prog_mode.m"
        {
#line 840 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 840 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 840 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_12;

#line 841 "prog_mode.m"
          {
#line 841 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_11, &parse_tree__prog_mode__HOInstInfo_12);
          }
#line 842 "prog_mode.m"
          {
#line 842 "prog_mode.m"
            MR_Word base;
#line 842 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 842 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
#line 842 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
#line 842 "prog_mode.m"
          }
#line 840 "prog_mode.m"
        }
#line 833 "prog_mode.m"
        break;
#line 833 "prog_mode.m"
      case (MR_Integer) 3:
#line 833 "prog_mode.m"
#line 833 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
#line 833 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 833 "prog_mode.m"
          case (MR_Integer) 0:
#line 848 "prog_mode.m"
            {
#line 848 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 848 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 848 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts_15;
#line 848 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

#line 849 "prog_mode.m"
              {
#line 849 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
              }
#line 850 "prog_mode.m"
              {
#line 850 "prog_mode.m"
                MR_Word base;
#line 850 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 850 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 850 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 850 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
#line 850 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
#line 850 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
#line 850 "prog_mode.m"
              }
#line 848 "prog_mode.m"
            }
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
          case (MR_Integer) 1:
#line 844 "prog_mode.m"
            {
#line 844 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 844 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 844 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_24;

#line 845 "prog_mode.m"
              {
#line 845 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_23, &parse_tree__prog_mode__HOInstInfo_24);
              }
#line 846 "prog_mode.m"
              {
#line 846 "prog_mode.m"
                MR_Word base;
#line 846 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 846 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 846 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 846 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
#line 846 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
#line 846 "prog_mode.m"
              }
#line 844 "prog_mode.m"
            }
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
          case (MR_Integer) 2:
#line 834 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
          case (MR_Integer) 3:
#line 836 "prog_mode.m"
            {
#line 836 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 836 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 836 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_9;

#line 837 "prog_mode.m"
              {
#line 837 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
              }
#line 838 "prog_mode.m"
              {
#line 838 "prog_mode.m"
                MR_Word base;
#line 838 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 838 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 838 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
#line 838 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
#line 838 "prog_mode.m"
              }
#line 836 "prog_mode.m"
            }
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
          case (MR_Integer) 4:
#line 852 "prog_mode.m"
            {
#line 852 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 852 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_17;

#line 853 "prog_mode.m"
              {
#line 853 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
              }
#line 854 "prog_mode.m"
              {
#line 854 "prog_mode.m"
                MR_Word base;
#line 854 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 854 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 854 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 854 "prog_mode.m"
              }
#line 852 "prog_mode.m"
            }
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
          case (MR_Integer) 5:
#line 856 "prog_mode.m"
            {
#line 856 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_8_31;
#line 856 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 856 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 856 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_20;
#line 856 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Args_21;

#line 857 "prog_mode.m"
              {
#line 857 "prog_mode.m"
                parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__Name0_18, &parse_tree__prog_mode__Name_20);
              }
#line 7191 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_8_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 825 "prog_mode.m"
              {
#line 825 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_31, parse_tree__prog_mode__TypeCtorInfo_8_31, (MR_Word) &parse_tree__prog_mode_scalar_common_2[4], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
              }
#line 859 "prog_mode.m"
              {
#line 859 "prog_mode.m"
                MR_Word base;
#line 859 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 859 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 859 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 859 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 859 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
#line 859 "prog_mode.m"
              }
#line 856 "prog_mode.m"
            }
#line 833 "prog_mode.m"
            break;
#line 833 "prog_mode.m"
        }
#line 833 "prog_mode.m"
        break;
#line 833 "prog_mode.m"
    }
#line 833 "prog_mode.m"
  }
#line 143 "prog_mode.m"
}

#line 825 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 825 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 825 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 825 "prog_mode.m"
{
#line 825 "prog_mode.m"
  {
#line 825 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 825 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 825 "prog_mode.m"
    {
#line 825 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 825 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 825 "prog_mode.m"
  }
#line 825 "prog_mode.m"
}

#line 140 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
#line 140 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 140 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 140 "prog_mode.m"
{
#line 824 "prog_mode.m"
  {
#line 824 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 824 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 825 "prog_mode.m"
    {
#line 825 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[3], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
    }
#line 824 "prog_mode.m"
  }
#line 140 "prog_mode.m"
}

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 807 "prog_mode.m"
    {
#line 807 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 807 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 807 "prog_mode.m"
  }
#line 807 "prog_mode.m"
}

#line 137 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
#line 137 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_3,
#line 137 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_4)
#line 137 "prog_mode.m"
{
#line 806 "prog_mode.m"
  {
#line 806 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 806 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 807 "prog_mode.m"
    {
#line 807 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[2], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
    }
#line 806 "prog_mode.m"
  }
#line 137 "prog_mode.m"
}

#line 132 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_id_to_int_2_p_0(
#line 132 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 132 "prog_mode.m"
  MR_Integer * parse_tree__prog_mode__X_4)
#line 132 "prog_mode.m"
{
#line 798 "prog_mode.m"
  {
#line 798 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 798 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 798 "prog_mode.m"
    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 798 "prog_mode.m"
  }
#line 132 "prog_mode.m"
}

#line 129 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
#line 129 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_1,
#line 129 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 129 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 129 "prog_mode.m"
{
#line 741 "prog_mode.m"
  {
#line 741 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 741 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "prog_mode.m"
    else
#line 743 "prog_mode.m"
      {
#line 743 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 743 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 743 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId_8;
#line 743 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsIds_9;
#line 743 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
#line 734 "prog_mode.m"
        MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
#line 735 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_15;
#line 735 "prog_mode.m"
        MR_Integer parse_tree__prog_mode__Arity_16;
#line 735 "prog_mode.m"
        MR_Word parse_tree__prog_mode___TypeCtor_17;

#line 735 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 735 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 735 "prog_mode.m"
          {
#line 735 "prog_mode.m"
            parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
#line 735 "prog_mode.m"
            parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
#line 735 "prog_mode.m"
            parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
#line 736 "prog_mode.m"
            {
#line 736 "prog_mode.m"
              parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
#line 736 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
#line 736 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
#line 736 "prog_mode.m"
            }
#line 735 "prog_mode.m"
          }
#line 735 "prog_mode.m"
        else
#line 738 "prog_mode.m"
          parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
#line 745 "prog_mode.m"
        {
#line 745 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
        }
#line 743 "prog_mode.m"
        {
#line 743 "prog_mode.m"
          MR_Word base;
#line 743 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 743 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
#line 743 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
#line 743 "prog_mode.m"
        }
#line 743 "prog_mode.m"
      }
#line 741 "prog_mode.m"
  }
#line 129 "prog_mode.m"
}

#line 127 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
#line 127 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeCtor_4,
#line 127 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_5,
#line 127 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ConsId_6)
#line 127 "prog_mode.m"
{
#line 733 "prog_mode.m"
  {
#line 733 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 733 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
#line 734 "prog_mode.m"
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
#line 735 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_9;
#line 735 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_10;
#line 735 "prog_mode.m"
    MR_Word parse_tree__prog_mode___TypeCtor_11;

#line 735 "prog_mode.m"
    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 735 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 735 "prog_mode.m"
      {
#line 735 "prog_mode.m"
        parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
#line 735 "prog_mode.m"
        parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
#line 735 "prog_mode.m"
        parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
#line 736 "prog_mode.m"
        {
#line 736 "prog_mode.m"
          MR_Word base;
#line 736 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_mode.m"
          *parse_tree__prog_mode__ConsId_6 = base;
#line 736 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
#line 736 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
#line 736 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
#line 736 "prog_mode.m"
        }
#line 735 "prog_mode.m"
      }
#line 735 "prog_mode.m"
    else
#line 738 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
#line 733 "prog_mode.m"
  }
#line 127 "prog_mode.m"
}

#line 121 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__get_arg_insts_det_4_p_0(
#line 121 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_5,
#line 121 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 121 "prog_mode.m"
  MR_Integer parse_tree__prog_mode__Arity_7,
#line 121 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
#line 121 "prog_mode.m"
{
#line 778 "prog_mode.m"
  {
#line 778 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 778 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInstsPrime_9;

#line 778 "prog_mode.m"
    {
#line 778 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(parse_tree__prog_mode__Inst_5, parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__Arity_7, &parse_tree__prog_mode__ArgInstsPrime_9);
    }
#line 778 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 779 "prog_mode.m"
      *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInstsPrime_9;
#line 778 "prog_mode.m"
    else
#line 781 "prog_mode.m"
      {
#line 781 "prog_mode.m"
        {
#line 781 "prog_mode.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts_det\'/4", (MR_String) "get_arg_insts failed");
#line 781 "prog_mode.m"
          return;
        }
#line 781 "prog_mode.m"
      }
#line 778 "prog_mode.m"
  }
#line 121 "prog_mode.m"
}

#line 116 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_4_p_0(
#line 116 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_5,
#line 116 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 116 "prog_mode.m"
  MR_Integer parse_tree__prog_mode__Arity_7,
#line 116 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
#line 116 "prog_mode.m"
{
#line 754 "prog_mode.m"
  {
#line 754 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 754 "prog_mode.m"
#line 754 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) {
#line 754 "prog_mode.m"
      default:
#line 754 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 754 "prog_mode.m"
        break;
#line 754 "prog_mode.m"
      case (MR_Integer) 0:
#line 754 "prog_mode.m"
#line 754 "prog_mode.m"
        switch (MR_unmkbody(parse_tree__prog_mode__Inst_5)) {
#line 754 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 754 "prog_mode.m"
          case (MR_Integer) 0:
#line 770 "prog_mode.m"
            {
#line 771 "prog_mode.m"
              {
#line 771 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
              }
#line 770 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 770 "prog_mode.m"
            }
#line 754 "prog_mode.m"
            break;
#line 754 "prog_mode.m"
          case (MR_Integer) 1:
#line 754 "prog_mode.m"
            {
#line 755 "prog_mode.m"
              {
#line 755 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
              }
#line 754 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 754 "prog_mode.m"
            }
#line 754 "prog_mode.m"
            break;
#line 754 "prog_mode.m"
        }
#line 754 "prog_mode.m"
        break;
#line 754 "prog_mode.m"
      case (MR_Integer) 1:
#line 770 "prog_mode.m"
        {
#line 771 "prog_mode.m"
          {
#line 771 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
          }
#line 770 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 770 "prog_mode.m"
        }
#line 754 "prog_mode.m"
        break;
#line 754 "prog_mode.m"
      case (MR_Integer) 2:
#line 773 "prog_mode.m"
        {
#line 773 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_17_17;
#line 773 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
#line 773 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

#line 774 "prog_mode.m"
          {
#line 774 "prog_mode.m"
            parse_tree__prog_mode__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_24));
#line 774 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "prog_mode.m"
          }
#line 774 "prog_mode.m"
          {
#line 774 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_17_17)), parse_tree__prog_mode__ArgInsts_8);
          }
#line 773 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 773 "prog_mode.m"
        }
#line 754 "prog_mode.m"
        break;
#line 754 "prog_mode.m"
      case (MR_Integer) 3:
#line 754 "prog_mode.m"
#line 754 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) {
#line 754 "prog_mode.m"
          default:
#line 754 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 754 "prog_mode.m"
            break;
#line 754 "prog_mode.m"
          case (MR_Integer) 0:
#line 760 "prog_mode.m"
            {
#line 760 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
#line 760 "prog_mode.m"
              MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 760 "prog_mode.m"
              MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
#line 761 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_14;

#line 761 "prog_mode.m"
              {
#line 761 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__BoundInsts_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
              }
#line 761 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 762 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
#line 761 "prog_mode.m"
              else
#line 765 "prog_mode.m"
                {
#line 765 "prog_mode.m"
                  {
#line 765 "prog_mode.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
#line 765 "prog_mode.m"
                }
#line 760 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 760 "prog_mode.m"
            }
#line 754 "prog_mode.m"
            break;
#line 754 "prog_mode.m"
          case (MR_Integer) 1:
#line 757 "prog_mode.m"
            {
#line 757 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 757 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_21_21;
#line 757 "prog_mode.m"
              MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

#line 758 "prog_mode.m"
              {
#line 758 "prog_mode.m"
                parse_tree__prog_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 758 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
#line 758 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "prog_mode.m"
              }
#line 758 "prog_mode.m"
              {
#line 758 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_21_21)), parse_tree__prog_mode__ArgInsts_8);
              }
#line 757 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 757 "prog_mode.m"
            }
#line 754 "prog_mode.m"
            break;
#line 754 "prog_mode.m"
        }
#line 754 "prog_mode.m"
        break;
#line 754 "prog_mode.m"
    }
#line 754 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 754 "prog_mode.m"
  }
#line 116 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 647 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 651 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 651 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 651 "prog_mode.m"
{
#line 651 "prog_mode.m"
  {
#line 651 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 651 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12);
#line 651 "prog_mode.m"
    {
#line 651 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(parse_tree__prog_mode__env_ptr);
    }
#line 651 "prog_mode.m"
  }
#line 651 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 660 "prog_mode.m"
    {
#line 660 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
#line 660 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 660 "prog_mode.m"
      {
#line 660 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(parse_tree__prog_mode__env_ptr);
      }
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 658 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 658 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 658 "prog_mode.m"
{
#line 658 "prog_mode.m"
  {
#line 658 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 658 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13);
#line 658 "prog_mode.m"
    {
#line 658 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
    }
#line 658 "prog_mode.m"
  }
#line 658 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 654 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
#line 654 "prog_mode.m"
      {
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 653 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_78_78;
#line 653 "prog_mode.m"
        {
#line 653 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
        }
#line 655 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_77_77;
#line 655 "prog_mode.m"
        {
#line 655 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
        }
#line 654 "prog_mode.m"
      }
#line 654 "prog_mode.m"
    else
#line 657 "prog_mode.m"
      {
#line 657 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 657 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 658 "prog_mode.m"
        {
#line 658 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
        }
#line 657 "prog_mode.m"
      }
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 647 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
#line 647 "prog_mode.m"
      {
#line 647 "prog_mode.m"
        {
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_41;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_9;
#line 646 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_11;

#line 648 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
#line 648 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 648 "prog_mode.m"
            {
#line 648 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
#line 647 "prog_mode.m"
              {
#line 649 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
#line 7998 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 651 "prog_mode.m"
                {
#line 651 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7, parse_tree__prog_mode__env_ptr);
                }
#line 647 "prog_mode.m"
              }
#line 648 "prog_mode.m"
            }
#line 647 "prog_mode.m"
        }
#line 647 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 647 "prog_mode.m"
      }
#line 647 "prog_mode.m"
    else
#line 647 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 662 "prog_mode.m"
{
#line 662 "prog_mode.m"
  {
#line 662 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 662 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
#line 662 "prog_mode.m"
  }
#line 662 "prog_mode.m"
}

#line 675 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 675 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 675 "prog_mode.m"
{
#line 675 "prog_mode.m"
  {
#line 675 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 675 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27);
#line 675 "prog_mode.m"
    {
#line 675 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
    }
#line 675 "prog_mode.m"
  }
#line 675 "prog_mode.m"
}

#line 677 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 677 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 677 "prog_mode.m"
{
#line 677 "prog_mode.m"
  {
#line 677 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 677 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30);
#line 677 "prog_mode.m"
    {
#line 677 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
    }
#line 677 "prog_mode.m"
  }
#line 677 "prog_mode.m"
}

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 662 "prog_mode.m"
{
#line 662 "prog_mode.m"
  {
#line 662 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 678 "prog_mode.m"
    {
#line 678 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30);
    }
#line 678 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 678 "prog_mode.m"
      {
#line 678 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
      }
#line 662 "prog_mode.m"
  }
#line 662 "prog_mode.m"
}

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 662 "prog_mode.m"
{
#line 662 "prog_mode.m"
  {
#line 662 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 662 "prog_mode.m"
    {
#line 676 "prog_mode.m"
      MR_Word parse_tree__prog_mode___ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 0)));

#line 676 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 1)));
#line 8139 "parse_tree.prog_mode.c"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 677 "prog_mode.m"
      {
#line 677 "prog_mode.m"
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
#line 662 "prog_mode.m"
    }
#line 662 "prog_mode.m"
  }
#line 662 "prog_mode.m"
}

#line 662 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 662 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 662 "prog_mode.m"
{
#line 662 "prog_mode.m"
  {
#line 662 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 662 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
#line 662 "prog_mode.m"
      {
#line 662 "prog_mode.m"
        {
#line 662 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_44_44;
#line 662 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 662 "prog_mode.m"
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
#line 662 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 665 "prog_mode.m"
          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 665 "prog_mode.m"
          else
#line 665 "prog_mode.m"
          if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
#line 666 "prog_mode.m"
            {
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstVarsResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 3)));
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 0)));
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 1)));
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 2)));
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 4)));
#line 666 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 5)));

#line 669 "prog_mode.m"
              if ((parse_tree__prog_mode__InstVarsResult_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "prog_mode.m"
                (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 669 "prog_mode.m"
              else
#line 671 "prog_mode.m"
                {
#line 671 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_23, (MR_Integer) 0)));

#line 672 "prog_mode.m"
                  {
#line 672 "prog_mode.m"
                    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__InstVars_26);
                  }
#line 671 "prog_mode.m"
                }
#line 666 "prog_mode.m"
            }
#line 665 "prog_mode.m"
          else
#line 665 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 662 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 662 "prog_mode.m"
            {
#line 8231 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 675 "prog_mode.m"
              {
#line 675 "prog_mode.m"
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_44_44, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
              }
#line 662 "prog_mode.m"
            }
#line 662 "prog_mode.m"
        }
#line 662 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 662 "prog_mode.m"
      }
#line 662 "prog_mode.m"
    else
#line 662 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 662 "prog_mode.m"
  }
#line 662 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 647 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 651 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 651 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 651 "prog_mode.m"
{
#line 651 "prog_mode.m"
  {
#line 651 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 651 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69);
#line 651 "prog_mode.m"
    {
#line 651 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
    }
#line 651 "prog_mode.m"
  }
#line 651 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 660 "prog_mode.m"
    {
#line 660 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70);
    }
#line 660 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 660 "prog_mode.m"
      {
#line 660 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
      }
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 658 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 658 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 658 "prog_mode.m"
{
#line 658 "prog_mode.m"
  {
#line 658 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 658 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70);
#line 658 "prog_mode.m"
    {
#line 658 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
    }
#line 658 "prog_mode.m"
  }
#line 658 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 654 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69)) == (MR_mktag((MR_Integer) 0))))
#line 654 "prog_mode.m"
      {
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
#line 654 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

#line 653 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__V_80_80;
#line 653 "prog_mode.m"
        {
#line 653 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 655 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__V_79_79;
#line 655 "prog_mode.m"
        {
#line 655 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 654 "prog_mode.m"
      }
#line 654 "prog_mode.m"
    else
#line 657 "prog_mode.m"
      {
#line 657 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
#line 657 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

#line 658 "prog_mode.m"
        {
#line 658 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70, parse_tree__prog_mode__SubInsts_56, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
        }
#line 657 "prog_mode.m"
      }
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 647 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 647 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 647 "prog_mode.m"
{
#line 647 "prog_mode.m"
  {
#line 647 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 647 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
#line 647 "prog_mode.m"
      {
#line 647 "prog_mode.m"
        {
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_75;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_64;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_66;
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_47;
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_48;
#line 649 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_49;

#line 648 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_63)) == (MR_mktag((MR_Integer) 1)));
#line 648 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 648 "prog_mode.m"
            {
#line 648 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_64 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_63), (MR_Integer) 1);
#line 647 "prog_mode.m"
              {
#line 649 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 0)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 1)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 2)));
#line 649 "prog_mode.m"
                parse_tree__prog_mode___Detism_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 3)));
#line 8462 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_41_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 651 "prog_mode.m"
                {
#line 651 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_75, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69, parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
                }
#line 647 "prog_mode.m"
              }
#line 648 "prog_mode.m"
            }
#line 647 "prog_mode.m"
        }
#line 647 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 647 "prog_mode.m"
      }
#line 647 "prog_mode.m"
    else
#line 647 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 647 "prog_mode.m"
  }
#line 647 "prog_mode.m"
}

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 683 "prog_mode.m"
{
#line 683 "prog_mode.m"
  {
#line 683 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 683 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 683 "prog_mode.m"
  }
#line 683 "prog_mode.m"
}

#line 684 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 684 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 684 "prog_mode.m"
{
#line 684 "prog_mode.m"
  {
#line 684 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 684 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40);
#line 684 "prog_mode.m"
    {
#line 684 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
#line 684 "prog_mode.m"
  }
#line 684 "prog_mode.m"
}

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 683 "prog_mode.m"
{
#line 683 "prog_mode.m"
  {
#line 683 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 685 "prog_mode.m"
    {
#line 685 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40);
    }
#line 685 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 685 "prog_mode.m"
      {
#line 685 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
#line 683 "prog_mode.m"
  }
#line 683 "prog_mode.m"
}

#line 683 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 683 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 683 "prog_mode.m"
{
#line 683 "prog_mode.m"
  {
#line 683 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 683 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 683 "prog_mode.m"
      {
#line 683 "prog_mode.m"
        {
#line 683 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 683 "prog_mode.m"
          MR_Word parse_tree__prog_mode___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 684 "prog_mode.m"
          {
#line 684 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40, parse_tree__prog_mode__ArgInsts_39, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 683 "prog_mode.m"
        }
#line 683 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 683 "prog_mode.m"
      }
#line 683 "prog_mode.m"
    else
#line 683 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 683 "prog_mode.m"
  }
#line 683 "prog_mode.m"
}

#line 108 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
#line 108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_2)
#line 108 "prog_mode.m"
{
#line 108 "prog_mode.m"
  {
#line 108 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 108 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = parse_tree__prog_mode__Inst_2;
#line 642 "prog_mode.m"
#line 642 "prog_mode.m"
    switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) {
#line 642 "prog_mode.m"
      default:
#line 642 "prog_mode.m"
        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 642 "prog_mode.m"
        break;
#line 642 "prog_mode.m"
      case (MR_Integer) 2:
#line 647 "prog_mode.m"
        {
#line 647 "prog_mode.m"
          {
#line 647 "prog_mode.m"
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
#line 647 "prog_mode.m"
        }
#line 642 "prog_mode.m"
        break;
#line 642 "prog_mode.m"
      case (MR_Integer) 3:
#line 642 "prog_mode.m"
#line 642 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) {
#line 642 "prog_mode.m"
          default:
#line 642 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
          case (MR_Integer) 0:
#line 662 "prog_mode.m"
            {
#line 662 "prog_mode.m"
              {
#line 662 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
              }
#line 662 "prog_mode.m"
            }
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
          case (MR_Integer) 1:
#line 647 "prog_mode.m"
            {
#line 647 "prog_mode.m"
              {
#line 647 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
              }
#line 647 "prog_mode.m"
            }
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
          case (MR_Integer) 2:
#line 643 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
          case (MR_Integer) 4:
#line 680 "prog_mode.m"
            {
#line 680 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 681 "prog_mode.m"
              {
#line 681 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_31);
              }
#line 680 "prog_mode.m"
            }
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
          case (MR_Integer) 5:
#line 683 "prog_mode.m"
            {
#line 683 "prog_mode.m"
              {
#line 683 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
              }
#line 683 "prog_mode.m"
            }
#line 642 "prog_mode.m"
            break;
#line 642 "prog_mode.m"
        }
#line 642 "prog_mode.m"
        break;
#line 642 "prog_mode.m"
    }
#line 642 "prog_mode.m"
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 108 "prog_mode.m"
  }
#line 108 "prog_mode.m"
}

#line 491 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 491 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 491 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 491 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 491 "prog_mode.m"
{
#line 491 "prog_mode.m"
  {
#line 491 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 491 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 491 "prog_mode.m"
    {
#line 491 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 491 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 491 "prog_mode.m"
  }
#line 491 "prog_mode.m"
}

#line 102 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(
#line 102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__VarSet_6,
#line 102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__NewVarSet_7,
#line 102 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__MergedVarSet_8,
#line 102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_9,
#line 102 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_10)
#line 102 "prog_mode.m"
{
#line 489 "prog_mode.m"
  {
#line 489 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 489 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_16_16;
#line 489 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Renaming_11;
#line 489 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 490 "prog_mode.m"
    {
#line 490 "prog_mode.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_6, parse_tree__prog_mode__NewVarSet_7, parse_tree__prog_mode__MergedVarSet_8, &parse_tree__prog_mode__Renaming_11);
    }
#line 491 "prog_mode.m"
    {
#line 491 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 491 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
#line 491 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_11));
#line 491 "prog_mode.m"
    }
#line 8799 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 491 "prog_mode.m"
    {
#line 491 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_9, parse_tree__prog_mode__Modes_10);
    }
#line 489 "prog_mode.m"
  }
#line 102 "prog_mode.m"
}

#line 99 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(
#line 99 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 99 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes0_5,
#line 99 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Modes_6)
#line 99 "prog_mode.m"
{
#line 473 "prog_mode.m"
  {
#line 473 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 473 "prog_mode.m"
    {
#line 473 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 473 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 474 "prog_mode.m"
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
#line 473 "prog_mode.m"
    else
#line 476 "prog_mode.m"
      {
#line 476 "prog_mode.m"
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
      }
#line 473 "prog_mode.m"
  }
#line 99 "prog_mode.m"
}

#line 93 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
#line 93 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 93 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 93 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 93 "prog_mode.m"
{
#line 343 "prog_mode.m"
  {
#line 343 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 343 "prog_mode.m"
#line 343 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 343 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 343 "prog_mode.m"
      case (MR_Integer) 0:
#line 344 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 343 "prog_mode.m"
        break;
#line 343 "prog_mode.m"
      case (MR_Integer) 1:
#line 344 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 343 "prog_mode.m"
        break;
#line 343 "prog_mode.m"
      case (MR_Integer) 2:
#line 350 "prog_mode.m"
        {
#line 350 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 350 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 350 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_41;

#line 351 "prog_mode.m"
          {
#line 351 "prog_mode.m"
            parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_40, &parse_tree__prog_mode__HOInstInfo_41);
          }
#line 352 "prog_mode.m"
          {
#line 352 "prog_mode.m"
            MR_Word base;
#line 352 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 352 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_39));
#line 352 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_41));
#line 352 "prog_mode.m"
          }
#line 350 "prog_mode.m"
        }
#line 343 "prog_mode.m"
        break;
#line 343 "prog_mode.m"
      case (MR_Integer) 3:
#line 343 "prog_mode.m"
#line 343 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 343 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 343 "prog_mode.m"
          case (MR_Integer) 0:
#line 354 "prog_mode.m"
            {
#line 354 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 354 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 354 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 359 "prog_mode.m"
#line 359 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
#line 359 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 359 "prog_mode.m"
                case (MR_Integer) 0:
#line 359 "prog_mode.m"
#line 359 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
#line 359 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 359 "prog_mode.m"
                    case (MR_Integer) 0:
#line 375 "prog_mode.m"
                      {
#line 375 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_42;

#line 376 "prog_mode.m"
                        {
#line 376 "prog_mode.m"
                          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_42);
                        }
#line 379 "prog_mode.m"
                        {
#line 379 "prog_mode.m"
                          MR_Word base;
#line 379 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 379 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 379 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 379 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 379 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_42));
#line 379 "prog_mode.m"
                        }
#line 375 "prog_mode.m"
                      }
#line 359 "prog_mode.m"
                      break;
#line 359 "prog_mode.m"
                    case (MR_Integer) 1:
#line 358 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 359 "prog_mode.m"
                      break;
#line 359 "prog_mode.m"
                  }
#line 359 "prog_mode.m"
                  break;
#line 359 "prog_mode.m"
                case (MR_Integer) 1:
#line 360 "prog_mode.m"
                  {
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
#line 360 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
#line 363 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_46_46;
#line 363 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_47_47;
#line 363 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
#line 363 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_21;

#line 362 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 362 "prog_mode.m"
                      {
#line 362 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
#line 9022 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_46_46 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 364 "prog_mode.m"
                        {
#line 364 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_46_46, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                        }
#line 9029 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 365 "prog_mode.m"
                        {
#line 365 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_47_47, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__Subst_4);
                        }
#line 362 "prog_mode.m"
                      }
#line 361 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 367 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 361 "prog_mode.m"
                    else
#line 369 "prog_mode.m"
                      {
#line 369 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_22;

#line 369 "prog_mode.m"
                        {
#line 369 "prog_mode.m"
                          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                        }
#line 372 "prog_mode.m"
                        {
#line 372 "prog_mode.m"
                          MR_Word base;
#line 372 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 372 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 372 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 372 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
#line 372 "prog_mode.m"
                        }
#line 369 "prog_mode.m"
                      }
#line 360 "prog_mode.m"
                  }
#line 359 "prog_mode.m"
                  break;
#line 359 "prog_mode.m"
              }
#line 354 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
          case (MR_Integer) 1:
#line 346 "prog_mode.m"
            {
#line 346 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 346 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 346 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_10;

#line 347 "prog_mode.m"
              {
#line 347 "prog_mode.m"
                parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_9, &parse_tree__prog_mode__HOInstInfo_10);
              }
#line 348 "prog_mode.m"
              {
#line 348 "prog_mode.m"
                MR_Word base;
#line 348 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 348 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 348 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
#line 348 "prog_mode.m"
              }
#line 346 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
          case (MR_Integer) 2:
#line 382 "prog_mode.m"
            {
#line 382 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 383 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_24;
#line 383 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv2_ReplacementInst_24;

#line 383 "prog_mode.m"
              {
#line 383 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_23)), &parse_tree__prog_mode__conv2_ReplacementInst_24);
              }
#line 383 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 383 "prog_mode.m"
                {
#line 383 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_24 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_24);
#line 383 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 383 "prog_mode.m"
                }
#line 383 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 384 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_24;
#line 383 "prog_mode.m"
              else
#line 386 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 382 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
          case (MR_Integer) 3:
#line 389 "prog_mode.m"
            {
#line 389 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 389 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 389 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_44;
#line 390 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_27;
#line 390 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv0_Var0_27;
#line 395 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_43;
#line 395 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_43;

#line 390 "prog_mode.m"
              {
#line 390 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_25, &parse_tree__prog_mode__conv0_Var0_27);
              }
#line 390 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 390 "prog_mode.m"
                {
#line 390 "prog_mode.m"
                  parse_tree__prog_mode__Var0_27 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_27);
#line 390 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 390 "prog_mode.m"
                }
#line 390 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 391 "prog_mode.m"
                parse_tree__prog_mode__Var_44 = parse_tree__prog_mode__Var0_27;
#line 390 "prog_mode.m"
              else
#line 393 "prog_mode.m"
                {
#line 393 "prog_mode.m"
                  {
#line 393 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
#line 393 "prog_mode.m"
                    return;
                  }
#line 393 "prog_mode.m"
                }
#line 395 "prog_mode.m"
              {
#line 395 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_44)), &parse_tree__prog_mode__conv1_ReplacementInst_43);
              }
#line 395 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 395 "prog_mode.m"
                {
#line 395 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_43 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_43);
#line 395 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 395 "prog_mode.m"
                }
#line 395 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 396 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_43;
#line 395 "prog_mode.m"
              else
#line 400 "prog_mode.m"
                {
#line 400 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_28;

#line 400 "prog_mode.m"
                  {
#line 400 "prog_mode.m"
                    parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_26, &parse_tree__prog_mode__SubInst_28);
                  }
#line 401 "prog_mode.m"
                  {
#line 401 "prog_mode.m"
                    MR_Word base;
#line 401 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 401 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 401 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_25));
#line 401 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
#line 401 "prog_mode.m"
                  }
#line 400 "prog_mode.m"
                }
#line 389 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
          case (MR_Integer) 4:
#line 404 "prog_mode.m"
            {
#line 404 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 405 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_30;

#line 405 "prog_mode.m"
              {
#line 405 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_30);
              }
#line 405 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 406 "prog_mode.m"
                {
#line 406 "prog_mode.m"
                  MR_Word base;
#line 406 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 406 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 406 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_30));
#line 406 "prog_mode.m"
                }
#line 405 "prog_mode.m"
              else
#line 408 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 404 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
          case (MR_Integer) 5:
#line 411 "prog_mode.m"
            {
#line 411 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 411 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 411 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts_33;

#line 412 "prog_mode.m"
              {
#line 412 "prog_mode.m"
                parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_32, &parse_tree__prog_mode__ArgInsts_33);
              }
#line 413 "prog_mode.m"
              {
#line 413 "prog_mode.m"
                MR_Word base;
#line 413 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 413 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 413 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_31));
#line 413 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_33));
#line 413 "prog_mode.m"
              }
#line 411 "prog_mode.m"
            }
#line 343 "prog_mode.m"
            break;
#line 343 "prog_mode.m"
        }
#line 343 "prog_mode.m"
        break;
#line 343 "prog_mode.m"
    }
#line 343 "prog_mode.m"
  }
#line 93 "prog_mode.m"
}

#line 87 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(
#line 87 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 87 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_5,
#line 87 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_6)
#line 87 "prog_mode.m"
{
#line 324 "prog_mode.m"
  {
#line 324 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 324 "prog_mode.m"
    {
#line 324 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 324 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 325 "prog_mode.m"
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
#line 324 "prog_mode.m"
    else
#line 327 "prog_mode.m"
      {
#line 327 "prog_mode.m"
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
      }
#line 324 "prog_mode.m"
  }
#line 87 "prog_mode.m"
}

#line 81 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(
#line 81 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Params_5,
#line 81 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_6,
#line 81 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_7,
#line 81 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_8)
#line 81 "prog_mode.m"
{
#line 297 "prog_mode.m"
  {
#line 297 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 297 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "prog_mode.m"
      *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
#line 297 "prog_mode.m"
    else
#line 300 "prog_mode.m"
      {
#line 300 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 301 "prog_mode.m"
        {
#line 301 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
        }
#line 302 "prog_mode.m"
        {
#line 302 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
        }
#line 300 "prog_mode.m"
      }
#line 297 "prog_mode.m"
  }
#line 81 "prog_mode.m"
}

#line 73 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__insts_to_mode_3_p_0(
#line 73 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Initial_4,
#line 73 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Final_5,
#line 73 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 73 "prog_mode.m"
{
#line 236 "prog_mode.m"
  {
#line 236 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 236 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
      {
#line 239 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7;
#line 239 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8;

#line 239 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 239 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
          {
#line 239 "prog_mode.m"
            parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 239 "prog_mode.m"
            parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 239 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_7_7 == (MR_Integer) 0);
#line 239 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_mode.m"
          }
#line 239 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
          {
#line 240 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
#line 240 "prog_mode.m"
            MR_Word parse_tree__prog_mode__QualifiedName_67;

#line 216 "prog_mode.m"
            {
#line 216 "prog_mode.m"
              parse_tree__prog_mode__MercuryBuiltin_66 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 217 "prog_mode.m"
            {
#line 217 "prog_mode.m"
              parse_tree__prog_mode__QualifiedName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_66));
#line 217 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
            }
#line 218 "prog_mode.m"
            {
#line 218 "prog_mode.m"
              MR_Word base;
#line 218 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
              *parse_tree__prog_mode__Mode_6 = base;
#line 218 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_67));
#line 218 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
            }
#line 240 "prog_mode.m"
          }
#line 239 "prog_mode.m"
        else
#line 241 "prog_mode.m"
          {
#line 241 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_11_11;
#line 241 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_12_12;

#line 241 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 241 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
              {
#line 241 "prog_mode.m"
                parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 241 "prog_mode.m"
                parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 241 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_11_11 == (MR_Integer) 1);
#line 241 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "prog_mode.m"
              }
#line 241 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
              {
#line 242 "prog_mode.m"
                MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
#line 242 "prog_mode.m"
                MR_Word parse_tree__prog_mode__QualifiedName_74;

#line 216 "prog_mode.m"
                {
#line 216 "prog_mode.m"
                  parse_tree__prog_mode__MercuryBuiltin_73 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 217 "prog_mode.m"
                {
#line 217 "prog_mode.m"
                  parse_tree__prog_mode__QualifiedName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_73));
#line 217 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 1) = ((MR_Box) ((MR_String) "uo"));
#line 217 "prog_mode.m"
                }
#line 218 "prog_mode.m"
                {
#line 218 "prog_mode.m"
                  MR_Word base;
#line 218 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
                  *parse_tree__prog_mode__Mode_6 = base;
#line 218 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_74));
#line 218 "prog_mode.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
                }
#line 242 "prog_mode.m"
              }
#line 241 "prog_mode.m"
            else
#line 243 "prog_mode.m"
              {
#line 243 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_15_15;
#line 243 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_16_16;

#line 243 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 243 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                  {
#line 243 "prog_mode.m"
                    parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 243 "prog_mode.m"
                    parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 243 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_15_15 == (MR_Integer) 2);
#line 243 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 243 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 244 "prog_mode.m"
                  {
#line 244 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
#line 244 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_81;

#line 216 "prog_mode.m"
                    {
#line 216 "prog_mode.m"
                      parse_tree__prog_mode__MercuryBuiltin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 217 "prog_mode.m"
                    {
#line 217 "prog_mode.m"
                      parse_tree__prog_mode__QualifiedName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_80));
#line 217 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 1) = ((MR_Box) ((MR_String) "muo"));
#line 217 "prog_mode.m"
                    }
#line 218 "prog_mode.m"
                    {
#line 218 "prog_mode.m"
                      MR_Word base;
#line 218 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
                      *parse_tree__prog_mode__Mode_6 = base;
#line 218 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_81));
#line 218 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
                    }
#line 244 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
                else
#line 246 "prog_mode.m"
                  {
#line 246 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_20_20;
#line 246 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
#line 246 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_88;

#line 246 "prog_mode.m"
                    {
#line 246 "prog_mode.m"
                      parse_tree__prog_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_20_20, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 246 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_mode.m"
                    }
#line 216 "prog_mode.m"
                    {
#line 216 "prog_mode.m"
                      parse_tree__prog_mode__MercuryBuiltin_87 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 217 "prog_mode.m"
                    {
#line 217 "prog_mode.m"
                      parse_tree__prog_mode__QualifiedName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_87));
#line 217 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
                    }
#line 218 "prog_mode.m"
                    {
#line 218 "prog_mode.m"
                      MR_Word base;
#line 218 "prog_mode.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
                      *parse_tree__prog_mode__Mode_6 = base;
#line 218 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_88));
#line 218 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_20_20));
#line 218 "prog_mode.m"
                    }
#line 246 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
              }
#line 241 "prog_mode.m"
          }
#line 239 "prog_mode.m"
      }
#line 236 "prog_mode.m"
    else
#line 248 "prog_mode.m"
      {
#line 249 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22;
#line 249 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23;
#line 249 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_24_24;
#line 249 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_25_25;

#line 249 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 249 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
          {
#line 249 "prog_mode.m"
            parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 249 "prog_mode.m"
            parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 249 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_22_22 == (MR_Integer) 0);
#line 249 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 249 "prog_mode.m"
              {
#line 249 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                        parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 250 "prog_mode.m"
                        parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 250 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_24_24 == (MR_Integer) 0);
#line 249 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_mode.m"
                      }
#line 249 "prog_mode.m"
                  }
#line 249 "prog_mode.m"
              }
#line 249 "prog_mode.m"
          }
#line 248 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 252 "prog_mode.m"
          {
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__QualifiedName_95;

#line 216 "prog_mode.m"
            {
#line 216 "prog_mode.m"
              parse_tree__prog_mode__MercuryBuiltin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 217 "prog_mode.m"
            {
#line 217 "prog_mode.m"
              parse_tree__prog_mode__QualifiedName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_94));
#line 217 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "in"));
#line 217 "prog_mode.m"
            }
#line 218 "prog_mode.m"
            {
#line 218 "prog_mode.m"
              MR_Word base;
#line 218 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
              *parse_tree__prog_mode__Mode_6 = base;
#line 218 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_95));
#line 218 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
            }
#line 252 "prog_mode.m"
          }
#line 248 "prog_mode.m"
        else
#line 253 "prog_mode.m"
          {
#line 254 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_28_28;
#line 254 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_29_29;
#line 254 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_30_30;
#line 254 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_31_31;

#line 254 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 254 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 254 "prog_mode.m"
              {
#line 254 "prog_mode.m"
                parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 254 "prog_mode.m"
                parse_tree__prog_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 254 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_28_28 == (MR_Integer) 1);
#line 254 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 254 "prog_mode.m"
                  {
#line 254 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 254 "prog_mode.m"
                      {
#line 255 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 255 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 255 "prog_mode.m"
                          {
#line 255 "prog_mode.m"
                            parse_tree__prog_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 255 "prog_mode.m"
                            parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 255 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_30_30 == (MR_Integer) 3);
#line 254 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 255 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_mode.m"
                          }
#line 254 "prog_mode.m"
                      }
#line 254 "prog_mode.m"
                  }
#line 254 "prog_mode.m"
              }
#line 253 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 257 "prog_mode.m"
              {
#line 257 "prog_mode.m"
                {
#line 257 "prog_mode.m"
                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                }
#line 257 "prog_mode.m"
              }
#line 253 "prog_mode.m"
            else
#line 258 "prog_mode.m"
              {
#line 259 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_34_34;
#line 259 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_35_35;
#line 259 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_36_36;
#line 259 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_37_37;

#line 259 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 259 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 259 "prog_mode.m"
                  {
#line 259 "prog_mode.m"
                    parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 259 "prog_mode.m"
                    parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 259 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_34_34 == (MR_Integer) 2);
#line 259 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 259 "prog_mode.m"
                      {
#line 259 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 259 "prog_mode.m"
                          {
#line 260 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 260 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 260 "prog_mode.m"
                              {
#line 260 "prog_mode.m"
                                parse_tree__prog_mode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 260 "prog_mode.m"
                                parse_tree__prog_mode__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 260 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_36_36 == (MR_Integer) 4);
#line 259 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 260 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "prog_mode.m"
                              }
#line 259 "prog_mode.m"
                          }
#line 259 "prog_mode.m"
                      }
#line 259 "prog_mode.m"
                  }
#line 258 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 262 "prog_mode.m"
                  {
#line 262 "prog_mode.m"
                    {
#line 262 "prog_mode.m"
                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                    }
#line 262 "prog_mode.m"
                  }
#line 258 "prog_mode.m"
                else
#line 263 "prog_mode.m"
                  {
#line 264 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_40_40;
#line 264 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_41_41;
#line 264 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_42_42;
#line 264 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_43_43;

#line 264 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 264 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 264 "prog_mode.m"
                      {
#line 264 "prog_mode.m"
                        parse_tree__prog_mode__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 264 "prog_mode.m"
                        parse_tree__prog_mode__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 264 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_40_40 == (MR_Integer) 1);
#line 264 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 264 "prog_mode.m"
                          {
#line 264 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 264 "prog_mode.m"
                              {
#line 265 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 265 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 265 "prog_mode.m"
                                  {
#line 265 "prog_mode.m"
                                    parse_tree__prog_mode__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 265 "prog_mode.m"
                                    parse_tree__prog_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 265 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_42_42 == (MR_Integer) 1);
#line 264 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 265 "prog_mode.m"
                                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_mode.m"
                                  }
#line 264 "prog_mode.m"
                              }
#line 264 "prog_mode.m"
                          }
#line 264 "prog_mode.m"
                      }
#line 263 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 267 "prog_mode.m"
                      {
#line 267 "prog_mode.m"
                        {
#line 267 "prog_mode.m"
                          parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                        }
#line 267 "prog_mode.m"
                      }
#line 263 "prog_mode.m"
                    else
#line 268 "prog_mode.m"
                      {
#line 269 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_46_46;
#line 269 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_47_47;
#line 269 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_48_48;
#line 269 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_49_49;

#line 269 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 269 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 269 "prog_mode.m"
                          {
#line 269 "prog_mode.m"
                            parse_tree__prog_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 269 "prog_mode.m"
                            parse_tree__prog_mode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 269 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_46_46 == (MR_Integer) 2);
#line 269 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 269 "prog_mode.m"
                              {
#line 269 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 269 "prog_mode.m"
                                  {
#line 270 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 270 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 270 "prog_mode.m"
                                      {
#line 270 "prog_mode.m"
                                        parse_tree__prog_mode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 270 "prog_mode.m"
                                        parse_tree__prog_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 270 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_48_48 == (MR_Integer) 2);
#line 269 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 270 "prog_mode.m"
                                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_mode.m"
                                      }
#line 269 "prog_mode.m"
                                  }
#line 269 "prog_mode.m"
                              }
#line 269 "prog_mode.m"
                          }
#line 268 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 272 "prog_mode.m"
                          {
#line 272 "prog_mode.m"
                            {
#line 272 "prog_mode.m"
                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                            }
#line 272 "prog_mode.m"
                          }
#line 268 "prog_mode.m"
                        else
#line 273 "prog_mode.m"
                          {
#line 274 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_52_52;
#line 274 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_53_53;

#line 274 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 274 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 274 "prog_mode.m"
                              {
#line 274 "prog_mode.m"
                                parse_tree__prog_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 274 "prog_mode.m"
                                parse_tree__prog_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 274 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_52_52 == (MR_Integer) 3);
#line 274 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 274 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_mode.m"
                              }
#line 273 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 276 "prog_mode.m"
                              {
#line 276 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_55_55;

#line 276 "prog_mode.m"
                                {
#line 276 "prog_mode.m"
                                  parse_tree__prog_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_mode.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 276 "prog_mode.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "prog_mode.m"
                                }
#line 276 "prog_mode.m"
                                {
#line 276 "prog_mode.m"
                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__V_55_55, parse_tree__prog_mode__Mode_6);
                                }
#line 276 "prog_mode.m"
                              }
#line 273 "prog_mode.m"
                            else
#line 277 "prog_mode.m"
                              {
#line 277 "prog_mode.m"
                                {
#line 277 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                                }
#line 277 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 278 "prog_mode.m"
                                  {
#line 278 "prog_mode.m"
                                    MR_Word parse_tree__prog_mode__V_58_58;

#line 278 "prog_mode.m"
                                    {
#line 278 "prog_mode.m"
                                      parse_tree__prog_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_mode.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 278 "prog_mode.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "prog_mode.m"
                                    }
#line 278 "prog_mode.m"
                                    {
#line 278 "prog_mode.m"
                                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__V_58_58, parse_tree__prog_mode__Mode_6);
                                    }
#line 278 "prog_mode.m"
                                  }
#line 277 "prog_mode.m"
                                else
#line 280 "prog_mode.m"
                                  {
#line 280 "prog_mode.m"
                                    MR_Word base;
#line 280 "prog_mode.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_mode.m"
                                    *parse_tree__prog_mode__Mode_6 = base;
#line 280 "prog_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 280 "prog_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 280 "prog_mode.m"
                                  }
#line 277 "prog_mode.m"
                              }
#line 273 "prog_mode.m"
                          }
#line 268 "prog_mode.m"
                      }
#line 263 "prog_mode.m"
                  }
#line 258 "prog_mode.m"
              }
#line 253 "prog_mode.m"
          }
#line 248 "prog_mode.m"
      }
#line 236 "prog_mode.m"
  }
#line 73 "prog_mode.m"
}

#line 70 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(
#line 70 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 70 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 70 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 70 "prog_mode.m"
{
#line 222 "prog_mode.m"
  {
#line 222 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 222 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "prog_mode.m"
      if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "prog_mode.m"
      else
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
#line 222 "prog_mode.m"
    else
#line 222 "prog_mode.m"
      {
#line 222 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 222 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "prog_mode.m"
          {
#line 225 "prog_mode.m"
            {
#line 225 "prog_mode.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
#line 225 "prog_mode.m"
              return;
            }
#line 224 "prog_mode.m"
          }
#line 222 "prog_mode.m"
        else
#line 228 "prog_mode.m"
          {
#line 228 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Final_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Finals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Mode_20;
#line 228 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Modes_21;

#line 229 "prog_mode.m"
            {
#line 229 "prog_mode.m"
              parse_tree__prog_mode__insts_to_mode_3_p_0(parse_tree__prog_mode__V_23_23, parse_tree__prog_mode__Final_18, &parse_tree__prog_mode__Mode_20);
            }
#line 230 "prog_mode.m"
            {
#line 230 "prog_mode.m"
              parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(parse_tree__prog_mode__V_22_22, parse_tree__prog_mode__Finals_19, &parse_tree__prog_mode__Modes_21);
            }
#line 228 "prog_mode.m"
            {
#line 228 "prog_mode.m"
              MR_Word base;
#line 228 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "prog_mode.m"
              *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 228 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_20));
#line 228 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_21));
#line 228 "prog_mode.m"
            }
#line 228 "prog_mode.m"
          }
#line 222 "prog_mode.m"
      }
#line 222 "prog_mode.m"
  }
#line 70 "prog_mode.m"
}

#line 62 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(
#line 62 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 62 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Params_6,
#line 62 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_7,
#line 62 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_8)
#line 62 "prog_mode.m"
{
#line 287 "prog_mode.m"
  {
#line 287 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 287 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "prog_mode.m"
      *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
#line 287 "prog_mode.m"
    else
#line 290 "prog_mode.m"
      {
#line 290 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 291 "prog_mode.m"
        {
#line 291 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
        }
#line 313 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 313 "prog_mode.m"
          {
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_19;
#line 313 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_20;

#line 314 "prog_mode.m"
            {
#line 314 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_17, &parse_tree__prog_mode__I_19);
            }
#line 315 "prog_mode.m"
            {
#line 315 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_18, &parse_tree__prog_mode__F_20);
            }
#line 316 "prog_mode.m"
            {
#line 316 "prog_mode.m"
              MR_Word base;
#line 316 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 316 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_19));
#line 316 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_20));
#line 316 "prog_mode.m"
            }
#line 313 "prog_mode.m"
          }
#line 313 "prog_mode.m"
        else
#line 318 "prog_mode.m"
          {
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 318 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_23;

#line 319 "prog_mode.m"
            {
#line 319 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_22, &parse_tree__prog_mode__Args_23);
            }
#line 320 "prog_mode.m"
            {
#line 320 "prog_mode.m"
              MR_Word base;
#line 320 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 320 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_21));
#line 320 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_23));
#line 320 "prog_mode.m"
            }
#line 318 "prog_mode.m"
          }
#line 290 "prog_mode.m"
      }
#line 287 "prog_mode.m"
  }
#line 62 "prog_mode.m"
}

#line 54 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__make_std_mode_2_f_0(
#line 54 "prog_mode.m"
  MR_String parse_tree__prog_mode__Name_4,
#line 54 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_5)
#line 54 "prog_mode.m"
{
#line 215 "prog_mode.m"
  {
#line 215 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 215 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Mode_6;
#line 215 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 215 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 218 "prog_mode.m"
    }
#line 215 "prog_mode.m"
    return parse_tree__prog_mode__Mode_6;
#line 215 "prog_mode.m"
  }
#line 54 "prog_mode.m"
}

#line 53 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__make_std_mode_3_p_0(
#line 53 "prog_mode.m"
  MR_String parse_tree__prog_mode__Name_4,
#line 53 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Args_5,
#line 53 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 53 "prog_mode.m"
{
#line 215 "prog_mode.m"
  {
#line 215 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 215 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_9;
#line 215 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_10;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_9));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_10));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
#line 218 "prog_mode.m"
    }
#line 215 "prog_mode.m"
  }
#line 53 "prog_mode.m"
}

#line 51 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
#line 51 "prog_mode.m"
{
#line 211 "prog_mode.m"
  {
#line 211 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 211 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[1]);
#line 211 "prog_mode.m"
  }
#line 51 "prog_mode.m"
}

#line 50 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
#line 50 "prog_mode.m"
{
#line 210 "prog_mode.m"
  {
#line 210 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 210 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 210 "prog_mode.m"
  }
#line 50 "prog_mode.m"
}

#line 49 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
#line 49 "prog_mode.m"
{
#line 209 "prog_mode.m"
  {
#line 209 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 209 "prog_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 209 "prog_mode.m"
  }
#line 49 "prog_mode.m"
}

#line 47 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
#line 47 "prog_mode.m"
{
#line 207 "prog_mode.m"
  {
#line 207 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 207 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 207 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 207 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 218 "prog_mode.m"
    }
#line 207 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 207 "prog_mode.m"
  }
#line 47 "prog_mode.m"
}

#line 46 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
#line 46 "prog_mode.m"
{
#line 206 "prog_mode.m"
  {
#line 206 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 206 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 206 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
#line 206 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_12;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])));
#line 218 "prog_mode.m"
    }
#line 206 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 206 "prog_mode.m"
  }
#line 46 "prog_mode.m"
}

#line 45 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
#line 45 "prog_mode.m"
{
#line 205 "prog_mode.m"
  {
#line 205 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 205 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 205 "prog_mode.m"
  }
#line 45 "prog_mode.m"
}

#line 44 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__unused_mode_1_p_0(
#line 44 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 44 "prog_mode.m"
{
#line 205 "prog_mode.m"
  {
#line 205 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 205 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 205 "prog_mode.m"
  }
#line 44 "prog_mode.m"
}

#line 43 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
#line 43 "prog_mode.m"
{
#line 204 "prog_mode.m"
  {
#line 204 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 204 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 204 "prog_mode.m"
  }
#line 43 "prog_mode.m"
}

#line 42 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__muo_mode_1_p_0(
#line 42 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 42 "prog_mode.m"
{
#line 204 "prog_mode.m"
  {
#line 204 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 204 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 204 "prog_mode.m"
  }
#line 42 "prog_mode.m"
}

#line 41 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
#line 41 "prog_mode.m"
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

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 203 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 203 "prog_mode.m"
  }
#line 41 "prog_mode.m"
}

#line 40 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__mdi_mode_1_p_0(
#line 40 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 40 "prog_mode.m"
{
#line 203 "prog_mode.m"
  {
#line 203 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 203 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 203 "prog_mode.m"
  }
#line 40 "prog_mode.m"
}

#line 39 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
#line 39 "prog_mode.m"
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

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 202 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 202 "prog_mode.m"
  }
#line 39 "prog_mode.m"
}

#line 38 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__uo_mode_1_p_0(
#line 38 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 38 "prog_mode.m"
{
#line 202 "prog_mode.m"
  {
#line 202 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 202 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 202 "prog_mode.m"
  }
#line 38 "prog_mode.m"
}

#line 37 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
#line 37 "prog_mode.m"
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

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 201 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 201 "prog_mode.m"
  }
#line 37 "prog_mode.m"
}

#line 36 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__di_mode_1_p_0(
#line 36 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 36 "prog_mode.m"
{
#line 201 "prog_mode.m"
  {
#line 201 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 201 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 201 "prog_mode.m"
  }
#line 36 "prog_mode.m"
}

#line 35 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_1_f_0(
#line 35 "prog_mode.m"
  MR_Word parse_tree__prog_mode__I_3)
#line 35 "prog_mode.m"
{
#line 200 "prog_mode.m"
  {
#line 200 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
#line 200 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_11;

#line 200 "prog_mode.m"
    {
#line 200 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
#line 200 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_mode.m"
    }
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 218 "prog_mode.m"
    }
#line 200 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 200 "prog_mode.m"
  }
#line 35 "prog_mode.m"
}

#line 34 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
#line 34 "prog_mode.m"
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

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 199 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 199 "prog_mode.m"
  }
#line 34 "prog_mode.m"
}

#line 33 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__out_mode_1_p_0(
#line 33 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 33 "prog_mode.m"
{
#line 199 "prog_mode.m"
  {
#line 199 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 199 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 199 "prog_mode.m"
  }
#line 33 "prog_mode.m"
}

#line 32 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_1_f_0(
#line 32 "prog_mode.m"
  MR_Word parse_tree__prog_mode__I_3)
#line 32 "prog_mode.m"
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
#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__V_5_5));
#line 218 "prog_mode.m"
    }
#line 198 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__2_2;
#line 198 "prog_mode.m"
  }
#line 32 "prog_mode.m"
}

#line 31 "prog_mode.m"
MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
#line 31 "prog_mode.m"
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

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 197 "prog_mode.m"
    return parse_tree__prog_mode__HeadVar__1_1;
#line 197 "prog_mode.m"
  }
#line 31 "prog_mode.m"
}

#line 30 "prog_mode.m"
void MR_CALL 
parse_tree__prog_mode__in_mode_1_p_0(
#line 30 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
#line 30 "prog_mode.m"
{
#line 197 "prog_mode.m"
  {
#line 197 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
#line 197 "prog_mode.m"
    MR_Word parse_tree__prog_mode__QualifiedName_8;

#line 216 "prog_mode.m"
    {
#line 216 "prog_mode.m"
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 217 "prog_mode.m"
    {
#line 217 "prog_mode.m"
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
#line 217 "prog_mode.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
#line 217 "prog_mode.m"
    }
#line 218 "prog_mode.m"
    {
#line 218 "prog_mode.m"
      MR_Word base;
#line 218 "prog_mode.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__1_1 = base;
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
#line 218 "prog_mode.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_mode.m"
    }
#line 197 "prog_mode.m"
  }
#line 30 "prog_mode.m"
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
