/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version rotd-2025-06-23
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
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2589__1_2_p_0(
  MR_Word Lvals0_8,
  MR_Word Lvals_9);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2502__1_2_p_0(
  MR_Word DefLabel0_96,
  MR_Word DefLabel_97);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2483__1_2_p_0(
  MR_Word OnlyLayoutLabel0_90,
  MR_Word OnlyLayoutLabel_91);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2474__1_2_p_0(
  MR_Word LayoutLabel0_88,
  MR_Word LayoutLabel_89);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2465__1_2_p_0(
  MR_Word FixLabel0_86,
  MR_Word FixLabel_87);

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
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_const_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__opt_util_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__opt_util_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[0])),
    ((MR_Box) (ll_backend__opt_util__instr_refers_to_stack_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[3])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[4])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "no succip restoration")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "no sp restoration")) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_4[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_5[1][6] = {
  /* row   0 */
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
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
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
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
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
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0) },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
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
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2589__1_2_p_0(
  MR_Word Lvals0_8,
  MR_Word Lvals_9)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_1[1]), ((MR_Box) (Lvals0_8)), ((MR_Box) (Lvals_9)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2502__1_2_p_0(
  MR_Word DefLabel0_96,
  MR_Word DefLabel_97)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(DefLabel0_96, DefLabel_97);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2483__1_2_p_0(
  MR_Word OnlyLayoutLabel0_90,
  MR_Word OnlyLayoutLabel_91)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(OnlyLayoutLabel0_90, OnlyLayoutLabel_91);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2474__1_2_p_0(
  MR_Word LayoutLabel0_88,
  MR_Word LayoutLabel_89)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(LayoutLabel0_88, LayoutLabel_89);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2465__1_2_p_0(
  MR_Word FixLabel0_86,
  MR_Word FixLabel_87)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(FixLabel0_86, FixLabel_87);
  return succeeded;
}

void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__opt_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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
  MR_Word Refers_4;
  MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(0, Input_3, 0))));
  MR_Word IsDummy_7 = ((MR_Unsigned) ((MR_hl_field(0, Input_3, 2))) & (MR_Integer) 1);

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

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
  MR_Word Input_3)
{
  MR_Word Refers_4;
  MR_Word IsDummy_7 = ((MR_Unsigned) ((MR_hl_field(0, Input_3, 2))) & (MR_Integer) 1);
  MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(0, Input_3, 4))));

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

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Refers_4;

  conv1_Refers_4 = ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Refers_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Refers_4;

  conv0_Refers_4 = ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Refers_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
  MR_Word Component_3)
{
  MR_Word Refers_4;

  switch (MR_tag((MR_Word) Component_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      Refers_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Inputs_5 = ((MR_Word) ((MR_hl_field(1, Component_3, 0))));
        MR_Word Var_16;

        Var_16 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[5]), Inputs_5);
        mercury__bool__or_list_2_p_0(Var_16, &Refers_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs_6 = ((MR_Word) ((MR_hl_field(2, Component_3, 0))));
        MR_Word Var_18;

        Var_18 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[6]), Outputs_6);
        mercury__bool__or_list_2_p_0(Var_18, &Refers_4);
      }
      break;
  }
  return Refers_4;
}

