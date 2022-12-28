/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-28
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


// :- module ll_backend.opt_util.
// :- implementation.

/*
INIT mercury__ll_backend__opt_util__init
ENDINIT
*/

#include "ll_backend.opt_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2590__1_2_p_0(
  MR_Word Lvals0_8,
  MR_Word Lvals_9);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2503__1_2_p_0(
  MR_Word DefLabel0_95,
  MR_Word DefLabel_96);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2484__1_2_p_0(
  MR_Word OnlyLayoutLabel0_89,
  MR_Word OnlyLayoutLabel_90);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2475__1_2_p_0(
  MR_Word LayoutLabel0_87,
  MR_Word LayoutLabel_88);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2466__1_2_p_0(
  MR_Word FixLabel0_85,
  MR_Word FixLabel_86);

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
  MR_Word ReplMap_4,
  MR_Word Lval0_5,
  MR_Word * Lval_6);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
  MR_Word Input_3);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
  MR_Word Input_3);

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
  MR_Word Component_3);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
  MR_Word Rval0_4,
  MR_Word * Rval_5,
  MR_Word ReplMap_6);

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
  MR_Word Lval0_4,
  MR_Word * Lval_5,
  MR_Word ReplMap_6);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
  MR_Word LiveLvals0_4,
  MR_Word * LiveLvals_5,
  MR_Word ReplMap_6);

static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
  MR_Word Uinstr_4,
  MR_Word * Labels_5,
  MR_Word * CodeAddrs_6);

static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Labels_3);

static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
  MR_Word MaybeFixedLabel_7,
  MR_Word MaybeLayoutLabel_8,
  MR_Word MaybeOnlyLayoutLabel_9,
  MR_Word MaybeSubLabel_10,
  MR_Word MaybeDefLabel_11,
  MR_Word * STATE_VARIABLE_Labels_18);

static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevLabels_0_2,
  MR_Word * STATE_VARIABLE_RevLabels_3);

static void MR_CALL 
ll_backend__opt_util__count_incr_hp_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3);

static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_lval_5_p_0(
  MR_Word tscc_proc_1_input_1_Lval_6,
  MR_Integer tscc_proc_1_input_2_STATE_VARIABLE_R_0_23,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_R_24,
  MR_Integer tscc_proc_1_input_3_STATE_VARIABLE_F_0_25,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_F_26);

static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
  MR_Word tscc_proc_2_input_1_Rval_6,
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_R_0_20,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_R_24,
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_F_0_22,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_F_26);

static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasIncr_0_2,
  MR_Word * STATE_VARIABLE_HasIncr_3,
  MR_Word STATE_VARIABLE_HasDecr_0_4,
  MR_Word * STATE_VARIABLE_HasDecr_5);

static void MR_CALL 
ll_backend__opt_util__propagate_livevals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Livevals0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevUntilSucceed_0_36,
  MR_Word * STATE_VARIABLE_RevUntilSucceed_37,
  MR_String * SucceedComment_9,
  MR_Word * Remain_10);

static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevStraightLine_0_2,
  MR_Word * STATE_VARIABLE_RevStraightLine_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Between_0_14,
  MR_Word * STATE_VARIABLE_Between_15,
  MR_Word * After_8);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
  MR_Word Uinstr_3);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__opt_util_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_4[5][5];

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_5[1][6];




