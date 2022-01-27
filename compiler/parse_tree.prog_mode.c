/*
** Automatically generated from `prog_mode.m'
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


/* :- module parse_tree.prog_mode. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_mode__init
ENDINIT
*/

#include "parse_tree.prog_mode.mih"


#include "check_hlds.mih"
#include "hlds.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 695 "prog_mode.m"
struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
#line 695 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
#line 699 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 699 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 699 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
#line 700 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
#line 695 "prog_mode.m"
};

#line 107 "prog_mode.m"
struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
#line 107 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
#line 640 "prog_mode.m"
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 645 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
#line 645 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
#line 645 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
#line 649 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12;
#line 656 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13;
#line 660 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
#line 660 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45;
#line 660 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27;
#line 660 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29;
#line 660 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30;
#line 673 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27;
#line 675 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30;
#line 645 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
#line 645 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69;
#line 645 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70;
#line 649 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69;
#line 656 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70;
#line 681 "prog_mode.m"
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
#line 681 "prog_mode.m"
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40;
#line 682 "prog_mode.m"
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40;
#line 107 "prog_mode.m"
};


#line 163 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 166 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 169 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 172 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 582 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__582__1_2_f_0(
#line 582 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 582 "prog_mode.m"
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42);

#line 1177 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1177 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1170 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(
#line 1170 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_4,
#line 1170 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8,
#line 1170 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_9);

#line 1165 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4(
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1165 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1131 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1131 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1137 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1137 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31,
#line 1108 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_32);

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1102 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1102 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1089 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1089 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1089 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1089 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11);

#line 1078 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 1078 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 1078 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1078 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10);

#line 1072 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1072 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1068 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 1068 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 1068 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1068 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7);

#line 1057 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 1057 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1057 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1057 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1052 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 1052 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1052 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 1052 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6);

#line 1049 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 1049 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1049 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1049 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1044 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 1044 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1044 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 1044 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6);

#line 1040 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
#line 1040 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1040 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1040 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1035 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
#line 1035 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1035 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 1035 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6);

#line 989 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 989 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 998 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 998 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 998 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 998 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 1030 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 1030 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1030 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1030 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 951 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 951 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 951 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 951 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 805 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 919 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 919 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 919 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4);

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 875 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 875 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 875 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4);

#line 872 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 872 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 872 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 866 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 866 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 866 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4);

#line 864 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 864 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 864 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 864 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 860 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 860 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 860 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4);

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 807 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 807 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4);

#line 782 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 782 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 782 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 782 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 700 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 700 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 695 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 695 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2);

#line 617 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 617 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 617 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 617 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 611 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 611 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 611 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 611 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 608 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
#line 608 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 608 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 608 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 603 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
#line 603 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 603 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 603 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6);

#line 521 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
#line 521 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 521 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 521 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 582 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

#line 558 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 558 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 558 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 558 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 566 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 566 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 566 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 566 "prog_mode.m"
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

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 598 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 598 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 598 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 506 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 506 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 506 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 506 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6);

#line 502 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 502 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 502 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 491 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 491 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 491 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 491 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6);

#line 477 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 477 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 477 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 477 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 459 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 459 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 459 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 459 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 448 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 448 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 448 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 448 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 429 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 429 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6);

#line 414 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2);

#line 328 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 328 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 328 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 328 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

#line 1075 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1075 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 1072 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1072 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3);

#line 947 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 947 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 947 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 947 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 805 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 805 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 649 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 649 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 656 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 656 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 673 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 673 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 675 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 675 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 649 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 649 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 656 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 656 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 682 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 682 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg);

#line 489 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 489 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 489 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 489 "prog_mode.m"
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



#line 1257 "parse_tree.prog_mode.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1265 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1274 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1283 "parse_tree.prog_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 582 "prog_mode.m"
static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__582__1_2_f_0(
#line 582 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 582 "prog_mode.m"
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42)
#line 582 "prog_mode.m"
{
#line 582 "prog_mode.m"
  {
#line 582 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 582 "prog_mode.m"
    MR_Word parse_tree__prog_mode__LambdaHeadVar__2_43;
#line 582 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Var_34;
#line 583 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeInfo_89_89 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 583 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_Var_34;

#line 583 "prog_mode.m"
    {
#line 583 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__LambdaHeadVar__1_42)), &parse_tree__prog_mode__conv0_Var_34);
    }
#line 583 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 583 "prog_mode.m"
      {
#line 583 "prog_mode.m"
        parse_tree__prog_mode__Var_34 = ((MR_Word) parse_tree__prog_mode__conv0_Var_34);
#line 583 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 583 "prog_mode.m"
      }
#line 582 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 584 "prog_mode.m"
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__Var_34;
#line 582 "prog_mode.m"
    else
#line 586 "prog_mode.m"
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__LambdaHeadVar__1_42;
#line 582 "prog_mode.m"
    return parse_tree__prog_mode__LambdaHeadVar__2_43;
#line 582 "prog_mode.m"
  }
#line 582 "prog_mode.m"
}

#line 1177 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__SubInst_5,
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstVar_6,
#line 1177 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1177 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1177 "prog_mode.m"
{
#line 1185 "prog_mode.m"
  {
#line 1185 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1185 "prog_mode.m"
    MR_Word parse_tree__prog_mode__InstVarInst_8;
#line 1181 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_8;

#line 1181 "prog_mode.m"
    {
#line 1181 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), &parse_tree__prog_mode__conv0_InstVarInst_8);
    }
#line 1181 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1181 "prog_mode.m"
      {
#line 1181 "prog_mode.m"
        parse_tree__prog_mode__InstVarInst_8 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_8);
#line 1181 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1181 "prog_mode.m"
      }
#line 1185 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1184 "prog_mode.m"
      {
#line 1184 "prog_mode.m"
        {
#line 1184 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_8, parse_tree__prog_mode__SubInst_5);
        }
#line 1184 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1184 "prog_mode.m"
          {
#line 1184 "prog_mode.m"
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1184 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1184 "prog_mode.m"
          }
#line 1184 "prog_mode.m"
      }
#line 1185 "prog_mode.m"
    else
#line 1186 "prog_mode.m"
      {
#line 1186 "prog_mode.m"
        {
#line 1186 "prog_mode.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_6)), ((MR_Box) (parse_tree__prog_mode__SubInst_5)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
        }
#line 1186 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1186 "prog_mode.m"
      }
#line 1185 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1185 "prog_mode.m"
  }
#line 1177 "prog_mode.m"
}

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1106 "prog_mode.m"
{
#line 1106 "prog_mode.m"
  {
#line 1106 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1106 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1106 "prog_mode.m"
    {
#line 1106 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1106 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
      {
#line 1106 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1106 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
      }
#line 1106 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
  }
#line 1106 "prog_mode.m"
}

#line 1170 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(
#line 1170 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst_4,
#line 1170 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8,
#line 1170 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_9)
#line 1170 "prog_mode.m"
{
#line 1173 "prog_mode.m"
  {
#line 1173 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1173 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 1174 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 1106 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9;

#line 1106 "prog_mode.m"
    {
#line 1106 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[17], parse_tree__prog_mode__ArgInsts_7, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_8)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9);
    }
#line 1106 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
      {
#line 1106 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_9 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_9);
#line 1106 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
      }
#line 1173 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1173 "prog_mode.m"
  }
#line 1170 "prog_mode.m"
}

#line 1165 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4(
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1165 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1165 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1165 "prog_mode.m"
{
#line 1165 "prog_mode.m"
  {
#line 1165 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1165 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1165 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10;

#line 1165 "prog_mode.m"
    {
#line 1165 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10);
    }
#line 1165 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1165 "prog_mode.m"
      {
#line 1165 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_10));
#line 1165 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1165 "prog_mode.m"
      }
#line 1165 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1165 "prog_mode.m"
  }
#line 1165 "prog_mode.m"
}

#line 1131 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_3(
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1131 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1131 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1131 "prog_mode.m"
{
#line 1131 "prog_mode.m"
  {
#line 1131 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1131 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1131 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9;

#line 1131 "prog_mode.m"
    {
#line 1131 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9);
    }
#line 1131 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1131 "prog_mode.m"
      {
#line 1131 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_9));
#line 1131 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1131 "prog_mode.m"
      }
#line 1131 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1131 "prog_mode.m"
  }
#line 1131 "prog_mode.m"
}

#line 1137 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_2(
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1137 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1137 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1137 "prog_mode.m"
{
#line 1137 "prog_mode.m"
  {
#line 1137 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1137 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1137 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9;

#line 1137 "prog_mode.m"
    {
#line 1137 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_bound_inst_args_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9);
    }
#line 1137 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1137 "prog_mode.m"
      {
#line 1137 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_9));
#line 1137 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1137 "prog_mode.m"
      }
#line 1137 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1137 "prog_mode.m"
  }
#line 1137 "prog_mode.m"
}

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1106 "prog_mode.m"
{
#line 1106 "prog_mode.m"
  {
#line 1106 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1106 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1106 "prog_mode.m"
    {
#line 1106 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1106 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
      {
#line 1106 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1106 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
      }
#line 1106 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
  }
#line 1106 "prog_mode.m"
}

#line 1108 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(
#line 1108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst_4,
#line 1108 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31,
#line 1108 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_32)
#line 1108 "prog_mode.m"
{
#line 1113 "prog_mode.m"
  while (MR_TRUE)
#line 1113 "prog_mode.m"
    {
#line 1113 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 1113 "prog_mode.m"
      {
#line 1113 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 1113 "prog_mode.m"
#line 1113 "prog_mode.m"
        switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_4)) {
#line 1113 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "prog_mode.m"
          case (MR_Integer) 0:
#line 1113 "prog_mode.m"
#line 1113 "prog_mode.m"
            switch (MR_unmkbody(parse_tree__prog_mode__Inst_4)) {
#line 1113 "prog_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "prog_mode.m"
              case (MR_Integer) 0:
#line 1113 "prog_mode.m"
                {
#line 1113 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1113 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1113 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 1:
#line 1115 "prog_mode.m"
                {
#line 1115 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1115 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1115 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
            }
#line 1113 "prog_mode.m"
            break;
#line 1113 "prog_mode.m"
          case (MR_Integer) 1:
#line 1114 "prog_mode.m"
            {
#line 1114 "prog_mode.m"
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1114 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1114 "prog_mode.m"
            }
#line 1113 "prog_mode.m"
            break;
#line 1113 "prog_mode.m"
          case (MR_Integer) 2:
#line 1143 "prog_mode.m"
            {
#line 1143 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1142 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)));

#line 1146 "prog_mode.m"
              if ((parse_tree__prog_mode__HOInstInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "prog_mode.m"
                {
#line 1145 "prog_mode.m"
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1145 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1145 "prog_mode.m"
                }
#line 1146 "prog_mode.m"
              else
#line 1147 "prog_mode.m"
                {
#line 1147 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes_21;
#line 1147 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_41_41 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_18), (MR_Integer) 1);
#line 1147 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 0)));
#line 1147 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_22_22;
#line 1147 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_23_23;

#line 1147 "prog_mode.m"
                  parse_tree__prog_mode__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 1)));
#line 1147 "prog_mode.m"
                  parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 2)));
#line 1147 "prog_mode.m"
                  parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, (MR_Integer) 3)));
#line 1148 "prog_mode.m"
                  {
#line 1148 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                  }
#line 1147 "prog_mode.m"
                }
#line 1143 "prog_mode.m"
            }
#line 1113 "prog_mode.m"
            break;
#line 1113 "prog_mode.m"
          case (MR_Integer) 3:
#line 1113 "prog_mode.m"
#line 1113 "prog_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 0)))) {
#line 1113 "prog_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "prog_mode.m"
              case (MR_Integer) 0:
#line 1118 "prog_mode.m"
                {
#line 1118 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1118 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 3)));
#line 1118 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1121 "prog_mode.m"
#line 1121 "prog_mode.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults_8)) {
#line 1121 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "prog_mode.m"
                    case (MR_Integer) 0:
#line 1121 "prog_mode.m"
#line 1121 "prog_mode.m"
                      switch (MR_unmkbody(parse_tree__prog_mode__InstResults_8)) {
#line 1121 "prog_mode.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "prog_mode.m"
                        case (MR_Integer) 0:
#line 1135 "prog_mode.m"
                          {
#line 1136 "prog_mode.m"
                            MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32;

#line 1136 "prog_mode.m"
                            {
#line 1136 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32);
                            }
#line 1136 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 1136 "prog_mode.m"
                              {
#line 1136 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_Sub_32);
#line 1136 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1136 "prog_mode.m"
                              }
#line 1135 "prog_mode.m"
                          }
#line 1121 "prog_mode.m"
                          break;
#line 1121 "prog_mode.m"
                        case (MR_Integer) 1:
#line 1120 "prog_mode.m"
                          {
#line 1120 "prog_mode.m"
                            *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1120 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1120 "prog_mode.m"
                          }
#line 1121 "prog_mode.m"
                          break;
#line 1121 "prog_mode.m"
                      }
#line 1121 "prog_mode.m"
                      break;
#line 1121 "prog_mode.m"
                    case (MR_Integer) 1:
#line 1122 "prog_mode.m"
                      {
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVarsResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 3)));
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 0)));
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 1)));
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 2)));
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 4)));
#line 1122 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_8, (MR_Integer) 5)));
#line 1125 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeInfo_48_48;
#line 1125 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__InstVarsSet_16;

#line 1124 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_13)) == (MR_mktag((MR_Integer) 1)));
#line 1124 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1124 "prog_mode.m"
                          {
#line 1124 "prog_mode.m"
                            parse_tree__prog_mode__InstVarsSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_13, (MR_Integer) 0)));
#line 1911 "parse_tree.prog_mode.c"
                            parse_tree__prog_mode__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 1126 "prog_mode.m"
                            {
#line 1126 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__set__is_empty_1_p_0(parse_tree__prog_mode__TypeInfo_48_48, parse_tree__prog_mode__InstVarsSet_16);
                            }
#line 1124 "prog_mode.m"
                          }
#line 1129 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 1129 "prog_mode.m"
                          {
#line 1129 "prog_mode.m"
                            *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1129 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1129 "prog_mode.m"
                          }
#line 1129 "prog_mode.m"
                        else
#line 1130 "prog_mode.m"
                          {
#line 1130 "prog_mode.m"
                            MR_Box parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32;

#line 1130 "prog_mode.m"
                            {
#line 1130 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__BoundInsts_9, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32);
                            }
#line 1130 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 1130 "prog_mode.m"
                              {
#line 1130 "prog_mode.m"
                                *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv5_STATE_VARIABLE_Sub_32);
#line 1130 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1130 "prog_mode.m"
                              }
#line 1130 "prog_mode.m"
                          }
#line 1122 "prog_mode.m"
                      }
#line 1121 "prog_mode.m"
                      break;
#line 1121 "prog_mode.m"
                  }
#line 1118 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 1:
#line 1143 "prog_mode.m"
                {
#line 1143 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HOInstInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1141 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));

#line 1146 "prog_mode.m"
                  if ((parse_tree__prog_mode__HOInstInfo_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "prog_mode.m"
                    {
#line 1145 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1145 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1145 "prog_mode.m"
                    }
#line 1146 "prog_mode.m"
                  else
#line 1147 "prog_mode.m"
                    {
#line 1147 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__Modes_68;
#line 1147 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_71_71 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_77), (MR_Integer) 1);
#line 1147 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 0)));
#line 1147 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_65_65;
#line 1147 "prog_mode.m"
                      MR_Word parse_tree__prog_mode__V_66_66;

#line 1147 "prog_mode.m"
                      parse_tree__prog_mode__Modes_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 1)));
#line 1147 "prog_mode.m"
                      parse_tree__prog_mode__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 2)));
#line 1147 "prog_mode.m"
                      parse_tree__prog_mode__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_71_71, (MR_Integer) 3)));
#line 1148 "prog_mode.m"
                      {
#line 1148 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(parse_tree__prog_mode__Modes_68, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                      }
#line 1147 "prog_mode.m"
                    }
#line 1143 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 2:
#line 1151 "prog_mode.m"
                {
#line 1152 "prog_mode.m"
                  {
#line 1152 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_var_constraints_are_consistent_in_inst\'/3", (MR_String) "unconstrained inst_var");
                  }
#line 1151 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1151 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 3:
#line 1164 "prog_mode.m"
                {
#line 1164 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1164 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1164 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_33_33;
#line 1164 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34;
#line 1165 "prog_mode.m"
                  MR_Box parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34;

#line 1165 "prog_mode.m"
                  {
#line 1165 "prog_mode.m"
                    parse_tree__prog_mode__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
#line 1165 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 1) = ((MR_Box) (parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0_4));
#line 1165 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1165 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_33_33, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_30));
#line 1165 "prog_mode.m"
                  }
#line 1165 "prog_mode.m"
                  {
#line 1165 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = mercury__set__fold_4_p_3((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__V_33_33, parse_tree__prog_mode__InstVars_29, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34);
                  }
#line 1165 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1165 "prog_mode.m"
                    {
#line 1165 "prog_mode.m"
                      parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34 = ((MR_Word) parse_tree__prog_mode__conv7_STATE_VARIABLE_Sub_34_34);
#line 1165 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1165 "prog_mode.m"
                    }
#line 1164 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1167 "prog_mode.m"
                    {
#line 1167 "prog_mode.m"
                      /* direct tailcall eliminated */
#line 1167 "prog_mode.m"
                      {
#line 1167 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__Inst__tmp_copy_4 = parse_tree__prog_mode__SubInst_30;
#line 1167 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_34_34;

#line 1167 "prog_mode.m"
                        parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0__tmp_copy_31;
#line 1167 "prog_mode.m"
                        parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst__tmp_copy_4;
#line 1167 "prog_mode.m"
                      }
#line 1167 "prog_mode.m"
                      continue;
#line 1167 "prog_mode.m"
                    }
#line 1164 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 4:
#line 1154 "prog_mode.m"
                {
#line 1154 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1157 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__ArgInsts_27;
#line 1155 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_26_26;

#line 1155 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_25)) == (MR_mktag((MR_Integer) 0)));
#line 1155 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1155 "prog_mode.m"
                    {
#line 1155 "prog_mode.m"
                      parse_tree__prog_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_25, (MR_Integer) 0)));
#line 1155 "prog_mode.m"
                      parse_tree__prog_mode__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_25, (MR_Integer) 1)));