MR_String MR_CALL 
ll_backend__opt_util__format_label_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ProcLabel_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_6);
  }
  else
  {
    MR_Word ProcLabel_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

    HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_4);
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_util__format_proc_label_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String Name_6 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer Mode_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
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
    MR_Word SpecialPredId_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word TypeModule_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_String TypeName_19 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 3))));
    MR_Integer TypeArity_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 4))));
    MR_Integer Mode_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 5))));
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
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (TypeModule_18));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (TypeName_19));
    }
    {
      TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_23, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, TypeCtor_23, 1) = ((MR_Box) (TypeArity_20));
    }
    PredName_22 = hlds__pred_name__uci_pred_name_2_f_0(SpecialPredId_17, TypeCtor_23);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0(PredName_22, Var_24);
  }
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_4_p_0(
  MR_Word Instr0_5,
  MR_Word * Instr_6,
  MR_Word ReplMap_7,
  MR_Word ReplData_8)
{
  MR_Word Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_5, 0))));
  MR_String Comment_10 = ((MR_String) ((MR_hl_field(0, Instr0_5, 1))));
  MR_Word Uinstr_11;

  ll_backend__opt_util__replace_labels_instr_4_p_0(Uinstr0_9, &Uinstr_11, ReplMap_7, ReplData_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Uinstr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Comment_10));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2502__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2483__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2474__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2465__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0(
  MR_Word Uinstr0_5,
  MR_Word * Uinstr_6,
  MR_Word ReplMap_7,
  MR_Word ReplData_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Uinstr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Uinstr_6 = Uinstr0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer R_16 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Integer F_17 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Instrs0_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word Instrs_19;

            ll_backend__opt_util__replace_labels_instruction_list_5_p_0(Instrs0_18, &Instrs_19, ReplMap_7, ReplData_8, (MR_Integer) 0);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (R_16));
              MR_hl_field(3, base, 2) = ((MR_Box) (F_17));
              MR_hl_field(3, base, 3) = ((MR_Box) (Instrs_19));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_22));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval_23));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval0_123 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval0_124 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Lval_125;
            MR_Word Rval_126;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Lval_125 = Lval0_123;
                  Rval_126 = Rval0_124;
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_123, &Lval_125, ReplMap_7);
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_124, &Rval_126, ReplMap_7);
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_125));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval_126));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Return0_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word LiveInfo_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word CXT_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 4))));
            MR_Word GP_28 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 5))));
            MR_Word CM_29 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 6))));
            MR_Word Return_30;

            ll_backend__opt_util__replace_labels_code_addr_3_p_0(Return0_25, &Return_30, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Target_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (Return_30));
              MR_hl_field(3, base, 3) = ((MR_Box) (LiveInfo_26));
              MR_hl_field(3, base, 4) = ((MR_Box) (CXT_27));
              MR_hl_field(3, base, 5) = ((MR_Box) (GP_28));
              MR_hl_field(3, base, 6) = ((MR_Box) (CM_29));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word NondetFrameInfo_31 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word MaybeRedoip0_32 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
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
                  MR_Word Redoip0_33 = ((MR_Word) ((MR_hl_field(1, MaybeRedoip0_32, 0))));
                  MR_Word Redoip_34;

                  ll_backend__opt_util__replace_labels_code_addr_3_p_0(Redoip0_33, &Redoip_34, ReplMap_7);
                  {
                    MaybeRedoip_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeRedoip_35, 0) = ((MR_Box) (Redoip_34));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NondetFrameInfo_31));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeRedoip_35));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_36 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
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
            MR_Word Target0_38 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Target_127;

            ll_backend__opt_util__replace_labels_code_addr_3_p_0(Target0_38, &Target_127, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Target_127));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeMaxIndex_39 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word MaybeLabels0_40 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word MaybeLabels_41;
            MR_Word Rval0_128 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_129;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_129 = Rval0_128;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_128, &Rval_129, ReplMap_7);
                break;
            }
            ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(MaybeLabels0_40, &MaybeLabels_41, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_129));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeMaxIndex_39));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeLabels_41));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_42 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 1))) & (MR_Integer) 3);
            MR_Word Lvals0_43 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_String Code_44 = ((MR_String) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word Lvals_45;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lvals_45 = Lvals0_43;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(Lvals0_43, &Lvals_45, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (Lvals_45));
              MR_hl_field(3, base, 3) = ((MR_Box) (Code_44));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval0_130 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_131;
            MR_Word Target_132;
            MR_Word Target0_133 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_131 = Rval0_130;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_130, &Rval_131, ReplMap_7);
                break;
            }
            ll_backend__opt_util__replace_labels_code_addr_3_p_0(Target0_133, &Target_132, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_131));
              MR_hl_field(3, base, 2) = ((MR_Box) (Target_132));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_134 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_135;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_135 = Lval0_134;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_134, &Lval_135, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_135));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval0_136 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_137;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_137 = Lval0_136;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_136, &Lval_137, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_137));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_46 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word MO_47 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word Msg_48 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 5))));
            MR_Word Atomic_49 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval0_50 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 7))));
            MR_Word MaybeReuse0_51 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 8))));
            MR_Word MaybeRegionRval_54;
            MR_Word MaybeReuse_61;
            MR_Word Lval0_138 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval0_139 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 4))));
            MR_Word Lval_140;
            MR_Word Rval_141;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Lval_140 = Lval0_138;
                  Rval_141 = Rval0_139;
                  MaybeRegionRval_54 = MaybeRegionRval0_50;
                  MaybeReuse_61 = MaybeReuse0_51;
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_138, &Lval_140, ReplMap_7);
                  ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_139, &Rval_141, ReplMap_7);
                  if ((MaybeRegionRval0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                    MaybeRegionRval_54 = MaybeRegionRval0_50;
                  else
                  {
                    MR_Word RegionRval0_52 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval0_50, 0))));
                    MR_Word RegionRval_53;

                    ll_backend__opt_util__replace_labels_rval_3_p_0(RegionRval0_52, &RegionRval_53, ReplMap_7);
                    {
                      MaybeRegionRval_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeRegionRval_54, 0) = ((MR_Box) (RegionRval_53));
                    }
                  }
                  if ((MaybeReuse0_51 == (MR_Word) ((MR_Unsigned) 0U)))
                    MaybeReuse_61 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Word ReuseRval0_55 = ((MR_Word) ((MR_hl_field(1, MaybeReuse0_51, 0))));
                    MR_Word MaybeFlagLval0_56 = ((MR_Word) ((MR_hl_field(1, MaybeReuse0_51, 1))));
                    MR_Word ReuseRval_57;
                    MR_Word MaybeFlagLval_60;

                    ll_backend__opt_util__replace_labels_rval_3_p_0(ReuseRval0_55, &ReuseRval_57, ReplMap_7);
                    if ((MaybeFlagLval0_56 == (MR_Word) ((MR_Unsigned) 0U)))
                      MaybeFlagLval_60 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word FlagLval0_58 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval0_56, 0))));
                      MR_Word FlagLval_59;

                      ll_backend__opt_util__replace_labels_lval_3_p_0(FlagLval0_58, &FlagLval_59, ReplMap_7);
                      {
                        MaybeFlagLval_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeFlagLval_60, 0) = ((MR_Box) (FlagLval_59));
                      }
                    }
                    {
                      MaybeReuse_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeReuse_61, 0) = ((MR_Box) (ReuseRval_57));
                      MR_hl_field(1, MaybeReuse_61, 1) = ((MR_Box) (MaybeFlagLval_60));
                    }
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_140));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeTag_46));
              MR_hl_field(3, base, 3) = ((MR_Box) (MO_47));
              MR_hl_field(3, base, 4) = ((MR_Box) (Rval_141));
              MR_hl_field(3, base, 5) = ((MR_Box) (Msg_48));
              MR_hl_field(3, base, 6) = (MR_Box) ((MR_Unsigned) (Atomic_49));
              MR_hl_field(3, base, 7) = ((MR_Box) (MaybeRegionRval_54));
              MR_hl_field(3, base, 8) = ((MR_Box) (MaybeReuse_61));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_142 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_143;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_143 = Lval0_142;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_142, &Lval_143, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_143));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval0_144 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_145;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_145 = Rval0_144;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_144, &Rval_145, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_145));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_146 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_147;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_147 = Rval0_146;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_146, &Rval_147, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_147));
            }
          }
          break;
        case (MR_Integer) 16:
          *Uinstr_6 = Uinstr0_5;
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_64 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word IdRval0_65 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word NumLval0_66 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 4))));
            MR_Word AddrLval0_67 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 5))));
            MR_Word IdRval_68;
            MR_Word NumLval_69;
            MR_Word AddrLval_70;
            MR_Word EmbeddedStackFrame_148 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  IdRval_68 = IdRval0_65;
                  NumLval_69 = NumLval0_66;
                  AddrLval_70 = AddrLval0_67;
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__opt_util__replace_labels_rval_3_p_0(IdRval0_65, &IdRval_68, ReplMap_7);
                  ll_backend__opt_util__replace_labels_lval_3_p_0(NumLval0_66, &NumLval_69, ReplMap_7);
                  ll_backend__opt_util__replace_labels_lval_3_p_0(AddrLval0_67, &AddrLval_70, ReplMap_7);
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, base, 1) = ((MR_Box) (FillOp_64));
              MR_hl_field(3, base, 2) = ((MR_Box) (EmbeddedStackFrame_148));
              MR_hl_field(3, base, 3) = ((MR_Box) (IdRval_68));
              MR_hl_field(3, base, 4) = ((MR_Box) (NumLval_69));
              MR_hl_field(3, base, 5) = ((MR_Box) (AddrLval_70));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_71 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 1))) & (MR_Integer) 7);
            MR_Word ValueRval0_72 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word ValueRval_73;
            MR_Word EmbeddedStackFrame_149 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ValueRval_73 = ValueRval0_72;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(ValueRval0_72, &ValueRval_73, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (SetOp_71));
              MR_hl_field(3, base, 2) = ((MR_Box) (EmbeddedStackFrame_149));
              MR_hl_field(3, base, 3) = ((MR_Box) (ValueRval_73));
            }
          }
          break;
        case (MR_Integer) 19:
          *Uinstr_6 = Uinstr0_5;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_151 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_152;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_152 = Lval0_151;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_151, &Lval_152, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_152));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_75 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 2))) & (MR_Integer) 7);
            MR_Word Rval0_153 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_154;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_154 = Rval0_153;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_153, &Rval_154, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_154));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Reason_75));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_155 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_156;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_156 = Lval0_155;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_155, &Lval_156, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_156));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval0_157 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Rval_158;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_158 = Rval0_157;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_157, &Rval_158, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_158));
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
            MR_Word Decls_76 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Comps0_77 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word MayCallMercury_78 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 3))) & (MR_Integer) 1);
            MR_Word MaybeFix_79 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 4))));
            MR_Word MaybeLayout_80 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 5))));
            MR_Word MaybeOnlyLayout_81 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 6))));
            MR_Word MaybeSub0_82 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 7))));
            MR_Word MaybeDef_83 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 8))));
            MR_Word MaybeSub_92;
            MR_Word Comps_93;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, Uinstr0_5, 9)));

            if (!((MaybeFix_79 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word FixLabel0_86 = ((MR_Word) ((MR_hl_field(1, MaybeFix_79, 0))));
              MR_Word FixLabel_87;
              MR_Word Var_111;

              ll_backend__opt_util__replace_labels_label_3_p_0(FixLabel0_86, &FixLabel_87, ReplMap_7);
              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_111, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                MR_hl_field(0, Var_111, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_1));
                MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_111, 3) = ((MR_Box) (FixLabel0_86));
                MR_hl_field(0, Var_111, 4) = ((MR_Box) (FixLabel_87));
              }
              mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label in C code");
            }
            if (!((MaybeLayout_80 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word LayoutLabel0_88 = ((MR_Word) ((MR_hl_field(1, MaybeLayout_80, 0))));
              MR_Word LayoutLabel_89;
              MR_Word Var_114;

              ll_backend__opt_util__replace_labels_label_3_p_0(LayoutLabel0_88, &LayoutLabel_89, ReplMap_7);
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_114, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                MR_hl_field(0, Var_114, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_2));
                MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_114, 3) = ((MR_Box) (LayoutLabel0_88));
                MR_hl_field(0, Var_114, 4) = ((MR_Box) (LayoutLabel_89));
              }
              mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
            }
            if (!((MaybeOnlyLayout_81 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word OnlyLayoutLabel0_90 = ((MR_Word) ((MR_hl_field(1, MaybeOnlyLayout_81, 0))));
              MR_Word OnlyLayoutLabel_91;
              MR_Word Var_117;

              ll_backend__opt_util__replace_labels_label_3_p_0(OnlyLayoutLabel0_90, &OnlyLayoutLabel_91, ReplMap_7);
              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_117, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                MR_hl_field(0, Var_117, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_3));
                MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_117, 3) = ((MR_Box) (OnlyLayoutLabel0_90));
                MR_hl_field(0, Var_117, 4) = ((MR_Box) (OnlyLayoutLabel_91));
              }
              mercury__require__expect_3_p_0(Var_117, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
            }
            if ((MaybeSub0_82 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeSub_92 = (MR_Word) ((MR_Unsigned) 0U);
              Comps_93 = Comps0_77;
            }
            else
            {
              MR_Word SubLabel0_94 = ((MR_Word) ((MR_hl_field(1, MaybeSub0_82, 0))));
              MR_Word SubLabel_95;

              ll_backend__opt_util__replace_labels_label_3_p_0(SubLabel0_94, &SubLabel_95, ReplMap_7);
              {
                MaybeSub_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeSub_92, 0) = ((MR_Box) (SubLabel_95));
              }
              ll_backend__opt_util__replace_labels_comps_3_p_0(Comps0_77, &Comps_93, ReplMap_7);
            }
            if (!((MaybeDef_83 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word DefLabel0_96 = ((MR_Word) ((MR_hl_field(1, MaybeDef_83, 0))));
              MR_Word DefLabel_97;
              MR_Word Var_120;

              ll_backend__opt_util__replace_labels_label_3_p_0(DefLabel0_96, &DefLabel_97, ReplMap_7);
              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2]));
                MR_hl_field(0, Var_120, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_4));
                MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_120, 3) = ((MR_Box) (DefLabel0_96));
                MR_hl_field(0, Var_120, 4) = ((MR_Box) (DefLabel_97));
              }
              mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Decls_76));
              MR_hl_field(3, base, 2) = ((MR_Box) (Comps_93));
              MR_hl_field(3, base, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_78));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybeFix_79));
              MR_hl_field(3, base, 5) = ((MR_Box) (MaybeLayout_80));
              MR_hl_field(3, base, 6) = ((MR_Box) (MaybeOnlyLayout_81));
              MR_hl_field(3, base, 7) = ((MR_Box) (MaybeSub_92));
              MR_hl_field(3, base, 8) = ((MR_Box) (MaybeDef_83));
              MR_hl_field(3, base, 9) = (MR_Box) (packed_word_2);
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer NumConjuncts_98 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Integer TSStringIndex_99 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 3))));
            MR_Word Lval0_159 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_160;

            switch (ReplData_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lval_160 = Lval0_159;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_159, &Lval_160, ReplMap_7);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_160));
              MR_hl_field(3, base, 2) = ((MR_Box) (NumConjuncts_98));
              MR_hl_field(3, base, 3) = ((MR_Box) (TSStringIndex_99));
            }
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child0_100 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Child_101;
            MR_Word Lval0_161 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_162;

            ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_161, &Lval_162, ReplMap_7);
            ll_backend__opt_util__replace_labels_label_3_p_0(Child0_100, &Child_101, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 29U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_162));
              MR_hl_field(3, base, 2) = ((MR_Box) (Child_101));
            }
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label0_102 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Lval0_163 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_164;
            MR_Word Label_165;

            ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_163, &Lval_164, ReplMap_7);
            ll_backend__opt_util__replace_labels_label_3_p_0(Label0_102, &Label_165, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_164));
              MR_hl_field(3, base, 2) = ((MR_Box) (Label_165));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSLots_103 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval0_166 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Lval_167;

            ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_166, &Lval_167, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NumSLots_103));
              MR_hl_field(3, base, 2) = ((MR_Box) (Lval_167));
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Lval0_168 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word Rval0_169 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word Lval_170;
            MR_Word Rval_171;
            MR_Word Label_172;
            MR_Word Label0_173 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_169, &Rval_171, ReplMap_7);
            ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_168, &Lval_170, ReplMap_7);
            ll_backend__opt_util__replace_labels_label_3_p_0(Label0_173, &Label_172, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_171));
              MR_hl_field(3, base, 2) = ((MR_Box) (Lval_170));
              MR_hl_field(3, base, 3) = ((MR_Box) (Label_172));
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval0_104 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word LCSRval0_105 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word LCRval_106;
            MR_Word LCSRval_107;
            MR_Word Label_174;
            MR_Word Label0_175 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 3))));

            ll_backend__opt_util__replace_labels_rval_3_p_0(LCRval0_104, &LCRval_106, ReplMap_7);
            ll_backend__opt_util__replace_labels_rval_3_p_0(LCSRval0_105, &LCSRval_107, ReplMap_7);
            ll_backend__opt_util__replace_labels_label_3_p_0(Label0_175, &Label_174, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(3, base, 1) = ((MR_Box) (LCRval_106));
              MR_hl_field(3, base, 2) = ((MR_Box) (LCSRval_107));
              MR_hl_field(3, base, 3) = ((MR_Box) (Label_174));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval0_176 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 1))));
            MR_Word LCSRval0_177 = ((MR_Word) ((MR_hl_field(3, Uinstr0_5, 2))));
            MR_Word LCRval_178;
            MR_Word LCSRval_179;

            ll_backend__opt_util__replace_labels_rval_3_p_0(LCRval0_176, &LCRval_178, ReplMap_7);
            ll_backend__opt_util__replace_labels_rval_3_p_0(LCSRval0_177, &LCSRval_179, ReplMap_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(3, base, 1) = ((MR_Box) (LCRval_178));
              MR_hl_field(3, base, 2) = ((MR_Box) (LCSRval_179));
            }
          }
          break;
      }
      break;
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instr_11;
    MR_Word Instrs_12;
    MR_Word InstrLabel_16;
    MR_String Comment_17;
    MR_Word Var_19;

    succeeded = (ReplLabel_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Instr0_9, 0))));
      Comment_17 = ((MR_String) ((MR_hl_field(0, Instr0_9, 1))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_19, 0)))) == (MR_Integer) 5)));
      if (succeeded)
        InstrLabel_16 = ((MR_Word) ((MR_hl_field(3, Var_19, 1))));
    }
    if (succeeded)
    {
      MR_Word ReplInstrLabel_18;
      MR_Word Var_20;
      MR_Word NewLabel_21;
      MR_Box conv0_NewLabel_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_3, ((MR_Box) (InstrLabel_16)), &conv0_NewLabel_21);
      if (succeeded)
      {
        NewLabel_21 = ((MR_Word) (conv0_NewLabel_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ReplInstrLabel_18 = NewLabel_21;
      else
        ReplInstrLabel_18 = InstrLabel_16;
      {
        Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_20, 1) = ((MR_Box) (ReplInstrLabel_18));
      }
      {
        Instr_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Instr_11, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Instr_11, 1) = ((MR_Box) (Comment_17));
      }
    }
    else
    {
      MR_Word Uinstr0_23 = ((MR_Word) ((MR_hl_field(0, Instr0_9, 0))));
      MR_String Comment_24 = ((MR_String) ((MR_hl_field(0, Instr0_9, 1))));
      MR_Word Uinstr_25;

      ll_backend__opt_util__replace_labels_instr_4_p_0(Uinstr0_23, &Uinstr_25, ReplMap_3, ReplData_4);
      {
        Instr_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Instr_11, 0) = ((MR_Box) (Uinstr_25));
        MR_hl_field(0, Instr_11, 1) = ((MR_Box) (Comment_24));
      }
    }
    ll_backend__opt_util__replace_labels_instruction_list_5_p_0(Instrs0_10, &Instrs_12, ReplMap_3, ReplData_4, ReplLabel_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs_12));
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
        MR_Word Lval0_7 = ((MR_Word) ((MR_hl_field(0, Rval0_4, 0))));
        MR_Word Lval_8;

        ll_backend__opt_util__replace_labels_lval_3_p_0(Lval0_7, &Lval_8, ReplMap_6);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_5 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lval_8));
        }
      }
      break;
    case (MR_Integer) 1:
      *Rval_5 = Rval0_4;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_10 = ((MR_Word) ((MR_hl_field(2, Rval0_4, 0))));
        MR_Word SubRval0_11 = ((MR_Word) ((MR_hl_field(2, Rval0_4, 1))));
        MR_Word SubRval_12;

        ll_backend__opt_util__replace_labels_rval_3_p_0(SubRval0_11, &SubRval_12, ReplMap_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_5 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_10));
          MR_hl_field(2, base, 1) = ((MR_Box) (SubRval_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Rval_5 = Rval0_4;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const0_13 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 1))));
            MR_Word Const_14;

            switch (MR_tag((MR_Word) Const0_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Const_14 = Const0_13;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Const0_13, 0))))) {
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
                  case (MR_Integer) 14:
                    Const_14 = Const0_13;
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word Addr0_47 = ((MR_Word) ((MR_hl_field(3, Const0_13, 1))));
                      MR_Word Addr_48;

                      ll_backend__opt_util__replace_labels_code_addr_3_p_0(Addr0_47, &Addr_48, ReplMap_6);
                      {
                        Const_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Const_14, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(3, Const_14, 1) = ((MR_Box) (Addr_48));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Const_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 1))));
            MR_Word SubRvalA0_16 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 2))));
            MR_Word SubRvalA_17;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_16, &SubRvalA_17, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_15));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnOp_18 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 1))));
            MR_Word SubRvalA0_25 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 2))));
            MR_Word SubRvalA_26;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_25, &SubRvalA_26, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_26));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_19 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 1))));
            MR_Word SubRvalB0_20 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 3))));
            MR_Word SubRvalB_21;
            MR_Word SubRvalA0_27 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 2))));
            MR_Word SubRvalA_28;

            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalA0_27, &SubRvalA_28, ReplMap_6);
            ll_backend__opt_util__replace_labels_rval_3_p_0(SubRvalB0_20, &SubRvalB_21, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_28));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_21));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_22 = ((MR_Word) ((MR_hl_field(3, Rval0_4, 1))));
            MR_Word MemRef_23;

            switch (MR_tag((MR_Word) MemRef0_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                MemRef_23 = MemRef0_22;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CellRval0_51 = ((MR_Word) ((MR_hl_field(2, MemRef0_22, 0))));
                  MR_Word MaybeTag_52 = ((MR_Word) ((MR_hl_field(2, MemRef0_22, 1))));
                  MR_Word FieldNumRval0_53 = ((MR_Word) ((MR_hl_field(2, MemRef0_22, 2))));
                  MR_Word CellRval_54;
                  MR_Word FieldNumRval_55;

                  ll_backend__opt_util__replace_labels_rval_3_p_0(CellRval0_51, &CellRval_54, ReplMap_6);
                  ll_backend__opt_util__replace_labels_rval_3_p_0(FieldNumRval0_53, &FieldNumRval_55, ReplMap_6);
                  {
                    MemRef_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, MemRef_23, 0) = ((MR_Box) (CellRval_54));
                    MR_hl_field(2, MemRef_23, 1) = ((MR_Box) (MaybeTag_52));
                    MR_hl_field(2, MemRef_23, 2) = ((MR_Box) (FieldNumRval_55));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MemRef_23));
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
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Lval_5 = Lval0_4;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval0_4, 0))))) {
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
            MR_Word Rval0_18 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_19;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_18, &Rval_19, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_19));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval0_25 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_26;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_25, &Rval_26, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_26));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval0_27 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_28;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_27, &Rval_28, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_28));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval0_29 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_30;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_29, &Rval_30, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_30));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval0_31 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_32;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_31, &Rval_32, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_32));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Tag_20 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word BaseRval0_21 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 2))));
            MR_Word OffsetRval0_22 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 3))));
            MR_Word BaseRval_23;
            MR_Word OffsetRval_24;

            ll_backend__opt_util__replace_labels_rval_3_p_0(BaseRval0_21, &BaseRval_23, ReplMap_6);
            ll_backend__opt_util__replace_labels_rval_3_p_0(OffsetRval0_22, &OffsetRval_24, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Tag_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (BaseRval_23));
              MR_hl_field(3, base, 3) = ((MR_Box) (OffsetRval_24));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval0_33 = ((MR_Word) ((MR_hl_field(3, Lval0_4, 1))));
            MR_Word Rval_34;

            ll_backend__opt_util__replace_labels_rval_3_p_0(Rval0_33, &Rval_34, ReplMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_34));
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2589__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Lval_6;

  ll_backend__opt_util__replace_labels_lval_map_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Lval_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
  MR_Word LiveLvals0_4,
  MR_Word * LiveLvals_5,
  MR_Word ReplMap_6)
{
  MR_bool succeeded;

  if ((LiveLvals0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *LiveLvals_5 = LiveLvals0_4;
  else
  {
    MR_Word LvalSet0_7 = ((MR_Word) ((MR_hl_field(1, LiveLvals0_4, 0))));
    MR_Word Lvals0_8;
    MR_Word Lvals_9;
    MR_Word Var_10;
    MR_Word Var_11;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_7, &Lvals0_8);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_5[0]));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_10, 3) = ((MR_Box) (ReplMap_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_10, Lvals0_8, &Lvals_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
      MR_hl_field(0, Var_11, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2));
      MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_11, 3) = ((MR_Box) (Lvals0_8));
      MR_hl_field(0, Var_11, 4) = ((MR_Box) (Lvals_9));
    }
    mercury__require__expect_3_p_0(Var_11, (MR_String) "predicate \140ll_backend.opt_util.replace_labels_c_code_live_lvals\'/3", (MR_String) "some replacements");
    *LiveLvals_5 = LiveLvals0_4;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_label_3_p_0(
  MR_Word Label0_4,
  MR_Word * Label_5,
  MR_Word ReplMap_6)
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

