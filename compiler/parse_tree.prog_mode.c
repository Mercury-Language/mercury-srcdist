/*
** Automatically generated from `prog_mode.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__635__1_2_f_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42);

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1169__1_3_p_0(
  MR_Word parse_tree__prog_mode__InstVarSet_8,
  MR_Word parse_tree__prog_mode__HeadVar__2_49,
  MR_String * parse_tree__prog_mode__HeadVar__3_50);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(
  MR_Word parse_tree__prog_mode__SubInst_7,
  MR_Word parse_tree__prog_mode__InstVar_8,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_15);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(
  MR_Word parse_tree__prog_mode__BoundInst_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_12,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_13,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_14);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(
  MR_Word parse_tree__prog_mode__Mode_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_13,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_14,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_15,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_16);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(
  MR_Word parse_tree__prog_mode__TypeAndMode_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_15);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(
  MR_Word parse_tree__prog_mode__Inst_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_37);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(
  MR_Word parse_tree__prog_mode__Insts_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_12);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(
  MR_Word parse_tree__prog_mode__Modes_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_12);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__BoundInst0_5,
  MR_Word * parse_tree__prog_mode__BoundInst_6);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
  MR_Word parse_tree__prog_mode__BoundInst0_3,
  MR_Word * parse_tree__prog_mode__BoundInst_4);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
  MR_Word parse_tree__prog_mode__Mode0_3,
  MR_Word * parse_tree__prog_mode__Mode_4);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__BoundInst0_5,
  MR_Word * parse_tree__prog_mode__BoundInst_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__Mode0_5,
  MR_Word * parse_tree__prog_mode__Mode_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__Inst0_5,
  MR_Word * parse_tree__prog_mode__Inst_6);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__InstName0_5,
  MR_Word * parse_tree__prog_mode__InstName_6);

static void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__Inst0_5,
  MR_Word * parse_tree__prog_mode__Inst_6);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__Name0_5,
  MR_Word * parse_tree__prog_mode__Name_6);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__PII0_5,
  MR_Word * parse_tree__prog_mode__PII_6);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
  MR_Word parse_tree__prog_mode__Inst0_3,
  MR_Word * parse_tree__prog_mode__Inst_4);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Word parse_tree__prog_mode__ConsId_6,
  MR_Word * parse_tree__prog_mode__ArgInsts_7);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
  void * parse_tree__prog_mode__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
  MR_Word parse_tree__prog_mode__InstName_2);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * parse_tree__prog_mode__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_4,
  MR_Word parse_tree__prog_mode__InstName0_5,
  MR_Word * parse_tree__prog_mode__InstName_6);

static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2);


static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[17][2];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[22][3];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[4][8];

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_6[1][9];




static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_1[17][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[3])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[5])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[2])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[4])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst variable"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst variables"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_2[22][3] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2)),
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
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_mode_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_3[8][6] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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

static /* final */ const MR_Box parse_tree__prog_mode_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_mode__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static MR_Word MR_CALL 
parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__635__1_2_f_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__LambdaHeadVar__1_42)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;
    MR_Word parse_tree__prog_mode__LambdaHeadVar__2_43;
    MR_Word parse_tree__prog_mode__Var_34;
    MR_Word parse_tree__prog_mode__TypeInfo_88_88 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
    MR_Box parse_tree__prog_mode__conv0_Var_34;

    {
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__TypeInfo_88_88, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__LambdaHeadVar__1_42)), &parse_tree__prog_mode__conv0_Var_34);
    }
    if (parse_tree__prog_mode__succeeded)
    {
      parse_tree__prog_mode__Var_34 = ((MR_Word) parse_tree__prog_mode__conv0_Var_34);
      parse_tree__prog_mode__succeeded = MR_TRUE;
    }
    if (parse_tree__prog_mode__succeeded)
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__Var_34;
    else
      parse_tree__prog_mode__LambdaHeadVar__2_43 = parse_tree__prog_mode__LambdaHeadVar__1_42;
    return parse_tree__prog_mode__LambdaHeadVar__2_43;
  }
}

static void MR_CALL 
parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1169__1_3_p_0(
  MR_Word parse_tree__prog_mode__InstVarSet_8,
  MR_Word parse_tree__prog_mode__HeadVar__2_49,
  MR_String * parse_tree__prog_mode__HeadVar__3_50)
{
  {
    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__InstVarSet_8, parse_tree__prog_mode__HeadVar__2_49, parse_tree__prog_mode__HeadVar__3_50);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(
  MR_Word parse_tree__prog_mode__SubInst_7,
  MR_Word parse_tree__prog_mode__InstVar_8,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_15)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;
    MR_Word parse_tree__prog_mode__InstVarInst_11;
    MR_Box parse_tree__prog_mode__conv0_InstVarInst_11;

    {
      parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14, ((MR_Box) (parse_tree__prog_mode__InstVar_8)), &parse_tree__prog_mode__conv0_InstVarInst_11);
    }
    if (parse_tree__prog_mode__succeeded)
    {
      parse_tree__prog_mode__InstVarInst_11 = ((MR_Word) parse_tree__prog_mode__conv0_InstVarInst_11);
      parse_tree__prog_mode__succeeded = MR_TRUE;
    }
    if (parse_tree__prog_mode__succeeded)
    {
      {
        parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__InstVarInst_11, parse_tree__prog_mode__SubInst_7);
      }
      if (parse_tree__prog_mode__succeeded)
        *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12;
      else
      {
        {
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__InstVar_8)), parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13);
        }
      }
      *parse_tree__prog_mode__STATE_VARIABLE_Sub_15 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14;
    }
    else
    {
      {
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_mode__InstVar_8)), ((MR_Box) (parse_tree__prog_mode__SubInst_7)), parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14, parse_tree__prog_mode__STATE_VARIABLE_Sub_15);
      }
      *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(
  MR_Word parse_tree__prog_mode__BoundInst_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_12,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_13,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_14)
{
  {
    MR_Word parse_tree__prog_mode__ArgInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
    MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_12;
    MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_14;

    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[21], parse_tree__prog_mode__ArgInsts_10, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_11)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_12, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_13)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_14);
    }
    *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_12 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_12);
    *parse_tree__prog_mode__STATE_VARIABLE_Sub_14 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_14);
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(
  MR_Word parse_tree__prog_mode__Mode_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_13,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_14,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_15,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_16)
{
  if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_6)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word parse_tree__prog_mode__InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_6, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_19;
    MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_20_20;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(parse_tree__prog_mode__InitialInst_9, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_13, &parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_19, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_15, &parse_tree__prog_mode__STATE_VARIABLE_Sub_20_20);
    }
    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(parse_tree__prog_mode__FinalInst_10, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_19, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_14, parse_tree__prog_mode__STATE_VARIABLE_Sub_20_20, parse_tree__prog_mode__STATE_VARIABLE_Sub_16);
    }
  }
  else
  {
    MR_Word parse_tree__prog_mode__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, (MR_Integer) 0)));
    MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_14;
    MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_16;

    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[20], parse_tree__prog_mode__ArgInsts_12, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_13)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_14, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_15)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_16);
    }
    *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_14 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_14);
    *parse_tree__prog_mode__STATE_VARIABLE_Sub_16 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_16);
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(
  MR_Word parse_tree__prog_mode__TypeAndMode_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_15)
{
  if (((MR_tag((MR_Word) parse_tree__prog_mode__TypeAndMode_6)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word parse_tree__prog_mode__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__TypeAndMode_6, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode_11)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__prog_mode__InitialInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_11, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__FinalInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_11, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_31;
      MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_20_32;

      {
        parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(parse_tree__prog_mode__InitialInst_25, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12, &parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_31, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14, &parse_tree__prog_mode__STATE_VARIABLE_Sub_20_32);
      }
      {
        parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(parse_tree__prog_mode__FinalInst_26, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_19_31, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13, parse_tree__prog_mode__STATE_VARIABLE_Sub_20_32, parse_tree__prog_mode__STATE_VARIABLE_Sub_15);
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__ArgInsts_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_11, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_11, (MR_Integer) 0)));
      MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_13;
      MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_15;

      {
        mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[19], parse_tree__prog_mode__ArgInsts_28, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_13, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_15);
      }
      *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_13);
      *parse_tree__prog_mode__STATE_VARIABLE_Sub_15 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_15);
    }
  }
  else
  {
    *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_13 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_12;
    *parse_tree__prog_mode__STATE_VARIABLE_Sub_15 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_14;
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv9_STATE_VARIABLE_InconsistentVars_13;
    MR_Word parse_tree__prog_mode__conv8_STATE_VARIABLE_Sub_15;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv9_STATE_VARIABLE_InconsistentVars_13, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv8_STATE_VARIABLE_Sub_15);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv9_STATE_VARIABLE_InconsistentVars_13));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv8_STATE_VARIABLE_Sub_15));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv5_STATE_VARIABLE_InconsistentVars_12;
    MR_Word parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_14;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv5_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_14);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv5_STATE_VARIABLE_InconsistentVars_12));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv4_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_12;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_14;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_bound_args_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_12, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_14);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_12));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_14));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(
  MR_Word parse_tree__prog_mode__Inst_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_37)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__prog_mode__succeeded;

      switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_mode__Inst_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
              }
              break;
            case (MR_Integer) 1:
              {
                *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
            *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_mode__HOInstInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_6, (MR_Integer) 0)));

            if ((parse_tree__prog_mode__HOInstInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
              *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
            }
            else
            {
              MR_Word parse_tree__prog_mode__Modes_24;
              MR_Word parse_tree__prog_mode__Var_50 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_21), (MR_Integer) 1);
              MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, (MR_Integer) 0)));
              MR_Word parse_tree__prog_mode__Var_25;
              MR_Word parse_tree__prog_mode__Var_26;

              parse_tree__prog_mode__Modes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, (MR_Integer) 1)));
              parse_tree__prog_mode__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, (MR_Integer) 2)));
              parse_tree__prog_mode__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, (MR_Integer) 3)));
              {
                parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(parse_tree__prog_mode__Modes_24, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36, parse_tree__prog_mode__STATE_VARIABLE_Sub_37);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_mode__InstResults_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 3)));
                MR_Word parse_tree__prog_mode__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(parse_tree__prog_mode__InstResults_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_35;
                          MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_37;

                          {
                            mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[17], parse_tree__prog_mode__BoundInsts_12, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_35, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_37);
                          }
                          *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_35);
                          *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_37);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                          *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__prog_mode__InstVarsResult_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 3)));
                      MR_Word parse_tree__prog_mode__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_mode__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 1)));
                      MR_Word parse_tree__prog_mode__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 2)));
                      MR_Word parse_tree__prog_mode__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 4)));
                      MR_Word parse_tree__prog_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_11, (MR_Integer) 5)));
                      MR_Word parse_tree__prog_mode__TypeInfo_60_60;
                      MR_Word parse_tree__prog_mode__InstVarsSet_19;

                      parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_16)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_mode__succeeded)
                      {
                        parse_tree__prog_mode__InstVarsSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_16, (MR_Integer) 0)));
                        parse_tree__prog_mode__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
                        {
                          parse_tree__prog_mode__succeeded = mercury__set__is_empty_1_p_0(parse_tree__prog_mode__TypeInfo_60_60, parse_tree__prog_mode__InstVarsSet_19);
                        }
                      }
                      if (parse_tree__prog_mode__succeeded)
                      {
                        *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
                        *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                      }
                      else
                      {
                        MR_Box parse_tree__prog_mode__conv7_STATE_VARIABLE_InconsistentVars_35;
                        MR_Box parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_37;

                        {
                          mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[18], parse_tree__prog_mode__BoundInsts_12, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34)), &parse_tree__prog_mode__conv7_STATE_VARIABLE_InconsistentVars_35, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36)), &parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_37);
                        }
                        *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = ((MR_Word) parse_tree__prog_mode__conv7_STATE_VARIABLE_InconsistentVars_35);
                        *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = ((MR_Word) parse_tree__prog_mode__conv6_STATE_VARIABLE_Sub_37);
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_mode__HOInstInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));

                if ((parse_tree__prog_mode__HOInstInfo_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
                }
                else
                {
                  MR_Word parse_tree__prog_mode__Modes_89;
                  MR_Word parse_tree__prog_mode__Var_92 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo_98), (MR_Integer) 1);
                  MR_Word parse_tree__prog_mode__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_92, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_mode__Var_86;
                  MR_Word parse_tree__prog_mode__Var_87;

                  parse_tree__prog_mode__Modes_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_92, (MR_Integer) 1)));
                  parse_tree__prog_mode__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_92, (MR_Integer) 2)));
                  parse_tree__prog_mode__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_92, (MR_Integer) 3)));
                  {
                    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(parse_tree__prog_mode__Modes_89, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36, parse_tree__prog_mode__STATE_VARIABLE_Sub_37);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.gather_inconsistent_constrained_inst_vars_in_inst\'/5", (MR_String) "unconstrained inst_var");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__prog_mode__InstVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode__SubInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__Var_38;
                MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_39_39;
                MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_40_40;
                MR_Box parse_tree__prog_mode__conv11_STATE_VARIABLE_InconsistentVars_39_39;
                MR_Box parse_tree__prog_mode__conv10_STATE_VARIABLE_Sub_40_40;

                {
                  parse_tree__prog_mode__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_38, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_38, 1) = ((MR_Box) (parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0_3));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_38, 3) = ((MR_Box) (parse_tree__prog_mode__SubInst_33));
                }
                {
                  mercury__set__fold2_6_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], parse_tree__prog_mode__Var_38, parse_tree__prog_mode__InstVars_32, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34)), &parse_tree__prog_mode__conv11_STATE_VARIABLE_InconsistentVars_39_39, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36)), &parse_tree__prog_mode__conv10_STATE_VARIABLE_Sub_40_40);
                }
                parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_39_39 = ((MR_Word) parse_tree__prog_mode__conv11_STATE_VARIABLE_InconsistentVars_39_39);
                parse_tree__prog_mode__STATE_VARIABLE_Sub_40_40 = ((MR_Word) parse_tree__prog_mode__conv10_STATE_VARIABLE_Sub_40_40);
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_Inst_6 = parse_tree__prog_mode__SubInst_33;
                  MR_Word parse_tree__prog_mode__next_value_of_STATE_VARIABLE_InconsistentVars_0_34 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_39_39;
                  MR_Word parse_tree__prog_mode__next_value_of_STATE_VARIABLE_Sub_0_36 = parse_tree__prog_mode__STATE_VARIABLE_Sub_40_40;

                  parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36 = parse_tree__prog_mode__next_value_of_STATE_VARIABLE_Sub_0_36;
                  parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34 = parse_tree__prog_mode__next_value_of_STATE_VARIABLE_InconsistentVars_0_34;
                  parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__next_value_of_Inst_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word parse_tree__prog_mode__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode__ArgInsts_30;
                MR_Word parse_tree__prog_mode__Var_29;

                parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstName_28)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_mode__succeeded)
                {
                  parse_tree__prog_mode__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_28, (MR_Integer) 0)));
                  parse_tree__prog_mode__ArgInsts_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName_28, (MR_Integer) 1)));
                  {
                    parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(parse_tree__prog_mode__ArgInsts_30, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36, parse_tree__prog_mode__STATE_VARIABLE_Sub_37);
                  }
                }
                else
                {
                  *parse_tree__prog_mode__STATE_VARIABLE_Sub_37 = parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36;
                  *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35 = parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word parse_tree__prog_mode__ArgInsts_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_6, (MR_Integer) 1)));

                {
                  parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(parse_tree__prog_mode__ArgInsts_59, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_34, parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_35, parse_tree__prog_mode__STATE_VARIABLE_Sub_0_36, parse_tree__prog_mode__STATE_VARIABLE_Sub_37);
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_inst_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_35));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_37));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_insts_5_p_0(
  MR_Word parse_tree__prog_mode__Insts_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_12)
{
  {
    MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10;
    MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12;

    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[16], parse_tree__prog_mode__Insts_6, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12);
    }
    *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10);
    *parse_tree__prog_mode__STATE_VARIABLE_Sub_12 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12);
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16));
  }
}