#line 1156 "prog_mode.m"
                      {
#line 1156 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_27, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_32);
                      }
#line 1155 "prog_mode.m"
                    }
#line 1155 "prog_mode.m"
                  else
#line 1157 "prog_mode.m"
                    {
#line 1157 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31;
#line 1157 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1157 "prog_mode.m"
                    }
#line 1154 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
              case (MR_Integer) 5:
#line 1161 "prog_mode.m"
                {
#line 1161 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__ArgInsts_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 2)));
#line 1161 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_4, (MR_Integer) 1)));
#line 1106 "prog_mode.m"
                  MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32;

#line 1106 "prog_mode.m"
                  {
#line 1106 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__ArgInsts_47, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_31)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32);
                  }
#line 1106 "prog_mode.m"
                  if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
                    {
#line 1106 "prog_mode.m"
                      *parse_tree__prog_mode__STATE_VARIABLE_Sub_32 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_32);
#line 1106 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
                    }
#line 1161 "prog_mode.m"
                }
#line 1113 "prog_mode.m"
                break;
#line 1113 "prog_mode.m"
            }
#line 1113 "prog_mode.m"
            break;
#line 1113 "prog_mode.m"
        }
#line 1113 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 1113 "prog_mode.m"
      }
#line 1113 "prog_mode.m"
      break;
#line 1113 "prog_mode.m"
    }
#line 1108 "prog_mode.m"
}

#line 1106 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0_1(
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1106 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1106 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1106 "prog_mode.m"
{
#line 1106 "prog_mode.m"
  {
#line 1106 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1106 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32;

#line 1106 "prog_mode.m"
    {
#line 1106 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32);
    }
#line 1106 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
      {
#line 1106 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_32));
#line 1106 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
      }
#line 1106 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
  }
#line 1106 "prog_mode.m"
}

#line 1102 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(
#line 1102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts_4,
#line 1102 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1102 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1102 "prog_mode.m"
{
#line 1105 "prog_mode.m"
  {
#line 1105 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1106 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1106 "prog_mode.m"
    {
#line 1106 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1106 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1106 "prog_mode.m"
      {
#line 1106 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1106 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1106 "prog_mode.m"
      }
#line 1105 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1105 "prog_mode.m"
  }
#line 1102 "prog_mode.m"
}

#line 1089 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(
#line 1089 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode_4,
#line 1089 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10,
#line 1089 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_11)
#line 1089 "prog_mode.m"
{
#line 1094 "prog_mode.m"
  {
#line 1094 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1094 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_4)) == (MR_mktag((MR_Integer) 0))))
#line 1094 "prog_mode.m"
      {
#line 1094 "prog_mode.m"
        MR_Word parse_tree__prog_mode__InitialInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));
#line 1094 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1094 "prog_mode.m"
        MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13;

#line 1095 "prog_mode.m"
        {
#line 1095 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_6, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13);
        }
#line 1094 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 1096 "prog_mode.m"
          {
#line 1096 "prog_mode.m"
            parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_7, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
          }
#line 1094 "prog_mode.m"
      }
#line 1094 "prog_mode.m"
    else
#line 1098 "prog_mode.m"
      {
#line 1098 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 1)));
#line 1098 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_4, (MR_Integer) 0)));

#line 1099 "prog_mode.m"
        {
#line 1099 "prog_mode.m"
          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_10, parse_tree__prog_mode__STATE_VARIABLE_Sub_11);
        }
#line 1098 "prog_mode.m"
      }
#line 1094 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1094 "prog_mode.m"
  }
#line 1089 "prog_mode.m"
}

#line 1078 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(
#line 1078 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndMode_4,
#line 1078 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9,
#line 1078 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_10)
#line 1078 "prog_mode.m"
{
#line 1083 "prog_mode.m"
  {
#line 1083 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 1083 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 1085 "prog_mode.m"
      {
#line 1085 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 1)));
#line 1085 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_4, (MR_Integer) 0)));

#line 1094 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_8)) == (MR_mktag((MR_Integer) 0))))
#line 1094 "prog_mode.m"
          {
#line 1094 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InitialInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));
#line 1094 "prog_mode.m"
            MR_Word parse_tree__prog_mode__FinalInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1094 "prog_mode.m"
            MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21;

#line 1095 "prog_mode.m"
            {
#line 1095 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__InitialInst_16, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, &parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21);
            }
#line 1094 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 1096 "prog_mode.m"
              {
#line 1096 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_inst_3_p_0(parse_tree__prog_mode__FinalInst_17, parse_tree__prog_mode__STATE_VARIABLE_Sub_13_21, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
              }
#line 1094 "prog_mode.m"
          }
#line 1094 "prog_mode.m"
        else
#line 1098 "prog_mode.m"
          {
#line 1098 "prog_mode.m"
            MR_Word parse_tree__prog_mode__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 1)));
#line 1098 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, (MR_Integer) 0)));

#line 1099 "prog_mode.m"
            {
#line 1099 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_insts_3_p_0(parse_tree__prog_mode__ArgInsts_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9, parse_tree__prog_mode__STATE_VARIABLE_Sub_10);
            }
#line 1098 "prog_mode.m"
          }
#line 1085 "prog_mode.m"
      }
#line 1083 "prog_mode.m"
    else
#line 1083 "prog_mode.m"
      {
#line 1083 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_10 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_9;
#line 1083 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1083 "prog_mode.m"
      }
#line 1083 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1083 "prog_mode.m"
  }
#line 1078 "prog_mode.m"
}

#line 1072 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0_1(
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1072 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1072 "prog_mode.m"
{
#line 1072 "prog_mode.m"
  {
#line 1072 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1072 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1072 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 1072 "prog_mode.m"
    {
#line 1072 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 1072 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
      {
#line 1072 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 1072 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1072 "prog_mode.m"
      }
#line 1072 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1072 "prog_mode.m"
  }
#line 1072 "prog_mode.m"
}

#line 1068 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_consistent_in_modes_3_p_0(
#line 1068 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_4,
#line 1068 "prog_mode.m"
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6,
#line 1068 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_7)
#line 1068 "prog_mode.m"
{
#line 1071 "prog_mode.m"
  {
#line 1071 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1072 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7;

#line 1072 "prog_mode.m"
    {
#line 1072 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__Modes_4, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_6)), &parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
    }
#line 1072 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
      {
#line 1072 "prog_mode.m"
        *parse_tree__prog_mode__STATE_VARIABLE_Sub_7 = ((MR_Word) parse_tree__prog_mode__conv1_STATE_VARIABLE_Sub_7);
#line 1072 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1072 "prog_mode.m"
      }
#line 1071 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1071 "prog_mode.m"
  }
#line 1068 "prog_mode.m"
}

#line 1057 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
#line 1057 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1057 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1057 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1057 "prog_mode.m"
{
#line 1057 "prog_mode.m"
  {
#line 1057 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1057 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1057 "prog_mode.m"
    {
#line 1057 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1057 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1057 "prog_mode.m"
  }
#line 1057 "prog_mode.m"
}

#line 1052 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
#line 1052 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1052 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Name0_5,
#line 1052 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Name_6)
#line 1052 "prog_mode.m"
{
#line 1059 "prog_mode.m"
  {
#line 1059 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
#line 1059 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_7;
#line 1059 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Args0_8;

#line 1056 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1056 "prog_mode.m"
      {
#line 1056 "prog_mode.m"
        parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
#line 1056 "prog_mode.m"
        parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
#line 1057 "prog_mode.m"
        {
#line 1057 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 1057 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Args_9;
#line 1057 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_10_10;

#line 1057 "prog_mode.m"
          {
#line 1057 "prog_mode.m"
            parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1057 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
#line 1057 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1057 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1057 "prog_mode.m"
          }
#line 2588 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1057 "prog_mode.m"
          {
#line 1057 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
          }
#line 1058 "prog_mode.m"
          {
#line 1058 "prog_mode.m"
            MR_Word base;
#line 1058 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_mode.m"
            *parse_tree__prog_mode__Name_6 = base;
#line 1058 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 1058 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
#line 1058 "prog_mode.m"
          }
#line 1057 "prog_mode.m"
        }
#line 1056 "prog_mode.m"
      }
#line 1056 "prog_mode.m"
    else
#line 1060 "prog_mode.m"
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
#line 1059 "prog_mode.m"
  }
#line 1052 "prog_mode.m"
}

#line 1049 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
#line 1049 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1049 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1049 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1049 "prog_mode.m"
{
#line 1049 "prog_mode.m"
  {
#line 1049 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1049 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 1049 "prog_mode.m"
    {
#line 1049 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 1049 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 1049 "prog_mode.m"
  }
#line 1049 "prog_mode.m"
}

#line 1044 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
#line 1044 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1044 "prog_mode.m"
  MR_Word parse_tree__prog_mode__PII0_5,
#line 1044 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__PII_6)
#line 1044 "prog_mode.m"
{
#line 1047 "prog_mode.m"
  {
#line 1047 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Modes_11;
#line 1047 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 1049 "prog_mode.m"
    {
#line 1049 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[8]));
#line 1049 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
#line 1049 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1049 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1049 "prog_mode.m"
    }
#line 2696 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1049 "prog_mode.m"
    {
#line 1049 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
#line 1050 "prog_mode.m"
    {
#line 1050 "prog_mode.m"
      MR_Word base;
#line 1050 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "prog_mode.m"
      *parse_tree__prog_mode__PII_6 = base;
#line 1050 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
#line 1050 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
#line 1050 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
#line 1050 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
#line 1050 "prog_mode.m"
    }
#line 1047 "prog_mode.m"
  }
#line 1044 "prog_mode.m"
}

#line 1040 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
#line 1040 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1040 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1040 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1040 "prog_mode.m"
{
#line 1040 "prog_mode.m"
  {
#line 1040 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1040 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1040 "prog_mode.m"
    {
#line 1040 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1040 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1040 "prog_mode.m"
  }
#line 1040 "prog_mode.m"
}

#line 1035 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
#line 1035 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 1035 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 1035 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6)
#line 1035 "prog_mode.m"
{
#line 1038 "prog_mode.m"
  {
#line 1038 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1038 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 1038 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
#line 1038 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
#line 1038 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_9;
#line 1038 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_10_10;

#line 1040 "prog_mode.m"
    {
#line 1040 "prog_mode.m"
      parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1040 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1));
#line 1040 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1040 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1040 "prog_mode.m"
    }
#line 2796 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1040 "prog_mode.m"
    {
#line 1040 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
#line 1042 "prog_mode.m"
    {
#line 1042 "prog_mode.m"
      MR_Word base;
#line 1042 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_6 = base;
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 1042 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 1042 "prog_mode.m"
    }
#line 1038 "prog_mode.m"
  }
#line 1035 "prog_mode.m"
}

#line 989 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 989 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 989 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 989 "prog_mode.m"
{
#line 989 "prog_mode.m"
  {
#line 989 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 989 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

#line 989 "prog_mode.m"
    {
#line 989 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
#line 989 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
#line 989 "prog_mode.m"
  }
#line 989 "prog_mode.m"
}

#line 998 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
#line 998 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 998 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 998 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 998 "prog_mode.m"
{
#line 998 "prog_mode.m"
  {
#line 998 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 998 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv1_BoundInst_6;

#line 998 "prog_mode.m"
    {
#line 998 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_BoundInst_6);
    }
#line 998 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_BoundInst_6));
#line 998 "prog_mode.m"
  }
#line 998 "prog_mode.m"
}

#line 1030 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
#line 1030 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1030 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1030 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 1030 "prog_mode.m"
{
#line 1030 "prog_mode.m"
  {
#line 1030 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1030 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 1030 "prog_mode.m"
    {
#line 1030 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 1030 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 1030 "prog_mode.m"
  }
#line 1030 "prog_mode.m"
}

#line 951 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
#line 951 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstConstraints_4,
#line 951 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 951 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 951 "prog_mode.m"
{
#line 961 "prog_mode.m"
  {
#line 961 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 961 "prog_mode.m"
#line 961 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 961 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 961 "prog_mode.m"
      case (MR_Integer) 0:
#line 961 "prog_mode.m"
#line 961 "prog_mode.m"
        switch (MR_unmkbody(parse_tree__prog_mode__Inst0_5)) {
#line 961 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 961 "prog_mode.m"
          case (MR_Integer) 0:
#line 961 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 1:
#line 961 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
        }
#line 961 "prog_mode.m"
        break;
#line 961 "prog_mode.m"
      case (MR_Integer) 1:
#line 962 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 961 "prog_mode.m"
        break;
#line 961 "prog_mode.m"
      case (MR_Integer) 2:
#line 961 "prog_mode.m"
        {
#line 961 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 961 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

#line 961 "prog_mode.m"
          if ((parse_tree__prog_mode__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 961 "prog_mode.m"
          else
#line 969 "prog_mode.m"
            {
#line 969 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_46_46;
#line 969 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_74_74), (MR_Integer) 1);
#line 969 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PredInstInfo_55;

#line 970 "prog_mode.m"
              {
#line 970 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_54, &parse_tree__prog_mode__PredInstInfo_55);
              }
#line 972 "prog_mode.m"
              parse_tree__prog_mode__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
#line 972 "prog_mode.m"
              {
#line 972 "prog_mode.m"
                MR_Word base;
#line 972 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 972 "prog_mode.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__V_75_75));
#line 972 "prog_mode.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_46_46));
#line 972 "prog_mode.m"
              }
#line 969 "prog_mode.m"
            }
#line 961 "prog_mode.m"
        }
#line 961 "prog_mode.m"
        break;
#line 961 "prog_mode.m"
      case (MR_Integer) 3:
#line 961 "prog_mode.m"
#line 961 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 961 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 961 "prog_mode.m"
          case (MR_Integer) 0:
#line 974 "prog_mode.m"
            {
#line 974 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 974 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
#line 974 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 979 "prog_mode.m"
#line 979 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
#line 979 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 979 "prog_mode.m"
                case (MR_Integer) 0:
#line 979 "prog_mode.m"
#line 979 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
#line 979 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 979 "prog_mode.m"
                    case (MR_Integer) 0:
#line 997 "prog_mode.m"
                      {
#line 997 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_66_66;
#line 997 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_41_41;
#line 997 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_56;

#line 998 "prog_mode.m"
                        {
#line 998 "prog_mode.m"
                          parse_tree__prog_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 998 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 998 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
#line 998 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 998 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 998 "prog_mode.m"
                        }
#line 3068 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 998 "prog_mode.m"
                        {
#line 998 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__V_41_41, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_56);
                        }
#line 1003 "prog_mode.m"
                        {
#line 1003 "prog_mode.m"
                          MR_Word base;
#line 1003 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 1003 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1003 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
#line 1003 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_56));
#line 1003 "prog_mode.m"
                        }
#line 997 "prog_mode.m"
                      }
#line 979 "prog_mode.m"
                      break;
#line 979 "prog_mode.m"
                    case (MR_Integer) 1:
#line 976 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 979 "prog_mode.m"
                      break;
#line 979 "prog_mode.m"
                  }
#line 979 "prog_mode.m"
                  break;
#line 979 "prog_mode.m"
                case (MR_Integer) 1:
#line 980 "prog_mode.m"
                  {
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
#line 980 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
#line 983 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_59_59;
#line 983 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_60_60;
#line 983 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
#line 983 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_21;

#line 982 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
#line 982 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 982 "prog_mode.m"
                      {
#line 982 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
#line 3140 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 984 "prog_mode.m"
                        {
#line 984 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_59_59, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                        }
#line 3147 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 985 "prog_mode.m"
                        {
#line 985 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_60_60, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__InstConstraints_4);
                        }
#line 982 "prog_mode.m"
                      }
#line 988 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 987 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 988 "prog_mode.m"
                    else
#line 990 "prog_mode.m"
                      {
#line 990 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
#line 990 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_22;
#line 990 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_43_43;

#line 989 "prog_mode.m"
                        {
#line 989 "prog_mode.m"
                          parse_tree__prog_mode__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
#line 989 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3));
#line 989 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_43_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 989 "prog_mode.m"
                        }
#line 3185 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 989 "prog_mode.m"
                        {
#line 989 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__V_43_43, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                        }
#line 994 "prog_mode.m"
                        {
#line 994 "prog_mode.m"
                          MR_Word base;
#line 994 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 994 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 994 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 994 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
#line 994 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
#line 994 "prog_mode.m"
                        }
#line 990 "prog_mode.m"
                      }
#line 980 "prog_mode.m"
                  }
#line 979 "prog_mode.m"
                  break;
#line 979 "prog_mode.m"
              }
#line 974 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 1:
#line 961 "prog_mode.m"
            {
#line 961 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 961 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

#line 961 "prog_mode.m"
              if ((parse_tree__prog_mode__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 961 "prog_mode.m"
              else
#line 964 "prog_mode.m"
                {
#line 964 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__V_76_76), (MR_Integer) 1);
#line 964 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PredInstInfo_11;
#line 964 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_48_48;

#line 965 "prog_mode.m"
                  {
#line 965 "prog_mode.m"
                    parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                  }
#line 967 "prog_mode.m"
                  parse_tree__prog_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
#line 967 "prog_mode.m"
                  {
#line 967 "prog_mode.m"
                    MR_Word base;
#line 967 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 967 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 967 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 967 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_77_77));
#line 967 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__V_48_48));
#line 967 "prog_mode.m"
                  }
#line 964 "prog_mode.m"
                }
#line 961 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 2:
#line 1017 "prog_mode.m"
            {
#line 1017 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1017 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;
#line 1017 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_58;
#line 1020 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstPrime_31;
#line 1018 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv3_SubInstPrime_31;

#line 1018 "prog_mode.m"
              {
#line 1018 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_30)), &parse_tree__prog_mode__conv3_SubInstPrime_31);
              }
#line 1018 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1018 "prog_mode.m"
                {
#line 1018 "prog_mode.m"
                  parse_tree__prog_mode__SubInstPrime_31 = ((MR_Word) parse_tree__prog_mode__conv3_SubInstPrime_31);
#line 1018 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1018 "prog_mode.m"
                }
#line 1020 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1019 "prog_mode.m"
                parse_tree__prog_mode__SubInst_58 = parse_tree__prog_mode__SubInstPrime_31;
#line 1020 "prog_mode.m"
              else
#line 1021 "prog_mode.m"
                {
#line 1021 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_58 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
#line 1021 "prog_mode.m"
                }
#line 1023 "prog_mode.m"
              {
#line 1023 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_30)));
              }
#line 1023 "prog_mode.m"
              {
#line 1023 "prog_mode.m"
                MR_Word base;
#line 1023 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1023 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1023 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_40_40));
#line 1023 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_58));
#line 1023 "prog_mode.m"
              }
#line 1017 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 3:
#line 1006 "prog_mode.m"
            {
#line 1006 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1006 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 1006 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst1_25;
#line 1006 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_28;
#line 1006 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_29;
#line 1011 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubVars_26;
#line 1011 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubSubInst_27;

#line 1007 "prog_mode.m"
              {
#line 1007 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_24, &parse_tree__prog_mode__SubInst1_25);
              }
#line 1008 "prog_mode.m"
              parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1008 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 1008 "prog_mode.m"
                {
#line 1008 "prog_mode.m"
                  parse_tree__prog_mode__SubVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 1)));
#line 1008 "prog_mode.m"
                  parse_tree__prog_mode__SubSubInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 2)));
#line 1009 "prog_mode.m"
                  {
#line 1009 "prog_mode.m"
                    mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_23, parse_tree__prog_mode__SubVars_26, &parse_tree__prog_mode__Vars_28);
                  }
#line 1010 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubSubInst_27;
#line 1008 "prog_mode.m"
                }
#line 1008 "prog_mode.m"
              else
#line 1012 "prog_mode.m"
                {
#line 1012 "prog_mode.m"
                  parse_tree__prog_mode__Vars_28 = parse_tree__prog_mode__Vars0_23;
#line 1013 "prog_mode.m"
                  parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubInst1_25;
#line 1012 "prog_mode.m"
                }
#line 1015 "prog_mode.m"
              {
#line 1015 "prog_mode.m"
                MR_Word base;
#line 1015 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1015 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1015 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_28));
#line 1015 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
#line 1015 "prog_mode.m"
              }
#line 1006 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 4:
#line 1025 "prog_mode.m"
            {
#line 1025 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1025 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_33;

#line 1026 "prog_mode.m"
              {
#line 1026 "prog_mode.m"
                parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_32, &parse_tree__prog_mode__Name_33);
              }
#line 1027 "prog_mode.m"
              {
#line 1027 "prog_mode.m"
                MR_Word base;
#line 1027 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1027 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1027 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_33));
#line 1027 "prog_mode.m"
              }
#line 1025 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
          case (MR_Integer) 5:
#line 1029 "prog_mode.m"
            {
#line 1029 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_73_73;
#line 1029 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 1029 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 1029 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts_36;
#line 1029 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_37_37;

#line 1030 "prog_mode.m"
              {
#line 1030 "prog_mode.m"
                parse_tree__prog_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 1030 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
#line 1030 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_37_37, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 1030 "prog_mode.m"
              }
#line 3476 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1030 "prog_mode.m"
              {
#line 1030 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__V_37_37, parse_tree__prog_mode__SubInsts0_35, &parse_tree__prog_mode__SubInsts_36);
              }
#line 1032 "prog_mode.m"
              {
#line 1032 "prog_mode.m"
                MR_Word base;
#line 1032 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_34));
#line 1032 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_36));
#line 1032 "prog_mode.m"
              }
#line 1029 "prog_mode.m"
            }
#line 961 "prog_mode.m"
            break;
#line 961 "prog_mode.m"
        }
#line 961 "prog_mode.m"
        break;
#line 961 "prog_mode.m"
    }
#line 961 "prog_mode.m"
  }
#line 951 "prog_mode.m"
}

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 805 "prog_mode.m"
    {
#line 805 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 805 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 805 "prog_mode.m"
  }
#line 805 "prog_mode.m"
}

#line 919 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(
#line 919 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HOInstInfo0_3,
#line 919 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HOInstInfo_4)
#line 919 "prog_mode.m"
{
#line 924 "prog_mode.m"
  {
#line 924 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 924 "prog_mode.m"
    if ((parse_tree__prog_mode__HOInstInfo0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "prog_mode.m"
      *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "prog_mode.m"
    else
#line 927 "prog_mode.m"
      {
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred0_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_3), (MR_Integer) 1);
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PorF_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 0)));
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 1)));
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 2)));
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_5, (MR_Integer) 3)));
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_10;
#line 927 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Pred_11;