static /* final */ const MR_Box ll_backend__opt_util_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_const_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__opt_util_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__opt_util_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[0])),
    ((MR_Box) (ll_backend__opt_util__instr_refers_to_stack_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[3])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[4])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "no succip restoration"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "no sp restoration"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_instrmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____instrmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____instrmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "instrmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_lvalmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____lvalmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____lvalmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "lvalmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_succmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____succmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____succmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "succmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_tailmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____tailmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____tailmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "tailmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2590__1_2_p_0(
  MR_Word Lvals0_8,
  MR_Word Lvals_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_1[1]), ((MR_Box) (Lvals0_8)), ((MR_Box) (Lvals_9)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2503__1_2_p_0(
  MR_Word DefLabel0_95,
  MR_Word DefLabel_96)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(DefLabel0_95, DefLabel_96);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2484__1_2_p_0(
  MR_Word OnlyLayoutLabel0_89,
  MR_Word OnlyLayoutLabel_90)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(OnlyLayoutLabel0_89, OnlyLayoutLabel_90);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2475__1_2_p_0(
  MR_Word LayoutLabel0_87,
  MR_Word LayoutLabel_88)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(LayoutLabel0_87, LayoutLabel_88);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2466__1_2_p_0(
  MR_Word FixLabel0_85,
  MR_Word FixLabel_86)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(FixLabel0_85, FixLabel_86);
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
  MR_Word ReplMap_4,
  MR_Word Lval0_5,
  MR_Word * Lval_6)
{
  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_5, Lval_6, ReplMap_4);
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
  MR_Word Input_3)
{
  {
    MR_Word Refers_4;
    MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 0))));
    MR_Word IsDummy_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 2))) & (MR_Integer) 1);

    switch (IsDummy_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        Refers_4 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_5);
        break;
    }
    return Refers_4;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
  MR_Word Input_3)
{
  {
    MR_Word Refers_4;
    MR_Word IsDummy_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 4))));

    switch (IsDummy_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        Refers_4 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_9);
        break;
    }
    return Refers_4;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Refers_4;

    conv1_Refers_4 = ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Refers_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Refers_4;

    conv0_Refers_4 = ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Refers_4));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
  MR_Word Component_3)
{
  {
    MR_Word Refers_4;

    switch (MR_tag((MR_Word) Component_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Inputs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_3, (MR_Integer) 0))));
          MR_Word Var_18;

          Var_18 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[5]), Inputs_5);
          mercury__bool__or_list_2_p_0(Var_18, &Refers_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_3, (MR_Integer) 0))));
          MR_Word Var_16;

          Var_16 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[6]), Outputs_6);
          mercury__bool__or_list_2_p_0(Var_16, &Refers_4);
        }
        break;
      case (MR_Integer) 3:
        Refers_4 = (MR_Integer) 0;
        break;
    }
    return Refers_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_util__format_label_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ProcLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_6);
    }
    else
    {
      MR_Word ProcLabel_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_4);
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_util__format_proc_label_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer Mode_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_String Var_9;
      MR_String Var_11;
      MR_String Var_12;
      MR_String Var_13;
      MR_String Var_15;

      Var_12 = mercury__string__int_to_string_1_f_0(Arity_7);
      Var_15 = mercury__string__int_to_string_1_f_0(Mode_8);
      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_15);
      Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
      Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_11);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Name_6, Var_9);
    }
    else
    {
      MR_Word SpecialPredId_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word TypeModule_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_String TypeName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer TypeArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer Mode_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
      MR_String PredName_22;
      MR_Word TypeCtor_23;
      MR_String Var_24;
      MR_String Var_26;
      MR_String Var_27;
      MR_String Var_29;
      MR_String Var_30;
      MR_String Var_31;
      MR_String Var_33;
      MR_Word Var_34;

      Var_30 = mercury__string__int_to_string_1_f_0(TypeArity_20);
      Var_33 = mercury__string__int_to_string_1_f_0(Mode_21);
      Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_33);
      Var_29 = mercury__string__f_43_43_2_f_0(Var_30, Var_31);
      Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_29);
      Var_26 = mercury__string__f_43_43_2_f_0(TypeName_19, Var_27);
      Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_26);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (TypeModule_18));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (TypeName_19));
      }
      {
        TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_23, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), TypeCtor_23, 1) = ((MR_Box) (TypeArity_20));
      }
      PredName_22 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_17, TypeCtor_23);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(PredName_22, Var_24);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_4_p_0(
  MR_Word Instr0_5,
  MR_Word * Instr_6,
  MR_Word ReplMap_7,
  MR_Word ReplData_8)
{
  {
    MR_Word Uinstr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0))));
    MR_String Comment_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 1))));
    MR_Word Uinstr_11;

    ll_backend__opt_util__replace_labels_instr_4_p_0(Uinstr0_9, &Uinstr_11, ReplMap_7, ReplData_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Instr_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Uinstr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Comment_10));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2503__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2484__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2475__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2466__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0(
  MR_Word Uinstr0_5,
  MR_Word * Uinstr_6,
  MR_Word ReplMap_7,
  MR_Word ReplData_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Uinstr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Uinstr_6 = Uinstr0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Uinstr_6 = Uinstr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer R_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Integer F_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Instrs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word Instrs_19;

              ll_backend__opt_util__replace_labels_instruction_list_5_p_0(Instrs0_18, &Instrs_19, ReplMap_7, ReplData_8, (MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (R_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (F_17));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Instrs_19));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Lval_22;
              MR_Word Rval_23;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Lval_22 = Lval0_20;
                    Rval_23 = Rval0_21;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_20, &Lval_22, ReplMap_7);
                    ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_21, &Rval_23, ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_23));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Lval0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Lval_124;
              MR_Word Rval_125;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Lval_124 = Lval0_122;
                    Rval_125 = Rval0_123;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_122, &Lval_124, ReplMap_7);
                    ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_123, &Rval_125, ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_124));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_125));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Target_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Return0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word LiveInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word CXT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 4))));
              MR_Word GP_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 5))));
              MR_Word CM_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 6))));
              MR_Word Return_30;

              ll_backend__opt_util__replace_labels_code_addr_3_p_0(Return0_25, &Return_30, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Target_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Return_30));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (LiveInfo_26));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (CXT_27));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (GP_28));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (CM_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word NondetFrameInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word MaybeRedoip0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word MaybeRedoip_35;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaybeRedoip_35 = MaybeRedoip0_32;
                  break;
                case (MR_Integer) 1:
                  if ((MaybeRedoip0_32 == (MR_Word) ((MR_Unsigned) 0U)))
                    MaybeRedoip_35 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Word Redoip0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRedoip0_32, (MR_Integer) 0))));
                    MR_Word Redoip_34;

                    ll_backend__opt_util__replace_labels_code_addr_3_p_0(Redoip0_33, &Redoip_34, ReplMap_7);
                    {
                      MaybeRedoip_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeRedoip_35, 0) = ((MR_Box) (Redoip_34));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NondetFrameInfo_31));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeRedoip_35));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Label_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Box conv0_Var_37;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_7, ((MR_Box) (Label_36)), &conv0_Var_37);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "eliminated label");
                  return;
                }
              *Uinstr_6 = Uinstr0_5;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Target0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Target_126;

              ll_backend__opt_util__replace_labels_code_addr_3_p_0(Target0_38, &Target_126, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Target_126));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeLabels0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word MaybeLabels_40;
              MR_Word Rval0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_128;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_128 = Rval0_127;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_127, &Rval_128, ReplMap_7);
                  break;
              }
              ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(MaybeLabels0_39, &MaybeLabels_40, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_128));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeLabels_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AffectsLiveness_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word Lvals0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_String Code_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word Lvals_44;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lvals_44 = Lvals0_42;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(Lvals0_42, &Lvals_44, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lvals_44));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Code_43));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval0_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_130;
              MR_Word Target_131;
              MR_Word Target0_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_130 = Rval0_129;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_129, &Rval_130, ReplMap_7);
                  break;
              }
              ll_backend__opt_util__replace_labels_code_addr_3_p_0(Target0_132, &Target_131, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_130));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Target_131));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Lval0_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_134;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_134 = Lval0_133;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_133, &Lval_134, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_134));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Lval0_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_136;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_136 = Lval0_135;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_135, &Lval_136, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_136));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybeTag_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word MO_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word Msg_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 5))));
              MR_Word Atomic_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 6))) & (MR_Integer) 1);
              MR_Word MaybeRegionRval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 7))));
              MR_Word MaybeReuse0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 8))));
              MR_Word MaybeRegionRval_53;
              MR_Word MaybeReuse_60;
              MR_Word Lval0_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval0_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 4))));
              MR_Word Lval_139;
              MR_Word Rval_140;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Lval_139 = Lval0_137;
                    Rval_140 = Rval0_138;
                    MaybeRegionRval_53 = MaybeRegionRval0_49;
                    MaybeReuse_60 = MaybeReuse0_50;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_137, &Lval_139, ReplMap_7);
                    ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_138, &Rval_140, ReplMap_7);
                    if ((MaybeRegionRval0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                      MaybeRegionRval_53 = MaybeRegionRval0_49;
                    else
                    {
                      MR_Word RegionRval0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval0_49, (MR_Integer) 0))));
                      MR_Word RegionRval_52;

                      ll_backend__opt_util__replace_labels_rval_3_p_0(RegionRval0_51, &RegionRval_52, ReplMap_7);
                      {
                        MaybeRegionRval_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeRegionRval_53, 0) = ((MR_Box) (RegionRval_52));
                      }
                    }
                    if ((MaybeReuse0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                      MaybeReuse_60 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word ReuseRval0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_50, (MR_Integer) 0))));
                      MR_Word MaybeFlagLval0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_50, (MR_Integer) 1))));
                      MR_Word ReuseRval_56;
                      MR_Word MaybeFlagLval_59;

                      ll_backend__opt_util__replace_labels_rval_3_p_0(ReuseRval0_54, &ReuseRval_56, ReplMap_7);
                      if ((MaybeFlagLval0_55 == (MR_Word) ((MR_Unsigned) 0U)))
                        MaybeFlagLval_59 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Word FlagLval0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval0_55, (MR_Integer) 0))));
                        MR_Word FlagLval_58;

                        ll_backend__opt_util__replace_labels_lval_3_p_0(FlagLval0_57, &FlagLval_58, ReplMap_7);
                        {
                          MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeFlagLval_59, 0) = ((MR_Box) (FlagLval_58));
                        }
                      }
                      {
                        MaybeReuse_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeReuse_60, 0) = ((MR_Box) (ReuseRval_56));
                        MR_hl_field(MR_mktag(1), MaybeReuse_60, 1) = ((MR_Box) (MaybeFlagLval_59));
                      }
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_139));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_45));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MO_46));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Rval_140));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Msg_47));
                MR_hl_field(MR_mktag(3), base, 6) = (MR_Box) ((MR_Unsigned) (Atomic_48));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeRegionRval_53));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeReuse_60));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval0_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_142;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_142 = Lval0_141;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_141, &Lval_142, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_142));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval0_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_144;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_144 = Rval0_143;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_143, &Rval_144, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_144));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Rval0_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_146;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_146 = Rval0_145;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_145, &Rval_146, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_146));
              }
            }
            break;
          case (MR_Integer) 16:
            *Uinstr_6 = Uinstr0_5;
            break;
          case (MR_Integer) 17:
            {
              MR_Word FillOp_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word IdRval0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word NumLval0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 4))));
              MR_Word AddrLval0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 5))));
              MR_Word IdRval_67;
              MR_Word NumLval_68;
              MR_Word AddrLval_69;
              MR_Word EmbeddedStackFrame_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    IdRval_67 = IdRval0_64;
                    NumLval_68 = NumLval0_65;
                    AddrLval_69 = AddrLval0_66;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(IdRval0_64, &IdRval_67, ReplMap_7);
                    ll_backend__opt_util__replace_labels_lval_3_p_0(NumLval0_65, &NumLval_68, ReplMap_7);
                    ll_backend__opt_util__replace_labels_lval_3_p_0(AddrLval0_66, &AddrLval_69, ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FillOp_63));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_147));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IdRval_67));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NumLval_68));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (AddrLval_69));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SetOp_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ValueRval0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word ValueRval_72;
              MR_Word EmbeddedStackFrame_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ValueRval_72 = ValueRval0_71;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(ValueRval0_71, &ValueRval_72, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (SetOp_70));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_148));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ValueRval_72));
              }
            }
            break;
          case (MR_Integer) 19:
            *Uinstr_6 = Uinstr0_5;
            break;
          case (MR_Integer) 20:
            {
              MR_Word Lval0_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_151;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_151 = Lval0_150;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_150, &Lval_151, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_151));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word Reason_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word Rval0_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_153;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_153 = Rval0_152;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_152, &Rval_153, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_153));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Reason_74));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Lval0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_155;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_155 = Lval0_154;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_154, &Lval_155, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_155));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word Rval0_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Rval_157;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rval_157 = Rval0_156;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_156, &Rval_157, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 23U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_157));
              }
            }
            break;
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
            *Uinstr_6 = Uinstr0_5;
            break;
          case (MR_Integer) 27:
            {
              MR_Word Decls_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Comps0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word MayCallMercury_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word MaybeFix_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 4))));
              MR_Word MaybeLayout_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 5))));
              MR_Word MaybeOnlyLayout_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 6))));
              MR_Word MaybeSub0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 7))));
              MR_Word MaybeDef_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 8))));
              MR_Word MaybeSub_91;
              MR_Word Comps_92;
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 9)));

              if (!((MaybeFix_78 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word FixLabel0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFix_78, (MR_Integer) 0))));
                MR_Word FixLabel_86;
                MR_Word Var_107;

                ll_backend__opt_util__replace_labels_label_3_p_0(FixLabel0_85, &FixLabel_86, ReplMap_7);
                {
                  Var_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (FixLabel0_85));
                  MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (FixLabel_86));
                }
                mercury__require__expect_3_p_0(Var_107, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label in C code");
              }
              if (!((MaybeLayout_79 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word LayoutLabel0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLayout_79, (MR_Integer) 0))));
                MR_Word LayoutLabel_88;
                MR_Word Var_110;

                ll_backend__opt_util__replace_labels_label_3_p_0(LayoutLabel0_87, &LayoutLabel_88, ReplMap_7);
                {
                  Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (LayoutLabel0_87));
                  MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) (LayoutLabel_88));
                }
                mercury__require__expect_3_p_0(Var_110, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
              }
              if (!((MaybeOnlyLayout_80 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word OnlyLayoutLabel0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyLayout_80, (MR_Integer) 0))));
                MR_Word OnlyLayoutLabel_90;
                MR_Word Var_113;

                ll_backend__opt_util__replace_labels_label_3_p_0(OnlyLayoutLabel0_89, &OnlyLayoutLabel_90, ReplMap_7);
                {
                  Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (OnlyLayoutLabel0_89));
                  MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (OnlyLayoutLabel_90));
                }
                mercury__require__expect_3_p_0(Var_113, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
              }
              if ((MaybeSub0_81 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeSub_91 = (MR_Word) ((MR_Unsigned) 0U);
                Comps_92 = Comps0_76;
              }
              else
              {
                MR_Word SubLabel0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSub0_81, (MR_Integer) 0))));
                MR_Word SubLabel_94;

                ll_backend__opt_util__replace_labels_label_3_p_0(SubLabel0_93, &SubLabel_94, ReplMap_7);
                {
                  MaybeSub_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeSub_91, 0) = ((MR_Box) (SubLabel_94));
                }
                ll_backend__opt_util__replace_labels_comps_3_p_0(Comps0_76, &Comps_92, ReplMap_7);
              }
              if (!((MaybeDef_82 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word DefLabel0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDef_82, (MR_Integer) 0))));
                MR_Word DefLabel_96;
                MR_Word Var_116;

                ll_backend__opt_util__replace_labels_label_3_p_0(DefLabel0_95, &DefLabel_96, ReplMap_7);
                {
                  Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (DefLabel0_95));
                  MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (DefLabel_96));
                }
                mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Decls_75));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Comps_92));
                MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_77));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeFix_78));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeLayout_79));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeOnlyLayout_80));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeSub_91));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeDef_82));
                MR_hl_field(MR_mktag(3), base, 9) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer NumConjuncts_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Integer TSStringIndex_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));
              MR_Word Lval0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_159;

              switch (ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Lval_159 = Lval0_158;
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_158, &Lval_159, ReplMap_7);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_159));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (NumConjuncts_97));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TSStringIndex_98));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word Child0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Child_100;
              MR_Word Lval0_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_161;

              ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_160, &Lval_161, ReplMap_7);
              ll_backend__opt_util__replace_labels_label_3_p_0(Child0_99, &Child_100, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 29U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_161));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Child_100));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word Label0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Lval0_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_163;
              MR_Word Label_164;

              ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_162, &Lval_163, ReplMap_7);
              ll_backend__opt_util__replace_labels_label_3_p_0(Label0_101, &Label_164, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_163));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Label_164));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer NumSLots_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval0_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Lval_166;

              ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_165, &Lval_166, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NumSLots_102));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_166));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word Lval0_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word Rval0_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word Lval_169;
              MR_Word Rval_170;
              MR_Word Label_171;
              MR_Word Label0_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));

              ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_168, &Rval_170, ReplMap_7);
              ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_167, &Lval_169, ReplMap_7);
              ll_backend__opt_util__replace_labels_label_3_p_0(Label0_172, &Label_171, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_170));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_169));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_171));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word LCRval0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word LCSRval0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word LCRval_105;
              MR_Word LCSRval_106;
              MR_Word Label_173;
              MR_Word Label0_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 3))));

              ll_backend__opt_util__replace_labels_rval_3_p_0(LCRval0_103, &LCRval_105, ReplMap_7);
              ll_backend__opt_util__replace_labels_rval_3_p_0(LCSRval0_104, &LCSRval_106, ReplMap_7);
              ll_backend__opt_util__replace_labels_label_3_p_0(Label0_174, &Label_173, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_105));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_106));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_173));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word LCRval0_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 1))));
              MR_Word LCSRval0_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_5, (MR_Integer) 2))));
              MR_Word LCRval_177;
              MR_Word LCSRval_178;

              ll_backend__opt_util__replace_labels_rval_3_p_0(LCRval0_175, &LCRval_177, ReplMap_7);
              ll_backend__opt_util__replace_labels_rval_3_p_0(LCSRval0_176, &LCSRval_178, ReplMap_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_177));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_178));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ReplMap_3,
  MR_Word ReplData_4,
  MR_Word ReplLabel_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instr_11;
      MR_Word Instrs_12;
      MR_Word InstrLabel_16;
      MR_String Comment_17;
      MR_Word Var_19;

      succeeded = (ReplLabel_5 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0))));
        Comment_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
          InstrLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word ReplInstrLabel_18;
        MR_Word Var_20;
        MR_Word NewLabel_24;
        MR_Box conv0_NewLabel_24;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_3, ((MR_Box) (InstrLabel_16)), &conv0_NewLabel_24);
        if (succeeded)
        {
          NewLabel_24 = ((MR_Word) (conv0_NewLabel_24));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          ReplInstrLabel_18 = NewLabel_24;
        else
          ReplInstrLabel_18 = InstrLabel_16;
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ReplInstrLabel_18));
        }
        {
          Instr_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Instr_11, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), Instr_11, 1) = ((MR_Box) (Comment_17));
        }
      }
      else
      {
        MR_Word Uinstr0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0))));
        MR_String Comment_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 1))));
        MR_Word Uinstr_32;

        ll_backend__opt_util__replace_labels_instr_4_p_0(Uinstr0_30, &Uinstr_32, ReplMap_3, ReplData_4);
        {
          Instr_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Instr_11, 0) = ((MR_Box) (Uinstr_32));
          MR_hl_field(MR_mktag(0), Instr_11, 1) = ((MR_Box) (Comment_31));
        }
      }
      ll_backend__opt_util__replace_labels_instruction_list_5_p_0(Instrs0_10, &Instrs_12, ReplMap_3, ReplData_4, ReplLabel_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs_12));
      }
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
  MR_Word Rval0_4,
  MR_Word * Rval_5,
  MR_Word ReplMap_6)
{
  switch (MR_tag((MR_Word) Rval0_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_4, (MR_Integer) 0))));
        MR_Word Lval_8;

        ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_7, &Lval_8, ReplMap_6);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_8));
        }
      }
      break;
    case (MR_Integer) 1:
      *Rval_5 = Rval0_4;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_4, (MR_Integer) 0))));
        MR_Word SubRval0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_4, (MR_Integer) 1))));
        MR_Word SubRval_12;

        ll_backend__opt_util__replace_labels_rval_3_p_0(SubRval0_11, &SubRval_12, ReplMap_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_5 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (SubRval_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Rval_5 = Rval0_4;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
            MR_Word Const_14;

            switch (MR_tag((MR_Word) Const0_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Const_14 = Const0_13;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Const_14 = Const0_13;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const0_13, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                  case (MR_Integer) 11:
                  case (MR_Integer) 13:
                    Const_14 = Const0_13;
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word Addr0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const0_13, (MR_Integer) 1))));
                      MR_Word Addr_50;

                      ll_backend__opt_util__replace_labels_code_addr_3_p_0(Addr0_49, &Addr_50, ReplMap_6);
                      {
                        Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_14, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(3), Const_14, 1) = ((MR_Box) (Addr_50));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Const_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_17;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_16, &SubRvalA_17, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_15));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnOp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_26;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_25, &SubRvalA_26, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_26));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalB0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 3))));
            MR_Word SubRvalB_21;
            MR_Word SubRvalA0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_28;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_27, &SubRvalA_28, ReplMap_6);
            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalB0_20, &SubRvalB_21, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_19));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_28));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubRvalB_21));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
            MR_Word MemRef_23;

            switch (MR_tag((MR_Word) MemRef0_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                MemRef_23 = MemRef0_22;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CellRval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 0))));
                  MR_Word MaybeTag_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 1))));
                  MR_Word FieldNumRval0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 2))));
                  MR_Word CellRval_59;
                  MR_Word FieldNumRval_60;

                  ll_backend__opt_util__replace_labels_rval_3_p_0(CellRval0_56, &CellRval_59, ReplMap_6);
                  ll_backend__opt_util__replace_labels_rval_3_p_0(FieldNumRval0_58, &FieldNumRval_60, ReplMap_6);
                  {
                    MemRef_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), MemRef_23, 0) = ((MR_Box) (CellRval_59));
                    MR_hl_field(MR_mktag(2), MemRef_23, 1) = ((MR_Box) (MaybeTag_57));
                    MR_hl_field(MR_mktag(2), MemRef_23, 2) = ((MR_Box) (FieldNumRval_60));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MemRef_23));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
  MR_Word Lval0_4,
  MR_Word * Lval_5,
  MR_Word ReplMap_6)
{
  switch (MR_tag((MR_Word) Lval0_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Lval_5 = Lval0_4;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Lval_5 = Lval0_4;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          *Lval_5 = Lval0_4;
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_19;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_18, &Rval_19, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_19));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_26;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_25, &Rval_26, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_26));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_28;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_27, &Rval_28, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_28));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_30;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_29, &Rval_30, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_30));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_32;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_31, &Rval_32, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_32));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Tag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word BaseRval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 2))));
            MR_Word OffsetRval0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 3))));
            MR_Word BaseRval_23;
            MR_Word OffsetRval_24;

            ll_backend__opt_util__replace_labels_rval_3_p_0(BaseRval0_21, &BaseRval_23, ReplMap_6);
            ll_backend__opt_util__replace_labels_rval_3_p_0(OffsetRval0_22, &OffsetRval_24, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BaseRval_23));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (OffsetRval_24));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_4, (MR_Integer) 1))));
            MR_Word Rval_34;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_33, &Rval_34, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_34));
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2590__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Lval_6;

    ll_backend__opt_util__replace_labels_lval_map_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Lval_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
  MR_Word LiveLvals0_4,
  MR_Word * LiveLvals_5,
  MR_Word ReplMap_6)
{
  {
    MR_bool succeeded;

    if ((LiveLvals0_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *LiveLvals_5 = LiveLvals0_4;
    else
    {
      MR_Word LvalSet0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LiveLvals0_4, (MR_Integer) 0))));
      MR_Word Lvals0_8;
      MR_Word Lvals_9;
      MR_Word Var_10;
      MR_Word Var_11;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_7, &Lvals0_8);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ReplMap_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_10, Lvals0_8, &Lvals_9);
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Lvals0_8));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Lvals_9));
      }
      mercury__require__expect_3_p_0(Var_11, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_c_code_live_lvals\'/3", (MR_String) "some replacements");
      *LiveLvals_5 = LiveLvals0_4;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_label_3_p_0(
  MR_Word Label0_4,
  MR_Word * Label_5,
  MR_Word ReplMap_6)
{
  {
    MR_bool succeeded;
    MR_Word NewLabel_7;
    MR_Box conv0_NewLabel_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_6, ((MR_Box) (Label0_4)), &conv0_NewLabel_7);
    if (succeeded)
    {
      NewLabel_7 = ((MR_Word) (conv0_NewLabel_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Label_5 = NewLabel_7;
    else
      *Label_5 = Label0_4;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeLabel0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeLabels0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeLabel_7;
      MR_Word MaybeLabels_8;

      if ((MaybeLabel0_5 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeLabel_7 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Label0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLabel0_5, (MR_Integer) 0))));
        MR_Word Label_11;
        MR_Word NewLabel_15;
        MR_Box conv0_NewLabel_15;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), HeadVar__3_3, ((MR_Box) (Label0_10)), &conv0_NewLabel_15);
        if (succeeded)
        {
          NewLabel_15 = ((MR_Word) (conv0_NewLabel_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Label_11 = NewLabel_15;
        else
          Label_11 = Label0_10;
        {
          MaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeLabel_7, 0) = ((MR_Box) (Label_11));
        }
      }
      ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(MaybeLabels0_6, &MaybeLabels_8, HeadVar__3_3);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeLabel_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeLabels_8));
      }
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_code_addr_3_p_0(
  MR_Word Addr0_4,
  MR_Word * Addr_5,
  MR_Word ReplMap_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Addr0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Addr_5 = Addr0_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Label0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Addr0_4, (MR_Integer) 0))));
          MR_Word Label_8;
          MR_Word NewLabel_16;
          MR_Box conv0_NewLabel_16;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_6, ((MR_Box) (Label0_7)), &conv0_NewLabel_16);
          if (succeeded)
          {
            NewLabel_16 = ((MR_Word) (conv0_NewLabel_16));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            Label_8 = NewLabel_16;
          else
            Label_8 = Label0_7;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Addr_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_8));
          }
        }
        break;
      case (MR_Integer) 2:
        *Addr_5 = Addr0_4;
        break;
      case (MR_Integer) 3:
        *Addr_5 = Addr0_4;
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_comps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ReplMap_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Comp0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Comps0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Comp_7;
      MR_Word Comps_8;

      switch (MR_tag((MR_Word) Comp0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Comp_7 = Comp0_5;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          Comp_7 = Comp0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Comp0_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
              Comp_7 = Comp0_5;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Label0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Comp0_5, (MR_Integer) 1))));
                MR_Word Label_24;
                MR_Word NewLabel_28;
                MR_Box conv0_NewLabel_28;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_3, ((MR_Box) (Label0_23)), &conv0_NewLabel_28);
                if (succeeded)
                {
                  NewLabel_28 = ((MR_Word) (conv0_NewLabel_28));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  Label_24 = NewLabel_28;
                else
                  Label_24 = Label0_23;
                {
                  Comp_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Comp_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), Comp_7, 1) = ((MR_Box) (Label_24));
                }
              }
              break;
          }
          break;
      }
      ll_backend__opt_util__replace_labels_comps_3_p_0(Comps0_6, &Comps_8, ReplMap_3);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Comp_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Comps_8));
      }
    }
  }
}