void MR_CALL 
ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MaybeLabel0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaybeLabels0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word MaybeLabel_7;
    MR_Word MaybeLabels_8;

    if ((MaybeLabel0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeLabel_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Label0_10 = ((MR_Word) ((MR_hl_field(1, MaybeLabel0_5, 0))));
      MR_Word Label_11;
      MR_Word NewLabel_12;
      MR_Box conv0_NewLabel_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), HeadVar__3_3, ((MR_Box) (Label0_10)), &conv0_NewLabel_12);
      if (succeeded)
      {
        NewLabel_12 = ((MR_Word) (conv0_NewLabel_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Label_11 = NewLabel_12;
      else
        Label_11 = Label0_10;
      {
        MaybeLabel_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeLabel_7, 0) = ((MR_Box) (Label_11));
      }
    }
    ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(MaybeLabels0_6, &MaybeLabels_8, HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeLabel_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeLabels_8));
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_code_addr_3_p_0(
  MR_Word Addr0_4,
  MR_Word * Addr_5,
  MR_Word ReplMap_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Addr0_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      *Addr_5 = Addr0_4;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label0_7 = ((MR_Word) ((MR_hl_field(1, Addr0_4, 0))));
        MR_Word Label_8;
        MR_Word NewLabel_13;
        MR_Box conv0_NewLabel_13;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_6, ((MR_Box) (Label0_7)), &conv0_NewLabel_13);
        if (succeeded)
        {
          NewLabel_13 = ((MR_Word) (conv0_NewLabel_13));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Label_8 = NewLabel_13;
        else
          Label_8 = Label0_7;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Addr_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Label_8));
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_comps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ReplMap_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Comp0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Comps0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Comp_7;
    MR_Word Comps_8;

    switch (MR_tag((MR_Word) Comp0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Comp_7 = Comp0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Comp0_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            Comp_7 = Comp0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Label0_20 = ((MR_Word) ((MR_hl_field(3, Comp0_5, 1))));
              MR_Word Label_21;
              MR_Word NewLabel_22;
              MR_Box conv0_NewLabel_22;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ReplMap_3, ((MR_Box) (Label0_20)), &conv0_NewLabel_22);
              if (succeeded)
              {
                NewLabel_22 = ((MR_Word) (conv0_NewLabel_22));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                Label_21 = NewLabel_22;
              else
                Label_21 = Label0_20;
              {
                Comp_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Comp_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Comp_7, 1) = ((MR_Box) (Label_21));
              }
            }
            break;
        }
        break;
    }
    ll_backend__opt_util__replace_labels_comps_3_p_0(Comps0_6, &Comps_8, ReplMap_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Comp_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Comps_8));
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_12));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_18));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_10));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_14));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_16));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Rval2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
            MR_Word Var_23;

            {
              Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_23, 0) = ((MR_Box) (Rval2_22));
              MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval1_21));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Rval_31));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Refers_4;

  conv0_Refers_4 = ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Refers_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Refers_5;
  MR_Word Uinstr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  switch (MR_tag((MR_Word) Uinstr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Refers_5 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BlockInstrs_51 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 3))));

            Refers_5 = ll_backend__opt_util__block_refers_to_stack_1_f_0(BlockInstrs_51);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_52 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word Var_80;
            MR_Word Var_81;

            Var_80 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_52);
            Var_81 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_53);
            Refers_5 = mercury__bool__or_2_f_0(Var_80, Var_81);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_110 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_111 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word Var_112;
            MR_Word Var_113;

            Var_112 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_110);
            Var_113 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_111);
            Refers_5 = mercury__bool__or_2_f_0(Var_112, Var_113);
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
            MR_Word CodeAddr_54 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            switch (MR_tag((MR_Word) CodeAddr_54)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CodeAddr_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Refers_5 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Refers_5 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Refers_5 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Refers_5 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Refers_5 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    Refers_5 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Refers_5 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Refers_5 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, CodeAddr_54, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Refers_5 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Refers_5 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Refers_5 = (MR_Integer) 0;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_100 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_100);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Rval_97 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word CodeAddr_98 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            Var_82 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_97);
            switch (MR_tag((MR_Word) CodeAddr_98)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CodeAddr_98)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_83 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_83 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_83 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_83 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_83 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    Var_83 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_83 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_83 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, CodeAddr_98, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_83 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_83 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_83 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            Refers_5 = mercury__bool__or_2_f_0(Var_82, Var_83);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_120 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_120);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_119 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_119);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_63 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 7))));
            MR_Word MaybeReuse_64 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 8))));
            MR_Word STATE_VARIABLE_Refers_1_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word STATE_VARIABLE_Refers_2_88;
            MR_Word Lval_101 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_102 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 4))));

            Var_85 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_101);
            Var_86 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_102);
            STATE_VARIABLE_Refers_1_84 = mercury__bool__or_2_f_0(Var_85, Var_86);
            if ((MaybeRegionRval_63 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Refers_2_88 = STATE_VARIABLE_Refers_1_84;
            else
            {
              MR_Word RegionRval_65 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_63, 0))));
              MR_Word Var_87;

              Var_87 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(RegionRval_65);
              mercury__bool__or_3_p_0(Var_87, STATE_VARIABLE_Refers_1_84, &STATE_VARIABLE_Refers_2_88);
            }
            if ((MaybeReuse_64 == (MR_Word) ((MR_Unsigned) 0U)))
              Refers_5 = STATE_VARIABLE_Refers_2_88;
            else
            {
              MR_Word ReuseRval_66 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_64, 0))));
              MR_Word MaybeFlagLval_67 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_64, 1))));
              MR_Word Var_89;
              MR_Word STATE_VARIABLE_Refers_3_90;

              Var_89 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ReuseRval_66);
              mercury__bool__or_3_p_0(Var_89, STATE_VARIABLE_Refers_2_88, &STATE_VARIABLE_Refers_3_90);
              if ((MaybeFlagLval_67 == (MR_Word) ((MR_Unsigned) 0U)))
                Refers_5 = STATE_VARIABLE_Refers_3_90;
              else
              {
                MR_Word FlagLval_68 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_67, 0))));
                MR_Word Var_91;

                Var_91 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(FlagLval_68);
                mercury__bool__or_3_p_0(Var_91, STATE_VARIABLE_Refers_3_90, &Refers_5);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_114 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_114);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_118 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_118);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_109 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_109);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_121 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_121);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_117 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_117);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_115 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_115);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_116 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_116);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Components_70 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word Var_93;

            Var_93 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__opt_util_scalar_common_2[4]), Components_70);
            Refers_5 = mercury__bool__or_list_1_f_0(Var_93);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_99 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_99);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Lval_103 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word Rval_104 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Var_95 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_104);
            Var_96 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_103);
            Refers_5 = mercury__bool__or_2_f_0(Var_95, Var_96);
          }
          break;
      }
      break;
  }
  return Refers_5;
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
      MR_Word Instr_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word InstrRefers_6;

      InstrRefers_6 = ll_backend__opt_util__instr_refers_to_stack_1_f_0(Instr_3);
      switch (InstrRefers_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Uinstr_7 = ((MR_Word) ((MR_hl_field(0, Instr_3, 0))));
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

void MR_CALL 
ll_backend__opt_util__possible_targets_3_p_0(
  MR_Word Uinstr_4,
  MR_Word * Labels_5,
  MR_Word * CodeAddrs_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Uinstr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
        *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_4, 0))))) {
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
            MR_Word Return_66 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word ReturnLabel_71;

            succeeded = ((MR_tag((MR_Word) Return_66)) == (MR_Integer) 1);
            if (succeeded)
            {
              ReturnLabel_71 = ((MR_Word) ((MR_hl_field(1, Return_66, 0))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Labels_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ReturnLabel_71));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CodeAddrs_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Return_66));
                MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_72 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word Label_74;

            succeeded = ((MR_tag((MR_Word) CodeAddr_72)) == (MR_Integer) 1);
            if (succeeded)
            {
              Label_74 = ((MR_Word) ((MR_hl_field(1, CodeAddr_72, 0))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Labels_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Label_74));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CodeAddrs_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CodeAddr_72));
                MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_84 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));
            MR_Word RevLabels_85;

            ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(MaybeLabels_84, (MR_Word) ((MR_Unsigned) 0U), &RevLabels_85);
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevLabels_85, Labels_5);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CodeAddr_113 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word Label_110;

            succeeded = ((MR_tag((MR_Word) CodeAddr_113)) == (MR_Integer) 1);
            if (succeeded)
            {
              Label_110 = ((MR_Word) ((MR_hl_field(1, CodeAddr_113, 0))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Labels_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Label_110));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CodeAddrs_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (CodeAddr_113));
                MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
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
            MR_Word MaybeFixLabel_89 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 4))));
            MR_Word MaybeLayoutLabel_90 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 5))));
            MR_Word MaybeOnlyLayoutLabel_91 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 6))));
            MR_Word MaybeSubLabel_92 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 7))));
            MR_Word MaybeDefLabel_93 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 8))));

            ll_backend__opt_util__foreign_proc_labels_6_p_0(MaybeFixLabel_89, MaybeLayoutLabel_90, MaybeOnlyLayoutLabel_91, MaybeSubLabel_92, MaybeDefLabel_93, Labels_5);
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_106 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Label_106));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word Label_118 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Label_118));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__opt_util__instr_labels_only_2_p_0(
  MR_Word Instr_3,
  MR_Word * Labels_4)
{
  MR_Word _CodeAddrs_5;

  ll_backend__opt_util__instr_labels_3_p_0(Instr_3, Labels_4, &_CodeAddrs_5);
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
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_79 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

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
            MR_Word Target_59 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word Ret_60 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word Var_95;

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Ret_60));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) (*Labels_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Target_59));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_95));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_115 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word Addr_111 = ((MR_Word) ((MR_hl_field(1, Var_115, 0))));

              *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CodeAddrs_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Addr_111));
                MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
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
            MR_Word Addr_66 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Addr_66));
              MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_82 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));
            MR_Word RevLabels_83;

            ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(MaybeLabels_82, (MR_Word) ((MR_Unsigned) 0U), &RevLabels_83);
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevLabels_83, Labels_5);
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
            MR_Word Addr_105 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            *Labels_5 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddrs_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Addr_105));
              MR_hl_field(1, base, 1) = ((MR_Box) (*Labels_5));
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
            MR_Word MaybeFixLabel_87 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 4))));
            MR_Word MaybeLayoutLabel_88 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 5))));
            MR_Word MaybeOnlyLayoutLabel_89 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 6))));
            MR_Word MaybeSubLabel_90 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 7))));
            MR_Word MaybeDefLabel_91 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 8))));

            ll_backend__opt_util__foreign_proc_labels_6_p_0(MaybeFixLabel_87, MaybeLayoutLabel_88, MaybeOnlyLayoutLabel_89, MaybeSubLabel_90, MaybeDefLabel_91, Labels_5);
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
            MR_Word Child_70 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Child_70));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_72 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Label_72));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            MR_Word Label_109 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Label_109));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *CodeAddrs_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word Label_107 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Labels_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Label_107));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word Instrs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadLabels_9;
    MR_Word HeadCodeAddrs_10;
    MR_Word TailLabels_11;
    MR_Word TailCodeAddrs_12;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    Uinstr_4 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
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
      MR_Word CodeAddr_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Rest_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Labels1_10;
      MR_Word Label_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) CodeAddr_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Label_9 = ((MR_Word) ((MR_hl_field(1, CodeAddr_5, 0))));
        {
          Labels1_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Labels1_10, 0) = ((MR_Box) (Label_9));
          MR_hl_field(1, Labels1_10, 1) = ((MR_Box) (HeadVar__2_2));
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
  MR_Word STATE_VARIABLE_Labels_2_20;
  MR_Word STATE_VARIABLE_Labels_3_21;
  MR_Word STATE_VARIABLE_Labels_4_22;
  MR_Word STATE_VARIABLE_Labels_5_23;

  if ((MaybeFixedLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Labels_2_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FixedLabel_13 = ((MR_Word) ((MR_hl_field(1, MaybeFixedLabel_7, 0))));

    {
      STATE_VARIABLE_Labels_2_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Labels_2_20, 0) = ((MR_Box) (FixedLabel_13));
      MR_hl_field(1, STATE_VARIABLE_Labels_2_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeLayoutLabel_8 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Labels_3_21 = STATE_VARIABLE_Labels_2_20;
  else
  {
    MR_Word LayoutLabel_14 = ((MR_Word) ((MR_hl_field(1, MaybeLayoutLabel_8, 0))));

    {
      STATE_VARIABLE_Labels_3_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Labels_3_21, 0) = ((MR_Box) (LayoutLabel_14));
      MR_hl_field(1, STATE_VARIABLE_Labels_3_21, 1) = ((MR_Box) (STATE_VARIABLE_Labels_2_20));
    }
  }
  if ((MaybeOnlyLayoutLabel_9 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Labels_4_22 = STATE_VARIABLE_Labels_3_21;
  else
  {
    MR_Word OnlyLayoutLabel_15 = ((MR_Word) ((MR_hl_field(1, MaybeOnlyLayoutLabel_9, 0))));

    {
      STATE_VARIABLE_Labels_4_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Labels_4_22, 0) = ((MR_Box) (OnlyLayoutLabel_15));
      MR_hl_field(1, STATE_VARIABLE_Labels_4_22, 1) = ((MR_Box) (STATE_VARIABLE_Labels_3_21));
    }
  }
  if ((MaybeSubLabel_10 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Labels_5_23 = STATE_VARIABLE_Labels_4_22;
  else
  {
    MR_Word SubLabel_16 = ((MR_Word) ((MR_hl_field(1, MaybeSubLabel_10, 0))));

    {
      STATE_VARIABLE_Labels_5_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Labels_5_23, 0) = ((MR_Box) (SubLabel_16));
      MR_hl_field(1, STATE_VARIABLE_Labels_5_23, 1) = ((MR_Box) (STATE_VARIABLE_Labels_4_22));
    }
  }
  if ((MaybeDefLabel_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Labels_18 = STATE_VARIABLE_Labels_5_23;
  else
  {
    MR_Word DefLabel_17 = ((MR_Word) ((MR_hl_field(1, MaybeDefLabel_11, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Labels_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DefLabel_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Labels_5_23));
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
      MR_Word MaybeLabel_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word MaybeLabels_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevLabels_1_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevLabels_0_2;

      if ((MaybeLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_RevLabels_1_13 = STATE_VARIABLE_RevLabels_0_2;
      else
      {
        MR_Word Label_10 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_7, 0))));

        {
          STATE_VARIABLE_RevLabels_1_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevLabels_1_13, 0) = ((MR_Box) (Label_10));
          MR_hl_field(1, STATE_VARIABLE_RevLabels_1_13, 1) = ((MR_Box) (STATE_VARIABLE_RevLabels_0_2));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_8;
      next_value_of_STATE_VARIABLE_RevLabels_0_2 = STATE_VARIABLE_RevLabels_1_13;
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
      MR_Word Instrs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer STATE_VARIABLE_N_1_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;

      Uinstr0_7 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_7, 0)))) == (MR_Integer) 12)));
      if (succeeded)
        STATE_VARIABLE_N_1_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_2 + (MR_Unsigned) 1);
      else
        STATE_VARIABLE_N_1_22 = STATE_VARIABLE_N_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_9;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_1_22;
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
      MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer STATE_VARIABLE_R_1_22;
      MR_Integer STATE_VARIABLE_F_1_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      Uinstr_12 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
      ll_backend__opt_util__count_temps_instr_5_p_0(Uinstr_12, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_1_22, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_1_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_14;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_1_22;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_1_23;
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
  MR_Word Uinstr_6,
  MR_Integer STATE_VARIABLE_R_0_77,
  MR_Integer * STATE_VARIABLE_R_78,
  MR_Integer STATE_VARIABLE_F_0_79,
  MR_Integer * STATE_VARIABLE_F_80)
{
  switch (MR_tag((MR_Word) Uinstr_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
        *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
        *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer STATE_VARIABLE_R_3_85;
            MR_Integer STATE_VARIABLE_F_3_86;
            MR_Word Lval_111 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));
            MR_Word Rval_112 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_111, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_3_85, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_3_86);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_112, STATE_VARIABLE_R_3_85, STATE_VARIABLE_R_78, STATE_VARIABLE_F_3_86, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer STATE_VARIABLE_R_3_120;
            MR_Integer STATE_VARIABLE_F_3_121;
            MR_Word Lval_122 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));
            MR_Word Rval_123 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_122, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_3_120, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_3_121);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_123, STATE_VARIABLE_R_3_120, STATE_VARIABLE_R_78, STATE_VARIABLE_F_3_121, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 5:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 6:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_42, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 8:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_117 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_117, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_140 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_140, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_139 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_139, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_61 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 7))));
            MR_Word MaybeReuse_62 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 8))));
            MR_Integer STATE_VARIABLE_R_10_99;
            MR_Integer STATE_VARIABLE_F_10_100;
            MR_Integer STATE_VARIABLE_R_11_101;
            MR_Integer STATE_VARIABLE_F_11_102;
            MR_Integer STATE_VARIABLE_R_12_103;
            MR_Integer STATE_VARIABLE_F_12_104;
            MR_Word Lval_114 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));
            MR_Word Rval_115 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 4))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_114, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_10_99, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_10_100);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_115, STATE_VARIABLE_R_10_99, &STATE_VARIABLE_R_11_101, STATE_VARIABLE_F_10_100, &STATE_VARIABLE_F_11_102);
            if ((MaybeRegionRval_61 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_R_12_103 = STATE_VARIABLE_R_11_101;
              STATE_VARIABLE_F_12_104 = STATE_VARIABLE_F_11_102;
            }
            else
            {
              MR_Word RegionRval_63 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_61, 0))));

              ll_backend__opt_util__count_temps_rval_5_p_0(RegionRval_63, STATE_VARIABLE_R_11_101, &STATE_VARIABLE_R_12_103, STATE_VARIABLE_F_11_102, &STATE_VARIABLE_F_12_104);
            }
            if ((MaybeReuse_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_12_103;
              *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_12_104;
            }
            else
            {
              MR_Word ReuseRval_64 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_62, 0))));
              MR_Word MaybeFlagLval_65 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_62, 1))));
              MR_Integer STATE_VARIABLE_R_13_105;
              MR_Integer STATE_VARIABLE_F_13_106;

              ll_backend__opt_util__count_temps_rval_5_p_0(ReuseRval_64, STATE_VARIABLE_R_12_103, &STATE_VARIABLE_R_13_105, STATE_VARIABLE_F_12_104, &STATE_VARIABLE_F_13_106);
              if ((MaybeFlagLval_65 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_13_105;
                *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_13_106;
              }
              else
              {
                MR_Word FlagLval_66 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_65, 0))));

                ll_backend__opt_util__count_temps_lval_5_p_0(FlagLval_66, STATE_VARIABLE_R_13_105, STATE_VARIABLE_R_78, STATE_VARIABLE_F_13_106, STATE_VARIABLE_F_80);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_133 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_133, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_138 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_138, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_116 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_116, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 16:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word LvalA_55 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 4))));
            MR_Word LvalB_56 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 5))));
            MR_Integer STATE_VARIABLE_R_7_93;
            MR_Integer STATE_VARIABLE_F_7_94;
            MR_Integer STATE_VARIABLE_R_8_95;
            MR_Integer STATE_VARIABLE_F_8_96;
            MR_Word Rval_113 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 3))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_113, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_7_93, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_7_94);
            ll_backend__opt_util__count_temps_lval_5_p_0(LvalA_55, STATE_VARIABLE_R_7_93, &STATE_VARIABLE_R_8_95, STATE_VARIABLE_F_7_94, &STATE_VARIABLE_F_8_96);
            ll_backend__opt_util__count_temps_lval_5_p_0(LvalB_56, STATE_VARIABLE_R_8_95, STATE_VARIABLE_R_78, STATE_VARIABLE_F_8_96, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Rval_136 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 3))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_136, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 19:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_141 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_141, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_137 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_137, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_134 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_134, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_135 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_135, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 24:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 25:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 26:
          {
            *STATE_VARIABLE_R_78 = STATE_VARIABLE_R_0_77;
            *STATE_VARIABLE_F_80 = STATE_VARIABLE_F_0_79;
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Comps_68 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));

            ll_backend__opt_util__count_temps_components_5_p_0(Comps_68, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_118 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_118, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_36 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_36, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_119 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_119, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_124 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_124, STATE_VARIABLE_R_0_77, STATE_VARIABLE_R_78, STATE_VARIABLE_F_0_79, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Integer STATE_VARIABLE_R_3_129;
            MR_Integer STATE_VARIABLE_F_3_130;
            MR_Word Lval_131 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));
            MR_Word Rval_132 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));

            ll_backend__opt_util__count_temps_lval_5_p_0(Lval_131, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_3_129, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_3_130);
            ll_backend__opt_util__count_temps_rval_5_p_0(Rval_132, STATE_VARIABLE_R_3_129, STATE_VARIABLE_R_78, STATE_VARIABLE_F_3_130, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word RvalA_125 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));
            MR_Word RvalB_126 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));
            MR_Integer STATE_VARIABLE_R_5_127;
            MR_Integer STATE_VARIABLE_F_5_128;

            ll_backend__opt_util__count_temps_rval_5_p_0(RvalA_125, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_5_127, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_5_128);
            ll_backend__opt_util__count_temps_rval_5_p_0(RvalB_126, STATE_VARIABLE_R_5_127, STATE_VARIABLE_R_78, STATE_VARIABLE_F_5_128, STATE_VARIABLE_F_80);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word RvalA_50 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 1))));
            MR_Word RvalB_51 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, 2))));
            MR_Integer STATE_VARIABLE_R_5_89;
            MR_Integer STATE_VARIABLE_F_5_90;

            ll_backend__opt_util__count_temps_rval_5_p_0(RvalA_50, STATE_VARIABLE_R_0_77, &STATE_VARIABLE_R_5_89, STATE_VARIABLE_F_0_79, &STATE_VARIABLE_F_5_90);
            ll_backend__opt_util__count_temps_rval_5_p_0(RvalB_51, STATE_VARIABLE_R_5_89, STATE_VARIABLE_R_78, STATE_VARIABLE_F_5_90, STATE_VARIABLE_F_80);
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
      MR_Word Comp_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Comps_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_R_1_20;
      MR_Integer STATE_VARIABLE_F_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      switch (MR_tag((MR_Word) Comp_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_R_1_20 = STATE_VARIABLE_R_0_2;
            STATE_VARIABLE_F_1_21 = STATE_VARIABLE_F_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Inputs_22 = ((MR_Word) ((MR_hl_field(1, Comp_12, 0))));

            ll_backend__opt_util__count_temps_inputs_5_p_0(Inputs_22, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_1_20, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_1_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Outputs_23 = ((MR_Word) ((MR_hl_field(2, Comp_12, 0))));

            ll_backend__opt_util__count_temps_outputs_5_p_0(Outputs_23, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_1_20, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_1_21);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Comp_12, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_R_1_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_1_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_R_1_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_1_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_R_1_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_1_21 = STATE_VARIABLE_F_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_R_1_20 = STATE_VARIABLE_R_0_2;
                STATE_VARIABLE_F_1_21 = STATE_VARIABLE_F_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Comps_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_1_20;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_1_21;
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
      MR_Word Output_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Outputs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word DestLval_16 = ((MR_Word) ((MR_hl_field(0, Output_12, 0))));
      MR_Integer STATE_VARIABLE_R_1_27;
      MR_Integer STATE_VARIABLE_F_1_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      ll_backend__opt_util__count_temps_lval_5_p_0(DestLval_16, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_1_27, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_1_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Outputs_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_1_27;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_1_28;
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
      MR_Word Input_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Inputs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgRval_20 = ((MR_Word) ((MR_hl_field(0, Input_12, 4))));
      MR_Integer STATE_VARIABLE_R_1_27;
      MR_Integer STATE_VARIABLE_F_1_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_R_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_F_0_4;

      ll_backend__opt_util__count_temps_rval_5_p_0(ArgRval_20, STATE_VARIABLE_R_0_2, &STATE_VARIABLE_R_1_27, STATE_VARIABLE_F_0_4, &STATE_VARIABLE_F_1_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_13;
      next_value_of_STATE_VARIABLE_R_0_2 = STATE_VARIABLE_R_1_27;
      next_value_of_STATE_VARIABLE_F_0_4 = STATE_VARIABLE_F_1_28;
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
          MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(2, Lval_6, 1))));
          MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(2, Lval_6, 0))) & (MR_Integer) 1);

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
        switch (((MR_Integer) ((MR_hl_field(3, Lval_6, 0))))) {
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
              MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_43 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_41 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_40 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word BaseAddrRval_19 = ((MR_Word) ((MR_hl_field(3, Lval_6, 2))));
              MR_Word FieldNumRval_20 = ((MR_Word) ((MR_hl_field(3, Lval_6, 3))));
              MR_Integer STATE_VARIABLE_R_2_31;
              MR_Integer STATE_VARIABLE_F_2_32;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
              MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

              ll_backend__opt_util__count_temps_rval_5_p_0(BaseAddrRval_19, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_2_31, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_2_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_20;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_2_31;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_2_32;
              tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
              tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
          MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(0, Rval_6, 0))));
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
          MR_Word SubRval_37 = ((MR_Word) ((MR_hl_field(2, Rval_6, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_37;
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
        switch (((MR_Integer) ((MR_hl_field(3, Rval_6, 0))))) {
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
              MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
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
              MR_Word SubRval_38 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_38;
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
              MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_6, 3))));
              MR_Integer STATE_VARIABLE_R_3_30;
              MR_Integer STATE_VARIABLE_F_3_31;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
              MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

              ll_backend__opt_util__count_temps_rval_5_p_0(SubRvalA_17, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_3_30, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_3_31);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_6 = SubRvalB_18;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_3_30;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_3_31;
              tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
              tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(3, Rval_6, 1))));

              switch (MR_tag((MR_Word) MemRef_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_45 = ((MR_Word) ((MR_hl_field(0, MemRef_19, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_45;
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
                    MR_Word Rval_39 = ((MR_Word) ((MR_hl_field(1, MemRef_19, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_39;
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
                    MR_Word CellRval_40 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 0))));
                    MR_Word FieldNumRval_42 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 2))));
                    MR_Integer STATE_VARIABLE_R_2_43;
                    MR_Integer STATE_VARIABLE_F_2_44;
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                    MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                    MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                    ll_backend__opt_util__count_temps_rval_5_p_0(CellRval_40, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_2_43, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_2_44);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_42;
                    next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_2_43;
                    next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_2_44;
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

static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
  MR_Word tscc_proc_2_input_1_Rval_6,
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_R_0_20,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_R_24,
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_F_0_22,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_F_26)
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
          MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(2, Lval_6, 1))));
          MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(2, Lval_6, 0))) & (MR_Integer) 1);

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
        switch (((MR_Integer) ((MR_hl_field(3, Lval_6, 0))))) {
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
              MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_43 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_42 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_41 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word Rval_40 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
              MR_Word BaseAddrRval_19 = ((MR_Word) ((MR_hl_field(3, Lval_6, 2))));
              MR_Word FieldNumRval_20 = ((MR_Word) ((MR_hl_field(3, Lval_6, 3))));
              MR_Integer STATE_VARIABLE_R_2_31;
              MR_Integer STATE_VARIABLE_F_2_32;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
              MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

              ll_backend__opt_util__count_temps_rval_5_p_0(BaseAddrRval_19, STATE_VARIABLE_R_0_23, &STATE_VARIABLE_R_2_31, STATE_VARIABLE_F_0_25, &STATE_VARIABLE_F_2_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_20;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_2_31;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_2_32;
              tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
              tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_6, 1))));
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
          MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(0, Rval_6, 0))));
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
          MR_Word SubRval_37 = ((MR_Word) ((MR_hl_field(2, Rval_6, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_37;
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
        switch (((MR_Integer) ((MR_hl_field(3, Rval_6, 0))))) {
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
              MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
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
              MR_Word SubRval_38 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = SubRval_38;
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
              MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_6, 3))));
              MR_Integer STATE_VARIABLE_R_3_30;
              MR_Integer STATE_VARIABLE_F_3_31;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
              MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

              ll_backend__opt_util__count_temps_rval_5_p_0(SubRvalA_17, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_3_30, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_3_31);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_6 = SubRvalB_18;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_3_30;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_3_31;
              tscc_proc_2_input_1_Rval_6 = next_value_of_tscc_proc_2_input_1_Rval_6;
              tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
              tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(3, Rval_6, 1))));

              switch (MR_tag((MR_Word) MemRef_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_45 = ((MR_Word) ((MR_hl_field(0, MemRef_19, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_45;
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
                    MR_Word Rval_39 = ((MR_Word) ((MR_hl_field(1, MemRef_19, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6 = Rval_39;
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
                    MR_Word CellRval_40 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 0))));
                    MR_Word FieldNumRval_42 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 2))));
                    MR_Integer STATE_VARIABLE_R_2_43;
                    MR_Integer STATE_VARIABLE_F_2_44;
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_6;
                    MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20;
                    MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22;

                    ll_backend__opt_util__count_temps_rval_5_p_0(CellRval_40, STATE_VARIABLE_R_0_20, &STATE_VARIABLE_R_2_43, STATE_VARIABLE_F_0_22, &STATE_VARIABLE_F_2_44);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_Rval_6 = FieldNumRval_42;
                    next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_R_0_20 = STATE_VARIABLE_R_2_43;
                    next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_F_0_22 = STATE_VARIABLE_F_2_44;
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

MR_Word MR_CALL 
ll_backend__opt_util__livevals_addr_1_f_0(
  MR_Word CodeAddr_3)
{
  MR_Word IsCallProceedOrSucceed_4;

  switch (MR_tag((MR_Word) CodeAddr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CodeAddr_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IsCallProceedOrSucceed_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          IsCallProceedOrSucceed_4 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_5 = ((MR_Word) ((MR_hl_field(1, CodeAddr_3, 0))));

        if (((MR_tag((MR_Word) Label_5)) == (MR_Integer) 1))
          IsCallProceedOrSucceed_4 = (MR_Integer) 1;
        else
          IsCallProceedOrSucceed_4 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      IsCallProceedOrSucceed_4 = (MR_Integer) 1;
      break;
  }
  return IsCallProceedOrSucceed_4;
}

MR_bool MR_CALL 
ll_backend__opt_util__is_const_condition_2_p_0(
  MR_Word TestRval_3,
  MR_Word * Taken_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TestRval_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TestRval_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const_5 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 1))));

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
            MR_Word Op_6 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 1))));
            MR_Word SubRvalA_7 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 2))));
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
            MR_Word SubRvalB_9 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 3))));
            MR_Word Var_13;
            MR_Word Op_14 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 1))));
            MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(3, TestRval_3, 2))));

            succeeded = ((((MR_tag((MR_Word) Op_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_14, 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_13 = ((MR_Unsigned) ((MR_hl_field(3, Op_14, 1))) & (MR_Integer) 7);
              succeeded = (Var_13 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____rval_0_0(SubRvalA_15, SubRvalB_9);
                if (succeeded)
                {
                  *Taken_4 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_1_p_0(
  MR_Word Instrs_2)
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
      MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_HasIncr_1_26;
      MR_Word STATE_VARIABLE_HasDecr_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HasIncr_0_2;
      MR_Word next_value_of_STATE_VARIABLE_HasDecr_0_4;

      Uinstr_12 = ((MR_Word) ((MR_hl_field(0, Var_25, 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_12, 0)))) == (MR_Integer) 24)));
      if (succeeded)
        STATE_VARIABLE_HasIncr_1_26 = (MR_Integer) 1;
      else
        STATE_VARIABLE_HasIncr_1_26 = STATE_VARIABLE_HasIncr_0_2;
      succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_12, 0)))) == (MR_Integer) 25)));
      if (succeeded)
        STATE_VARIABLE_HasDecr_1_27 = (MR_Integer) 1;
      else
        STATE_VARIABLE_HasDecr_1_27 = STATE_VARIABLE_HasDecr_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_14;
      next_value_of_STATE_VARIABLE_HasIncr_0_2 = STATE_VARIABLE_HasIncr_1_26;
      next_value_of_STATE_VARIABLE_HasDecr_0_4 = STATE_VARIABLE_HasDecr_1_27;
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
      MR_Word Instrs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Touch_1_9;

      Uinstr_3 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
      STATE_VARIABLE_Touch_1_9 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(Uinstr_3);
      switch (STATE_VARIABLE_Touch_1_9) {
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
          HeadVar__2_2 = STATE_VARIABLE_Touch_1_9;
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
  MR_Word RevInstrs0_5;
  MR_Word Livevals_6;
  MR_Word RevInstrs_7;

  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs0_3, &RevInstrs0_5);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals_6);
  ll_backend__opt_util__propagate_livevals_acc_3_p_0(RevInstrs0_5, Livevals_6, &RevInstrs_7);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevInstrs_7, Instrs_4);
}

