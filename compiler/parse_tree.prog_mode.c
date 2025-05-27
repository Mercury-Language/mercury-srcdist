/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2025-05-27
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.var_table.mih"



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
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_63;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_Mode_62;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_SubInst_63;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_39_39;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundFunctor_26;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_28;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_29;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_BoundFunctor_26;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_ArgInst_29;
  jmp_buf parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11;
  MR_Word parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_12;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_11;
  MR_Box parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_12;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__693__1_2_f_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_47);

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1370__1_3_p_0(
  MR_Word InstVarSet_9,
  MR_Word HeadVar__2_45,
  MR_String * HeadVar__3_46);

static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__strip_module_names_from_ho_inst_info__1089__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_21);

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
  MR_Word BoundFunctor_6,
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
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0(
  MR_Word TypeAndMode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * STATE_VARIABLE_InconsistentVars_12,
  MR_Word STATE_VARIABLE_Sub_0_13,
  MR_Word * STATE_VARIABLE_Sub_14);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Word STATE_VARIABLE_InconsistentVars_0_32,
  MR_Word * STATE_VARIABLE_InconsistentVars_33,
  MR_Word STATE_VARIABLE_Sub_0_34,
  MR_Word * STATE_VARIABLE_Sub_35);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word BoundFunctor0_5,
  MR_Word * BoundFunctor_6);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0(
  MR_Word BoundFunctor0_3,
  MR_Word * BoundFunctor_4);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word BoundFunctor0_7,
  MR_Word * BoundFunctor_8);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0(
  MR_Word Renaming_4,
  MR_Word BoundFunctor0_5,
  MR_Word * BoundFunctor_6);

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
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0_1(
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
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_5(
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
parse_tree__prog_mode__strip_module_names_from_inst_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word InstName0_7,
  MR_Word * InstName_8);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0_1(
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
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
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
parse_tree__prog_mode__bound_functors_apply_substitution_3_p_0(
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


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[14][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[18][3];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][7];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_6[4][8];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[14][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_1[0]))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 2U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst variable"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst variables"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[1])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_6[4][8] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   3 */
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
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_7[1][9] = {
  /* row   0 */
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
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__693__1_2_f_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_47)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__2_48;
  MR_Word Var_33;
  MR_Box conv0_Var_33;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Renaming_4, ((MR_Box) (LambdaHeadVar__1_47)), &conv0_Var_33);
  if (succeeded)
  {
    Var_33 = ((MR_Word) (conv0_Var_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    LambdaHeadVar__2_48 = Var_33;
  else
    LambdaHeadVar__2_48 = LambdaHeadVar__1_47;
  return LambdaHeadVar__2_48;
}

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1370__1_3_p_0(
  MR_Word InstVarSet_9,
  MR_Word HeadVar__2_45,
  MR_String * HeadVar__3_46)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_9, HeadVar__2_45, HeadVar__3_46);
}