#line 805 "prog_mode.m"
        {
#line 805 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_17, parse_tree__prog_mode__TypeCtorInfo_8_17, (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_10);
        }
#line 930 "prog_mode.m"
        {
#line 930 "prog_mode.m"
          parse_tree__prog_mode__Pred_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 930 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_6));
#line 930 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_10));
#line 930 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_8));
#line 930 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_11, 3) = ((MR_Box) (parse_tree__prog_mode__Det_9));
#line 930 "prog_mode.m"
        }
#line 931 "prog_mode.m"
        *parse_tree__prog_mode__HOInstInfo_4 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_11);
#line 927 "prog_mode.m"
      }
#line 924 "prog_mode.m"
  }
#line 919 "prog_mode.m"
}

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 823 "prog_mode.m"
{
#line 823 "prog_mode.m"
  {
#line 823 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 823 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 823 "prog_mode.m"
    {
#line 823 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 823 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 823 "prog_mode.m"
  }
#line 823 "prog_mode.m"
}

#line 875 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
#line 875 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_3,
#line 875 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_4)
#line 875 "prog_mode.m"
{
#line 880 "prog_mode.m"
  {
#line 880 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 880 "prog_mode.m"
#line 880 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
#line 880 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 880 "prog_mode.m"
      case (MR_Integer) 0:
#line 880 "prog_mode.m"
        {
#line 880 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_8_43;
#line 880 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 880 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 880 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SymName_7;
#line 880 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts_8;

#line 881 "prog_mode.m"
          {
#line 881 "prog_mode.m"
            parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_5, &parse_tree__prog_mode__SymName_7);
          }
#line 3680 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_8_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 823 "prog_mode.m"
          {
#line 823 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_43, parse_tree__prog_mode__TypeCtorInfo_8_43, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
          }
#line 883 "prog_mode.m"
          {
#line 883 "prog_mode.m"
            MR_Word base;
#line 883 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 883 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
#line 883 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 883 "prog_mode.m"
          }
#line 880 "prog_mode.m"
        }
#line 880 "prog_mode.m"
        break;
#line 880 "prog_mode.m"
      case (MR_Integer) 1:
#line 885 "prog_mode.m"
        {
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_13;
#line 885 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_14;

#line 886 "prog_mode.m"
          {
#line 886 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_11, &parse_tree__prog_mode__InstA_13);
          }
#line 887 "prog_mode.m"
          {
#line 887 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_12, &parse_tree__prog_mode__InstB_14);
          }
#line 888 "prog_mode.m"
          {
#line 888 "prog_mode.m"
            MR_Word base;
#line 888 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 888 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 888 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_9));
#line 888 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Real_10));
#line 888 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstA_13));
#line 888 "prog_mode.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_mode__InstB_14));
#line 888 "prog_mode.m"
          }
#line 885 "prog_mode.m"
        }
#line 880 "prog_mode.m"
        break;
#line 880 "prog_mode.m"
      case (MR_Integer) 2:
#line 890 "prog_mode.m"
        {
#line 890 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 890 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 890 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstA_23;
#line 890 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstB_24;

#line 891 "prog_mode.m"
          {
#line 891 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
          }
#line 892 "prog_mode.m"
          {
#line 892 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
          }
#line 893 "prog_mode.m"
          {
#line 893 "prog_mode.m"
            MR_Word base;
#line 893 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 893 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
#line 893 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
#line 893 "prog_mode.m"
          }
#line 890 "prog_mode.m"
        }
#line 880 "prog_mode.m"
        break;
#line 880 "prog_mode.m"
      case (MR_Integer) 3:
#line 880 "prog_mode.m"
#line 880 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
#line 880 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 880 "prog_mode.m"
          case (MR_Integer) 0:
#line 895 "prog_mode.m"
            {
#line 895 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 895 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 895 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_17;
#line 895 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 895 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 896 "prog_mode.m"
              {
#line 896 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
              }
#line 897 "prog_mode.m"
              {
#line 897 "prog_mode.m"
                MR_Word base;
#line 897 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 897 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 897 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 897 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_16 | ((((parse_tree__prog_mode__Live_25 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
#line 897 "prog_mode.m"
              }
#line 895 "prog_mode.m"
            }
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
          case (MR_Integer) 1:
#line 899 "prog_mode.m"
            {
#line 899 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Live_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 899 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 899 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 899 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 899 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31;

#line 900 "prog_mode.m"
              {
#line 900 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
              }
#line 901 "prog_mode.m"
              {
#line 901 "prog_mode.m"
                MR_Word base;
#line 901 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 901 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 901 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 901 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
#line 901 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_30 | ((((parse_tree__prog_mode__Live_27 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
#line 901 "prog_mode.m"
              }
#line 899 "prog_mode.m"
            }
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
          case (MR_Integer) 2:
#line 903 "prog_mode.m"
            {
#line 903 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 903 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_33;

#line 904 "prog_mode.m"
              {
#line 904 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
              }
#line 905 "prog_mode.m"
              {
#line 905 "prog_mode.m"
                MR_Word base;
#line 905 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 905 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 905 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
#line 905 "prog_mode.m"
              }
#line 903 "prog_mode.m"
            }
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
          case (MR_Integer) 3:
#line 907 "prog_mode.m"
            {
#line 907 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 907 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_35;

#line 908 "prog_mode.m"
              {
#line 908 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
              }
#line 909 "prog_mode.m"
              {
#line 909 "prog_mode.m"
                MR_Word base;
#line 909 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 909 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 909 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
#line 909 "prog_mode.m"
              }
#line 907 "prog_mode.m"
            }
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
          case (MR_Integer) 4:
#line 912 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
          case (MR_Integer) 5:
#line 914 "prog_mode.m"
            {
#line 914 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 914 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 914 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_37;

#line 915 "prog_mode.m"
              {
#line 915 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
              }
#line 916 "prog_mode.m"
              {
#line 916 "prog_mode.m"
                MR_Word base;
#line 916 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 916 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 916 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 916 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
#line 916 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
#line 916 "prog_mode.m"
              }
#line 914 "prog_mode.m"
            }
#line 880 "prog_mode.m"
            break;
#line 880 "prog_mode.m"
        }
#line 880 "prog_mode.m"
        break;
#line 880 "prog_mode.m"
    }
#line 880 "prog_mode.m"
  }
#line 875 "prog_mode.m"
}

#line 872 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 872 "prog_mode.m"
    {
#line 872 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 872 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 872 "prog_mode.m"
  }
#line 872 "prog_mode.m"
}