static void MR_CALL 
ll_backend__opt_util__propagate_livevals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Livevals0_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instr_8;
    MR_Word Instrs_9;
    MR_Word Uinstr0_10 = ((MR_Word) ((MR_hl_field(0, Instr0_5, 0))));
    MR_String Comment_11 = ((MR_String) ((MR_hl_field(0, Instr0_5, 1))));
    MR_Word Livevals_13;
    MR_Word ThisLivevals_12;

    succeeded = ((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 2);
    if (succeeded)
    {
      ThisLivevals_12 = ((MR_Word) ((MR_hl_field(2, Uinstr0_10, 0))));
      {
        MR_Word Var_16;

        mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Livevals0_2, ThisLivevals_12, &Livevals_13);
        {
          Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_16, 0) = ((MR_Box) (Livevals_13));
        }
        {
          Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Instr_8, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, Instr_8, 1) = ((MR_Box) (Comment_11));
        }
      }
    }
    else
    {
      MR_Word Lval_14;

      Instr_8 = Instr0_5;
      succeeded = ((((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_10, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Lval_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 1))));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs_9));
    }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_in_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instrs1_6;
    MR_Word Var_9;

    ll_backend__opt_util__filter_in_livevals_2_p_0(Instrs0_4, &Instrs1_6);
    Var_9 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_6));
      }
    else
      *HeadVar__2_2 = Instrs1_6;
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_bad_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instrs1_6;
    MR_Word Instrs2_9;
    MR_Word Uinstr2_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    ll_backend__opt_util__filter_out_bad_livevals_2_p_0(Instrs0_4, &Instrs1_6);
    Var_13 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
    if (succeeded)
    {
      ll_backend__opt_util__skip_comments_2_p_0(Instrs1_6, &Instrs2_9);
      succeeded = (Instrs2_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = ((MR_Word) ((MR_hl_field(1, Instrs2_9, 0))));
        Uinstr2_10 = ((MR_Word) ((MR_hl_field(0, Var_14, 0))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_6));
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instrs1_6;
    MR_Word Var_9;

    ll_backend__opt_util__filter_out_labels_2_p_0(Instrs0_4, &Instrs1_6);
    Var_9 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, 0)))) == (MR_Integer) 5)));
    if (succeeded)
      *HeadVar__2_2 = Instrs1_6;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_6));
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
      Instr0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Instrs0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Uinstr0_10 = ((MR_Word) ((MR_hl_field(0, Instr0_5, 0))));
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Between_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_5));
                MR_hl_field(1, base, 1) = ((MR_Box) (Between0_13));
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Between_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_5));
                MR_hl_field(1, base, 1) = ((MR_Box) (Between0_42));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_10, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_15 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 1))));
                MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 2))));
                MR_Word Var_31;

                succeeded = ((((MR_tag((MR_Word) Lval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_15, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_31 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                  succeeded = (Var_31 == (MR_Integer) 0);
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
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Word Var_34;
                  MR_Integer Var_50;
                  MR_Integer Var_51;

                  succeeded = (Lval_15 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_32 = ((MR_Word) ((MR_hl_field(0, Rval_16, 0))));
                      succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_50 = ((MR_Integer) ((MR_hl_field(3, Var_32, 1))));
                        succeeded = (FrameSize_7 == Var_50);
                        if (succeeded)
                        {
                          ll_backend__opt_util__skip_comments_2_p_0(Instrs0_6, &Instrs1_18);
                          succeeded = (Instrs1_18 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_33 = ((MR_Word) ((MR_hl_field(1, Instrs1_18, 0))));
                            Instrs2_20 = ((MR_Word) ((MR_hl_field(1, Instrs1_18, 1))));
                            Var_34 = ((MR_Word) ((MR_hl_field(0, Var_33, 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_34, 0)))) == (MR_Integer) 25)));
                            if (succeeded)
                            {
                              Var_51 = ((MR_Integer) ((MR_hl_field(3, Var_34, 1))));
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
                    MR_Word Var_35;
                    MR_Word Var_36;
                    MR_Word Between0_43;

                    Var_35 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_15);
                    succeeded = (Var_35 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_36 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
                      succeeded = (Var_36 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_6, FrameSize_7, &Between0_43, Remain_9);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Between_8 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_5));
                            MR_hl_field(1, base, 1) = ((MR_Box) (Between0_43));
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
                MR_Word MaybeRegionRval_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 7))));
                MR_Word MaybeReuse_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 8))));
                MR_Word Var_37;
                MR_Word Var_38;
                MR_Word Between0_47;
                MR_Word Lval_48 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 1))));
                MR_Word Rval_49 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, 4))));

                Var_37 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_48);
                succeeded = (Var_37 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_38 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_49);
                  succeeded = (Var_38 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    if ((MaybeRegionRval_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word RegionRval_27 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_25, 0))));
                      MR_Word Var_39;

                      Var_39 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(RegionRval_27);
                      succeeded = (Var_39 == (MR_Integer) 0);
                    }
                    if (succeeded)
                    {
                      if ((MaybeReuse_26 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word ReuseRval_28 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_26, 0))));
                        MR_Word MaybeFlagLval_29 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_26, 1))));
                        MR_Word Var_40;

                        Var_40 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ReuseRval_28);
                        succeeded = (Var_40 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          if ((MaybeFlagLval_29 == (MR_Word) ((MR_Unsigned) 0U)))
                            succeeded = MR_TRUE;
                          else
                          {
                            MR_Word FlagLval_30 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_29, 0))));
                            MR_Word Var_41;

                            Var_41 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(FlagLval_30);
                            succeeded = (Var_41 == (MR_Integer) 0);
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
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Between_8 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_5));
                            MR_hl_field(1, base, 1) = ((MR_Box) (Between0_47));
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
                MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_10, 1))));

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
      Instr0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Instrs0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Uinstr_11 = ((MR_Word) ((MR_hl_field(0, Instr0_6, 0))));
      Comment_12 = ((MR_String) ((MR_hl_field(0, Instr0_6, 1))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_11, 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Var_38 = ((MR_Word) ((MR_hl_field(3, Uinstr_11, 1))));
        succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_38, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Var_38, 1))) & (MR_Integer) 1);
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
        MR_Word STATE_VARIABLE_RevUntilSucceed_1_42;
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
            switch (((MR_Integer) ((MR_hl_field(3, Uinstr_11, 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(3, Uinstr_11, 1))));
                  MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, Uinstr_11, 2))));
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
            STATE_VARIABLE_RevUntilSucceed_1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevUntilSucceed_1_42, 0) = ((MR_Box) (Instr0_6));
            MR_hl_field(1, STATE_VARIABLE_RevUntilSucceed_1_42, 1) = ((MR_Box) (STATE_VARIABLE_RevUntilSucceed_0_36));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Instrs0_7;
          next_value_of_STATE_VARIABLE_RevUntilSucceed_0_36 = STATE_VARIABLE_RevUntilSucceed_1_42;
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
      Instr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Instrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Uinstr_14 = ((MR_Word) ((MR_hl_field(0, Instr_7, 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_14, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(3, Uinstr_14, 1))));
        Var_24 = ((MR_Word) ((MR_hl_field(3, Uinstr_14, 2))));
        succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_22, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(3, Var_22, 1))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Fr_16 = ((MR_Word) ((MR_hl_field(0, Var_23, 0))));
            succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_24, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_25 = ((MR_Word) ((MR_hl_field(3, Var_24, 1))));
              succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                Redoip0_17 = ((MR_Word) ((MR_hl_field(3, Var_25, 1))));
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
        succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_14, 0)))) == (MR_Integer) 4)));
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
          succeeded = ((((MR_tag((MR_Word) Uinstr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_14, 0)))) == (MR_Integer) 5)));
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
                Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_26, 0) = ((MR_Box) (Instr_7));
                MR_hl_field(1, Var_26, 1) = ((MR_Box) (RevSkip_10));
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
  MR_Word RevStraightLine_7;

  ll_backend__opt_util__no_stack_straight_line_acc_4_p_0(Instrs0_4, (MR_Word) ((MR_Unsigned) 0U), &RevStraightLine_7, Instrs_6);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevStraightLine_7, StraightLine_5);
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
      MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Uinstr_12 = ((MR_Word) ((MR_hl_field(0, Instr0_8, 0))));

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
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr_12, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_16 = ((MR_Word) ((MR_hl_field(3, Uinstr_12, 1))));
                MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(3, Uinstr_12, 2))));
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
        MR_Word STATE_VARIABLE_RevStraightLine_1_22;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevStraightLine_0_2;

        {
          STATE_VARIABLE_RevStraightLine_1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevStraightLine_1_22, 0) = ((MR_Box) (Instr0_8));
          MR_hl_field(1, STATE_VARIABLE_RevStraightLine_1_22, 1) = ((MR_Box) (STATE_VARIABLE_RevStraightLine_0_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Instrs0_9;
        next_value_of_STATE_VARIABLE_RevStraightLine_0_2 = STATE_VARIABLE_RevStraightLine_1_22;
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word FieldNum_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Var_18;
              MR_Word Var_19;

              Var_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
              Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(FieldNum_17);
              HeadVar__2_2 = mercury__bool__or_2_f_0(Var_18, Var_19);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
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
          MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_9;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Var_19;
              MR_Word Var_20;

              Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_17);
              Var_20 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_18);
              HeadVar__2_2 = mercury__bool__or_2_f_0(Var_19, Var_20);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

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
                    MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 0))));
                    MR_Word Rval2_26 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 2))));
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