static void MR_CALL 
parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_modes_5_p_0(
  MR_Word parse_tree__prog_mode__Modes_6,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10,
  MR_Word parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11,
  MR_Word * parse_tree__prog_mode__STATE_VARIABLE_Sub_12)
{
  {
    MR_Box parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10;
    MR_Box parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12;

    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[15], parse_tree__prog_mode__Modes_6, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_0_9)), &parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10, ((MR_Box) (parse_tree__prog_mode__STATE_VARIABLE_Sub_0_11)), &parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12);
    }
    *parse_tree__prog_mode__STATE_VARIABLE_InconsistentVars_10 = ((MR_Word) parse_tree__prog_mode__conv3_STATE_VARIABLE_InconsistentVars_10);
    *parse_tree__prog_mode__STATE_VARIABLE_Sub_12 = ((MR_Word) parse_tree__prog_mode__conv2_STATE_VARIABLE_Sub_12);
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__BoundInst0_5,
  MR_Word * parse_tree__prog_mode__BoundInst_6)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__ArgInsts_9;
    MR_Word parse_tree__prog_mode__Var_10;

    {
      parse_tree__prog_mode__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
    }
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__Var_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__BoundInst_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(
  MR_Word parse_tree__prog_mode__BoundInst0_3,
  MR_Word * parse_tree__prog_mode__BoundInst_4)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_mode__ConsId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__ConsId_7;
    MR_Word parse_tree__prog_mode__Insts_8;

    {
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__prog_mode__ConsId0_5, &parse_tree__prog_mode__ConsId_7);
    }
    parse_tree__prog_mode__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_12_12, parse_tree__prog_mode__TypeCtorInfo_12_12, (MR_Word) &parse_tree__prog_mode_scalar_common_2[14], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__BoundInst_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(
  MR_Word parse_tree__prog_mode__Mode0_3,
  MR_Word * parse_tree__prog_mode__Mode_4)
{
  if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_3)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word parse_tree__prog_mode__Initial0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Final0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Initial_7;
    MR_Word parse_tree__prog_mode__Final_8;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Initial0_5, &parse_tree__prog_mode__Initial_7);
    }
    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__Final0_6, &parse_tree__prog_mode__Final_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__Mode_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_8));
    }
  }
  else
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    MR_Word parse_tree__prog_mode__SymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Insts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Insts_11;
    MR_Word parse_tree__prog_mode__SymName_12;

    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_18, parse_tree__prog_mode__TypeCtorInfo_8_18, (MR_Word) &parse_tree__prog_mode_scalar_common_2[13], parse_tree__prog_mode__Insts0_10, &parse_tree__prog_mode__Insts_11);
    }
    {
      parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_9, &parse_tree__prog_mode__SymName_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__Mode_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__BoundInst0_5,
  MR_Word * parse_tree__prog_mode__BoundInst_6)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
    MR_Word parse_tree__prog_mode__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__ArgInsts_9;
    MR_Word parse_tree__prog_mode__Var_10;

    {
      parse_tree__prog_mode__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
    }
    parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__Var_10, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__BoundInst_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__Mode0_5,
  MR_Word * parse_tree__prog_mode__Mode_6)
{
  if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__I_9;
    MR_Word parse_tree__prog_mode__F_10;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
    }
    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__Mode_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
    }
  }
  else
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
    MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Insts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Insts_13;
    MR_Word parse_tree__prog_mode__Var_14;

    {
      parse_tree__prog_mode__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
    }
    parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__Var_14, parse_tree__prog_mode__Insts0_12, &parse_tree__prog_mode__Insts_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__Mode_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv5_Mode_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv5_Mode_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv5_Mode_6));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_mode__wrapper_arg_2;
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv4_LambdaHeadVar__2_43;

    {
      parse_tree__prog_mode__conv4_LambdaHeadVar__2_43 = parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__635__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1));
    }
    parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv4_LambdaHeadVar__2_43));
    return parse_tree__prog_mode__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv3_BoundInst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv3_BoundInst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_Mode_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Mode_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__Inst0_5,
  MR_Word * parse_tree__prog_mode__Inst_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
        break;
      case (MR_Integer) 1:
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_mode__Uniq_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode__HOInstInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__HOInstInfo_71;

          if ((parse_tree__prog_mode__HOInstInfo0_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word parse_tree__prog_mode__TypeCtorInfo_79_79;
            MR_Word parse_tree__prog_mode__Var_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_65), (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__Var_49;
            MR_Word parse_tree__prog_mode__Var_50;
            MR_Word parse_tree__prog_mode__PorF_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_48, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__Modes0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_48, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__MaybeArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_48, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_48, (MR_Integer) 3)));
            MR_Word parse_tree__prog_mode__Modes_58;

            {
              parse_tree__prog_mode__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_49, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_49, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_49, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
            }
            parse_tree__prog_mode__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__TypeCtorInfo_79_79, parse_tree__prog_mode__Var_49, parse_tree__prog_mode__Modes0_55, &parse_tree__prog_mode__Modes_58);
            }
            {
              parse_tree__prog_mode__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_54));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_58));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_56));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_50, 3) = ((MR_Box) (parse_tree__prog_mode__Det_57));
            }
            parse_tree__prog_mode__HOInstInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Var_50);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_mode__Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_64));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_71));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_mode__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__InstResults0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__BoundInsts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_86_86;
                        MR_Word parse_tree__prog_mode__Var_44;
                        MR_Word parse_tree__prog_mode__BoundInsts_72;

                        {
                          parse_tree__prog_mode__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_44, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_44, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_3));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_44, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
                        }
                        parse_tree__prog_mode__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
                        {
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__TypeCtorInfo_86_86, parse_tree__prog_mode__Var_44, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_72);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_mode__Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_72));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_mode__InstVarsResult_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 3)));
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_mode__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_mode__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 2)));
                    MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 4)));
                    MR_Word parse_tree__prog_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_17, (MR_Integer) 5)));
                    MR_Word parse_tree__prog_mode__TypeInfo_80_80;
                    MR_Word parse_tree__prog_mode__InstVarsSet_25;
                    MR_Word parse_tree__prog_mode__InstVars_26;

                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_22)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_mode__succeeded)
                    {
                      parse_tree__prog_mode__InstVarsSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_22, (MR_Integer) 0)));
                      parse_tree__prog_mode__TypeInfo_80_80 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
                      {
                        mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVarsSet_25, &parse_tree__prog_mode__InstVars_26);
                      }
                      {
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeInfo_80_80, parse_tree__prog_mode__InstVars_26, parse_tree__prog_mode__Renaming_4);
                      }
                    }
                    if (parse_tree__prog_mode__succeeded)
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                    else
                    {
                      MR_Word parse_tree__prog_mode__TypeCtorInfo_83_83;
                      MR_Word parse_tree__prog_mode__BoundInsts_27;
                      MR_Word parse_tree__prog_mode__Var_46;

                      {
                        parse_tree__prog_mode__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_46, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[6]));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_46, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_4));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_46, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
                      }
                      parse_tree__prog_mode__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
                      {
                        mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__TypeCtorInfo_83_83, parse_tree__prog_mode__Var_46, parse_tree__prog_mode__BoundInsts0_18, &parse_tree__prog_mode__BoundInsts_27);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_mode__Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_16));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_27));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__HOInstInfo_15;

              if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word parse_tree__prog_mode__TypeCtorInfo_76_76;
                MR_Word parse_tree__prog_mode__PorF_10;
                MR_Word parse_tree__prog_mode__Modes0_11;
                MR_Word parse_tree__prog_mode__MaybeArgRegs_12;
                MR_Word parse_tree__prog_mode__Det_13;
                MR_Word parse_tree__prog_mode__Modes_14;
                MR_Word parse_tree__prog_mode__Var_51 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
                MR_Word parse_tree__prog_mode__Var_52;
                MR_Word parse_tree__prog_mode__Var_53;

                parse_tree__prog_mode__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_51, (MR_Integer) 0)));
                parse_tree__prog_mode__Modes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_51, (MR_Integer) 1)));
                parse_tree__prog_mode__MaybeArgRegs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_51, (MR_Integer) 2)));
                parse_tree__prog_mode__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_51, (MR_Integer) 3)));
                {
                  parse_tree__prog_mode__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_52, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_52, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_6));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_52, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
                }
                parse_tree__prog_mode__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__TypeCtorInfo_76_76, parse_tree__prog_mode__Var_52, parse_tree__prog_mode__Modes0_11, &parse_tree__prog_mode__Modes_14);
                }
                {
                  parse_tree__prog_mode__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_53, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_10));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_53, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_14));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_53, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_12));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_53, 3) = ((MR_Box) (parse_tree__prog_mode__Det_13));
                }
                parse_tree__prog_mode__HOInstInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Var_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_mode__Var0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__Var1_29;
              MR_Word parse_tree__prog_mode__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
              MR_Box parse_tree__prog_mode__conv6_Var1_29;

              {
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0(parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__TypeInfo_87_87, parse_tree__prog_mode__Renaming_4, ((MR_Box) (parse_tree__prog_mode__Var0_28)), &parse_tree__prog_mode__conv6_Var1_29);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__Var1_29 = ((MR_Word) parse_tree__prog_mode__conv6_Var1_29);
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              if (parse_tree__prog_mode__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var1_29));
                }
              else
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_mode__TypeInfo_89_89;
              MR_Word parse_tree__prog_mode__Vars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInst0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__SubInst_32;
              MR_Word parse_tree__prog_mode__MaybeReplaceFunc_33;
              MR_Word parse_tree__prog_mode__Vars_35;

              {
                parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__SubInst0_31, &parse_tree__prog_mode__SubInst_32);
              }
              {
                parse_tree__prog_mode__MaybeReplaceFunc_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__MaybeReplaceFunc_33, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__MaybeReplaceFunc_33, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_5));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__MaybeReplaceFunc_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__MaybeReplaceFunc_33, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
              }
              parse_tree__prog_mode__TypeInfo_89_89 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
              {
                parse_tree__prog_mode__Vars_35 = mercury__set__map_2_f_0(parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__TypeInfo_89_89, parse_tree__prog_mode__MaybeReplaceFunc_33, parse_tree__prog_mode__Vars0_30);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_32));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__prog_mode__Name0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__Name1_37;

              {
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_36, &parse_tree__prog_mode__Name1_37);
              }
              if (parse_tree__prog_mode__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name1_37));
                }
              else
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_mode__TypeCtorInfo_92_92;
              MR_Word parse_tree__prog_mode__Sym_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInsts0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__SubInsts_40;
              MR_Word parse_tree__prog_mode__Var_41;

              {
                parse_tree__prog_mode__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
              }
              parse_tree__prog_mode__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__TypeCtorInfo_92_92, parse_tree__prog_mode__Var_41, parse_tree__prog_mode__SubInsts0_39, &parse_tree__prog_mode__SubInsts_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Sym_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_40));
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
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(
  MR_Word parse_tree__prog_mode__Renaming_4,
  MR_Word parse_tree__prog_mode__InstName0_5,
  MR_Word * parse_tree__prog_mode__InstName_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
      default:
        parse_tree__prog_mode__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_mode__TypeCtorInfo_18_18;
          MR_Word parse_tree__prog_mode__Sym_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode__Insts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__Insts_9;
          MR_Word parse_tree__prog_mode__Var_15;

          {
            parse_tree__prog_mode__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_15, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_15, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_15, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_4));
          }
          parse_tree__prog_mode__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
          {
            mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__TypeCtorInfo_18_18, parse_tree__prog_mode__Var_15, parse_tree__prog_mode__Insts0_8, &parse_tree__prog_mode__Insts_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_mode__InstName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Sym_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
          }
          parse_tree__prog_mode__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
          default:
            parse_tree__prog_mode__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            {
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
              parse_tree__prog_mode__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_mode__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__Name0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__Name_12;

              {
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__Renaming_4, parse_tree__prog_mode__Name0_11, &parse_tree__prog_mode__Name_12);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__InstName_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Name_12));
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return parse_tree__prog_mode__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_String parse_tree__prog_mode__conv0_HeadVar__3_50;

    {
      parse_tree__prog_mode__IntroducedFrom__pred__report_inconsistent_constrained_inst_vars__1169__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_HeadVar__3_50);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_HeadVar__3_50));
  }
}