static MR_bool MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__strip_module_names_from_ho_inst_info__1089__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_21)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(HeadVar__1_19, HeadVar__2_21);
  return succeeded;
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

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_33;
  MR_Word conv0_STATE_VARIABLE_Sub_35;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_33, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_35);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_33));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_35));
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(
  MR_Word BoundFunctor_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * STATE_VARIABLE_InconsistentVars_12,
  MR_Word STATE_VARIABLE_Sub_0_13,
  MR_Word * STATE_VARIABLE_Sub_14)
{
  MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_6, 1))));
  MR_Box conv3_STATE_VARIABLE_InconsistentVars_12;
  MR_Box conv2_STATE_VARIABLE_Sub_14;

  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[17]), ArgInsts_10, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_11)), &conv3_STATE_VARIABLE_InconsistentVars_12, ((MR_Box) (STATE_VARIABLE_Sub_0_13)), &conv2_STATE_VARIABLE_Sub_14);
  *STATE_VARIABLE_InconsistentVars_12 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_12));
  *STATE_VARIABLE_Sub_14 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_33;
  MR_Word conv0_STATE_VARIABLE_Sub_35;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_33, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_35);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_33));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_35));
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
    MR_Word InitialInst_9 = ((MR_Word) ((MR_hl_field(0, Mode_6, 0))));
    MR_Word FinalInst_10 = ((MR_Word) ((MR_hl_field(0, Mode_6, 1))));
    MR_Word STATE_VARIABLE_InconsistentVars_1_17;
    MR_Word STATE_VARIABLE_Sub_1_18;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(InitialInst_9, STATE_VARIABLE_InconsistentVars_0_13, &STATE_VARIABLE_InconsistentVars_1_17, STATE_VARIABLE_Sub_0_15, &STATE_VARIABLE_Sub_1_18);
    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(FinalInst_10, STATE_VARIABLE_InconsistentVars_1_17, STATE_VARIABLE_InconsistentVars_14, STATE_VARIABLE_Sub_1_18, STATE_VARIABLE_Sub_16);
  }
  else
  {
    MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(1, Mode_6, 1))));
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_14;
    MR_Box conv2_STATE_VARIABLE_Sub_16;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[16]), ArgInsts_12, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_13)), &conv3_STATE_VARIABLE_InconsistentVars_14, ((MR_Box) (STATE_VARIABLE_Sub_0_15)), &conv2_STATE_VARIABLE_Sub_16);
    *STATE_VARIABLE_InconsistentVars_14 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_14));
    *STATE_VARIABLE_Sub_16 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_16));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_33;
  MR_Word conv0_STATE_VARIABLE_Sub_35;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_33, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_35);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_33));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_35));
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0(
  MR_Word TypeAndMode_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * STATE_VARIABLE_InconsistentVars_12,
  MR_Word STATE_VARIABLE_Sub_0_13,
  MR_Word * STATE_VARIABLE_Sub_14)
{
  MR_Word Mode_10 = ((MR_Word) ((MR_hl_field(0, TypeAndMode_6, 1))));

  if (((MR_tag((MR_Word) Mode_10)) == (MR_Integer) 0))
  {
    MR_Word InitialInst_15 = ((MR_Word) ((MR_hl_field(0, Mode_10, 0))));
    MR_Word FinalInst_16 = ((MR_Word) ((MR_hl_field(0, Mode_10, 1))));
    MR_Word STATE_VARIABLE_InconsistentVars_1_19;
    MR_Word STATE_VARIABLE_Sub_1_20;

    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(InitialInst_15, STATE_VARIABLE_InconsistentVars_0_11, &STATE_VARIABLE_InconsistentVars_1_19, STATE_VARIABLE_Sub_0_13, &STATE_VARIABLE_Sub_1_20);
    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(FinalInst_16, STATE_VARIABLE_InconsistentVars_1_19, STATE_VARIABLE_InconsistentVars_12, STATE_VARIABLE_Sub_1_20, STATE_VARIABLE_Sub_14);
  }
  else
  {
    MR_Word ArgInsts_18 = ((MR_Word) ((MR_hl_field(1, Mode_10, 1))));
    MR_Box conv3_STATE_VARIABLE_InconsistentVars_12;
    MR_Box conv2_STATE_VARIABLE_Sub_14;

    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[15]), ArgInsts_18, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_11)), &conv3_STATE_VARIABLE_InconsistentVars_12, ((MR_Box) (STATE_VARIABLE_Sub_0_13)), &conv2_STATE_VARIABLE_Sub_14);
    *STATE_VARIABLE_InconsistentVars_12 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_12));
    *STATE_VARIABLE_Sub_14 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_STATE_VARIABLE_InconsistentVars_14;
  MR_Word conv20_STATE_VARIABLE_Sub_16;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) (wrapper_arg_4)), &conv20_STATE_VARIABLE_Sub_16);
  *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_InconsistentVars_14));
  *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_Sub_16));
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_InconsistentVars_33;
  MR_Word conv16_STATE_VARIABLE_Sub_35;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_InconsistentVars_33, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_Sub_35);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_InconsistentVars_33));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_Sub_35));
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_InconsistentVars_13;
  MR_Word conv12_STATE_VARIABLE_Sub_15;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_InconsistentVars_13, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_Sub_15);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_InconsistentVars_13));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_Sub_15));
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
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_InconsistentVars_12;
  MR_Word conv8_STATE_VARIABLE_Sub_14;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Sub_14);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_InconsistentVars_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Sub_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_InconsistentVars_12;
  MR_Word conv4_STATE_VARIABLE_Sub_14;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Sub_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_InconsistentVars_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Sub_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_14;
  MR_Word conv0_STATE_VARIABLE_Sub_16;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_16));
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_InconsistentVars_0_32,
  MR_Word * STATE_VARIABLE_InconsistentVars_33,
  MR_Word STATE_VARIABLE_Sub_0_34,
  MR_Word * STATE_VARIABLE_Sub_35)
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
              *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
              *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
              *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_90 = ((MR_Word) ((MR_hl_field(1, Inst_6, 1))));

          if ((HOInstInfo_90 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
            *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
          }
          else
          {
            MR_Word Modes_81;
            MR_Word Var_84 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_90), (MR_Integer) 1));
            MR_Box conv23_STATE_VARIABLE_InconsistentVars_33;
            MR_Box conv22_STATE_VARIABLE_Sub_35;

            Modes_81 = ((MR_Word) ((MR_hl_field(0, Var_84, 1))));
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[14]), Modes_81, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv23_STATE_VARIABLE_InconsistentVars_33, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv22_STATE_VARIABLE_Sub_35);
            *STATE_VARIABLE_InconsistentVars_33 = ((MR_Word) (conv23_STATE_VARIABLE_InconsistentVars_33));
            *STATE_VARIABLE_Sub_35 = ((MR_Word) (conv22_STATE_VARIABLE_Sub_35));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_10 = ((MR_Word) ((MR_hl_field(2, Inst_6, 1))));
          MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(2, Inst_6, 2))));

          switch (MR_tag((MR_Word) InstResults_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Box conv7_STATE_VARIABLE_InconsistentVars_33;
                    MR_Box conv6_STATE_VARIABLE_Sub_35;

                    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[11]), BoundFunctors_11, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv7_STATE_VARIABLE_InconsistentVars_33, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv6_STATE_VARIABLE_Sub_35);
                    *STATE_VARIABLE_InconsistentVars_33 = ((MR_Word) (conv7_STATE_VARIABLE_InconsistentVars_33));
                    *STATE_VARIABLE_Sub_35 = ((MR_Word) (conv6_STATE_VARIABLE_Sub_35));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
                    *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InstVarsResult_15 = ((MR_Word) ((MR_hl_field(1, InstResults_10, 2))));
                MR_Word TypeInfo_52_52;
                MR_Word InstVarsSet_18;

                succeeded = (InstVarsResult_15 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  InstVarsSet_18 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_15, 0))));
                  TypeInfo_52_52 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                  succeeded = mercury__set__is_empty_1_p_0(TypeInfo_52_52, InstVarsSet_18);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
                  *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
                }
                else
                {
                  MR_Box conv11_STATE_VARIABLE_InconsistentVars_33;
                  MR_Box conv10_STATE_VARIABLE_Sub_35;

                  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[12]), BoundFunctors_11, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv11_STATE_VARIABLE_InconsistentVars_33, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv10_STATE_VARIABLE_Sub_35);
                  *STATE_VARIABLE_InconsistentVars_33 = ((MR_Word) (conv11_STATE_VARIABLE_InconsistentVars_33));
                  *STATE_VARIABLE_Sub_35 = ((MR_Word) (conv10_STATE_VARIABLE_Sub_35));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_27 = ((MR_Word) ((MR_hl_field(3, Inst_6, 1))));
              MR_Word ArgInsts_29;

              succeeded = ((MR_tag((MR_Word) InstName_27)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgInsts_29 = ((MR_Word) ((MR_hl_field(0, InstName_27, 1))));
                {
                  MR_Box conv19_STATE_VARIABLE_InconsistentVars_33;
                  MR_Box conv18_STATE_VARIABLE_Sub_35;

                  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[13]), ArgInsts_29, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv19_STATE_VARIABLE_InconsistentVars_33, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv18_STATE_VARIABLE_Sub_35);
                  *STATE_VARIABLE_InconsistentVars_33 = ((MR_Word) (conv19_STATE_VARIABLE_InconsistentVars_33));
                  *STATE_VARIABLE_Sub_35 = ((MR_Word) (conv18_STATE_VARIABLE_Sub_35));
                }
              }
              else
              {
                *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
                *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVars_30 = ((MR_Word) ((MR_hl_field(3, Inst_6, 1))));
              MR_Word SubInst_31 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));
              MR_Word Var_49;
              MR_Word STATE_VARIABLE_InconsistentVars_5_50;
              MR_Word STATE_VARIABLE_Sub_5_51;
              MR_Box conv15_STATE_VARIABLE_InconsistentVars_5_50;
              MR_Box conv14_STATE_VARIABLE_Sub_5_51;
              MR_Word next_value_of_Inst_6;
              MR_Word next_value_of_STATE_VARIABLE_InconsistentVars_0_32;
              MR_Word next_value_of_STATE_VARIABLE_Sub_0_34;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_7[0]));
                MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_4));
                MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_49, 3) = ((MR_Box) (SubInst_31));
              }
              mercury__set__fold2_6_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), Var_49, InstVars_30, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv15_STATE_VARIABLE_InconsistentVars_5_50, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv14_STATE_VARIABLE_Sub_5_51);
              STATE_VARIABLE_InconsistentVars_5_50 = ((MR_Word) (conv15_STATE_VARIABLE_InconsistentVars_5_50));
              STATE_VARIABLE_Sub_5_51 = ((MR_Word) (conv14_STATE_VARIABLE_Sub_5_51));
              // direct tailcall eliminated
              ;
              next_value_of_Inst_6 = SubInst_31;
              next_value_of_STATE_VARIABLE_InconsistentVars_0_32 = STATE_VARIABLE_InconsistentVars_5_50;
              next_value_of_STATE_VARIABLE_Sub_0_34 = STATE_VARIABLE_Sub_5_51;
              Inst_6 = next_value_of_Inst_6;
              STATE_VARIABLE_InconsistentVars_0_32 = next_value_of_STATE_VARIABLE_InconsistentVars_0_32;
              STATE_VARIABLE_Sub_0_34 = next_value_of_STATE_VARIABLE_Sub_0_34;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));

              if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_InconsistentVars_33 = STATE_VARIABLE_InconsistentVars_0_32;
                *STATE_VARIABLE_Sub_35 = STATE_VARIABLE_Sub_0_34;
              }
              else
              {
                MR_Word Modes_23;
                MR_Word Var_42 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_20), (MR_Integer) 1));
                MR_Box conv3_STATE_VARIABLE_InconsistentVars_33;
                MR_Box conv2_STATE_VARIABLE_Sub_35;

                Modes_23 = ((MR_Word) ((MR_hl_field(0, Var_42, 1))));
                mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[10]), Modes_23, ((MR_Box) (STATE_VARIABLE_InconsistentVars_0_32)), &conv3_STATE_VARIABLE_InconsistentVars_33, ((MR_Box) (STATE_VARIABLE_Sub_0_34)), &conv2_STATE_VARIABLE_Sub_35);
                *STATE_VARIABLE_InconsistentVars_33 = ((MR_Word) (conv3_STATE_VARIABLE_InconsistentVars_33));
                *STATE_VARIABLE_Sub_35 = ((MR_Word) (conv2_STATE_VARIABLE_Sub_35));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.gather_inconsistent_constrained_inst_vars_in_inst\'/5", (MR_String) "unconstrained inst_var");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word BoundFunctor0_5,
  MR_Word * BoundFunctor_6)
{
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_5, 0))));
  MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_5, 1))));
  MR_Word ArgInsts_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (InstConstraints_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInsts0_8, &ArgInsts_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctor_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_9));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_4;

  parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0(
  MR_Word BoundFunctor0_3,
  MR_Word * BoundFunctor_4)
{
  MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_3, 0))));
  MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_3, 1))));
  MR_Word Insts_7;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[9]), Insts0_6, &Insts_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctor_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Insts_7));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_8;

  parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_8));
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word BoundFunctor0_7,
  MR_Word * BoundFunctor_8)
{
  MR_Word ConsId0_9 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_7, 0))));
  MR_Word Insts0_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_7, 1))));
  MR_Word ConsId_11;
  MR_Word Insts_12;
  MR_Word Var_13;

  parse_tree__prog_util__strip_module_names_from_cons_id_3_p_0(StripWhat_5, ConsId0_9, &ConsId_11);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (StripWhat_5));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (SetDefaultFunc_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_13, Insts0_10, &Insts_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctor_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Insts_12));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0(
  MR_Word Renaming_4,
  MR_Word BoundFunctor0_5,
  MR_Word * BoundFunctor_6)
{
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_5, 0))));
  MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_5, 1))));
  MR_Word ArgInsts_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInsts0_8, &ArgInsts_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctor_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_9));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
  MR_Word Renaming_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6)
{
  if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
  {
    MR_Word I0_7 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 0))));
    MR_Word F0_8 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 1))));
    MR_Word I_9;
    MR_Word F_10;

    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, I0_7, &I_9);
    parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, F0_8, &F_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (I_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (F_10));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 0))));
    MR_Word Insts0_12 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 1))));
    MR_Word Insts_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Insts0_12, &Insts_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Mode_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv4_Mode_6));
}

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_48;

  conv3_LambdaHeadVar__2_48 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__693__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BoundFunctor_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundFunctor_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_BoundFunctor_6));
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_BoundFunctor_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_bound_functor_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_BoundFunctor_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_BoundFunctor_6));
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
  MR_Word Renaming_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_6 = Inst0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_7 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_8 = ((MR_Word) ((MR_hl_field(1, Inst0_5, 1))));
        MR_Word HOInstInfo_14;

        if ((HOInstInfo0_8 == (MR_Word) ((MR_Unsigned) 0U)))
          HOInstInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word PorF_9;
          MR_Word Modes0_10;
          MR_Word MaybeArgRegs_11;
          MR_Word Det_12;
          MR_Word Modes_13;
          MR_Word Var_37 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_8), (MR_Integer) 1));
          MR_Word Var_38;
          MR_Word Var_39;

          PorF_9 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, 0))) & (MR_Integer) 1);
          Modes0_10 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
          MaybeArgRegs_11 = ((MR_Word) ((MR_hl_field(0, Var_37, 2))));
          Det_12 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, 3))) & (MR_Integer) 7);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
            MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_38, 3) = ((MR_Box) (Renaming_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_38, Modes0_10, &Modes_13);
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_39, 0) = (MR_Box) ((MR_Unsigned) (PorF_9));
            MR_hl_field(0, Var_39, 1) = ((MR_Box) (Modes_13));
            MR_hl_field(0, Var_39, 2) = ((MR_Box) (MaybeArgRegs_11));
            MR_hl_field(0, Var_39, 3) = (MR_Box) ((MR_Unsigned) (Det_12));
          }
          HOInstInfo_14 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_39)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_15 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, 0))) & (MR_Integer) 7);
        MR_Word InstResults0_16 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 1))));
        MR_Word BoundFunctors0_17 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 2))));

        switch (MR_tag((MR_Word) InstResults0_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstResults0_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_45;
                  MR_Word BoundFunctors_67;

                  {
                    Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                    MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
                    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Renaming_4));
                  }
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_45, BoundFunctors0_17, &BoundFunctors_67);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_6 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq0_15));
                    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_67));
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
              MR_Word InstVarsResult_21 = ((MR_Word) ((MR_hl_field(1, InstResults0_16, 2))));
              MR_Word TypeInfo_75_75;
              MR_Word InstVarsSet_24;
              MR_Word InstVars_25;

              succeeded = (InstVarsResult_21 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InstVarsSet_24 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_21, 0))));
                TypeInfo_75_75 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                mercury__set__to_sorted_list_2_p_0(TypeInfo_75_75, InstVarsSet_24, &InstVars_25);
                succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeInfo_75_75, InstVars_25, Renaming_4);
              }
              if (succeeded)
                *Inst_6 = Inst0_5;
              else
              {
                MR_Word BoundFunctors_26;
                MR_Word Var_43;

                {
                  Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                  MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
                  MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_43, 3) = ((MR_Box) (Renaming_4));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_43, BoundFunctors0_17, &BoundFunctors_26);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq0_15));
                  MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_26));
                }
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name0_35 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word Name1_36;

            succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(Renaming_4, Name0_35, &Name1_36);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Name1_36));
              }
            else
              *Inst_6 = Inst0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars0_29 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word SubInst_31;
            MR_Word MaybeReplaceFunc_32;
            MR_Word Vars_34;

            parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(Renaming_4, SubInst0_30, &SubInst_31);
            {
              MaybeReplaceFunc_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeReplaceFunc_32, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
              MR_hl_field(0, MaybeReplaceFunc_32, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
              MR_hl_field(0, MaybeReplaceFunc_32, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, MaybeReplaceFunc_32, 3) = ((MR_Box) (Renaming_4));
            }
            Vars_34 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), MaybeReplaceFunc_32, Vars0_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_34));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_31));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_59 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_60 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word HOInstInfo_66;

            if ((HOInstInfo0_60 == (MR_Word) ((MR_Unsigned) 0U)))
              HOInstInfo_66 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_40 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_60), (MR_Integer) 1));
              MR_Word Var_41;
              MR_Word Var_42;
              MR_Word PorF_49 = ((MR_Unsigned) ((MR_hl_field(0, Var_40, 0))) & (MR_Integer) 1);
              MR_Word Modes0_50 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
              MR_Word MaybeArgRegs_51 = ((MR_Word) ((MR_hl_field(0, Var_40, 2))));
              MR_Word Det_52 = ((MR_Unsigned) ((MR_hl_field(0, Var_40, 3))) & (MR_Integer) 7);
              MR_Word Modes_53;

              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
                MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_41, 3) = ((MR_Box) (Renaming_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_41, Modes0_50, &Modes_53);
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = (MR_Box) ((MR_Unsigned) (PorF_49));
                MR_hl_field(0, Var_42, 1) = ((MR_Box) (Modes_53));
                MR_hl_field(0, Var_42, 2) = ((MR_Box) (MaybeArgRegs_51));
                MR_hl_field(0, Var_42, 3) = (MR_Box) ((MR_Unsigned) (Det_52));
              }
              HOInstInfo_66 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_42)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_59));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_66));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var0_27 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word Var1_28;
            MR_Box conv5_Var1_28;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Renaming_4, ((MR_Box) (Var0_27)), &conv5_Var1_28);
            if (succeeded)
            {
              Var1_28 = ((MR_Word) (conv5_Var1_28));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var1_28));
              }
            else
              *Inst_6 = Inst0_5;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
  MR_Word Renaming_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName0_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Sym_7 = ((MR_Word) ((MR_hl_field(0, InstName0_5, 0))));
        MR_Word Insts0_8 = ((MR_Word) ((MR_hl_field(0, InstName0_5, 1))));
        MR_Word Insts_9;
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_15, Insts0_8, &Insts_9);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *InstName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Sym_7));
          MR_hl_field(0, base, 1) = ((MR_Box) (Insts_9));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName0_5, 0))))) {
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
            MR_Word Type_10 = ((MR_Word) ((MR_hl_field(3, InstName0_5, 1))));
            MR_Word Name0_11 = ((MR_Word) ((MR_hl_field(3, InstName0_5, 2))));
            MR_Word Name_12;

            succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(Renaming_4, Name0_11, &Name_12);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_10));
                MR_hl_field(3, base, 2) = ((MR_Box) (Name_12));
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

