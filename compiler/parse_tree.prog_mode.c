/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2021-04-14
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


// :- module parse_tree.prog_mode.
// :- implementation.

/*
INIT mercury__parse_tree__prog_mode__init
ENDINIT
*/

#include "parse_tree.prog_mode.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s {
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2;
  MR_bool parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5;
  MR_Box parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5;
};

struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s {
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2;
  MR_bool parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__658__1_2_f_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_42);

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1337__1_3_p_0(
  MR_Word InstVarSet_8,
  MR_Word HeadVar__2_44,
  MR_String * HeadVar__3_45);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(
  MR_Word SubInst_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * STATE_VARIABLE_InconsistentVars_13,
  MR_Word STATE_VARIABLE_Sub_0_14,
  MR_Word * STATE_VARIABLE_Sub_15);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(
  MR_Word BoundInst_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * STATE_VARIABLE_InconsistentVars_12,
  MR_Word STATE_VARIABLE_Sub_0_13,
  MR_Word * STATE_VARIABLE_Sub_14);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_13,
  MR_Word * STATE_VARIABLE_InconsistentVars_14,
  MR_Word STATE_VARIABLE_Sub_0_15,
  MR_Word * STATE_VARIABLE_Sub_16);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(
  MR_Word TypeAndMode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * STATE_VARIABLE_InconsistentVars_13,
  MR_Word STATE_VARIABLE_Sub_0_14,
  MR_Word * STATE_VARIABLE_Sub_15);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_34,
  MR_Word * STATE_VARIABLE_InconsistentVars_35,
  MR_Word STATE_VARIABLE_Sub_0_36,
  MR_Word * STATE_VARIABLE_Sub_37);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(
  MR_Word Insts_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * STATE_VARIABLE_InconsistentVars_10,
  MR_Word STATE_VARIABLE_Sub_0_11,
  MR_Word * STATE_VARIABLE_Sub_12);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(
  MR_Word Modes_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * STATE_VARIABLE_InconsistentVars_10,
  MR_Word STATE_VARIABLE_Sub_0_11,
  MR_Word * STATE_VARIABLE_Sub_12);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word BoundInst0_5,
  MR_Word * BoundInst_6);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
  MR_Word Renaming_4,
  MR_Word BoundInst0_5,
  MR_Word * BoundInst_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
  MR_Word Renaming_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
  MR_Word Renaming_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
  MR_Word Renaming_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6);

static void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Name0_5,
  MR_Word * Name_6);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word PII0_5,
  MR_Word * PII_6);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(
  MR_Word InstName0_3,
  MR_Word * InstName_4);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
  MR_Word InstName0_3,
  MR_Word * InstName_4);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInsts_7);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
  MR_Word InstName_2);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6);