void MR_CALL 
parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0(
  MR_String parse_tree__prog_mode__WhereDesc_6,
  MR_Word parse_tree__prog_mode__Context_7,
  MR_Word parse_tree__prog_mode__InstVarSet_8,
  MR_Word parse_tree__prog_mode__InconsistentVars_9,
  MR_Word * parse_tree__prog_mode__MaybeSpec_10)
{
  if ((parse_tree__prog_mode__InconsistentVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__MaybeSpec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__prog_mode__HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InconsistentVars_9, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InconsistentVars_9, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__VarsPieces_14;
    MR_Word parse_tree__prog_mode__Pieces_18;
    MR_Word parse_tree__prog_mode__Spec_19;
    MR_Word parse_tree__prog_mode__Var_29;
    MR_Word parse_tree__prog_mode__Var_32;
    MR_Word parse_tree__prog_mode__Var_33;
    MR_Word parse_tree__prog_mode__Var_42;
    MR_Word parse_tree__prog_mode__Var_43;
    MR_Word parse_tree__prog_mode__Var_44;
    MR_Word parse_tree__prog_mode__Var_45;

    if ((parse_tree__prog_mode__TailInstVars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_String parse_tree__prog_mode__HeadInstVarName_13;
      MR_Word parse_tree__prog_mode__Var_26;
      MR_Word parse_tree__prog_mode__Var_27;

      {
        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__InstVarSet_8, parse_tree__prog_mode__HeadInstVar_11, &parse_tree__prog_mode__HeadInstVarName_13);
      }
      {
        parse_tree__prog_mode__Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Var_27, 0) = ((MR_Box) (parse_tree__prog_mode__HeadInstVarName_13));
      }
      {
        parse_tree__prog_mode__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_26, 0) = ((MR_Box) (parse_tree__prog_mode__Var_27));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__prog_mode__VarsPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__VarsPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[14])));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__VarsPieces_14, 1) = ((MR_Box) (parse_tree__prog_mode__Var_26));
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__InstVarNames_17;
      MR_Word parse_tree__prog_mode__Var_20;
      MR_Word parse_tree__prog_mode__Var_23;

      {
        parse_tree__prog_mode__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_20, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_20, 1) = ((MR_Box) (parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_20, 3) = ((MR_Box) (parse_tree__prog_mode__InstVarSet_8));
      }
      {
        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_mode__Var_20, parse_tree__prog_mode__InconsistentVars_9, &parse_tree__prog_mode__InstVarNames_17);
      }
      {
        parse_tree__prog_mode__Var_23 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_mode__InstVarNames_17);
      }
      {
        parse_tree__prog_mode__VarsPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__VarsPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[15])));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__VarsPieces_14, 1) = ((MR_Box) (parse_tree__prog_mode__Var_23));
      }
    }
    {
      parse_tree__prog_mode__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_29, 1) = ((MR_Box) (parse_tree__prog_mode__VarsPieces_14));
    }
    {
      parse_tree__prog_mode__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Var_33, 1) = ((MR_Box) (parse_tree__prog_mode__WhereDesc_6));
    }
    {
      parse_tree__prog_mode__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_32, 0) = ((MR_Box) (parse_tree__prog_mode__Var_33));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[4])));
    }
    {
      parse_tree__prog_mode__Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_mode__Var_29, parse_tree__prog_mode__Var_32);
    }
    {
      parse_tree__prog_mode__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_45, 0) = ((MR_Box) (parse_tree__prog_mode__Pieces_18));
    }
    {
      parse_tree__prog_mode__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_44, 0) = ((MR_Box) (parse_tree__prog_mode__Var_45));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_mode__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 0) = ((MR_Box) (parse_tree__prog_mode__Context_7));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 1) = ((MR_Box) (parse_tree__prog_mode__Var_44));
    }
    {
      parse_tree__prog_mode__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_42, 0) = ((MR_Box) (parse_tree__prog_mode__Var_43));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_mode__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Spec_19, 2) = ((MR_Box) (parse_tree__prog_mode__Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__MaybeSpec_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Spec_19));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_13;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_15;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_type_and_mode_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_13, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_15);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_13));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_15));
  }
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(
  MR_Word parse_tree__prog_mode__TypeAndModes_3,
  MR_Word * parse_tree__prog_mode__InconsistentVars_4)
{
  {
    MR_Word parse_tree__prog_mode__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
    MR_Word parse_tree__prog_mode__InconsistentVarsSet_5;
    MR_Word parse_tree__prog_mode__Var_8;
    MR_Word parse_tree__prog_mode__Var_9;
    MR_Word parse_tree__prog_mode__Var_6;
    MR_Box parse_tree__prog_mode__conv3_InconsistentVarsSet_5;
    MR_Box parse_tree__prog_mode__conv2_Var_6;

    {
      parse_tree__prog_mode__Var_8 = mercury__set__init_0_f_0(parse_tree__prog_mode__TypeInfo_15_15);
    }
    {
      parse_tree__prog_mode__Var_9 = mercury__map__init_0_f_0(parse_tree__prog_mode__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[12], parse_tree__prog_mode__TypeAndModes_3, ((MR_Box) (parse_tree__prog_mode__Var_8)), &parse_tree__prog_mode__conv3_InconsistentVarsSet_5, ((MR_Box) (parse_tree__prog_mode__Var_9)), &parse_tree__prog_mode__conv2_Var_6);
    }
    parse_tree__prog_mode__InconsistentVarsSet_5 = ((MR_Word) parse_tree__prog_mode__conv3_InconsistentVarsSet_5);
    parse_tree__prog_mode__Var_6 = ((MR_Word) parse_tree__prog_mode__conv2_Var_6);
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_15_15, parse_tree__prog_mode__InconsistentVarsSet_5, parse_tree__prog_mode__InconsistentVars_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box parse_tree__prog_mode__wrapper_arg_2,
  MR_Box * parse_tree__prog_mode__wrapper_arg_3,
  MR_Box parse_tree__prog_mode__wrapper_arg_4,
  MR_Box * parse_tree__prog_mode__wrapper_arg_5)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14;
    MR_Word parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16;

    {
      parse_tree__prog_mode__gather_inconsistent_constrained_inst_vars_in_mode_5_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), ((MR_Word) parse_tree__prog_mode__wrapper_arg_2), &parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14, ((MR_Word) parse_tree__prog_mode__wrapper_arg_4), &parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16);
    }
    *parse_tree__prog_mode__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_mode__conv1_STATE_VARIABLE_InconsistentVars_14));
    *parse_tree__prog_mode__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_mode__conv0_STATE_VARIABLE_Sub_16));
  }
}