#line 866 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
#line 866 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_3,
#line 866 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_4)
#line 866 "prog_mode.m"
{
#line 869 "prog_mode.m"
  {
#line 869 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7;
#line 869 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Insts_8;

#line 871 "prog_mode.m"
    {
#line 871 "prog_mode.m"
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
#line 4058 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 872 "prog_mode.m"
    {
#line 872 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
#line 873 "prog_mode.m"
    {
#line 873 "prog_mode.m"
      MR_Word base;
#line 873 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 873 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_4 = base;
#line 873 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 873 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
#line 873 "prog_mode.m"
    }
#line 869 "prog_mode.m"
  }
#line 866 "prog_mode.m"
}

#line 864 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0_1(
#line 864 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 864 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 864 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 864 "prog_mode.m"
{
#line 864 "prog_mode.m"
  {
#line 864 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 864 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_BoundInst_4;

#line 864 "prog_mode.m"
    {
#line 864 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_BoundInst_4);
    }
#line 864 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_BoundInst_4));
#line 864 "prog_mode.m"
  }
#line 864 "prog_mode.m"
}

#line 860 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(
#line 860 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Insts0_3,
#line 860 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Insts_4)
#line 860 "prog_mode.m"
{
#line 863 "prog_mode.m"
  {
#line 863 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 863 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 864 "prog_mode.m"
    {
#line 864 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
    }
#line 863 "prog_mode.m"
  }
#line 860 "prog_mode.m"
}

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 823 "prog_mode.m"
{
#line 823 "prog_mode.m"
  {
#line 823 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 823 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 823 "prog_mode.m"
    {
#line 823 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 823 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 823 "prog_mode.m"
  }
#line 823 "prog_mode.m"
}

#line 807 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
#line 807 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_3,
#line 807 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_4)
#line 807 "prog_mode.m"
{
#line 811 "prog_mode.m"
  {
#line 811 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 811 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
#line 811 "prog_mode.m"
      {
#line 811 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 811 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 811 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Initial_7;
#line 811 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Final_8;

#line 812 "prog_mode.m"
        {
#line 812 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
        }
#line 813 "prog_mode.m"
        {
#line 813 "prog_mode.m"
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
        }
#line 814 "prog_mode.m"
        {
#line 814 "prog_mode.m"
          MR_Word base;
#line 814 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 814 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
#line 814 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
#line 814 "prog_mode.m"
        }
#line 811 "prog_mode.m"
      }
#line 811 "prog_mode.m"
    else
#line 816 "prog_mode.m"
      {
#line 816 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 816 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
#line 816 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
#line 816 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_11;
#line 816 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_12;

#line 823 "prog_mode.m"
        {
#line 823 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
        }
#line 818 "prog_mode.m"
        {
#line 818 "prog_mode.m"
          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_9, &parse_tree__prog_mode__SymName_12);
        }
#line 819 "prog_mode.m"
        {
#line 819 "prog_mode.m"
          MR_Word base;
#line 819 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_mode.m"
          *parse_tree__prog_mode__Mode_4 = base;
#line 819 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
#line 819 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
#line 819 "prog_mode.m"
        }
#line 816 "prog_mode.m"
      }
#line 811 "prog_mode.m"
  }
#line 807 "prog_mode.m"
}

#line 782 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
#line 782 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 782 "prog_mode.m"
  MR_Word parse_tree__prog_mode__ConsId_6,
#line 782 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
#line 782 "prog_mode.m"
{
#line 785 "prog_mode.m"
  while (MR_TRUE)
#line 785 "prog_mode.m"
    {
#line 785 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 785 "prog_mode.m"
      {
#line 785 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_4;
#line 785 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_5;
#line 791 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ArgInsts0_9;
#line 787 "prog_mode.m"
        MR_Word parse_tree__prog_mode__FunctorConsId_8;

#line 785 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 785 "prog_mode.m"
          {
#line 785 "prog_mode.m"
            parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "prog_mode.m"
            parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 787 "prog_mode.m"
            parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
#line 787 "prog_mode.m"
            parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
#line 788 "prog_mode.m"
            {
#line 788 "prog_mode.m"
              parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
            }
#line 791 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 790 "prog_mode.m"
              {
#line 790 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
#line 790 "prog_mode.m"
                parse_tree__prog_mode__succeeded = MR_TRUE;
#line 790 "prog_mode.m"
              }
#line 791 "prog_mode.m"
            else
#line 792 "prog_mode.m"
              {
#line 792 "prog_mode.m"
                /* direct tailcall eliminated */
#line 792 "prog_mode.m"
                {
#line 792 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__BoundInsts_5;

#line 792 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 792 "prog_mode.m"
                }
#line 792 "prog_mode.m"
                continue;
#line 792 "prog_mode.m"
              }
#line 785 "prog_mode.m"
          }
#line 785 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 785 "prog_mode.m"
      }
#line 785 "prog_mode.m"
      break;
#line 785 "prog_mode.m"
    }
#line 782 "prog_mode.m"
}

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 699 "prog_mode.m"
{
#line 699 "prog_mode.m"
  {
#line 699 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 699 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 699 "prog_mode.m"
  }
#line 699 "prog_mode.m"
}

#line 700 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
#line 700 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 700 "prog_mode.m"
{
#line 700 "prog_mode.m"
  {
#line 700 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 700 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
#line 700 "prog_mode.m"
    {
#line 700 "prog_mode.m"
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
#line 700 "prog_mode.m"
  }
#line 700 "prog_mode.m"
}

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 699 "prog_mode.m"
{
#line 699 "prog_mode.m"
  {
#line 699 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 701 "prog_mode.m"
    {
#line 701 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
#line 701 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 701 "prog_mode.m"
      {
#line 701 "prog_mode.m"
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
#line 699 "prog_mode.m"
  }
#line 699 "prog_mode.m"
}

#line 699 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
#line 699 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 699 "prog_mode.m"
{
#line 699 "prog_mode.m"
  {
#line 699 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 699 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 699 "prog_mode.m"
      {
#line 699 "prog_mode.m"
        {
#line 699 "prog_mode.m"
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 699 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

#line 700 "prog_mode.m"
          {
#line 700 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 699 "prog_mode.m"
        }
#line 699 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 699 "prog_mode.m"
      }
#line 699 "prog_mode.m"
    else
#line 699 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 699 "prog_mode.m"
  }
#line 699 "prog_mode.m"
}

#line 695 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
#line 695 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName_2)
#line 695 "prog_mode.m"
{
#line 695 "prog_mode.m"
  {
#line 695 "prog_mode.m"
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

#line 695 "prog_mode.m"
    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
#line 699 "prog_mode.m"
    while (MR_TRUE)
#line 699 "prog_mode.m"
      {
#line 699 "prog_mode.m"
        /* tailcall optimized into a loop */
#line 699 "prog_mode.m"
#line 699 "prog_mode.m"
        switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) {
#line 699 "prog_mode.m"
          default:
#line 699 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 699 "prog_mode.m"
            break;
#line 699 "prog_mode.m"
          case (MR_Integer) 0:
#line 699 "prog_mode.m"
            {
#line 699 "prog_mode.m"
              {
#line 699 "prog_mode.m"
                parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
              }
#line 699 "prog_mode.m"
            }
#line 699 "prog_mode.m"
            break;
#line 699 "prog_mode.m"
          case (MR_Integer) 1:
#line 703 "prog_mode.m"
            {
#line 703 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 703 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
#line 703 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
#line 703 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 704 "prog_mode.m"
              {
#line 704 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_8);
              }
#line 705 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 705 "prog_mode.m"
                {
#line 705 "prog_mode.m"
                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_9);
                }
#line 703 "prog_mode.m"
            }
#line 699 "prog_mode.m"
            break;
#line 699 "prog_mode.m"
          case (MR_Integer) 2:
#line 708 "prog_mode.m"
            {
#line 708 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstA_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
#line 708 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInstB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 709 "prog_mode.m"
              {
#line 709 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_18);
              }
#line 710 "prog_mode.m"
              if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
#line 710 "prog_mode.m"
                {
#line 710 "prog_mode.m"
                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_19);
                }
#line 708 "prog_mode.m"
            }
#line 699 "prog_mode.m"
            break;
#line 699 "prog_mode.m"
          case (MR_Integer) 3:
#line 699 "prog_mode.m"
#line 699 "prog_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) {
#line 699 "prog_mode.m"
              default:
#line 699 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
              case (MR_Integer) 0:
#line 713 "prog_mode.m"
                {
#line 713 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 713 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 713 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 713 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 714 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 714 "prog_mode.m"
                  {
#line 714 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_10;

#line 714 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 714 "prog_mode.m"
                  }
#line 714 "prog_mode.m"
                  continue;
#line 713 "prog_mode.m"
                }
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
              case (MR_Integer) 1:
#line 716 "prog_mode.m"
                {
#line 716 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
#line 716 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 716 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 716 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 717 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 717 "prog_mode.m"
                  {
#line 717 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_20;

#line 717 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 717 "prog_mode.m"
                  }
#line 717 "prog_mode.m"
                  continue;
#line 716 "prog_mode.m"
                }
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
              case (MR_Integer) 2:
#line 719 "prog_mode.m"
                {
#line 719 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 720 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 720 "prog_mode.m"
                  {
#line 720 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_21;

#line 720 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 720 "prog_mode.m"
                  }
#line 720 "prog_mode.m"
                  continue;
#line 719 "prog_mode.m"
                }
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
              case (MR_Integer) 3:
#line 722 "prog_mode.m"
                {
#line 722 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 723 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 723 "prog_mode.m"
                  {
#line 723 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_22;

#line 723 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 723 "prog_mode.m"
                  }
#line 723 "prog_mode.m"
                  continue;
#line 722 "prog_mode.m"
                }
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
              case (MR_Integer) 5:
#line 725 "prog_mode.m"
                {
#line 725 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInstName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
#line 725 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

#line 726 "prog_mode.m"
                  /* direct tailcall eliminated */
#line 726 "prog_mode.m"
                  {
#line 726 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstName__tmp_copy_2 = parse_tree__prog_mode__SubInstName_23;

#line 726 "prog_mode.m"
                    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName__tmp_copy_2;
#line 726 "prog_mode.m"
                  }
#line 726 "prog_mode.m"
                  continue;
#line 725 "prog_mode.m"
                }
#line 699 "prog_mode.m"
                break;
#line 699 "prog_mode.m"
            }
#line 699 "prog_mode.m"
            break;
#line 699 "prog_mode.m"
        }
#line 699 "prog_mode.m"
        return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 699 "prog_mode.m"
        break;
#line 699 "prog_mode.m"
      }
#line 695 "prog_mode.m"
  }
#line 695 "prog_mode.m"
}

#line 617 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
#line 617 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 617 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 617 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 617 "prog_mode.m"
{
#line 617 "prog_mode.m"
  {
#line 617 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 617 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 617 "prog_mode.m"
    {
#line 617 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 617 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 617 "prog_mode.m"
  }
#line 617 "prog_mode.m"
}

#line 611 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
#line 611 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 611 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 611 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 611 "prog_mode.m"
{
#line 616 "prog_mode.m"
  {
#line 616 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 616 "prog_mode.m"
#line 616 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
#line 616 "prog_mode.m"
      default:
#line 616 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 616 "prog_mode.m"
        break;
#line 616 "prog_mode.m"
      case (MR_Integer) 0:
#line 616 "prog_mode.m"
        {
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Insts_9;
#line 616 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_15_15;

#line 617 "prog_mode.m"
          {
#line 617 "prog_mode.m"
            parse_tree__prog_mode__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 617 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 617 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
#line 617 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 617 "prog_mode.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_15_15, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 617 "prog_mode.m"
          }
#line 4815 "parse_tree.prog_mode.c"
          parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 617 "prog_mode.m"
          {
#line 617 "prog_mode.m"
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__V_15_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
          }
#line 618 "prog_mode.m"
          {
#line 618 "prog_mode.m"
            MR_Word base;
#line 618 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_mode.m"
            *parse_tree__prog_mode__InstName_6 = base;
#line 618 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
#line 618 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 618 "prog_mode.m"
          }
#line 616 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 616 "prog_mode.m"
        }
#line 616 "prog_mode.m"
        break;
#line 616 "prog_mode.m"
      case (MR_Integer) 3:
#line 616 "prog_mode.m"
#line 616 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
#line 616 "prog_mode.m"
          default:
#line 616 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 616 "prog_mode.m"
            break;
#line 616 "prog_mode.m"
          case (MR_Integer) 4:
#line 627 "prog_mode.m"
            {
#line 627 "prog_mode.m"
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 627 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 627 "prog_mode.m"
            }
#line 616 "prog_mode.m"
            break;
#line 616 "prog_mode.m"
          case (MR_Integer) 5:
#line 620 "prog_mode.m"
            {
#line 620 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 620 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 620 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_12;

#line 621 "prog_mode.m"
              {
#line 621 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
              }
#line 620 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 620 "prog_mode.m"
                {
#line 622 "prog_mode.m"
                  {
#line 622 "prog_mode.m"
                    MR_Word base;
#line 622 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_mode.m"
                    *parse_tree__prog_mode__InstName_6 = base;
#line 622 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 622 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
#line 622 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
#line 622 "prog_mode.m"
                  }
#line 622 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 620 "prog_mode.m"
                }
#line 620 "prog_mode.m"
            }
#line 616 "prog_mode.m"
            break;
#line 616 "prog_mode.m"
        }
#line 616 "prog_mode.m"
        break;
#line 616 "prog_mode.m"
    }
#line 616 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 616 "prog_mode.m"
  }
#line 611 "prog_mode.m"
}

#line 608 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
#line 608 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 608 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 608 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 608 "prog_mode.m"
{
#line 608 "prog_mode.m"
  {
#line 608 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 608 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 608 "prog_mode.m"
    {
#line 608 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 608 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 608 "prog_mode.m"
  }
#line 608 "prog_mode.m"
}

#line 603 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
#line 603 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 603 "prog_mode.m"
  MR_Word parse_tree__prog_mode__BoundInst0_5,
#line 603 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__BoundInst_6)
#line 603 "prog_mode.m"
{
#line 606 "prog_mode.m"
  {
#line 606 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 606 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
#line 606 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
#line 606 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
#line 606 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInsts_9;
#line 606 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_10_10;

#line 608 "prog_mode.m"
    {
#line 608 "prog_mode.m"
      parse_tree__prog_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 608 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 608 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1));
#line 608 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 608 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_10_10, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 608 "prog_mode.m"
    }
#line 4992 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 608 "prog_mode.m"
    {
#line 608 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__V_10_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
#line 609 "prog_mode.m"
    {
#line 609 "prog_mode.m"
      MR_Word base;
#line 609 "prog_mode.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_mode.m"
      *parse_tree__prog_mode__BoundInst_6 = base;
#line 609 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
#line 609 "prog_mode.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 609 "prog_mode.m"
    }
#line 606 "prog_mode.m"
  }
#line 603 "prog_mode.m"
}

#line 521 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
#line 521 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 521 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 521 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 521 "prog_mode.m"
{
#line 521 "prog_mode.m"
  {
#line 521 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 521 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv5_Mode_6;

#line 521 "prog_mode.m"
    {
#line 521 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv5_Mode_6);
    }
#line 521 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv5_Mode_6));
#line 521 "prog_mode.m"
  }
#line 521 "prog_mode.m"
}

#line 582 "prog_mode.m"
static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 582 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
#line 582 "prog_mode.m"
{
#line 582 "prog_mode.m"
  {
#line 582 "prog_mode.m"
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
#line 582 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 582 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv4_LambdaHeadVar__2_43;

#line 582 "prog_mode.m"
    {
#line 582 "prog_mode.m"
      parse_tree__prog_mode__conv4_LambdaHeadVar__2_43 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__582__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
#line 582 "prog_mode.m"
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_LambdaHeadVar__2_43));
#line 582 "prog_mode.m"
    return parse_tree__prog_mode__wrapper_arg_2;
#line 582 "prog_mode.m"
  }
#line 582 "prog_mode.m"
}

#line 558 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
#line 558 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 558 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 558 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 558 "prog_mode.m"
{
#line 558 "prog_mode.m"
  {
#line 558 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 558 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv3_BoundInst_6;

#line 558 "prog_mode.m"
    {
#line 558 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv3_BoundInst_6);
    }
#line 558 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_BoundInst_6));
#line 558 "prog_mode.m"
  }
#line 558 "prog_mode.m"
}

#line 566 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
#line 566 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 566 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 566 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 566 "prog_mode.m"
{
#line 566 "prog_mode.m"
  {
#line 566 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 566 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

#line 566 "prog_mode.m"
    {
#line 566 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
#line 566 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
#line 566 "prog_mode.m"
  }
#line 566 "prog_mode.m"
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
    MR_Word parse_tree__prog_mode__conv1_Mode_6;

#line 534 "prog_mode.m"
    {
#line 534 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Mode_6);
    }
#line 534 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Mode_6));
#line 534 "prog_mode.m"
  }
#line 534 "prog_mode.m"
}

#line 598 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
#line 598 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 598 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 598 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 598 "prog_mode.m"
{
#line 598 "prog_mode.m"
  {
#line 598 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 598 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 598 "prog_mode.m"
    {
#line 598 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 598 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 598 "prog_mode.m"
  }
#line 598 "prog_mode.m"
}

#line 506 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
#line 506 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 506 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Inst0_5,
#line 506 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Inst_6)
#line 506 "prog_mode.m"
{
#line 514 "prog_mode.m"
  {
#line 514 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 514 "prog_mode.m"
#line 514 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 514 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "prog_mode.m"
      case (MR_Integer) 0:
#line 515 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 514 "prog_mode.m"
        break;
#line 514 "prog_mode.m"
      case (MR_Integer) 1:
#line 515 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 514 "prog_mode.m"
        break;
#line 514 "prog_mode.m"
      case (MR_Integer) 2:
#line 530 "prog_mode.m"
        {
#line 530 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 530 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 530 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_71;

#line 537 "prog_mode.m"
          if ((parse_tree__prog_mode__HOInstInfo0_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "prog_mode.m"
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "prog_mode.m"
          else
#line 533 "prog_mode.m"
            {
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_79_79;
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_48_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_65), (MR_Integer) 1);
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_49_49;
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_50_50;
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__PorF_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 0)));
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Modes0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 1)));
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__MaybeArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 2)));
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_48_48, (MR_Integer) 3)));
#line 533 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Modes_58;

#line 534 "prog_mode.m"
              {
#line 534 "prog_mode.m"
                parse_tree__prog_mode__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 534 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
#line 534 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_49_49, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 534 "prog_mode.m"
              }
#line 5285 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 534 "prog_mode.m"
              {
#line 534 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__V_49_49, parse_tree__prog_mode__Modes0_55, &parse_tree__prog_mode__Modes_58);
              }
#line 536 "prog_mode.m"
              {
#line 536 "prog_mode.m"
                parse_tree__prog_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_54));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_58));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_56));
#line 536 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_50_50, 3) = ((MR_Box) (parse_tree__prog_mode__Det_57));
#line 536 "prog_mode.m"
              }
#line 536 "prog_mode.m"
              parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_50_50);
#line 533 "prog_mode.m"
            }
#line 541 "prog_mode.m"
          {
#line 541 "prog_mode.m"
            MR_Word base;
#line 541 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 541 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_64));
#line 541 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_71));
#line 541 "prog_mode.m"
          }
#line 530 "prog_mode.m"
        }
#line 514 "prog_mode.m"
        break;
#line 514 "prog_mode.m"
      case (MR_Integer) 3:
#line 514 "prog_mode.m"
#line 514 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 514 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "prog_mode.m"
          case (MR_Integer) 0:
#line 543 "prog_mode.m"
            {
#line 543 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 543 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 543 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 548 "prog_mode.m"
#line 548 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_17)) {
#line 548 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 548 "prog_mode.m"
                case (MR_Integer) 0:
#line 548 "prog_mode.m"
#line 548 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_17)) {
#line 548 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 548 "prog_mode.m"
                    case (MR_Integer) 0:
#line 565 "prog_mode.m"
                      {
#line 565 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_86_86;
#line 565 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_44_44;
#line 565 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_72;

#line 566 "prog_mode.m"
                        {
#line 566 "prog_mode.m"
                          parse_tree__prog_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 566 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 566 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
#line 566 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 566 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_44_44, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 566 "prog_mode.m"
                        }
#line 5383 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 566 "prog_mode.m"
                        {
#line 566 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__V_44_44, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_72);
                        }
#line 570 "prog_mode.m"
                        {
#line 570 "prog_mode.m"
                          MR_Word base;
#line 570 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 570 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 570 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 570 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_72));
#line 570 "prog_mode.m"
                        }
#line 565 "prog_mode.m"
                      }
#line 548 "prog_mode.m"
                      break;
#line 548 "prog_mode.m"
                    case (MR_Integer) 1:
#line 547 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 548 "prog_mode.m"
                      break;
#line 548 "prog_mode.m"
                  }
#line 548 "prog_mode.m"
                  break;
#line 548 "prog_mode.m"
                case (MR_Integer) 1:
#line 549 "prog_mode.m"
                  {
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 3)));
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 0)));
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 1)));
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 2)));
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 4)));
#line 549 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 5)));
#line 552 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_80_80;
#line 552 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_25;
#line 552 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_26;

#line 551 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_22)) == (MR_mktag((MR_Integer) 1)));
#line 551 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 551 "prog_mode.m"
                      {
#line 551 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_22, (MR_Integer) 0)));
#line 5453 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_80_80 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 553 "prog_mode.m"
                        {
#line 553 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVarsSet_25, &parse_tree__prog_mode__InstVars_26);
                        }
#line 554 "prog_mode.m"
                        {
#line 554 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVars_26, parse_tree__prog_mode__Renaming_4);
                        }
#line 551 "prog_mode.m"
                      }
#line 557 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 556 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 557 "prog_mode.m"
                    else
#line 559 "prog_mode.m"
                      {
#line 559 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_83_83;
#line 559 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_27;
#line 559 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_46_46;

#line 558 "prog_mode.m"
                        {
#line 558 "prog_mode.m"
                          parse_tree__prog_mode__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
#line 558 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
#line 558 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 558 "prog_mode.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_46_46, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 558 "prog_mode.m"
                        }
#line 5496 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 558 "prog_mode.m"
                        {
#line 558 "prog_mode.m"
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__V_46_46, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_27);
                        }
#line 562 "prog_mode.m"
                        {
#line 562 "prog_mode.m"
                          MR_Word base;
#line 562 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 562 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 562 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
#line 562 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_27));
#line 562 "prog_mode.m"
                        }
#line 559 "prog_mode.m"
                      }
#line 549 "prog_mode.m"
                  }
#line 548 "prog_mode.m"
                  break;
#line 548 "prog_mode.m"
              }
#line 543 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
          case (MR_Integer) 1:
#line 517 "prog_mode.m"
            {
#line 517 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 517 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 517 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_15;

#line 524 "prog_mode.m"
              if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "prog_mode.m"
                parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_mode.m"
              else
#line 520 "prog_mode.m"
                {
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__TypeCtorInfo_76_76;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__PorF_10;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes0_11;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Det_13;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__Modes_14;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_51_51 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_52_52;
#line 520 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__V_53_53;

#line 520 "prog_mode.m"
                  parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 0)));
#line 520 "prog_mode.m"
                  parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 1)));
#line 520 "prog_mode.m"
                  parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 2)));
#line 520 "prog_mode.m"
                  parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_51_51, (MR_Integer) 3)));
#line 521 "prog_mode.m"
                  {
#line 521 "prog_mode.m"
                    parse_tree__prog_mode__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 521 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6));
#line 521 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_52_52, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 521 "prog_mode.m"
                  }
#line 5593 "parse_tree.prog_mode.c"
                  parse_tree__prog_mode__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 521 "prog_mode.m"
                  {
#line 521 "prog_mode.m"
                    mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__V_52_52, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                  }
#line 523 "prog_mode.m"
                  {
#line 523 "prog_mode.m"
                    parse_tree__prog_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
#line 523 "prog_mode.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_53_53, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
#line 523 "prog_mode.m"
                  }
#line 523 "prog_mode.m"
                  parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_53_53);
#line 520 "prog_mode.m"
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
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 528 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 528 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
#line 528 "prog_mode.m"
              }
#line 517 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
          case (MR_Integer) 2:
#line 573 "prog_mode.m"
            {
#line 573 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 576 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var1_29;
#line 574 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 574 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv6_Var1_29;

#line 574 "prog_mode.m"
              {
#line 574 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__Var0_28)), &parse_tree__prog_mode__conv6_Var1_29);
              }
#line 574 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 574 "prog_mode.m"
                {
#line 574 "prog_mode.m"
                  parse_tree__prog_mode__Var1_29 = ((MR_Word) parse_tree__prog_mode__conv6_Var1_29);
#line 574 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 574 "prog_mode.m"
                }
#line 576 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 575 "prog_mode.m"
                {
#line 575 "prog_mode.m"
                  MR_Word base;
#line 575 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 575 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 575 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_29));
#line 575 "prog_mode.m"
                }
#line 576 "prog_mode.m"
              else
#line 577 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 573 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
          case (MR_Integer) 3:
#line 580 "prog_mode.m"
            {
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeInfo_88_88;
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_32;
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_33;
#line 580 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_41_41;

#line 581 "prog_mode.m"
              {
#line 581 "prog_mode.m"
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__SubInst0_31, &parse_tree__prog_mode__SubInst_32);
              }
#line 5712 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeInfo_88_88 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 582 "prog_mode.m"
              {
#line 582 "prog_mode.m"
                parse_tree__prog_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 582 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
#line 582 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
#line 582 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 582 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_41_41, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 582 "prog_mode.m"
              }
#line 582 "prog_mode.m"
              {
#line 582 "prog_mode.m"
                parse_tree__prog_mode__Vars_33 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__V_41_41, parse_tree__prog_mode__Vars0_30);
              }