static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[10][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[29][3];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[4][8];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_6[1][9];




static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst variable"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst variables"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[29][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__658__1_2_f_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_43;
    MR_Word Var_34;
    MR_Box conv0_Var_34;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Renaming_4, ((MR_Box) (LambdaHeadVar__1_42)), &conv0_Var_34);
    if (succeeded)
    {
      Var_34 = ((MR_Word) (conv0_Var_34));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      LambdaHeadVar__2_43 = Var_34;
    else
      LambdaHeadVar__2_43 = LambdaHeadVar__1_42;
    return LambdaHeadVar__2_43;
  }
}

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1337__1_3_p_0(
  MR_Word InstVarSet_8,
  MR_Word HeadVar__2_44,
  MR_String * HeadVar__3_45)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_8, HeadVar__2_44, HeadVar__3_45);
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(
  MR_Word SubInst_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * STATE_VARIABLE_InconsistentVars_13,
  MR_Word STATE_VARIABLE_Sub_0_14,
  MR_Word * STATE_VARIABLE_Sub_15)
{
  {
    MR_bool succeeded;
    MR_Word InstVarInst_11;
    MR_Box conv0_InstVarInst_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Sub_0_14, ((MR_Box) (InstVar_8)), &conv0_InstVarInst_11);
    if (succeeded)
    {
      InstVarInst_11 = ((MR_Word) (conv0_InstVarInst_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstVarInst_11, SubInst_7);
      if (succeeded)
        *STATE_VARIABLE_InconsistentVars_13 = STATE_VARIABLE_InconsistentVars_0_12;
      else
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), ((MR_Box) (InstVar_8)), STATE_VARIABLE_InconsistentVars_0_12, STATE_VARIABLE_InconsistentVars_13);
      *STATE_VARIABLE_Sub_15 = STATE_VARIABLE_Sub_0_14;
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_8)), ((MR_Box) (SubInst_7)), STATE_VARIABLE_Sub_0_14, STATE_VARIABLE_Sub_15);
      *STATE_VARIABLE_InconsistentVars_13 = STATE_VARIABLE_InconsistentVars_0_12;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word conv0_STATE_VARIABLE_Sub_37;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_37);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_35));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(
  MR_Word BoundInst_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * STATE_VARIABLE_InconsistentVars_12,
  MR_Word STATE_VARIABLE_Sub_0_13,
  MR_Word * STATE_VARIABLE_Sub_14)
{
  {
    MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_6, (MR_Integer) 1))));
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_12;
    MR_Box conv2_STATE_VARIABLE_Sub_14;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[28]), ArgInsts_10, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_11)), &conv3_STATE_VARIABLE_InconsistentVars_12, ((MR_Box) (STATE_VARIABLE_Sub_0_13)), &conv2_STATE_VARIABLE_Sub_14);
    *STATE_VARIABLE_InconsistentVars_12 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_12));
    *STATE_VARIABLE_Sub_14 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word conv0_STATE_VARIABLE_Sub_37;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_37);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_35));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_13,
  MR_Word * STATE_VARIABLE_InconsistentVars_14,
  MR_Word STATE_VARIABLE_Sub_0_15,
  MR_Word * STATE_VARIABLE_Sub_16)
{
  if (((MR_tag((MR_Word) Mode_6)) == (MR_Integer) 0))
  {
    MR_Word InitialInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_6, (MR_Integer) 0))));
    MR_Word FinalInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_InconsistentVars_19_19;
    MR_Word STATE_VARIABLE_Sub_20_20;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(InitialInst_9, STATE_VARIABLE_InconsistentVars_0_13, &STATE_VARIABLE_InconsistentVars_19_19, STATE_VARIABLE_Sub_0_15, &STATE_VARIABLE_Sub_20_20);
    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(FinalInst_10, STATE_VARIABLE_InconsistentVars_19_19, STATE_VARIABLE_InconsistentVars_14, STATE_VARIABLE_Sub_20_20, STATE_VARIABLE_Sub_16);
  }
  else
  {
    MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_6, (MR_Integer) 1))));
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_14;
    MR_Box conv2_STATE_VARIABLE_Sub_16;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[27]), ArgInsts_12, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_13)), &conv3_STATE_VARIABLE_InconsistentVars_14, ((MR_Box) (STATE_VARIABLE_Sub_0_15)), &conv2_STATE_VARIABLE_Sub_16);
    *STATE_VARIABLE_InconsistentVars_14 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_14));
    *STATE_VARIABLE_Sub_16 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_16));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word conv0_STATE_VARIABLE_Sub_37;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_37);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_35));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(
  MR_Word TypeAndMode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * STATE_VARIABLE_InconsistentVars_13,
  MR_Word STATE_VARIABLE_Sub_0_14,
  MR_Word * STATE_VARIABLE_Sub_15)
{
  if (((MR_tag((MR_Word) TypeAndMode_6)) == (MR_Integer) 1))
  {
    MR_Word Mode_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode_6, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) Mode_11)) == (MR_Integer) 0))
    {
      MR_Word InitialInst_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 0))));
      MR_Word FinalInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InconsistentVars_19_31;
      MR_Word STATE_VARIABLE_Sub_20_32;

      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(InitialInst_25, STATE_VARIABLE_InconsistentVars_0_12, &STATE_VARIABLE_InconsistentVars_19_31, STATE_VARIABLE_Sub_0_14, &STATE_VARIABLE_Sub_20_32);
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(FinalInst_26, STATE_VARIABLE_InconsistentVars_19_31, STATE_VARIABLE_InconsistentVars_13, STATE_VARIABLE_Sub_20_32, STATE_VARIABLE_Sub_15);
    }
    else
    {
      MR_Word ArgInsts_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_11, (MR_Integer) 1))));
      MR_Box conv3_STATE_VARIABLE_InconsistentVars_13;
      MR_Box conv2_STATE_VARIABLE_Sub_15;

      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[26]), ArgInsts_28, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_12)), &conv3_STATE_VARIABLE_InconsistentVars_13, ((MR_Box) (STATE_VARIABLE_Sub_0_14)), &conv2_STATE_VARIABLE_Sub_15);
      *STATE_VARIABLE_InconsistentVars_13 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_13));
      *STATE_VARIABLE_Sub_15 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_15));
    }
  }
  else
  {
    *STATE_VARIABLE_InconsistentVars_13 = STATE_VARIABLE_InconsistentVars_0_12;
    *STATE_VARIABLE_Sub_15 = STATE_VARIABLE_Sub_0_14;
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_InconsistentVars_13;
    MR_Word conv8_STATE_VARIABLE_Sub_15;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_InconsistentVars_13, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Sub_15);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_InconsistentVars_13));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Sub_15));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_InconsistentVars_12;
    MR_Word conv4_STATE_VARIABLE_Sub_14;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Sub_14);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_InconsistentVars_12));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_12;
    MR_Word conv0_STATE_VARIABLE_Sub_14;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_34,
  MR_Word * STATE_VARIABLE_InconsistentVars_35,
  MR_Word STATE_VARIABLE_Sub_0_36,
  MR_Word * STATE_VARIABLE_Sub_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
              *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
              *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
          *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 1))));

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
            *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
          }
          else
          {
            MR_Word Modes_24;
            MR_Word Var_49 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));

            Modes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
            parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(Modes_24, STATE_VARIABLE_InconsistentVars_0_34, STATE_VARIABLE_InconsistentVars_35, STATE_VARIABLE_Sub_0_36, STATE_VARIABLE_Sub_37);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box conv3_STATE_VARIABLE_InconsistentVars_35;
                        MR_Box conv2_STATE_VARIABLE_Sub_37;

                        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[24]), BoundInsts_12, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_34)), &conv3_STATE_VARIABLE_InconsistentVars_35, ((MR_Box) (STATE_VARIABLE_Sub_0_36)), &conv2_STATE_VARIABLE_Sub_37);
                        *STATE_VARIABLE_InconsistentVars_35 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_35));
                        *STATE_VARIABLE_Sub_37 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_37));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
                        *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsResult_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_11, (MR_Integer) 2))));
                    MR_Word TypeInfo_59_59;
                    MR_Word InstVarsSet_19;

                    succeeded = (InstVarsResult_16 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      InstVarsSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_16, (MR_Integer) 0))));
                      TypeInfo_59_59 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                      succeeded = mercury__set__is_empty_1_p_0(TypeInfo_59_59, InstVarsSet_19);
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
                      *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
                    }
                    else
                    {
                      MR_Box conv7_STATE_VARIABLE_InconsistentVars_35;
                      MR_Box conv6_STATE_VARIABLE_Sub_37;

                      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[25]), BoundInsts_12, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_34)), &conv7_STATE_VARIABLE_InconsistentVars_35, ((MR_Box) (STATE_VARIABLE_Sub_0_36)), &conv6_STATE_VARIABLE_Sub_37);
                      *STATE_VARIABLE_InconsistentVars_35 = ((MR_Word) (conv7_STATE_VARIABLE_InconsistentVars_35));
                      *STATE_VARIABLE_Sub_37 = ((MR_Word) (conv6_STATE_VARIABLE_Sub_37));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));

              if ((HOInstInfo_97 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
                *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
              }
              else
              {
                MR_Word Modes_88;
                MR_Word Var_91 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_97), (MR_Integer) 1));

                Modes_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 1))));
                parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(Modes_88, STATE_VARIABLE_InconsistentVars_0_34, STATE_VARIABLE_InconsistentVars_35, STATE_VARIABLE_Sub_0_36, STATE_VARIABLE_Sub_37);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.gather_inconsistent_constrained_inst_vars_in_inst\'/5", (MR_String) "unconstrained inst_var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word SubInst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word Var_38;
              MR_Word STATE_VARIABLE_InconsistentVars_39_39;
              MR_Word STATE_VARIABLE_Sub_40_40;
              MR_Box conv11_STATE_VARIABLE_InconsistentVars_39_39;
              MR_Box conv10_STATE_VARIABLE_Sub_40_40;
              MR_Word next_value_of_Inst_6;
              MR_Word next_value_of_STATE_VARIABLE_InconsistentVars_0_34;
              MR_Word next_value_of_STATE_VARIABLE_Sub_0_36;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (SubInst_33));
              }
              mercury__set__fold2_6_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), Var_38, InstVars_32, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_34)), &conv11_STATE_VARIABLE_InconsistentVars_39_39, ((MR_Box) (STATE_VARIABLE_Sub_0_36)), &conv10_STATE_VARIABLE_Sub_40_40);
              STATE_VARIABLE_InconsistentVars_39_39 = ((MR_Word) (conv11_STATE_VARIABLE_InconsistentVars_39_39));
              STATE_VARIABLE_Sub_40_40 = ((MR_Word) (conv10_STATE_VARIABLE_Sub_40_40));
              // direct tailcall eliminated
              ;
              next_value_of_Inst_6 = SubInst_33;
              next_value_of_STATE_VARIABLE_InconsistentVars_0_34 = STATE_VARIABLE_InconsistentVars_39_39;
              next_value_of_STATE_VARIABLE_Sub_0_36 = STATE_VARIABLE_Sub_40_40;
              Inst_6 = next_value_of_Inst_6;
              STATE_VARIABLE_InconsistentVars_0_34 = next_value_of_STATE_VARIABLE_InconsistentVars_0_34;
              STATE_VARIABLE_Sub_0_36 = next_value_of_STATE_VARIABLE_Sub_0_36;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word ArgInsts_30;

              succeeded = ((MR_tag((MR_Word) InstName_28)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgInsts_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_28, (MR_Integer) 1))));
                parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(ArgInsts_30, STATE_VARIABLE_InconsistentVars_0_34, STATE_VARIABLE_InconsistentVars_35, STATE_VARIABLE_Sub_0_36, STATE_VARIABLE_Sub_37);
              }
              else
              {
                *STATE_VARIABLE_Sub_37 = STATE_VARIABLE_Sub_0_36;
                *STATE_VARIABLE_InconsistentVars_35 = STATE_VARIABLE_InconsistentVars_0_34;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgInsts_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));

              parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(ArgInsts_58, STATE_VARIABLE_InconsistentVars_0_34, STATE_VARIABLE_InconsistentVars_35, STATE_VARIABLE_Sub_0_36, STATE_VARIABLE_Sub_37);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word conv0_STATE_VARIABLE_Sub_37;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_37);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_35));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(
  MR_Word Insts_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * STATE_VARIABLE_InconsistentVars_10,
  MR_Word STATE_VARIABLE_Sub_0_11,
  MR_Word * STATE_VARIABLE_Sub_12)
{
  {
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_10;
    MR_Box conv2_STATE_VARIABLE_Sub_12;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[23]), Insts_6, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_9)), &conv3_STATE_VARIABLE_InconsistentVars_10, ((MR_Box) (STATE_VARIABLE_Sub_0_11)), &conv2_STATE_VARIABLE_Sub_12);
    *STATE_VARIABLE_InconsistentVars_10 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_10));
    *STATE_VARIABLE_Sub_12 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_12));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_14;
    MR_Word conv0_STATE_VARIABLE_Sub_16;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_16));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(
  MR_Word Modes_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * STATE_VARIABLE_InconsistentVars_10,
  MR_Word STATE_VARIABLE_Sub_0_11,
  MR_Word * STATE_VARIABLE_Sub_12)
{
  {
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_10;
    MR_Box conv2_STATE_VARIABLE_Sub_12;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[22]), Modes_6, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_9)), &conv3_STATE_VARIABLE_InconsistentVars_10, ((MR_Box) (STATE_VARIABLE_Sub_0_11)), &conv2_STATE_VARIABLE_Sub_12);
    *STATE_VARIABLE_InconsistentVars_10 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_10));
    *STATE_VARIABLE_Sub_12 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_12));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word BoundInst0_5,
  MR_Word * BoundInst_6)
{
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_5, (MR_Integer) 0))));
    MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_5, (MR_Integer) 1))));
    MR_Word ArgInsts_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (InstConstraints_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInsts0_8, &ArgInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4)
{
  {
    MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 0))));
    MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 1))));
    MR_Word Insts_7;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[21]), Insts0_6, &Insts_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_7));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4)
{
  {
    MR_Word ConsId0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 0))));
    MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 1))));
    MR_Word ConsId_7;
    MR_Word Insts_8;

    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_5, &ConsId_7);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[20]), Insts0_6, &Insts_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
  MR_Word Renaming_4,
  MR_Word BoundInst0_5,
  MR_Word * BoundInst_6)
{
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_5, (MR_Integer) 0))));
    MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_5, (MR_Integer) 1))));
    MR_Word ArgInsts_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInsts0_8, &ArgInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
  MR_Word Renaming_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6)
{
  if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
  {
    MR_Word I0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 0))));
    MR_Word F0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 1))));
    MR_Word I_9;
    MR_Word F_10;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, I0_7, &I_9);
    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, F0_8, &F_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (I_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (F_10));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 0))));
    MR_Word Insts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 1))));
    MR_Word Insts_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Insts0_12, &Insts_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Mode_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_Mode_6);
    *wrapper_arg_2 = ((MR_Box) (conv5_Mode_6));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_43;

    conv4_LambdaHeadVar__2_43 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__658__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_43));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_BoundInst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_BoundInst_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_BoundInst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundInst_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Mode_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Mode_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
  MR_Word Renaming_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 1:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
          MR_Word HOInstInfo_71;

          if ((HOInstInfo0_65 == (MR_Word) ((MR_Unsigned) 0U)))
            HOInstInfo_71 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_65), (MR_Integer) 1));
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word PorF_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2))));
            MR_Word Det_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_58;

            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
              MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_49, Modes0_55, &Modes_58);
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = (MR_Box) ((MR_Unsigned) (PorF_54));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Modes_58));
              MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MaybeArgRegs_56));
              MR_hl_field(MR_mktag(0), Var_50, 3) = (MR_Box) ((MR_Unsigned) (Det_57));
            }
            HOInstInfo_71 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_50)));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_64));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_71));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Uniq0_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word InstResults0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word BoundInsts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults0_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_44;
                        MR_Word BoundInsts_72;

                        {
                          Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
                          MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Renaming_4));
                        }
                        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_44, BoundInsts0_18, &BoundInsts_72);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq0_16));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_72));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *Inst_6 = Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsResult_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_17, (MR_Integer) 2))));
                    MR_Word TypeInfo_80_80;
                    MR_Word InstVarsSet_25;
                    MR_Word InstVars_26;

                    succeeded = (InstVarsResult_22 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      InstVarsSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_22, (MR_Integer) 0))));
                      TypeInfo_80_80 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                      mercury__set__to_sorted_list_2_p_0(TypeInfo_80_80, InstVarsSet_25, &InstVars_26);
                      succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeInfo_80_80, InstVars_26, Renaming_4);
                    }
                    if (succeeded)
                      *Inst_6 = Inst0_5;
                    else
                    {
                      MR_Word BoundInsts_27;
                      MR_Word Var_46;

                      {
                        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Renaming_4));
                      }
                      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_46, BoundInsts0_18, &BoundInsts_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq0_16));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_27));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word HOInstInfo_15;

              if ((HOInstInfo0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                HOInstInfo_15 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word PorF_10;
                MR_Word Modes0_11;
                MR_Word MaybeArgRegs_12;
                MR_Word Det_13;
                MR_Word Modes_14;
                MR_Word Var_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_9), (MR_Integer) 1));
                MR_Word Var_52;
                MR_Word Var_53;

                PorF_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
                MaybeArgRegs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 2))));
                Det_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 3))) & (MR_Integer) 7);
                {
                  Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Renaming_4));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_52, Modes0_11, &Modes_14);
                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = (MR_Box) ((MR_Unsigned) (PorF_10));
                  MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Modes_14));
                  MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MaybeArgRegs_12));
                  MR_hl_field(MR_mktag(0), Var_53, 3) = (MR_Box) ((MR_Unsigned) (Det_13));
                }
                HOInstInfo_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_53)));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word Var1_29;
              MR_Box conv6_Var1_29;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Renaming_4, ((MR_Box) (Var0_28)), &conv6_Var1_29);
              if (succeeded)
              {
                Var1_29 = ((MR_Word) (conv6_Var1_29));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var1_29));
                }
              else
                *Inst_6 = Inst0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInst_32;
              MR_Word MaybeReplaceFunc_33;
              MR_Word Vars_35;

              parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, SubInst0_31, &SubInst_32);
              {
                MaybeReplaceFunc_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeReplaceFunc_33, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), MaybeReplaceFunc_33, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
                MR_hl_field(MR_mktag(0), MaybeReplaceFunc_33, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), MaybeReplaceFunc_33, 3) = ((MR_Box) (Renaming_4));
              }
              Vars_35 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), MaybeReplaceFunc_33, Vars0_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_32));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Name0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word Name1_37;

              succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(Renaming_4, Name0_36, &Name1_37);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name1_37));
                }
              else
                *Inst_6 = Inst0_5;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Sym_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInsts0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInsts_40;
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Renaming_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_41, SubInsts0_39, &SubInsts_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Sym_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInsts_40));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
  MR_Word Renaming_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstName0_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Sym_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_5, (MR_Integer) 0))));
          MR_Word Insts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_5, (MR_Integer) 1))));
          MR_Word Insts_9;
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Renaming_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_15, Insts0_8, &Insts_9);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *InstName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Sym_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_9));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            {
              *InstName_6 = InstName0_5;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 1))));
              MR_Word Name0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 2))));
              MR_Word Name_12;

              succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(Renaming_4, Name0_11, &Name_12);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Name_12));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_45;

    parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1337__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_45);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_45));
  }
}