void MR_CALL 
parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(
  MR_Word parse_tree__prog_mode__Modes_3,
  MR_Word * parse_tree__prog_mode__InconsistentVars_4)
{
  {
    MR_Word parse_tree__prog_mode__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
    MR_Word parse_tree__prog_mode__InconsistentVarsSet_5;
    MR_Word parse_tree__prog_mode__Var_8;
    MR_Word parse_tree__prog_mode__Var_9;
    MR_Word parse_tree__prog_mode__Var_6;
    MR_Box parse_tree__prog_mode__conv3_InconsistentVarsSet_5;
    MR_Box parse_tree__prog_mode__conv2_Var_6;

    {
      parse_tree__prog_mode__Var_8 = mercury__set__init_0_f_0(parse_tree__prog_mode__TypeInfo_15_15);
    }
    {
      parse_tree__prog_mode__Var_9 = mercury__map__init_0_f_0(parse_tree__prog_mode__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_mode_scalar_common_1[1], (MR_Word) &parse_tree__prog_mode_scalar_common_2[0], (MR_Word) &parse_tree__prog_mode_scalar_common_2[11], parse_tree__prog_mode__Modes_3, ((MR_Box) (parse_tree__prog_mode__Var_8)), &parse_tree__prog_mode__conv3_InconsistentVarsSet_5, ((MR_Box) (parse_tree__prog_mode__Var_9)), &parse_tree__prog_mode__conv2_Var_6);
    }
    parse_tree__prog_mode__InconsistentVarsSet_5 = ((MR_Word) parse_tree__prog_mode__conv3_InconsistentVarsSet_5);
    parse_tree__prog_mode__Var_6 = ((MR_Word) parse_tree__prog_mode__conv2_Var_6);
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_15_15, parse_tree__prog_mode__InconsistentVarsSet_5, parse_tree__prog_mode__InconsistentVars_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(
  MR_Word parse_tree__prog_mode__Mode0_3,
  MR_Word * parse_tree__prog_mode__Mode_4)
{
  {
    MR_Word parse_tree__prog_mode__Var_5;

    {
      parse_tree__prog_mode__Var_5 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_mode__Var_5, parse_tree__prog_mode__Mode0_3, parse_tree__prog_mode__Mode_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__Mode0_5,
  MR_Word * parse_tree__prog_mode__Mode_6)
{
  if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word parse_tree__prog_mode__I0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__I_9;
    MR_Word parse_tree__prog_mode__F_10;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__I0_7, &parse_tree__prog_mode__I_9);
    }
    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__F0_8, &parse_tree__prog_mode__F_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__Mode_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_10));
    }
  }
  else
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_17_17;
    MR_Word parse_tree__prog_mode__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Args_13;
    MR_Word parse_tree__prog_mode__Var_14;

    {
      parse_tree__prog_mode__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_14, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
    }
    parse_tree__prog_mode__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__TypeCtorInfo_17_17, parse_tree__prog_mode__Var_14, parse_tree__prog_mode__Args0_12, &parse_tree__prog_mode__Args_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__Mode_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_13));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv3_BoundInst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv3_BoundInst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv3_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv2_BoundInst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_bound_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv2_BoundInst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv2_BoundInst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_Mode_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_Mode_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__Inst0_5,
  MR_Word * parse_tree__prog_mode__Inst_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__prog_mode__Inst0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            break;
          case (MR_Integer) 1:
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            break;
        }
        break;
      case (MR_Integer) 1:
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_mode__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));

          if ((parse_tree__prog_mode__Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
          else
          {
            MR_Word parse_tree__prog_mode__TypeCtorInfo_15_89;
            MR_Word parse_tree__prog_mode__Var_46;
            MR_Word parse_tree__prog_mode__PredInstInfo0_54 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__Var_74), (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__PredInstInfo_55;
            MR_Word parse_tree__prog_mode__PredOrFunc_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo0_54, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__Modes0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo0_54, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__MaybeArgRegs_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo0_54, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__Det_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo0_54, (MR_Integer) 3)));
            MR_Word parse_tree__prog_mode__Modes_85;
            MR_Word parse_tree__prog_mode__Var_86;

            {
              parse_tree__prog_mode__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_86, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_86, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_86, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
            }
            parse_tree__prog_mode__TypeCtorInfo_15_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_89, parse_tree__prog_mode__TypeCtorInfo_15_89, parse_tree__prog_mode__Var_86, parse_tree__prog_mode__Modes0_82, &parse_tree__prog_mode__Modes_85);
            }
            {
              parse_tree__prog_mode__PredInstInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_55, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_81));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_55, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_85));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_55, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_83));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_55, 3) = ((MR_Box) (parse_tree__prog_mode__Det_84));
            }
            parse_tree__prog_mode__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_55);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Var_75));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var_46));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));
              MR_Word parse_tree__prog_mode__Uniq_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_mode__TypeCtorInfo_66_66;
                        MR_Word parse_tree__prog_mode__Var_41;
                        MR_Word parse_tree__prog_mode__BoundInsts_56;

                        {
                          parse_tree__prog_mode__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_3));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_41, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
                        }
                        parse_tree__prog_mode__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
                        {
                          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__TypeCtorInfo_66_66, parse_tree__prog_mode__Var_41, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_56);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_mode__Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_56));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
                    MR_Word parse_tree__prog_mode__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_mode__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
                    MR_Word parse_tree__prog_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
                    MR_Word parse_tree__prog_mode__TypeInfo_59_59;
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_60_60;
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
                    MR_Word parse_tree__prog_mode__InstVars_21;

                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_mode__succeeded)
                    {
                      parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
                      parse_tree__prog_mode__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
                      {
                        mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_59_59, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                      }
                      parse_tree__prog_mode__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      {
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_60_60, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__InstConstraints_4);
                      }
                    }
                    if (parse_tree__prog_mode__succeeded)
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                    else
                    {
                      MR_Word parse_tree__prog_mode__TypeCtorInfo_63_63;
                      MR_Word parse_tree__prog_mode__BoundInsts_22;
                      MR_Word parse_tree__prog_mode__Var_43;

                      {
                        parse_tree__prog_mode__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[3]));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_4));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_43, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
                      }
                      parse_tree__prog_mode__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
                      {
                        mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__TypeCtorInfo_63_63, parse_tree__prog_mode__Var_43, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_mode__Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_57));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_mode__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));

              if ((parse_tree__prog_mode__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
              else
              {
                MR_Word parse_tree__prog_mode__PredInstInfo0_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__Var_76), (MR_Integer) 1);
                MR_Word parse_tree__prog_mode__PredInstInfo_11;
                MR_Word parse_tree__prog_mode__Var_48;

                {
                  parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__PredInstInfo0_10, &parse_tree__prog_mode__PredInstInfo_11);
                }
                parse_tree__prog_mode__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__PredInstInfo_11);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var_77));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Var_48));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_mode__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__Var_40;
              MR_Word parse_tree__prog_mode__SubInst_58;
              MR_Word parse_tree__prog_mode__SubInstPrime_31;
              MR_Box parse_tree__prog_mode__conv4_SubInstPrime_31;

              {
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__InstConstraints_4, ((MR_Box) (parse_tree__prog_mode__Var_30)), &parse_tree__prog_mode__conv4_SubInstPrime_31);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__SubInstPrime_31 = ((MR_Word) parse_tree__prog_mode__conv4_SubInstPrime_31);
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              if (parse_tree__prog_mode__succeeded)
                parse_tree__prog_mode__SubInst_58 = parse_tree__prog_mode__SubInstPrime_31;
              else
              {
                parse_tree__prog_mode__SubInst_58 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
              }
              {
                parse_tree__prog_mode__Var_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], ((MR_Box) (parse_tree__prog_mode__Var_30)));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_58));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_mode__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__SubInst1_25;
              MR_Word parse_tree__prog_mode__Vars_28;
              MR_Word parse_tree__prog_mode__SubInst_29;
              MR_Word parse_tree__prog_mode__SubVars_26;
              MR_Word parse_tree__prog_mode__SubSubInst_27;

              {
                parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__SubInst0_24, &parse_tree__prog_mode__SubInst1_25);
              }
              parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__SubInst1_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__SubVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 1)));
                parse_tree__prog_mode__SubSubInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__SubInst1_25, (MR_Integer) 2)));
                {
                  mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars0_23, parse_tree__prog_mode__SubVars_26, &parse_tree__prog_mode__Vars_28);
                }
                parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubSubInst_27;
              }
              else
              {
                parse_tree__prog_mode__Vars_28 = parse_tree__prog_mode__Vars0_23;
                parse_tree__prog_mode__SubInst_29 = parse_tree__prog_mode__SubInst1_25;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__prog_mode__Name0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__Name_33;

              {
                parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(parse_tree__prog_mode__InstConstraints_4, parse_tree__prog_mode__Name0_32, &parse_tree__prog_mode__Name_33);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_mode__TypeCtorInfo_73_73;
              MR_Word parse_tree__prog_mode__InstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__SubInsts_36;
              MR_Word parse_tree__prog_mode__Var_37;

              {
                parse_tree__prog_mode__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_37, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_37, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_37, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
              }
              parse_tree__prog_mode__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__TypeCtorInfo_73_73, parse_tree__prog_mode__Var_37, parse_tree__prog_mode__SubInsts0_35, &parse_tree__prog_mode__SubInsts_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInsts_36));
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
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_inst_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__Name0_5,
  MR_Word * parse_tree__prog_mode__Name_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__Name0_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__SymName_7;
    MR_Word parse_tree__prog_mode__Args0_8;

    if (parse_tree__prog_mode__succeeded)
    {
      parse_tree__prog_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 0)));
      parse_tree__prog_mode__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Name0_5, (MR_Integer) 1)));
      {
        MR_Word parse_tree__prog_mode__TypeCtorInfo_13_13;
        MR_Word parse_tree__prog_mode__Args_9;
        MR_Word parse_tree__prog_mode__Var_10;

        {
          parse_tree__prog_mode__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_inst_name_3_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_10, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
        }
        parse_tree__prog_mode__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        {
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__TypeCtorInfo_13_13, parse_tree__prog_mode__Var_10, parse_tree__prog_mode__Args0_8, &parse_tree__prog_mode__Args_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_mode__Name_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_9));
        }
      }
    }
    else
      *parse_tree__prog_mode__Name_6 = parse_tree__prog_mode__Name0_5;
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
  }
}