static void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_46;

  parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1370__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_46);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_46));
}

void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0(
  MR_String WhereDesc_7,
  MR_Word Context_8,
  MR_Word InstVarSet_9,
  MR_Word HeadInstVar_10,
  MR_Word TailInstVars_11,
  MR_Word * Spec_12)
{
  MR_Word VarsPieces_14;
  MR_Word Pieces_18;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;

  if ((TailInstVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String HeadInstVarName_13;
    MR_Word Var_21;
    MR_Word Var_22;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_9, HeadInstVar_10, &HeadInstVarName_13);
    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (HeadInstVarName_13));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      VarsPieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarsPieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_1[7])));
      MR_hl_field(1, VarsPieces_14, 1) = ((MR_Box) (Var_21));
    }
  }
  else
  {
    MR_Word InstVarNames_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (InstVarSet_9));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (HeadInstVar_10));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (TailInstVars_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, Var_25, &InstVarNames_17);
    Var_28 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", InstVarNames_17);
    {
      VarsPieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarsPieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_1[8])));
      MR_hl_field(1, VarsPieces_14, 1) = ((MR_Box) (Var_28));
    }
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_1[9])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (VarsPieces_14));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (WhereDesc_7));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[12])));
  }
  Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_mode.report_inconsistent_constrained_inst_vars\'/6"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_18));
  }
}

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_12;
  MR_Word conv0_STATE_VARIABLE_Sub_14;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_tm_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_14));
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0(
  MR_Word TypeAndModes_3,
  MR_Word * InconsistentVars_4)
{
  MR_Word InconsistentVarsSet_5;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv3_InconsistentVarsSet_5;
  MR_Box conv2_Var_6;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]));
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[8]), TypeAndModes_3, ((MR_Box) (Var_8)), &conv3_InconsistentVarsSet_5, ((MR_Box) (Var_9)), &conv2_Var_6);
  InconsistentVarsSet_5 = ((MR_Word) (conv3_InconsistentVarsSet_5));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InconsistentVarsSet_5, InconsistentVars_4);
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InconsistentVars_14;
  MR_Word conv0_STATE_VARIABLE_Sub_16;

  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Sub_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InconsistentVars_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Sub_16));
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(
  MR_Word Modes_3,
  MR_Word * InconsistentVars_4)
{
  MR_Word InconsistentVarsSet_5;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv3_InconsistentVarsSet_5;
  MR_Box conv2_Var_6;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]));
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[7]), Modes_3, ((MR_Box) (Var_8)), &conv3_InconsistentVarsSet_5, ((MR_Box) (Var_9)), &conv2_Var_6);
  InconsistentVarsSet_5 = ((MR_Word) (conv3_InconsistentVarsSet_5));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InconsistentVarsSet_5, InconsistentVars_4);
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
  MR_Word Mode0_3,
  MR_Word * Mode_4)
{
  MR_Word Var_5;

  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(Var_5, Mode0_3, Mode_4);
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6)
{
  if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
  {
    MR_Word I0_7 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 0))));
    MR_Word F0_8 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 1))));
    MR_Word I_9;
    MR_Word F_10;

    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, I0_7, &I_9);
    parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, F0_8, &F_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (I_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (F_10));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 0))));
    MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 1))));
    MR_Word Args_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (InstConstraints_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Args0_12, &Args_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Mode_6;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv4_Mode_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Inst_6;

  parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_Inst_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BoundFunctor_6;

  parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundFunctor_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_BoundFunctor_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_BoundFunctor_6;

  parse_tree__prog_mode__constrain_inst_vars_in_bound_functor_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_BoundFunctor_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_BoundFunctor_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_6;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
  MR_Word InstConstraints_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
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
      {
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Inst0_5, 1))));
        MR_Word Var_69 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, 0))) & (MR_Integer) 7);

        if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
          *Inst_6 = Inst0_5;
        else
        {
          MR_Word PredInstInfo0_9 = (MR_Word) (MR_body((MR_Word) (Var_68), (MR_Integer) 1));
          MR_Word PredInstInfo_10;
          MR_Word Var_36;
          MR_Word PredOrFunc_82 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_9, 0))) & (MR_Integer) 1);
          MR_Word Modes0_83 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_9, 1))));
          MR_Word MaybeArgRegs_84 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_9, 2))));
          MR_Word Det_85 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_9, 3))) & (MR_Integer) 7);
          MR_Word Modes_86;
          MR_Word Var_87;

          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_87, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
            MR_hl_field(0, Var_87, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_5));
            MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_87, 3) = ((MR_Box) (InstConstraints_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_87, Modes0_83, &Modes_86);
          {
            PredInstInfo_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredInstInfo_10, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_82));
            MR_hl_field(0, PredInstInfo_10, 1) = ((MR_Box) (Modes_86));
            MR_hl_field(0, PredInstInfo_10, 2) = ((MR_Box) (MaybeArgRegs_84));
            MR_hl_field(0, PredInstInfo_10, 3) = (MR_Box) ((MR_Unsigned) (Det_85));
          }
          Var_36 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_10)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Var_69));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_36));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_11 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 1))));
        MR_Word BoundFunctors0_12 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 2))));
        MR_Word Uniq_52 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, 0))) & (MR_Integer) 7);

        switch (MR_tag((MR_Word) InstResults0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstResults0_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_41;
                  MR_Word BoundFunctors_51;

                  {
                    Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
                    MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
                    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_41, 3) = ((MR_Box) (InstConstraints_4));
                  }
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_41, BoundFunctors0_12, &BoundFunctors_51);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_6 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_52));
                    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_51));
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
              MR_Word InstVarsResult_16 = ((MR_Word) ((MR_hl_field(1, InstResults0_11, 2))));
              MR_Word TypeInfo_54_54;
              MR_Word TypeCtorInfo_55_55;
              MR_Word InstVarsSet_19;
              MR_Word InstVars_20;

              succeeded = (InstVarsResult_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InstVarsSet_19 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_16, 0))));
                TypeInfo_54_54 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                mercury__set__to_sorted_list_2_p_0(TypeInfo_54_54, InstVarsSet_19, &InstVars_20);
                TypeCtorInfo_55_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeCtorInfo_55_55, InstVars_20, InstConstraints_4);
              }
              if (succeeded)
                *Inst_6 = Inst0_5;
              else
              {
                MR_Word BoundFunctors_21;
                MR_Word Var_39;

                {
                  Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
                  MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3));
                  MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_39, 3) = ((MR_Box) (InstConstraints_4));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_39, BoundFunctors0_12, &BoundFunctors_21);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_52));
                  MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_21));
                }
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name0_31 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word Name_32;
            MR_Word SymName_77;
            MR_Word Args0_78;

            succeeded = ((MR_tag((MR_Word) Name0_31)) == (MR_Integer) 0);
            if (succeeded)
            {
              SymName_77 = ((MR_Word) ((MR_hl_field(0, Name0_31, 0))));
              Args0_78 = ((MR_Word) ((MR_hl_field(0, Name0_31, 1))));
              {
                MR_Word Args_79;
                MR_Word Var_80;

                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
                  MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4));
                  MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_80, 3) = ((MR_Box) (InstConstraints_4));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_80, Args0_78, &Args_79);
                {
                  Name_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Name_32, 0) = ((MR_Box) (SymName_77));
                  MR_hl_field(0, Name_32, 1) = ((MR_Box) (Args_79));
                }
              }
            }
            else
              Name_32 = Name0_31;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Name_32));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars0_22 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word SubInst0_23 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word SubInst1_24;
            MR_Word Vars_27;
            MR_Word SubInst_28;
            MR_Word SubVars_25;
            MR_Word SubSubInst_26;

            parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(InstConstraints_4, SubInst0_23, &SubInst1_24);
            succeeded = ((((MR_tag((MR_Word) SubInst1_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubInst1_24, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              SubVars_25 = ((MR_Word) ((MR_hl_field(3, SubInst1_24, 1))));
              SubSubInst_26 = ((MR_Word) ((MR_hl_field(3, SubInst1_24, 2))));
              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Vars0_22, SubVars_25, &Vars_27);
              SubInst_28 = SubSubInst_26;
            }
            else
            {
              Vars_27 = Vars0_22;
              SubInst_28 = SubInst1_24;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_27));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_28));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, 1))) & (MR_Integer) 7);

            if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
              *Inst_6 = Inst0_5;
            else
            {
              MR_Word Var_38;
              MR_Word PredInstInfo0_49 = (MR_Word) (MR_body((MR_Word) (Var_66), (MR_Integer) 1));
              MR_Word PredInstInfo_50;
              MR_Word PredOrFunc_70 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_49, 0))) & (MR_Integer) 1);
              MR_Word Modes0_71 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_49, 1))));
              MR_Word MaybeArgRegs_72 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_49, 2))));
              MR_Word Det_73 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_49, 3))) & (MR_Integer) 7);
              MR_Word Modes_74;
              MR_Word Var_75;

              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_75, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
                MR_hl_field(0, Var_75, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_75, 3) = ((MR_Box) (InstConstraints_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_75, Modes0_71, &Modes_74);
              {
                PredInstInfo_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredInstInfo_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_70));
                MR_hl_field(0, PredInstInfo_50, 1) = ((MR_Box) (Modes_74));
                MR_hl_field(0, PredInstInfo_50, 2) = ((MR_Box) (MaybeArgRegs_72));
                MR_hl_field(0, PredInstInfo_50, 3) = (MR_Box) ((MR_Unsigned) (Det_73));
              }
              Var_38 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_50)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Var_67));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_38));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word Var_45;
            MR_Word SubInst_53;
            MR_Word SubInstPrime_30;
            MR_Box conv5_SubInstPrime_30;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstConstraints_4, ((MR_Box) (Var_29)), &conv5_SubInstPrime_30);
            if (succeeded)
            {
              SubInstPrime_30 = ((MR_Word) (conv5_SubInstPrime_30));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              SubInst_53 = SubInstPrime_30;
            else
              SubInst_53 = (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[2]));
            Var_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), ((MR_Box) (Var_29)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_53));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_4;

  parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_list_2_p_0(
  MR_Word Insts0_3,
  MR_Word * Insts_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[6]), Insts0_3, Insts_4);
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_4;

  parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(
  MR_Word Mode0_3,
  MR_Word * Mode_4)
{
  if (((MR_tag((MR_Word) Mode0_3)) == (MR_Integer) 0))
  {
    MR_Word Initial0_5 = ((MR_Word) ((MR_hl_field(0, Mode0_3, 0))));
    MR_Word Final0_6 = ((MR_Word) ((MR_hl_field(0, Mode0_3, 1))));
    MR_Word Initial_7;
    MR_Word Final_8;

    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(Initial0_5, &Initial_7);
    parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(Final0_6, &Final_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Initial_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Final_8));
    }
  }
  else
  {
    MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Mode0_3, 0))));
    MR_Word Insts0_10 = ((MR_Word) ((MR_hl_field(1, Mode0_3, 1))));
    MR_Word Insts_11;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[5]), Insts0_10, &Insts_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_4;

  parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Inst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_4));
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
          MR_Word SymName0_5 = ((MR_Word) ((MR_hl_field(0, InstName0_3, 0))));
          MR_Word Insts0_6 = ((MR_Word) ((MR_hl_field(0, InstName0_3, 1))));
          MR_Word SymName_7;
          MR_Word Insts_8;

          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(SymName0_5, &SymName_7);
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[4]), Insts0_6, &Insts_8);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *InstName_4 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (SymName_7));
            MR_hl_field(0, base, 1) = ((MR_Box) (Insts_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA0_11 = ((MR_Word) ((MR_hl_field(1, InstName0_3, 1))));
          MR_Word InstB0_12 = ((MR_Word) ((MR_hl_field(1, InstName0_3, 2))));
          MR_Word InstA_13;
          MR_Word InstB_14;
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, InstName0_3, 0)));

          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstA0_11, &InstA_13);
          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstB0_12, &InstB_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *InstName_4 = base;
            MR_hl_field(1, base, 0) = (MR_Box) (packed_word_2);
            MR_hl_field(1, base, 1) = ((MR_Box) (InstA_13));
            MR_hl_field(1, base, 2) = ((MR_Box) (InstB_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA0_20 = ((MR_Word) ((MR_hl_field(2, InstName0_3, 0))));
          MR_Word InstB0_21 = ((MR_Word) ((MR_hl_field(2, InstName0_3, 1))));
          MR_Word InstA_22;
          MR_Word InstB_23;

          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstA0_20, &InstA_22);
          parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(InstB0_21, &InstB_23);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *InstName_4 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (InstA_22));
            MR_hl_field(2, base, 1) = ((MR_Box) (InstB_23));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName0_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName0_15 = ((MR_Word) ((MR_hl_field(3, InstName0_3, 1))));
              MR_Word SubInstName_17;
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, InstName0_3, 2)));

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_15, &SubInstName_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_17));
                MR_hl_field(3, base, 2) = (MR_Box) (packed_word_1);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName0_28 = ((MR_Word) ((MR_hl_field(3, InstName0_3, 1))));
              MR_Word SubInstName_30;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName0_3, 2)));

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_28, &SubInstName_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_30));
                MR_hl_field(3, base, 2) = (MR_Box) (packed_word_0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName0_31 = ((MR_Word) ((MR_hl_field(3, InstName0_3, 1))));
              MR_Word SubInstName_32;

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_31, &SubInstName_32);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_32));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName0_33 = ((MR_Word) ((MR_hl_field(3, InstName0_3, 1))));
              MR_Word SubInstName_34;

              parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(SubInstName0_33, &SubInstName_34);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstName_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_34));
              }
            }
            break;
          case (MR_Integer) 4:
            *InstName_4 = InstName0_3;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName0_36 = ((MR_Word) ((MR_hl_field(3, InstName0_3, 2))));
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
parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctor_4;

  parse_tree__prog_mode__strip_typed_insts_from_bound_functor_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_BoundFunctor_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctor_4));
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
      {
        MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_3, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_18 = ((MR_Word) ((MR_hl_field(1, Inst0_3, 1))));
        MR_Word HOInstInfo_19;

        if ((HOInstInfo0_18 == (MR_Word) ((MR_Unsigned) 0U)))
          HOInstInfo_19 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Pred0_30 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_18), (MR_Integer) 1));
          MR_Word PorF_31 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_30, 0))) & (MR_Integer) 1);
          MR_Word Modes0_32 = ((MR_Word) ((MR_hl_field(0, Pred0_30, 1))));
          MR_Word ArgRegs_33 = ((MR_Word) ((MR_hl_field(0, Pred0_30, 2))));
          MR_Word Det_34 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_30, 3))) & (MR_Integer) 7);
          MR_Word Modes_35;
          MR_Word Pred_36;

          parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(Modes0_32, &Modes_35);
          {
            Pred_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Pred_36, 0) = (MR_Box) ((MR_Unsigned) (PorF_31));
            MR_hl_field(0, Pred_36, 1) = ((MR_Box) (Modes_35));
            MR_hl_field(0, Pred_36, 2) = ((MR_Box) (ArgRegs_33));
            MR_hl_field(0, Pred_36, 3) = (MR_Box) ((MR_Unsigned) (Det_34));
          }
          HOInstInfo_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Pred_36)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_4 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_19));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(2, Inst0_3, 1))));
        MR_Word BoundFunctors0_13 = ((MR_Word) ((MR_hl_field(2, Inst0_3, 2))));
        MR_Word BoundFunctors_14;
        MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_3, 0))) & (MR_Integer) 7);

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[3]), BoundFunctors0_13, &BoundFunctors_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_4 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_20));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_12));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_14));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_15 = ((MR_Word) ((MR_hl_field(3, Inst0_3, 1))));
            MR_Word InstName_16;

            parse_tree__prog_mode__strip_typed_insts_from_inst_name_2_p_0(InstName0_15, &InstName_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_16));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(3, Inst0_3, 1))));
            MR_Word SubInst0_7 = ((MR_Word) ((MR_hl_field(3, Inst0_3, 2))));
            MR_Word SubInst_8;

            parse_tree__prog_mode__strip_typed_insts_from_inst_2_p_0(SubInst0_7, &SubInst_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_6));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_8));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_3, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_10 = ((MR_Word) ((MR_hl_field(3, Inst0_3, 2))));
            MR_Word HOInstInfo_11;

            if ((HOInstInfo0_10 == (MR_Word) ((MR_Unsigned) 0U)))
              HOInstInfo_11 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Pred0_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_10), (MR_Integer) 1));
              MR_Word PorF_22 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_21, 0))) & (MR_Integer) 1);
              MR_Word Modes0_23 = ((MR_Word) ((MR_hl_field(0, Pred0_21, 1))));
              MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(0, Pred0_21, 2))));
              MR_Word Det_25 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_21, 3))) & (MR_Integer) 7);
              MR_Word Modes_26;
              MR_Word Pred_27;

              parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(Modes0_23, &Modes_26);
              {
                Pred_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Pred_27, 0) = (MR_Box) ((MR_Unsigned) (PorF_22));
                MR_hl_field(0, Pred_27, 1) = ((MR_Box) (Modes_26));
                MR_hl_field(0, Pred_27, 2) = ((MR_Box) (ArgRegs_24));
                MR_hl_field(0, Pred_27, 3) = (MR_Box) ((MR_Unsigned) (Det_25));
              }
              HOInstInfo_11 = (MR_Word) (MR_mkword(1, (MR_Word) (Pred_27)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_4 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_9));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_11));
            }
          }
          break;
        case (MR_Integer) 3:
          *Inst_4 = Inst0_3;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_4;

  parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Mode_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
}