void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0(
  MR_String WhereDesc_6,
  MR_Word Context_7,
  MR_Word InstVarSet_8,
  MR_Word InconsistentVars_9,
  MR_Word * MaybeSpec_10)
{
  if ((InconsistentVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeSpec_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadInstVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InconsistentVars_9, (MR_Integer) 0))));
    MR_Word TailInstVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InconsistentVars_9, (MR_Integer) 1))));
    MR_Word VarsPieces_14;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    if ((TailInstVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String HeadInstVarName_13;
      MR_Word Var_26;
      MR_Word Var_27;

      mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_8, HeadInstVar_11, &HeadInstVarName_13);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (HeadInstVarName_13));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        VarsPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarsPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[7])));
        MR_hl_field(MR_mktag(1), VarsPieces_14, 1) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_Word InstVarNames_17;
      MR_Word Var_20;
      MR_Word Var_23;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (InstVarSet_8));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, InconsistentVars_9, &InstVarNames_17);
      Var_23 = parse_tree__error_util__list_to_pieces_1_f_0(InstVarNames_17);
      {
        VarsPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarsPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[8])));
        MR_hl_field(MR_mktag(1), VarsPieces_14, 1) = ((MR_Box) (Var_23));
      }
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (VarsPieces_14));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (WhereDesc_6));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[4])));
    }
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, Var_32);
    {
      Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_mode.report_inconsistent_constrained_inst_vars\'/5"));
      MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSpec_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_13;
    MR_Word conv0_STATE_VARIABLE_Sub_15;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_15));
  }
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(
  MR_Word TypeAndModes_3,
  MR_Word * InconsistentVars_4)
{
  {
    MR_Word InconsistentVarsSet_5;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv3_InconsistentVarsSet_5;
    MR_Box conv2_Var_6;

    Var_8 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[19]), TypeAndModes_3, ((MR_Box) (Var_8)), &conv3_InconsistentVarsSet_5, ((MR_Box) (Var_9)), &conv2_Var_6);
    InconsistentVarsSet_5 = ((MR_Word) (conv3_InconsistentVarsSet_5));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InconsistentVarsSet_5, InconsistentVars_4);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InconsistentVars_14;
    MR_Word conv0_STATE_VARIABLE_Sub_16;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_16));
  }
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(
  MR_Word Modes_3,
  MR_Word * InconsistentVars_4)
{
  {
    MR_Word InconsistentVarsSet_5;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv3_InconsistentVarsSet_5;
    MR_Box conv2_Var_6;

    Var_8 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[18]), Modes_3, ((MR_Box) (Var_8)), &conv3_InconsistentVarsSet_5, ((MR_Box) (Var_9)), &conv2_Var_6);
    InconsistentVarsSet_5 = ((MR_Word) (conv3_InconsistentVarsSet_5));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InconsistentVarsSet_5, InconsistentVars_4);
  }
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
  MR_Word Mode0_3,
  MR_Word * Mode_4)
{
  {
    MR_Word Var_5;

    Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(Var_5, Mode0_3, Mode_4);
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6)
{
  if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
  {
    MR_Word I0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 0))));
    MR_Word F0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 1))));
    MR_Word I_9;
    MR_Word F_10;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, I0_7, &I_9);
    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, F0_8, &F_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (I_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (F_10));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 0))));
    MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 1))));
    MR_Word Args_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (InstConstraints_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Args0_12, &Args_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_BoundInst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_BoundInst_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_BoundInst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundInst_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Mode_6;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Mode_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_6 = Inst0_5;
            break;
          case (MR_Integer) 1:
            *Inst_6 = Inst0_5;
            break;
        }
        break;
      case (MR_Integer) 1:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
          MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
            *Inst_6 = Inst0_5;
          else
          {
            MR_Word Var_46;
            MR_Word PredInstInfo0_54 = (MR_Word) (MR_body((MR_Word) (Var_74), (MR_Integer) 1));
            MR_Word PredInstInfo_55;
            MR_Word PredOrFunc_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_54, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_54, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_54, (MR_Integer) 2))));
            MR_Word Det_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_54, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_85;
            MR_Word Var_86;

            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
              MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (InstConstraints_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_86, Modes0_82, &Modes_85);
            {
              PredInstInfo_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_55, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_81));
              MR_hl_field(MR_mktag(0), PredInstInfo_55, 1) = ((MR_Box) (Modes_85));
              MR_hl_field(MR_mktag(0), PredInstInfo_55, 2) = ((MR_Box) (MaybeArgRegs_83));
              MR_hl_field(MR_mktag(0), PredInstInfo_55, 3) = (MR_Box) ((MR_Unsigned) (Det_84));
            }
            Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_55)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_75));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_46));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));
              MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) InstResults0_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_41;
                        MR_Word BoundInsts_56;

                        {
                          Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
                          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3));
                          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (InstConstraints_4));
                        }
                        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_41, BoundInsts0_13, &BoundInsts_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_56));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *Inst_6 = Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsResult_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_12, (MR_Integer) 2))));
                    MR_Word TypeInfo_59_59;
                    MR_Word TypeCtorInfo_60_60;
                    MR_Word InstVarsSet_20;
                    MR_Word InstVars_21;

                    succeeded = (InstVarsResult_17 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      InstVarsSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_17, (MR_Integer) 0))));
                      TypeInfo_59_59 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                      mercury__set__to_sorted_list_2_p_0(TypeInfo_59_59, InstVarsSet_20, &InstVars_21);
                      TypeCtorInfo_60_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                      succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeCtorInfo_60_60, InstVars_21, InstConstraints_4);
                    }
                    if (succeeded)
                      *Inst_6 = Inst0_5;
                    else
                    {
                      MR_Word BoundInsts_22;
                      MR_Word Var_43;

                      {
                        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
                        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (InstConstraints_4));
                      }
                      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_43, BoundInsts0_13, &BoundInsts_22);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_22));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
                *Inst_6 = Inst0_5;
              else
              {
                MR_Word PredInstInfo0_10 = (MR_Word) (MR_body((MR_Word) (Var_76), (MR_Integer) 1));
                MR_Word PredInstInfo_11;
                MR_Word Var_48;

                parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(InstConstraints_4, PredInstInfo0_10, &PredInstInfo_11);
                Var_48 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_11)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_77));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_48));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word Var_40;
              MR_Word SubInst_58;
              MR_Word SubInstPrime_31;
              MR_Box conv4_SubInstPrime_31;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstConstraints_4, ((MR_Box) (Var_30)), &conv4_SubInstPrime_31);
              if (succeeded)
              {
                SubInstPrime_31 = ((MR_Word) (conv4_SubInstPrime_31));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                SubInst_58 = SubInstPrime_31;
              else
                SubInst_58 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]));
              Var_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), ((MR_Box) (Var_30)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_58));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInst1_25;
              MR_Word Vars_28;
              MR_Word SubInst_29;
              MR_Word SubVars_26;
              MR_Word SubSubInst_27;

              parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, SubInst0_24, &SubInst1_25);
              succeeded = ((((MR_tag((MR_Word) SubInst1_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubInst1_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                SubVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubInst1_25, (MR_Integer) 1))));
                SubSubInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubInst1_25, (MR_Integer) 2))));
                mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Vars0_23, SubVars_26, &Vars_28);
                SubInst_29 = SubSubInst_27;
              }
              else
              {
                Vars_28 = Vars0_23;
                SubInst_29 = SubInst1_25;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Name0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word Name_33;

              parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(InstConstraints_4, Name0_32, &Name_33);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word InstName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInsts0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInsts_36;
              MR_Word Var_37;

              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (InstConstraints_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_37, SubInsts0_35, &SubInsts_36);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInsts_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Name0_5,
  MR_Word * Name_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Name0_5)) == (MR_Integer) 0);
    MR_Word SymName_7;
    MR_Word Args0_8;

    if (succeeded)
    {
      SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name0_5, (MR_Integer) 0))));
      Args0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name0_5, (MR_Integer) 1))));
      {
        MR_Word Args_9;
        MR_Word Var_10;

        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (InstConstraints_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, Args0_8, &Args_9);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Name_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Args_9));
        }
      }
    }
    else
      *Name_6 = Name0_5;
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_6;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word PII0_5,
  MR_Word * PII_6)
{
  {
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PII0_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Modes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PII0_5, (MR_Integer) 1))));
    MR_Word MaybeArgRegs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PII0_5, (MR_Integer) 2))));
    MR_Word Det_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PII0_5, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word Modes_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (InstConstraints_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_12, Modes0_8, &Modes_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *PII_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Modes_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeArgRegs_9));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Det_10));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0(
  MR_Word Insts0_3,
  MR_Word * Insts_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[17]), Insts0_3, Insts_4);
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(
  MR_Word Mode0_3,
  MR_Word * Mode_4)
{
  if (((MR_tag((MR_Word) Mode0_3)) == (MR_Integer) 0))
  {
    MR_Word Initial0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_3, (MR_Integer) 0))));
    MR_Word Final0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_3, (MR_Integer) 1))));
    MR_Word Initial_7;
    MR_Word Final_8;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(Initial0_5, &Initial_7);
    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(Final0_6, &Final_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Initial_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Final_8));
    }
  }
  else
  {
    MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_3, (MR_Integer) 0))));
    MR_Word Insts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_3, (MR_Integer) 1))));
    MR_Word Insts_11;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[16]), Insts0_10, &Insts_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(
  MR_Word InstName0_3,
  MR_Word * InstName_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_3, (MR_Integer) 0))));
          MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_3, (MR_Integer) 1))));
          MR_Word SymName_7;
          MR_Word Insts_8;

          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(SymName0_5, &SymName_7);
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[15]), Insts0_6, &Insts_8);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *InstName_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 1))));
          MR_Word InstB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 2))));
          MR_Word InstA_13;
          MR_Word InstB_14;
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 0)));

          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstA0_11, &InstA_13);
          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstB0_12, &InstB_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *InstName_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (packed_word_2);
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstA_13));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (InstB_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_3, (MR_Integer) 0))));
          MR_Word InstB0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_3, (MR_Integer) 1))));
          MR_Word InstA_22;
          MR_Word InstB_23;

          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstA0_20, &InstA_22);
          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstB0_21, &InstB_23);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *InstName_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (InstA_22));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (InstB_23));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
              MR_Word SubInstName_17;
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2)));

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_15, &SubInstName_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_17));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_word_1);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
              MR_Word SubInstName_30;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2)));

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_28, &SubInstName_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_30));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_word_0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
              MR_Word SubInstName_32;

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_31, &SubInstName_32);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_32));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
              MR_Word SubInstName_34;

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_33, &SubInstName_34);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_34));
              }
            }
            break;
          case (MR_Integer) 4:
            *InstName_4 = InstName0_3;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2))));
              MR_Word next_value_of_InstName0_3 = SubInstName0_36;

              // direct tailcall eliminated
              ;
              InstName0_3 = next_value_of_InstName0_3;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_BoundInst_4;

    parse_tree__prog_mode__strip_typed_insts_from_bound_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_BoundInst_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_BoundInst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(
  MR_Word Inst0_3,
  MR_Word * Inst_4)
{
  switch (MR_tag((MR_Word) Inst0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_4 = Inst0_3;
      break;
    case (MR_Integer) 1:
      *Inst_4 = Inst0_3;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_3, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_3, (MR_Integer) 1))));
        MR_Word HOInstInfo_12;

        if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
          HOInstInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Pred0_33 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
          MR_Word PorF_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_33, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_33, (MR_Integer) 1))));
          MR_Word ArgRegs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_33, (MR_Integer) 2))));
          MR_Word Det_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_33, (MR_Integer) 3))) & (MR_Integer) 7);
          MR_Word Modes_38;
          MR_Word Pred_39;

          parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(Modes0_35, &Modes_38);
          {
            Pred_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pred_39, 0) = (MR_Box) ((MR_Unsigned) (PorF_34));
            MR_hl_field(MR_mktag(0), Pred_39, 1) = ((MR_Box) (Modes_38));
            MR_hl_field(MR_mktag(0), Pred_39, 2) = ((MR_Box) (ArgRegs_36));
            MR_hl_field(MR_mktag(0), Pred_39, 3) = (MR_Box) ((MR_Unsigned) (Det_37));
          }
          HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Pred_39)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word BoundInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 3))));
            MR_Word BoundInsts_15;
            MR_Word Uniq_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))) & (MR_Integer) 7);

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[14]), BoundInsts0_14, &BoundInsts_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_24));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_15));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word HOInstInfo_23;

            if ((HOInstInfo0_22 == (MR_Word) ((MR_Unsigned) 0U)))
              HOInstInfo_23 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Pred0_48 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_22), (MR_Integer) 1));
              MR_Word PorF_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_48, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_48, (MR_Integer) 1))));
              MR_Word ArgRegs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_48, (MR_Integer) 2))));
              MR_Word Det_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_48, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_53;
              MR_Word Pred_54;

              parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(Modes0_50, &Modes_53);
              {
                Pred_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Pred_54, 0) = (MR_Box) ((MR_Unsigned) (PorF_49));
                MR_hl_field(MR_mktag(0), Pred_54, 1) = ((MR_Box) (Modes_53));
                MR_hl_field(MR_mktag(0), Pred_54, 2) = ((MR_Box) (ArgRegs_51));
                MR_hl_field(MR_mktag(0), Pred_54, 3) = (MR_Box) ((MR_Unsigned) (Det_52));
              }
              HOInstInfo_23 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Pred_54)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_21));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_23));
            }
          }
          break;
        case (MR_Integer) 2:
          *Inst_4 = Inst0_3;
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word SubInst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word SubInst_9;

            parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(SubInst0_8, &SubInst_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word InstName_17;

            parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(InstName0_16, &InstName_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word Args_20;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[13]), Args0_19, &Args_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_20));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_4;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Mode_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(
  MR_Word Modes0_3,
  MR_Word * Modes_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[12]), Modes0_3, Modes_4);
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
  MR_Word Insts0_3,
  MR_Word * Insts_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[11]), Insts0_3, Insts_4);
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
  MR_Word Mode0_3,
  MR_Word * Mode_4)
{
  if (((MR_tag((MR_Word) Mode0_3)) == (MR_Integer) 0))
  {
    MR_Word Initial0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_3, (MR_Integer) 0))));
    MR_Word Final0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_3, (MR_Integer) 1))));
    MR_Word Initial_7;
    MR_Word Final_8;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(Initial0_5, &Initial_7);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(Final0_6, &Final_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Initial_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Final_8));
    }
  }
  else
  {
    MR_Word SymName0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_3, (MR_Integer) 0))));
    MR_Word Insts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_3, (MR_Integer) 1))));
    MR_Word Insts_11;
    MR_Word SymName_12;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[10]), Insts0_10, &Insts_11);
    parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(SymName0_9, &SymName_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
  MR_Word InstName0_3,
  MR_Word * InstName_4)
{
  switch (MR_tag((MR_Word) InstName0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_3, (MR_Integer) 0))));
        MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_3, (MR_Integer) 1))));
        MR_Word SymName_7;
        MR_Word Insts_8;

        parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(SymName0_5, &SymName_7);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[9]), Insts0_6, &Insts_8);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *InstName_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstA0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 1))));
        MR_Word InstB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 2))));
        MR_Word InstA_13;
        MR_Word InstB_14;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName0_3, (MR_Integer) 0)));

        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(InstA0_11, &InstA_13);
        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(InstB0_12, &InstB_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *InstName_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstA_13));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (InstB_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstA0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_3, (MR_Integer) 0))));
        MR_Word InstB0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_3, (MR_Integer) 1))));
        MR_Word InstA_23;
        MR_Word InstB_24;

        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(InstA0_21, &InstA_23);
        parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(InstB0_22, &InstB_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InstName_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (InstA_23));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (InstB_24));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
            MR_Word SubInstName_17;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2)));

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(SubInstName0_15, &SubInstName_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_17));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_word_1);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SubInstName0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
            MR_Word SubInstName_31;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2)));

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(SubInstName0_29, &SubInstName_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_31));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_word_0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubInstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
            MR_Word SubInstName_33;

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(SubInstName0_32, &SubInstName_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InstName_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_33));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubInstName0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
            MR_Word SubInstName_35;

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(SubInstName0_34, &SubInstName_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InstName_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubInstName_35));
            }
          }
          break;
        case (MR_Integer) 4:
          *InstName_4 = InstName0_3;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 1))));
            MR_Word SubInstName0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_3, (MR_Integer) 2))));
            MR_Word SubInstName_37;

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(SubInstName0_36, &SubInstName_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInstName_37));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_BoundInst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_BoundInst_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_BoundInst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
  MR_Word Inst0_3,
  MR_Word * Inst_4)
{
  switch (MR_tag((MR_Word) Inst0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_4 = Inst0_3;
      break;
    case (MR_Integer) 1:
      *Inst_4 = Inst0_3;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_3, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_3, (MR_Integer) 1))));
        MR_Word HOInstInfo_12;

        if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
          HOInstInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Pred0_34 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
          MR_Word PorF_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_34, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_34, (MR_Integer) 1))));
          MR_Word ArgRegs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_34, (MR_Integer) 2))));
          MR_Word Det_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_34, (MR_Integer) 3))) & (MR_Integer) 7);
          MR_Word Modes_39;
          MR_Word Pred_40;

          parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(Modes0_36, &Modes_39);
          {
            Pred_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pred_40, 0) = (MR_Box) ((MR_Unsigned) (PorF_35));
            MR_hl_field(MR_mktag(0), Pred_40, 1) = ((MR_Box) (Modes_39));
            MR_hl_field(MR_mktag(0), Pred_40, 2) = ((MR_Box) (ArgRegs_37));
            MR_hl_field(MR_mktag(0), Pred_40, 3) = (MR_Box) ((MR_Unsigned) (Det_38));
          }
          HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Pred_40)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word BoundInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 3))));
            MR_Word BoundInsts_15;
            MR_Word Uniq_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))) & (MR_Integer) 7);

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[8]), BoundInsts0_14, &BoundInsts_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_25));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_15));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word HOInstInfo_24;

            if ((HOInstInfo0_23 == (MR_Word) ((MR_Unsigned) 0U)))
              HOInstInfo_24 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Pred0_49 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_23), (MR_Integer) 1));
              MR_Word PorF_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_49, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_49, (MR_Integer) 1))));
              MR_Word ArgRegs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pred0_49, (MR_Integer) 2))));
              MR_Word Det_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Pred0_49, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_54;
              MR_Word Pred_55;

              parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(Modes0_51, &Modes_54);
              {
                Pred_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Pred_55, 0) = (MR_Box) ((MR_Unsigned) (PorF_50));
                MR_hl_field(MR_mktag(0), Pred_55, 1) = ((MR_Box) (Modes_54));
                MR_hl_field(MR_mktag(0), Pred_55, 2) = ((MR_Box) (ArgRegs_52));
                MR_hl_field(MR_mktag(0), Pred_55, 3) = (MR_Box) ((MR_Unsigned) (Det_53));
              }
              HOInstInfo_24 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Pred_55)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_22));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_24));
            }
          }
          break;
        case (MR_Integer) 2:
          *Inst_4 = Inst0_3;
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word SubInst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word SubInst_9;

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(SubInst0_8, &SubInst_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word InstName_17;

            parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(InstName0_16, &InstName_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 1))));
            MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_3, (MR_Integer) 2))));
            MR_Word Name_20;
            MR_Word Args_21;

            parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(Name0_18, &Name_20);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[7]), Args0_19, &Args_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_21));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_4;

    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Mode_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
  MR_Word Modes0_3,
  MR_Word * Modes_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[6]), Modes0_3, Modes_4);
}