static void MR_CALL 
parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0(
  MR_Word parse_tree__prog_mode__InstConstraints_4,
  MR_Word parse_tree__prog_mode__PII0_5,
  MR_Word * parse_tree__prog_mode__PII_6)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_15_15;
    MR_Word parse_tree__prog_mode__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Modes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 2)));
    MR_Word parse_tree__prog_mode__Det_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PII0_5, (MR_Integer) 3)));
    MR_Word parse_tree__prog_mode__Modes_11;
    MR_Word parse_tree__prog_mode__Var_12;

    {
      parse_tree__prog_mode__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 1) = ((MR_Box) (parse_tree__prog_mode__constrain_inst_vars_in_pred_inst_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 3) = ((MR_Box) (parse_tree__prog_mode__InstConstraints_4));
    }
    parse_tree__prog_mode__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__TypeCtorInfo_15_15, parse_tree__prog_mode__Var_12, parse_tree__prog_mode__Modes0_8, &parse_tree__prog_mode__Modes_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_mode__PII_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_mode__Det_10));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(
  MR_Word parse_tree__prog_mode__Inst0_3,
  MR_Word * parse_tree__prog_mode__Inst_4)
{
  switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word parse_tree__prog_mode__TypeCtorInfo_8_43;
        MR_Word parse_tree__prog_mode__SymName0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_mode__Insts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_mode__SymName_7;
        MR_Word parse_tree__prog_mode__Insts_8;

        {
          parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__SymName0_5, &parse_tree__prog_mode__SymName_7);
        }
        parse_tree__prog_mode__TypeCtorInfo_8_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        {
          mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_43, parse_tree__prog_mode__TypeCtorInfo_8_43, (MR_Word) &parse_tree__prog_mode_scalar_common_2[10], parse_tree__prog_mode__Insts0_6, &parse_tree__prog_mode__Insts_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_mode__Inst_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__SymName_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word parse_tree__prog_mode__Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_mode__Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_mode__InstA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_mode__InstB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_mode__InstA_13;
        MR_Word parse_tree__prog_mode__InstB_14;

        {
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_11, &parse_tree__prog_mode__InstA_13);
        }
        {
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_12, &parse_tree__prog_mode__InstB_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_mode__Inst_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Live_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Real_10));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstA_13));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_mode__InstB_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word parse_tree__prog_mode__InstA0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_mode__InstB0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_mode__InstA_23;
        MR_Word parse_tree__prog_mode__InstB_24;

        {
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstA0_21, &parse_tree__prog_mode__InstA_23);
        }
        {
          parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__InstB0_22, &parse_tree__prog_mode__InstB_24);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_mode__Inst_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__InstA_23));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstB_24));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_mode__InstName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
            MR_Word parse_tree__prog_mode__InstName_17;
            MR_Word parse_tree__prog_mode__Live_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__Real_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_15, &parse_tree__prog_mode__InstName_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_16 | ((((parse_tree__prog_mode__Live_25 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_26 << (MR_Integer) 4)))))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_mode__Live_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__Real_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__Uniq_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)))) & (MR_Integer) 7);
            MR_Word parse_tree__prog_mode__InstName_31;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_31);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_31));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((parse_tree__prog_mode__Uniq_30 | ((((parse_tree__prog_mode__Live_27 << (MR_Integer) 3)) | ((parse_tree__prog_mode__Real_28 << (MR_Integer) 4)))))));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_mode__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__InstName_33;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_32, &parse_tree__prog_mode__InstName_33);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_33));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__prog_mode__InstName0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__InstName_35;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_34, &parse_tree__prog_mode__InstName_35);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_35));
            }
          }
          break;
        case (MR_Integer) 4:
          *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
          break;
        case (MR_Integer) 5:
          {
            MR_Word parse_tree__prog_mode__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__InstName0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__InstName_37;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_36, &parse_tree__prog_mode__InstName_37);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Type_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstName_37));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_2(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv1_BoundInst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv1_BoundInst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv1_BoundInst_4));
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(
  MR_Word parse_tree__prog_mode__Inst0_3,
  MR_Word * parse_tree__prog_mode__Inst_4)
{
  switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
      break;
    case (MR_Integer) 1:
      *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
      break;
    case (MR_Integer) 2:
      {
        MR_Word parse_tree__prog_mode__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_mode__HOInstInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_mode__HOInstInfo_12;

        if ((parse_tree__prog_mode__HOInstInfo0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_mode__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word parse_tree__prog_mode__Pred0_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_11), (MR_Integer) 1);
          MR_Word parse_tree__prog_mode__PorF_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_34, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode__Modes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_34, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__ArgRegs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_34, (MR_Integer) 2)));
          MR_Word parse_tree__prog_mode__Det_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_34, (MR_Integer) 3)));
          MR_Word parse_tree__prog_mode__Modes_39;
          MR_Word parse_tree__prog_mode__Pred_40;

          {
            parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(parse_tree__prog_mode__Modes0_36, &parse_tree__prog_mode__Modes_39);
          }
          {
            parse_tree__prog_mode__Pred_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_40, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_35));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_40, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_39));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_40, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_37));
            MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_40, 3) = ((MR_Box) (parse_tree__prog_mode__Det_38));
          }
          parse_tree__prog_mode__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_40);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_mode__Inst_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_mode__TypeCtorInfo_8_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
            MR_Word parse_tree__prog_mode__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__BoundInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 3)));
            MR_Word parse_tree__prog_mode__BoundInsts_15;
            MR_Word parse_tree__prog_mode__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));

            {
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_46, parse_tree__prog_mode__TypeCtorInfo_8_46, (MR_Word) &parse_tree__prog_mode_scalar_common_2[9], parse_tree__prog_mode__BoundInsts0_14, &parse_tree__prog_mode__BoundInsts_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_25));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__InstResults_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_15));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_mode__Uniq_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__HOInstInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__HOInstInfo_24;

            if ((parse_tree__prog_mode__HOInstInfo0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__prog_mode__HOInstInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
            {
              MR_Word parse_tree__prog_mode__Pred0_49 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_23), (MR_Integer) 1);
              MR_Word parse_tree__prog_mode__PorF_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_49, (MR_Integer) 0)));
              MR_Word parse_tree__prog_mode__Modes0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_49, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__ArgRegs_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_49, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__Det_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred0_49, (MR_Integer) 3)));
              MR_Word parse_tree__prog_mode__Modes_54;
              MR_Word parse_tree__prog_mode__Pred_55;

              {
                parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(parse_tree__prog_mode__Modes0_51, &parse_tree__prog_mode__Modes_54);
              }
              {
                parse_tree__prog_mode__Pred_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_55, 0) = ((MR_Box) (parse_tree__prog_mode__PorF_50));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_55, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_54));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_55, 2) = ((MR_Box) (parse_tree__prog_mode__ArgRegs_52));
                MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Pred_55, 3) = ((MR_Box) (parse_tree__prog_mode__Det_53));
              }
              parse_tree__prog_mode__HOInstInfo_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Pred_55);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_22));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_24));
            }
          }
          break;
        case (MR_Integer) 2:
          *parse_tree__prog_mode__Inst_4 = parse_tree__prog_mode__Inst0_3;
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__prog_mode__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__SubInst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__SubInst_9;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(parse_tree__prog_mode__SubInst0_8, &parse_tree__prog_mode__SubInst_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word parse_tree__prog_mode__InstName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__InstName_17;

            {
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_p_0(parse_tree__prog_mode__InstName0_16, &parse_tree__prog_mode__InstName_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word parse_tree__prog_mode__TypeCtorInfo_8_31;
            MR_Word parse_tree__prog_mode__Name0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_3, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__Name_20;
            MR_Word parse_tree__prog_mode__Args_21;

            {
              parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(parse_tree__prog_mode__Name0_18, &parse_tree__prog_mode__Name_20);
            }
            parse_tree__prog_mode__TypeCtorInfo_8_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
            {
              mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_31, parse_tree__prog_mode__TypeCtorInfo_8_31, (MR_Word) &parse_tree__prog_mode_scalar_common_2[8], parse_tree__prog_mode__Args0_19, &parse_tree__prog_mode__Args_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Inst_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Args_21));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Inst_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Inst_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Inst_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_p_0(
  MR_Word parse_tree__prog_mode__Insts0_3,
  MR_Word * parse_tree__prog_mode__Insts_4)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;

    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[7], parse_tree__prog_mode__Insts0_3, parse_tree__prog_mode__Insts_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Mode_4;

    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_p_0(((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_4);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_4));
  }
}

void MR_CALL 
parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(
  MR_Word parse_tree__prog_mode__Modes0_3,
  MR_Word * parse_tree__prog_mode__Modes_4)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;

    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_8_8, parse_tree__prog_mode__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_mode_scalar_common_2[6], parse_tree__prog_mode__Modes0_3, parse_tree__prog_mode__Modes_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_id_to_int_2_p_0(
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Integer * parse_tree__prog_mode__X_4)
{
  {
    MR_Word parse_tree__prog_mode__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

    *parse_tree__prog_mode__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
  }
}

void MR_CALL 
parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(
  MR_Word parse_tree__prog_mode__TypeCtor_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word parse_tree__prog_mode__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__ConsId_8;
      MR_Word parse_tree__prog_mode__ConsIds_9;
      MR_Word parse_tree__prog_mode__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode___ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_6, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__SymName_15;
      MR_Integer parse_tree__prog_mode__Arity_16;
      MR_Word parse_tree__prog_mode___TypeCtor_17;

      parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (parse_tree__prog_mode__succeeded)
      {
        parse_tree__prog_mode__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 1)));
        parse_tree__prog_mode__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 2)));
        parse_tree__prog_mode___TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_13, (MR_Integer) 3)));
        {
          parse_tree__prog_mode__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_15));
          MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_16));
          MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId_8, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_1));
        }
      }
      else
        parse_tree__prog_mode__ConsId_8 = parse_tree__prog_mode__ConsId0_13;
      {
        parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(parse_tree__prog_mode__TypeCtor_1, parse_tree__prog_mode__BoundInsts_7, &parse_tree__prog_mode__ConsIds_9);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_mode__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__ConsId_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__ConsIds_9));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(
  MR_Word parse_tree__prog_mode__TypeCtor_4,
  MR_Word parse_tree__prog_mode__BoundInst_5,
  MR_Word * parse_tree__prog_mode__ConsId_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;
    MR_Word parse_tree__prog_mode__ConsId0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode___ArgInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_5, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__SymName_9;
    MR_Integer parse_tree__prog_mode__Arity_10;
    MR_Word parse_tree__prog_mode___TypeCtor_11;

    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__ConsId0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (parse_tree__prog_mode__succeeded)
    {
      parse_tree__prog_mode__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 1)));
      parse_tree__prog_mode__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 2)));
      parse_tree__prog_mode___TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__ConsId0_7, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_mode__ConsId_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__SymName_9));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__Arity_10));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__TypeCtor_4));
      }
    }
    else
      *parse_tree__prog_mode__ConsId_6 = parse_tree__prog_mode__ConsId0_7;
  }
}