void MR_CALL 
parse_tree__prog_mode__strip_typed_insts_from_mode_list_2_p_0(
  MR_Word Modes0_3,
  MR_Word * Modes_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_mode_scalar_common_2[2]), Modes0_3, Modes_4);
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_8;

  parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_8));
}

void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_list_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Insts0_7,
  MR_Word * Insts_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_inst_list_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (StripWhat_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (SetDefaultFunc_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_9, Insts0_7, Insts_8);
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_8;

  parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_8));
}

void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Mode0_7,
  MR_Word * Mode_8)
{
  if (((MR_tag((MR_Word) Mode0_7)) == (MR_Integer) 0))
  {
    MR_Word Initial0_9 = ((MR_Word) ((MR_hl_field(0, Mode0_7, 0))));
    MR_Word Final0_10 = ((MR_Word) ((MR_hl_field(0, Mode0_7, 1))));
    MR_Word Initial_11;
    MR_Word Final_12;

    parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, Initial0_9, &Initial_11);
    parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, Final0_10, &Final_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Initial_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (Final_12));
    }
  }
  else
  {
    MR_Word SymName0_13 = ((MR_Word) ((MR_hl_field(1, Mode0_7, 0))));
    MR_Word Insts0_14 = ((MR_Word) ((MR_hl_field(1, Mode0_7, 1))));
    MR_Word SymName_15;
    MR_Word Insts_16;
    MR_Word Var_17;

    parse_tree__prog_util__strip_module_names_from_sym_name_3_p_0(StripWhat_5, SymName0_13, &SymName_15);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_mode_4_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (StripWhat_5));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (SetDefaultFunc_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_17, Insts0_14, &Insts_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_16));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_8;

  parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_8));
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word InstName0_7,
  MR_Word * InstName_8)
{
  switch (MR_tag((MR_Word) InstName0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName0_9 = ((MR_Word) ((MR_hl_field(0, InstName0_7, 0))));
        MR_Word Insts0_10 = ((MR_Word) ((MR_hl_field(0, InstName0_7, 1))));
        MR_Word SymName_11;
        MR_Word Insts_12;
        MR_Word Var_42;

        parse_tree__prog_util__strip_module_names_from_sym_name_3_p_0(StripWhat_5, SymName0_9, &SymName_11);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0_1));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (StripWhat_5));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) (SetDefaultFunc_6));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_42, Insts0_10, &Insts_12);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *InstName_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(0, base, 1) = ((MR_Box) (Insts_12));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstA0_15 = ((MR_Word) ((MR_hl_field(1, InstName0_7, 1))));
        MR_Word InstB0_16 = ((MR_Word) ((MR_hl_field(1, InstName0_7, 2))));
        MR_Word InstA_17;
        MR_Word InstB_18;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, InstName0_7, 0)));

        parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, InstA0_15, &InstA_17);
        parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, InstB0_16, &InstB_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *InstName_8 = base;
          MR_hl_field(1, base, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(1, base, 1) = ((MR_Box) (InstA_17));
          MR_hl_field(1, base, 2) = ((MR_Box) (InstB_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstA0_25 = ((MR_Word) ((MR_hl_field(2, InstName0_7, 0))));
        MR_Word InstB0_26 = ((MR_Word) ((MR_hl_field(2, InstName0_7, 1))));
        MR_Word InstA_27;
        MR_Word InstB_28;

        parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, InstA0_25, &InstA_27);
        parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, InstB0_26, &InstB_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InstName_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (InstA_27));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstB_28));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName0_19 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 1))));
            MR_Word SubInstName_21;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, InstName0_7, 2)));

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInstName0_19, &SubInstName_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_21));
              MR_hl_field(3, base, 2) = (MR_Box) (packed_word_1);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SubInstName0_33 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 1))));
            MR_Word SubInstName_35;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName0_7, 2)));

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInstName0_33, &SubInstName_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_35));
              MR_hl_field(3, base, 2) = (MR_Box) (packed_word_0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubInstName0_36 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 1))));
            MR_Word SubInstName_37;

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInstName0_36, &SubInstName_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InstName_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_37));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubInstName0_38 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 1))));
            MR_Word SubInstName_39;

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInstName0_38, &SubInstName_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InstName_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubInstName_39));
            }
          }
          break;
        case (MR_Integer) 4:
          *InstName_8 = InstName0_7;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_24 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 1))));
            MR_Word SubInstName0_40 = ((MR_Word) ((MR_hl_field(3, InstName0_7, 2))));
            MR_Word SubInstName_41;

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInstName0_40, &SubInstName_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstName_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInstName_41));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctor_8;

  parse_tree__prog_mode__strip_module_names_from_bound_functor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundFunctor_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctor_8));
}