void MR_CALL 
ll_backend__opt_util__lval_access_rvals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Rval2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Var_23;

            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Rval2_22));
              MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval1_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.lval_access_rvals\'/2", (MR_String) "lvar");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Refers_4;

    conv0_Refers_4 = ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Refers_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Refers_5;
    MR_Word Uinstr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Refers_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Refers_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BlockInstrs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 3))));

              Refers_5 = ll_backend__opt_util__block_refers_to_stack_1_f_0(BlockInstrs_51);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word Var_94;
              MR_Word Var_95;

              Var_94 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_52);
              Var_95 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_53);
              Refers_5 = mercury__bool__or_2_f_0(Var_94, Var_95);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Lval_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word Var_111;
              MR_Word Var_112;

              Var_111 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_109);
              Var_112 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_110);
              Refers_5 = mercury__bool__or_2_f_0(Var_111, Var_112);
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
          case (MR_Integer) 33:
            Refers_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 8:
          case (MR_Integer) 34:
            Refers_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 6:
            {
              MR_Word CodeAddr_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(CodeAddr_54);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_99);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Rval_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word CodeAddr_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              Var_92 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_96);
              Var_93 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(CodeAddr_97);
              Refers_5 = mercury__bool__or_2_f_0(Var_92, Var_93);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Lval_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_119);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Lval_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_118);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybeRegionRval_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 7))));
              MR_Word MaybeReuse_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 8))));
              MR_Word STATE_VARIABLE_Refers_83_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word STATE_VARIABLE_Refers_87_87;
              MR_Word Lval_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 4))));

              Var_84 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_100);
              Var_85 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_101);
              STATE_VARIABLE_Refers_83_83 = mercury__bool__or_2_f_0(Var_84, Var_85);
              if ((MaybeRegionRval_62 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Refers_87_87 = STATE_VARIABLE_Refers_83_83;
              else
              {
                MR_Word RegionRval_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_62, (MR_Integer) 0))));
                MR_Word Var_86;

                Var_86 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(RegionRval_64);
                mercury__bool__or_3_p_0(Var_86, STATE_VARIABLE_Refers_83_83, &STATE_VARIABLE_Refers_87_87);
              }
              if ((MaybeReuse_63 == (MR_Word) ((MR_Unsigned) 0U)))
                Refers_5 = STATE_VARIABLE_Refers_87_87;
              else
              {
                MR_Word ReuseRval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_63, (MR_Integer) 0))));
                MR_Word MaybeFlagLval_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_63, (MR_Integer) 1))));
                MR_Word Var_88;
                MR_Word STATE_VARIABLE_Refers_89_89;

                Var_88 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ReuseRval_65);
                mercury__bool__or_3_p_0(Var_88, STATE_VARIABLE_Refers_87_87, &STATE_VARIABLE_Refers_89_89);
                if ((MaybeFlagLval_66 == (MR_Word) ((MR_Unsigned) 0U)))
                  Refers_5 = STATE_VARIABLE_Refers_89_89;
                else
                {
                  MR_Word FlagLval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_66, (MR_Integer) 0))));
                  MR_Word Var_90;

                  Var_90 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(FlagLval_67);
                  mercury__bool__or_3_p_0(Var_90, STATE_VARIABLE_Refers_89_89, &Refers_5);
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_113);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_117);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Rval_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_108);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Lval_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_120);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word Rval_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_116);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Lval_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_114);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word Rval_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_115);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Components_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word Var_81;

              Var_81 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[4]), Components_69);
              Refers_5 = mercury__bool__or_list_1_f_0(Var_81);
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word Lval_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_98);
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Lval_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word Rval_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Var_79 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_103);
              Var_80 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_102);
              Refers_5 = mercury__bool__or_2_f_0(Var_79, Var_80);
            }
            break;
        }
        break;
    }
    return Refers_5;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__block_refers_to_stack_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Instr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstrRefers_6;

      InstrRefers_6 = ll_backend__opt_util__instr_refers_to_stack_1_f_0(Instr_3);
      switch (InstrRefers_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Uinstr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_3, (MR_Integer) 0))));
            MR_Word CanFallThrough_9;

            CanFallThrough_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr_7);
            switch (CanFallThrough_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Instrs_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__opt_util__possible_targets_3_p_0(
  MR_Word Uinstr_4,
  MR_Word * Labels_5,
  MR_Word * CodeAddrs_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Uinstr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
          *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
          *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "block");
              return;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 31:
          case (MR_Integer) 32:
          case (MR_Integer) 34:
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Return_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
              MR_Word ReturnLabel_71;

              succeeded = ((MR_tag((MR_Word) Return_66)) == (MR_Integer) 1);
              if (succeeded)
              {
                ReturnLabel_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Return_66, (MR_Integer) 0))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Labels_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReturnLabel_71));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *CodeAddrs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Return_66));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CodeAddr_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
              MR_Word Label_74;

              succeeded = ((MR_tag((MR_Word) CodeAddr_72)) == (MR_Integer) 1);
              if (succeeded)
              {
                Label_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_72, (MR_Integer) 0))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Labels_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_74));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *CodeAddrs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CodeAddr_72));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeLabels_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
              MR_Word RevLabels_84;

              ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(MaybeLabels_83, (MR_Word) ((MR_Unsigned) 0U), &RevLabels_84);
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevLabels_84, Labels_5);
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word CodeAddr_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
              MR_Word Label_109;

              succeeded = ((MR_tag((MR_Word) CodeAddr_112)) == (MR_Integer) 1);
              if (succeeded)
              {
                Label_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_112, (MR_Integer) 0))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Labels_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_109));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *CodeAddrs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CodeAddr_112));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
                }
              }
            }
            break;
          case (MR_Integer) 26:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "decr_sp_and_return");
              return;
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word MaybeFixLabel_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4))));
              MR_Word MaybeLayoutLabel_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5))));
              MR_Word MaybeOnlyLayoutLabel_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 6))));
              MR_Word MaybeSubLabel_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 7))));
              MR_Word MaybeDefLabel_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 8))));

              ll_backend__opt_util__foreign_proc_labels_6_p_0(MaybeFixLabel_88, MaybeLayoutLabel_89, MaybeOnlyLayoutLabel_90, MaybeSubLabel_91, MaybeDefLabel_92, Labels_5);
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word Label_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_105));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word Label_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_117));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__instr_labels_only_2_p_0(
  MR_Word Instr_3,
  MR_Word * Labels_4)
{
  {
    MR_Word _CodeAddrs_5;

    ll_backend__opt_util__instr_labels_3_p_0(Instr_3, Labels_4, &_CodeAddrs_5);
  }
}

static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
  MR_Word Uinstr_4,
  MR_Word * Labels_5,
  MR_Word * CodeAddrs_6)
{
  switch (MR_tag((MR_Word) Uinstr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
        *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
        *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

            ll_backend__opt_util__instr_list_labels_3_p_0(Instrs_79, Labels_5, CodeAddrs_6);
          }
          break;
        case (MR_Integer) 1:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word Ret_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word Var_100;

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Ret_60));
              MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (*Labels_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Target_59));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_100));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            if ((Var_114 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word Addr_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 0))));

              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CodeAddrs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Addr_110));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Addr_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Addr_66));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word RevLabels_82;

            ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(MaybeLabels_81, (MR_Word) ((MR_Unsigned) 0U), &RevLabels_82);
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevLabels_82, Labels_5);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 8:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Addr_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Addr_104));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Labels_5));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 11:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 12:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 13:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 14:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 15:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 16:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 17:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 18:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 19:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 20:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 21:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 22:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 23:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 24:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 25:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 26:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.instr_labels_2\'/3", (MR_String) "decr_sp_and_return");
            return;
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word MaybeFixLabel_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4))));
            MR_Word MaybeLayoutLabel_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5))));
            MR_Word MaybeOnlyLayoutLabel_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 6))));
            MR_Word MaybeSubLabel_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 7))));
            MR_Word MaybeDefLabel_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 8))));

            ll_backend__opt_util__foreign_proc_labels_6_p_0(MaybeFixLabel_86, MaybeLayoutLabel_87, MaybeOnlyLayoutLabel_88, MaybeSubLabel_89, MaybeDefLabel_90, Labels_5);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 28:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Child_70));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_72));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 31:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Label_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_108));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word Label_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_106));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 34:
          {
            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Uinstr_4;
    MR_Word Instrs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadLabels_9;
    MR_Word HeadCodeAddrs_10;
    MR_Word TailLabels_11;
    MR_Word TailCodeAddrs_12;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    Uinstr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
    ll_backend__opt_util__instr_labels_3_p_0(Uinstr_4, &HeadLabels_9, &HeadCodeAddrs_10);
    ll_backend__opt_util__instr_list_labels_3_p_0(Instrs_6, &TailLabels_11, &TailCodeAddrs_12);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), HeadLabels_9, TailLabels_11);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), HeadCodeAddrs_10, TailCodeAddrs_12);
  }
}