void MR_CALL 
parse_tree__prog_mode__get_arg_insts_det_4_p_0(
  MR_Word parse_tree__prog_mode__Inst_5,
  MR_Word parse_tree__prog_mode__ConsId_6,
  MR_Integer parse_tree__prog_mode__Arity_7,
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;
    MR_Word parse_tree__prog_mode__ArgInstsPrime_9;

    {
      parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(parse_tree__prog_mode__Inst_5, parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__Arity_7, &parse_tree__prog_mode__ArgInstsPrime_9);
    }
    if (parse_tree__prog_mode__succeeded)
      *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInstsPrime_9;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts_det\'/4", (MR_String) "get_arg_insts failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_4_p_0(
  MR_Word parse_tree__prog_mode__Inst_5,
  MR_Word parse_tree__prog_mode__ConsId_6,
  MR_Integer parse_tree__prog_mode__Arity_7,
  MR_Word * parse_tree__prog_mode__ArgInsts_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__prog_mode__succeeded;

      switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst_5)) {
        default:
          parse_tree__prog_mode__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_mode__Inst_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__prog_mode__ArgInsts_8);
            }
            parse_tree__prog_mode__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_mode__Var_25;
            MR_Word parse_tree__prog_mode__Uniq_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

            {
              parse_tree__prog_mode__Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Var_25, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_32));
              MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__Var_25)), parse_tree__prog_mode__ArgInsts_8);
            }
            parse_tree__prog_mode__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 0)))) {
            default:
              parse_tree__prog_mode__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 3)));
                MR_Word parse_tree__prog_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode___InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__ArgInsts0_14;

                {
                  parse_tree__prog_mode__succeeded = parse_tree__prog_mode__get_arg_insts_2_3_p_0(parse_tree__prog_mode__BoundInsts_13, parse_tree__prog_mode__ConsId_6, &parse_tree__prog_mode__ArgInsts0_14);
                }
                if (parse_tree__prog_mode__succeeded)
                  *parse_tree__prog_mode__ArgInsts_8 = parse_tree__prog_mode__ArgInsts0_14;
                else
                {
                  {
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), parse_tree__prog_mode__ArgInsts_8);
                  }
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode__Var_29;
                MR_Word parse_tree__prog_mode___PredInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));

                {
                  parse_tree__prog_mode__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Var_29, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_9));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Var_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Arity_7, ((MR_Box) (parse_tree__prog_mode__Var_29)), parse_tree__prog_mode__ArgInsts_8);
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__prog_mode__SubInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode___Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst_5, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_Inst_5 = parse_tree__prog_mode__SubInst_19;

                  parse_tree__prog_mode__Inst_5 = parse_tree__prog_mode__next_value_of_Inst_5;
                }
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mode.get_arg_insts\'/4", (MR_String) "defined_inst");
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      return parse_tree__prog_mode__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__get_arg_insts_2_3_p_0(
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Word parse_tree__prog_mode__ConsId_6,
  MR_Word * parse_tree__prog_mode__ArgInsts_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__BoundInst_4;
      MR_Word parse_tree__prog_mode__BoundInsts_5;
      MR_Word parse_tree__prog_mode__ArgInsts0_9;
      MR_Word parse_tree__prog_mode__FunctorConsId_8;

      if (parse_tree__prog_mode__succeeded)
      {
        parse_tree__prog_mode__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
        parse_tree__prog_mode__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
        parse_tree__prog_mode__FunctorConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 0)));
        parse_tree__prog_mode__ArgInsts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_4, (MR_Integer) 1)));
        {
          parse_tree__prog_mode__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(parse_tree__prog_mode__ConsId_6, parse_tree__prog_mode__FunctorConsId_8);
        }
        if (parse_tree__prog_mode__succeeded)
        {
          *parse_tree__prog_mode__ArgInsts_7 = parse_tree__prog_mode__ArgInsts0_9;
          parse_tree__prog_mode__succeeded = MR_TRUE;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__prog_mode__next_value_of_HeadVar__1_1 = parse_tree__prog_mode__BoundInsts_5;

            parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return parse_tree__prog_mode__succeeded;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5);
    {
      parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_2(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__SubInst_5);
    }
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded)
      {
        parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_mode__SubInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));

          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__conv0_SubInst_5, parse_tree__prog_mode__SubInsts_4, parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
        }
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(
  MR_Word parse_tree__prog_mode__InstName_2)
{
  {
    struct parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__InstName_2;
    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2)) {
        default:
          (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            {
              parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_mode__SubInstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__SubInstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 3)));
            MR_Word parse_tree__prog_mode__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

            {
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_8);
            }
            if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
              {
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_9);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_mode__SubInstA_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__SubInstB_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

            {
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstA_20);
            }
            if (!((parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded))
              {
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__SubInstB_21);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 0)))) {
            default:
              (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_mode__SubInstName_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
                MR_Word parse_tree__prog_mode__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word parse_tree__prog_mode__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_InstName_2 = parse_tree__prog_mode__SubInstName_10;

                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__next_value_of_InstName_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_mode__SubInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));
                MR_Word parse_tree__prog_mode__Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) & (MR_Integer) 7);
                MR_Word parse_tree__prog_mode__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word parse_tree__prog_mode__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_InstName_2 = parse_tree__prog_mode__SubInstName_22;

                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__next_value_of_InstName_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__prog_mode__SubInstName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_InstName_2 = parse_tree__prog_mode__SubInstName_23;

                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__next_value_of_InstName_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__prog_mode__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_InstName_2 = parse_tree__prog_mode__SubInstName_24;

                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__next_value_of_InstName_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word parse_tree__prog_mode__SubInstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 2)));
                MR_Word parse_tree__prog_mode__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_mode__next_value_of_InstName_2 = parse_tree__prog_mode__SubInstName_25;

                  (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__InstName_2 = parse_tree__prog_mode__next_value_of_InstName_2;
                }
                continue;
              }
              break;
          }
          break;
      }
      return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0_env_0__succeeded;
      break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13);
    }
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_5(parse_tree__prog_mode__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_6(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__prog_mode__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__Var_78;
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
      }
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_13 = parse_tree__prog_mode__Var_77;
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_8(parse_tree__prog_mode__env_ptr);
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__SubInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_12, (MR_Integer) 0)));

      {
        mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv2_SubInst_13, parse_tree__prog_mode__SubInsts_17, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_9, parse_tree__prog_mode__env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_41;
          MR_Word parse_tree__prog_mode__GroundInstInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__PredInstInfo_7;
          MR_Word parse_tree__prog_mode__Modes_9;
          MR_Word parse_tree__prog_mode___Uniq_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode___PredOrFunc_8;
          MR_Word parse_tree__prog_mode___MaybeArgRegs_10;
          MR_Word parse_tree__prog_mode___Detism_11;

          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_6)) == (MR_mktag((MR_Integer) 1)));
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            parse_tree__prog_mode__PredInstInfo_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_6), (MR_Integer) 1);
            {
              parse_tree__prog_mode___PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 0)));
              parse_tree__prog_mode__Modes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 1)));
              parse_tree__prog_mode___MaybeArgRegs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 2)));
              parse_tree__prog_mode___Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_7, (MR_Integer) 3)));
              parse_tree__prog_mode__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
              {
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_41, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv1_Mode_12, parse_tree__prog_mode__Modes_9, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_7, parse_tree__prog_mode__env_ptr);
              }
            }
          }
        }
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_14(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_30);
    }
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_11(parse_tree__prog_mode__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_12(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      MR_Word parse_tree__prog_mode___ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 0)));

      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__BoundInst_27, (MR_Integer) 1)));
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
      {
        mercury__list__member_2_p_1((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__TypeCtorInfo_45_45, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv4_ArgInst_30, (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInsts_29, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_15, parse_tree__prog_mode__env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_2) == 0)
      {
        {
          MR_Word parse_tree__prog_mode__TypeCtorInfo_44_44;
          MR_Word parse_tree__prog_mode__InstResults_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
          MR_Word parse_tree__prog_mode__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 3)));
          MR_Word parse_tree__prog_mode___Uniq_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

          if ((parse_tree__prog_mode__InstResults_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) parse_tree__prog_mode__InstResults_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__prog_mode__InstVarsResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 3)));
            MR_Word parse_tree__prog_mode__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 0)));
            MR_Word parse_tree__prog_mode__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 1)));
            MR_Word parse_tree__prog_mode__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 2)));
            MR_Word parse_tree__prog_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 4)));
            MR_Word parse_tree__prog_mode__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults_18, (MR_Integer) 5)));

            if ((parse_tree__prog_mode__InstVarsResult_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
            else
            {
              MR_Word parse_tree__prog_mode__InstVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_23, (MR_Integer) 0)));

              {
                (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__InstVars_26);
              }
            }
          }
          else
            (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            parse_tree__prog_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
            {
              mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_44_44, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv3_BoundInst_27, parse_tree__prog_mode__BoundInsts_19, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_13, parse_tree__prog_mode__env_ptr);
            }
          }
        }
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70);
    }
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_17(parse_tree__prog_mode__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_18(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (((MR_tag((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__prog_mode__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__Var_80;
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
      }
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__SubInst_70 = parse_tree__prog_mode__Var_79;
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_20(parse_tree__prog_mode__env_ptr);
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__SubInsts_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode___SymName_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Mode_69, (MR_Integer) 0)));

      {
        mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv6_SubInst_70, parse_tree__prog_mode__SubInsts_56, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_21, parse_tree__prog_mode__env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_3) == 0)
      {
        {
          MR_Word parse_tree__prog_mode__TypeCtorInfo_41_75;
          MR_Word parse_tree__prog_mode__GroundInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
          MR_Word parse_tree__prog_mode__PredInstInfo_64;
          MR_Word parse_tree__prog_mode__Modes_66;
          MR_Word parse_tree__prog_mode___Uniq_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode___PredOrFunc_47;
          MR_Word parse_tree__prog_mode___MaybeArgRegs_48;
          MR_Word parse_tree__prog_mode___Detism_49;

          (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__GroundInstInfo_63)) == (MR_mktag((MR_Integer) 1)));
          if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
          {
            parse_tree__prog_mode__PredInstInfo_64 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__GroundInstInfo_63), (MR_Integer) 1);
            {
              parse_tree__prog_mode___PredOrFunc_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 0)));
              parse_tree__prog_mode__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 1)));
              parse_tree__prog_mode___MaybeArgRegs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 2)));
              parse_tree__prog_mode___Detism_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__PredInstInfo_64, (MR_Integer) 3)));
              parse_tree__prog_mode__TypeCtorInfo_41_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
              {
                mercury__list__member_2_p_1(parse_tree__prog_mode__TypeCtorInfo_41_75, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv5_Mode_69, parse_tree__prog_mode__Modes_66, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_19, parse_tree__prog_mode__env_ptr);
              }
            }
          }
        }
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40 = ((MR_Word) (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40);
    {
      parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(parse_tree__prog_mode__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_2(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    {
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__ArgInst_40);
    }
    if ((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded)
      {
        parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_1(parse_tree__prog_mode__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(
  void * parse_tree__prog_mode__env_ptr_arg)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s * parse_tree__prog_mode__env_ptr = (struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s *) parse_tree__prog_mode__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_mode__ArgInsts_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 2)));
          MR_Word parse_tree__prog_mode___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__conv0_ArgInst_40, parse_tree__prog_mode__ArgInsts_39, parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_3, parse_tree__prog_mode__env_ptr);
          }
        }
        (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_mode__env_ptr)->parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(
  MR_Word parse_tree__prog_mode__Inst_2)
{
  {
    struct parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0_s parse_tree__prog_mode__env;

    (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2 = parse_tree__prog_mode__Inst_2;
    switch (MR_tag((MR_Word) (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2)) {
      default:
        (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          {
            parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_10(&parse_tree__prog_mode__env);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 0)))) {
          default:
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              {
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_16(&parse_tree__prog_mode__env);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_22(&parse_tree__prog_mode__env);
              }
            }
            break;
          case (MR_Integer) 2:
            (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__prog_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__Inst_2, (MR_Integer) 1)));

              {
                (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded = parse_tree__prog_mode__inst_name_contains_unconstrained_var_1_p_0(parse_tree__prog_mode__InstName_31);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_4(&parse_tree__prog_mode__env);
              }
            }
            break;
        }
        break;
    }
    return (parse_tree__prog_mode__env).parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1(
  MR_Box parse_tree__prog_mode__closure_arg,
  MR_Box parse_tree__prog_mode__wrapper_arg_1,
  MR_Box * parse_tree__prog_mode__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_mode__closure = parse_tree__prog_mode__closure_arg;
    MR_Word parse_tree__prog_mode__conv0_Mode_6;

    {
      parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_mode__wrapper_arg_1), &parse_tree__prog_mode__conv0_Mode_6);
    }
    *parse_tree__prog_mode__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_mode__conv0_Mode_6));
  }
}