#line 588 "prog_mode.m"
              {
#line 588 "prog_mode.m"
                MR_Word base;
#line 588 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 588 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 588 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_33));
#line 588 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_32));
#line 588 "prog_mode.m"
              }
#line 580 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
          case (MR_Integer) 4:
#line 590 "prog_mode.m"
            {
#line 590 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 593 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name1_36;

#line 591 "prog_mode.m"
              {
#line 591 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_35, &parse_tree__prog_mode__Name1_36);
              }
#line 593 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 592 "prog_mode.m"
                {
#line 592 "prog_mode.m"
                  MR_Word base;
#line 592 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 592 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 592 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_36));
#line 592 "prog_mode.m"
                }
#line 593 "prog_mode.m"
              else
#line 594 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 590 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
          case (MR_Integer) 5:
#line 597 "prog_mode.m"
            {
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_92_92;
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Sym_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInsts_39;
#line 597 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_40_40;

#line 598 "prog_mode.m"
              {
#line 598 "prog_mode.m"
                parse_tree__prog_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 598 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 598 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
#line 598 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 598 "prog_mode.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_40_40, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 598 "prog_mode.m"
              }
#line 5820 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 598 "prog_mode.m"
              {
#line 598 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__V_40_40, parse_tree__prog_mode__SubInsts0_38, &parse_tree__prog_mode__SubInsts_39);
              }
#line 600 "prog_mode.m"
              {
#line 600 "prog_mode.m"
                MR_Word base;
#line 600 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 600 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_37));
#line 600 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_39));
#line 600 "prog_mode.m"
              }
#line 597 "prog_mode.m"
            }
#line 514 "prog_mode.m"
            break;
#line 514 "prog_mode.m"
        }
#line 514 "prog_mode.m"
        break;
#line 514 "prog_mode.m"
    }
#line 514 "prog_mode.m"
  }
#line 506 "prog_mode.m"
}

#line 502 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
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

#line 491 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
#line 491 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Renaming_4,
#line 491 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Mode0_5,
#line 491 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__Mode_6)
#line 491 "prog_mode.m"
{
#line 496 "prog_mode.m"
  {
#line 496 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 496 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 496 "prog_mode.m"
      {
#line 496 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 496 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 496 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 496 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 497 "prog_mode.m"
        {
#line 497 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 498 "prog_mode.m"
        {
#line 498 "prog_mode.m"
          parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 499 "prog_mode.m"
        {
#line 499 "prog_mode.m"
          MR_Word base;
#line 499 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 499 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 499 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 499 "prog_mode.m"
        }
#line 496 "prog_mode.m"
      }
#line 496 "prog_mode.m"
    else
#line 501 "prog_mode.m"
      {
#line 501 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 501 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 501 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 501 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_13;
#line 501 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 502 "prog_mode.m"
        {
#line 502 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
#line 502 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
#line 502 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 502 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
#line 502 "prog_mode.m"
        }
#line 5972 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 502 "prog_mode.m"
        {
#line 502 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
        }
#line 503 "prog_mode.m"
        {
#line 503 "prog_mode.m"
          MR_Word base;
#line 503 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 503 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 503 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
#line 503 "prog_mode.m"
        }
#line 501 "prog_mode.m"
      }
#line 496 "prog_mode.m"
  }
#line 491 "prog_mode.m"
}

#line 477 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
#line 477 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 477 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 477 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 477 "prog_mode.m"
{
#line 480 "prog_mode.m"
  {
#line 480 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 480 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "prog_mode.m"
    else
#line 481 "prog_mode.m"
      {
#line 481 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 481 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 481 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Mode_8;
#line 481 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_9;

#line 311 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_6)) == (MR_mktag((MR_Integer) 0))))
#line 311 "prog_mode.m"
          {
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_15;
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_16;

#line 312 "prog_mode.m"
            {
#line 312 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_13, &parse_tree__prog_mode__I_15);
            }
#line 313 "prog_mode.m"
            {
#line 313 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_14, &parse_tree__prog_mode__F_16);
            }
#line 314 "prog_mode.m"
            {
#line 314 "prog_mode.m"
              parse_tree__prog_mode__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_15));
#line 314 "prog_mode.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_16));
#line 314 "prog_mode.m"
            }
#line 311 "prog_mode.m"
          }
#line 311 "prog_mode.m"
        else
#line 316 "prog_mode.m"
          {
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_19;

#line 317 "prog_mode.m"
            {
#line 317 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_18, &parse_tree__prog_mode__Args_19);
            }
#line 318 "prog_mode.m"
            {
#line 318 "prog_mode.m"
              parse_tree__prog_mode__Mode_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_17));
#line 318 "prog_mode.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_19));
#line 318 "prog_mode.m"
            }
#line 316 "prog_mode.m"
          }
#line 483 "prog_mode.m"
        {
#line 483 "prog_mode.m"
          parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_9);
        }
#line 481 "prog_mode.m"
        {
#line 481 "prog_mode.m"
          MR_Word base;
#line 481 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 481 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_8));
#line 481 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_9));
#line 481 "prog_mode.m"
        }
#line 481 "prog_mode.m"
      }
#line 480 "prog_mode.m"
  }
#line 477 "prog_mode.m"
}

#line 459 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(
#line 459 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 459 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 459 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 459 "prog_mode.m"
{
#line 462 "prog_mode.m"
  {
#line 462 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 462 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "prog_mode.m"
    else
#line 463 "prog_mode.m"
      {
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__PredOrFunc_8;
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes0_9;
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__MaybeArgRegs_10;
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Det_11;
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Modes_12;
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HeadVar__2_2), (MR_Integer) 1);
#line 463 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 465 "prog_mode.m"
        parse_tree__prog_mode__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 0)));
#line 465 "prog_mode.m"
        parse_tree__prog_mode__Modes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 1)));
#line 465 "prog_mode.m"
        parse_tree__prog_mode__MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 2)));
#line 465 "prog_mode.m"
        parse_tree__prog_mode__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_13_13, (MR_Integer) 3)));
#line 471 "prog_mode.m"
        {
#line 471 "prog_mode.m"
          parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_1);
        }
#line 473 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 472 "prog_mode.m"
          parse_tree__prog_mode__Modes_12 = parse_tree__prog_mode__Modes0_9;
#line 473 "prog_mode.m"
        else
#line 474 "prog_mode.m"
          {
#line 474 "prog_mode.m"
            parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_9, &parse_tree__prog_mode__Modes_12);
          }
#line 468 "prog_mode.m"
        {
#line 468 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_8));
#line 468 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_12));
#line 468 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_10));
#line 468 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__Det_11));
#line 468 "prog_mode.m"
        }
#line 468 "prog_mode.m"
        *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__V_14_14);
#line 463 "prog_mode.m"
      }
#line 462 "prog_mode.m"
  }
#line 459 "prog_mode.m"
}

#line 448 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
#line 448 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 448 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 448 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 448 "prog_mode.m"
{
#line 451 "prog_mode.m"
  {
#line 451 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 451 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 451 "prog_mode.m"
    else
#line 453 "prog_mode.m"
      {
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_8;
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_9;
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
#line 453 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_12;

#line 455 "prog_mode.m"
        {
#line 455 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
        }
#line 456 "prog_mode.m"
        {
#line 456 "prog_mode.m"
          parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 456 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
#line 456 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
#line 456 "prog_mode.m"
        }
#line 457 "prog_mode.m"
        {
#line 457 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
        }
#line 453 "prog_mode.m"
        {
#line 453 "prog_mode.m"
          MR_Word base;
#line 453 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 453 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
#line 453 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
#line 453 "prog_mode.m"
        }
#line 453 "prog_mode.m"
      }
#line 451 "prog_mode.m"
  }
#line 448 "prog_mode.m"
}

#line 429 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_4,
#line 429 "prog_mode.m"
  MR_Word parse_tree__prog_mode__InstName0_5,
#line 429 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__InstName_6)
#line 429 "prog_mode.m"
{
#line 434 "prog_mode.m"
  {
#line 434 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 434 "prog_mode.m"
#line 434 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
#line 434 "prog_mode.m"
      default:
#line 434 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 434 "prog_mode.m"
        break;
#line 434 "prog_mode.m"
      case (MR_Integer) 0:
#line 434 "prog_mode.m"
        {
#line 434 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
#line 434 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 434 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_9;

#line 435 "prog_mode.m"
          {
#line 435 "prog_mode.m"
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
          }
#line 436 "prog_mode.m"
          {
#line 436 "prog_mode.m"
            MR_Word base;
#line 436 "prog_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_mode.m"
            *parse_tree__prog_mode__InstName_6 = base;
#line 436 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
#line 436 "prog_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
#line 436 "prog_mode.m"
          }
#line 434 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 434 "prog_mode.m"
        }
#line 434 "prog_mode.m"
        break;
#line 434 "prog_mode.m"
      case (MR_Integer) 3:
#line 434 "prog_mode.m"
#line 434 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
#line 434 "prog_mode.m"
          default:
#line 434 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 434 "prog_mode.m"
            break;
#line 434 "prog_mode.m"
          case (MR_Integer) 4:
#line 445 "prog_mode.m"
            {
#line 445 "prog_mode.m"
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
#line 445 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 445 "prog_mode.m"
            }
#line 434 "prog_mode.m"
            break;
#line 434 "prog_mode.m"
          case (MR_Integer) 5:
#line 438 "prog_mode.m"
            {
#line 438 "prog_mode.m"
              MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
#line 438 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
#line 438 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_12;

#line 439 "prog_mode.m"
              {
#line 439 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
              }
#line 438 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 438 "prog_mode.m"
                {
#line 440 "prog_mode.m"
                  {
#line 440 "prog_mode.m"
                    MR_Word base;
#line 440 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_mode.m"
                    *parse_tree__prog_mode__InstName_6 = base;
#line 440 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 440 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
#line 440 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
#line 440 "prog_mode.m"
                  }
#line 440 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 438 "prog_mode.m"
                }
#line 438 "prog_mode.m"
            }
#line 434 "prog_mode.m"
            break;
#line 434 "prog_mode.m"
        }
#line 434 "prog_mode.m"
        break;
#line 434 "prog_mode.m"
    }
#line 434 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 434 "prog_mode.m"
  }
#line 429 "prog_mode.m"
}

#line 414 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
#line 414 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2)
#line 414 "prog_mode.m"
{
#line 417 "prog_mode.m"
  while (MR_TRUE)
#line 417 "prog_mode.m"
    {
#line 417 "prog_mode.m"
      /* tailcall optimized into a loop */
#line 417 "prog_mode.m"
      {
#line 417 "prog_mode.m"
        MR_bool parse_tree__prog_mode__succeeded;

#line 417 "prog_mode.m"
        if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 417 "prog_mode.m"
        else
#line 418 "prog_mode.m"
          {
#line 418 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "prog_mode.m"
            MR_Word parse_tree__prog_mode__InstVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "prog_mode.m"
            MR_Box parse_tree__prog_mode___ReplacementInst_7;

#line 420 "prog_mode.m"
            {
#line 420 "prog_mode.m"
              parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__TypeInfo_for_T_8, parse_tree__prog_mode__HeadVar__2_2, ((MR_Box) (parse_tree__prog_mode__InstVar_4)), &parse_tree__prog_mode___ReplacementInst_7);
            }
#line 419 "prog_mode.m"
            parse_tree__prog_mode__succeeded = !(parse_tree__prog_mode__succeeded);
#line 418 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 422 "prog_mode.m"
              {
#line 422 "prog_mode.m"
                /* direct tailcall eliminated */
#line 422 "prog_mode.m"
                {
#line 422 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__HeadVar__1__tmp_copy_1 = parse_tree__prog_mode__InstVars_5;

#line 422 "prog_mode.m"
                  parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__HeadVar__1__tmp_copy_1;
#line 422 "prog_mode.m"
                }
#line 422 "prog_mode.m"
                continue;
#line 422 "prog_mode.m"
              }
#line 418 "prog_mode.m"
          }
#line 417 "prog_mode.m"
        return parse_tree__prog_mode__succeeded;
#line 417 "prog_mode.m"
      }
#line 417 "prog_mode.m"
      break;
#line 417 "prog_mode.m"
    }
#line 414 "prog_mode.m"
}

#line 328 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
#line 328 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Subst_1,
#line 328 "prog_mode.m"
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
#line 328 "prog_mode.m"
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
#line 328 "prog_mode.m"
{
#line 331 "prog_mode.m"
  {
#line 331 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 331 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 331 "prog_mode.m"
    else
#line 332 "prog_mode.m"
      {
#line 332 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Inst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 332 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Inst_8;
#line 332 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Insts_9;

#line 333 "prog_mode.m"
        {
#line 333 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Inst0_6, &parse_tree__prog_mode__Inst_8);
        }
#line 334 "prog_mode.m"
        {
#line 334 "prog_mode.m"
          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Insts0_7, &parse_tree__prog_mode__Insts_9);
        }
#line 332 "prog_mode.m"
        {
#line 332 "prog_mode.m"
          MR_Word base;
#line 332 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 332 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Inst_8));
#line 332 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
#line 332 "prog_mode.m"
        }
#line 332 "prog_mode.m"
      }
#line 331 "prog_mode.m"
  }
#line 328 "prog_mode.m"
}

#line 1075 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0_1(
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1075 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1075 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1075 "prog_mode.m"
{
#line 1075 "prog_mode.m"
  {
#line 1075 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1075 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1075 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10;

#line 1075 "prog_mode.m"
    {
#line 1075 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_type_mode_consistent_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10);
    }
#line 1075 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1075 "prog_mode.m"
      {
#line 1075 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_10));
#line 1075 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1075 "prog_mode.m"
      }
#line 1075 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1075 "prog_mode.m"
  }
#line 1075 "prog_mode.m"
}

#line 167 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(
#line 167 "prog_mode.m"
  MR_Word parse_tree__prog_mode__TypeAndModes_2)