void MR_CALL 
ll_backend__opt_util__instr_labels_3_p_0(
  MR_Word Instr_4,
  MR_Word * Labels_5,
  MR_Word * CodeAddrs_6)
{
  {
    MR_Word Labels0_7;
    MR_Word CodeAddrs1_8;
    MR_Word Rvals_9;
    MR_Word Lvals_10;
    MR_Word CodeAddrs2_11;
    MR_Word CodeAddrs3_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_12;
    MR_Word Var_14;

    ll_backend__opt_util__instr_labels_2_3_p_0(Instr_4, &Labels0_7, &CodeAddrs1_8);
    ll_backend__code_util__instr_rvals_and_lvals_3_p_0(Instr_4, &Rvals_9, &Lvals_10);
    Var_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Rvals_9);
    ll_backend__exprn_aux__rval_list_addrs_3_p_0(Var_15, &CodeAddrs2_11, &Var_12);
    Var_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_10);
    ll_backend__exprn_aux__lval_list_addrs_3_p_0(Var_16, &CodeAddrs3_13, &Var_14);
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrs2_11, CodeAddrs3_13);
    *CodeAddrs_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrs1_8, Var_17);
    ll_backend__opt_util__find_label_code_addrs_3_p_0(*CodeAddrs_6, Labels0_7, Labels_5);
  }
}

static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Labels_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Labels_3 = HeadVar__2_2;
    else
    {
      MR_Word CodeAddr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Rest_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Labels1_10;
      MR_Word Label_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) CodeAddr_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Label_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_5, (MR_Integer) 0))));
        {
          Labels1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Labels1_10, 0) = ((MR_Box) (Label_9));
          MR_hl_field(MR_mktag(1), Labels1_10, 1) = ((MR_Box) (HeadVar__2_2));
        }
      }
      else
        Labels1_10 = HeadVar__2_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_6;
      next_value_of_HeadVar__2_2 = Labels1_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
  MR_Word MaybeFixedLabel_7,
  MR_Word MaybeLayoutLabel_8,
  MR_Word MaybeOnlyLayoutLabel_9,
  MR_Word MaybeSubLabel_10,
  MR_Word MaybeDefLabel_11,
  MR_Word * STATE_VARIABLE_Labels_18)
{
  {
    MR_Word STATE_VARIABLE_Labels_20_20;
    MR_Word STATE_VARIABLE_Labels_21_21;
    MR_Word STATE_VARIABLE_Labels_22_22;
    MR_Word STATE_VARIABLE_Labels_23_23;

    if ((MaybeFixedLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Labels_20_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FixedLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFixedLabel_7, (MR_Integer) 0))));

      {
        STATE_VARIABLE_Labels_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_20_20, 0) = ((MR_Box) (FixedLabel_13));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_20_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeLayoutLabel_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Labels_21_21 = STATE_VARIABLE_Labels_20_20;
    else
    {
      MR_Word LayoutLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLayoutLabel_8, (MR_Integer) 0))));

      {
        STATE_VARIABLE_Labels_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_21_21, 0) = ((MR_Box) (LayoutLabel_14));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Labels_20_20));
      }
    }
    if ((MaybeOnlyLayoutLabel_9 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Labels_22_22 = STATE_VARIABLE_Labels_21_21;
    else
    {
      MR_Word OnlyLayoutLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyLayoutLabel_9, (MR_Integer) 0))));

      {
        STATE_VARIABLE_Labels_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_22_22, 0) = ((MR_Box) (OnlyLayoutLabel_15));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Labels_21_21));
      }
    }
    if ((MaybeSubLabel_10 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Labels_23_23 = STATE_VARIABLE_Labels_22_22;
    else
    {
      MR_Word SubLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubLabel_10, (MR_Integer) 0))));

      {
        STATE_VARIABLE_Labels_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_23_23, 0) = ((MR_Box) (SubLabel_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_23_23, 1) = ((MR_Box) (STATE_VARIABLE_Labels_22_22));
      }
    }
    if ((MaybeDefLabel_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Labels_18 = STATE_VARIABLE_Labels_23_23;
    else
    {
      MR_Word DefLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefLabel_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Labels_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefLabel_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Labels_23_23));
      }
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevLabels_0_2,
  MR_Word * STATE_VARIABLE_RevLabels_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevLabels_3 = STATE_VARIABLE_RevLabels_0_2;
    else
    {
      MR_Word MaybeLabel_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeLabels_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevLabels_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevLabels_0_2;

      if ((MaybeLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_RevLabels_13_13 = STATE_VARIABLE_RevLabels_0_2;
      else
      {
        MR_Word Label_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLabel_7, (MR_Integer) 0))));

        {
          STATE_VARIABLE_RevLabels_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevLabels_13_13, 0) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevLabels_13_13, 1) = ((MR_Box) (STATE_VARIABLE_RevLabels_0_2));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_8;
      next_value_of_STATE_VARIABLE_RevLabels_0_2 = STATE_VARIABLE_RevLabels_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevLabels_0_2 = next_value_of_STATE_VARIABLE_RevLabels_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_p_0(
  MR_Word Instrs_3,
  MR_Integer * N_4)
{
  ll_backend__opt_util__count_incr_hp_acc_3_p_0(Instrs_3, (MR_Integer) 0, N_4);
}