void MR_CALL 
parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(
  MR_Word parse_tree__prog_mode__VarSet_6,
  MR_Word parse_tree__prog_mode__NewVarSet_7,
  MR_Word * parse_tree__prog_mode__MergedVarSet_8,
  MR_Word parse_tree__prog_mode__Modes0_9,
  MR_Word * parse_tree__prog_mode__Modes_10)
{
  {
    MR_Word parse_tree__prog_mode__TypeCtorInfo_16_16;
    MR_Word parse_tree__prog_mode__Renaming_11;
    MR_Word parse_tree__prog_mode__Var_12;

    {
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_mode__VarSet_6, parse_tree__prog_mode__NewVarSet_7, parse_tree__prog_mode__MergedVarSet_8, &parse_tree__prog_mode__Renaming_11);
    }
    {
      parse_tree__prog_mode__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 0) = ((MR_Box) (&parse_tree__prog_mode_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 1) = ((MR_Box) (parse_tree__prog_mode__rename_apart_inst_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_12, 3) = ((MR_Box) (parse_tree__prog_mode__Renaming_11));
    }
    parse_tree__prog_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__TypeCtorInfo_16_16, parse_tree__prog_mode__Var_12, parse_tree__prog_mode__Modes0_9, parse_tree__prog_mode__Modes_10);
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_4,
  MR_Word parse_tree__prog_mode__Insts0_5,
  MR_Word * parse_tree__prog_mode__Insts_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    {
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
    if (parse_tree__prog_mode__succeeded)
      *parse_tree__prog_mode__Insts_6 = parse_tree__prog_mode__Insts0_5;
    else
      {
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Insts0_5, parse_tree__prog_mode__Insts_6);
      }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(
  MR_Word parse_tree__prog_mode__Params_5,
  MR_Word parse_tree__prog_mode__Args_6,
  MR_Word parse_tree__prog_mode__Inst0_7,
  MR_Word * parse_tree__prog_mode__Inst_8)
{
  if ((parse_tree__prog_mode__Params_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__Inst_8 = parse_tree__prog_mode__Inst0_7;
  else
  {
    MR_Word parse_tree__prog_mode__Subst_11;

    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_5, parse_tree__prog_mode__Args_6, &parse_tree__prog_mode__Subst_11);
    }
    {
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Inst0_7, parse_tree__prog_mode__Inst_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word parse_tree__prog_mode__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));

    if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_lists_to_mode_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__Final_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__Finals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Mode_20;
      MR_Word parse_tree__prog_mode__Modes_21;

      {
        parse_tree__prog_mode__insts_to_mode_3_p_0(parse_tree__prog_mode__Var_23, parse_tree__prog_mode__Final_18, &parse_tree__prog_mode__Mode_20);
      }
      {
        parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(parse_tree__prog_mode__Var_22, parse_tree__prog_mode__Finals_19, &parse_tree__prog_mode__Modes_21);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_mode__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_21));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__insts_to_mode_3_p_0(
  MR_Word parse_tree__prog_mode__Initial_4,
  MR_Word parse_tree__prog_mode__Final_5,
  MR_Word * parse_tree__prog_mode__Mode_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Initial_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (parse_tree__prog_mode__succeeded)
    {
      MR_Word parse_tree__prog_mode__Var_7;
      MR_Word parse_tree__prog_mode__Var_8;

      parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (parse_tree__prog_mode__succeeded)
      {
        parse_tree__prog_mode__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
        parse_tree__prog_mode__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_7 == (MR_Integer) 0);
        if (parse_tree__prog_mode__succeeded)
          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (parse_tree__prog_mode__succeeded)
      {
        MR_Word parse_tree__prog_mode__MercuryBuiltin_66;
        MR_Word parse_tree__prog_mode__QualifiedName_67;

        {
          parse_tree__prog_mode__MercuryBuiltin_66 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          parse_tree__prog_mode__QualifiedName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_66));
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_67, 1) = ((MR_Box) ((MR_String) "out"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_mode__Mode_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_67));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word parse_tree__prog_mode__Var_11;
        MR_Word parse_tree__prog_mode__Var_12;

        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (parse_tree__prog_mode__succeeded)
        {
          parse_tree__prog_mode__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
          parse_tree__prog_mode__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_11 == (MR_Integer) 1);
          if (parse_tree__prog_mode__succeeded)
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (parse_tree__prog_mode__succeeded)
        {
          MR_Word parse_tree__prog_mode__MercuryBuiltin_73;
          MR_Word parse_tree__prog_mode__QualifiedName_74;

          {
            parse_tree__prog_mode__MercuryBuiltin_73 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          }
          {
            parse_tree__prog_mode__QualifiedName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_73));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_74, 1) = ((MR_Box) ((MR_String) "uo"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_mode__Mode_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_74));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          MR_Word parse_tree__prog_mode__Var_15;
          MR_Word parse_tree__prog_mode__Var_16;

          parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (parse_tree__prog_mode__succeeded)
          {
            parse_tree__prog_mode__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
            parse_tree__prog_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_15 == (MR_Integer) 2);
            if (parse_tree__prog_mode__succeeded)
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (parse_tree__prog_mode__succeeded)
          {
            MR_Word parse_tree__prog_mode__MercuryBuiltin_80;
            MR_Word parse_tree__prog_mode__QualifiedName_81;

            {
              parse_tree__prog_mode__MercuryBuiltin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              parse_tree__prog_mode__QualifiedName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_80));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_81, 1) = ((MR_Box) ((MR_String) "muo"));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Mode_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_81));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            MR_Word parse_tree__prog_mode__Var_20;
            MR_Word parse_tree__prog_mode__MercuryBuiltin_87;
            MR_Word parse_tree__prog_mode__QualifiedName_88;

            {
              parse_tree__prog_mode__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_20, 0) = ((MR_Box) (parse_tree__prog_mode__Final_5));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_mode__MercuryBuiltin_87 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              parse_tree__prog_mode__QualifiedName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_87));
              MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_88, 1) = ((MR_Box) ((MR_String) "out"));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_mode__Mode_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_88));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Var_20));
            }
          }
        }
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__Var_22;
      MR_Word parse_tree__prog_mode__Var_23;
      MR_Word parse_tree__prog_mode__Var_24;
      MR_Word parse_tree__prog_mode__Var_25;

      parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (parse_tree__prog_mode__succeeded)
      {
        parse_tree__prog_mode__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
        parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_22 == (MR_Integer) 0);
        if (parse_tree__prog_mode__succeeded)
        {
          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__prog_mode__succeeded)
          {
            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (parse_tree__prog_mode__succeeded)
            {
              parse_tree__prog_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
              parse_tree__prog_mode__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_24 == (MR_Integer) 0);
              if (parse_tree__prog_mode__succeeded)
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
      if (parse_tree__prog_mode__succeeded)
      {
        MR_Word parse_tree__prog_mode__MercuryBuiltin_94;
        MR_Word parse_tree__prog_mode__QualifiedName_95;

        {
          parse_tree__prog_mode__MercuryBuiltin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          parse_tree__prog_mode__QualifiedName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_94));
          MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_95, 1) = ((MR_Box) ((MR_String) "in"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_mode__Mode_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_95));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word parse_tree__prog_mode__Var_28;
        MR_Word parse_tree__prog_mode__Var_29;
        MR_Word parse_tree__prog_mode__Var_30;
        MR_Word parse_tree__prog_mode__Var_31;

        parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (parse_tree__prog_mode__succeeded)
        {
          parse_tree__prog_mode__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
          parse_tree__prog_mode__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
          parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_28 == (MR_Integer) 1);
          if (parse_tree__prog_mode__succeeded)
          {
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__prog_mode__succeeded)
            {
              parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
                parse_tree__prog_mode__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_30 == (MR_Integer) 3);
                if (parse_tree__prog_mode__succeeded)
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
        if (parse_tree__prog_mode__succeeded)
        {
          {
            parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
          }
        }
        else
        {
          MR_Word parse_tree__prog_mode__Var_34;
          MR_Word parse_tree__prog_mode__Var_35;
          MR_Word parse_tree__prog_mode__Var_36;
          MR_Word parse_tree__prog_mode__Var_37;

          parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (parse_tree__prog_mode__succeeded)
          {
            parse_tree__prog_mode__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
            parse_tree__prog_mode__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
            parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_34 == (MR_Integer) 2);
            if (parse_tree__prog_mode__succeeded)
            {
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_mode__succeeded)
                {
                  parse_tree__prog_mode__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
                  parse_tree__prog_mode__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_36 == (MR_Integer) 4);
                  if (parse_tree__prog_mode__succeeded)
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
          if (parse_tree__prog_mode__succeeded)
          {
            {
              parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mdi", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
            }
          }
          else
          {
            MR_Word parse_tree__prog_mode__Var_40;
            MR_Word parse_tree__prog_mode__Var_41;
            MR_Word parse_tree__prog_mode__Var_42;
            MR_Word parse_tree__prog_mode__Var_43;

            parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (parse_tree__prog_mode__succeeded)
            {
              parse_tree__prog_mode__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
              parse_tree__prog_mode__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
              parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_40 == (MR_Integer) 1);
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__prog_mode__succeeded)
                {
                  parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (parse_tree__prog_mode__succeeded)
                  {
                    parse_tree__prog_mode__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
                    parse_tree__prog_mode__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_42 == (MR_Integer) 1);
                    if (parse_tree__prog_mode__succeeded)
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
            }
            if (parse_tree__prog_mode__succeeded)
            {
              {
                parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "ui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
              }
            }
            else
            {
              MR_Word parse_tree__prog_mode__Var_46;
              MR_Word parse_tree__prog_mode__Var_47;
              MR_Word parse_tree__prog_mode__Var_48;
              MR_Word parse_tree__prog_mode__Var_49;

              parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Initial_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 1)));
                parse_tree__prog_mode__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Initial_4, (MR_Integer) 2)));
                parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_46 == (MR_Integer) 2);
                if (parse_tree__prog_mode__succeeded)
                {
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (parse_tree__prog_mode__succeeded)
                  {
                    parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (parse_tree__prog_mode__succeeded)
                    {
                      parse_tree__prog_mode__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
                      parse_tree__prog_mode__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
                      parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_48 == (MR_Integer) 2);
                      if (parse_tree__prog_mode__succeeded)
                        parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                }
              }
              if (parse_tree__prog_mode__succeeded)
              {
                {
                  parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "mui", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_mode__Mode_6);
                }
              }
              else
              {
                MR_Word parse_tree__prog_mode__Var_52;
                MR_Word parse_tree__prog_mode__Var_53;

                parse_tree__prog_mode__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_mode__Final_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_mode__succeeded)
                {
                  parse_tree__prog_mode__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 1)));
                  parse_tree__prog_mode__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Final_5, (MR_Integer) 2)));
                  parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_52 == (MR_Integer) 3);
                  if (parse_tree__prog_mode__succeeded)
                    parse_tree__prog_mode__succeeded = (parse_tree__prog_mode__Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (parse_tree__prog_mode__succeeded)
                {
                  MR_Word parse_tree__prog_mode__Var_55;

                  {
                    parse_tree__prog_mode__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_55, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "di", parse_tree__prog_mode__Var_55, parse_tree__prog_mode__Mode_6);
                  }
                }
                else
                {
                  {
                    parse_tree__prog_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_mode__Initial_4, parse_tree__prog_mode__Final_5);
                  }
                  if (parse_tree__prog_mode__succeeded)
                  {
                    MR_Word parse_tree__prog_mode__Var_58;

                    {
                      parse_tree__prog_mode__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_58, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_mode__make_std_mode_3_p_0((MR_String) "in", parse_tree__prog_mode__Var_58, parse_tree__prog_mode__Mode_6);
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_mode__Mode_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Initial_4));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__Final_5));
                    }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(
  MR_Word parse_tree__prog_mode__Mode0_5,
  MR_Word parse_tree__prog_mode__Params_6,
  MR_Word parse_tree__prog_mode__Args_7,
  MR_Word * parse_tree__prog_mode__Mode_8)
{
  if ((parse_tree__prog_mode__Params_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__Mode_8 = parse_tree__prog_mode__Mode0_5;
  else
  {
    MR_Word parse_tree__prog_mode__Subst_11;

    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Params_6, parse_tree__prog_mode__Args_7, &parse_tree__prog_mode__Subst_11);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_5)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__prog_mode__I0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__F0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__I_19;
      MR_Word parse_tree__prog_mode__F_20;

      {
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__I0_17, &parse_tree__prog_mode__I_19);
      }
      {
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__F0_18, &parse_tree__prog_mode__F_20);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__prog_mode__Mode_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__I_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__F_20));
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_5, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Args_23;

      {
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_11, parse_tree__prog_mode__Args0_22, &parse_tree__prog_mode__Args_23);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_mode__Mode_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_23));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__prog_mode__Mode0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Modes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Mode_8;
    MR_Word parse_tree__prog_mode__Modes_9;

    if (((MR_tag((MR_Word) parse_tree__prog_mode__Mode0_6)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__prog_mode__I0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__F0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__I_15;
      MR_Word parse_tree__prog_mode__F_16;

      {
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__I0_13, &parse_tree__prog_mode__I_15);
      }
      {
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__F0_14, &parse_tree__prog_mode__F_16);
      }
      {
        parse_tree__prog_mode__Mode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__I_15));
        MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__F_16));
      }
    }
    else
    {
      MR_Word parse_tree__prog_mode__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 0)));
      MR_Word parse_tree__prog_mode__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode0_6, (MR_Integer) 1)));
      MR_Word parse_tree__prog_mode__Args_19;

      {
        parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_18, &parse_tree__prog_mode__Args_19);
      }
      {
        parse_tree__prog_mode__Mode_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_17));
        MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_19));
      }
    }
    {
      parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Modes0_7, &parse_tree__prog_mode__Modes_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Mode_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__prog_mode__BoundInst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__BoundInsts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__BoundInst_8;
    MR_Word parse_tree__prog_mode__BoundInsts_9;
    MR_Word parse_tree__prog_mode__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst0_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Args_12;

    {
      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Args0_11, &parse_tree__prog_mode__Args_12);
    }
    {
      parse_tree__prog_mode__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 0) = ((MR_Box) (parse_tree__prog_mode__Name_10));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mode__BoundInst_8, 1) = ((MR_Box) (parse_tree__prog_mode__Args_12));
    }
    {
      parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__BoundInsts0_7, &parse_tree__prog_mode__BoundInsts_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__BoundInst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_9));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_4,
  MR_Word parse_tree__prog_mode__InstName0_5,
  MR_Word * parse_tree__prog_mode__InstName_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_mode__InstName0_5)) {
      default:
        parse_tree__prog_mode__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_mode__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode__ArgInsts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__ArgInsts_9;

          {
            parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_8, &parse_tree__prog_mode__ArgInsts_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_mode__InstName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_mode__Name_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_9));
          }
          parse_tree__prog_mode__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 0)))) {
          default:
            parse_tree__prog_mode__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            {
              *parse_tree__prog_mode__InstName_6 = parse_tree__prog_mode__InstName0_5;
              parse_tree__prog_mode__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_mode__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__InstName0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__SubInst_12;

              {
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_11, &parse_tree__prog_mode__SubInst_12);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__InstName_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__T_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_12));
                }
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return parse_tree__prog_mode__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  if ((parse_tree__prog_mode__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_mode__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__prog_mode__Inst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__prog_mode__Insts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_mode__Inst_8;
    MR_Word parse_tree__prog_mode__Insts_9;

    {
      parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Inst0_6, &parse_tree__prog_mode__Inst_8);
    }
    {
      parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_1, parse_tree__prog_mode__Insts0_7, &parse_tree__prog_mode__Insts_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Insts_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_4,
  MR_Word parse_tree__prog_mode__Modes0_5,
  MR_Word * parse_tree__prog_mode__Modes_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    {
      parse_tree__prog_mode__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4);
    }
    if (parse_tree__prog_mode__succeeded)
      *parse_tree__prog_mode__Modes_6 = parse_tree__prog_mode__Modes0_5;
    else
      {
        parse_tree__prog_mode__mode_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_5, parse_tree__prog_mode__Modes_6);
      }
  }
}