MR_Word MR_CALL 
ll_backend__opt_util__rval_refers_stackvars_1_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1)
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word FieldNum_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Var_18;
              MR_Word Var_19;

              Var_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_16);
              Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(FieldNum_17);
              HeadVar__2_2 = mercury__bool__or_2_f_0(Var_18, Var_19);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
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
          MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_9;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Var_19;
              MR_Word Var_20;

              Var_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval1_17);
              Var_20 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval2_18);
              HeadVar__2_2 = mercury__bool__or_2_f_0(Var_19, Var_20);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

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
                    MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 0))));
                    MR_Word Rval2_26 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 2))));
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

void MR_CALL 
ll_backend__opt_util__find_no_fallthrough_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Uinstr0_6 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    MR_Word Var_9;

    Var_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_6);
    succeeded = (Var_9 == (MR_Integer) 0);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Instrs1_8;

      ll_backend__opt_util__find_no_fallthrough_2_p_0(Instrs0_4, &Instrs1_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_8));
      }
    }
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_fall_through_1_f_0(
  MR_Word HeadVar__1_1)
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));

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
      MR_Word Instrs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_8;

      Uinstr_3 = ((MR_Word) ((MR_hl_field(0, Var_7, 0))));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Instr0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Instr0_4, 0))));

    succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_11, 0)))) == (MR_Integer) 5)));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_4));
        MR_hl_field(1, base, 1) = ((MR_Box) (Before1_10));
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
      MR_Word Instr0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word LabelPrime_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Instr0_6, 0))));

      succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_11, 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        LabelPrime_9 = ((MR_Word) ((MR_hl_field(3, Var_11, 1))));
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
      Instr0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Instrs0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_5, 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, 0)))) == (MR_Integer) 5)));
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Word Var_16;
        MR_Word Var_17;

        succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
          succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_17 = ((MR_Unsigned) ((MR_hl_field(3, Var_16, 1))) & (MR_Integer) 1);
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
          MR_Word STATE_VARIABLE_Between_1_20;
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

            succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              CodeAddr_13 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 2))));
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
              STATE_VARIABLE_Between_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Between_1_20, 0) = ((MR_Box) (Instr0_5));
              MR_hl_field(1, STATE_VARIABLE_Between_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Between_0_14));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Instrs0_6;
            next_value_of_STATE_VARIABLE_Between_0_14 = STATE_VARIABLE_Between_1_20;
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
  MR_Word Touch_4;

  switch (MR_tag((MR_Word) Uinstr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Touch_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.opt_util.touches_nondet_ctrl_instr\'/1", (MR_String) "block");
          break;
        case (MR_Integer) 1:
          {
            MR_Word TouchLval_50;
            MR_Word TouchRval_51;
            MR_Word Lval_99 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_100 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            TouchLval_50 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_99);
            TouchRval_51 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_100);
            mercury__bool__or_3_p_0(TouchLval_50, TouchRval_51, &Touch_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TouchLval_104;
            MR_Word TouchRval_105;
            MR_Word Lval_106 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_107 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

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
            MR_Word MaybeRegionRval_64 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 7))));
            MR_Word MaybeReuse_65 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 8))));
            MR_Word STATE_VARIABLE_Touch_1_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word STATE_VARIABLE_Touch_2_90;
            MR_Word Lval_101 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word Rval_102 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 4))));

            Var_87 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_101);
            Var_88 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_102);
            STATE_VARIABLE_Touch_1_86 = mercury__bool__or_2_f_0(Var_87, Var_88);
            if ((MaybeRegionRval_64 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Touch_2_90 = STATE_VARIABLE_Touch_1_86;
            else
            {
              MR_Word RegionRval_66 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_64, 0))));
              MR_Word Var_89;

              Var_89 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(RegionRval_66);
              mercury__bool__or_3_p_0(Var_89, STATE_VARIABLE_Touch_1_86, &STATE_VARIABLE_Touch_2_90);
            }
            if ((MaybeReuse_65 == (MR_Word) ((MR_Unsigned) 0U)))
              Touch_4 = STATE_VARIABLE_Touch_2_90;
            else
            {
              MR_Word ReuseRval_67 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_65, 0))));
              MR_Word MaybeFlagLval_68 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_65, 1))));
              MR_Word Var_91;
              MR_Word STATE_VARIABLE_Touch_3_92;

              Var_91 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ReuseRval_67);
              mercury__bool__or_3_p_0(Var_91, STATE_VARIABLE_Touch_2_90, &STATE_VARIABLE_Touch_3_92);
              if ((MaybeFlagLval_68 == (MR_Word) ((MR_Unsigned) 0U)))
                Touch_4 = STATE_VARIABLE_Touch_3_92;
              else
              {
                MR_Word FlagLval_69 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_68, 0))));
                MR_Word Var_93;

                Var_93 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(FlagLval_69);
                mercury__bool__or_3_p_0(Var_93, STATE_VARIABLE_Touch_3_92, &Touch_4);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_116 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_116);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_121 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_121);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_45 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_45);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_71 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 3))));
            MR_Word NumLval_72 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 4))));
            MR_Word AddrLval_73 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 5))));
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;

            Var_95 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(IdRval_71);
            Var_97 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(NumLval_72);
            Var_98 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(AddrLval_73);
            Var_96 = mercury__bool__or_2_f_0(Var_97, Var_98);
            Touch_4 = mercury__bool__or_2_f_0(Var_95, Var_96);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Rval_119 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 3))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_119);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_122 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_122);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_120 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_120);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_117 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_117);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_118 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_118);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Components_75 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(Components_75);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_43 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_43);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word TouchLval_112;
            MR_Word TouchRval_113;
            MR_Word Lval_114 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word Rval_115 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));

            TouchLval_112 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(Lval_114);
            TouchRval_113 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval_115);
            mercury__bool__or_3_p_0(TouchLval_112, TouchRval_113, &Touch_4);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval_108 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word LCSRval_109 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word TouchLC_110;
            MR_Word TouchLCS_111;

            TouchLC_110 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCRval_108);
            TouchLCS_111 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCSRval_109);
            mercury__bool__or_3_p_0(TouchLC_110, TouchLCS_111, &Touch_4);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_52 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 1))));
            MR_Word LCSRval_53 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));
            MR_Word TouchLC_55;
            MR_Word TouchLCS_56;

            TouchLC_55 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCRval_52);
            TouchLCS_56 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(LCSRval_53);
            mercury__bool__or_3_p_0(TouchLC_55, TouchLCS_56, &Touch_4);
          }
          break;
      }
      break;
  }
  return Touch_4;
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Comp_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Comps_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
        switch (((MR_Integer) ((MR_hl_field(3, Comp_3, 0))))) {
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

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1)
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
              MR_Word Rval1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Touch1_19;
              MR_Word Touch2_20;

              Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_16);
              Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_17);
              mercury__bool__or_3_p_0(Touch1_19, Touch2_20, &HeadVar__2_2);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
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
          MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_6;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Touch1_17;
              MR_Word Touch2_18;

              Touch1_17 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_14);
              Touch2_18 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_15);
              mercury__bool__or_3_p_0(Touch1_17, Touch2_18, &HeadVar__2_2);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

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
                    MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 0))));
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

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1)
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
              MR_Word Rval1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Touch1_19;
              MR_Word Touch2_20;

              Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_16);
              Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_17);
              mercury__bool__or_3_p_0(Touch1_19, Touch2_20, &HeadVar__2_2);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
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
          MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_6;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Touch1_17;
              MR_Word Touch2_18;

              Touch1_17 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval1_14);
              Touch2_18 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(Rval2_15);
              mercury__bool__or_3_p_0(Touch1_17, Touch2_18, &HeadVar__2_2);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

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
                    MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 0))));
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

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_branch_away_1_f_0(
  MR_Word Uinstr_3)
{
  MR_Word CanBranchAway_4;

  switch (MR_tag((MR_Word) Uinstr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      CanBranchAway_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_3, 0))))) {
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
            MR_Word Comps_85 = ((MR_Word) ((MR_hl_field(3, Uinstr_3, 2))));

            CanBranchAway_4 = ll_backend__opt_util__can_components_branch_away_1_f_0(Comps_85);
          }
          break;
      }
      break;
  }
  return CanBranchAway_4;
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
      MR_Word Component_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Components_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

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
          switch (((MR_Integer) ((MR_hl_field(3, Component_3, 0))))) {
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
                MR_Word CanBranchAway_10 = ((((MR_Unsigned) ((MR_hl_field(3, Component_3, 1))) >> 2)) & (MR_Integer) 1);

                switch (CanBranchAway_10) {
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
    Instr1_8 = ((MR_Word) ((MR_hl_field(1, Instrs1_7, 0))));
    Instrs2_9 = ((MR_Word) ((MR_hl_field(1, Instrs1_7, 1))));
    Uinstr1_10 = ((MR_Word) ((MR_hl_field(0, Instr1_8, 0))));
    succeeded = ((((MR_tag((MR_Word) Uinstr1_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr1_10, 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(3, Uinstr1_10, 1))));
      Var_21 = ((MR_Word) ((MR_hl_field(3, Uinstr1_10, 2))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_19 = ((MR_Unsigned) ((MR_hl_field(1, Var_18, 0))) & (MR_Integer) 1);
          Var_20 = ((MR_Integer) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_20 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
              if (succeeded)
                JumpLabel_12 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_52_52;
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_54_54;
      MR_Word BetweenJump_13;
      MR_Word BetweenFall_14;
      MR_Word BetweenTrue0_15;
      MR_Word BetweenFalse0_16;
      MR_Word Var_22;
      MR_Word Var_24;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Box conv0_BetweenJump_13;
      MR_Word Var_58;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]), Sdprocmap_5, ((MR_Box) (JumpLabel_12)), &conv0_BetweenJump_13);
      if (succeeded)
      {
        BetweenJump_13 = ((MR_Word) (conv0_BetweenJump_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs2_9, &BetweenFall_14, &Var_58);
        if (succeeded)
        {
          Var_22 = (MR_Word) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[2]));
          ll_backend__opt_util__filter_out_r1_3_p_0(BetweenJump_13, &Var_46, &BetweenTrue0_15);
          TypeInfo_52_52 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (Var_22)), ((MR_Box) (Var_46)));
          if (succeeded)
          {
            ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenTrue0_15, Between_6);
            Var_24 = (MR_Word) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[3]));
            ll_backend__opt_util__filter_out_r1_3_p_0(BetweenFall_14, &Var_47, &BetweenFalse0_16);
            TypeInfo_53_53 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (Var_24)), ((MR_Box) (Var_47)));
            if (succeeded)
            {
              ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenFalse0_16, &Var_48);
              TypeInfo_54_54 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (*Between_6)), ((MR_Box) (Var_48)));
            }
          }
        }
      }
    }
    else
    {
      MR_Word TypeCtorInfo_44_44;
      MR_Word TypeInfo_45_45;
      MR_Word TypeInfo_55_55;
      MR_Word TypeInfo_56_56;
      MR_Word TypeInfo_57_57;
      MR_Word Var_26;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word BetweenJump_37;
      MR_Word BetweenFall_38;
      MR_Word BetweenTrue0_39;
      MR_Word BetweenFalse0_40;
      MR_Word JumpLabel_41;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Integer Var_31;
      MR_Box conv1_BetweenJump_37;
      MR_Word Var_59;

      succeeded = ((((MR_tag((MR_Word) Uinstr1_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr1_10, 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(3, Uinstr1_10, 1))));
        Var_32 = ((MR_Word) ((MR_hl_field(3, Uinstr1_10, 2))));
        succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(3, Var_26, 1))));
          Var_28 = ((MR_Word) ((MR_hl_field(3, Var_26, 2))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 16U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_29 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
              succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_30 = ((MR_Unsigned) ((MR_hl_field(1, Var_29, 0))) & (MR_Integer) 1);
                Var_31 = ((MR_Integer) ((MR_hl_field(1, Var_29, 1))));
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
            JumpLabel_41 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
            TypeCtorInfo_44_44 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
            TypeInfo_45_45 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_44_44, TypeInfo_45_45, Sdprocmap_5, ((MR_Box) (JumpLabel_41)), &conv1_BetweenJump_37);
            if (succeeded)
            {
              BetweenJump_37 = ((MR_Word) (conv1_BetweenJump_37));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs2_9, &BetweenFall_38, &Var_59);
              if (succeeded)
              {
                Var_33 = (MR_Word) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[3]));
                ll_backend__opt_util__filter_out_r1_3_p_0(BetweenJump_37, &Var_49, &BetweenFalse0_40);
                TypeInfo_55_55 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (Var_33)), ((MR_Box) (Var_49)));
                if (succeeded)
                {
                  ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenFalse0_40, Between_6);
                  Var_35 = (MR_Word) (MR_mkword(1, &ll_backend__opt_util_scalar_common_3[2]));
                  ll_backend__opt_util__filter_out_r1_3_p_0(BetweenFall_38, &Var_50, &BetweenTrue0_39);
                  TypeInfo_56_56 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (Var_35)), ((MR_Box) (Var_50)));
                  if (succeeded)
                  {
                    ll_backend__opt_util__filter_out_livevals_2_p_0(BetweenTrue0_39, &Var_51);
                    TypeInfo_57_57 = (MR_Word) (&ll_backend__opt_util_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (*Between_6)), ((MR_Box) (Var_51)));
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