void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundInst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BoundInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsId_8;
    MR_Word ConsIds_9;

    parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(TypeCtor_1, BoundInst_6, &ConsId_8);
    parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(TypeCtor_1, BoundInsts_7, &ConsIds_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsIds_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word BoundInst_5,
  MR_Word * ConsId_6)
{
  {
    MR_bool succeeded;
    MR_Word ConsId0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_5, (MR_Integer) 0))));
    MR_Word ConsIdSymName0_9;
    MR_Integer ConsIdArity_10;

    succeeded = ((((MR_tag((MR_Word) ConsId0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      ConsIdSymName0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_7, (MR_Integer) 1))));
      ConsIdArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_7, (MR_Integer) 2))));
      {
        MR_Word TypeCtorSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));
        MR_Word ConsIdSymName_18;

        if (((MR_tag((MR_Word) TypeCtorSymName_12)) == (MR_Integer) 1))
        {
          MR_Word TypeCtorModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_12, (MR_Integer) 0))));
          MR_String ConsIdName_17;

          ConsIdName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsIdSymName0_9);
          {
            ConsIdSymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ConsIdSymName_18, 0) = ((MR_Box) (TypeCtorModuleName_15));
            MR_hl_field(MR_mktag(1), ConsIdSymName_18, 1) = ((MR_Box) (ConsIdName_17));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.bound_inst_to_cons_id\'/3", (MR_String) "unqualified TypeCtorSymName");
            return;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConsIdSymName_18));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ConsIdArity_10));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_4));
        }
      }
    }
    else
      *ConsId_6 = ConsId0_7;
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_ctor_to_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * X_4)
{
  *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

void MR_CALL 
parse_tree__prog_mode__get_arg_insts_det_4_p_0(
  MR_Word Inst_5,
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ArgInsts_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgInstsPrime_9;

    succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(Inst_5, ConsId_6, Arity_7, &ArgInstsPrime_9);
    if (succeeded)
      *ArgInsts_8 = ArgInstsPrime_9;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts_det\'/4", (MR_String) "get_arg_insts failed");
        return;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_4_p_0(
  MR_Word Inst_5,
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ArgInsts_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) ((MR_Unsigned) 0U)), ArgInsts_8);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) ((MR_Unsigned) 4U)), ArgInsts_8);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) ((MR_Unsigned) 0U)), ArgInsts_8);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_25;
          MR_Word Uniq_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_5, (MR_Integer) 0))) & (MR_Integer) 7);

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_25, 0) = (MR_Box) ((MR_Unsigned) (Uniq_32));
            MR_hl_field(MR_mktag(2), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) (Var_25)), ArgInsts_8);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 3))));
              MR_Word ArgInsts0_14;

              succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(BoundInsts_13, ConsId_6, &ArgInsts0_14);
              if (succeeded)
                *ArgInsts_8 = ArgInsts0_14;
              else
                mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) ((MR_Unsigned) 4U)), ArgInsts_8);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_29, 1) = (MR_Box) ((MR_Unsigned) (Uniq_9));
                MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) (Var_29)), ArgInsts_8);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_5 = SubInst_19;

              // direct tailcall eliminated
              ;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts\'/4", (MR_String) "defined_inst");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInsts_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word BoundInst_4;
    MR_Word BoundInsts_5;
    MR_Word ArgInsts0_9;
    MR_Word FunctorConsId_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      FunctorConsId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 0))));
      ArgInsts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_6, FunctorConsId_8);
      if (succeeded)
      {
        *ArgInsts_7 = ArgInsts0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundInsts_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5));
    parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    if ((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word SubInsts_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
          MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0))));

          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
  MR_Word InstName_2)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s env;

    (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = InstName_2;
    while (MR_TRUE)
    {
      // setup for model_semi tailcalls optimized into a loop
      ;
      switch (MR_tag((MR_Word) (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) {
        default:
          (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&env);
          break;
        case (MR_Integer) 1:
          {
            MR_Word SubInstA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
            MR_Word SubInstB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))));
            MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

            (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstA_8);
            if (!((env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstB_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubInstA_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0))));
            MR_Word SubInstB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));

            (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstA_20);
            if (!((env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstB_21);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0))))) {
            default:
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word SubInstName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
                MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
                MR_Word next_value_of_InstName_2 = SubInstName_10;

                // direct tailcall eliminated
                ;
                (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubInstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
                MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
                MR_Word next_value_of_InstName_2 = SubInstName_22;

                // direct tailcall eliminated
                ;
                (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubInstName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
                MR_Word next_value_of_InstName_2 = SubInstName_23;

                // direct tailcall eliminated
                ;
                (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubInstName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
                MR_Word next_value_of_InstName_2 = SubInstName_24;

                // direct tailcall eliminated
                ;
                (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
                continue;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2))));
                MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1))));
                MR_Word next_value_of_InstName_2 = SubInstName_25;

                // direct tailcall eliminated
                ;
                (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
                continue;
              }
              break;
          }
          break;
      }
      return (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
      break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_Integer) 0))
    {
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0))));

      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = Var_78;
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(env_ptr);
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = Var_77;
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(env_ptr);
    }
    else
    {
      MR_Word SubInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1))));
      MR_Word _SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0))));

      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13, SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word TypeCtorInfo_41_41;
          MR_Word GroundInstInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1))));
          MR_Word PredInstInfo_7;
          MR_Word Modes_9;
          MR_Word _Uniq_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
          MR_Word _PredOrFunc_8;
          MR_Word _MaybeArgRegs_10;
          MR_Word _Detism_11;
          MR_Unsigned packed_word_1;
          MR_Unsigned packed_word_2;

          (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = (GroundInstInfo_6 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            PredInstInfo_7 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_6), (MR_Integer) 1));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 0)));
            _PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 1))));
            _MaybeArgRegs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 2))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 3)));
            _Detism_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_7, (MR_Integer) 3))) & (MR_Integer) 7);
            TypeCtorInfo_41_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            mercury__list__member_2_p_1(TypeCtorInfo_41_41, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12, Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7, env_ptr);
          }
        }
        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30);
    if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _ConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 0))));

      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 1))));
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      mercury__list__member_2_p_1((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
      {
        {
          MR_Word TypeCtorInfo_44_44;
          MR_Word InstResults_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2))));
          MR_Word BoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3))));
          MR_Word _Uniq_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1))) & (MR_Integer) 7);
          MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

          if ((InstResults_18 == (MR_Word) ((MR_Unsigned) 0U)))
            (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) InstResults_18)) == (MR_Integer) 1))
          {
            MR_Word InstVarsResult_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 2))));
            MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
            MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 1))));
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 3))));
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 4))));
            MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_18, (MR_Integer) 0)));

            if ((InstVarsResult_23 == (MR_Word) ((MR_Unsigned) 0U)))
              (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
            else
            {
              MR_Word InstVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_23, (MR_Integer) 0))));

              (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InstVars_26);
            }
          }
          else
            (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
          if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            TypeCtorInfo_44_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
            mercury__list__member_2_p_1(TypeCtorInfo_44_44, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27, BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, env_ptr);
          }
        }
        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70);
    if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69)) == (MR_Integer) 0))
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0))));

      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = Var_80;
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(env_ptr);
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = Var_79;
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(env_ptr);
    }
    else
    {
      MR_Word SubInsts_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1))));
      MR_Word _SymName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0))));

      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70, SubInsts_56, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
      {
        {
          MR_Word TypeCtorInfo_41_75;
          MR_Word GroundInstInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2))));
          MR_Word PredInstInfo_64;
          MR_Word Modes_66;
          MR_Word _Uniq_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1))) & (MR_Integer) 7);
          MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
          MR_Word _PredOrFunc_47;
          MR_Word _MaybeArgRegs_48;
          MR_Word _Detism_49;
          MR_Unsigned packed_word_6;
          MR_Unsigned packed_word_7;

          (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = (GroundInstInfo_63 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            PredInstInfo_64 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_63), (MR_Integer) 1));
            packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 0)));
            _PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 1))));
            _MaybeArgRegs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 2))));
            packed_word_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 3)));
            _Detism_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_64, (MR_Integer) 3))) & (MR_Integer) 7);
            TypeCtorInfo_41_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            mercury__list__member_2_p_1(TypeCtorInfo_41_75, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69, Modes_66, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, env_ptr);
          }
        }
        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40));
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40);
    if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ArgInsts_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2))));
          MR_Word _SymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1))));

          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40, ArgInsts_39, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
  MR_Word Inst_2)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s env;

    (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = Inst_2;
    switch (MR_tag((MR_Word) (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) {
      default:
        (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&env);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0))))) {
          default:
            (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&env);
            break;
          case (MR_Integer) 1:
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&env);
            break;
          case (MR_Integer) 2:
            (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1))));

              (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(InstName_31);
            }
            break;
          case (MR_Integer) 5:
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(&env);
            break;
        }
        break;
    }
    return (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_6;

    parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
  }
}