void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  switch (MR_tag((MR_Word) Inst0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_8 = Inst0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_21 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_22 = ((MR_Word) ((MR_hl_field(1, Inst0_7, 1))));
        MR_Word HOInstInfo_23;

        parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0(StripWhat_5, SetDefaultFunc_6, HOInstInfo0_22, &HOInstInfo_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_21));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_23));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_16 = ((MR_Word) ((MR_hl_field(2, Inst0_7, 1))));
        MR_Word BoundFunctors0_17 = ((MR_Word) ((MR_hl_field(2, Inst0_7, 2))));
        MR_Word BoundFunctors_18;
        MR_Word Uniq_24 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_inst_4_p_0_1));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (StripWhat_5));
          MR_hl_field(0, Var_25, 4) = ((MR_Box) (SetDefaultFunc_6));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_25, BoundFunctors0_17, &BoundFunctors_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_24));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_16));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_18));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_19 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word InstName_20;

            parse_tree__prog_mode__strip_module_names_from_inst_name_4_p_0(StripWhat_5, SetDefaultFunc_6, InstName0_19, &InstName_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_20));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word SubInst0_11 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word SubInst_12;

            parse_tree__prog_mode__strip_module_names_from_inst_4_p_0(StripWhat_5, SetDefaultFunc_6, SubInst0_11, &SubInst_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_10));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_12));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_7, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_14 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word HOInstInfo_15;

            parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0(StripWhat_5, SetDefaultFunc_6, HOInstInfo0_14, &HOInstInfo_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_13));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_15));
            }
          }
          break;
        case (MR_Integer) 3:
          *Inst_8 = Inst0_7;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Mode_8;

  parse_tree__prog_mode__strip_module_names_from_mode_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Mode_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Mode_8));
}

static MR_bool MR_CALL 
parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_mode__IntroducedFrom__pred__strip_module_names_from_ho_inst_info__1089__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word HOInstInfo0_7,
  MR_Word * HOInstInfo_8)
{
  MR_bool succeeded;

  if ((HOInstInfo0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pred0_9 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_7), (MR_Integer) 1));
    MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_9, 0))) & (MR_Integer) 1);
    MR_Word Modes0_11 = ((MR_Word) ((MR_hl_field(0, Pred0_9, 1))));
    MR_Word ArgRegTypes_12 = ((MR_Word) ((MR_hl_field(0, Pred0_9, 2))));
    MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(0, Pred0_9, 3))) & (MR_Integer) 7);
    MR_Word TypeCtorInfo_20_20;
    MR_Word ArgModes0_14;
    MR_Word RetMode0_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_23;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word ModeSymName_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word ModeSymName_31;
    MR_Word Var_32;
    MR_Box conv0_RetMode0_15;

    succeeded = (SetDefaultFunc_6 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (PorF_10 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (Detism_13 == (MR_Integer) 0);
        if (succeeded)
        {
          TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_20_20, Modes0_11, &ArgModes0_14, &conv0_RetMode0_15);
          if (succeeded)
          {
            RetMode0_15 = ((MR_Word) (conv0_RetMode0_15));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Var_25 = (MR_String) "in";
            Var_26 = (MR_Word) ((MR_Unsigned) 0U);
            Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              ModeSymName_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ModeSymName_27, 0) = ((MR_Box) (Var_28));
              MR_hl_field(1, ModeSymName_27, 1) = ((MR_Box) (Var_25));
            }
            {
              Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_19, 0) = ((MR_Box) (ModeSymName_27));
              MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_26));
            }
            {
              Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0]));
              MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_1));
              MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_18, 3) = ((MR_Box) (Var_19));
            }
            succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_20_20, Var_18, ArgModes0_14);
            if (succeeded)
            {
              Var_29 = (MR_String) "out";
              Var_30 = (MR_Word) ((MR_Unsigned) 0U);
              Var_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              {
                ModeSymName_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ModeSymName_31, 0) = ((MR_Box) (Var_32));
                MR_hl_field(1, ModeSymName_31, 1) = ((MR_Box) (Var_29));
              }
              {
                Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_23, 0) = ((MR_Box) (ModeSymName_31));
                MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_30));
              }
              succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(RetMode0_15, Var_23);
            }
          }
        }
      }
    }
    if (succeeded)
      *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Modes_16;
      MR_Word Pred_17;
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0_2));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (StripWhat_5));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (SetDefaultFunc_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_33, Modes0_11, &Modes_16);
      {
        Pred_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_17, 0) = (MR_Box) ((MR_Unsigned) (PorF_10));
        MR_hl_field(0, Pred_17, 1) = ((MR_Box) (Modes_16));
        MR_hl_field(0, Pred_17, 2) = ((MR_Box) (ArgRegTypes_12));
        MR_hl_field(0, Pred_17, 3) = (MR_Box) ((MR_Unsigned) (Detism_13));
      }
      *HOInstInfo_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Pred_17)));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_8;

  parse_tree__prog_mode__strip_module_names_from_mode_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_8));
}