void MR_CALL 
parse_tree__prog_mode__inst_apply_substitution_3_p_0(
  MR_Word parse_tree__prog_mode__Subst_4,
  MR_Word parse_tree__prog_mode__Inst0_5,
  MR_Word * parse_tree__prog_mode__Inst_6)
{
  {
    MR_bool parse_tree__prog_mode__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_mode__Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
        break;
      case (MR_Integer) 1:
        *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_mode__Uniq_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_mode__HOInstInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_mode__HOInstInfo_41;

          if ((parse_tree__prog_mode__HOInstInfo0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__prog_mode__HOInstInfo_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word parse_tree__prog_mode__PredOrFunc_57;
            MR_Word parse_tree__prog_mode__Modes0_58;
            MR_Word parse_tree__prog_mode__MaybeArgRegs_59;
            MR_Word parse_tree__prog_mode__Det_60;
            MR_Word parse_tree__prog_mode__Modes_61;
            MR_Word parse_tree__prog_mode__Var_62 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_40), (MR_Integer) 1);
            MR_Word parse_tree__prog_mode__Var_63;

            parse_tree__prog_mode__PredOrFunc_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_62, (MR_Integer) 0)));
            parse_tree__prog_mode__Modes0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_62, (MR_Integer) 1)));
            parse_tree__prog_mode__MaybeArgRegs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_62, (MR_Integer) 2)));
            parse_tree__prog_mode__Det_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_62, (MR_Integer) 3)));
            {
              parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_58, &parse_tree__prog_mode__Modes_61);
            }
            {
              parse_tree__prog_mode__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_63, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_57));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_63, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_61));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_63, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_59));
              MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_63, 3) = ((MR_Box) (parse_tree__prog_mode__Det_60));
            }
            parse_tree__prog_mode__HOInstInfo_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Var_63);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_mode__Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_mode__Uniq_39));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_41));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_mode__Uniq0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) parse_tree__prog_mode__InstResults0_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_mode__InstResults0_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_mode__BoundInsts_42;

                        {
                          parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_42);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_mode__Inst_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_42));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_mode__InstVarsResult_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 3)));
                    MR_Word parse_tree__prog_mode__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_mode__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 2)));
                    MR_Word parse_tree__prog_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 4)));
                    MR_Word parse_tree__prog_mode__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstResults0_12, (MR_Integer) 5)));
                    MR_Word parse_tree__prog_mode__TypeInfo_46_46;
                    MR_Word parse_tree__prog_mode__TypeCtorInfo_47_47;
                    MR_Word parse_tree__prog_mode__InstVarsSet_20;
                    MR_Word parse_tree__prog_mode__InstVars_21;

                    parse_tree__prog_mode__succeeded = ((MR_tag((MR_Word) parse_tree__prog_mode__InstVarsResult_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_mode__succeeded)
                    {
                      parse_tree__prog_mode__InstVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__InstVarsResult_17, (MR_Integer) 0)));
                      parse_tree__prog_mode__TypeInfo_46_46 = (MR_Word) &parse_tree__prog_mode_scalar_common_1[0];
                      {
                        mercury__set__to_sorted_list_2_p_0(parse_tree__prog_mode__TypeInfo_46_46, parse_tree__prog_mode__InstVarsSet_20, &parse_tree__prog_mode__InstVars_21);
                      }
                      parse_tree__prog_mode__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      {
                        parse_tree__prog_mode__succeeded = parse_tree__prog_mode__no_inst_var_is_in_map_2_p_0(parse_tree__prog_mode__TypeCtorInfo_47_47, parse_tree__prog_mode__InstVars_21, parse_tree__prog_mode__Subst_4);
                      }
                    }
                    if (parse_tree__prog_mode__succeeded)
                      *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
                    else
                    {
                      MR_Word parse_tree__prog_mode__BoundInsts_22;

                      {
                        parse_tree__prog_mode__bound_insts_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__BoundInsts0_13, &parse_tree__prog_mode__BoundInsts_22);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_mode__Inst_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq0_11));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_mode__BoundInsts_22));
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_mode__Uniq_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__HOInstInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__HOInstInfo_10;

              if ((parse_tree__prog_mode__HOInstInfo0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_mode__HOInstInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word parse_tree__prog_mode__PredOrFunc_68;
                MR_Word parse_tree__prog_mode__Modes0_69;
                MR_Word parse_tree__prog_mode__MaybeArgRegs_70;
                MR_Word parse_tree__prog_mode__Det_71;
                MR_Word parse_tree__prog_mode__Modes_72;
                MR_Word parse_tree__prog_mode__Var_73 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_mode__HOInstInfo0_9), (MR_Integer) 1);
                MR_Word parse_tree__prog_mode__Var_74;

                parse_tree__prog_mode__PredOrFunc_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_73, (MR_Integer) 0)));
                parse_tree__prog_mode__Modes0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_73, (MR_Integer) 1)));
                parse_tree__prog_mode__MaybeArgRegs_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_73, (MR_Integer) 2)));
                parse_tree__prog_mode__Det_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_73, (MR_Integer) 3)));
                {
                  parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__Modes0_69, &parse_tree__prog_mode__Modes_72);
                }
                {
                  parse_tree__prog_mode__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_74, 0) = ((MR_Box) (parse_tree__prog_mode__PredOrFunc_68));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_74, 1) = ((MR_Box) (parse_tree__prog_mode__Modes_72));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_74, 2) = ((MR_Box) (parse_tree__prog_mode__MaybeArgRegs_70));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_mode__Var_74, 3) = ((MR_Box) (parse_tree__prog_mode__Det_71));
                }
                parse_tree__prog_mode__HOInstInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_mode__Var_74);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__HOInstInfo_10));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_mode__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__ReplacementInst_24;
              MR_Box parse_tree__prog_mode__conv2_ReplacementInst_24;

              {
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_23)), &parse_tree__prog_mode__conv2_ReplacementInst_24);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__ReplacementInst_24 = ((MR_Word) parse_tree__prog_mode__conv2_ReplacementInst_24);
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              if (parse_tree__prog_mode__succeeded)
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_24;
              else
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__Var_44;
              MR_Word parse_tree__prog_mode__Var0_27;
              MR_Box parse_tree__prog_mode__conv0_Var0_27;
              MR_Word parse_tree__prog_mode__ReplacementInst_43;
              MR_Box parse_tree__prog_mode__conv1_ReplacementInst_43;

              {
                parse_tree__prog_mode__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__Vars_25, &parse_tree__prog_mode__conv0_Var0_27);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__Var0_27 = ((MR_Word) parse_tree__prog_mode__conv0_Var0_27);
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              if (parse_tree__prog_mode__succeeded)
                parse_tree__prog_mode__Var_44 = parse_tree__prog_mode__Var0_27;
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_mode", (MR_String) "predicate \140parse_tree.prog_mode.inst_apply_substitution\'/3", (MR_String) "multiple inst_vars found");
                  return;
                }
              }
              {
                parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_mode__Subst_4, ((MR_Box) (parse_tree__prog_mode__Var_44)), &parse_tree__prog_mode__conv1_ReplacementInst_43);
              }
              if (parse_tree__prog_mode__succeeded)
              {
                parse_tree__prog_mode__ReplacementInst_43 = ((MR_Word) parse_tree__prog_mode__conv1_ReplacementInst_43);
                parse_tree__prog_mode__succeeded = MR_TRUE;
              }
              if (parse_tree__prog_mode__succeeded)
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__ReplacementInst_43;
              else
              {
                MR_Word parse_tree__prog_mode__SubInst_28;

                {
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__SubInst0_26, &parse_tree__prog_mode__SubInst_28);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Vars_25));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__SubInst_28));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__prog_mode__InstName0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__InstName_30;

              {
                parse_tree__prog_mode__succeeded = parse_tree__prog_mode__inst_name_apply_substitution_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__InstName0_29, &parse_tree__prog_mode__InstName_30);
              }
              if (parse_tree__prog_mode__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_mode__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__InstName_30));
                }
              else
                *parse_tree__prog_mode__Inst_6 = parse_tree__prog_mode__Inst0_5;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_mode__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_mode__ArgInsts0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_mode__Inst0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_mode__ArgInsts_33;

              {
                parse_tree__prog_mode__inst_list_apply_substitution_2_3_p_0(parse_tree__prog_mode__Subst_4, parse_tree__prog_mode__ArgInsts0_32, &parse_tree__prog_mode__ArgInsts_33);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_mode__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_mode__Name_31));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_mode__ArgInsts_33));
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
  MR_Word parse_tree__prog_mode__TypeInfo_for_T_8,
  MR_Word parse_tree__prog_mode__HeadVar__1_1,
  MR_Word parse_tree__prog_mode__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__prog_mode__succeeded;

      if ((parse_tree__prog_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        parse_tree__prog_mode__succeeded = MR_TRUE;
      else
      {
        MR_Word parse_tree__prog_mode__InstVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_mode__InstVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box parse_tree__prog_mode___ReplacementInst_7;

        {
          parse_tree__prog_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_mode_scalar_common_1[0], parse_tree__prog_mode__TypeInfo_for_T_8, parse_tree__prog_mode__HeadVar__2_2, ((MR_Box) (parse_tree__prog_mode__InstVar_4)), &parse_tree__prog_mode___ReplacementInst_7);
        }
        parse_tree__prog_mode__succeeded = !(parse_tree__prog_mode__succeeded);
        if (parse_tree__prog_mode__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__prog_mode__next_value_of_HeadVar__1_1 = parse_tree__prog_mode__InstVars_5;

            parse_tree__prog_mode__HeadVar__1_1 = parse_tree__prog_mode__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return parse_tree__prog_mode__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__make_std_mode_2_f_0(
  MR_String parse_tree__prog_mode__Name_4,
  MR_Word parse_tree__prog_mode__Args_5)
{
  {
    MR_Word parse_tree__prog_mode__Mode_6;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
    }
    {
      parse_tree__prog_mode__Mode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Mode_6, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
    }
    return parse_tree__prog_mode__Mode_6;
  }
}

void MR_CALL 
parse_tree__prog_mode__make_std_mode_3_p_0(
  MR_String parse_tree__prog_mode__Name_4,
  MR_Word parse_tree__prog_mode__Args_5,
  MR_Word * parse_tree__prog_mode__HeadVar__3_3)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_9;
    MR_Word parse_tree__prog_mode__QualifiedName_10;

    {
      parse_tree__prog_mode__MercuryBuiltin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_9));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_10, 1) = ((MR_Box) (parse_tree__prog_mode__Name_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_mode__Args_5));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__from_to_insts_out_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[8];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__from_to_insts_in_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[7];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__any_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_mode_scalar_common_1[5]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_clobbered_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[5]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__clobbered_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[3]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mostly_unique_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[4]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__unique_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[2]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__ground_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_mode_scalar_common_2[1]);
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__free_inst_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__unused_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[13];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__muo_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[12];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__uo_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[11];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mdi_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[10];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__di_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[9];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[8];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_from_to_insts_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_mode_scalar_common_1[7];
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_any_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
    MR_Word parse_tree__prog_mode__QualifiedName_12;

    {
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[6])));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_any_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_11;
    MR_Word parse_tree__prog_mode__QualifiedName_12;

    {
      parse_tree__prog_mode__MercuryBuiltin_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_12, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_12));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mode_scalar_common_1[6])));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__unused_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__unused_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "unused"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__muo_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__muo_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "muo"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__mdi_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__mdi_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "mdi"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__uo_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__uo_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "uo"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__di_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__di_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "di"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_1_f_0(
  MR_Word parse_tree__prog_mode__I_3)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
    MR_Word parse_tree__prog_mode__Var_5;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
    MR_Word parse_tree__prog_mode__QualifiedName_11;

    {
      parse_tree__prog_mode__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__Var_5));
    }
    return parse_tree__prog_mode__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__out_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__out_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "out"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_1_f_0(
  MR_Word parse_tree__prog_mode__I_3)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__2_2;
    MR_Word parse_tree__prog_mode__Var_5;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_10;
    MR_Word parse_tree__prog_mode__QualifiedName_11;

    {
      parse_tree__prog_mode__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_5, 0) = ((MR_Box) (parse_tree__prog_mode__I_3));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__Var_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_mode__MercuryBuiltin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_11, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      parse_tree__prog_mode__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__prog_mode__Var_5));
    }
    return parse_tree__prog_mode__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mode__in_mode_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_mode__HeadVar__1_1;
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      parse_tree__prog_mode__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__prog_mode__HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mode__in_mode_1_p_0(
  MR_Word * parse_tree__prog_mode__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_mode__MercuryBuiltin_7;
    MR_Word parse_tree__prog_mode__QualifiedName_8;

    {
      parse_tree__prog_mode__MercuryBuiltin_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_mode__QualifiedName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 0) = ((MR_Box) (parse_tree__prog_mode__MercuryBuiltin_7));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mode__QualifiedName_8, 1) = ((MR_Box) ((MR_String) "in"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_mode__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_mode__QualifiedName_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

/* :- end_module parse_tree.prog_mode. */