#line 167 "prog_mode.m"
{
#line 1074 "prog_mode.m"
  {
#line 1074 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;
#line 1075 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 1075 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 1076 "prog_mode.m"
    {
#line 1076 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1075 "prog_mode.m"
    {
#line 1075 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__TypeAndModes_2, ((MR_Box) (parse_tree__prog_mode__V_5_5)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 1075 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1075 "prog_mode.m"
      {
#line 1075 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 1075 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1075 "prog_mode.m"
      }
#line 1074 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1074 "prog_mode.m"
  }
#line 167 "prog_mode.m"
}

#line 1072 "prog_mode.m"
static MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0_1(
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 1072 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
#line 1072 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_3)
#line 1072 "prog_mode.m"
{
#line 1072 "prog_mode.m"
  {
#line 1072 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1072 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 1072 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11;

#line 1072 "prog_mode.m"
    {
#line 1072 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_var_constraints_are_consistent_in_mode_3_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11);
    }
#line 1072 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
      {
#line 1072 "prog_mode.m"
        *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_11));
#line 1072 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1072 "prog_mode.m"
      }
#line 1072 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1072 "prog_mode.m"
  }
#line 1072 "prog_mode.m"
}

#line 164 "prog_mode.m"
MR_bool MR_CALL 
parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(
#line 164 "prog_mode.m"
  MR_Word parse_tree__prog_mode__Modes_2)
#line 164 "prog_mode.m"
{
#line 1065 "prog_mode.m"
  {
#line 1065 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 1065 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_4_4;
#line 1072 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3;
#line 1072 "prog_mode.m"
    MR_Box parse_tree__prog_mode__conv1_V_3_3;

#line 1066 "prog_mode.m"
    {
#line 1066 "prog_mode.m"
      parse_tree__prog_mode__V_4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1072 "prog_mode.m"
    {
#line 1072 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[5], parse_tree__prog_mode__Modes_2, ((MR_Box) (parse_tree__prog_mode__V_4_4)), &parse_tree__prog_mode__conv1_V_3_3);
    }
#line 1072 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 1072 "prog_mode.m"
      {
#line 1072 "prog_mode.m"
        parse_tree__prog_mode__V_3_3 = ((MR_Word) parse_tree__prog_mode__conv1_V_3_3);
#line 1072 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_TRUE;
#line 1072 "prog_mode.m"
      }
#line 1065 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 1065 "prog_mode.m"
  }
#line 164 "prog_mode.m"
}

#line 947 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
#line 947 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 947 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 947 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 947 "prog_mode.m"
{
#line 947 "prog_mode.m"
  {
#line 947 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 947 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

#line 947 "prog_mode.m"
    {
#line 947 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
#line 947 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
#line 947 "prog_mode.m"
  }
#line 947 "prog_mode.m"
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
#line 941 "prog_mode.m"
  {
#line 941 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 941 "prog_mode.m"
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 941 "prog_mode.m"
      {
#line 941 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 941 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 941 "prog_mode.m"
        MR_Word parse_tree__prog_mode__I_9;
#line 941 "prog_mode.m"
        MR_Word parse_tree__prog_mode__F_10;

#line 942 "prog_mode.m"
        {
#line 942 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
        }
#line 943 "prog_mode.m"
        {
#line 943 "prog_mode.m"
          parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
        }
#line 944 "prog_mode.m"
        {
#line 944 "prog_mode.m"
          MR_Word base;
#line 944 "prog_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 944 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
#line 944 "prog_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
#line 944 "prog_mode.m"
        }
#line 941 "prog_mode.m"
      }
#line 941 "prog_mode.m"
    else
#line 946 "prog_mode.m"
      {
#line 946 "prog_mode.m"
        MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
#line 946 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 946 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 946 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Args_13;
#line 946 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_14_14;

#line 947 "prog_mode.m"
        {
#line 947 "prog_mode.m"
          parse_tree__prog_mode__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 947 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
#line 947 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
#line 947 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 947 "prog_mode.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_14_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
#line 947 "prog_mode.m"
        }
#line 6861 "parse_tree.prog_mode.c"
        parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 947 "prog_mode.m"
        {
#line 947 "prog_mode.m"
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__V_14_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
        }
#line 948 "prog_mode.m"
        {
#line 948 "prog_mode.m"
          MR_Word base;
#line 948 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "prog_mode.m"
          *parse_tree__prog_mode__Mode_6 = base;
#line 948 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
#line 948 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
#line 948 "prog_mode.m"
        }
#line 946 "prog_mode.m"
      }
#line 941 "prog_mode.m"
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
#line 936 "prog_mode.m"
  {
#line 936 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 936 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_5_5;

#line 937 "prog_mode.m"
    {
#line 937 "prog_mode.m"
      parse_tree__prog_mode__V_5_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 937 "prog_mode.m"
    {
#line 937 "prog_mode.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__V_5_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
    }
#line 936 "prog_mode.m"
  }
#line 149 "prog_mode.m"
}

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 823 "prog_mode.m"
{
#line 823 "prog_mode.m"
  {
#line 823 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 823 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 823 "prog_mode.m"
    {
#line 823 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 823 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 823 "prog_mode.m"
  }
#line 823 "prog_mode.m"
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
#line 831 "prog_mode.m"
  {
#line 831 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 831 "prog_mode.m"
#line 831 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
#line 831 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 831 "prog_mode.m"
      case (MR_Integer) 0:
#line 832 "prog_mode.m"
        *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 831 "prog_mode.m"
        break;
#line 831 "prog_mode.m"
      case (MR_Integer) 1:
#line 832 "prog_mode.m"
        *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 831 "prog_mode.m"
        break;
#line 831 "prog_mode.m"
      case (MR_Integer) 2:
#line 838 "prog_mode.m"
        {
#line 838 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
#line 838 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 838 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_12;

#line 839 "prog_mode.m"
          {
#line 839 "prog_mode.m"
            parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_11, &parse_tree__prog_mode__HOInstInfo_12);
          }
#line 840 "prog_mode.m"
          {
#line 840 "prog_mode.m"
            MR_Word base;
#line 840 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = base;
#line 840 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
#line 840 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
#line 840 "prog_mode.m"
          }
#line 838 "prog_mode.m"
        }
#line 831 "prog_mode.m"
        break;
#line 831 "prog_mode.m"
      case (MR_Integer) 3:
#line 831 "prog_mode.m"
#line 831 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
#line 831 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 831 "prog_mode.m"
          case (MR_Integer) 0:
#line 846 "prog_mode.m"
            {
#line 846 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 846 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
#line 846 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts_15;
#line 846 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

#line 847 "prog_mode.m"
              {
#line 847 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_p_0(parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
              }
#line 848 "prog_mode.m"
              {
#line 848 "prog_mode.m"
                MR_Word base;
#line 848 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 848 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 848 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 848 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
#line 848 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
#line 848 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
#line 848 "prog_mode.m"
              }
#line 846 "prog_mode.m"
            }
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
          case (MR_Integer) 1:
#line 842 "prog_mode.m"
            {
#line 842 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 842 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 842 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_24;

#line 843 "prog_mode.m"
              {
#line 843 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_ho_inst_info_2_p_0(parse_tree__prog_mode__HOInstInfo0_23, &parse_tree__prog_mode__HOInstInfo_24);
              }
#line 844 "prog_mode.m"
              {
#line 844 "prog_mode.m"
                MR_Word base;
#line 844 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 844 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 844 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
#line 844 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
#line 844 "prog_mode.m"
              }
#line 842 "prog_mode.m"
            }
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
          case (MR_Integer) 2:
#line 832 "prog_mode.m"
            *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
          case (MR_Integer) 3:
#line 834 "prog_mode.m"
            {
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 834 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst_9;

#line 835 "prog_mode.m"
              {
#line 835 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
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
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 836 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
#line 836 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
#line 836 "prog_mode.m"
              }
#line 834 "prog_mode.m"
            }
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
          case (MR_Integer) 4:
#line 850 "prog_mode.m"
            {
#line 850 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 850 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_17;

#line 851 "prog_mode.m"
              {
#line 851 "prog_mode.m"
                parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
              }
#line 852 "prog_mode.m"
              {
#line 852 "prog_mode.m"
                MR_Word base;
#line 852 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 852 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 852 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
#line 852 "prog_mode.m"
              }
#line 850 "prog_mode.m"
            }
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
          case (MR_Integer) 5:
#line 854 "prog_mode.m"
            {
#line 854 "prog_mode.m"
              MR_Word parse_tree__prog_mode__TypeCtorInfo_8_31;
#line 854 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
#line 854 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
#line 854 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_20;
#line 854 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Args_21;

#line 855 "prog_mode.m"
              {
#line 855 "prog_mode.m"
                parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__Name0_18, &parse_tree__prog_mode__Name_20);
              }
#line 7192 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_8_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 823 "prog_mode.m"
              {
#line 823 "prog_mode.m"
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_31, parse_tree__prog_mode__TypeCtorInfo_8_31, (MR_Word) &parse_tree__prog_mode_scalar_common_2[4], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
              }
#line 857 "prog_mode.m"
              {
#line 857 "prog_mode.m"
                MR_Word base;
#line 857 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_mode.m"
                *parse_tree__prog_mode__Inst_4 = base;
#line 857 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 857 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
#line 857 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
#line 857 "prog_mode.m"
              }
#line 854 "prog_mode.m"
            }
#line 831 "prog_mode.m"
            break;
#line 831 "prog_mode.m"
        }
#line 831 "prog_mode.m"
        break;
#line 831 "prog_mode.m"
    }
#line 831 "prog_mode.m"
  }
#line 142 "prog_mode.m"
}

#line 823 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 823 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 823 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 823 "prog_mode.m"
{
#line 823 "prog_mode.m"
  {
#line 823 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 823 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

#line 823 "prog_mode.m"
    {
#line 823 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
#line 823 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
#line 823 "prog_mode.m"
  }
#line 823 "prog_mode.m"
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
#line 822 "prog_mode.m"
  {
#line 822 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 822 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 823 "prog_mode.m"
    {
#line 823 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[3], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
    }
#line 822 "prog_mode.m"
  }
#line 139 "prog_mode.m"
}

#line 805 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
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
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

#line 805 "prog_mode.m"
    {
#line 805 "prog_mode.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
#line 805 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
#line 805 "prog_mode.m"
  }
#line 805 "prog_mode.m"
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
#line 804 "prog_mode.m"
  {
#line 804 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 804 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 805 "prog_mode.m"
    {
#line 805 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[2], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
    }
#line 804 "prog_mode.m"
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
#line 796 "prog_mode.m"
  {
#line 796 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 796 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 796 "prog_mode.m"
    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 796 "prog_mode.m"
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
#line 739 "prog_mode.m"
  {
#line 739 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 739 "prog_mode.m"
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "prog_mode.m"
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "prog_mode.m"
    else
#line 741 "prog_mode.m"
      {
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId_8;
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsIds_9;
#line 741 "prog_mode.m"
        MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
#line 732 "prog_mode.m"
        MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
#line 735 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SymName_15;
#line 735 "prog_mode.m"
        MR_Integer parse_tree__prog_mode__Arity_16;
#line 733 "prog_mode.m"
        MR_Word parse_tree__prog_mode___TypeCtor_17;

#line 733 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 733 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 733 "prog_mode.m"
          {
#line 733 "prog_mode.m"
            parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
#line 733 "prog_mode.m"
            parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
#line 733 "prog_mode.m"
            parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
#line 734 "prog_mode.m"
            {
#line 734 "prog_mode.m"
              parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 734 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
#line 734 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
#line 734 "prog_mode.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
#line 734 "prog_mode.m"
            }
#line 733 "prog_mode.m"
          }
#line 733 "prog_mode.m"
        else
#line 736 "prog_mode.m"
          parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
#line 743 "prog_mode.m"
        {
#line 743 "prog_mode.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
        }
#line 741 "prog_mode.m"
        {
#line 741 "prog_mode.m"
          MR_Word base;
#line 741 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "prog_mode.m"
          *parse_tree__prog_mode__HeadVar__3_3 = base;
#line 741 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
#line 741 "prog_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
#line 741 "prog_mode.m"
        }
#line 741 "prog_mode.m"
      }
#line 739 "prog_mode.m"
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
#line 731 "prog_mode.m"
  {
#line 731 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 731 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
#line 732 "prog_mode.m"
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
#line 735 "prog_mode.m"
    MR_Word parse_tree__prog_mode__SymName_9;
#line 735 "prog_mode.m"
    MR_Integer parse_tree__prog_mode__Arity_10;
#line 733 "prog_mode.m"
    MR_Word parse_tree__prog_mode___TypeCtor_11;

#line 733 "prog_mode.m"
    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 733 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 733 "prog_mode.m"
      {
#line 733 "prog_mode.m"
        parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
#line 733 "prog_mode.m"
        parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
#line 733 "prog_mode.m"
        parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
#line 734 "prog_mode.m"
        {
#line 734 "prog_mode.m"
          MR_Word base;
#line 734 "prog_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_mode.m"
          *parse_tree__prog_mode__ConsId_6 = base;
#line 734 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 734 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
#line 734 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
#line 734 "prog_mode.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
#line 734 "prog_mode.m"
        }
#line 733 "prog_mode.m"
      }
#line 733 "prog_mode.m"
    else
#line 736 "prog_mode.m"
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
#line 731 "prog_mode.m"
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
#line 778 "prog_mode.m"
  {
#line 778 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 778 "prog_mode.m"
    MR_Word parse_tree__prog_mode__ArgInstsPrime_9;

#line 776 "prog_mode.m"
    {
#line 776 "prog_mode.m"
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(parse_tree__prog_mode__Inst_5, parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__Arity_7, &parse_tree__prog_mode__ArgInstsPrime_9);
    }
#line 778 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 777 "prog_mode.m"
      *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInstsPrime_9;
#line 778 "prog_mode.m"
    else
#line 779 "prog_mode.m"
      {
#line 779 "prog_mode.m"
        {
#line 779 "prog_mode.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts_det\'/4", (MR_String) "get_arg_insts failed");
#line 779 "prog_mode.m"
          return;
        }
#line 779 "prog_mode.m"
      }
#line 778 "prog_mode.m"
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
#line 752 "prog_mode.m"
  {
#line 752 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 752 "prog_mode.m"
#line 752 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) {
#line 752 "prog_mode.m"
      default:
#line 752 "prog_mode.m"
        parse_tree__prog_mode__succeeded = MR_FALSE;
#line 752 "prog_mode.m"
        break;
#line 752 "prog_mode.m"
      case (MR_Integer) 0:
#line 752 "prog_mode.m"
#line 752 "prog_mode.m"
        switch (MR_unmkbody(parse_tree__prog_mode__Inst_5)) {
#line 752 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 752 "prog_mode.m"
          case (MR_Integer) 0:
#line 768 "prog_mode.m"
            {
#line 769 "prog_mode.m"
              {
#line 769 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
              }
#line 768 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 768 "prog_mode.m"
            }
#line 752 "prog_mode.m"
            break;
#line 752 "prog_mode.m"
          case (MR_Integer) 1:
#line 752 "prog_mode.m"
            {
#line 753 "prog_mode.m"
              {
#line 753 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
              }
#line 752 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 752 "prog_mode.m"
            }
#line 752 "prog_mode.m"
            break;
#line 752 "prog_mode.m"
        }
#line 752 "prog_mode.m"
        break;
#line 752 "prog_mode.m"
      case (MR_Integer) 1:
#line 768 "prog_mode.m"
        {
#line 769 "prog_mode.m"
          {
#line 769 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
          }
#line 768 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 768 "prog_mode.m"
        }
#line 752 "prog_mode.m"
        break;
#line 752 "prog_mode.m"
      case (MR_Integer) 2:
#line 771 "prog_mode.m"
        {
#line 771 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_17_17;
#line 771 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
#line 771 "prog_mode.m"
          MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

#line 772 "prog_mode.m"
          {
#line 772 "prog_mode.m"
            parse_tree__prog_mode__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_24));
#line 772 "prog_mode.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_mode__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "prog_mode.m"
          }
#line 772 "prog_mode.m"
          {
#line 772 "prog_mode.m"
            mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_17_17)), parse_tree__prog_mode__ArgInsts_8);
          }
#line 771 "prog_mode.m"
          parse_tree__prog_mode__succeeded = MR_TRUE;
#line 771 "prog_mode.m"
        }
#line 752 "prog_mode.m"
        break;
#line 752 "prog_mode.m"
      case (MR_Integer) 3:
#line 752 "prog_mode.m"
#line 752 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) {
#line 752 "prog_mode.m"
          default:
#line 752 "prog_mode.m"
            parse_tree__prog_mode__succeeded = MR_FALSE;
#line 752 "prog_mode.m"
            break;
#line 752 "prog_mode.m"
          case (MR_Integer) 0:
#line 758 "prog_mode.m"
            {
#line 758 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
#line 758 "prog_mode.m"
              MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 758 "prog_mode.m"
              MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
#line 761 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_14;

#line 759 "prog_mode.m"
              {
#line 759 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__BoundInsts_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
              }
#line 761 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 760 "prog_mode.m"
                *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
#line 761 "prog_mode.m"
              else
#line 763 "prog_mode.m"
                {
#line 763 "prog_mode.m"
                  {
#line 763 "prog_mode.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
#line 763 "prog_mode.m"
                }
#line 758 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 758 "prog_mode.m"
            }
#line 752 "prog_mode.m"
            break;
#line 752 "prog_mode.m"
          case (MR_Integer) 1:
#line 755 "prog_mode.m"
            {
#line 755 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
#line 755 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_21_21;
#line 755 "prog_mode.m"
              MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

#line 756 "prog_mode.m"
              {
#line 756 "prog_mode.m"
                parse_tree__prog_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 756 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
#line 756 "prog_mode.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_mode__V_21_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "prog_mode.m"
              }
#line 756 "prog_mode.m"
              {
#line 756 "prog_mode.m"
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__V_21_21)), parse_tree__prog_mode__ArgInsts_8);
              }
#line 755 "prog_mode.m"
              parse_tree__prog_mode__succeeded = MR_TRUE;
#line 755 "prog_mode.m"
            }
#line 752 "prog_mode.m"
            break;
#line 752 "prog_mode.m"
        }
#line 752 "prog_mode.m"
        break;
#line 752 "prog_mode.m"
    }
#line 752 "prog_mode.m"
    return parse_tree__prog_mode__succeeded;
#line 752 "prog_mode.m"
  }
#line 115 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 645 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 649 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
#line 649 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 649 "prog_mode.m"
{
#line 649 "prog_mode.m"
  {
#line 649 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 649 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12);
#line 649 "prog_mode.m"
    {
#line 649 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(parse_tree__prog_mode__env_ptr);
    }
#line 649 "prog_mode.m"
  }
#line 649 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 658 "prog_mode.m"
    {
#line 658 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
#line 658 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 658 "prog_mode.m"
      {
#line 658 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(parse_tree__prog_mode__env_ptr);
      }
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 656 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
#line 656 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 656 "prog_mode.m"
{
#line 656 "prog_mode.m"
  {
#line 656 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 656 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13);
#line 656 "prog_mode.m"
    {
#line 656 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
    }
#line 656 "prog_mode.m"
  }
#line 656 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 652 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
#line 652 "prog_mode.m"
      {
#line 652 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 652 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 651 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_78_78;
#line 651 "prog_mode.m"
        {
#line 651 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
        }
#line 653 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__V_77_77;
#line 653 "prog_mode.m"
        {
#line 653 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
        }
#line 652 "prog_mode.m"
      }
#line 652 "prog_mode.m"
    else
#line 655 "prog_mode.m"
      {
#line 655 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
#line 655 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

#line 656 "prog_mode.m"
        {
#line 656 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
        }
#line 655 "prog_mode.m"
      }
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 645 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
#line 645 "prog_mode.m"
      {
#line 645 "prog_mode.m"
        {
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_41;
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_9;
#line 644 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_11;

#line 646 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
#line 646 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 646 "prog_mode.m"
            {
#line 646 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
#line 645 "prog_mode.m"
              {
#line 647 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
#line 7999 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 649 "prog_mode.m"
                {
#line 649 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7, parse_tree__prog_mode__env_ptr);
                }
#line 645 "prog_mode.m"
              }
#line 646 "prog_mode.m"
            }
#line 645 "prog_mode.m"
        }
#line 645 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 645 "prog_mode.m"
      }
#line 645 "prog_mode.m"
    else
#line 645 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 660 "prog_mode.m"
{
#line 660 "prog_mode.m"
  {
#line 660 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 660 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
#line 660 "prog_mode.m"
  }
#line 660 "prog_mode.m"
}

#line 673 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
#line 673 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 673 "prog_mode.m"
{
#line 673 "prog_mode.m"
  {
#line 673 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 673 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27);
#line 673 "prog_mode.m"
    {
#line 673 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
    }
#line 673 "prog_mode.m"
  }
#line 673 "prog_mode.m"
}

#line 675 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
#line 675 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 675 "prog_mode.m"
{
#line 675 "prog_mode.m"
  {
#line 675 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 675 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30);
#line 675 "prog_mode.m"
    {
#line 675 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
    }
#line 675 "prog_mode.m"
  }
#line 675 "prog_mode.m"
}

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 660 "prog_mode.m"
{
#line 660 "prog_mode.m"
  {
#line 660 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 676 "prog_mode.m"
    {
#line 676 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30);
    }
#line 676 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 676 "prog_mode.m"
      {
#line 676 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
      }
#line 660 "prog_mode.m"
  }
#line 660 "prog_mode.m"
}

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 660 "prog_mode.m"
{
#line 660 "prog_mode.m"
  {
#line 660 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 660 "prog_mode.m"
    {
#line 674 "prog_mode.m"
      MR_Word parse_tree__prog_mode___ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 0)));

#line 674 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 1)));
#line 8140 "parse_tree.prog_mode.c"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 675 "prog_mode.m"
      {
#line 675 "prog_mode.m"
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
#line 660 "prog_mode.m"
    }
#line 660 "prog_mode.m"
  }
#line 660 "prog_mode.m"
}

#line 660 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
#line 660 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 660 "prog_mode.m"
{
#line 660 "prog_mode.m"
  {
#line 660 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 660 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
#line 660 "prog_mode.m"
      {
#line 660 "prog_mode.m"
        {
#line 660 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_44_44;
#line 660 "prog_mode.m"
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 660 "prog_mode.m"
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
#line 660 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 663 "prog_mode.m"
          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 663 "prog_mode.m"
          else
#line 663 "prog_mode.m"
          if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
#line 664 "prog_mode.m"
            {
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstVarsResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 3)));
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 0)));
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 1)));
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 2)));
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 4)));
#line 664 "prog_mode.m"
              MR_Word parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 5)));