void MR_CALL 
parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Modes0_7,
  MR_Word * Modes_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (StripWhat_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (SetDefaultFunc_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_9, Modes0_7, Modes_8);
}

void MR_CALL 
parse_tree__prog_mode__bound_functors_to_cons_ids_3_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundFunctor_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word BoundFunctors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ConsId_8;
    MR_Word ConsIds_9;

    parse_tree__prog_mode__bound_functor_to_cons_id_3_p_0(TypeCtor_1, BoundFunctor_6, &ConsId_8);
    parse_tree__prog_mode__bound_functors_to_cons_ids_3_p_0(TypeCtor_1, BoundFunctors_7, &ConsIds_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (ConsIds_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__bound_functor_to_cons_id_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word BoundFunctor_5,
  MR_Word * ConsId_6)
{
  MR_bool succeeded;
  MR_Word ConsId0_7 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, 0))));
  MR_Word DuCtor0_9;

  succeeded = ((MR_tag((MR_Word) ConsId0_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor0_9 = (MR_Word) (MR_body((MR_Word) (ConsId0_7), (MR_Integer) 1));
    {
      MR_Word ConsIdSymName0_10 = ((MR_Word) ((MR_hl_field(0, DuCtor0_9, 0))));
      MR_Integer ConsIdArity_11 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_9, 1))));
      MR_Word TypeCtorSymName_13 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, 0))));
      MR_Word ConsIdSymName_19;
      MR_Word DuCtor_20;

      if (((MR_tag((MR_Word) TypeCtorSymName_13)) == (MR_Integer) 1))
      {
        MR_Word TypeCtorModuleName_16 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_13, 0))));
        MR_String ConsIdName_18;

        ConsIdName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsIdSymName0_10);
        {
          ConsIdSymName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConsIdSymName_19, 0) = ((MR_Box) (TypeCtorModuleName_16));
          MR_hl_field(1, ConsIdSymName_19, 1) = ((MR_Box) (ConsIdName_18));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.bound_functor_to_cons_id\'/3", (MR_String) "unqualified TypeCtorSymName");
          return;
        }
      {
        DuCtor_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_20, 0) = ((MR_Box) (ConsIdSymName_19));
        MR_hl_field(0, DuCtor_20, 1) = ((MR_Box) (ConsIdArity_11));
        MR_hl_field(0, DuCtor_20, 2) = ((MR_Box) (TypeCtor_4));
      }
      *ConsId_6 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_20)));
    }
  }
  else
    *ConsId_6 = ConsId0_7;
}

void MR_CALL 
parse_tree__prog_mode__get_arg_insts_det_4_p_0(
  MR_Word Inst_5,
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ArgInsts_8)
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
          MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(1, Inst_5, 0))) & (MR_Integer) 7);
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = (MR_Box) ((MR_Unsigned) (Uniq_9));
            MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) (Var_21)), ArgInsts_8);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_5, 2))));
          MR_Word ArgInsts0_14;

          succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(BoundFunctors_13, ConsId_6, &ArgInsts0_14);
          if (succeeded)
            *ArgInsts_8 = ArgInsts0_14;
          else
            mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) ((MR_Unsigned) 4U)), ArgInsts_8);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_5, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts\'/4", (MR_String) "defined_inst");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_5, 2))));
              MR_Word next_value_of_Inst_5 = SubInst_18;

              // direct tailcall eliminated
              ;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_25;
              MR_Word Uniq_29 = ((MR_Unsigned) ((MR_hl_field(3, Inst_5, 1))) & (MR_Integer) 7);

              {
                Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_25, 1) = (MR_Box) ((MR_Unsigned) (Uniq_29));
                MR_hl_field(3, Var_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) (Var_25)), ArgInsts_8);
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
    MR_Word BoundFunctor_4;
    MR_Word BoundFunctors_5;
    MR_Word ArgInsts0_9;
    MR_Word FunctorConsId_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      BoundFunctor_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      BoundFunctors_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      FunctorConsId_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 0))));
      ArgInsts0_9 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 1))));
      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_6, FunctorConsId_8);
      if (succeeded)
      {
        *ArgInsts_7 = ArgInsts0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundFunctors_5;

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
  struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5));
  parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
  if ((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
    parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word SubInsts_4 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
        MR_Word Var_3;

        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
  MR_Word InstName_2)
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
          MR_Word SubInstA_8 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
          MR_Word SubInstB_9 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 2))));
          MR_Word Var_6;
          MR_Word Var_7;

          (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstA_8);
          if (!((env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
            (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstB_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubInstA_20 = ((MR_Word) ((MR_hl_field(2, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 0))));
          MR_Word SubInstB_21 = ((MR_Word) ((MR_hl_field(2, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));

          (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstA_20);
          if (!((env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
            (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(SubInstB_21);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 0))))) {
          default:
            (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_10 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
              MR_Word Var_11;
              MR_Word Var_12;
              MR_Word Var_13;
              MR_Word next_value_of_InstName_2 = SubInstName_10;

              // direct tailcall eliminated
              ;
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_22 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
              MR_Word Var_14;
              MR_Word Var_15;
              MR_Word Var_16;
              MR_Word next_value_of_InstName_2 = SubInstName_22;

              // direct tailcall eliminated
              ;
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_23 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
              MR_Word next_value_of_InstName_2 = SubInstName_23;

              // direct tailcall eliminated
              ;
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_24 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 1))));
              MR_Word next_value_of_InstName_2 = SubInstName_24;

              // direct tailcall eliminated
              ;
              (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = next_value_of_InstName_2;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, 2))));
              MR_Word Var_17;
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

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_Mode_62));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_63);
  if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_63 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_SubInst_63));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62)) == (MR_Integer) 0))
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62, 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62, 0))));

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_63 = Var_73;
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(env_ptr);
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_63 = Var_72;
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(env_ptr);
  }
  else
  {
    MR_Word SubInsts_49 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_62, 1))));
    MR_Word _SymName_47;

    mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_SubInst_63, SubInsts_49, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17, env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
    {
      {
        MR_Word TypeCtorInfo_35_68;
        MR_Word GroundInstInfo_56 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 1))));
        MR_Word PredInstInfo_57;
        MR_Word Modes_59;
        MR_Word _Uniq_4;
        MR_Word _PredOrFunc_40;
        MR_Word _MaybeArgRegs_41;
        MR_Word _Detism_42;

        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = (GroundInstInfo_56 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
        {
          PredInstInfo_57 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_56), (MR_Integer) 1));
          Modes_59 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_57, 1))));
          TypeCtorInfo_35_68 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          mercury__list__member_2_p_1(TypeCtorInfo_35_68, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_Mode_62, Modes_59, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, env_ptr);
        }
      }
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundFunctor_26 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_BoundFunctor_26));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_29 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_ArgInst_29));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_29);
  if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _ConsId_27;

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_28 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundFunctor_26, 1))));
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    mercury__list__member_2_p_1((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_39_39, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_ArgInst_29, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_28, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11, env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
    {
      {
        MR_Word TypeCtorInfo_38_38;
        MR_Word InstResults_17 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 1))));
        MR_Word BoundFunctors_18 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 2))));
        MR_Word _Uniq_34;

        if ((InstResults_17 == (MR_Word) ((MR_Unsigned) 0U)))
          (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) InstResults_17)) == (MR_Integer) 1))
        {
          MR_Word InstVarsResult_22 = ((MR_Word) ((MR_hl_field(1, InstResults_17, 2))));
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word Var_24;

          if ((InstVarsResult_22 == (MR_Word) ((MR_Unsigned) 0U)))
            (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
          else
          {
            MR_Word InstVars_25 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_22, 0))));

            (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), InstVars_25);
          }
        }
        else
          (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
        if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
        {
          TypeCtorInfo_38_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0);
          mercury__list__member_2_p_1(TypeCtorInfo_38_38, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_BoundFunctor_26, BoundFunctors_18, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, env_ptr);
        }
      }
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_11));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_12);
  if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_12 = ((MR_Word) ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_12));
  parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(env_ptr);
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11)) == (MR_Integer) 0))
  {
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11, 1))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11, 0))));

    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_12 = Var_71;
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(env_ptr);
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_12 = Var_70;
    parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(env_ptr);
  }
  else
  {
    MR_Word SubInsts_16 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_11, 1))));
    MR_Word _SymName_15;

    mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_SubInst_12, SubInsts_16, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5, env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
  void * env_ptr_arg)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeCtorInfo_35_35;
        MR_Word GroundInstInfo_5 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 2))));
        MR_Word PredInstInfo_6;
        MR_Word Modes_8;
        MR_Word _Uniq_33;
        MR_Word _PredOrFunc_7;
        MR_Word _MaybeArgRegs_9;
        MR_Word _Detism_10;

        (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = (GroundInstInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
        {
          PredInstInfo_6 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_5), (MR_Integer) 1));
          Modes_8 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_6, 1))));
          TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          mercury__list__member_2_p_1(TypeCtorInfo_35_35, &(env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_Mode_11, Modes_8, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, env_ptr);
        }
      }
      (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
  MR_Word Inst_2)
{
  struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s env;

  (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = Inst_2;
  switch (MR_tag((MR_Word) (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) {
    default:
      (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(&env);
      break;
    case (MR_Integer) 2:
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(&env);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 0))))) {
        default:
          (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, 1))));

            (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(InstName_30);
          }
          break;
        case (MR_Integer) 2:
          parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(&env);
          break;
        case (MR_Integer) 3:
          (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return (env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_6;

  parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
}

void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(
  MR_Word VarSet_6,
  MR_Word NewVarSet_7,
  MR_Word * MergedVarSet_8,
  MR_Word Modes0_9,
  MR_Word * Modes_10)
{
  MR_Word Renaming_11;
  MR_Word Var_12;

  mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_6, NewVarSet_7, MergedVarSet_8, &Renaming_11);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Renaming_11));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_12, Modes0_9, Modes_10);
}