static void MR_CALL 
ll_backend__opt_util__count_incr_hp_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_N_3 = STATE_VARIABLE_N_0_2;
    else
    {
      MR_Word Uinstr0_7;
      MR_Word Instrs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_N_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;

      Uinstr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
        STATE_VARIABLE_N_22_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_2 + (MR_Unsigned) 1);
      else
        STATE_VARIABLE_N_22_22 = STATE_VARIABLE_N_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_9;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_N_0_2 = next_value_of_STATE_VARIABLE_N_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__count_temps_instr_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
      *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
    }
    else
    {
      MR_Word Uinstr_12;
      MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_R_22_22;
      MR_Integer STATE_VARIABLE_F_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      Uinstr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      ll_backend__opt_util__count_temps_instr_5_p_0(Uinstr_12, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_22_22, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_14;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_22_22;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_R_0_2 = next_value_of_STATE_VARIABLE_R_0_2;
      STATE_VARIABLE_F_0_4 = next_value_of_STATE_VARIABLE_F_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__count_temps_instr_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
        *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
        *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_R_37_37;
            MR_Integer STATE_VARIABLE_F_38_38;

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_29, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_37_37, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_38_38);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_30, STATE_VARIABLE_R_37_37, STATE_VARIABLE_R_3, STATE_VARIABLE_F_38_38, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_R_49_49;
            MR_Integer STATE_VARIABLE_F_50_50;

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_41, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_49_49, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_50_50);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_42, STATE_VARIABLE_R_49_49, STATE_VARIABLE_R_3, STATE_VARIABLE_F_50_50, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 5:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 6:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_87, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 8:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_97, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_116, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_125, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Lval_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Rval_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word MaybeRegionRval_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
            MR_Word MaybeReuse_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8))));
            MR_Integer STATE_VARIABLE_R_152_152;
            MR_Integer STATE_VARIABLE_F_153_153;
            MR_Integer STATE_VARIABLE_R_154_154;
            MR_Integer STATE_VARIABLE_F_155_155;
            MR_Integer STATE_VARIABLE_R_156_156;
            MR_Integer STATE_VARIABLE_F_157_157;

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_134, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_152_152, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_153_153);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_137, STATE_VARIABLE_R_152_152, &STATE_VARIABLE_R_154_154, STATE_VARIABLE_F_153_153, &STATE_VARIABLE_F_155_155);
            if ((MaybeRegionRval_140 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_R_156_156 = STATE_VARIABLE_R_154_154;
              STATE_VARIABLE_F_157_157 = STATE_VARIABLE_F_155_155;
            }
            else
            {
              MR_Word RegionRval_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_140, (MR_Integer) 0))));

              ll_backend__opt_util__count_temps_rval_5_p_0(RegionRval_144, STATE_VARIABLE_R_154_154, &STATE_VARIABLE_R_156_156, STATE_VARIABLE_F_155_155, &STATE_VARIABLE_F_157_157);
            }
            if ((MaybeReuse_141 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_156_156;
              *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_157_157;
            }
            else
            {
              MR_Word ReuseRval_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_141, (MR_Integer) 0))));
              MR_Word MaybeFlagLval_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_141, (MR_Integer) 1))));
              MR_Integer STATE_VARIABLE_R_158_158;
              MR_Integer STATE_VARIABLE_F_159_159;

              ll_backend__opt_util__count_temps_rval_5_p_0(ReuseRval_145, STATE_VARIABLE_R_156_156, &STATE_VARIABLE_R_158_158, STATE_VARIABLE_F_157_157, &STATE_VARIABLE_F_159_159);
              if ((MaybeFlagLval_146 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_158_158;
                *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_159_159;
              }
              else
              {
                MR_Word FlagLval_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_146, (MR_Integer) 0))));

                ll_backend__opt_util__count_temps_lval_5_p_0(FlagLval_147, STATE_VARIABLE_R_158_158, STATE_VARIABLE_R_3, STATE_VARIABLE_F_159_159, STATE_VARIABLE_F_5);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_162, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_171, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_180, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 16:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word NumLval_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word AddrLval_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
            MR_Integer STATE_VARIABLE_R_208_208;
            MR_Integer STATE_VARIABLE_F_209_209;
            MR_Integer STATE_VARIABLE_R_210_210;
            MR_Integer STATE_VARIABLE_F_211_211;

            ll_backend__opt_util__count_temps_rval_5_p_0(IdRval_199, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_208_208, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_209_209);
            ll_backend__opt_util__count_temps_lval_5_p_0(NumLval_200, STATE_VARIABLE_R_208_208, &STATE_VARIABLE_R_210_210, STATE_VARIABLE_F_209_209, &STATE_VARIABLE_F_211_211);
            ll_backend__opt_util__count_temps_lval_5_p_0(AddrLval_201, STATE_VARIABLE_R_210_210, STATE_VARIABLE_R_3, STATE_VARIABLE_F_211_211, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            ll_backend__opt_util__count_temps_rval_5_p_0(ValueRval_216, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 19:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_233 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_233, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_242, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_264 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_264, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_273, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 24:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 25:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 26:
          {
            *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
            *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Comps_306 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            ll_backend__opt_util__count_temps_components_5_p_0(Comps_306, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_323 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_323, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_334 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_334, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_344 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_344, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_355 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_355, STATE_VARIABLE_R_0_2, STATE_VARIABLE_R_3, STATE_VARIABLE_F_0_4, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Rval_364 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Lval_365 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_R_373_373;
            MR_Integer STATE_VARIABLE_F_374_374;

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_364, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_373_373, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_374_374);
            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_365, STATE_VARIABLE_R_373_373, STATE_VARIABLE_R_3, STATE_VARIABLE_F_374_374, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval_377 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word LCSRval_378 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_R_386_386;
            MR_Integer STATE_VARIABLE_F_387_387;

            ll_backend__opt_util__count_temps_rval_5_p_0(LCRval_377, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_386_386, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_387_387);
            ll_backend__opt_util__count_temps_rval_5_p_0(LCSRval_378, STATE_VARIABLE_R_386_386, STATE_VARIABLE_R_3, STATE_VARIABLE_F_387_387, STATE_VARIABLE_F_5);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_390 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word LCSRval_391 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_R_398_398;
            MR_Integer STATE_VARIABLE_F_399_399;

            ll_backend__opt_util__count_temps_rval_5_p_0(LCRval_390, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_398_398, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_399_399);
            ll_backend__opt_util__count_temps_rval_5_p_0(LCSRval_391, STATE_VARIABLE_R_398_398, STATE_VARIABLE_R_3, STATE_VARIABLE_F_399_399, STATE_VARIABLE_F_5);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
      *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
    }
    else
    {
      MR_Word Comp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Comps_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_R_20_20;
      MR_Integer STATE_VARIABLE_F_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      switch (MR_tag((MR_Word) Comp_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_R_20_20 = STATE_VARIABLE_R_0_2;
            STATE_VARIABLE_F_21_21 = STATE_VARIABLE_F_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Inputs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Comp_12, (MR_Integer) 0))));

            ll_backend__opt_util__count_temps_inputs_5_p_0(Inputs_31, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_20_20, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_21_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Outputs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Comp_12, (MR_Integer) 0))));

            ll_backend__opt_util__count_temps_outputs_5_p_0(Outputs_32, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_20_20, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_21_21);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Comp_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_20_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_21_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_20_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_21_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_20_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_21_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_20_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_21_21 = STATE_VARIABLE_F_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Comps_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_20_20;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_R_0_2 = next_value_of_STATE_VARIABLE_R_0_2;
      STATE_VARIABLE_F_0_4 = next_value_of_STATE_VARIABLE_F_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
      *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
    }
    else
    {
      MR_Word Output_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Outputs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word DestLval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_12, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_R_27_27;
      MR_Integer STATE_VARIABLE_F_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      ll_backend__opt_util__count_temps_lval_5_p_0(DestLval_16, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_27_27, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Outputs_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_27_27;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_R_0_2 = next_value_of_STATE_VARIABLE_R_0_2;
      STATE_VARIABLE_F_0_4 = next_value_of_STATE_VARIABLE_F_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_R_0_2,
  MR_Integer * STATE_VARIABLE_R_3,
  MR_Integer STATE_VARIABLE_F_0_4,
  MR_Integer * STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_F_5 = STATE_VARIABLE_F_0_4;
      *STATE_VARIABLE_R_3 = STATE_VARIABLE_R_0_2;
    }
    else
    {
      MR_Word Input_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Inputs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgRval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_12, (MR_Integer) 4))));
      MR_Integer STATE_VARIABLE_R_27_27;
      MR_Integer STATE_VARIABLE_F_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      ll_backend__opt_util__count_temps_rval_5_p_0(ArgRval_20, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_27_27, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_27_27;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_R_0_2 = next_value_of_STATE_VARIABLE_R_0_2;
      STATE_VARIABLE_F_0_4 = next_value_of_STATE_VARIABLE_F_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_lval_5_p_0(
  MR_Word tscc_proc_1_input_1_Lval_6,
  MR_Integer tscc_proc_1_input_2_STATE_VARIABLE_R_0_23,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_R_24,
  MR_Integer tscc_proc_1_input_3_STATE_VARIABLE_F_0_25,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_F_26)
{
  {
    MR_Word tscc_proc_2_input_1_Rval_6;
    MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
    MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
    MR_Integer tscc_output_1_STATE_VARIABLE_R_24;
    MR_Integer tscc_output_2_STATE_VARIABLE_F_26;

    // The code for TSCC PROC 1: pred ll_backend.opt_util.count_temps_lval/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.opt_util.count_temps_lval/5-0
    ;
    // proc 2 in TSCC: pred ll_backend.opt_util.count_temps_rval/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Lval_6 = tscc_proc_1_input_1_Lval_6;
      MR_Integer STATE_VARIABLE_R_0_23 = tscc_proc_1_input_2_STATE_VARIABLE_R_0_23;
      MR_Integer STATE_VARIABLE_R_24;
      MR_Integer STATE_VARIABLE_F_0_25 = tscc_proc_1_input_3_STATE_VARIABLE_F_0_25;
      MR_Integer STATE_VARIABLE_F_26;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Lval_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
            STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 1))));
            MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (Var_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__int__max_3_p_0(Var_45, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_26);
                  STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__int__max_3_p_0(Var_45, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_24);
                  STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_44;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_43;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_42;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_41;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_40;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word BaseAddrRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));
                MR_Word FieldNumRval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_R_31_31;
                MR_Integer STATE_VARIABLE_F_32_32;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                ll_backend__opt_util__count_temps_rval_5_p_0(BaseAddrRval_19, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_31_31, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_32_32);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_20;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_31_31;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_32_32;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_21;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 12:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.count_temps_lval\'/5", (MR_String) "lvar");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_R_24 = STATE_VARIABLE_R_24;
      tscc_output_2_STATE_VARIABLE_F_26 = STATE_VARIABLE_F_26;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Rval_6 = tscc_proc_2_input_1_Rval_6;
      MR_Integer STATE_VARIABLE_R_0_20 = tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
      MR_Integer STATE_VARIABLE_R_21;
      MR_Integer STATE_VARIABLE_F_0_22 = tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
      MR_Integer STATE_VARIABLE_F_23;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Lval_6 = Lval_9;
            MR_Integer next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_R_0_23 = STATE_VARIABLE_R_0_20;
            MR_Integer next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_F_0_25 = STATE_VARIABLE_F_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Lval_6 = next_value_of_tscc_proc_1_input_1_Lval_6;
            tscc_proc_1_input_2_STATE_VARIABLE_R_0_23 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_R_0_23;
            tscc_proc_1_input_3_STATE_VARIABLE_F_0_25 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_F_0_25;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.count_temps_rval\'/5", (MR_String) "var");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_39;
            MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
            MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
            tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
            tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_21 = STATE_VARIABLE_R_0_20;
                STATE_VARIABLE_F_23 = STATE_VARIABLE_F_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_21 = STATE_VARIABLE_R_0_20;
                STATE_VARIABLE_F_23 = STATE_VARIABLE_F_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_13;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubRval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_40;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_R_26_26;
                MR_Integer STATE_VARIABLE_F_27_27;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                ll_backend__opt_util__count_temps_rval_5_p_0(SubRvalA_17, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_26_26, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_27_27);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_6 = SubRvalB_18;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_26_26;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_27_27;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_58;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_48;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word CellRval_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 0))));
                      MR_Word FieldNumRval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 2))));
                      MR_Integer STATE_VARIABLE_R_17_52;
                      MR_Integer STATE_VARIABLE_F_18_53;
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                      ll_backend__opt_util__count_temps_rval_5_p_0(CellRval_49, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_17_52, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_18_53);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_51;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_17_52;
                      next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_18_53;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_R_24 = STATE_VARIABLE_R_21;
      tscc_output_2_STATE_VARIABLE_F_26 = STATE_VARIABLE_F_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_R_24 = tscc_output_1_STATE_VARIABLE_R_24;
    *tscc_output_ptr_2_STATE_VARIABLE_F_26 = tscc_output_2_STATE_VARIABLE_F_26;
    return;
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
  MR_Word tscc_proc_2_input_1_Rval_6,
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_R_0_20,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_R_24,
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_F_0_22,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_F_26)
{
  {
    MR_Word tscc_proc_1_input_1_Lval_6;
    MR_Integer tscc_proc_1_input_2_STATE_VARIABLE_R_0_23;
    MR_Integer tscc_proc_1_input_3_STATE_VARIABLE_F_0_25;
    MR_Integer tscc_output_1_STATE_VARIABLE_R_24;
    MR_Integer tscc_output_2_STATE_VARIABLE_F_26;

    // The code for TSCC PROC 2: pred ll_backend.opt_util.count_temps_rval/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.opt_util.count_temps_lval/5-0
    ;
    // proc 2 in TSCC: pred ll_backend.opt_util.count_temps_rval/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Lval_6 = tscc_proc_1_input_1_Lval_6;
      MR_Integer STATE_VARIABLE_R_0_23 = tscc_proc_1_input_2_STATE_VARIABLE_R_0_23;
      MR_Integer STATE_VARIABLE_R_24;
      MR_Integer STATE_VARIABLE_F_0_25 = tscc_proc_1_input_3_STATE_VARIABLE_F_0_25;
      MR_Integer STATE_VARIABLE_F_26;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Lval_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
            STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 1))));
            MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (Var_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__int__max_3_p_0(Var_45, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_26);
                  STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__int__max_3_p_0(Var_45, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_24);
                  STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_44;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_43;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_42;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_41;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_40;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word BaseAddrRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));
                MR_Word FieldNumRval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_R_31_31;
                MR_Integer STATE_VARIABLE_F_32_32;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                ll_backend__opt_util__count_temps_rval_5_p_0(BaseAddrRval_19, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_31_31, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_32_32);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_20;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_31_31;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_32_32;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_21;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_23;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_25;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_R_24 = STATE_VARIABLE_R_0_23;
                STATE_VARIABLE_F_26 = STATE_VARIABLE_F_0_25;
              }
              break;
            case (MR_Integer) 12:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.count_temps_lval\'/5", (MR_String) "lvar");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_R_24 = STATE_VARIABLE_R_24;
      tscc_output_2_STATE_VARIABLE_F_26 = STATE_VARIABLE_F_26;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Rval_6 = tscc_proc_2_input_1_Rval_6;
      MR_Integer STATE_VARIABLE_R_0_20 = tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
      MR_Integer STATE_VARIABLE_R_21;
      MR_Integer STATE_VARIABLE_F_0_22 = tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
      MR_Integer STATE_VARIABLE_F_23;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Lval_6 = Lval_9;
            MR_Integer next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_R_0_23 = STATE_VARIABLE_R_0_20;
            MR_Integer next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_F_0_25 = STATE_VARIABLE_F_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Lval_6 = next_value_of_tscc_proc_1_input_1_Lval_6;
            tscc_proc_1_input_2_STATE_VARIABLE_R_0_23 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_R_0_23;
            tscc_proc_1_input_3_STATE_VARIABLE_F_0_25 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_F_0_25;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.count_temps_rval\'/5", (MR_String) "var");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_39;
            MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
            MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
            tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
            tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_21 = STATE_VARIABLE_R_0_20;
                STATE_VARIABLE_F_23 = STATE_VARIABLE_F_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_21 = STATE_VARIABLE_R_0_20;
                STATE_VARIABLE_F_23 = STATE_VARIABLE_F_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_13;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubRval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_40;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_R_26_26;
                MR_Integer STATE_VARIABLE_F_27_27;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                ll_backend__opt_util__count_temps_rval_5_p_0(SubRvalA_17, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_26_26, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_27_27);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_6 = SubRvalB_18;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_26_26;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_27_27;
                tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_58;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_48;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word CellRval_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 0))));
                      MR_Word FieldNumRval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 2))));
                      MR_Integer STATE_VARIABLE_R_17_52;
                      MR_Integer STATE_VARIABLE_F_18_53;
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                      ll_backend__opt_util__count_temps_rval_5_p_0(CellRval_49, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_17_52, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_18_53);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_51;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_17_52;
                      next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_18_53;
                      tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
                      tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                      tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_R_24 = STATE_VARIABLE_R_21;
      tscc_output_2_STATE_VARIABLE_F_26 = STATE_VARIABLE_F_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_R_24 = tscc_output_1_STATE_VARIABLE_R_24;
    *tscc_output_ptr_2_STATE_VARIABLE_F_26 = tscc_output_2_STATE_VARIABLE_F_26;
    return;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__livevals_addr_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Label_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) Label_3)) == (MR_Integer) 1))
            HeadVar__2_2 = (MR_Integer) 1;
          else
            HeadVar__2_2 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_const_condition_2_p_0(
  MR_Word TestRval_3,
  MR_Word * Taken_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TestRval_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 1))));

              succeeded = (Const_5 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                *Taken_4 = (MR_Integer) 1;
              else
              {
                succeeded = (Const_5 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                  *Taken_4 = (MR_Integer) 0;
                else
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.is_const_condition\'/2", (MR_String) "non-boolean constant as if-then-else condition");
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Op_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 1))));
              MR_Word SubRvalA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 2))));
              MR_Word SubTaken_8;

              succeeded = (Op_6 == (MR_Word) ((MR_Unsigned) 16U));
              if (succeeded)
              {
                succeeded = ll_backend__opt_util__is_const_condition_2_p_0(SubRvalA_7, &SubTaken_8);
                if (succeeded)
                {
                  mercury__bool__not_2_p_0(SubTaken_8, Taken_4);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 3))));
              MR_Word Op_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 1))));
              MR_Word SubRvalA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestRval_3, (MR_Integer) 2))));

              succeeded = ((((MR_tag((MR_Word) Op_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____rval_0_0(SubRvalA_14, SubRvalB_9);
                if (succeeded)
                {
                  *Taken_4 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_1_p_0(
  MR_Word Instrs_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_Word Var_8;

    ll_backend__opt_util__has_both_incr_decr_sp_acc_5_p_0(Instrs_2, (MR_Integer) 0, &Var_7, (MR_Integer) 0, &Var_8);
    succeeded = ((MR_Integer) 1 == Var_7);
    if (succeeded)
      succeeded = ((MR_Integer) 1 == Var_8);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HasIncr_0_2,
  MR_Word * STATE_VARIABLE_HasIncr_3,
  MR_Word STATE_VARIABLE_HasDecr_0_4,
  MR_Word * STATE_VARIABLE_HasDecr_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HasDecr_5 = STATE_VARIABLE_HasDecr_0_4;
      *STATE_VARIABLE_HasIncr_3 = STATE_VARIABLE_HasIncr_0_2;
    }
    else
    {
      MR_Word Uinstr_12;
      MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_HasIncr_26_26;
      MR_Word STATE_VARIABLE_HasDecr_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasIncr_0_2;
      MR_Word next_value_of_STATE_VARIABLE_HasDecr_0_4;

      Uinstr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 24)));
      if (succeeded)
        STATE_VARIABLE_HasIncr_26_26 = (MR_Integer) 1;
      else
        STATE_VARIABLE_HasIncr_26_26 = STATE_VARIABLE_HasIncr_0_2;
      succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 25)));
      if (succeeded)
        STATE_VARIABLE_HasDecr_27_27 = (MR_Integer) 1;
      else
        STATE_VARIABLE_HasDecr_27_27 = STATE_VARIABLE_HasDecr_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_14;
      next_value_of_STATE_VARIABLE_HasIncr_0_2 = STATE_VARIABLE_HasIncr_26_26;
      next_value_of_STATE_VARIABLE_HasDecr_0_4 = STATE_VARIABLE_HasDecr_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HasIncr_0_2 = next_value_of_STATE_VARIABLE_HasIncr_0_2;
      STATE_VARIABLE_HasDecr_0_4 = next_value_of_STATE_VARIABLE_HasDecr_0_4;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Uinstr_3;
      MR_Word Instrs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Touch_9_9;

      Uinstr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      STATE_VARIABLE_Touch_9_9 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(Uinstr_3);
      switch (STATE_VARIABLE_Touch_9_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Instrs_5;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = STATE_VARIABLE_Touch_9_9;
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  {
    MR_Word RevInstrs0_5;
    MR_Word Livevals_6;
    MR_Word RevInstrs_7;

    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs0_3, &RevInstrs0_5);
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals_6);
    ll_backend__opt_util__propagate_livevals_acc_3_p_0(RevInstrs0_5, Livevals_6, &RevInstrs_7);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevInstrs_7, Instrs_4);
  }
}