#line 667 "prog_mode.m"
              if ((parse_tree__prog_mode__InstVarsResult_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "prog_mode.m"
                (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 667 "prog_mode.m"
              else
#line 669 "prog_mode.m"
                {
#line 669 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__InstVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_23, (MR_Integer) 0)));

#line 670 "prog_mode.m"
                  {
#line 670 "prog_mode.m"
                    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__InstVars_26);
                  }
#line 669 "prog_mode.m"
                }
#line 664 "prog_mode.m"
            }
#line 663 "prog_mode.m"
          else
#line 663 "prog_mode.m"
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 660 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 660 "prog_mode.m"
            {
#line 8232 "parse_tree.prog_mode.c"
              parse_tree__prog_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 673 "prog_mode.m"
              {
#line 673 "prog_mode.m"
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_44_44, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
              }
#line 660 "prog_mode.m"
            }
#line 660 "prog_mode.m"
        }
#line 660 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 660 "prog_mode.m"
      }
#line 660 "prog_mode.m"
    else
#line 660 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 660 "prog_mode.m"
  }
#line 660 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 645 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 649 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
#line 649 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 649 "prog_mode.m"
{
#line 649 "prog_mode.m"
  {
#line 649 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 649 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69);
#line 649 "prog_mode.m"
    {
#line 649 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
    }
#line 649 "prog_mode.m"
  }
#line 649 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 658 "prog_mode.m"
    {
#line 658 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70);
    }
#line 658 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 658 "prog_mode.m"
      {
#line 658 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
      }
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 656 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
#line 656 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 656 "prog_mode.m"
{
#line 656 "prog_mode.m"
  {
#line 656 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 656 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70);
#line 656 "prog_mode.m"
    {
#line 656 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
    }
#line 656 "prog_mode.m"
  }
#line 656 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 652 "prog_mode.m"
    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69)) == (MR_mktag((MR_Integer) 0))))
#line 652 "prog_mode.m"
      {
#line 652 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
#line 652 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

#line 651 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__V_80_80;
#line 651 "prog_mode.m"
        {
#line 651 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 653 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__V_79_79;
#line 653 "prog_mode.m"
        {
#line 653 "prog_mode.m"
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
        }
#line 652 "prog_mode.m"
      }
#line 652 "prog_mode.m"
    else
#line 655 "prog_mode.m"
      {
#line 655 "prog_mode.m"
        MR_Word parse_tree__prog_mode__SubInsts_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
#line 655 "prog_mode.m"
        MR_Word parse_tree__prog_mode___SymName_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

#line 656 "prog_mode.m"
        {
#line 656 "prog_mode.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70, parse_tree__prog_mode__SubInsts_56, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
        }
#line 655 "prog_mode.m"
      }
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 645 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
#line 645 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 645 "prog_mode.m"
{
#line 645 "prog_mode.m"
  {
#line 645 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 645 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
#line 645 "prog_mode.m"
      {
#line 645 "prog_mode.m"
        {
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_75;
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__GroundInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__PredInstInfo_64;
#line 645 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Modes_66;
#line 643 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___PredOrFunc_47;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___MaybeArgRegs_48;
#line 647 "prog_mode.m"
          MR_Word parse_tree__prog_mode___Detism_49;

#line 646 "prog_mode.m"
          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_63)) == (MR_mktag((MR_Integer) 1)));
#line 646 "prog_mode.m"
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 646 "prog_mode.m"
            {
#line 646 "prog_mode.m"
              parse_tree__prog_mode__PredInstInfo_64 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_63), (MR_Integer) 1);
#line 645 "prog_mode.m"
              {
#line 647 "prog_mode.m"
                parse_tree__prog_mode___PredOrFunc_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 0)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 1)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode___MaybeArgRegs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 2)));
#line 647 "prog_mode.m"
                parse_tree__prog_mode___Detism_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 3)));
#line 8463 "parse_tree.prog_mode.c"
                parse_tree__prog_mode__TypeCtorInfo_41_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 649 "prog_mode.m"
                {
#line 649 "prog_mode.m"
                  mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_75, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69, parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
                }
#line 645 "prog_mode.m"
              }
#line 646 "prog_mode.m"
            }
#line 645 "prog_mode.m"
        }
#line 645 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 645 "prog_mode.m"
      }
#line 645 "prog_mode.m"
    else
#line 645 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 645 "prog_mode.m"
  }
#line 645 "prog_mode.m"
}

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 681 "prog_mode.m"
{
#line 681 "prog_mode.m"
  {
#line 681 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 681 "prog_mode.m"
    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
#line 681 "prog_mode.m"
  }
#line 681 "prog_mode.m"
}

#line 682 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
#line 682 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 682 "prog_mode.m"
{
#line 682 "prog_mode.m"
  {
#line 682 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 682 "prog_mode.m"
    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40);
#line 682 "prog_mode.m"
    {
#line 682 "prog_mode.m"
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
#line 682 "prog_mode.m"
  }
#line 682 "prog_mode.m"
}

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 681 "prog_mode.m"
{
#line 681 "prog_mode.m"
  {
#line 681 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 683 "prog_mode.m"
    {
#line 683 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40);
    }
#line 683 "prog_mode.m"
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
#line 683 "prog_mode.m"
      {
#line 683 "prog_mode.m"
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
#line 681 "prog_mode.m"
  }
#line 681 "prog_mode.m"
}

#line 681 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
#line 681 "prog_mode.m"
  void * parse_tree__prog_mode__env_ptr_arg)
#line 681 "prog_mode.m"
{
#line 681 "prog_mode.m"
  {
#line 681 "prog_mode.m"
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

#line 681 "prog_mode.m"
    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
#line 681 "prog_mode.m"
      {
#line 681 "prog_mode.m"
        {
#line 681 "prog_mode.m"
          MR_Word parse_tree__prog_mode__ArgInsts_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
#line 681 "prog_mode.m"
          MR_Word parse_tree__prog_mode___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 682 "prog_mode.m"
          {
#line 682 "prog_mode.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40, parse_tree__prog_mode__ArgInsts_39, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
#line 681 "prog_mode.m"
        }
#line 681 "prog_mode.m"
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 681 "prog_mode.m"
      }
#line 681 "prog_mode.m"
    else
#line 681 "prog_mode.m"
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 681 "prog_mode.m"
  }
#line 681 "prog_mode.m"
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
#line 640 "prog_mode.m"
#line 640 "prog_mode.m"
    switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) {
#line 640 "prog_mode.m"
      default:
#line 640 "prog_mode.m"
        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 640 "prog_mode.m"
        break;
#line 640 "prog_mode.m"
      case (MR_Integer) 2:
#line 645 "prog_mode.m"
        {
#line 645 "prog_mode.m"
          {
#line 645 "prog_mode.m"
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
#line 645 "prog_mode.m"
        }
#line 640 "prog_mode.m"
        break;
#line 640 "prog_mode.m"
      case (MR_Integer) 3:
#line 640 "prog_mode.m"
#line 640 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) {
#line 640 "prog_mode.m"
          default:
#line 640 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
          case (MR_Integer) 0:
#line 660 "prog_mode.m"
            {
#line 660 "prog_mode.m"
              {
#line 660 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
              }
#line 660 "prog_mode.m"
            }
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
          case (MR_Integer) 1:
#line 645 "prog_mode.m"
            {
#line 645 "prog_mode.m"
              {
#line 645 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
              }
#line 645 "prog_mode.m"
            }
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
          case (MR_Integer) 2:
#line 641 "prog_mode.m"
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
          case (MR_Integer) 4:
#line 678 "prog_mode.m"
            {
#line 678 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

#line 679 "prog_mode.m"
              {
#line 679 "prog_mode.m"
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_31);
              }
#line 678 "prog_mode.m"
            }
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
          case (MR_Integer) 5:
#line 681 "prog_mode.m"
            {
#line 681 "prog_mode.m"
              {
#line 681 "prog_mode.m"
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
              }
#line 681 "prog_mode.m"
            }
#line 640 "prog_mode.m"
            break;
#line 640 "prog_mode.m"
        }
#line 640 "prog_mode.m"
        break;
#line 640 "prog_mode.m"
    }
#line 640 "prog_mode.m"
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
#line 107 "prog_mode.m"
  }
#line 107 "prog_mode.m"
}

#line 489 "prog_mode.m"
static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
#line 489 "prog_mode.m"
  MR_Box parse_tree__prog_mode__closure_arg,
#line 489 "prog_mode.m"
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
#line 489 "prog_mode.m"
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
#line 489 "prog_mode.m"
{
#line 489 "prog_mode.m"
  {
#line 489 "prog_mode.m"
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
#line 489 "prog_mode.m"
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

#line 489 "prog_mode.m"
    {
#line 489 "prog_mode.m"
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
#line 489 "prog_mode.m"
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
#line 489 "prog_mode.m"
  }
#line 489 "prog_mode.m"
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
#line 487 "prog_mode.m"
  {
#line 487 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;
#line 487 "prog_mode.m"
    MR_Word parse_tree__prog_mode__TypeCtorInfo_16_16;
#line 487 "prog_mode.m"
    MR_Word parse_tree__prog_mode__Renaming_11;
#line 487 "prog_mode.m"
    MR_Word parse_tree__prog_mode__V_12_12;

#line 488 "prog_mode.m"
    {
#line 488 "prog_mode.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_6, parse_tree__prog_mode__NewVarSet_7, parse_tree__prog_mode__MergedVarSet_8, &parse_tree__prog_mode__Renaming_11);
    }
#line 489 "prog_mode.m"
    {
#line 489 "prog_mode.m"
      parse_tree__prog_mode__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 489 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
#line 489 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
#line 489 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 489 "prog_mode.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__V_12_12, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_11));
#line 489 "prog_mode.m"
    }
#line 8800 "parse_tree.prog_mode.c"
    parse_tree__prog_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 489 "prog_mode.m"
    {
#line 489 "prog_mode.m"
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__V_12_12, parse_tree__prog_mode__Modes0_9, parse_tree__prog_mode__Modes_10);
    }
#line 487 "prog_mode.m"
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
#line 473 "prog_mode.m"
  {
#line 473 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 471 "prog_mode.m"
    {
#line 471 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 473 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 472 "prog_mode.m"
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
#line 473 "prog_mode.m"
    else
#line 474 "prog_mode.m"
      {
#line 474 "prog_mode.m"
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
      }
#line 473 "prog_mode.m"
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
#line 341 "prog_mode.m"
  {
#line 341 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 341 "prog_mode.m"
#line 341 "prog_mode.m"
    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
#line 341 "prog_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 341 "prog_mode.m"
      case (MR_Integer) 0:
#line 342 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 341 "prog_mode.m"
        break;
#line 341 "prog_mode.m"
      case (MR_Integer) 1:
#line 342 "prog_mode.m"
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 341 "prog_mode.m"
        break;
#line 341 "prog_mode.m"
      case (MR_Integer) 2:
#line 348 "prog_mode.m"
        {
#line 348 "prog_mode.m"
          MR_Word parse_tree__prog_mode__Uniq_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
#line 348 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 348 "prog_mode.m"
          MR_Word parse_tree__prog_mode__HOInstInfo_41;

#line 349 "prog_mode.m"
          {
#line 349 "prog_mode.m"
            parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_40, &parse_tree__prog_mode__HOInstInfo_41);
          }
#line 350 "prog_mode.m"
          {
#line 350 "prog_mode.m"
            MR_Word base;
#line 350 "prog_mode.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_mode.m"
            *parse_tree__prog_mode__Inst_6 = base;
#line 350 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_39));
#line 350 "prog_mode.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_41));
#line 350 "prog_mode.m"
          }
#line 348 "prog_mode.m"
        }
#line 341 "prog_mode.m"
        break;
#line 341 "prog_mode.m"
      case (MR_Integer) 3:
#line 341 "prog_mode.m"
#line 341 "prog_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
#line 341 "prog_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 341 "prog_mode.m"
          case (MR_Integer) 0:
#line 352 "prog_mode.m"
            {
#line 352 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 352 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 352 "prog_mode.m"
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

#line 357 "prog_mode.m"
#line 357 "prog_mode.m"
              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
#line 357 "prog_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 357 "prog_mode.m"
                case (MR_Integer) 0:
#line 357 "prog_mode.m"
#line 357 "prog_mode.m"
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
#line 357 "prog_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 357 "prog_mode.m"
                    case (MR_Integer) 0:
#line 373 "prog_mode.m"
                      {
#line 373 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_42;

#line 374 "prog_mode.m"
                        {
#line 374 "prog_mode.m"
                          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_42);
                        }
#line 377 "prog_mode.m"
                        {
#line 377 "prog_mode.m"
                          MR_Word base;
#line 377 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 377 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 377 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 377 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 377 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_42));
#line 377 "prog_mode.m"
                        }
#line 373 "prog_mode.m"
                      }
#line 357 "prog_mode.m"
                      break;
#line 357 "prog_mode.m"
                    case (MR_Integer) 1:
#line 356 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 357 "prog_mode.m"
                      break;
#line 357 "prog_mode.m"
                  }
#line 357 "prog_mode.m"
                  break;
#line 357 "prog_mode.m"
                case (MR_Integer) 1:
#line 358 "prog_mode.m"
                  {
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
#line 358 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
#line 361 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeInfo_46_46;
#line 361 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_47_47;
#line 361 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
#line 361 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__InstVars_21;

#line 360 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
#line 360 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 360 "prog_mode.m"
                      {
#line 360 "prog_mode.m"
                        parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
#line 9023 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeInfo_46_46 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
#line 362 "prog_mode.m"
                        {
#line 362 "prog_mode.m"
                          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_46_46, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                        }
#line 9030 "parse_tree.prog_mode.c"
                        parse_tree__prog_mode__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 363 "prog_mode.m"
                        {
#line 363 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_47_47, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__Subst_4);
                        }
#line 360 "prog_mode.m"
                      }
#line 366 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 365 "prog_mode.m"
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 366 "prog_mode.m"
                    else
#line 367 "prog_mode.m"
                      {
#line 367 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__BoundInsts_22;

#line 367 "prog_mode.m"
                        {
#line 367 "prog_mode.m"
                          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                        }
#line 370 "prog_mode.m"
                        {
#line 370 "prog_mode.m"
                          MR_Word base;
#line 370 "prog_mode.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_mode.m"
                          *parse_tree__prog_mode__Inst_6 = base;
#line 370 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 370 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
#line 370 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "prog_mode.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
#line 370 "prog_mode.m"
                        }
#line 367 "prog_mode.m"
                      }
#line 358 "prog_mode.m"
                  }
#line 357 "prog_mode.m"
                  break;
#line 357 "prog_mode.m"
              }
#line 352 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
          case (MR_Integer) 1:
#line 344 "prog_mode.m"
            {
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 344 "prog_mode.m"
              MR_Word parse_tree__prog_mode__HOInstInfo_10;

#line 345 "prog_mode.m"
              {
#line 345 "prog_mode.m"
                parse_tree__prog_mode__ho_inst_info_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__HOInstInfo0_9, &parse_tree__prog_mode__HOInstInfo_10);
              }
#line 346 "prog_mode.m"
              {
#line 346 "prog_mode.m"
                MR_Word base;
#line 346 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 346 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
#line 346 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
#line 346 "prog_mode.m"
              }
#line 344 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
          case (MR_Integer) 2:
#line 380 "prog_mode.m"
            {
#line 380 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 383 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_24;
#line 381 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv2_ReplacementInst_24;

#line 381 "prog_mode.m"
              {
#line 381 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_23)), &parse_tree__prog_mode__conv2_ReplacementInst_24);
              }
#line 381 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 381 "prog_mode.m"
                {
#line 381 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_24 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_24);
#line 381 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 381 "prog_mode.m"
                }
#line 383 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 382 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_24;
#line 383 "prog_mode.m"
              else
#line 384 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 380 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
          case (MR_Integer) 3:
#line 387 "prog_mode.m"
            {
#line 387 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 387 "prog_mode.m"
              MR_Word parse_tree__prog_mode__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 387 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var_44;
#line 390 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Var0_27;
#line 388 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv0_Var0_27;
#line 397 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ReplacementInst_43;
#line 393 "prog_mode.m"
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_43;

#line 388 "prog_mode.m"
              {
#line 388 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_25, &parse_tree__prog_mode__conv0_Var0_27);
              }
#line 388 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 388 "prog_mode.m"
                {
#line 388 "prog_mode.m"
                  parse_tree__prog_mode__Var0_27 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_27);
#line 388 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 388 "prog_mode.m"
                }
#line 390 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 389 "prog_mode.m"
                parse_tree__prog_mode__Var_44 = parse_tree__prog_mode__Var0_27;
#line 390 "prog_mode.m"
              else
#line 391 "prog_mode.m"
                {
#line 391 "prog_mode.m"
                  {
#line 391 "prog_mode.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
#line 391 "prog_mode.m"
                    return;
                  }
#line 391 "prog_mode.m"
                }
#line 393 "prog_mode.m"
              {
#line 393 "prog_mode.m"
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_44)), &parse_tree__prog_mode__conv1_ReplacementInst_43);
              }