void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word Insts0_5,
  MR_Word * Insts_6)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4);
  if (succeeded)
    *Insts_6 = Insts0_5;
  else
    parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_4, Insts0_5, Insts_6);
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
      MR_Word I0_14 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 0))));
      MR_Word F0_15 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 1))));
      MR_Word I_16;
      MR_Word F_17;

      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_11, I0_14, &I_16);
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_11, F0_15, &F_17);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Mode_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (I_16));
        MR_hl_field(0, base, 1) = ((MR_Box) (F_17));
      }
    }
    else
    {
      MR_Word Name_18 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 0))));
      MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 1))));
      MR_Word Args_20;

      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_11, Args0_19, &Args_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Mode_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Name_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Args_20));
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
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4);
  if (succeeded)
    *Modes_6 = Modes0_5;
  else
    parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(Subst_4, Modes0_5, Modes_6);
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
    MR_Word Mode0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Modes0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Mode_8;
    MR_Word Modes_9;

    if (((MR_tag((MR_Word) Mode0_6)) == (MR_Integer) 0))
    {
      MR_Word I0_10 = ((MR_Word) ((MR_hl_field(0, Mode0_6, 0))));
      MR_Word F0_11 = ((MR_Word) ((MR_hl_field(0, Mode0_6, 1))));
      MR_Word I_12;
      MR_Word F_13;

      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, I0_10, &I_12);
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, F0_11, &F_13);
      {
        Mode_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_8, 0) = ((MR_Box) (I_12));
        MR_hl_field(0, Mode_8, 1) = ((MR_Box) (F_13));
      }
    }
    else
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(1, Mode0_6, 0))));
      MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(1, Mode0_6, 1))));
      MR_Word Args_16;

      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Args0_15, &Args_16);
      {
        Mode_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_8, 0) = ((MR_Box) (Name_14));
        MR_hl_field(1, Mode_8, 1) = ((MR_Box) (Args_16));
      }
    }
    parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(Subst_1, Modes0_7, &Modes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Modes_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__bound_functors_apply_substitution_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundFunctor0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word BoundFunctors0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word BoundFunctor_8;
    MR_Word BoundFunctors_9;
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_6, 0))));
    MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_6, 1))));
    MR_Word Args_12;

    parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Args0_11, &Args_12);
    {
      BoundFunctor_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundFunctor_8, 0) = ((MR_Box) (Name_10));
      MR_hl_field(0, BoundFunctor_8, 1) = ((MR_Box) (Args_12));
    }
    parse_tree__prog_mode__bound_functors_apply_substitution_3_p_0(Subst_1, BoundFunctors0_7, &BoundFunctors_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_9));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word InstName0_5,
  MR_Word * InstName_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName0_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Name_7 = ((MR_Word) ((MR_hl_field(0, InstName0_5, 0))));
        MR_Word ArgInsts0_8 = ((MR_Word) ((MR_hl_field(0, InstName0_5, 1))));
        MR_Word ArgInsts_9;

        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_4, ArgInsts0_8, &ArgInsts_9);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *InstName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Name_7));
          MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_9));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName0_5, 0))))) {
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
            MR_Word T_10 = ((MR_Word) ((MR_hl_field(3, InstName0_5, 1))));
            MR_Word SubInst0_11 = ((MR_Word) ((MR_hl_field(3, InstName0_5, 2))));
            MR_Word SubInst_12;

            succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(Subst_4, SubInst0_11, &SubInst_12);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (T_10));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_12));
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
    MR_Word Inst0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Insts0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Inst_8;
    MR_Word Insts_9;

    parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_1, Inst0_6, &Inst_8);
    parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(Subst_1, Insts0_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
  MR_Word Subst_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_6 = Inst0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_7 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_8 = ((MR_Word) ((MR_hl_field(1, Inst0_5, 1))));
        MR_Word HOInstInfo_9;

        if ((HOInstInfo0_8 == (MR_Word) ((MR_Unsigned) 0U)))
          HOInstInfo_9 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word PredOrFunc_62;
          MR_Word Modes0_63;
          MR_Word MaybeArgRegs_64;
          MR_Word Det_65;
          MR_Word Modes_66;
          MR_Word Var_67 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_8), (MR_Integer) 1));
          MR_Word Var_68;

          PredOrFunc_62 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, 0))) & (MR_Integer) 1);
          Modes0_63 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
          MaybeArgRegs_64 = ((MR_Word) ((MR_hl_field(0, Var_67, 2))));
          Det_65 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, 3))) & (MR_Integer) 7);
          parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(Subst_4, Modes0_63, &Modes_66);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_68, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_62));
            MR_hl_field(0, Var_68, 1) = ((MR_Box) (Modes_66));
            MR_hl_field(0, Var_68, 2) = ((MR_Box) (MaybeArgRegs_64));
            MR_hl_field(0, Var_68, 3) = (MR_Box) ((MR_Unsigned) (Det_65));
          }
          HOInstInfo_9 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_68)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_10 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, 0))) & (MR_Integer) 7);
        MR_Word InstResults0_11 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 1))));
        MR_Word BoundFunctors0_12 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 2))));

        switch (MR_tag((MR_Word) InstResults0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstResults0_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word BoundFunctors_37;

                  parse_tree__prog_mode__bound_functors_apply_substitution_3_p_0(Subst_4, BoundFunctors0_12, &BoundFunctors_37);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_6 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq0_10));
                    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_37));
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
              MR_Word InstVarsResult_16 = ((MR_Word) ((MR_hl_field(1, InstResults0_11, 2))));
              MR_Word TypeInfo_40_40;
              MR_Word TypeCtorInfo_41_41;
              MR_Word InstVarsSet_19;
              MR_Word InstVars_20;

              succeeded = (InstVarsResult_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InstVarsSet_19 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_16, 0))));
                TypeInfo_40_40 = (MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]);
                mercury__set__to_sorted_list_2_p_0(TypeInfo_40_40, InstVarsSet_19, &InstVars_20);
                TypeCtorInfo_41_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(TypeCtorInfo_41_41, InstVars_20, Subst_4);
              }
              if (succeeded)
                *Inst_6 = Inst0_5;
              else
              {
                MR_Word BoundFunctors_21;

                parse_tree__prog_mode__bound_functors_apply_substitution_3_p_0(Subst_4, BoundFunctors0_12, &BoundFunctors_21);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq0_10));
                  MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_21));
                }
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_28 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word InstName_29;

            succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(Subst_4, InstName0_28, &InstName_29);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_29));
              }
            else
              *Inst_6 = Inst0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word SubInst0_25 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word Var_39;
            MR_Word Var0_26;
            MR_Box conv0_Var0_26;
            MR_Word ReplacementInst_38;
            MR_Box conv1_ReplacementInst_38;

            succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), Vars_24, &conv0_Var0_26);
            if (succeeded)
            {
              Var0_26 = ((MR_Word) (conv0_Var0_26));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              Var_39 = Var0_26;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
                return;
              }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4, ((MR_Box) (Var_39)), &conv1_ReplacementInst_38);
            if (succeeded)
            {
              ReplacementInst_38 = ((MR_Word) (conv1_ReplacementInst_38));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              *Inst_6 = ReplacementInst_38;
            else
            {
              MR_Word SubInst_27;

              parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_4, SubInst0_25, &SubInst_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Vars_24));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_27));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_34 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_35 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
            MR_Word HOInstInfo_36;

            if ((HOInstInfo0_35 == (MR_Word) ((MR_Unsigned) 0U)))
              HOInstInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word PredOrFunc_51;
              MR_Word Modes0_52;
              MR_Word MaybeArgRegs_53;
              MR_Word Det_54;
              MR_Word Modes_55;
              MR_Word Var_56 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_35), (MR_Integer) 1));
              MR_Word Var_57;

              PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(0, Var_56, 0))) & (MR_Integer) 1);
              Modes0_52 = ((MR_Word) ((MR_hl_field(0, Var_56, 1))));
              MaybeArgRegs_53 = ((MR_Word) ((MR_hl_field(0, Var_56, 2))));
              Det_54 = ((MR_Unsigned) ((MR_hl_field(0, Var_56, 3))) & (MR_Integer) 7);
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(Subst_4, Modes0_52, &Modes_55);
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (Modes_55));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) (MaybeArgRegs_53));
                MR_hl_field(0, Var_57, 3) = (MR_Box) ((MR_Unsigned) (Det_54));
              }
              HOInstInfo_36 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_57)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_34));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_36));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
            MR_Word ReplacementInst_23;
            MR_Box conv2_ReplacementInst_23;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_mode_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Subst_4, ((MR_Box) (Var_22)), &conv2_ReplacementInst_23);
            if (succeeded)
            {
              ReplacementInst_23 = ((MR_Word) (conv2_ReplacementInst_23));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              *Inst_6 = ReplacementInst_23;
            else
              *Inst_6 = Inst0_5;
          }
          break;
      }
      break;
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
      MR_Word InstVar_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word InstVars_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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