static void MR_CALL 
ll_backend__opt_util__propagate_livevals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Livevals0_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instr_8;
      MR_Word Instrs_9;
      MR_Word Uinstr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0))));
      MR_String Comment_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 1))));
      MR_Word Livevals_13;
      MR_Word ThisLivevals_12;

      succeeded = ((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 2);
      if (succeeded)
      {
        ThisLivevals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uinstr0_10, (MR_Integer) 0))));
        {
          MR_Word Var_16;

          mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Livevals0_2, ThisLivevals_12, &Livevals_13);
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (Livevals_13));
          }
          {
            Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Instr_8, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), Instr_8, 1) = ((MR_Box) (Comment_11));
          }
        }
      }
      else
      {
        MR_Word Lval_14;

        Instr_8 = Instr0_5;
        succeeded = ((((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Lval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 1))));
          mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_14)), Livevals0_2, &Livevals_13);
        }
        else
        {
          MR_Word Var_17;

          Var_17 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_10);
          succeeded = (Var_17 == (MR_Integer) 0);
          if (succeeded)
            mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals_13);
          else
            Livevals_13 = Livevals0_2;
        }
      }
      ll_backend__opt_util__propagate_livevals_acc_3_p_0(Instrs0_6, Livevals_13, &Instrs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs_9));
      }
    }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_in_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instrs1_6;
      MR_Word Var_9;

      ll_backend__opt_util__filter_in_livevals_2_p_0(Instrs0_4, &Instrs1_6);
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_6));
        }
      else
        *HeadVar__2_2 = Instrs1_6;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_bad_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instrs1_6;
      MR_Word Instrs2_9;
      MR_Word Uinstr2_10;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;

      ll_backend__opt_util__filter_out_bad_livevals_2_p_0(Instrs0_4, &Instrs1_6);
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        ll_backend__opt_util__skip_comments_2_p_0(Instrs1_6, &Instrs2_9);
        succeeded = (Instrs2_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs2_9, (MR_Integer) 0))));
          Uinstr2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
          Var_15 = (MR_Integer) 0;
          ll_backend__opt_util__can_use_livevals_2_p_0(Uinstr2_10, &Var_16);
          succeeded = (Var_15 == Var_16);
        }
      }
      if (succeeded)
        *HeadVar__2_2 = Instrs1_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_6));
        }
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 29:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 30:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 31:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 32:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 33:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 34:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_labels_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instrs1_6;
      MR_Word Var_9;

      ll_backend__opt_util__filter_out_labels_2_p_0(Instrs0_4, &Instrs1_6);
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
        *HeadVar__2_2 = Instrs1_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_6));
        }
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer FrameSize_7,
  MR_Word * Between_8,
  MR_Word * Remain_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_5;
    MR_Word Instrs0_6;
    MR_Word Uinstr0_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Uinstr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Uinstr0_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Between0_13;

            succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_6, FrameSize_7, &Between0_13, Remain_9);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Between_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Between0_13));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Between0_42;

            succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_6, FrameSize_7, &Between0_42, Remain_9);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Between_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Between0_42));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 1))));
                MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 2))));
                MR_Word Var_36;

                succeeded = ((((MR_tag((MR_Word) Lval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_36 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                  succeeded = (Var_36 == (MR_Integer) 0);
                }
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Instrs0_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                {
                  MR_Word Instrs2_20;
                  MR_Word Instrs1_18;
                  MR_Word Var_37;
                  MR_Word Var_38;
                  MR_Word Var_39;
                  MR_Integer Var_50;
                  MR_Integer Var_51;

                  succeeded = (Lval_15 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_16, (MR_Integer) 0))));
                      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 1))));
                        succeeded = (FrameSize_7 == Var_50);
                        if (succeeded)
                        {
                          ll_backend__opt_util__skip_comments_2_p_0(Instrs0_6, &Instrs1_18);
                          succeeded = (Instrs1_18 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_18, (MR_Integer) 0))));
                            Instrs2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_18, (MR_Integer) 1))));
                            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_39)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 0)))) == (MR_Integer) 25)));
                            if (succeeded)
                            {
                              Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 1))));
                              succeeded = (FrameSize_7 == Var_51);
                            }
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    *Between_8 = (MR_Word) ((MR_Unsigned) 0U);
                    *Remain_9 = Instrs2_20;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_40;
                    MR_Word Var_41;
                    MR_Word Between0_43;

                    Var_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_15);
                    succeeded = (Var_40 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                      succeeded = (Var_41 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_6, FrameSize_7, &Between0_43, Remain_9);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Between_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_5));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Between0_43));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word MaybeRegionRval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 7))));
                MR_Word MaybeReuse_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 8))));
                MR_Word Var_31;
                MR_Word Var_32;
                MR_Word Between0_47;
                MR_Word Lval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 1))));
                MR_Word Rval_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 4))));

                Var_31 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_48);
                succeeded = (Var_31 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_32 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_49);
                  succeeded = (Var_32 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    if ((MaybeRegionRval_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word RegionRval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_25, (MR_Integer) 0))));
                      MR_Word Var_33;

                      Var_33 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(RegionRval_27);
                      succeeded = (Var_33 == (MR_Integer) 0);
                    }
                    if (succeeded)
                    {
                      if ((MaybeReuse_26 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word ReuseRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_26, (MR_Integer) 0))));
                        MR_Word MaybeFlagLval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_26, (MR_Integer) 1))));
                        MR_Word Var_34;

                        Var_34 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ReuseRval_28);
                        succeeded = (Var_34 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          if ((MaybeFlagLval_29 == (MR_Word) ((MR_Unsigned) 0U)))
                            succeeded = MR_TRUE;
                          else
                          {
                            MR_Word FlagLval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_29, (MR_Integer) 0))));
                            MR_Word Var_35;

                            Var_35 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(FlagLval_30);
                            succeeded = (Var_35 == (MR_Integer) 0);
                          }
                        }
                      }
                      if (succeeded)
                      {
                        succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_6, FrameSize_7, &Between0_47, Remain_9);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Between_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_5));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Between0_47));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_10, (MR_Integer) 1))));

                succeeded = (FrameSize_7 == Var_52);
                if (succeeded)
                {
                  *Between_8 = (MR_Word) ((MR_Unsigned) 0U);
                  *Remain_9 = Instrs0_6;
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(
  MR_Word Instrs0_5,
  MR_Word * UntilSucceed_6,
  MR_String * SucceedComment_7,
  MR_Word * Remain_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_11_11;
    MR_Word RevUntilSucceed_9;

    succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_acc_5_p_0(Instrs0_5, (MR_Word) ((MR_Unsigned) 0U), &RevUntilSucceed_9, SucceedComment_7, Remain_8);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      mercury__list__reverse_2_p_0(TypeCtorInfo_11_11, RevUntilSucceed_9, UntilSucceed_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevUntilSucceed_0_36,
  MR_Word * STATE_VARIABLE_RevUntilSucceed_37,
  MR_String * SucceedComment_9,
  MR_Word * Remain_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_6;
    MR_Word Instrs0_7;
    MR_Word Uinstr_11;
    MR_String Comment_12;
    MR_Word Var_38;
    MR_Word Var_39;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Uinstr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_6, (MR_Integer) 0))));
      Comment_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_6, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_11, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 1))) & (MR_Integer) 1);
          succeeded = (Var_39 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        *SucceedComment_9 = Comment_12;
        *Remain_10 = Instrs0_7;
        *STATE_VARIABLE_RevUntilSucceed_37 = STATE_VARIABLE_RevUntilSucceed_0_36;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word STATE_VARIABLE_RevUntilSucceed_42_42;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevUntilSucceed_0_36;

        switch (MR_tag((MR_Word) Uinstr_11)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(Uinstr_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_11, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_11, (MR_Integer) 1))));
                  MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_11, (MR_Integer) 2))));
                  MR_Word Var_40;
                  MR_Word Var_41;

                  Var_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_13);
                  succeeded = (Var_40 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_14);
                    succeeded = (Var_41 == (MR_Integer) 0);
                  }
                }
                break;
              case (MR_Integer) 9:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 12:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 13:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 14:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 15:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 20:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 21:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 22:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 23:
                succeeded = MR_TRUE;
                break;
            }
            break;
        }
        if (succeeded)
        {
          {
            STATE_VARIABLE_RevUntilSucceed_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUntilSucceed_42_42, 0) = ((MR_Box) (Instr0_6));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUntilSucceed_42_42, 1) = ((MR_Box) (STATE_VARIABLE_RevUntilSucceed_0_36));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Instrs0_7;
          next_value_of_STATE_VARIABLE_RevUntilSucceed_0_36 = STATE_VARIABLE_RevUntilSucceed_42_42;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_RevUntilSucceed_0_36 = next_value_of_STATE_VARIABLE_RevUntilSucceed_0_36;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__next_assign_to_redoip_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AllowedBases_9,
  MR_Word RevSkip_10,
  MR_Word * Redoip_11,
  MR_Word * Skip_12,
  MR_Word * Rest_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr_7;
    MR_Word Instrs_8;
    MR_Word Uinstr_14;
    MR_Word Redoip0_17;
    MR_Word TypeCtorInfo_27_27;
    MR_Word Fr_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Uinstr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_14, (MR_Integer) 1))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_14, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Fr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                Redoip0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 1))));
                TypeCtorInfo_27_27 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                succeeded = mercury__list__member_2_p_0(TypeCtorInfo_27_27, ((MR_Box) (Fr_16)), AllowedBases_9);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Redoip_11 = Redoip0_17;
        mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevSkip_10, Skip_12);
        *Rest_13 = Instrs_8;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
          succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
            succeeded = MR_FALSE;
          else
          {
            MR_Word CanBranchAway_21;
            MR_Word Var_26;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_RevSkip_10;

            CanBranchAway_21 = ll_backend__opt_util__can_instr_branch_away_1_f_0(Uinstr_14);
            succeeded = (CanBranchAway_21 == (MR_Integer) 0);
            if (succeeded)
            {
              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Instr_7));
                MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (RevSkip_10));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Instrs_8;
              next_value_of_RevSkip_10 = Var_26;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              RevSkip_10 = next_value_of_RevSkip_10;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * StraightLine_5,
  MR_Word * Instrs_6)
{
  {
    MR_Word RevStraightLine_7;

    ll_backend__opt_util__no_stack_straight_line_acc_4_p_0(Instrs0_4, (MR_Word) ((MR_Unsigned) 0U), &RevStraightLine_7, Instrs_6);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevStraightLine_7, StraightLine_5);
  }
}