void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(
  MR_Word VarSet_6,
  MR_Word NewVarSet_7,
  MR_Word * MergedVarSet_8,
  MR_Word Modes0_9,
  MR_Word * Modes_10)
{
  {
    MR_Word Renaming_11;
    MR_Word Var_12;

    mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_6, NewVarSet_7, MergedVarSet_8, &Renaming_11);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Renaming_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_12, Modes0_9, Modes_10);
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word Insts0_5,
  MR_Word * Insts_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4);
    if (succeeded)
      *Insts_6 = Insts0_5;
    else
      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_4, Insts0_5, Insts_6);
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(
  MR_Word Params_5,
  MR_Word Args_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  if ((Params_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *Inst_8 = Inst0_7;
  else
  {
    MR_Word Subst_11;

    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Params_5, Args_6, &Subst_11);
    parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_11, Inst0_7, Inst_8);
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(
  MR_Word Mode0_5,
  MR_Word Params_6,
  MR_Word Args_7,
  MR_Word * Mode_8)
{
  if ((Params_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *Mode_8 = Mode0_5;
  else
  {
    MR_Word Subst_11;

    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Params_6, Args_7, &Subst_11);
    if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
    {
      MR_Word I0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 0))));
      MR_Word F0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_5, (MR_Integer) 1))));
      MR_Word I_19;
      MR_Word F_20;

      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_11, I0_17, &I_19);
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_11, F0_18, &F_20);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Mode_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (I_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (F_20));
      }
    }
    else
    {
      MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 0))));
      MR_Word Args0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_5, (MR_Integer) 1))));
      MR_Word Args_23;

      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_11, Args0_22, &Args_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Mode_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_23));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word Modes0_5,
  MR_Word * Modes_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4);
    if (succeeded)
      *Modes_6 = Modes0_5;
    else
      parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(Subst_4, Modes0_5, Modes_6);
  }
}