MR_Word MR_CALL 
parse_tree__prog_mode__simplify_std_from_to_mode_1_f_0(
  MR_Word Mode0_3)
{
  MR_bool succeeded;
  MR_Word Mode_4;

  if (((MR_tag((MR_Word) Mode0_3)) == (MR_Integer) 0))
  {
    MR_Word FromInst_5 = ((MR_Word) ((MR_hl_field(0, Mode0_3, 0))));
    MR_Word ToInst_6 = ((MR_Word) ((MR_hl_field(0, Mode0_3, 1))));
    MR_String StdModeName_7;

    succeeded = parse_tree__prog_mode__from_to_insts_is_standard_mode_3_p_0(FromInst_5, ToInst_6, &StdModeName_7);
    if (succeeded)
    {
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_10, 0) = ((MR_Box) (StdModeName_7));
      }
      {
        Mode_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_4, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, Mode_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      Mode_4 = Mode0_3;
  }
  else
    Mode_4 = Mode0_3;
  return Mode_4;
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
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Final_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Finals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Mode_18;
      MR_Word Modes_19;

      parse_tree__prog_mode__insts_to_mode_3_p_0(Var_21, Final_16, &Mode_18);
      parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(Var_20, Finals_17, &Modes_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_19));
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
  MR_bool succeeded;
  MR_String StdMode_7;

  succeeded = parse_tree__prog_mode__from_to_insts_is_standard_mode_3_p_0(FromInst_4, ToInst_5, &StdMode_7);
  if (succeeded)
  {
    MR_Word ModeSymName_26;
    MR_Word Var_27;

    Var_27 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      ModeSymName_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModeSymName_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, ModeSymName_26, 1) = ((MR_Box) (StdMode_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(FromInst_4, ToInst_5);
    if (succeeded)
    {
      MR_Word Var_10;
      MR_Word ModeSymName_28;
      MR_Word Var_29;

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (FromInst_4));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        ModeSymName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeSymName_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, ModeSymName_28, 1) = ((MR_Box) ((MR_String) "in"));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Mode_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_10));
      }
    }
    else
    {
      succeeded = (FromInst_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Word ModeSymName_30;
        MR_Word Var_31;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (ToInst_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          ModeSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeSymName_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, ModeSymName_30, 1) = ((MR_Box) ((MR_String) "out"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Mode_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_30));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_13));
        }
      }
      else
      {
        MR_Word Var_15;
        MR_Word Var_16;

        succeeded = ((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_15 = ((MR_Unsigned) ((MR_hl_field(1, ToInst_5, 0))) & (MR_Integer) 7);
          Var_16 = ((MR_Word) ((MR_hl_field(1, ToInst_5, 1))));
          succeeded = (Var_15 == (MR_Integer) 3);
          if (succeeded)
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word Var_18;
          MR_Word ModeSymName_32;
          MR_Word Var_33;

          {
            Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_18, 0) = ((MR_Box) (FromInst_4));
            MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            ModeSymName_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ModeSymName_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(1, ModeSymName_32, 1) = ((MR_Box) ((MR_String) "di"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Mode_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_18));
          }
        }
        else
        {
          MR_Word Var_20;
          MR_Word Var_21;

          succeeded = ((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_20 = ((MR_Unsigned) ((MR_hl_field(1, ToInst_5, 0))) & (MR_Integer) 7);
            Var_21 = ((MR_Word) ((MR_hl_field(1, ToInst_5, 1))));
            succeeded = (Var_20 == (MR_Integer) 4);
            if (succeeded)
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word Var_23;
            MR_Word ModeSymName_34;
            MR_Word Var_35;

            {
              Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_23, 0) = ((MR_Box) (FromInst_4));
              MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              ModeSymName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ModeSymName_34, 0) = ((MR_Box) (Var_35));
              MR_hl_field(1, ModeSymName_34, 1) = ((MR_Box) ((MR_String) "mdi"));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Mode_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_34));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Mode_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (FromInst_4));
              MR_hl_field(0, base, 1) = ((MR_Box) (ToInst_5));
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
  MR_bool succeeded = ((MR_tag((MR_Word) ToInst_5)) == (MR_Integer) 1);
  MR_Word ToUniq_7;
  MR_Word Var_8;

  if (succeeded)
  {
    ToUniq_7 = ((MR_Unsigned) ((MR_hl_field(1, ToInst_5, 0))) & (MR_Integer) 7);
    Var_8 = ((MR_Word) ((MR_hl_field(1, ToInst_5, 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      switch (ToUniq_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            MR_Word Var_11;
            MR_Word Var_12;

            succeeded = ((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_11 = ((MR_Unsigned) ((MR_hl_field(1, FromInst_4, 0))) & (MR_Integer) 7);
              Var_12 = ((MR_Word) ((MR_hl_field(1, FromInst_4, 1))));
              succeeded = (Var_11 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
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
            MR_Word Var_15;
            MR_Word Var_16;

            succeeded = ((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_15 = ((MR_Unsigned) ((MR_hl_field(1, FromInst_4, 0))) & (MR_Integer) 7);
              Var_16 = ((MR_Word) ((MR_hl_field(1, FromInst_4, 1))));
              succeeded = (Var_15 == (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
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
          if (((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 1))
          {
            MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(1, FromInst_4, 0))) & (MR_Integer) 7);
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, FromInst_4, 1))));

            succeeded = (Var_17 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
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
          if (((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 1))
          {
            MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(1, FromInst_4, 0))) & (MR_Integer) 7);
            MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, FromInst_4, 1))));

            succeeded = (Var_9 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
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
          if (((MR_tag((MR_Word) FromInst_4)) == (MR_Integer) 1))
          {
            MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(1, FromInst_4, 0))) & (MR_Integer) 7);
            MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, FromInst_4, 1))));

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

MR_bool MR_CALL 
parse_tree__prog_mode__is_std_mode_3_p_0(
  MR_Word Mode_4,
  MR_String * Name_5,
  MR_Word * ArgInsts_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Mode_4)) == (MR_Integer) 1);
  MR_Word ModeSymName_7;
  MR_Word Var_8;
  MR_Word Var_9;

  if (succeeded)
  {
    ModeSymName_7 = ((MR_Word) ((MR_hl_field(1, Mode_4, 0))));
    *ArgInsts_6 = ((MR_Word) ((MR_hl_field(1, Mode_4, 1))));
    succeeded = ((MR_tag((MR_Word) ModeSymName_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, ModeSymName_7, 0))));
      *Name_5 = ((MR_String) ((MR_hl_field(1, ModeSymName_7, 1))));
      Var_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_8, Var_9);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_mode__is_out_mode_2_p_0(
  MR_Word Mode_3,
  MR_Word * ArgInsts_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Mode_3)) == (MR_Integer) 1);
  MR_String Name_5;
  MR_Word ModeSymName_6;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    ModeSymName_6 = ((MR_Word) ((MR_hl_field(1, Mode_3, 0))));
    *ArgInsts_4 = ((MR_Word) ((MR_hl_field(1, Mode_3, 1))));
    succeeded = ((MR_tag((MR_Word) ModeSymName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(1, ModeSymName_6, 0))));
      Name_5 = ((MR_String) ((MR_hl_field(1, ModeSymName_6, 1))));
      Var_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_7, Var_8);
      if (succeeded)
        succeeded = (strcmp(Name_5, (MR_String) "out") == 0);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_mode__is_in_mode_2_p_0(
  MR_Word Mode_3,
  MR_Word * ArgInsts_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Mode_3)) == (MR_Integer) 1);
  MR_String Name_5;
  MR_Word ModeSymName_6;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    ModeSymName_6 = ((MR_Word) ((MR_hl_field(1, Mode_3, 0))));
    *ArgInsts_4 = ((MR_Word) ((MR_hl_field(1, Mode_3, 1))));
    succeeded = ((MR_tag((MR_Word) ModeSymName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(1, ModeSymName_6, 0))));
      Name_5 = ((MR_String) ((MR_hl_field(1, ModeSymName_6, 1))));
      Var_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_7, Var_8);
      if (succeeded)
        succeeded = (strcmp(Name_5, (MR_String) "in") == 0);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__prog_mode__make_std_mode_2_f_0(
  MR_String Name_4,
  MR_Word ArgInsts_5)
{
  MR_Word Mode_6;
  MR_Word ModeSymName_7;
  MR_Word Var_8;

  Var_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, ModeSymName_7, 1) = ((MR_Box) (Name_4));
  }
  {
    Mode_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Mode_6, 0) = ((MR_Box) (ModeSymName_7));
    MR_hl_field(1, Mode_6, 1) = ((MR_Box) (ArgInsts_5));
  }
  return Mode_6;
}

void MR_CALL 
parse_tree__prog_mode__make_std_mode_3_p_0(
  MR_String Name_4,
  MR_Word ArgInsts_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word ModeSymName_6;
  MR_Word Var_7;

  Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, ModeSymName_6, 1) = ((MR_Box) (Name_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (ArgInsts_5));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(3, &parse_tree__prog_mode_scalar_common_2[1]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_clobbered_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[6]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__clobbered_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[5]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_unique_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[4]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__unique_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[3]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[2]));
}

MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_8;
  MR_Word Var_9;

  Var_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, ModeSymName_8, 1) = ((MR_Box) ((MR_String) "out"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_8));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[13])));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_8;
  MR_Word Var_9;

  Var_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, ModeSymName_8, 1) = ((MR_Box) ((MR_String) "in"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_8));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_mode_scalar_common_1[13])));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "unused"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__unused_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "unused"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "muo"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__muo_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "muo"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "mdi"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__mdi_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "mdi"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "uo"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__uo_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "uo"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "di"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__di_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "di"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_1_f_0(
  MR_Word I_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;
  MR_Word ModeSymName_7;
  MR_Word Var_8;

  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (I_3));
    MR_hl_field(1, Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, ModeSymName_7, 1) = ((MR_Box) ((MR_String) "out"));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModeSymName_7));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "out"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__out_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "out"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_1_f_0(
  MR_Word I_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;
  MR_Word ModeSymName_7;
  MR_Word Var_8;

  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (I_3));
    MR_hl_field(1, Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, ModeSymName_7, 1) = ((MR_Box) ((MR_String) "in"));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModeSymName_7));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "in"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
parse_tree__prog_mode__in_mode_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word ModeSymName_4;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    ModeSymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModeSymName_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, ModeSymName_4, 1) = ((MR_Box) ((MR_String) "in"));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModeSymName_4));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