static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevStraightLine_0_2,
  MR_Word * STATE_VARIABLE_RevStraightLine_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevStraightLine_3 = STATE_VARIABLE_RevStraightLine_0_2;
    }
    else
    {
      MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Uinstr_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 1))));
                MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 2))));
                MR_Word Var_20;
                MR_Word Var_21;

                Var_20 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_16);
                succeeded = (Var_20 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_21 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_17);
                  succeeded = (Var_21 == (MR_Integer) 0);
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevStraightLine_22_22;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevStraightLine_0_2;

        {
          STATE_VARIABLE_RevStraightLine_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevStraightLine_22_22, 0) = ((MR_Box) (Instr0_8));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevStraightLine_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevStraightLine_0_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Instrs0_9;
        next_value_of_STATE_VARIABLE_RevStraightLine_0_2 = STATE_VARIABLE_RevStraightLine_22_22;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_RevStraightLine_0_2 = next_value_of_STATE_VARIABLE_RevStraightLine_0_2;
        continue;
      }
      else
      {
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_RevStraightLine_3 = STATE_VARIABLE_RevStraightLine_0_2;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__lval_refers_stackvars_1_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_output_1_HeadVar__2_2;

    // The code for TSCC PROC 1: func ll_backend.opt_util.lval_refers_stackvars/1-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func ll_backend.opt_util.lval_refers_stackvars/1-0
    ;
    // proc 2 in TSCC: func ll_backend.opt_util.rval_refers_stackvars/1-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word FieldNum_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_18;
                MR_Word Var_19;

                Var_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(FieldNum_17);
                HeadVar__2_2 = mercury__bool__or_2_f_0(Var_18, Var_19);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_26;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 12:
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.lval_refers_stackvars\'/1", (MR_String) "lvar");
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Lval_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.rval_refers_stackvars\'/1", (MR_String) "var");
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_9;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_15;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_19;
                MR_Word Var_20;

                Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_17);
                Var_20 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_18);
                HeadVar__2_2 = mercury__bool__or_2_f_0(Var_19, Var_20);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 0))));
                      MR_Word Rval2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 2))));
                      MR_Word Var_27;
                      MR_Word Var_28;

                      Var_27 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_24);
                      Var_28 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_26);
                      HeadVar__2_2 = mercury__bool__or_2_f_0(Var_27, Var_28);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__rval_refers_stackvars_1_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word tscc_output_1_HeadVar__2_2;

    // The code for TSCC PROC 2: func ll_backend.opt_util.rval_refers_stackvars/1-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func ll_backend.opt_util.lval_refers_stackvars/1-0
    ;
    // proc 2 in TSCC: func ll_backend.opt_util.rval_refers_stackvars/1-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word FieldNum_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_18;
                MR_Word Var_19;

                Var_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(FieldNum_17);
                HeadVar__2_2 = mercury__bool__or_2_f_0(Var_18, Var_19);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_26;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 12:
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.lval_refers_stackvars\'/1", (MR_String) "lvar");
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Lval_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.rval_refers_stackvars\'/1", (MR_String) "var");
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_9;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_15;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_19;
                MR_Word Var_20;

                Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_17);
                Var_20 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_18);
                HeadVar__2_2 = mercury__bool__or_2_f_0(Var_19, Var_20);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 0))));
                      MR_Word Rval2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 2))));
                      MR_Word Var_27;
                      MR_Word Var_28;

                      Var_27 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_24);
                      Var_28 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_26);
                      HeadVar__2_2 = mercury__bool__or_2_f_0(Var_27, Var_28);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__opt_util__find_no_fallthrough_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0))));
      MR_Word Var_9;

      Var_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_6);
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word Instrs1_8;

        ll_backend__opt_util__find_no_fallthrough_2_p_0(Instrs0_4, &Instrs1_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_8));
        }
      }
    }
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_fall_through_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Instrs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              ll_backend__opt_util__can_block_fall_through_2_p_0(Instrs_7, &HeadVar__2_2);
            }
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 13:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 14:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 15:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 16:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 17:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 18:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 19:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 20:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 21:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 22:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 23:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 24:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 25:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 26:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 27:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 28:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 29:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 30:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 31:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 32:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 33:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 34:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Uinstr_3;
      MR_Word Instrs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_8;

      Uinstr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      Var_8 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr_3);
      succeeded = (Var_8 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 0;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Instrs_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__skip_to_next_label_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Instr0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_4, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__3_3 = HeadVar__1_1;
      }
      else
      {
        MR_Word Before1_10;

        ll_backend__opt_util__skip_to_next_label_3_p_0(Instrs0_5, &Before1_10, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Before1_10));
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__opt_util__find_first_label_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Label_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.find_first_label\'/2", (MR_String) "cannot find first label");
        return;
      }
    else
    {
      MR_Word Instr0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LabelPrime_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_6, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        LabelPrime_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 1))));
        *Label_2 = LabelPrime_9;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Instrs0_7;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * Between_5,
  MR_Word * After_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_9_9;
    MR_Word BetweenRev_7;

    succeeded = ll_backend__opt_util__straight_alternative_acc_4_p_0(Instrs0_4, (MR_Word) ((MR_Unsigned) 0U), &BetweenRev_7, After_6);
    if (succeeded)
    {
      TypeCtorInfo_9_9 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      mercury__list__reverse_2_p_0(TypeCtorInfo_9_9, BetweenRev_7, Between_5);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Between_0_14,
  MR_Word * STATE_VARIABLE_Between_15,
  MR_Word * After_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_5;
    MR_Word Instrs0_6;
    MR_Word Uinstr0_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Uinstr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Word Var_16;
        MR_Word Var_17;

        succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_9, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))) & (MR_Integer) 1);
            succeeded = (Var_17 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          *After_8 = Instrs0_6;
          *STATE_VARIABLE_Between_15 = STATE_VARIABLE_Between_0_14;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word STATE_VARIABLE_Between_20_20;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_Between_0_14;

          {
            MR_Word Var_18;
            MR_Word Var_19;

            Var_18 = ll_backend__opt_util__can_instr_branch_away_1_f_0(Uinstr0_9);
            succeeded = (Var_18 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_19 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(Uinstr0_9);
              succeeded = (Var_19 == (MR_Integer) 0);
            }
          }
          if (!(succeeded))
          {
            MR_Word CodeAddr_13;

            succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              CodeAddr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_9, (MR_Integer) 2))));
              if ((CodeAddr_13 == (MR_Word) ((MR_Unsigned) 8U)))
                succeeded = MR_TRUE;
              else
              if ((CodeAddr_13 == (MR_Word) ((MR_Unsigned) 4U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
          }
          if (succeeded)
          {
            {
              STATE_VARIABLE_Between_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Between_20_20, 0) = ((MR_Box) (Instr0_5));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Between_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Between_0_14));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Instrs0_6;
            next_value_of_STATE_VARIABLE_Between_0_14 = STATE_VARIABLE_Between_20_20;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_Between_0_14 = next_value_of_STATE_VARIABLE_Between_0_14;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
  MR_Word Uinstr_3)
{
  {
    MR_Word Touch_4;

    switch (MR_tag((MR_Word) Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Touch_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Touch_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.touches_nondet_ctrl_instr\'/1", (MR_String) "block");
            break;
          case (MR_Integer) 1:
            {
              MR_Word TouchLval_49;
              MR_Word TouchRval_50;
              MR_Word Lval_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              TouchLval_49 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_98);
              TouchRval_50 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_99);
              mercury__bool__or_3_p_0(TouchLval_49, TouchRval_50, &Touch_4);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TouchLval_104;
              MR_Word TouchRval_105;
              MR_Word Lval_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              TouchLval_104 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_106);
              TouchRval_105 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_107);
              mercury__bool__or_3_p_0(TouchLval_104, TouchRval_105, &Touch_4);
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
            Touch_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 16:
          case (MR_Integer) 19:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
            Touch_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybeRegionRval_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 7))));
              MR_Word MaybeReuse_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 8))));
              MR_Word STATE_VARIABLE_Touch_87_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word STATE_VARIABLE_Touch_91_91;
              MR_Word Lval_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word Rval_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 4))));

              Var_88 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_100);
              Var_89 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_101);
              STATE_VARIABLE_Touch_87_87 = mercury__bool__or_2_f_0(Var_88, Var_89);
              if ((MaybeRegionRval_63 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Touch_91_91 = STATE_VARIABLE_Touch_87_87;
              else
              {
                MR_Word RegionRval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_63, (MR_Integer) 0))));
                MR_Word Var_90;

                Var_90 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(RegionRval_65);
                mercury__bool__or_3_p_0(Var_90, STATE_VARIABLE_Touch_87_87, &STATE_VARIABLE_Touch_91_91);
              }
              if ((MaybeReuse_64 == (MR_Word) ((MR_Unsigned) 0U)))
                Touch_4 = STATE_VARIABLE_Touch_91_91;
              else
              {
                MR_Word ReuseRval_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_64, (MR_Integer) 0))));
                MR_Word MaybeFlagLval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_64, (MR_Integer) 1))));
                MR_Word Var_92;
                MR_Word STATE_VARIABLE_Touch_93_93;

                Var_92 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ReuseRval_66);
                mercury__bool__or_3_p_0(Var_92, STATE_VARIABLE_Touch_91_91, &STATE_VARIABLE_Touch_93_93);
                if ((MaybeFlagLval_67 == (MR_Word) ((MR_Unsigned) 0U)))
                  Touch_4 = STATE_VARIABLE_Touch_93_93;
                else
                {
                  MR_Word FlagLval_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_67, (MR_Integer) 0))));
                  MR_Word Var_94;

                  Var_94 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(FlagLval_68);
                  mercury__bool__or_3_p_0(Var_94, STATE_VARIABLE_Touch_93_93, &Touch_4);
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_116);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_121);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_44);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word IdRval_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 3))));
              MR_Word NumLval_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 4))));
              MR_Word AddrLval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 5))));
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;

              Var_83 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(IdRval_70);
              Var_85 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(NumLval_71);
              Var_86 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(AddrLval_72);
              Var_84 = mercury__bool__or_2_f_0(Var_85, Var_86);
              Touch_4 = mercury__bool__or_2_f_0(Var_83, Var_84);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word Rval_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 3))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_119);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Lval_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_122);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word Rval_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_120);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Lval_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_117);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word Rval_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_118);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Components_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(Components_74);
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word Lval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_42);
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word TouchLval_112;
              MR_Word TouchRval_113;
              MR_Word Lval_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word Rval_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));

              TouchLval_112 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_114);
              TouchRval_113 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_115);
              mercury__bool__or_3_p_0(TouchLval_112, TouchRval_113, &Touch_4);
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word LCRval_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word LCSRval_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word TouchLC_110;
              MR_Word TouchLCS_111;

              TouchLC_110 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCRval_108);
              TouchLCS_111 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCSRval_109);
              mercury__bool__or_3_p_0(TouchLC_110, TouchLCS_111, &Touch_4);
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word LCRval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 1))));
              MR_Word LCSRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));
              MR_Word TouchLC_54;
              MR_Word TouchLCS_55;

              TouchLC_54 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCRval_51);
              TouchLCS_55 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCSRval_52);
              mercury__bool__or_3_p_0(TouchLC_54, TouchLCS_55, &Touch_4);
            }
            break;
        }
        break;
    }
    return Touch_4;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Comp_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Comps_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Touch1_6;
      MR_Word Touch2_7;

      switch (MR_tag((MR_Word) Comp_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Touch1_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          Touch1_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Touch1_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Comp_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Touch1_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Touch1_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Touch1_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              Touch1_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      Touch2_7 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(Comps_4);
      mercury__bool__or_3_p_0(Touch1_6, Touch2_7, &HeadVar__2_2);
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_output_1_HeadVar__2_2;

    // The code for TSCC PROC 1: func ll_backend.opt_util.touches_nondet_ctrl_lval/1-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func ll_backend.opt_util.touches_nondet_ctrl_lval/1-0
    ;
    // proc 2 in TSCC: func ll_backend.opt_util.touches_nondet_ctrl_rval/1-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Touch1_19;
                MR_Word Touch2_20;

                Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_16);
                Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_17);
                mercury__bool__or_3_p_0(Touch1_19, Touch2_20, &HeadVar__2_2);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 12:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Lval_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_6;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_12;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Touch1_17;
                MR_Word Touch2_18;

                Touch1_17 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_14);
                Touch2_18 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_15);
                mercury__bool__or_3_p_0(Touch1_17, Touch2_18, &HeadVar__2_2);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word tscc_output_1_HeadVar__2_2;

    // The code for TSCC PROC 2: func ll_backend.opt_util.touches_nondet_ctrl_rval/1-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func ll_backend.opt_util.touches_nondet_ctrl_lval/1-0
    ;
    // proc 2 in TSCC: func ll_backend.opt_util.touches_nondet_ctrl_rval/1-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Touch1_19;
                MR_Word Touch2_20;

                Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_16);
                Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_17);
                mercury__bool__or_3_p_0(Touch1_19, Touch2_20, &HeadVar__2_2);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 12:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Lval_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_6;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_12;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Rval2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Touch1_17;
                MR_Word Touch2_18;

                Touch1_17 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_14);
                Touch2_18 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_15);
                mercury__bool__or_3_p_0(Touch1_17, Touch2_18, &HeadVar__2_2);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_19, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_branch_away_1_f_0(
  MR_Word Uinstr_3)
{
  {
    MR_Word CanBranchAway_4;

    switch (MR_tag((MR_Word) Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CanBranchAway_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        CanBranchAway_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 26:
          case (MR_Integer) 30:
          case (MR_Integer) 33:
            CanBranchAway_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 31:
          case (MR_Integer) 32:
          case (MR_Integer) 34:
            CanBranchAway_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 27:
            {
              MR_Word Comps_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_3, (MR_Integer) 2))));

              CanBranchAway_4 = ll_backend__opt_util__can_components_branch_away_1_f_0(Comps_84);
            }
            break;
        }
        break;
    }
    return CanBranchAway_4;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Component_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Components_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Component_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__1_1 = Components_4;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CanBranchAway_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Component_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);

                switch (CanBranchAway_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Components_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_HeadVar__1_1 = Components_4;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_forkproceed_next_3_p_0(
  MR_Word Instrs0_4,
  MR_Word Sdprocmap_5,
  MR_Word * Between_6)
{
  {
    MR_bool succeeded;
    MR_Word Instrs1_7;
    MR_Word Instr1_8;
    MR_Word Instrs2_9;
    MR_Word Uinstr1_10;
    MR_Word JumpLabel_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;

    ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs0_4, &Instrs1_7);
    succeeded = (Instrs1_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_7, (MR_Integer) 0))));
      Instrs2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_7, (MR_Integer) 1))));
      Uinstr1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_8, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr1_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 1))));
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))) & (MR_Integer) 1);
            Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
            succeeded = (Var_19 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_20 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
                if (succeeded)
                  JumpLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeInfo_56_56;
        MR_Word TypeInfo_57_57;
        MR_Word TypeInfo_58_58;
        MR_Word BetweenJump_13;
        MR_Word BetweenFall_14;
        MR_Word BetweenTrue0_15;
        MR_Word BetweenFalse0_16;
        MR_Word Var_22;
        MR_Word Var_24;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Box conv0_BetweenJump_13;
        MR_Word Var_64;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]), Sdprocmap_5, ((MR_Box) (JumpLabel_12)), &conv0_BetweenJump_13);
        if (succeeded)
        {
          BetweenJump_13 = ((MR_Word) (conv0_BetweenJump_13));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs2_9, &BetweenFall_14, &Var_64);
          if (succeeded)
          {
            Var_22 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]));
            ll_backend__opt_util__filter_out_r1_3_p_0(BetweenJump_13, &Var_50, &BetweenTrue0_15);
            TypeInfo_56_56 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (Var_22)), ((MR_Box) (Var_50)));
            if (succeeded)
            {
              ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenTrue0_15, Between_6);
              Var_24 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]));
              ll_backend__opt_util__filter_out_r1_3_p_0(BetweenFall_14, &Var_51, &BetweenFalse0_16);
              TypeInfo_57_57 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (Var_24)), ((MR_Box) (Var_51)));
              if (succeeded)
              {
                ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenFalse0_16, &Var_52);
                TypeInfo_58_58 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (*Between_6)), ((MR_Box) (Var_52)));
              }
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_48_48;
        MR_Word TypeInfo_49_49;
        MR_Word TypeInfo_59_59;
        MR_Word TypeInfo_60_60;
        MR_Word TypeInfo_61_61;
        MR_Word Var_26;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word BetweenJump_37;
        MR_Word BetweenFall_38;
        MR_Word BetweenTrue0_39;
        MR_Word BetweenFalse0_40;
        MR_Word JumpLabel_41;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Integer Var_31;
        MR_Box conv1_BetweenJump_37;
        MR_Word Var_67;

        succeeded = ((((MR_tag((MR_Word) Uinstr1_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 1))));
          Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_10, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 2))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 16U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))) & (MR_Integer) 1);
                  Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
                  succeeded = (Var_30 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (Var_31 == (MR_Integer) 1);
                }
              }
            }
          }
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 1);
            if (succeeded)
            {
              JumpLabel_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
              TypeCtorInfo_48_48 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
              TypeInfo_49_49 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_48_48, TypeInfo_49_49, Sdprocmap_5, ((MR_Box) (JumpLabel_41)), &conv1_BetweenJump_37);
              if (succeeded)
              {
                BetweenJump_37 = ((MR_Word) (conv1_BetweenJump_37));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs2_9, &BetweenFall_38, &Var_67);
                if (succeeded)
                {
                  Var_33 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]));
                  ll_backend__opt_util__filter_out_r1_3_p_0(BetweenJump_37, &Var_53, &BetweenFalse0_40);
                  TypeInfo_59_59 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (Var_33)), ((MR_Box) (Var_53)));
                  if (succeeded)
                  {
                    ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenFalse0_40, Between_6);
                    Var_35 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]));
                    ll_backend__opt_util__filter_out_r1_3_p_0(BetweenFall_38, &Var_54, &BetweenTrue0_39);
                    TypeInfo_60_60 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (Var_35)), ((MR_Box) (Var_54)));
                    if (succeeded)
                    {
                      ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenTrue0_39, &Var_55);
                      TypeInfo_61_61 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (*Between_6)), ((MR_Box) (Var_55)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instrs1_6;
      MR_Word Var_9;

      ll_backend__opt_util__filter_out_livevals_2_p_0(Instrs0_4, &Instrs1_6);
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
      if (succeeded)
        *HeadVar__2_2 = Instrs1_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_6));
        }
    }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_r1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Instr0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Success0_8;
      MR_Word Instrs1_9;
      MR_Word Success1_10;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Integer Var_15;
      MR_Word Var_16;

      ll_backend__opt_util__filter_out_r1_3_p_0(Instrs0_5, &Success0_8, &Instrs1_9);
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_4, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
          succeeded = (Var_14 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_15 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
                Success1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__3_3 = Instrs1_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Success1_10));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_9));
        }
        *HeadVar__2_2 = Success0_8;
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_succeed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetweenIncl_4)
{
  {
    MR_bool succeeded;
    MR_Word Instrs1_5;
    MR_Word Instr1_6;
    MR_Word Instrs2_7;
    MR_Word Instrs3_10;
    MR_Word Instr3_11;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs0_3, &Instrs1_5);
    succeeded = (Instrs1_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_5, (MR_Integer) 0))));
      Instrs2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_5, (MR_Integer) 1))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_6, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
      if (succeeded)
      {
        ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs2_7, &Instrs3_10);
        succeeded = (Instrs3_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs3_10, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr3_11, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_19 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Instr3_11));
                MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstrsBetweenIncl_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr1_6));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_18));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetween_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs0_3, InstrsBetween_4, &Var_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * InstrsBetween_5,
  MR_Word * Success_6)
{
  {
    MR_bool succeeded;
    MR_Word Instrs1_7;
    MR_Word Instr1_8;
    MR_Word Instrs2_9;
    MR_Word Instr1use_12;
    MR_Word Instrs3_13;
    MR_Word Instr3_14;
    MR_Word Instrs4_15;
    MR_Word Instr3use_18;
    MR_Word Instrs5_19;
    MR_Word Instr5_20;
    MR_Word Instrs6_21;
    MR_Word R1val_22;
    MR_Word Instrs7_24;
    MR_Word Instr7_25;
    MR_Word Instrs8_26;
    MR_Word Instrs9_29;
    MR_Word Instr9_30;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_40;

    ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs0_4, &Instrs1_7);
    succeeded = (Instrs1_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_7, (MR_Integer) 0))));
      Instrs2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_7, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_8, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 1))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 2))));
        succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
            }
          }
        }
      }
      if (succeeded)
      {
        Instr1use_12 = Instr1_8;
        ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs2_9, &Instrs3_13);
      }
      else
      {
        Instr1use_12 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[3]);
        Instrs3_13 = Instrs1_7;
      }
      succeeded = (Instrs3_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs3_13, (MR_Integer) 0))));
        Instrs4_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs3_13, (MR_Integer) 1))));
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr3_14, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 0)))) == (MR_Integer) 25)));
        if (succeeded)
        {
          Instr3use_18 = Instr3_14;
          ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs4_15, &Instrs5_19);
        }
        else
        {
          Instr3use_18 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[4]);
          Instrs5_19 = Instrs3_13;
        }
        succeeded = (Instrs5_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr5_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs5_19, (MR_Integer) 0))));
          Instrs6_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs5_19, (MR_Integer) 1))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr5_20, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 1))));
            Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))) & (MR_Integer) 1);
              Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_46 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Var_47 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Var_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    R1val_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 1))));
                    if ((R1val_22 == (MR_Word) ((MR_Unsigned) 4U)))
                    {
                      *Success_6 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((R1val_22 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *Success_6 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs6_21, &Instrs7_24);
                      succeeded = (Instrs7_24 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Instr7_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs7_24, (MR_Integer) 0))));
                        Instrs8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs7_24, (MR_Integer) 1))));
                        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr7_25, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2);
                        if (succeeded)
                        {
                          ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs8_26, &Instrs9_29);
                          succeeded = (Instrs9_29 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Instr9_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs9_29, (MR_Integer) 0))));
                            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr9_30, (MR_Integer) 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))));
                              succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Instr7_25));
                                  MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
                                }
                                {
                                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Instr5_20));
                                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
                                }
                                {
                                  Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Instr3use_18));
                                  MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  *InstrsBetween_5 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr1use_12));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_52));
                                }
                                succeeded = MR_TRUE;
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
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_proceed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetween_4)
{
  {
    MR_bool succeeded;
    MR_Word Instrs1_5;
    MR_Word Instr1_6;
    MR_Word Instrs2_7;
    MR_Word Instr1use_10;
    MR_Word Instrs3_11;
    MR_Word Instr3_12;
    MR_Word Instrs4_13;
    MR_Word Instr3use_16;
    MR_Word Instrs5_17;
    MR_Word Instr5_18;
    MR_Word Instrs6_19;
    MR_Word Instrs7_22;
    MR_Word Instr7_23;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;

    ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs0_3, &Instrs1_5);
    succeeded = (Instrs1_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_5, (MR_Integer) 0))));
      Instrs2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_5, (MR_Integer) 1))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_6, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 2))));
        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
            }
          }
        }
      }
      if (succeeded)
      {
        Instr1use_10 = Instr1_6;
        ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs2_7, &Instrs3_11);
      }
      else
      {
        Instr1use_10 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[3]);
        Instrs3_11 = Instrs1_5;
      }
      succeeded = (Instrs3_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs3_11, (MR_Integer) 0))));
        Instrs4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs3_11, (MR_Integer) 1))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr3_12, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 0)))) == (MR_Integer) 25)));
        if (succeeded)
        {
          Instr3use_16 = Instr3_12;
          ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs4_13, &Instrs5_17);
        }
        else
        {
          Instr3use_16 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[4]);
          Instrs5_17 = Instrs3_11;
        }
        succeeded = (Instrs5_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr5_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs5_17, (MR_Integer) 0))));
          Instrs6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs5_17, (MR_Integer) 1))));
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr5_18, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 2);
          if (succeeded)
          {
            ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs6_19, &Instrs7_22);
            succeeded = (Instrs7_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs7_22, (MR_Integer) 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr7_23, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 1))));
                succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_42 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Instr5_18));
                    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Instr3use_16));
                    MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *InstrsBetween_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr1use_10));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_40));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_this_label_next_3_p_0(
  MR_Word Label_4,
  MR_Word HeadVar__2_2,
  MR_Word * Remainder_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr_5;
    MR_Word Moreinstr_6;
    MR_Word Uinstr_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Moreinstr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      Uinstr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Uinstr_8)) == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = Moreinstr_6;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        succeeded = ((MR_tag((MR_Word) Uinstr_8)) == (MR_Integer) 2);
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__2_2 = Moreinstr_6;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
        else
        {
          MR_Word NextLabel_12;

          succeeded = ((((MR_tag((MR_Word) Uinstr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            NextLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_8, (MR_Integer) 1))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_4, NextLabel_12);
            if (succeeded)
            {
              *Remainder_7 = Moreinstr_6;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word next_value_of_HeadVar__2_2 = Moreinstr_6;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_labels_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instrs1_7;
    MR_Word Var_12;
    MR_Word Var_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Instrs0_3 = Instrs1_7;

      // direct tailcall eliminated
      ;
      Instrs0_3 = next_value_of_Instrs0_3;
      continue;
    }
    else
    {
      MR_Word Instrs1_19;
      MR_Word Var_14;
      MR_Word Var_15;

      succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
        Instrs1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_Instrs0_3 = Instrs1_19;

        // direct tailcall eliminated
        ;
        Instrs0_3 = next_value_of_Instrs0_3;
        continue;
      }
      else
      {
        MR_Word Instrs1_18;
        MR_Word Var_16;
        MR_Word Var_17;

        succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
          Instrs1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word next_value_of_Instrs0_3 = Instrs1_18;

          // direct tailcall eliminated
          ;
          Instrs0_3 = next_value_of_Instrs0_3;
          continue;
        }
        else
          *Instrs_4 = Instrs0_3;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_labels_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instrs1_7;
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Instrs0_3 = Instrs1_7;

      // direct tailcall eliminated
      ;
      Instrs0_3 = next_value_of_Instrs0_3;
      continue;
    }
    else
    {
      MR_Word Instrs1_14;
      MR_Word Var_12;
      MR_Word Var_13;

      succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
        Instrs1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_Instrs0_3 = Instrs1_14;

        // direct tailcall eliminated
        ;
        Instrs0_3 = next_value_of_Instrs0_3;
        continue;
      }
      else
        *Instrs_4 = Instrs0_3;
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instrs1_7;
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      ll_backend__opt_util__skip_comments_2_p_0(Instrs1_7, Instrs_4);
    else
    {
      MR_Word Instrs1_14;
      MR_Word Var_12;
      MR_Word Var_13;

      succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
        Instrs1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_Instrs0_3 = Instrs1_14;

        // direct tailcall eliminated
        ;
        Instrs0_3 = next_value_of_Instrs0_3;
        continue;
      }
      else
        *Instrs_4 = Instrs0_3;
    }
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Instrs0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instrs1_7;
    MR_Word Var_8;
    MR_Word Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_3, (MR_Integer) 1))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Instrs0_3 = Instrs1_7;

      // direct tailcall eliminated
      ;
      Instrs0_3 = next_value_of_Instrs0_3;
      continue;
    }
    else
      *Instrs_4 = Instrs0_3;
    break;
  }
}