void MR_CALL 
ll_backend__opt_util__filter_out_livevals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instrs1_6;
    MR_Word Var_9;

    ll_backend__opt_util__filter_out_livevals_2_p_0(Instrs0_4, &Instrs1_6);
    Var_9 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
    if (succeeded)
      *HeadVar__2_2 = Instrs1_6;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_6));
      }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_r1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Instr0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Success0_8;
    MR_Word Instrs1_9;
    MR_Word Success1_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Integer Var_15;
    MR_Word Var_16;

    ll_backend__opt_util__filter_out_r1_3_p_0(Instrs0_5, &Success0_8, &Instrs1_9);
    Var_12 = ((MR_Word) ((MR_hl_field(0, Instr0_4, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(3, Var_12, 1))));
      Var_16 = ((MR_Word) ((MR_hl_field(3, Var_12, 2))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_14 = ((MR_Unsigned) ((MR_hl_field(1, Var_13, 0))) & (MR_Integer) 1);
        Var_15 = ((MR_Integer) ((MR_hl_field(1, Var_13, 1))));
        succeeded = (Var_14 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_15 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, 0)))) == (MR_Integer) 1)));
            if (succeeded)
              Success1_10 = ((MR_Word) ((MR_hl_field(3, Var_16, 1))));
          }
        }
      }
    }
    if (succeeded)
    {
      *HeadVar__3_3 = Instrs1_9;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Success1_10));
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_4));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_9));
      }
      *HeadVar__2_2 = Success0_8;
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_succeed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetweenIncl_4)
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
    Instr1_6 = ((MR_Word) ((MR_hl_field(1, Instrs1_5, 0))));
    Instrs2_7 = ((MR_Word) ((MR_hl_field(1, Instrs1_5, 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(0, Instr1_6, 0))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
    if (succeeded)
    {
      ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs2_7, &Instrs3_10);
      succeeded = (Instrs3_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr3_11 = ((MR_Word) ((MR_hl_field(1, Instrs3_10, 0))));
        Var_16 = ((MR_Word) ((MR_hl_field(0, Instr3_11, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, 1))));
          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_19 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_18, 0) = ((MR_Box) (Instr3_11));
              MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InstrsBetweenIncl_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr1_6));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_18));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetween_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(Instrs0_3, InstrsBetween_4, &Var_5);
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * InstrsBetween_5,
  MR_Word * Success_6)
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
    Instr1_8 = ((MR_Word) ((MR_hl_field(1, Instrs1_7, 0))));
    Instrs2_9 = ((MR_Word) ((MR_hl_field(1, Instrs1_7, 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, Instr1_8, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_33, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_34 = ((MR_Word) ((MR_hl_field(3, Var_33, 1))));
      Var_35 = ((MR_Word) ((MR_hl_field(3, Var_33, 2))));
      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_36 = ((MR_Word) ((MR_hl_field(0, Var_35, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_36, 0)))) == (MR_Integer) 0)));
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
      Instr3_14 = ((MR_Word) ((MR_hl_field(1, Instrs3_13, 0))));
      Instrs4_15 = ((MR_Word) ((MR_hl_field(1, Instrs3_13, 1))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, Instr3_14, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_40, 0)))) == (MR_Integer) 25)));
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
        Instr5_20 = ((MR_Word) ((MR_hl_field(1, Instrs5_19, 0))));
        Instrs6_21 = ((MR_Word) ((MR_hl_field(1, Instrs5_19, 1))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, Instr5_20, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_44, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(3, Var_44, 1))));
          Var_48 = ((MR_Word) ((MR_hl_field(3, Var_44, 2))));
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_46 = ((MR_Unsigned) ((MR_hl_field(1, Var_45, 0))) & (MR_Integer) 1);
            Var_47 = ((MR_Integer) ((MR_hl_field(1, Var_45, 1))));
            succeeded = (Var_46 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_47 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Var_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_48, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  R1val_22 = ((MR_Word) ((MR_hl_field(3, Var_48, 1))));
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
                      Instr7_25 = ((MR_Word) ((MR_hl_field(1, Instrs7_24, 0))));
                      Instrs8_26 = ((MR_Word) ((MR_hl_field(1, Instrs7_24, 1))));
                      Var_49 = ((MR_Word) ((MR_hl_field(0, Instr7_25, 0))));
                      succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs8_26, &Instrs9_29);
                        succeeded = (Instrs9_29 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Instr9_30 = ((MR_Word) ((MR_hl_field(1, Instrs9_29, 0))));
                          Var_50 = ((MR_Word) ((MR_hl_field(0, Instr9_30, 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_50, 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) ((MR_hl_field(3, Var_50, 1))));
                            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                              {
                                Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_54, 0) = ((MR_Box) (Instr7_25));
                                MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
                              }
                              {
                                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_53, 0) = ((MR_Box) (Instr5_20));
                                MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
                              }
                              {
                                Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_52, 0) = ((MR_Box) (Instr3use_18));
                                MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                *InstrsBetween_5 = base;
                                MR_hl_field(1, base, 0) = ((MR_Box) (Instr1use_12));
                                MR_hl_field(1, base, 1) = ((MR_Box) (Var_52));
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

MR_bool MR_CALL 
ll_backend__opt_util__is_proceed_next_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * InstrsBetween_4)
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
    Instr1_6 = ((MR_Word) ((MR_hl_field(1, Instrs1_5, 0))));
    Instrs2_7 = ((MR_Word) ((MR_hl_field(1, Instrs1_5, 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, Instr1_6, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(3, Var_26, 1))));
      Var_28 = ((MR_Word) ((MR_hl_field(3, Var_26, 2))));
      succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, 0)))) == (MR_Integer) 0)));
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
      Instr3_12 = ((MR_Word) ((MR_hl_field(1, Instrs3_11, 0))));
      Instrs4_13 = ((MR_Word) ((MR_hl_field(1, Instrs3_11, 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, Instr3_12, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_33, 0)))) == (MR_Integer) 25)));
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
        Instr5_18 = ((MR_Word) ((MR_hl_field(1, Instrs5_17, 0))));
        Instrs6_19 = ((MR_Word) ((MR_hl_field(1, Instrs5_17, 1))));
        Var_37 = ((MR_Word) ((MR_hl_field(0, Instr5_18, 0))));
        succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 2);
        if (succeeded)
        {
          ll_backend__opt_util__skip_comments_labels_2_p_0(Instrs6_19, &Instrs7_22);
          succeeded = (Instrs7_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Instr7_23 = ((MR_Word) ((MR_hl_field(1, Instrs7_22, 0))));
            Var_38 = ((MR_Word) ((MR_hl_field(0, Instr7_23, 0))));
            succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_38, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_39 = ((MR_Word) ((MR_hl_field(3, Var_38, 1))));
              succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_42 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_41, 0) = ((MR_Box) (Instr5_18));
                  MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
                }
                {
                  Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_40, 0) = ((MR_Box) (Instr3use_16));
                  MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstrsBetween_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr1use_10));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_40));
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
      Instr_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Moreinstr_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Uinstr_8 = ((MR_Word) ((MR_hl_field(0, Instr_5, 0))));
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

          succeeded = ((((MR_tag((MR_Word) Uinstr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_8, 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            NextLabel_12 = ((MR_Word) ((MR_hl_field(3, Uinstr_8, 1))));
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
      Var_12 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
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
        Var_14 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
        Instrs1_19 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
        Var_15 = ((MR_Word) ((MR_hl_field(0, Var_14, 0))));
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
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
          Var_16 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
          Instrs1_18 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
          Var_17 = ((MR_Word) ((MR_hl_field(0, Var_16, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, 0)))) == (MR_Integer) 5)));
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
      Var_10 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
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
        Var_12 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
        Instrs1_14 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, 0)))) == (MR_Integer) 5)));
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
      Var_10 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
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
        Var_12 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
        Instrs1_14 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
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
      Var_8 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 0))));
      Instrs1_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_3, 1))));
      Var_9 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
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
  MR_bool succeeded = (Instrs0_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Instr0_7;
  MR_Word Instrs1_8;
  MR_Word Uinstr0_9;

  if (succeeded)
  {
    Instr0_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 0))));
    Instrs1_8 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 1))));
    Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_7, 0))));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Comments_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Comments0_13));
    }
  }
  else
  {
    *Instrs_6 = Instrs0_4;
    *Comments_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
ll_backend__opt_util__get_prologue_4_p_0(
  MR_Word Instrs0_5,
  MR_Word * LabelInstr_6,
  MR_Word * Comments_7,
  MR_Word * Instrs_8)
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
    Instr1_11 = ((MR_Word) ((MR_hl_field(1, Instrs1_10, 0))));
    Instrs2_12 = ((MR_Word) ((MR_hl_field(1, Instrs1_10, 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, Instr1_11, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, 0)))) == (MR_Integer) 5)));
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

void MR_CALL 
ll_backend__opt_util__gather_comments_3_p_0(
  MR_Word Instrs0_4,
  MR_Word * Comments_5,
  MR_Word * Instrs_6)
{
  MR_bool succeeded = (Instrs0_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Instr0_7;
  MR_Word Instrs1_8;
  MR_Word Var_12;

  if (succeeded)
  {
    Instr0_7 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 0))));
    Instrs1_8 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 1))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Instr0_7, 0))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word Comments0_11;

    ll_backend__opt_util__gather_comments_3_p_0(Instrs1_8, &Comments0_11, Instrs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Comments_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Comments0_11));
    }
  }
  else
  {
    *Instrs_6 = Instrs0_4;
    *Comments_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__opt_util____Unify____instrmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__opt_util____Compare____instrmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__opt_util____Unify____lvalmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__opt_util____Compare____lvalmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__opt_util____Unify____succmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__opt_util____Compare____succmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__opt_util____Unify____tailmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__opt_util____Compare____tailmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