static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mode0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mode_8;
    MR_Word Modes_9;

    if (((MR_tag((MR_Word) Mode0_6)) == (MR_Integer) 0))
    {
      MR_Word I0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_6, (MR_Integer) 0))));
      MR_Word F0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_6, (MR_Integer) 1))));
      MR_Word I_15;
      MR_Word F_16;

      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, I0_13, &I_15);
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, F0_14, &F_16);
      {
        Mode_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mode_8, 0) = ((MR_Box) (I_15));
        MR_hl_field(MR_mktag(0), Mode_8, 1) = ((MR_Box) (F_16));
      }
    }
    else
    {
      MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_6, (MR_Integer) 0))));
      MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_6, (MR_Integer) 1))));
      MR_Word Args_19;

      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Args0_18, &Args_19);
      {
        Mode_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Mode_8, 0) = ((MR_Box) (Name_17));
        MR_hl_field(MR_mktag(1), Mode_8, 1) = ((MR_Box) (Args_19));
      }
    }
    parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(Subst_1, Modes0_7, &Modes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundInst0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BoundInsts0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word BoundInst_8;
    MR_Word BoundInsts_9;
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_6, (MR_Integer) 0))));
    MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_6, (MR_Integer) 1))));
    MR_Word Args_12;

    parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Args0_11, &Args_12);
    {
      BoundInst_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_8, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), BoundInst_8, 1) = ((MR_Box) (Args_12));
    }
    parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(Subst_1, BoundInsts0_7, &BoundInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_9));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstName0_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Name_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_5, (MR_Integer) 0))));
          MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_5, (MR_Integer) 1))));
          MR_Word ArgInsts_9;

          parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_4, ArgInsts0_8, &ArgInsts_9);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *InstName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_9));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            {
              *InstName_6 = InstName0_5;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 1))));
              MR_Word SubInst0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_5, (MR_Integer) 2))));
              MR_Word SubInst_12;

              succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(Subst_4, SubInst0_11, &SubInst_12);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_12));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Inst0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Insts0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_8;
    MR_Word Insts_9;

    parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, Inst0_6, &Inst_8);
    parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Insts0_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 1:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
          MR_Word HOInstInfo_40;

          if ((HOInstInfo0_39 == (MR_Word) ((MR_Unsigned) 0U)))
            HOInstInfo_40 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word PredOrFunc_56;
            MR_Word Modes0_57;
            MR_Word MaybeArgRegs_58;
            MR_Word Det_59;
            MR_Word Modes_60;
            MR_Word Var_61 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_39), (MR_Integer) 1));
            MR_Word Var_62;

            PredOrFunc_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1))));
            MaybeArgRegs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 2))));
            Det_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(Subst_4, Modes0_57, &Modes_60);
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_56));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Modes_60));
              MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MaybeArgRegs_58));
              MR_hl_field(MR_mktag(0), Var_62, 3) = (MR_Box) ((MR_Unsigned) (Det_59));
            }
            HOInstInfo_40 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_62)));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_38));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_40));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Uniq0_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word InstResults0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults0_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BoundInsts_41;

                        parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(Subst_4, BoundInsts0_13, &BoundInsts_41);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq0_11));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_41));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *Inst_6 = Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsResult_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_12, (MR_Integer) 2))));
                    MR_Word TypeInfo_45_45;
                    MR_Word TypeCtorInfo_46_46;
                    MR_Word InstVarsSet_20;
                    MR_Word InstVars_21;

                    succeeded = (InstVarsResult_17 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      InstVarsSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_17, (MR_Integer) 0))));
                      TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                      mercury__set__to_sorted_list_2_p_0(TypeInfo_45_45, InstVarsSet_20, &InstVars_21);
                      TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                      succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeCtorInfo_46_46, InstVars_21, Subst_4);
                    }
                    if (succeeded)
                      *Inst_6 = Inst0_5;
                    else
                    {
                      MR_Word BoundInsts_22;

                      parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(Subst_4, BoundInsts0_13, &BoundInsts_22);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq0_11));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_22));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word HOInstInfo_10;

              if ((HOInstInfo0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                HOInstInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word PredOrFunc_67;
                MR_Word Modes0_68;
                MR_Word MaybeArgRegs_69;
                MR_Word Det_70;
                MR_Word Modes_71;
                MR_Word Var_72 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_9), (MR_Integer) 1));
                MR_Word Var_73;

                PredOrFunc_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
                MaybeArgRegs_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 2))));
                Det_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 3))) & (MR_Integer) 7);
                parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(Subst_4, Modes0_68, &Modes_71);
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_67));
                  MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Modes_71));
                  MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MaybeArgRegs_69));
                  MR_hl_field(MR_mktag(0), Var_73, 3) = (MR_Box) ((MR_Unsigned) (Det_70));
                }
                HOInstInfo_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_73)));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_10));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word ReplacementInst_24;
              MR_Box conv2_ReplacementInst_24;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4, ((MR_Box) (Var_23)), &conv2_ReplacementInst_24);
              if (succeeded)
              {
                ReplacementInst_24 = ((MR_Word) (conv2_ReplacementInst_24));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                *Inst_6 = ReplacementInst_24;
              else
                *Inst_6 = Inst0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word Var_43;
              MR_Word Var0_27;
              MR_Box conv0_Var0_27;
              MR_Word ReplacementInst_42;
              MR_Box conv1_ReplacementInst_42;

              succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Vars_25, &conv0_Var0_27);
              if (succeeded)
              {
                Var0_27 = ((MR_Word) (conv0_Var0_27));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                Var_43 = Var0_27;
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
                  return;
                }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4, ((MR_Box) (Var_43)), &conv1_ReplacementInst_42);
              if (succeeded)
              {
                ReplacementInst_42 = ((MR_Word) (conv1_ReplacementInst_42));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                *Inst_6 = ReplacementInst_42;
              else
              {
                MR_Word SubInst_28;

                parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_4, SubInst0_26, &SubInst_28);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_25));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_28));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word InstName_30;

              succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(Subst_4, InstName0_29, &InstName_30);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_30));
                }
              else
                *Inst_6 = Inst0_5;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word ArgInsts0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word ArgInsts_33;

              parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_4, ArgInsts0_32, &ArgInsts_33);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_31));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgInsts_33));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word InstVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box _ReplacementInst_7;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), TypeInfo_for_T_8, HeadVar__2_2, ((MR_Box) (InstVar_4)), &_ReplacementInst_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = InstVars_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Final_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Finals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mode_18;
      MR_Word Modes_19;

      parse_tree__prog_mode__insts_to_mode_3_p_0(Var_21, Final_16, &Mode_18);
      parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(Var_20, Finals_17, &Modes_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_19));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__insts_to_mode_3_p_0(
  MR_Word FromInst_4,
  MR_Word ToInst_5,
  MR_Word * Mode_6)
{
  {
    MR_bool succeeded;
    MR_String StdMode_7;

    succeeded = parse_tree__prog_mode__from_to_insts_is_standard_mode_3_p_0(FromInst_4, ToInst_5, &StdMode_7);
    if (succeeded)
    {
      MR_Word MercuryBuiltin_31;
      MR_Word QualifiedName_32;

      MercuryBuiltin_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        QualifiedName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualifiedName_32, 0) = ((MR_Box) (MercuryBuiltin_31));
        MR_hl_field(MR_mktag(1), QualifiedName_32, 1) = ((MR_Box) (StdMode_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Mode_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(FromInst_4, ToInst_5);
      if (succeeded)
      {
        MR_Word Var_10;
        MR_Word MercuryBuiltin_38;
        MR_Word QualifiedName_39;

        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (FromInst_4));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MercuryBuiltin_38 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          QualifiedName_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), QualifiedName_39, 0) = ((MR_Box) (MercuryBuiltin_38));
          MR_hl_field(MR_mktag(1), QualifiedName_39, 1) = ((MR_Box) ((MR_String) "in"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Mode_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_10));
        }
      }
      else
      {
        succeeded = (FromInst_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_13;
          MR_Word MercuryBuiltin_45;
          MR_Word QualifiedName_46;

          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (ToInst_5));
            MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MercuryBuiltin_45 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            QualifiedName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), QualifiedName_46, 0) = ((MR_Box) (MercuryBuiltin_45));
            MR_hl_field(MR_mktag(1), QualifiedName_46, 1) = ((MR_Box) ((MR_String) "out"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Mode_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_46));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_13));
          }
        }
        else
        {
          MR_Word Var_15;
          MR_Word Var_16;

          succeeded = ((((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 1))) & (MR_Integer) 7);
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 2))));
            succeeded = (Var_15 == (MR_Integer) 3);
            if (succeeded)
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word Var_18;
            MR_Word MercuryBuiltin_52;
            MR_Word QualifiedName_53;

            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (FromInst_4));
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            MercuryBuiltin_52 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              QualifiedName_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), QualifiedName_53, 0) = ((MR_Box) (MercuryBuiltin_52));
              MR_hl_field(MR_mktag(1), QualifiedName_53, 1) = ((MR_Box) ((MR_String) "di"));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Mode_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_53));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_18));
            }
          }
          else
          {
            MR_Word Var_20;
            MR_Word Var_21;

            succeeded = ((((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 1))) & (MR_Integer) 7);
              Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 2))));
              succeeded = (Var_20 == (MR_Integer) 4);
              if (succeeded)
                succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Var_23;
              MR_Word MercuryBuiltin_59;
              MR_Word QualifiedName_60;

              {
                Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (FromInst_4));
                MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              MercuryBuiltin_59 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              {
                QualifiedName_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), QualifiedName_60, 0) = ((MR_Box) (MercuryBuiltin_59));
                MR_hl_field(MR_mktag(1), QualifiedName_60, 1) = ((MR_Box) ((MR_String) "mdi"));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Mode_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_60));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Mode_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FromInst_4));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ToInst_5));
              }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_mode__from_to_insts_is_standard_mode_3_p_0(
  MR_Word FromInst_4,
  MR_Word ToInst_5,
  MR_String * StdMode_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ToUniq_7;
    MR_Word Var_8;

    if (succeeded)
    {
      ToUniq_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 1))) & (MR_Integer) 7);
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToInst_5, (MR_Integer) 2))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        switch (ToUniq_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              MR_Word Var_15;
              MR_Word Var_16;

              succeeded = ((((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 1))) & (MR_Integer) 7);
                Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 2))));
                succeeded = (Var_15 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *StdMode_6 = (MR_String) "di";
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_11;
              MR_Word Var_12;

              succeeded = ((((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 1))) & (MR_Integer) 7);
                Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 2))));
                succeeded = (Var_11 == (MR_Integer) 2);
                if (succeeded)
                {
                  succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *StdMode_6 = (MR_String) "mdi";
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            if ((FromInst_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *StdMode_6 = (MR_String) "muo";
              succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 2))));

              succeeded = (Var_9 == (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *StdMode_6 = (MR_String) "mui";
                  succeeded = MR_TRUE;
                }
              }
            }
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            if ((FromInst_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *StdMode_6 = (MR_String) "out";
              succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 2))));

              succeeded = (Var_17 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *StdMode_6 = (MR_String) "in";
                  succeeded = MR_TRUE;
                }
              }
            }
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            if ((FromInst_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *StdMode_6 = (MR_String) "uo";
              succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_4, (MR_Integer) 2))));

              succeeded = (Var_13 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *StdMode_6 = (MR_String) "ui";
                  succeeded = MR_TRUE;
                }
              }
            }
            else
              succeeded = MR_FALSE;
            break;
        }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__make_std_mode_2_f_0(
  MR_String Name_4,
  MR_Word Args_5)
{
  {
    MR_Word Mode_6;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) (Name_4));
    }
    {
      Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Mode_6, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), Mode_6, 1) = ((MR_Box) (Args_5));
    }
    return Mode_6;
  }
}