void MR_CALL 
ll_backend__opt_util__gather_comments_livevals_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * Comments_5,
  MR_Word * Instrs_6)
{
  {
    MR_bool succeeded = (Instrs0_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_7;
    MR_Word Instrs1_8;
    MR_Word Uinstr0_9;

    if (succeeded)
    {
      Instr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 0))));
      Instrs1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 1))));
      Uinstr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 2))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      MR_Word Comments0_13;

      ll_backend__opt_util__gather_comments_livevals_3_p_0(Instrs1_8, &Comments0_13, Instrs_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Comments_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Comments0_13));
      }
    }
    else
    {
      *Instrs_6 = Instrs0_4;
      *Comments_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void MR_CALL 
ll_backend__opt_util__get_prologue_4_p_0(
  MR_Word Instrs0_5,
  MR_Word * LabelInstr_6,
  MR_Word * Comments_7,
  MR_Word * Instrs_8)
{
  {
    MR_bool succeeded;
    MR_Word Comments1_9;
    MR_Word Instrs1_10;
    MR_Word Instr1_11;
    MR_Word Instrs2_12;
    MR_Word Var_16;

    ll_backend__opt_util__gather_comments_3_p_0(Instrs0_5, &Comments1_9, &Instrs1_10);
    succeeded = (Instrs1_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_10, (MR_Integer) 0))));
      Instrs2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_10, (MR_Integer) 1))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_11, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word Comments2_15;

      *LabelInstr_6 = Instr1_11;
      ll_backend__opt_util__gather_comments_3_p_0(Instrs2_12, &Comments2_15, Instrs_8);
      mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments1_9, Comments2_15, Comments_7);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.opt_util.get_prologue\'/4", (MR_String) "procedure does not begin with label");
        return;
      }
  }
}

void MR_CALL 
ll_backend__opt_util__gather_comments_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * Comments_5,
  MR_Word * Instrs_6)
{
  {
    MR_bool succeeded = (Instrs0_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_7;
    MR_Word Instrs1_8;
    MR_Word Var_12;

    if (succeeded)
    {
      Instr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 0))));
      Instrs1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word Comments0_11;

      ll_backend__opt_util__gather_comments_3_p_0(Instrs1_8, &Comments0_11, Instrs_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Comments_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Comments0_11));
      }
    }
    else
    {
      *Instrs_6 = Instrs0_4;
      *Comments_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__opt_util____Unify____instrmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__opt_util____Compare____instrmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__opt_util____Unify____lvalmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__opt_util____Compare____lvalmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__opt_util____Unify____succmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__opt_util____Compare____succmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__opt_util____Unify____tailmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__opt_util____Compare____tailmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__opt_util__init(void)
{
}

void mercury__ll_backend__opt_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_instrmap_0);
	MR_register_type_ctor_info(&ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_lvalmap_0);
	MR_register_type_ctor_info(&ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_succmap_0);
	MR_register_type_ctor_info(&ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_tailmap_0);
}

void mercury__ll_backend__opt_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__opt_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.opt_util.