#line 393 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 393 "prog_mode.m"
                {
#line 393 "prog_mode.m"
                  parse_tree__prog_mode__ReplacementInst_43 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_43);
#line 393 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = MR_TRUE;
#line 393 "prog_mode.m"
                }
#line 397 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 394 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_43;
#line 397 "prog_mode.m"
              else
#line 398 "prog_mode.m"
                {
#line 398 "prog_mode.m"
                  MR_Word parse_tree__prog_mode__SubInst_28;

#line 398 "prog_mode.m"
                  {
#line 398 "prog_mode.m"
                    parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_26, &parse_tree__prog_mode__SubInst_28);
                  }
#line 399 "prog_mode.m"
                  {
#line 399 "prog_mode.m"
                    MR_Word base;
#line 399 "prog_mode.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_mode.m"
                    *parse_tree__prog_mode__Inst_6 = base;
#line 399 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 399 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_25));
#line 399 "prog_mode.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
#line 399 "prog_mode.m"
                  }
#line 398 "prog_mode.m"
                }
#line 387 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
          case (MR_Integer) 4:
#line 402 "prog_mode.m"
            {
#line 402 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 405 "prog_mode.m"
              MR_Word parse_tree__prog_mode__InstName_30;

#line 403 "prog_mode.m"
              {
#line 403 "prog_mode.m"
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_30);
              }
#line 405 "prog_mode.m"
              if (parse_tree__prog_mode__succeeded)
#line 404 "prog_mode.m"
                {
#line 404 "prog_mode.m"
                  MR_Word base;
#line 404 "prog_mode.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_mode.m"
                  *parse_tree__prog_mode__Inst_6 = base;
#line 404 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 404 "prog_mode.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_30));
#line 404 "prog_mode.m"
                }
#line 405 "prog_mode.m"
              else
#line 406 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
#line 402 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
          case (MR_Integer) 5:
#line 409 "prog_mode.m"
            {
#line 409 "prog_mode.m"
              MR_Word parse_tree__prog_mode__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
#line 409 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
#line 409 "prog_mode.m"
              MR_Word parse_tree__prog_mode__ArgInsts_33;

#line 410 "prog_mode.m"
              {
#line 410 "prog_mode.m"
                parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_32, &parse_tree__prog_mode__ArgInsts_33);
              }
#line 411 "prog_mode.m"
              {
#line 411 "prog_mode.m"
                MR_Word base;
#line 411 "prog_mode.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_mode.m"
                *parse_tree__prog_mode__Inst_6 = base;
#line 411 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 411 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_31));
#line 411 "prog_mode.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_33));
#line 411 "prog_mode.m"
              }
#line 409 "prog_mode.m"
            }
#line 341 "prog_mode.m"
            break;
#line 341 "prog_mode.m"
        }
#line 341 "prog_mode.m"
        break;
#line 341 "prog_mode.m"
    }
#line 341 "prog_mode.m"
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
#line 324 "prog_mode.m"
  {
#line 324 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 322 "prog_mode.m"
    {
#line 322 "prog_mode.m"
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
#line 324 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 323 "prog_mode.m"
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
#line 324 "prog_mode.m"
    else
#line 325 "prog_mode.m"
      {
#line 325 "prog_mode.m"
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
      }
#line 324 "prog_mode.m"
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
#line 295 "prog_mode.m"
  {
#line 295 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 295 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "prog_mode.m"
      *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
#line 295 "prog_mode.m"
    else
#line 298 "prog_mode.m"
      {
#line 298 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 299 "prog_mode.m"
        {
#line 299 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
        }
#line 300 "prog_mode.m"
        {
#line 300 "prog_mode.m"
          parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
        }
#line 298 "prog_mode.m"
      }
#line 295 "prog_mode.m"
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
#line 246 "prog_mode.m"
  {
#line 246 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 246 "prog_mode.m"
    if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
      {
#line 237 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_7_7;
#line 237 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_8_8;

#line 237 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 237 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 237 "prog_mode.m"
          {
#line 237 "prog_mode.m"
            parse_tree__prog_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 237 "prog_mode.m"
            parse_tree__prog_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 237 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_7_7 == (MR_Integer) 0);
#line 237 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 237 "prog_mode.m"
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_mode.m"
          }
#line 239 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 238 "prog_mode.m"
          {
#line 238 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
#line 238 "prog_mode.m"
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
#line 238 "prog_mode.m"
          }
#line 239 "prog_mode.m"
        else
#line 241 "prog_mode.m"
          {
#line 239 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_11_11;
#line 239 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_12_12;

#line 239 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 239 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
              {
#line 239 "prog_mode.m"
                parse_tree__prog_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 239 "prog_mode.m"
                parse_tree__prog_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 239 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_11_11 == (MR_Integer) 1);
#line 239 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 239 "prog_mode.m"
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_mode.m"
              }
#line 241 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 240 "prog_mode.m"
              {
#line 240 "prog_mode.m"
                MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
#line 240 "prog_mode.m"
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
#line 240 "prog_mode.m"
              }
#line 241 "prog_mode.m"
            else
#line 243 "prog_mode.m"
              {
#line 241 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_15_15;
#line 241 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_16_16;

#line 241 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 241 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                  {
#line 241 "prog_mode.m"
                    parse_tree__prog_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 241 "prog_mode.m"
                    parse_tree__prog_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 241 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_15_15 == (MR_Integer) 2);
#line 241 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 241 "prog_mode.m"
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 242 "prog_mode.m"
                  {
#line 242 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
#line 242 "prog_mode.m"
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
#line 242 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
                else
#line 244 "prog_mode.m"
                  {
#line 244 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_20_20;
#line 244 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
#line 244 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__QualifiedName_88;

#line 244 "prog_mode.m"
                    {
#line 244 "prog_mode.m"
                      parse_tree__prog_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_20_20, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 244 "prog_mode.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_mode.m"
                    }
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
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "out"));
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
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__V_20_20));
#line 216 "prog_mode.m"
                    }
#line 244 "prog_mode.m"
                  }
#line 243 "prog_mode.m"
              }
#line 241 "prog_mode.m"
          }
#line 239 "prog_mode.m"
      }
#line 246 "prog_mode.m"
    else
#line 251 "prog_mode.m"
      {
#line 247 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_22_22;
#line 247 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_23_23;
#line 247 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_24_24;
#line 247 "prog_mode.m"
        MR_Word parse_tree__prog_mode__V_25_25;

#line 247 "prog_mode.m"
        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 247 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
          {
#line 247 "prog_mode.m"
            parse_tree__prog_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 247 "prog_mode.m"
            parse_tree__prog_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 247 "prog_mode.m"
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_22_22 == (MR_Integer) 0);
#line 247 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
              {
#line 247 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 247 "prog_mode.m"
                  {
#line 248 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 248 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 248 "prog_mode.m"
                      {
#line 248 "prog_mode.m"
                        parse_tree__prog_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 248 "prog_mode.m"
                        parse_tree__prog_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 248 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_24_24 == (MR_Integer) 0);
#line 247 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 248 "prog_mode.m"
                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "prog_mode.m"
                      }
#line 247 "prog_mode.m"
                  }
#line 247 "prog_mode.m"
              }
#line 247 "prog_mode.m"
          }
#line 251 "prog_mode.m"
        if (parse_tree__prog_mode__succeeded)
#line 250 "prog_mode.m"
          {
#line 250 "prog_mode.m"
            MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
#line 250 "prog_mode.m"
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
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "in"));
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
#line 250 "prog_mode.m"
          }
#line 251 "prog_mode.m"
        else
#line 256 "prog_mode.m"
          {
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_28_28;
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_29_29;
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_30_30;
#line 252 "prog_mode.m"
            MR_Word parse_tree__prog_mode__V_31_31;

#line 252 "prog_mode.m"
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 252 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 252 "prog_mode.m"
              {
#line 252 "prog_mode.m"
                parse_tree__prog_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 252 "prog_mode.m"
                parse_tree__prog_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 252 "prog_mode.m"
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_28_28 == (MR_Integer) 1);
#line 252 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 252 "prog_mode.m"
                  {
#line 252 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 252 "prog_mode.m"
                      {
#line 253 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 253 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 253 "prog_mode.m"
                          {
#line 253 "prog_mode.m"
                            parse_tree__prog_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 253 "prog_mode.m"
                            parse_tree__prog_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 253 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_30_30 == (MR_Integer) 3);
#line 252 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 253 "prog_mode.m"
                              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_mode.m"
                          }
#line 252 "prog_mode.m"
                      }
#line 252 "prog_mode.m"
                  }
#line 252 "prog_mode.m"
              }
#line 256 "prog_mode.m"
            if (parse_tree__prog_mode__succeeded)
#line 255 "prog_mode.m"
              {
#line 255 "prog_mode.m"
                {
#line 255 "prog_mode.m"
                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                }
#line 255 "prog_mode.m"
              }
#line 256 "prog_mode.m"
            else
#line 261 "prog_mode.m"
              {
#line 257 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_34_34;
#line 257 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_35_35;
#line 257 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_36_36;
#line 257 "prog_mode.m"
                MR_Word parse_tree__prog_mode__V_37_37;

#line 257 "prog_mode.m"
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 257 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 257 "prog_mode.m"
                  {
#line 257 "prog_mode.m"
                    parse_tree__prog_mode__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 257 "prog_mode.m"
                    parse_tree__prog_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 257 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_34_34 == (MR_Integer) 2);
#line 257 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 257 "prog_mode.m"
                      {
#line 257 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 257 "prog_mode.m"
                          {
#line 258 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 258 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 258 "prog_mode.m"
                              {
#line 258 "prog_mode.m"
                                parse_tree__prog_mode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 258 "prog_mode.m"
                                parse_tree__prog_mode__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 258 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_36_36 == (MR_Integer) 4);
#line 257 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 258 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_mode.m"
                              }
#line 257 "prog_mode.m"
                          }
#line 257 "prog_mode.m"
                      }
#line 257 "prog_mode.m"
                  }
#line 261 "prog_mode.m"
                if (parse_tree__prog_mode__succeeded)
#line 260 "prog_mode.m"
                  {
#line 260 "prog_mode.m"
                    {
#line 260 "prog_mode.m"
                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                    }
#line 260 "prog_mode.m"
                  }
#line 261 "prog_mode.m"
                else
#line 266 "prog_mode.m"
                  {
#line 262 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_40_40;
#line 262 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_41_41;
#line 262 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_42_42;
#line 262 "prog_mode.m"
                    MR_Word parse_tree__prog_mode__V_43_43;

#line 262 "prog_mode.m"
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 262 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 262 "prog_mode.m"
                      {
#line 262 "prog_mode.m"
                        parse_tree__prog_mode__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 262 "prog_mode.m"
                        parse_tree__prog_mode__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 262 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_40_40 == (MR_Integer) 1);
#line 262 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 262 "prog_mode.m"
                          {
#line 262 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 262 "prog_mode.m"
                              {
#line 263 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 263 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 263 "prog_mode.m"
                                  {
#line 263 "prog_mode.m"
                                    parse_tree__prog_mode__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 263 "prog_mode.m"
                                    parse_tree__prog_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 263 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_42_42 == (MR_Integer) 1);
#line 262 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 263 "prog_mode.m"
                                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "prog_mode.m"
                                  }
#line 262 "prog_mode.m"
                              }
#line 262 "prog_mode.m"
                          }
#line 262 "prog_mode.m"
                      }
#line 266 "prog_mode.m"
                    if (parse_tree__prog_mode__succeeded)
#line 265 "prog_mode.m"
                      {
#line 265 "prog_mode.m"
                        {
#line 265 "prog_mode.m"
                          parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                        }
#line 265 "prog_mode.m"
                      }
#line 266 "prog_mode.m"
                    else
#line 271 "prog_mode.m"
                      {
#line 267 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_46_46;
#line 267 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_47_47;
#line 267 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_48_48;
#line 267 "prog_mode.m"
                        MR_Word parse_tree__prog_mode__V_49_49;

#line 267 "prog_mode.m"
                        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 267 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 267 "prog_mode.m"
                          {
#line 267 "prog_mode.m"
                            parse_tree__prog_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
#line 267 "prog_mode.m"
                            parse_tree__prog_mode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
#line 267 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_46_46 == (MR_Integer) 2);
#line 267 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 267 "prog_mode.m"
                              {
#line 267 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 267 "prog_mode.m"
                                  {
#line 268 "prog_mode.m"
                                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 268 "prog_mode.m"
                                    if (parse_tree__prog_mode__succeeded)
#line 268 "prog_mode.m"
                                      {
#line 268 "prog_mode.m"
                                        parse_tree__prog_mode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 268 "prog_mode.m"
                                        parse_tree__prog_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 268 "prog_mode.m"
                                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_48_48 == (MR_Integer) 2);
#line 267 "prog_mode.m"
                                        if (parse_tree__prog_mode__succeeded)
#line 268 "prog_mode.m"
                                          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_mode.m"
                                      }
#line 267 "prog_mode.m"
                                  }
#line 267 "prog_mode.m"
                              }
#line 267 "prog_mode.m"
                          }
#line 271 "prog_mode.m"
                        if (parse_tree__prog_mode__succeeded)
#line 270 "prog_mode.m"
                          {
#line 270 "prog_mode.m"
                            {
#line 270 "prog_mode.m"
                              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                            }
#line 270 "prog_mode.m"
                          }
#line 271 "prog_mode.m"
                        else
#line 275 "prog_mode.m"
                          {
#line 272 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_52_52;
#line 272 "prog_mode.m"
                            MR_Word parse_tree__prog_mode__V_53_53;

#line 272 "prog_mode.m"
                            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 272 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 272 "prog_mode.m"
                              {
#line 272 "prog_mode.m"
                                parse_tree__prog_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
#line 272 "prog_mode.m"
                                parse_tree__prog_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
#line 272 "prog_mode.m"
                                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_52_52 == (MR_Integer) 3);
#line 272 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 272 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_mode.m"
                              }
#line 275 "prog_mode.m"
                            if (parse_tree__prog_mode__succeeded)
#line 274 "prog_mode.m"
                              {
#line 274 "prog_mode.m"
                                MR_Word parse_tree__prog_mode__V_55_55;

#line 274 "prog_mode.m"
                                {
#line 274 "prog_mode.m"
                                  parse_tree__prog_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "prog_mode.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 274 "prog_mode.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_mode.m"
                                }
#line 274 "prog_mode.m"
                                {
#line 274 "prog_mode.m"
                                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__V_55_55, parse_tree__prog_mode__Mode_6);
                                }
#line 274 "prog_mode.m"
                              }
#line 275 "prog_mode.m"
                            else
#line 277 "prog_mode.m"
                              {
#line 275 "prog_mode.m"
                                {
#line 275 "prog_mode.m"
                                  parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                                }
#line 277 "prog_mode.m"
                                if (parse_tree__prog_mode__succeeded)
#line 276 "prog_mode.m"
                                  {
#line 276 "prog_mode.m"
                                    MR_Word parse_tree__prog_mode__V_58_58;

#line 276 "prog_mode.m"
                                    {
#line 276 "prog_mode.m"
                                      parse_tree__prog_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_mode.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 276 "prog_mode.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "prog_mode.m"
                                    }
#line 276 "prog_mode.m"
                                    {
#line 276 "prog_mode.m"
                                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__V_58_58, parse_tree__prog_mode__Mode_6);
                                    }
#line 276 "prog_mode.m"
                                  }
#line 277 "prog_mode.m"
                                else
#line 278 "prog_mode.m"
                                  {
#line 278 "prog_mode.m"
                                    MR_Word base;
#line 278 "prog_mode.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "prog_mode.m"
                                    *parse_tree__prog_mode__Mode_6 = base;
#line 278 "prog_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
#line 278 "prog_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
#line 278 "prog_mode.m"
                                  }
#line 277 "prog_mode.m"
                              }
#line 275 "prog_mode.m"
                          }
#line 271 "prog_mode.m"
                      }
#line 266 "prog_mode.m"
                  }
#line 261 "prog_mode.m"
              }
#line 256 "prog_mode.m"
          }
#line 251 "prog_mode.m"
      }
#line 246 "prog_mode.m"
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
#line 285 "prog_mode.m"
  {
#line 285 "prog_mode.m"
    MR_bool parse_tree__prog_mode__succeeded;

#line 285 "prog_mode.m"
    if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "prog_mode.m"
      *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
#line 285 "prog_mode.m"
    else
#line 288 "prog_mode.m"
      {
#line 288 "prog_mode.m"
        MR_Word parse_tree__prog_mode__Subst_11;

#line 289 "prog_mode.m"
        {
#line 289 "prog_mode.m"
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
        }
#line 311 "prog_mode.m"
        if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
#line 311 "prog_mode.m"
          {
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__I_19;
#line 311 "prog_mode.m"
            MR_Word parse_tree__prog_mode__F_20;

#line 312 "prog_mode.m"
            {
#line 312 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_17, &parse_tree__prog_mode__I_19);
            }
#line 313 "prog_mode.m"
            {
#line 313 "prog_mode.m"
              parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_18, &parse_tree__prog_mode__F_20);
            }
#line 314 "prog_mode.m"
            {
#line 314 "prog_mode.m"
              MR_Word base;
#line 314 "prog_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 314 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_19));
#line 314 "prog_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_20));
#line 314 "prog_mode.m"
            }
#line 311 "prog_mode.m"
          }
#line 311 "prog_mode.m"
        else
#line 316 "prog_mode.m"
          {
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
#line 316 "prog_mode.m"
            MR_Word parse_tree__prog_mode__Args_23;

#line 317 "prog_mode.m"
            {
#line 317 "prog_mode.m"
              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_22, &parse_tree__prog_mode__Args_23);
            }
#line 318 "prog_mode.m"
            {
#line 318 "prog_mode.m"
              MR_Word base;
#line 318 "prog_mode.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_mode.m"
              *parse_tree__prog_mode__Mode_8 = base;
#line 318 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_21));
#line 318 "prog_mode.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_23));
#line 318 "prog_mode.m"
            }
#line 316 "prog_mode.m"
          }
#line 288 "prog_mode.m"
      }
#line 285 "prog_mode.m"
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