void MR_CALL 
parse_tree__prog_mode__make_std_mode_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MercuryBuiltin_9;
    MR_Word QualifiedName_10;

    MercuryBuiltin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_10, 0) = ((MR_Box) (MercuryBuiltin_9));
      MR_hl_field(MR_mktag(1), QualifiedName_10, 1) = ((MR_Box) (Name_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_5));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[5]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_clobbered_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[5]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__clobbered_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[4]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_unique_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[3]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__unique_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[2]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_11;
    MR_Word QualifiedName_12;

    MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 0) = ((MR_Box) (MercuryBuiltin_11));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_12));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[6])));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_11;
    MR_Word QualifiedName_12;

    MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 0) = ((MR_Box) (MercuryBuiltin_11));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_12));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[6])));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__unused_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__muo_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__mdi_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__uo_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__di_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_1_f_0(
  MR_Word I_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5;
    MR_Word MercuryBuiltin_10;
    MR_Word QualifiedName_11;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (I_3));
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_11, 0) = ((MR_Box) (MercuryBuiltin_10));
      MR_hl_field(MR_mktag(1), QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (QualifiedName_11));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__out_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_1_f_0(
  MR_Word I_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5;
    MR_Word MercuryBuiltin_10;
    MR_Word QualifiedName_11;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (I_3));
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_11, 0) = ((MR_Box) (MercuryBuiltin_10));
      MR_hl_field(MR_mktag(1), QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (QualifiedName_11));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__in_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word MercuryBuiltin_7;
    MR_Word QualifiedName_8;

    MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 0) = ((MR_Box) (MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_mode.
