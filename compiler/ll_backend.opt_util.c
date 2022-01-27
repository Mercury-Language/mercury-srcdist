/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module ll_backend.opt_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__opt_util__init
ENDINIT
*/

#include "ll_backend.opt_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2527__1_2_p_0(
  MR_Word ll_backend__opt_util__Lvals0_8,
  MR_Word ll_backend__opt_util__Lvals_9);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2440__1_2_p_0(
  MR_Word ll_backend__opt_util__DefLabel0_95,
  MR_Word ll_backend__opt_util__DefLabel_96);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2421__1_2_p_0(
  MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89,
  MR_Word ll_backend__opt_util__OnlyLayoutLabel_90);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2412__1_2_p_0(
  MR_Word ll_backend__opt_util__LayoutLabel0_87,
  MR_Word ll_backend__opt_util__LayoutLabel_88);

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2403__1_2_p_0(
  MR_Word ll_backend__opt_util__FixLabel0_85,
  MR_Word ll_backend__opt_util__FixLabel_86);

static void MR_CALL 
ll_backend__opt_util__replace_labels_mem_ref_3_p_0(
  MR_Word ll_backend__opt_util__MemRef0_4,
  MR_Word * ll_backend__opt_util__MemRef_5,
  MR_Word ll_backend__opt_util__ReplMap_6);

static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
  MR_Word ll_backend__opt_util__Rval0_4,
  MR_Word * ll_backend__opt_util__Rval_5,
  MR_Word ll_backend__opt_util__ReplMap_6);

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
  MR_Word ll_backend__opt_util__Lval0_4,
  MR_Word * ll_backend__opt_util__Lval_5,
  MR_Word ll_backend__opt_util__ReplMap_6);

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
  MR_Word ll_backend__opt_util__ReplMap_4,
  MR_Word ll_backend__opt_util__Lval0_5,
  MR_Word * ll_backend__opt_util__Lval_6);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
  MR_Box ll_backend__opt_util__closure_arg);

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box * ll_backend__opt_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
  MR_Word ll_backend__opt_util__LiveLvals0_4,
  MR_Word * ll_backend__opt_util__LiveLvals_5,
  MR_Word ll_backend__opt_util__ReplMap_6);

static void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__Livevals0_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3);

static void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_N_3);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
  MR_Word ll_backend__opt_util__Uinstr_3);

static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasIncr_3,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasDecr_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_mem_ref_5_p_0(
  MR_Word ll_backend__opt_util__MemRef_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_13,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_14,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_15,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_16);

static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
  MR_Word ll_backend__opt_util__Rval_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_19,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_20,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_21,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_22);

static void MR_CALL 
ll_backend__opt_util__count_temps_lval_5_p_0(
  MR_Word ll_backend__opt_util__Lval_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_23,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_24,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_25,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_26);

static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3);

static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
  MR_Word ll_backend__opt_util__MaybeFixedLabel_7,
  MR_Word ll_backend__opt_util__MaybeLayoutLabel_8,
  MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_9,
  MR_Word ll_backend__opt_util__MaybeSubLabel_10,
  MR_Word ll_backend__opt_util__MaybeDefLabel_11,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Labels_18);

static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevLabels_3);

static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__Labels_3);

static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
  MR_Word ll_backend__opt_util__Uinstr_4,
  MR_Word * ll_backend__opt_util__Labels_5,
  MR_Word * ll_backend__opt_util__CodeAddrs_6);

static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2);

static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Input_3);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Input_3);

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Component_3);

static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37,
  MR_String * ll_backend__opt_util__SucceedComment_9,
  MR_Word * ll_backend__opt_util__Remain_10);

static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_2_4_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3,
  MR_Word * ll_backend__opt_util__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_2_4_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0_14,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Between_15,
  MR_Word * ll_backend__opt_util__After_8);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
  MR_Box ll_backend__opt_util__closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
  MR_Box ll_backend__opt_util__closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
  MR_Box ll_backend__opt_util__closure_arg);

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
  MR_Box ll_backend__opt_util__closure_arg);

static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1);


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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_const_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[2])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__opt_util_scalar_common_4[3])),
    ((MR_Box) (ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_util_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_instrmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____instrmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____instrmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "instrmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_lvalmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____lvalmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____lvalmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "lvalmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_succmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____succmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____succmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "succmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_tailmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____tailmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____tailmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "tailmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____instrmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

    {
      ll_backend__opt_util____Compare____instrmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____lvalmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

    {
      ll_backend__opt_util____Compare____lvalmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____succmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

    {
      ll_backend__opt_util____Compare____succmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____tailmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
  MR_Box ll_backend__opt_util__wrapper_arg_2,
  MR_Box ll_backend__opt_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

    {
      ll_backend__opt_util____Compare____tailmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2527__1_2_p_0(
  MR_Word ll_backend__opt_util__Lvals0_8,
  MR_Word ll_backend__opt_util__Lvals_9)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_1[1], ((MR_Box) (ll_backend__opt_util__Lvals0_8)), ((MR_Box) (ll_backend__opt_util__Lvals_9)));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2440__1_2_p_0(
  MR_Word ll_backend__opt_util__DefLabel0_95,
  MR_Word ll_backend__opt_util__DefLabel_96)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__DefLabel0_95, ll_backend__opt_util__DefLabel_96);
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2421__1_2_p_0(
  MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89,
  MR_Word ll_backend__opt_util__OnlyLayoutLabel_90)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__OnlyLayoutLabel0_89, ll_backend__opt_util__OnlyLayoutLabel_90);
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2412__1_2_p_0(
  MR_Word ll_backend__opt_util__LayoutLabel0_87,
  MR_Word ll_backend__opt_util__LayoutLabel_88)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__LayoutLabel0_87, ll_backend__opt_util__LayoutLabel_88);
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2403__1_2_p_0(
  MR_Word ll_backend__opt_util__FixLabel0_85,
  MR_Word ll_backend__opt_util__FixLabel_86)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__FixLabel0_85, ll_backend__opt_util__FixLabel_86);
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0(
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[3], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

    {
      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[3], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0(
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[2], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

    {
      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[2], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0(
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[1], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

    {
      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[1], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0(
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[0], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

    {
      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[0], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_mem_ref_3_p_0(
  MR_Word ll_backend__opt_util__MemRef0_4,
  MR_Word * ll_backend__opt_util__MemRef_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__MemRef0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *ll_backend__opt_util__MemRef_5 = ll_backend__opt_util__MemRef0_4;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_util__CellRval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 1)));
          MR_Word ll_backend__opt_util__FieldNumRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 2)));
          MR_Word ll_backend__opt_util__CellRval_12;
          MR_Word ll_backend__opt_util__FieldNumRval_13;

          {
            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__CellRval0_9, &ll_backend__opt_util__CellRval_12, ll_backend__opt_util__ReplMap_6);
          }
          {
            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__FieldNumRval0_11, &ll_backend__opt_util__FieldNumRval_13, ll_backend__opt_util__ReplMap_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__MemRef_5 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__opt_util__CellRval_12));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__opt_util__MaybeTag_10));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__opt_util__FieldNumRval_13));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
  MR_Word ll_backend__opt_util__Rval0_4,
  MR_Word * ll_backend__opt_util__Rval_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_util__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__Lval_8;

          {
            ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_7, &ll_backend__opt_util__Lval_8, ll_backend__opt_util__ReplMap_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__opt_util__Rval_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__opt_util__Lval_8));
          }
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__opt_util__Rval_5 = ll_backend__opt_util__Rval0_4;
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_util__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
          MR_Word ll_backend__opt_util__SubRval_12;

          {
            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRval0_11, &ll_backend__opt_util__SubRval_12, ll_backend__opt_util__ReplMap_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__Rval_5 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__opt_util__Tag_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__opt_util__SubRval_12));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__opt_util__Rval_5 = ll_backend__opt_util__Rval0_4;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__Const0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Const_14;

              switch (MR_tag((MR_Word) ll_backend__opt_util__Const0_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Const_14 = ll_backend__opt_util__Const0_13;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ll_backend__opt_util__Const_14 = ll_backend__opt_util__Const0_13;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const0_13, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 4:
                      ll_backend__opt_util__Const_14 = ll_backend__opt_util__Const0_13;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ll_backend__opt_util__Addr0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const0_13, (MR_Integer) 1)));
                        MR_Word ll_backend__opt_util__Addr_38;

                        {
                          ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Addr0_37, &ll_backend__opt_util__Addr_38, ll_backend__opt_util__ReplMap_6);
                        }
                        {
                          ll_backend__opt_util__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const_14, 1) = ((MR_Box) (ll_backend__opt_util__Addr_38));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Rval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Const_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__UnOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__SubRvalA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__SubRvalA_17;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalA0_16, &ll_backend__opt_util__SubRvalA_17, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Rval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__UnOp_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__SubRvalA_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_util__BinOp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__SubRvalB0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__SubRvalB_20;
              MR_Word ll_backend__opt_util__SubRvalA0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__SubRvalA_25;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalA0_24, &ll_backend__opt_util__SubRvalA_25, ll_backend__opt_util__ReplMap_6);
              }
              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalB0_19, &ll_backend__opt_util__SubRvalB_20, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Rval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__BinOp_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__SubRvalA_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__SubRvalB_20));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__MemRef0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__MemRef_22;

              {
                ll_backend__opt_util__replace_labels_mem_ref_3_p_0(ll_backend__opt_util__MemRef0_21, &ll_backend__opt_util__MemRef_22, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Rval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__MemRef_22));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
  MR_Word ll_backend__opt_util__Lval0_4,
  MR_Word * ll_backend__opt_util__Lval_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__opt_util__Lval_5 = ll_backend__opt_util__Lval0_4;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__opt_util__Lval_5 = ll_backend__opt_util__Lval0_4;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            *ll_backend__opt_util__Lval_5 = ll_backend__opt_util__Lval0_4;
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__Rval0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_19;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_18, &ll_backend__opt_util__Rval_19, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_19));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_util__Rval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_26;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_25, &ll_backend__opt_util__Rval_26, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_26));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_28;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_27, &ll_backend__opt_util__Rval_28, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_28));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__Rval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_30;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_29, &ll_backend__opt_util__Rval_30, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_30));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__opt_util__Rval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_32;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_31, &ll_backend__opt_util__Rval_32, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_32));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Tag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__BaseRval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__OffsetRval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__BaseRval_23;
              MR_Word ll_backend__opt_util__OffsetRval_24;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__BaseRval0_21, &ll_backend__opt_util__BaseRval_23, ll_backend__opt_util__ReplMap_6);
              }
              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__OffsetRval0_22, &ll_backend__opt_util__OffsetRval_24, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Tag_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__BaseRval_23));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__OffsetRval_24));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Rval0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_34;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_33, &ll_backend__opt_util__Rval_34, ll_backend__opt_util__ReplMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Lval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_34));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
  MR_Word ll_backend__opt_util__ReplMap_4,
  MR_Word ll_backend__opt_util__Lval0_5,
  MR_Word * ll_backend__opt_util__Lval_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_5, ll_backend__opt_util__Lval_6, ll_backend__opt_util__ReplMap_4);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
  MR_Box ll_backend__opt_util__closure_arg)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2527__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1,
  MR_Box * ll_backend__opt_util__wrapper_arg_2)
{
  {
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
    MR_Word ll_backend__opt_util__conv0_Lval_6;

    {
      ll_backend__opt_util__replace_labels_lval_map_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__opt_util__wrapper_arg_1), &ll_backend__opt_util__conv0_Lval_6);
    }
    *ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
  MR_Word ll_backend__opt_util__LiveLvals0_4,
  MR_Word * ll_backend__opt_util__LiveLvals_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__LiveLvals0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__LiveLvals_5 = ll_backend__opt_util__LiveLvals0_4;
    else
      {
        MR_Word ll_backend__opt_util__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        MR_Word ll_backend__opt_util__LvalSet0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__LiveLvals0_4, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Lvals0_8;
        MR_Word ll_backend__opt_util__Lvals_9;
        MR_Word ll_backend__opt_util__V_10_10;
        MR_Word ll_backend__opt_util__V_11_11;

        {
          mercury__set__to_sorted_list_2_p_0(ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__LvalSet0_7, &ll_backend__opt_util__Lvals0_8);
        }
        {
          ll_backend__opt_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 3) = ((MR_Box) (ll_backend__opt_util__ReplMap_6));
        }
        {
          mercury__list__map_3_p_0(ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__V_10_10, ll_backend__opt_util__Lvals0_8, &ll_backend__opt_util__Lvals_9);
        }
        {
          ll_backend__opt_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 3) = ((MR_Box) (ll_backend__opt_util__Lvals0_8));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 4) = ((MR_Box) (ll_backend__opt_util__Lvals_9));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__opt_util__V_11_11, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_c_code_live_lvals\'/3", (MR_String) "some replacements");
        }
        *ll_backend__opt_util__LiveLvals_5 = ll_backend__opt_util__LiveLvals0_4;
      }
  }
}

static void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__Livevals0_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr_8;
        MR_Word ll_backend__opt_util__Instrs_9;
        MR_Word ll_backend__opt_util__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
        MR_String ll_backend__opt_util__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Livevals_13;
        MR_Word ll_backend__opt_util__ThisLivevals_12;

        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__ThisLivevals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)));
            {
              MR_Word ll_backend__opt_util__V_16_16;

              {
                mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_util__Livevals0_2, ll_backend__opt_util__ThisLivevals_12, &ll_backend__opt_util__Livevals_13);
              }
              {
                ll_backend__opt_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_16_16, 0) = ((MR_Box) (ll_backend__opt_util__Livevals_13));
              }
              {
                ll_backend__opt_util__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_8, 0) = ((MR_Box) (ll_backend__opt_util__V_16_16));
                MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_8, 1) = ((MR_Box) (ll_backend__opt_util__Comment_11));
              }
            }
          }
        else
          {
            MR_Word ll_backend__opt_util__Lval_14;
            MR_Word ll_backend__opt_util__V_15_15;

            ll_backend__opt_util__Instr_8 = ll_backend__opt_util__Instr0_5;
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
                {
                  mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__opt_util__Lval_14)), ll_backend__opt_util__Livevals0_2, &ll_backend__opt_util__Livevals_13);
                }
              }
            else
              {
                MR_Word ll_backend__opt_util__V_17_17;

                {
                  ll_backend__opt_util__V_17_17 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr0_10);
                }
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_17_17 == (MR_Integer) 0);
                if (ll_backend__opt_util__succeeded)
                  {
                    {
                      mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__opt_util__Livevals_13);
                    }
                  }
                else
                  ll_backend__opt_util__Livevals_13 = ll_backend__opt_util__Livevals0_2;
              }
          }
        {
          ll_backend__opt_util__propagate_livevals_2_3_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__Livevals_13, &ll_backend__opt_util__Instrs_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs_9));
        }
      }
  }
}

static void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_N_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__opt_util__STATE_VARIABLE_N_3 = ll_backend__opt_util__STATE_VARIABLE_N_0_2;
        else
          {
            MR_Word ll_backend__opt_util__Uinstr0_7;
            MR_Word ll_backend__opt_util__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_22_22;
            MR_String ll_backend__opt_util__V_8_8;
            MR_Word ll_backend__opt_util__V_11_11;
            MR_Word ll_backend__opt_util__V_12_12;
            MR_Word ll_backend__opt_util__V_13_13;
            MR_Word ll_backend__opt_util__V_14_14;
            MR_Word ll_backend__opt_util__V_15_15;
            MR_Word ll_backend__opt_util__V_16_16;
            MR_Word ll_backend__opt_util__V_17_17;
            MR_Word ll_backend__opt_util__V_18_18;

            ll_backend__opt_util__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
            ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 1)));
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 2)));
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 3)));
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 4)));
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 5)));
                ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 6)));
                ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 7)));
                ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 8)));
                ll_backend__opt_util__STATE_VARIABLE_N_22_22 = (ll_backend__opt_util__STATE_VARIABLE_N_0_2 + (MR_Integer) 1);
              }
            else
              ll_backend__opt_util__STATE_VARIABLE_N_22_22 = ll_backend__opt_util__STATE_VARIABLE_N_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_9;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_N_22_22;

              ll_backend__opt_util__STATE_VARIABLE_N_0_2 = ll_backend__opt_util__STATE_VARIABLE_N_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__opt_util__Comp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Comps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Touch1_6;
        MR_Word ll_backend__opt_util__Touch2_7;

        switch (MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__opt_util__Touch1_6 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
                break;
            }
            break;
        }
        {
          ll_backend__opt_util__Touch2_7 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(ll_backend__opt_util__Comps_4);
        }
        {
          mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_6, ll_backend__opt_util__Touch2_7, &ll_backend__opt_util__HeadVar__2_2);
        }
      }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

          {
            ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_5);
          }
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

              {
                ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_3);
              }
            }
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_6;

                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_10;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__opt_util__Rval1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__Rval2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ll_backend__opt_util__Touch1_15;
                  MR_Word ll_backend__opt_util__Touch2_16;
                  MR_Word ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__Touch1_15 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval1_12);
                  }
                  {
                    ll_backend__opt_util__Touch2_16 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval2_13);
                  }
                  {
                    mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_15, ll_backend__opt_util__Touch2_16, &ll_backend__opt_util__HeadVar__2_2);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__opt_util__MemRef_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(ll_backend__opt_util__MemRef_17);
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__Touch1_19;
              MR_Word ll_backend__opt_util__Touch2_20;
              MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval1_16);
              }
              {
                ll_backend__opt_util__Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval2_17);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_19, ll_backend__opt_util__Touch2_20, &ll_backend__opt_util__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_24);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 12:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
  MR_Word ll_backend__opt_util__Uinstr_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Touch_4;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__Touch_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ll_backend__opt_util__Touch_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.touches_nondet_ctrl_instr\'/1", (MR_String) "block");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__TouchLval_49;
              MR_Word ll_backend__opt_util__TouchRval_50;
              MR_Word ll_backend__opt_util__Lval_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__TouchLval_49 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_99);
              }
              {
                ll_backend__opt_util__TouchRval_50 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_100);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_49, ll_backend__opt_util__TouchRval_50, &ll_backend__opt_util__Touch_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__TouchLval_105;
              MR_Word ll_backend__opt_util__TouchRval_106;
              MR_Word ll_backend__opt_util__Lval_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__TouchLval_105 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_107);
              }
              {
                ll_backend__opt_util__TouchRval_106 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_108);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_105, ll_backend__opt_util__TouchRval_106, &ll_backend__opt_util__Touch_4);
              }
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
            ll_backend__opt_util__Touch_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 16:
          case (MR_Integer) 19:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
            ll_backend__opt_util__Touch_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__opt_util__MaybeRegionRval_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeReuse_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_87_87;
              MR_Word ll_backend__opt_util__V_88_88;
              MR_Word ll_backend__opt_util__V_89_89;
              MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_91_91;
              MR_Word ll_backend__opt_util__Lval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));

              {
                ll_backend__opt_util__V_88_88 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_101);
              }
              {
                ll_backend__opt_util__V_89_89 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_102);
              }
              {
                ll_backend__opt_util__STATE_VARIABLE_Touch_87_87 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_88_88, ll_backend__opt_util__V_89_89);
              }
              if ((ll_backend__opt_util__MaybeRegionRval_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_util__STATE_VARIABLE_Touch_91_91 = ll_backend__opt_util__STATE_VARIABLE_Touch_87_87;
              else
                {
                  MR_Word ll_backend__opt_util__RegionRval_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_63, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__V_90_90;

                  {
                    ll_backend__opt_util__V_90_90 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__RegionRval_65);
                  }
                  {
                    mercury__bool__or_3_p_0(ll_backend__opt_util__V_90_90, ll_backend__opt_util__STATE_VARIABLE_Touch_87_87, &ll_backend__opt_util__STATE_VARIABLE_Touch_91_91);
                  }
                }
              if ((ll_backend__opt_util__MaybeReuse_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__STATE_VARIABLE_Touch_91_91;
              else
                {
                  MR_Word ll_backend__opt_util__ReuseRval_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_64, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__MaybeFlagLval_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_64, (MR_Integer) 1)));
                  MR_Word ll_backend__opt_util__V_92_92;
                  MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_93_93;

                  {
                    ll_backend__opt_util__V_92_92 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__ReuseRval_66);
                  }
                  {
                    mercury__bool__or_3_p_0(ll_backend__opt_util__V_92_92, ll_backend__opt_util__STATE_VARIABLE_Touch_91_91, &ll_backend__opt_util__STATE_VARIABLE_Touch_93_93);
                  }
                  if ((ll_backend__opt_util__MaybeFlagLval_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__opt_util__Touch_4 = ll_backend__opt_util__STATE_VARIABLE_Touch_93_93;
                  else
                    {
                      MR_Word ll_backend__opt_util__FlagLval_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_67, (MR_Integer) 0)));
                      MR_Word ll_backend__opt_util__V_94_94;

                      {
                        ll_backend__opt_util__V_94_94 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__FlagLval_68);
                      }
                      {
                        mercury__bool__or_3_p_0(ll_backend__opt_util__V_94_94, ll_backend__opt_util__STATE_VARIABLE_Touch_93_93, &ll_backend__opt_util__Touch_4);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__opt_util__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_117);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__opt_util__Rval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_122);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__opt_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_44);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__opt_util__IdRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__NumLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__AddrLval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_83_83;
              MR_Word ll_backend__opt_util__V_84_84;
              MR_Word ll_backend__opt_util__V_85_85;
              MR_Word ll_backend__opt_util__V_86_86;
              MR_Word ll_backend__opt_util___FillOp_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___EmbeddedStackFrame_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__V_83_83 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__IdRval_70);
              }
              {
                ll_backend__opt_util__V_85_85 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__NumLval_71);
              }
              {
                ll_backend__opt_util__V_86_86 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__AddrLval_72);
              }
              {
                ll_backend__opt_util__V_84_84 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_85_85, ll_backend__opt_util__V_86_86);
              }
              {
                ll_backend__opt_util__Touch_4 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_83_83, ll_backend__opt_util__V_84_84);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__opt_util__Rval_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util___SetOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___EmbeddedStackFrame_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_120);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__opt_util__Lval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_123);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__opt_util__Rval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_121);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__opt_util__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_118);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__opt_util__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_119);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__Components_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(ll_backend__opt_util__Components_74);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__opt_util__Lval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_42);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_util__TouchLval_113;
              MR_Word ll_backend__opt_util__TouchRval_114;
              MR_Word ll_backend__opt_util__Lval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

              {
                ll_backend__opt_util__TouchLval_113 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_115);
              }
              {
                ll_backend__opt_util__TouchRval_114 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_116);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_113, ll_backend__opt_util__TouchRval_114, &ll_backend__opt_util__Touch_4);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_util__LCRval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__TouchLC_111;
              MR_Word ll_backend__opt_util__TouchLCS_112;
              MR_Word ll_backend__opt_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

              {
                ll_backend__opt_util__TouchLC_111 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCRval_109);
              }
              {
                ll_backend__opt_util__TouchLCS_112 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCSRval_110);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLC_111, ll_backend__opt_util__TouchLCS_112, &ll_backend__opt_util__Touch_4);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__opt_util__LCRval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__TouchLC_54;
              MR_Word ll_backend__opt_util__TouchLCS_55;

              {
                ll_backend__opt_util__TouchLC_54 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCRval_51);
              }
              {
                ll_backend__opt_util__TouchLCS_55 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCSRval_52);
              }
              {
                mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLC_54, ll_backend__opt_util__TouchLCS_55, &ll_backend__opt_util__Touch_4);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_util__Touch_4;
  }
}

static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasIncr_3,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasDecr_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__STATE_VARIABLE_HasDecr_5 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4;
            *ll_backend__opt_util__STATE_VARIABLE_HasIncr_3 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Uinstr_12;
            MR_Word ll_backend__opt_util__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26;
            MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27;
            MR_String ll_backend__opt_util__V_13_13;
            MR_Integer ll_backend__opt_util__V_17_17;
            MR_String ll_backend__opt_util__V_18_18;
            MR_Word ll_backend__opt_util__V_19_19;
            MR_Integer ll_backend__opt_util__V_20_20;

            ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_25_25, (MR_Integer) 0)));
            ll_backend__opt_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_25_25, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 24)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
                ll_backend__opt_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 2)));
                ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 3)));
                ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26 = (MR_Integer) 1;
              }
            else
              ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2;
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 25)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
                ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27 = (MR_Integer) 1;
              }
            else
              ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_14;
              MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26;
              MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27;

              ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0__tmp_copy_4;
              ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_mem_ref_5_p_0(
  MR_Word ll_backend__opt_util__MemRef_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_13,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_14,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_15,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_16)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__MemRef_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_util__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));

          {
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_23, ll_backend__opt_util__STATE_VARIABLE_R_0_13, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_0_15, ll_backend__opt_util__STATE_VARIABLE_F_16);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_util__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));

          {
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_9, ll_backend__opt_util__STATE_VARIABLE_R_0_13, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_0_15, ll_backend__opt_util__STATE_VARIABLE_F_16);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_util__CellRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__FieldNumRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 2)));
          MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_17_17;
          MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_18_18;
          MR_Word ll_backend__opt_util___MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 1)));

          {
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__CellRval_10, ll_backend__opt_util__STATE_VARIABLE_R_0_13, &ll_backend__opt_util__STATE_VARIABLE_R_17_17, ll_backend__opt_util__STATE_VARIABLE_F_0_15, &ll_backend__opt_util__STATE_VARIABLE_F_18_18);
          }
          {
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__FieldNumRval_12, ll_backend__opt_util__STATE_VARIABLE_R_17_17, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_18_18, ll_backend__opt_util__STATE_VARIABLE_F_16);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
  MR_Word ll_backend__opt_util__Rval_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_19,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_20,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_21,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        switch (MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Lval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval_6, (MR_Integer) 0)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_9, ll_backend__opt_util__STATE_VARIABLE_R_0_19, ll_backend__opt_util__STATE_VARIABLE_R_20, ll_backend__opt_util__STATE_VARIABLE_F_0_21, ll_backend__opt_util__STATE_VARIABLE_F_22);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.count_temps_rval\'/5", (MR_String) "var");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__SubRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util___Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval_6, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRval_12;

                ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__opt_util__STATE_VARIABLE_R_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_19;
                  *ll_backend__opt_util__STATE_VARIABLE_F_22 = ll_backend__opt_util__STATE_VARIABLE_F_0_21;
                }
                break;
              case (MR_Integer) 1:
                {
                  *ll_backend__opt_util__STATE_VARIABLE_R_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_19;
                  *ll_backend__opt_util__STATE_VARIABLE_F_22 = ll_backend__opt_util__STATE_VARIABLE_F_0_21;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__SubRvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util___Unop_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRvalA_15;

                    ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__opt_util__SubRvalB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 3)));
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_25_25;
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_26_26;
                  MR_Word ll_backend__opt_util__SubRvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util___Binop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__SubRvalA_40, ll_backend__opt_util__STATE_VARIABLE_R_0_19, &ll_backend__opt_util__STATE_VARIABLE_R_25_25, ll_backend__opt_util__STATE_VARIABLE_F_0_21, &ll_backend__opt_util__STATE_VARIABLE_F_26_26);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRvalB_17;
                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_19 = ll_backend__opt_util__STATE_VARIABLE_R_25_25;
                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_21 = ll_backend__opt_util__STATE_VARIABLE_F_26_26;

                    ll_backend__opt_util__STATE_VARIABLE_F_0_21 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_21;
                    ll_backend__opt_util__STATE_VARIABLE_R_0_19 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_19;
                    ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__opt_util__MemRef_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__count_temps_mem_ref_5_p_0(ll_backend__opt_util__MemRef_18, ll_backend__opt_util__STATE_VARIABLE_R_0_19, ll_backend__opt_util__STATE_VARIABLE_R_20, ll_backend__opt_util__STATE_VARIABLE_F_0_21, ll_backend__opt_util__STATE_VARIABLE_F_22);
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
ll_backend__opt_util__count_temps_lval_5_p_0(
  MR_Word ll_backend__opt_util__Lval_6,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_23,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_24,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_25,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_26)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__Lval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
          *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));
          MR_Word ll_backend__opt_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Lval_6, (MR_Integer) 0)));

          switch (ll_backend__opt_util__V_47_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__int__max_3_p_0(ll_backend__opt_util__V_46_46, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
                }
                *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__int__max_3_p_0(ll_backend__opt_util__V_46_46, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24);
                }
                *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__Rval_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_45, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_44, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__Rval_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_43, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__Rval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_42, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__opt_util__Rval_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_41, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__BaseAddrRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__FieldNumRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 3)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_32_32;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_33_33;
              MR_Word ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__BaseAddrRval_19, ll_backend__opt_util__STATE_VARIABLE_R_0_23, &ll_backend__opt_util__STATE_VARIABLE_R_32_32, ll_backend__opt_util__STATE_VARIABLE_F_0_25, &ll_backend__opt_util__STATE_VARIABLE_F_33_33);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__FieldNumRval_20, ll_backend__opt_util__STATE_VARIABLE_R_32_32, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_33_33, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_21, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.count_temps_lval\'/5", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Output_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__DestLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 0)));
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_27_27;
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_28_28;
            MR_Word ll_backend__opt_util___VarType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util___IsDummy_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 2)));
            MR_Word ll_backend__opt_util___OrigType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 3)));
            MR_String ll_backend__opt_util___VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 4)));
            MR_Word ll_backend__opt_util___MaybeForeignType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 5)));
            MR_Word ll_backend__opt_util___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 6)));

            {
              ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__DestLval_16, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_27_27, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Outputs_13;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_27_27;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_28_28;

              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Input_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__ArgRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 4)));
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_27_27;
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_28_28;
            MR_String ll_backend__opt_util___VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util___VarType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util___IsDummy_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 2)));
            MR_Word ll_backend__opt_util___OrigType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 3)));
            MR_Word ll_backend__opt_util___MaybeForeignType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 5)));
            MR_Word ll_backend__opt_util___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 6)));

            {
              ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ArgRval_20, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_27_27, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Inputs_13;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_27_27;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_28_28;

              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Comp_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Comps_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_20_20;
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_21_21;

            switch (MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
                  ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__opt_util__Inputs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Comp_12, (MR_Integer) 0)));

                  {
                    ll_backend__opt_util__count_temps_inputs_5_p_0(ll_backend__opt_util__Inputs_31, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_20_20, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_21_21);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Outputs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Comp_12, (MR_Integer) 0)));

                  {
                    ll_backend__opt_util__count_temps_outputs_5_p_0(ll_backend__opt_util__Outputs_32, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_20_20, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_21_21);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_12, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
                      ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
                      ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
                      ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
                      ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
                    }
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Comps_13;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_20_20;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_21_21;

              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__opt_util__Uinstr_4;
        MR_Word ll_backend__opt_util__Instrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__HeadLabels_9;
        MR_Word ll_backend__opt_util__HeadCodeAddrs_10;
        MR_Word ll_backend__opt_util__TailLabels_11;
        MR_Word ll_backend__opt_util__TailCodeAddrs_12;
        MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_String ll_backend__opt_util__V_5_5;

        ll_backend__opt_util__Uinstr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
        ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
        {
          ll_backend__opt_util__instr_labels_3_p_0(ll_backend__opt_util__Uinstr_4, &ll_backend__opt_util__HeadLabels_9, &ll_backend__opt_util__HeadCodeAddrs_10);
        }
        {
          ll_backend__opt_util__instr_list_labels_3_p_0(ll_backend__opt_util__Instrs_6, &ll_backend__opt_util__TailLabels_11, &ll_backend__opt_util__TailCodeAddrs_12);
        }
        {
          *ll_backend__opt_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__HeadLabels_9, ll_backend__opt_util__TailLabels_11);
        }
        {
          *ll_backend__opt_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__opt_util__HeadCodeAddrs_10, ll_backend__opt_util__TailCodeAddrs_12);
        }
      }
  }
}

static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
  MR_Word ll_backend__opt_util__MaybeFixedLabel_7,
  MR_Word ll_backend__opt_util__MaybeLayoutLabel_8,
  MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_9,
  MR_Word ll_backend__opt_util__MaybeSubLabel_10,
  MR_Word ll_backend__opt_util__MaybeDefLabel_11,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Labels_18)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_20_20;
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_21_21;
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_22_22;
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_23_23;

    if ((ll_backend__opt_util__MaybeFixedLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_util__STATE_VARIABLE_Labels_20_20 = ll_backend__opt_util__STATE_VARIABLE_Labels_19_19;
    else
      {
        MR_Word ll_backend__opt_util__FixedLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFixedLabel_7, (MR_Integer) 0)));

        {
          ll_backend__opt_util__STATE_VARIABLE_Labels_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_20_20, 0) = ((MR_Box) (ll_backend__opt_util__FixedLabel_13));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_20_20, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_19_19));
        }
      }
    if ((ll_backend__opt_util__MaybeLayoutLabel_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_util__STATE_VARIABLE_Labels_21_21 = ll_backend__opt_util__STATE_VARIABLE_Labels_20_20;
    else
      {
        MR_Word ll_backend__opt_util__LayoutLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLayoutLabel_8, (MR_Integer) 0)));

        {
          ll_backend__opt_util__STATE_VARIABLE_Labels_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_21_21, 0) = ((MR_Box) (ll_backend__opt_util__LayoutLabel_14));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_21_21, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_20_20));
        }
      }
    if ((ll_backend__opt_util__MaybeOnlyLayoutLabel_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_util__STATE_VARIABLE_Labels_22_22 = ll_backend__opt_util__STATE_VARIABLE_Labels_21_21;
    else
      {
        MR_Word ll_backend__opt_util__OnlyLayoutLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeOnlyLayoutLabel_9, (MR_Integer) 0)));

        {
          ll_backend__opt_util__STATE_VARIABLE_Labels_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_22_22, 0) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel_15));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_22_22, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_21_21));
        }
      }
    if ((ll_backend__opt_util__MaybeSubLabel_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_util__STATE_VARIABLE_Labels_23_23 = ll_backend__opt_util__STATE_VARIABLE_Labels_22_22;
    else
      {
        MR_Word ll_backend__opt_util__SubLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSubLabel_10, (MR_Integer) 0)));

        {
          ll_backend__opt_util__STATE_VARIABLE_Labels_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_23_23, 0) = ((MR_Box) (ll_backend__opt_util__SubLabel_16));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_23_23, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_22_22));
        }
      }
    if ((ll_backend__opt_util__MaybeDefLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__STATE_VARIABLE_Labels_18 = ll_backend__opt_util__STATE_VARIABLE_Labels_23_23;
    else
      {
        MR_Word ll_backend__opt_util__DefLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeDefLabel_11, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__STATE_VARIABLE_Labels_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__DefLabel_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_23_23));
        }
      }
  }
}

static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevLabels_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__opt_util__STATE_VARIABLE_RevLabels_3 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2;
        else
          {
            MR_Word ll_backend__opt_util__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13;

            if ((ll_backend__opt_util__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2;
            else
              {
                MR_Word ll_backend__opt_util__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel_7, (MR_Integer) 0)));

                {
                  ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13, 0) = ((MR_Box) (ll_backend__opt_util__Label_10));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__MaybeLabels_8;
              MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13;

              ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__Labels_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__opt_util__Labels_3 = ll_backend__opt_util__HeadVar__2_2;
        else
          {
            MR_Word ll_backend__opt_util__CodeAddr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__Labels1_10;
            MR_Word ll_backend__opt_util__Label_9;

            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_5)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_5, (MR_Integer) 0)));
                {
                  ll_backend__opt_util__Labels1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__Labels1_10, 0) = ((MR_Box) (ll_backend__opt_util__Label_9));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__Labels1_10, 1) = ((MR_Box) (ll_backend__opt_util__HeadVar__2_2));
                }
              }
            else
              ll_backend__opt_util__Labels1_10 = ll_backend__opt_util__HeadVar__2_2;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rest_6;
              MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Labels1_10;

              ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
  MR_Word ll_backend__opt_util__Uinstr_4,
  MR_Word * ll_backend__opt_util__Labels_5,
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__Uinstr_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Instrs_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Integer ll_backend__opt_util__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__opt_util__instr_list_labels_3_p_0(ll_backend__opt_util__Instrs_79, ll_backend__opt_util__Labels_5, ll_backend__opt_util__CodeAddrs_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_util__Target_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Ret_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_101_101;
              MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));

              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ll_backend__opt_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_101_101, 0) = ((MR_Box) (ll_backend__opt_util__Ret_60));
                MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__CodeAddrs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Target_59));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_101_101));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              if ((ll_backend__opt_util__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word ll_backend__opt_util__Addr_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_115_115, (MR_Integer) 0)));

                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__CodeAddrs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_111));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__Addr_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__CodeAddrs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_66));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__MaybeLabels_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__RevLabels_82;
              MR_Word ll_backend__opt_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(ll_backend__opt_util__MaybeLabels_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevLabels_82);
              }
              {
                mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__RevLabels_82, ll_backend__opt_util__Labels_5);
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 8:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Addr_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__CodeAddrs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_105));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 11:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 12:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 13:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 14:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 15:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 16:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 17:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 18:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 19:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 20:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 21:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 22:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 23:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 24:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 25:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 26:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.instr_labels_2\'/3", (MR_String) "decr_sp_and_return");
                return;
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__MaybeFixLabel_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__MaybeLayoutLabel_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__MaybeSubLabel_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeDefLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 10)));

              {
                ll_backend__opt_util__foreign_proc_labels_6_p_0(ll_backend__opt_util__MaybeFixLabel_86, ll_backend__opt_util__MaybeLayoutLabel_87, ll_backend__opt_util__MaybeOnlyLayoutLabel_88, ll_backend__opt_util__MaybeSubLabel_89, ll_backend__opt_util__MaybeDefLabel_90, ll_backend__opt_util__Labels_5);
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 28:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__opt_util__Child_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Child_70));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__opt_util__Label_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_72));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 31:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_util__Label_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_109));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_util__Label_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_107));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 34:
            {
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 6:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 9:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 11:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 12:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 13:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 14:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 15:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 16:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 17:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 18:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 19:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 20:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 21:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 22:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 23:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 24:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 25:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 26:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 27:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 28:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 29:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 30:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 31:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 32:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 33:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 34:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__opt_util__Uinstr_3;
            MR_Word ll_backend__opt_util__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_String ll_backend__opt_util__V_4_4;
            MR_Word ll_backend__opt_util__V_8_8;

            ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_7_7, (MR_Integer) 0)));
            ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_7_7, (MR_Integer) 1)));
            {
              ll_backend__opt_util__V_8_8 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr_3);
            }
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_8_8 == (MR_Integer) 0);
            if (ll_backend__opt_util__succeeded)
              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_5;

                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__opt_util__Component_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Components_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__opt_util__Component_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__opt_util__CanBranchAway_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 1)));
                      MR_Word ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 2)));
                      MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 3)));
                      MR_String ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 4)));

                      switch (ll_backend__opt_util__CanBranchAway_11) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                }
                break;
            }
          }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Input_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Refers_4;
    MR_Word ll_backend__opt_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 0)));
    MR_Word ll_backend__opt_util__IsDummy_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 2)));
    MR_Word ll_backend__opt_util___Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 1)));
    MR_Word ll_backend__opt_util___OrigType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 3)));
    MR_String ll_backend__opt_util___Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 4)));
    MR_Word ll_backend__opt_util___MaybeForeign_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 5)));
    MR_Word ll_backend__opt_util___BoxPolicy_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 6)));

    switch (ll_backend__opt_util__IsDummy_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__opt_util__Refers_4 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_5);
        }
        break;
    }
    return ll_backend__opt_util__Refers_4;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Input_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Refers_4;
    MR_Word ll_backend__opt_util__IsDummy_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 2)));
    MR_Word ll_backend__opt_util__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 4)));
    MR_String ll_backend__opt_util___Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 0)));
    MR_Word ll_backend__opt_util___Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 1)));
    MR_Word ll_backend__opt_util___OrigType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 3)));
    MR_Word ll_backend__opt_util___MaybeForeign_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 5)));
    MR_Word ll_backend__opt_util___BoxPolicy_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 6)));

    switch (ll_backend__opt_util__IsDummy_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__opt_util__Refers_4 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_9);
        }
        break;
    }
    return ll_backend__opt_util__Refers_4;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1)
{
  {
    MR_Box ll_backend__opt_util__wrapper_arg_2;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
    MR_Word ll_backend__opt_util__conv1_Refers_4;

    {
      ll_backend__opt_util__conv1_Refers_4 = ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv1_Refers_4));
    return ll_backend__opt_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1)
{
  {
    MR_Box ll_backend__opt_util__wrapper_arg_2;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
    MR_Word ll_backend__opt_util__conv0_Refers_4;

    {
      ll_backend__opt_util__conv0_Refers_4 = ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Refers_4));
    return ll_backend__opt_util__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__Component_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Refers_4;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Component_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_util__Inputs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Component_3, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__V_18_18;

          {
            ll_backend__opt_util__V_18_18 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[5], ll_backend__opt_util__Inputs_5);
          }
          {
            mercury__bool__or_list_2_p_0(ll_backend__opt_util__V_18_18, &ll_backend__opt_util__Refers_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_util__Outputs_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Component_3, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__V_16_16;

          {
            ll_backend__opt_util__V_16_16 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[6], ll_backend__opt_util__Outputs_6);
          }
          {
            mercury__bool__or_list_2_p_0(ll_backend__opt_util__V_16_16, &ll_backend__opt_util__Refers_4);
          }
        }
        break;
      case (MR_Integer) 3:
        ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
        break;
    }
    return ll_backend__opt_util__Refers_4;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_util__Rval1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__Rval2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ll_backend__opt_util__V_8_8;
          MR_Word ll_backend__opt_util__V_9_9;
          MR_Word ll_backend__opt_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

          {
            ll_backend__opt_util__V_8_8 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval1_5);
          }
          {
            ll_backend__opt_util__V_9_9 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval2_7);
          }
          {
            ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_8_8, ll_backend__opt_util__V_9_9);
          }
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37,
  MR_String * ll_backend__opt_util__SucceedComment_9,
  MR_Word * ll_backend__opt_util__Remain_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr0_6;
        MR_Word ll_backend__opt_util__Instrs0_7;
        MR_Word ll_backend__opt_util__Uinstr_11;
        MR_String ll_backend__opt_util__Comment_12;
        MR_Word ll_backend__opt_util__V_38_38;
        MR_Word ll_backend__opt_util__V_39_39;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__opt_util__Uinstr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_6, (MR_Integer) 0)));
            ll_backend__opt_util__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_6, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_39_39 == (MR_Integer) 1);
                  }
              }
            if (ll_backend__opt_util__succeeded)
              {
                *ll_backend__opt_util__SucceedComment_9 = ll_backend__opt_util__Comment_12;
                *ll_backend__opt_util__Remain_10 = ll_backend__opt_util__Instrs0_7;
                *ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36;
                ll_backend__opt_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42;

                switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) {
                  default:
                    ll_backend__opt_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ll_backend__opt_util__Uinstr_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 1:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    ll_backend__opt_util__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__opt_util__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) {
                      default:
                        ll_backend__opt_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__opt_util__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 1)));
                          MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 2)));
                          MR_Word ll_backend__opt_util__V_40_40;
                          MR_Word ll_backend__opt_util__V_41_41;

                          {
                            ll_backend__opt_util__V_40_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_13);
                          }
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_40_40 == (MR_Integer) 0);
                          if (ll_backend__opt_util__succeeded)
                            {
                              {
                                ll_backend__opt_util__V_41_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_14);
                              }
                              ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_41_41 == (MR_Integer) 0);
                            }
                        }
                        break;
                      case (MR_Integer) 9:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 12:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 13:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 14:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 15:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 20:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 21:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 22:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 23:
                        ll_backend__opt_util__succeeded = MR_TRUE;
                        break;
                    }
                    break;
                }
                if (ll_backend__opt_util__succeeded)
                  {
                    {
                      ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_6));
                      MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_7;
                      MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0__tmp_copy_36 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42;

                      ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0__tmp_copy_36;
                      ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_2_4_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3,
  MR_Word * ll_backend__opt_util__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Instr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_8, (MR_Integer) 0)));
            MR_String ll_backend__opt_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_8, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) {
              default:
                ll_backend__opt_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                ll_backend__opt_util__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) {
                  default:
                    ll_backend__opt_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__opt_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
                      MR_Word ll_backend__opt_util__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 2)));
                      MR_Word ll_backend__opt_util__V_20_20;
                      MR_Word ll_backend__opt_util__V_21_21;

                      {
                        ll_backend__opt_util__V_20_20 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_16);
                      }
                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_20_20 == (MR_Integer) 0);
                      if (ll_backend__opt_util__succeeded)
                        {
                          {
                            ll_backend__opt_util__V_21_21 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_17);
                          }
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_21_21 == (MR_Integer) 0);
                        }
                    }
                    break;
                }
                break;
            }
            if (ll_backend__opt_util__succeeded)
              {
                MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22;

                {
                  ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_8));
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_9;
                  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22;

                  ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0__tmp_copy_2;
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                *ll_backend__opt_util__HeadVar__4_4 = ll_backend__opt_util__HeadVar__1_1;
                *ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_2_4_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0_14,
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Between_15,
  MR_Word * ll_backend__opt_util__After_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr0_5;
        MR_Word ll_backend__opt_util__Instrs0_6;
        MR_Word ll_backend__opt_util__Uinstr0_9;
        MR_String ll_backend__opt_util__V_10_10;
        MR_Word ll_backend__opt_util__V_11_11;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
            ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = MR_FALSE;
              }
            else
              {
                MR_Word ll_backend__opt_util__V_16_16;
                MR_Word ll_backend__opt_util__V_17_17;

                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_17_17 == (MR_Integer) 0);
                      }
                  }
                if (ll_backend__opt_util__succeeded)
                  {
                    *ll_backend__opt_util__After_8 = ll_backend__opt_util__Instrs0_6;
                    *ll_backend__opt_util__STATE_VARIABLE_Between_15 = ll_backend__opt_util__STATE_VARIABLE_Between_0_14;
                    ll_backend__opt_util__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_20_20;

                    {
                      MR_Word ll_backend__opt_util__V_18_18;
                      MR_Word ll_backend__opt_util__V_19_19;

                      {
                        ll_backend__opt_util__V_18_18 = ll_backend__opt_util__can_instr_branch_away_1_f_0(ll_backend__opt_util__Uinstr0_9);
                      }
                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_18_18 == (MR_Integer) 0);
                      if (ll_backend__opt_util__succeeded)
                        {
                          {
                            ll_backend__opt_util__V_19_19 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(ll_backend__opt_util__Uinstr0_9);
                          }
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_19_19 == (MR_Integer) 0);
                        }
                    }
                    if (!(ll_backend__opt_util__succeeded))
                      {
                        MR_Word ll_backend__opt_util__CodeAddr_13;
                        MR_Word ll_backend__opt_util__V_12_12;

                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
                            ll_backend__opt_util__CodeAddr_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 2)));
                            if ((ll_backend__opt_util__CodeAddr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                              ll_backend__opt_util__succeeded = MR_TRUE;
                            else
                            if ((ll_backend__opt_util__CodeAddr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                              ll_backend__opt_util__succeeded = MR_TRUE;
                            else
                              ll_backend__opt_util__succeeded = MR_FALSE;
                          }
                      }
                    if (ll_backend__opt_util__succeeded)
                      {
                        {
                          ll_backend__opt_util__STATE_VARIABLE_Between_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Between_20_20, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Between_20_20, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Between_0_14));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_6;
                          MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0__tmp_copy_14 = ll_backend__opt_util__STATE_VARIABLE_Between_20_20;

                          ll_backend__opt_util__STATE_VARIABLE_Between_0_14 = ll_backend__opt_util__STATE_VARIABLE_Between_0__tmp_copy_14;
                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_label_3_p_0(
  MR_Word ll_backend__opt_util__Label0_4,
  MR_Word * ll_backend__opt_util__Label_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__NewLabel_7;
    MR_Word ll_backend__opt_util__TypeCtorInfo_8_8 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    MR_Box ll_backend__opt_util__conv0_NewLabel_7;

    {
      ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__ReplMap_6, ((MR_Box) (ll_backend__opt_util__Label0_4)), &ll_backend__opt_util__conv0_NewLabel_7);
    }
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__NewLabel_7 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_7);
        ll_backend__opt_util__succeeded = MR_TRUE;
      }
    if (ll_backend__opt_util__succeeded)
      *ll_backend__opt_util__Label_5 = ll_backend__opt_util__NewLabel_7;
    else
      *ll_backend__opt_util__Label_5 = ll_backend__opt_util__Label0_4;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__MaybeLabel0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__MaybeLabels0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__MaybeLabel_7;
        MR_Word ll_backend__opt_util__MaybeLabels_8;

        if ((ll_backend__opt_util__MaybeLabel0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__MaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word ll_backend__opt_util__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel0_5, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Label_11;
            MR_Word ll_backend__opt_util__NewLabel_15;
            MR_Word ll_backend__opt_util__TypeCtorInfo_8_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Box ll_backend__opt_util__conv0_NewLabel_15;

            {
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_16, ll_backend__opt_util__TypeCtorInfo_8_16, ll_backend__opt_util__HeadVar__3_3, ((MR_Box) (ll_backend__opt_util__Label0_10)), &ll_backend__opt_util__conv0_NewLabel_15);
            }
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__NewLabel_15 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_15);
                ll_backend__opt_util__succeeded = MR_TRUE;
              }
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__Label_11 = ll_backend__opt_util__NewLabel_15;
            else
              ll_backend__opt_util__Label_11 = ll_backend__opt_util__Label0_10;
            {
              ll_backend__opt_util__MaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel_7, 0) = ((MR_Box) (ll_backend__opt_util__Label_11));
            }
          }
        {
          ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(ll_backend__opt_util__MaybeLabels0_6, &ll_backend__opt_util__MaybeLabels_8, ll_backend__opt_util__HeadVar__3_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__MaybeLabel_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__MaybeLabels_8));
        }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_code_addr_3_p_0(
  MR_Word ll_backend__opt_util__Addr0_4,
  MR_Word * ll_backend__opt_util__Addr_5,
  MR_Word ll_backend__opt_util__ReplMap_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Addr0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__opt_util__Addr_5 = ll_backend__opt_util__Addr0_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_util__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Addr0_4, (MR_Integer) 0)));
          MR_Word ll_backend__opt_util__Label_8;
          MR_Word ll_backend__opt_util__NewLabel_16;
          MR_Word ll_backend__opt_util__TypeCtorInfo_8_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
          MR_Box ll_backend__opt_util__conv0_NewLabel_16;

          {
            ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_17, ll_backend__opt_util__TypeCtorInfo_8_17, ll_backend__opt_util__ReplMap_6, ((MR_Box) (ll_backend__opt_util__Label0_7)), &ll_backend__opt_util__conv0_NewLabel_16);
          }
          if (ll_backend__opt_util__succeeded)
            {
              ll_backend__opt_util__NewLabel_16 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_16);
              ll_backend__opt_util__succeeded = MR_TRUE;
            }
          if (ll_backend__opt_util__succeeded)
            ll_backend__opt_util__Label_8 = ll_backend__opt_util__NewLabel_16;
          else
            ll_backend__opt_util__Label_8 = ll_backend__opt_util__Label0_7;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__Addr_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_8));
          }
        }
        break;
      case (MR_Integer) 2:
        *ll_backend__opt_util__Addr_5 = ll_backend__opt_util__Addr0_4;
        break;
      case (MR_Integer) 3:
        *ll_backend__opt_util__Addr_5 = ll_backend__opt_util__Addr0_4;
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_comps_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__ReplMap_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Comp0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Comps0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Comp_7;
        MR_Word ll_backend__opt_util__Comps_8;

        switch (MR_tag((MR_Word) ll_backend__opt_util__Comp0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__Comp_7 = ll_backend__opt_util__Comp0_5;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ll_backend__opt_util__Comp_7 = ll_backend__opt_util__Comp0_5;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp0_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                ll_backend__opt_util__Comp_7 = ll_backend__opt_util__Comp0_5;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Label0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp0_5, (MR_Integer) 1)));
                  MR_Word ll_backend__opt_util__Label_24;
                  MR_Word ll_backend__opt_util__NewLabel_28;
                  MR_Word ll_backend__opt_util__TypeCtorInfo_8_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                  MR_Box ll_backend__opt_util__conv0_NewLabel_28;

                  {
                    ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_29, ll_backend__opt_util__TypeCtorInfo_8_29, ll_backend__opt_util__ReplMap_3, ((MR_Box) (ll_backend__opt_util__Label0_23)), &ll_backend__opt_util__conv0_NewLabel_28);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      ll_backend__opt_util__NewLabel_28 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_28);
                      ll_backend__opt_util__succeeded = MR_TRUE;
                    }
                  if (ll_backend__opt_util__succeeded)
                    ll_backend__opt_util__Label_24 = ll_backend__opt_util__NewLabel_28;
                  else
                    ll_backend__opt_util__Label_24 = ll_backend__opt_util__Label0_23;
                  {
                    ll_backend__opt_util__Comp_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_7, 1) = ((MR_Box) (ll_backend__opt_util__Label_24));
                  }
                }
                break;
            }
            break;
        }
        {
          ll_backend__opt_util__replace_labels_comps_3_p_0(ll_backend__opt_util__Comps0_6, &ll_backend__opt_util__Comps_8, ll_backend__opt_util__ReplMap_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Comp_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comps_8));
        }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_list_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word ll_backend__opt_util__ReplMap_3,
  MR_Word ll_backend__opt_util__ReplData_4,
  MR_Word ll_backend__opt_util__ReplLabel_5)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr_11;
        MR_Word ll_backend__opt_util__Instrs_12;
        MR_Word ll_backend__opt_util__InstrLabel_16;
        MR_String ll_backend__opt_util__Comment_17;
        MR_Word ll_backend__opt_util__V_19_19;

        ll_backend__opt_util__succeeded = (ll_backend__opt_util__ReplLabel_5 == (MR_Integer) 1);
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 0)));
            ll_backend__opt_util__Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__InstrLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_19_19, (MR_Integer) 1)));
          }
        if (ll_backend__opt_util__succeeded)
          {
            MR_Word ll_backend__opt_util__ReplInstrLabel_18;
            MR_Word ll_backend__opt_util__V_20_20;
            MR_Word ll_backend__opt_util__NewLabel_24;
            MR_Word ll_backend__opt_util__TypeCtorInfo_8_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Box ll_backend__opt_util__conv0_NewLabel_24;

            {
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_25, ll_backend__opt_util__TypeCtorInfo_8_25, ll_backend__opt_util__ReplMap_3, ((MR_Box) (ll_backend__opt_util__InstrLabel_16)), &ll_backend__opt_util__conv0_NewLabel_24);
            }
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__NewLabel_24 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_24);
                ll_backend__opt_util__succeeded = MR_TRUE;
              }
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__ReplInstrLabel_18 = ll_backend__opt_util__NewLabel_24;
            else
              ll_backend__opt_util__ReplInstrLabel_18 = ll_backend__opt_util__InstrLabel_16;
            {
              ll_backend__opt_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_20_20, 1) = ((MR_Box) (ll_backend__opt_util__ReplInstrLabel_18));
            }
            {
              ll_backend__opt_util__Instr_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 0) = ((MR_Box) (ll_backend__opt_util__V_20_20));
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 1) = ((MR_Box) (ll_backend__opt_util__Comment_17));
            }
          }
        else
          {
            MR_Word ll_backend__opt_util__Uinstr0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 0)));
            MR_String ll_backend__opt_util__Comment_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__Uinstr_32;

            {
              ll_backend__opt_util__replace_labels_instr_4_p_0(ll_backend__opt_util__Uinstr0_30, &ll_backend__opt_util__Uinstr_32, ll_backend__opt_util__ReplMap_3, ll_backend__opt_util__ReplData_4);
            }
            {
              ll_backend__opt_util__Instr_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 0) = ((MR_Box) (ll_backend__opt_util__Uinstr_32));
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 1) = ((MR_Box) (ll_backend__opt_util__Comment_31));
            }
          }
        {
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__opt_util__Instrs0_10, &ll_backend__opt_util__Instrs_12, ll_backend__opt_util__ReplMap_3, ll_backend__opt_util__ReplData_4, ll_backend__opt_util__ReplLabel_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs_12));
        }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_4_p_0(
  MR_Word ll_backend__opt_util__Instr0_5,
  MR_Word * ll_backend__opt_util__Instr_6,
  MR_Word ll_backend__opt_util__ReplMap_7,
  MR_Word ll_backend__opt_util__ReplData_8)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
    MR_String ll_backend__opt_util__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
    MR_Word ll_backend__opt_util__Uinstr_11;

    {
      ll_backend__opt_util__replace_labels_instr_4_p_0(ll_backend__opt_util__Uinstr0_9, &ll_backend__opt_util__Uinstr_11, ll_backend__opt_util__ReplMap_7, ll_backend__opt_util__ReplData_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__opt_util__Instr_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__opt_util__Uinstr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__opt_util__Comment_10));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
  MR_Box ll_backend__opt_util__closure_arg)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2440__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
  MR_Box ll_backend__opt_util__closure_arg)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2421__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
  MR_Box ll_backend__opt_util__closure_arg)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2412__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
    return ll_backend__opt_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
  MR_Box ll_backend__opt_util__closure_arg)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2403__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0(
  MR_Word ll_backend__opt_util__Uinstr0_5,
  MR_Word * ll_backend__opt_util__Uinstr_6,
  MR_Word ll_backend__opt_util__ReplMap_7,
  MR_Word ll_backend__opt_util__ReplData_8)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__opt_util__R_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__F_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Instrs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__Instrs_19;

              {
                ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__opt_util__Instrs0_18, &ll_backend__opt_util__Instrs_19, ll_backend__opt_util__ReplMap_7, ll_backend__opt_util__ReplData_8, (MR_Integer) 0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__R_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__F_17));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Instrs_19));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__Lval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Lval_22;
              MR_Word ll_backend__opt_util__Rval_23;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__opt_util__Lval_22 = ll_backend__opt_util__Lval0_20;
                    ll_backend__opt_util__Rval_23 = ll_backend__opt_util__Rval0_21;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_20, &ll_backend__opt_util__Lval_22, ll_backend__opt_util__ReplMap_7);
                    }
                    {
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_21, &ll_backend__opt_util__Rval_23, ll_backend__opt_util__ReplMap_7);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Rval_23));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval0_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Lval_129;
              MR_Word ll_backend__opt_util__Rval_130;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__opt_util__Lval_129 = ll_backend__opt_util__Lval0_127;
                    ll_backend__opt_util__Rval_130 = ll_backend__opt_util__Rval0_128;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_127, &ll_backend__opt_util__Lval_129, ll_backend__opt_util__ReplMap_7);
                    }
                    {
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_128, &ll_backend__opt_util__Rval_130, ll_backend__opt_util__ReplMap_7);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_129));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Rval_130));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_util__Target_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Return0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__LiveInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__CXT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__GP_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__CM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__Return_30;

              {
                ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Return0_25, &ll_backend__opt_util__Return_30, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Target_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Return_30));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__LiveInfo_26));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__CXT_27));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__GP_28));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__CM_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__NondetFrameInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__MaybeRedoip0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__MaybeRedoip_35;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__MaybeRedoip_35 = ll_backend__opt_util__MaybeRedoip0_32;
                  break;
                case (MR_Integer) 1:
                  if ((ll_backend__opt_util__MaybeRedoip0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__opt_util__MaybeRedoip_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word ll_backend__opt_util__Redoip0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRedoip0_32, (MR_Integer) 0)));
                      MR_Word ll_backend__opt_util__Redoip_34;

                      {
                        ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Redoip0_33, &ll_backend__opt_util__Redoip_34, ll_backend__opt_util__ReplMap_7);
                      }
                      {
                        ll_backend__opt_util__MaybeRedoip_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRedoip_35, 0) = ((MR_Box) (ll_backend__opt_util__Redoip_34));
                      }
                    }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__NondetFrameInfo_31));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeRedoip_35));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_util__Label_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__TypeCtorInfo_184_184 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
              MR_Word ll_backend__opt_util__V_37_37;
              MR_Box ll_backend__opt_util__conv0_V_37_37;

              {
                ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_184_184, ll_backend__opt_util__TypeCtorInfo_184_184, ll_backend__opt_util__ReplMap_7, ((MR_Box) (ll_backend__opt_util__Label_36)), &ll_backend__opt_util__conv0_V_37_37);
              }
              if (ll_backend__opt_util__succeeded)
                {
                  ll_backend__opt_util__V_37_37 = ((MR_Word) ll_backend__opt_util__conv0_V_37_37);
                  ll_backend__opt_util__succeeded = MR_TRUE;
                }
              if (ll_backend__opt_util__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "eliminated label");
                    return;
                  }
                }
              else
                {
                }
              *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__Target0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Target_131;

              {
                ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Target0_38, &ll_backend__opt_util__Target_131, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Target_131));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__MaybeLabels0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__MaybeLabels_40;
              MR_Word ll_backend__opt_util__Rval0_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_133;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_133 = ll_backend__opt_util__Rval0_132;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_132, &ll_backend__opt_util__Rval_133, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(ll_backend__opt_util__MaybeLabels0_39, &ll_backend__opt_util__MaybeLabels_40, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_133));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeLabels_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__opt_util__AffectsLiveness_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lvals0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_String ll_backend__opt_util__Code_43 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__Lvals_44;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lvals_44 = ll_backend__opt_util__Lvals0_42;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(ll_backend__opt_util__Lvals0_42, &ll_backend__opt_util__Lvals_44, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__AffectsLiveness_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lvals_44));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Code_43));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Rval0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_135;
              MR_Word ll_backend__opt_util__Target_136;
              MR_Word ll_backend__opt_util__Target0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_135 = ll_backend__opt_util__Rval0_134;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_134, &ll_backend__opt_util__Rval_135, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Target0_137, &ll_backend__opt_util__Target_136, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_135));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Target_136));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Lval0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_139;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_139 = ll_backend__opt_util__Lval0_138;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_138, &ll_backend__opt_util__Lval_139, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_139));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__opt_util__Lval0_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_141;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_141 = ll_backend__opt_util__Lval0_140;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_140, &ll_backend__opt_util__Lval_141, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_141));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__opt_util__MaybeTag_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__MO_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__Msg_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__Atomic_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__MaybeRegionRval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeReuse0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__MaybeRegionRval_53;
              MR_Word ll_backend__opt_util__MaybeReuse_60;
              MR_Word ll_backend__opt_util__Lval0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__Lval_144;
              MR_Word ll_backend__opt_util__Rval_145;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__opt_util__Lval_144 = ll_backend__opt_util__Lval0_142;
                    ll_backend__opt_util__Rval_145 = ll_backend__opt_util__Rval0_143;
                    ll_backend__opt_util__MaybeRegionRval_53 = ll_backend__opt_util__MaybeRegionRval0_49;
                    ll_backend__opt_util__MaybeReuse_60 = ll_backend__opt_util__MaybeReuse0_50;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_142, &ll_backend__opt_util__Lval_144, ll_backend__opt_util__ReplMap_7);
                    }
                    {
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_143, &ll_backend__opt_util__Rval_145, ll_backend__opt_util__ReplMap_7);
                    }
                    if ((ll_backend__opt_util__MaybeRegionRval0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__opt_util__MaybeRegionRval_53 = ll_backend__opt_util__MaybeRegionRval0_49;
                    else
                      {
                        MR_Word ll_backend__opt_util__RegionRval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval0_49, (MR_Integer) 0)));
                        MR_Word ll_backend__opt_util__RegionRval_52;

                        {
                          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__RegionRval0_51, &ll_backend__opt_util__RegionRval_52, ll_backend__opt_util__ReplMap_7);
                        }
                        {
                          ll_backend__opt_util__MaybeRegionRval_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_53, 0) = ((MR_Box) (ll_backend__opt_util__RegionRval_52));
                        }
                      }
                    if ((ll_backend__opt_util__MaybeReuse0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__opt_util__MaybeReuse_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        MR_Word ll_backend__opt_util__ReuseRval0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse0_50, (MR_Integer) 0)));
                        MR_Word ll_backend__opt_util__MaybeFlagLval0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse0_50, (MR_Integer) 1)));
                        MR_Word ll_backend__opt_util__ReuseRval_56;
                        MR_Word ll_backend__opt_util__MaybeFlagLval_59;

                        {
                          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__ReuseRval0_54, &ll_backend__opt_util__ReuseRval_56, ll_backend__opt_util__ReplMap_7);
                        }
                        if ((ll_backend__opt_util__MaybeFlagLval0_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          ll_backend__opt_util__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        else
                          {
                            MR_Word ll_backend__opt_util__FlagLval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval0_55, (MR_Integer) 0)));
                            MR_Word ll_backend__opt_util__FlagLval_58;

                            {
                              ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__FlagLval0_57, &ll_backend__opt_util__FlagLval_58, ll_backend__opt_util__ReplMap_7);
                            }
                            {
                              ll_backend__opt_util__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_59, 0) = ((MR_Box) (ll_backend__opt_util__FlagLval_58));
                            }
                          }
                        {
                          ll_backend__opt_util__MaybeReuse_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_60, 0) = ((MR_Box) (ll_backend__opt_util__ReuseRval_56));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_60, 1) = ((MR_Box) (ll_backend__opt_util__MaybeFlagLval_59));
                        }
                      }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_144));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeTag_45));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__MO_46));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__Rval_145));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__Msg_47));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__Atomic_48));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__opt_util__MaybeRegionRval_53));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__opt_util__MaybeReuse_60));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__opt_util__Lval0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_147;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_147 = ll_backend__opt_util__Lval0_146;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_146, &ll_backend__opt_util__Lval_147, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_147));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__opt_util__Rval0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_149;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_149 = ll_backend__opt_util__Rval0_148;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_148, &ll_backend__opt_util__Rval_149, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_149));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__opt_util__Rval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_151;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_151 = ll_backend__opt_util__Rval0_150;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_150, &ll_backend__opt_util__Rval_151, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_151));
              }
            }
            break;
          case (MR_Integer) 16:
            *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__opt_util__FillOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__IdRval0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__NumLval0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__AddrLval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__IdRval_67;
              MR_Word ll_backend__opt_util__NumLval_68;
              MR_Word ll_backend__opt_util__AddrLval_69;
              MR_Word ll_backend__opt_util__EmbeddedStackFrame_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__opt_util__IdRval_67 = ll_backend__opt_util__IdRval0_64;
                    ll_backend__opt_util__NumLval_68 = ll_backend__opt_util__NumLval0_65;
                    ll_backend__opt_util__AddrLval_69 = ll_backend__opt_util__AddrLval0_66;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__IdRval0_64, &ll_backend__opt_util__IdRval_67, ll_backend__opt_util__ReplMap_7);
                    }
                    {
                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__NumLval0_65, &ll_backend__opt_util__NumLval_68, ll_backend__opt_util__ReplMap_7);
                    }
                    {
                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__AddrLval0_66, &ll_backend__opt_util__AddrLval_69, ll_backend__opt_util__ReplMap_7);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__FillOp_63));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__EmbeddedStackFrame_152));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__IdRval_67));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__NumLval_68));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__AddrLval_69));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__opt_util__SetOp_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__ValueRval0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__ValueRval_72;
              MR_Word ll_backend__opt_util__EmbeddedStackFrame_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__ValueRval_72 = ll_backend__opt_util__ValueRval0_71;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__ValueRval0_71, &ll_backend__opt_util__ValueRval_72, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__SetOp_70));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__EmbeddedStackFrame_153));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__ValueRval_72));
              }
            }
            break;
          case (MR_Integer) 19:
            *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__opt_util__Lval0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_156;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_156 = ll_backend__opt_util__Lval0_155;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_155, &ll_backend__opt_util__Lval_156, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_156));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__opt_util__Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval0_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_158;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_158 = ll_backend__opt_util__Rval0_157;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_157, &ll_backend__opt_util__Rval_158, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_158));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Reason_74));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__opt_util__Lval0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_160;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_160 = ll_backend__opt_util__Lval0_159;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_159, &ll_backend__opt_util__Lval_160, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_160));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__opt_util__Rval0_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_162;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Rval_162 = ll_backend__opt_util__Rval0_161;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_161, &ll_backend__opt_util__Rval_162, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_162));
              }
            }
            break;
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
            *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__Decls_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Comps0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__MayCallMercury_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__MaybeFix_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__MaybeLayout_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__MaybeOnlyLayout_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__MaybeSub0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeDef_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__StackSlotRef_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__MayDupl_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 10)));
              MR_Word ll_backend__opt_util__MaybeSub_91;
              MR_Word ll_backend__opt_util__Comps_92;

              if ((ll_backend__opt_util__MaybeFix_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ll_backend__opt_util__FixLabel0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFix_78, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__FixLabel_86;
                  MR_Word ll_backend__opt_util__V_107_107;

                  {
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__FixLabel0_85, &ll_backend__opt_util__FixLabel_86, ll_backend__opt_util__ReplMap_7);
                  }
                  {
                    ll_backend__opt_util__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 3) = ((MR_Box) (ll_backend__opt_util__FixLabel0_85));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 4) = ((MR_Box) (ll_backend__opt_util__FixLabel_86));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__opt_util__V_107_107, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label in C code");
                  }
                }
              if ((ll_backend__opt_util__MaybeLayout_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ll_backend__opt_util__LayoutLabel0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLayout_79, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__LayoutLabel_88;
                  MR_Word ll_backend__opt_util__V_111_111;

                  {
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__LayoutLabel0_87, &ll_backend__opt_util__LayoutLabel_88, ll_backend__opt_util__ReplMap_7);
                  }
                  {
                    ll_backend__opt_util__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_2));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 3) = ((MR_Box) (ll_backend__opt_util__LayoutLabel0_87));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 4) = ((MR_Box) (ll_backend__opt_util__LayoutLabel_88));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__opt_util__V_111_111, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                  }
                }
              if ((ll_backend__opt_util__MaybeOnlyLayout_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeOnlyLayout_80, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__OnlyLayoutLabel_90;
                  MR_Word ll_backend__opt_util__V_115_115;

                  {
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__OnlyLayoutLabel0_89, &ll_backend__opt_util__OnlyLayoutLabel_90, ll_backend__opt_util__ReplMap_7);
                  }
                  {
                    ll_backend__opt_util__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_3));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 3) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel0_89));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 4) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel_90));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__opt_util__V_115_115, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                  }
                }
              if ((ll_backend__opt_util__MaybeSub0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__opt_util__MaybeSub_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__opt_util__Comps_92 = ll_backend__opt_util__Comps0_76;
                }
              else
                {
                  MR_Word ll_backend__opt_util__SubLabel0_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSub0_81, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__SubLabel_94;

                  {
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__SubLabel0_93, &ll_backend__opt_util__SubLabel_94, ll_backend__opt_util__ReplMap_7);
                  }
                  {
                    ll_backend__opt_util__MaybeSub_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSub_91, 0) = ((MR_Box) (ll_backend__opt_util__SubLabel_94));
                  }
                  {
                    ll_backend__opt_util__replace_labels_comps_3_p_0(ll_backend__opt_util__Comps0_76, &ll_backend__opt_util__Comps_92, ll_backend__opt_util__ReplMap_7);
                  }
                }
              if ((ll_backend__opt_util__MaybeDef_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ll_backend__opt_util__DefLabel0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeDef_82, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__DefLabel_96;
                  MR_Word ll_backend__opt_util__V_119_119;

                  {
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__DefLabel0_95, &ll_backend__opt_util__DefLabel_96, ll_backend__opt_util__ReplMap_7);
                  }
                  {
                    ll_backend__opt_util__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_4));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 3) = ((MR_Box) (ll_backend__opt_util__DefLabel0_95));
                    MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 4) = ((MR_Box) (ll_backend__opt_util__DefLabel_96));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__opt_util__V_119_119, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Decls_75));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Comps_92));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__MayCallMercury_77));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__MaybeFix_78));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__MaybeLayout_79));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__MaybeOnlyLayout_80));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__opt_util__MaybeSub_91));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__opt_util__MaybeDef_82));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__opt_util__StackSlotRef_83));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__opt_util__MayDupl_84));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__opt_util__NumConjuncts_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__TSStringIndex_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_164;

              switch (ll_backend__opt_util__ReplData_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_util__Lval_164 = ll_backend__opt_util__Lval0_163;
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_163, &ll_backend__opt_util__Lval_164, ll_backend__opt_util__ReplMap_7);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_164));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__NumConjuncts_97));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__TSStringIndex_98));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__opt_util__Child0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Child_100;
              MR_Word ll_backend__opt_util__Lval0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_166;

              {
                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_165, &ll_backend__opt_util__Lval_166, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Child0_99, &ll_backend__opt_util__Child_100, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_166));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Child_100));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__opt_util__Label0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Lval0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_168;
              MR_Word ll_backend__opt_util__Label_169;

              {
                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_167, &ll_backend__opt_util__Lval_168, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_101, &ll_backend__opt_util__Label_169, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_168));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Label_169));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__opt_util__NumSLots_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Lval_171;

              {
                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_170, &ll_backend__opt_util__Lval_171, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__NumSLots_102));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lval_171));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_util__Lval0_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_174;
              MR_Word ll_backend__opt_util__Rval_175;
              MR_Word ll_backend__opt_util__Label_176;
              MR_Word ll_backend__opt_util__Label0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_173, &ll_backend__opt_util__Rval_175, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_172, &ll_backend__opt_util__Lval_174, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_177, &ll_backend__opt_util__Label_176, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_175));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lval_174));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Label_176));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_util__LCRval0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__LCRval_105;
              MR_Word ll_backend__opt_util__LCSRval_106;
              MR_Word ll_backend__opt_util__Label_178;
              MR_Word ll_backend__opt_util__Label0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCRval0_103, &ll_backend__opt_util__LCRval_105, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCSRval0_104, &ll_backend__opt_util__LCSRval_106, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_179, &ll_backend__opt_util__Label_178, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__LCRval_105));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__LCSRval_106));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Label_178));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__opt_util__LCRval0_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval0_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__LCRval_182;
              MR_Word ll_backend__opt_util__LCSRval_183;

              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCRval0_180, &ll_backend__opt_util__LCRval_182, ll_backend__opt_util__ReplMap_7);
              }
              {
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCSRval0_181, &ll_backend__opt_util__LCSRval_183, ll_backend__opt_util__ReplMap_7);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Uinstr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__LCRval_182));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__LCSRval_183));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__Instrs_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__TypeCtorInfo_8_8 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    MR_Word ll_backend__opt_util__RevInstrs0_5;
    MR_Word ll_backend__opt_util__Livevals_6;
    MR_Word ll_backend__opt_util__RevInstrs_7;

    {
      mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__RevInstrs0_5);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__opt_util__Livevals_6);
    }
    {
      ll_backend__opt_util__propagate_livevals_2_3_p_0(ll_backend__opt_util__RevInstrs0_5, ll_backend__opt_util__Livevals_6, &ll_backend__opt_util__RevInstrs_7);
    }
    {
      mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__RevInstrs_7, ll_backend__opt_util__Instrs_4);
    }
  }
}

void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_p_0(
  MR_Word ll_backend__opt_util__Instrs_3,
  MR_Integer * ll_backend__opt_util__N_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    {
      ll_backend__opt_util__count_incr_hp_2_3_p_0(ll_backend__opt_util__Instrs_3, (MR_Integer) 0, ll_backend__opt_util__N_4);
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__rvals_free_of_lval_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__Forbidden_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__succeeded = MR_TRUE;
        else
          {
            MR_Word ll_backend__opt_util__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Rvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

            {
              ll_backend__opt_util__succeeded = ll_backend__opt_util__rval_free_of_lval_2_p_0(ll_backend__opt_util__Rval_4, ll_backend__opt_util__Forbidden_2);
            }
            if (ll_backend__opt_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rvals_5;

                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
ll_backend__opt_util__rval_free_of_lval_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__Forbidden_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
          default:
            ll_backend__opt_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word ll_backend__opt_util__Rvals_5;

              {
                ll_backend__opt_util__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__opt_util__Lval_3, ll_backend__opt_util__Forbidden_2);
              }
              ll_backend__opt_util__succeeded = !(ll_backend__opt_util__succeeded);
              if (ll_backend__opt_util__succeeded)
                {
                  {
                    ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__opt_util__Lval_3, &ll_backend__opt_util__Rvals_5);
                  }
                  {
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__rvals_free_of_lval_2_p_0(ll_backend__opt_util__Rvals_5, ll_backend__opt_util__Forbidden_2);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.rval_free_of_lval\'/2", (MR_String) "var");
              }
              ll_backend__opt_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_12;

                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
              default:
                ll_backend__opt_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_17;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__opt_util__Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__rval_free_of_lval_2_p_0(ll_backend__opt_util__Rval1_20, ll_backend__opt_util__Forbidden_2);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval2_21;

                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                }
                break;
            }
            break;
        }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__lval_access_rvals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 5:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_util__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_14));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Rval1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_23_23;
              MR_Word ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_23_23, 0) = ((MR_Box) (ll_backend__opt_util__Rval2_22));
                MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval1_21));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_23_23));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Rval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_32));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.lval_access_rvals\'/2", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_1_p_0(
  MR_Word ll_backend__opt_util__Instrs_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__V_7_7;
    MR_Word ll_backend__opt_util__V_8_8;

    {
      ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(ll_backend__opt_util__Instrs_2, (MR_Integer) 0, &ll_backend__opt_util__V_7_7, (MR_Integer) 0, &ll_backend__opt_util__V_8_8);
    }
    ll_backend__opt_util__succeeded = ((MR_Integer) 1 == ll_backend__opt_util__V_7_7);
    if (ll_backend__opt_util__succeeded)
      ll_backend__opt_util__succeeded = ((MR_Integer) 1 == ll_backend__opt_util__V_8_8);
    return ll_backend__opt_util__succeeded;
  }
}

MR_String MR_CALL 
ll_backend__opt_util__format_proc_label_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_String ll_backend__opt_util__HeadVar__2_2;

    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String ll_backend__opt_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ll_backend__opt_util__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer ll_backend__opt_util__Mode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
        MR_String ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_11_11;
        MR_String ll_backend__opt_util__V_12_12;
        MR_String ll_backend__opt_util__V_13_13;
        MR_String ll_backend__opt_util__V_15_15;
        MR_Word ll_backend__opt_util___Module_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util___PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

        {
          ll_backend__opt_util__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Arity_7);
        }
        {
          ll_backend__opt_util__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Mode_8);
        }
        {
          ll_backend__opt_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", ll_backend__opt_util__V_15_15);
        }
        {
          ll_backend__opt_util__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__V_12_12, ll_backend__opt_util__V_13_13);
        }
        {
          ll_backend__opt_util__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__opt_util__V_11_11);
        }
        {
          ll_backend__opt_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__Name_6, ll_backend__opt_util__V_9_9);
        }
      }
    else
      {
        MR_Word ll_backend__opt_util__SpecialPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_String ll_backend__opt_util__TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ll_backend__opt_util__TypeArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer ll_backend__opt_util__Mode_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
        MR_String ll_backend__opt_util__PredName_22;
        MR_Word ll_backend__opt_util__TypeCtor_23;
        MR_String ll_backend__opt_util__V_24_24;
        MR_String ll_backend__opt_util__V_26_26;
        MR_String ll_backend__opt_util__V_27_27;
        MR_String ll_backend__opt_util__V_29_29;
        MR_String ll_backend__opt_util__V_30_30;
        MR_String ll_backend__opt_util__V_31_31;
        MR_String ll_backend__opt_util__V_33_33;
        MR_Word ll_backend__opt_util__V_34_34;
        MR_Word ll_backend__opt_util___Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          ll_backend__opt_util__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__TypeArity_20);
        }
        {
          ll_backend__opt_util__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Mode_21);
        }
        {
          ll_backend__opt_util__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", ll_backend__opt_util__V_33_33);
        }
        {
          ll_backend__opt_util__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__V_30_30, ll_backend__opt_util__V_31_31);
        }
        {
          ll_backend__opt_util__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__opt_util__V_29_29);
        }
        {
          ll_backend__opt_util__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__TypeName_19, ll_backend__opt_util__V_27_27);
        }
        {
          ll_backend__opt_util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_util__V_26_26);
        }
        {
          ll_backend__opt_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_34_34, 0) = ((MR_Box) (ll_backend__opt_util__TypeModule_18));
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_34_34, 1) = ((MR_Box) (ll_backend__opt_util__TypeName_19));
        }
        {
          ll_backend__opt_util__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__TypeCtor_23, 0) = ((MR_Box) (ll_backend__opt_util__V_34_34));
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__TypeCtor_23, 1) = ((MR_Box) (ll_backend__opt_util__TypeArity_20));
        }
        {
          ll_backend__opt_util__PredName_22 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_util__SpecialPredId_17, ll_backend__opt_util__TypeCtor_23);
        }
        {
          ll_backend__opt_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__PredName_22, ll_backend__opt_util__V_24_24);
        }
      }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_util__format_label_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_String ll_backend__opt_util__HeadVar__2_2;

    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__opt_util__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__opt_util__ProcLabel_6);
        }
      }
    else
      {
        MR_Word ll_backend__opt_util__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__opt_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__opt_util__ProcLabel_4);
        }
      }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__FrameSize_7,
  MR_Word * ll_backend__opt_util__Between_8,
  MR_Word * ll_backend__opt_util__Remain_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr0_5;
        MR_Word ll_backend__opt_util__Instrs0_6;
        MR_Word ll_backend__opt_util__Uinstr0_10;
        MR_String ll_backend__opt_util__V_11_11;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__opt_util__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
            ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) {
              default:
                ll_backend__opt_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__opt_util__Between0_13;

                  {
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_13, ll_backend__opt_util__Remain_9);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__opt_util__Between_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_13));
                      }
                      ll_backend__opt_util__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Between0_42;

                  {
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_42, ll_backend__opt_util__Remain_9);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__opt_util__Between_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_42));
                      }
                      ll_backend__opt_util__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) {
                  default:
                    ll_backend__opt_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__opt_util__Lval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
                      MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
                      MR_Word ll_backend__opt_util__V_36_36;
                      MR_Integer ll_backend__opt_util__V_17_17;

                      ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Lval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (ll_backend__opt_util__succeeded)
                        {
                          ll_backend__opt_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_15, (MR_Integer) 1)));
                          {
                            ll_backend__opt_util__V_36_36 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
                          }
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_36_36 == (MR_Integer) 0);
                        }
                      if (ll_backend__opt_util__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_6;

                            ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word ll_backend__opt_util__Instrs2_20;
                          MR_Word ll_backend__opt_util__Instrs1_18;
                          MR_Word ll_backend__opt_util__V_37_37;
                          MR_Word ll_backend__opt_util__V_38_38;
                          MR_Word ll_backend__opt_util__V_39_39;
                          MR_Integer ll_backend__opt_util__V_50_50;
                          MR_Integer ll_backend__opt_util__V_51_51;
                          MR_String ll_backend__opt_util__V_19_19;

                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__Lval_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (ll_backend__opt_util__succeeded)
                            {
                              ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Rval_16)) == (MR_mktag((MR_Integer) 0)));
                              if (ll_backend__opt_util__succeeded)
                                {
                                  ll_backend__opt_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval_16, (MR_Integer) 0)));
                                  ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (ll_backend__opt_util__succeeded)
                                    {
                                      ll_backend__opt_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_37_37, (MR_Integer) 1)));
                                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_50_50);
                                      if (ll_backend__opt_util__succeeded)
                                        {
                                          {
                                            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs0_6, &ll_backend__opt_util__Instrs1_18);
                                          }
                                          ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_18)) == (MR_mktag((MR_Integer) 1)));
                                          if (ll_backend__opt_util__succeeded)
                                            {
                                              ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_18, (MR_Integer) 0)));
                                              ll_backend__opt_util__Instrs2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_18, (MR_Integer) 1)));
                                              ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_38_38, (MR_Integer) 0)));
                                              ll_backend__opt_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
                                              ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 25)));
                                              if (ll_backend__opt_util__succeeded)
                                                {
                                                  ll_backend__opt_util__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_39_39, (MR_Integer) 1)));
                                                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_51_51);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          if (ll_backend__opt_util__succeeded)
                            {
                              *ll_backend__opt_util__Between_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              *ll_backend__opt_util__Remain_9 = ll_backend__opt_util__Instrs2_20;
                              ll_backend__opt_util__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word ll_backend__opt_util__V_40_40;
                              MR_Word ll_backend__opt_util__V_41_41;
                              MR_Word ll_backend__opt_util__Between0_43;

                              {
                                ll_backend__opt_util__V_40_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_15);
                              }
                              ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_40_40 == (MR_Integer) 0);
                              if (ll_backend__opt_util__succeeded)
                                {
                                  {
                                    ll_backend__opt_util__V_41_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
                                  }
                                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_41_41 == (MR_Integer) 0);
                                  if (ll_backend__opt_util__succeeded)
                                    {
                                      {
                                        ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_43, ll_backend__opt_util__Remain_9);
                                      }
                                      if (ll_backend__opt_util__succeeded)
                                        {
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            *ll_backend__opt_util__Between_8 = base;
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_43));
                                          }
                                          ll_backend__opt_util__succeeded = MR_TRUE;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word ll_backend__opt_util__MaybeRegionRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 7)));
                      MR_Word ll_backend__opt_util__MaybeReuse_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 8)));
                      MR_Word ll_backend__opt_util__V_31_31;
                      MR_Word ll_backend__opt_util__V_32_32;
                      MR_Word ll_backend__opt_util__Between0_47;
                      MR_Word ll_backend__opt_util__Lval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
                      MR_Word ll_backend__opt_util__Rval_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 4)));
                      MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
                      MR_Word ll_backend__opt_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 3)));
                      MR_Word ll_backend__opt_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 5)));
                      MR_Word ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 6)));

                      {
                        ll_backend__opt_util__V_31_31 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_48);
                      }
                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_31_31 == (MR_Integer) 0);
                      if (ll_backend__opt_util__succeeded)
                        {
                          {
                            ll_backend__opt_util__V_32_32 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_49);
                          }
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_32_32 == (MR_Integer) 0);
                          if (ll_backend__opt_util__succeeded)
                            {
                              if ((ll_backend__opt_util__MaybeRegionRval_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                ll_backend__opt_util__succeeded = MR_TRUE;
                              else
                                {
                                  MR_Word ll_backend__opt_util__RegionRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_25, (MR_Integer) 0)));
                                  MR_Word ll_backend__opt_util__V_33_33;

                                  {
                                    ll_backend__opt_util__V_33_33 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__RegionRval_27);
                                  }
                                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_33_33 == (MR_Integer) 0);
                                }
                              if (ll_backend__opt_util__succeeded)
                                {
                                  if ((ll_backend__opt_util__MaybeReuse_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                    ll_backend__opt_util__succeeded = MR_TRUE;
                                  else
                                    {
                                      MR_Word ll_backend__opt_util__ReuseRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_26, (MR_Integer) 0)));
                                      MR_Word ll_backend__opt_util__MaybeFlagLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_26, (MR_Integer) 1)));
                                      MR_Word ll_backend__opt_util__V_34_34;

                                      {
                                        ll_backend__opt_util__V_34_34 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__ReuseRval_28);
                                      }
                                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_34_34 == (MR_Integer) 0);
                                      if (ll_backend__opt_util__succeeded)
                                        {
                                          if ((ll_backend__opt_util__MaybeFlagLval_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                            ll_backend__opt_util__succeeded = MR_TRUE;
                                          else
                                            {
                                              MR_Word ll_backend__opt_util__FlagLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_29, (MR_Integer) 0)));
                                              MR_Word ll_backend__opt_util__V_35_35;

                                              {
                                                ll_backend__opt_util__V_35_35 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__FlagLval_30);
                                              }
                                              ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_35_35 == (MR_Integer) 0);
                                            }
                                        }
                                    }
                                  if (ll_backend__opt_util__succeeded)
                                    {
                                      {
                                        ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_47, ll_backend__opt_util__Remain_9);
                                      }
                                      if (ll_backend__opt_util__succeeded)
                                        {
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            *ll_backend__opt_util__Between_8 = base;
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_47));
                                          }
                                          ll_backend__opt_util__succeeded = MR_TRUE;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 25:
                    {
                      MR_Integer ll_backend__opt_util__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));

                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_52_52);
                      if (ll_backend__opt_util__succeeded)
                        {
                          *ll_backend__opt_util__Between_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          *ll_backend__opt_util__Remain_9 = ll_backend__opt_util__Instrs0_6;
                          ll_backend__opt_util__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                break;
            }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
ll_backend__opt_util__block_refers_to_stack_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__opt_util__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__InstrRefers_6;

            {
              ll_backend__opt_util__InstrRefers_6 = ll_backend__opt_util__instr_refers_to_stack_1_f_0(ll_backend__opt_util__Instr_3);
            }
            switch (ll_backend__opt_util__InstrRefers_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__opt_util__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_3, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__CanFallThrough_9;
                  MR_String ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_3, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__CanFallThrough_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr_7);
                  }
                  switch (ll_backend__opt_util__CanFallThrough_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_4;

                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
                break;
            }
          }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
  MR_Box ll_backend__opt_util__closure_arg,
  MR_Box ll_backend__opt_util__wrapper_arg_1)
{
  {
    MR_Box ll_backend__opt_util__wrapper_arg_2;
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
    MR_Word ll_backend__opt_util__conv0_Refers_4;

    {
      ll_backend__opt_util__conv0_Refers_4 = ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Refers_4));
    return ll_backend__opt_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Refers_5;
    MR_Word ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
    MR_String ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__Refers_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ll_backend__opt_util__Refers_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__BlockInstrs_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Integer ll_backend__opt_util__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__opt_util__BlockInstrs_51);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__Lval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_94_94;
              MR_Word ll_backend__opt_util__V_95_95;

              {
                ll_backend__opt_util__V_94_94 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_52);
              }
              {
                ll_backend__opt_util__V_95_95 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_53);
              }
              {
                ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_94_94, ll_backend__opt_util__V_95_95);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_111_111;
              MR_Word ll_backend__opt_util__V_112_112;

              {
                ll_backend__opt_util__V_111_111 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_109);
              }
              {
                ll_backend__opt_util__V_112_112 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_110);
              }
              {
                ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_111_111, ll_backend__opt_util__V_112_112);
              }
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
            ll_backend__opt_util__Refers_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 8:
          case (MR_Integer) 34:
            ll_backend__opt_util__Refers_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__CodeAddr_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(ll_backend__opt_util__CodeAddr_54);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__Rval_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___Labels_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_99);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__V_92_92;
              MR_Word ll_backend__opt_util__V_93_93;
              MR_Word ll_backend__opt_util__Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__CodeAddr_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__V_92_92 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_96);
              }
              {
                ll_backend__opt_util__V_93_93 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(ll_backend__opt_util__CodeAddr_97);
              }
              {
                ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_92_92, ll_backend__opt_util__V_93_93);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Lval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_119);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__opt_util__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_118);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__opt_util__MaybeRegionRval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeReuse_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_83_83;
              MR_Word ll_backend__opt_util__V_84_84;
              MR_Word ll_backend__opt_util__V_85_85;
              MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_87_87;
              MR_Word ll_backend__opt_util__Lval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));

              {
                ll_backend__opt_util__V_84_84 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_100);
              }
              {
                ll_backend__opt_util__V_85_85 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_101);
              }
              {
                ll_backend__opt_util__STATE_VARIABLE_Refers_83_83 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_84_84, ll_backend__opt_util__V_85_85);
              }
              if ((ll_backend__opt_util__MaybeRegionRval_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_util__STATE_VARIABLE_Refers_87_87 = ll_backend__opt_util__STATE_VARIABLE_Refers_83_83;
              else
                {
                  MR_Word ll_backend__opt_util__RegionRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_62, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__V_86_86;

                  {
                    ll_backend__opt_util__V_86_86 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__RegionRval_64);
                  }
                  {
                    mercury__bool__or_3_p_0(ll_backend__opt_util__V_86_86, ll_backend__opt_util__STATE_VARIABLE_Refers_83_83, &ll_backend__opt_util__STATE_VARIABLE_Refers_87_87);
                  }
                }
              if ((ll_backend__opt_util__MaybeReuse_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__STATE_VARIABLE_Refers_87_87;
              else
                {
                  MR_Word ll_backend__opt_util__ReuseRval_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_63, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__MaybeFlagLval_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_63, (MR_Integer) 1)));
                  MR_Word ll_backend__opt_util__V_88_88;
                  MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_89_89;

                  {
                    ll_backend__opt_util__V_88_88 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__ReuseRval_65);
                  }
                  {
                    mercury__bool__or_3_p_0(ll_backend__opt_util__V_88_88, ll_backend__opt_util__STATE_VARIABLE_Refers_87_87, &ll_backend__opt_util__STATE_VARIABLE_Refers_89_89);
                  }
                  if ((ll_backend__opt_util__MaybeFlagLval_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__opt_util__Refers_5 = ll_backend__opt_util__STATE_VARIABLE_Refers_89_89;
                  else
                    {
                      MR_Word ll_backend__opt_util__FlagLval_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_66, (MR_Integer) 0)));
                      MR_Word ll_backend__opt_util__V_90_90;

                      {
                        ll_backend__opt_util__V_90_90 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__FlagLval_67);
                      }
                      {
                        mercury__bool__or_3_p_0(ll_backend__opt_util__V_90_90, ll_backend__opt_util__STATE_VARIABLE_Refers_89_89, &ll_backend__opt_util__Refers_5);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__opt_util__Lval_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_113);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__opt_util__Rval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_117);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__opt_util__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_108);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__opt_util__Lval_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_120);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__opt_util__Rval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___Reason_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_116);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__opt_util__Lval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_114);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__opt_util__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_115);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__Components_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_81_81;
              MR_Word ll_backend__opt_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

              {
                ll_backend__opt_util__V_81_81 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[4], ll_backend__opt_util__Components_69);
              }
              {
                ll_backend__opt_util__Refers_5 = mercury__bool__or_list_1_f_0(ll_backend__opt_util__V_81_81);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__opt_util__Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

              {
                ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_98);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_util__V_79_79;
              MR_Word ll_backend__opt_util__V_80_80;
              MR_Word ll_backend__opt_util__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

              {
                ll_backend__opt_util__V_79_79 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_103);
              }
              {
                ll_backend__opt_util__V_80_80 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_102);
              }
              {
                ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_79_79, ll_backend__opt_util__V_80_80);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_util__Refers_5;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__rvals_refer_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__opt_util__MaybeRval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

            if ((ll_backend__opt_util__MaybeRval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__opt_util__succeeded = MR_TRUE;
            else
              {
                MR_Word ll_backend__opt_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRval_3, (MR_Integer) 0)));
                MR_Word ll_backend__opt_util__V_6_6;

                {
                  ll_backend__opt_util__V_6_6 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_5);
                }
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_6_6 == (MR_Integer) 0);
              }
            if (ll_backend__opt_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Tail_4;

                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
          }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

MR_Word MR_CALL 
ll_backend__opt_util__rval_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

              {
                ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_3);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.rval_refers_stackvars\'/1", (MR_String) "var");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_10;

                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_14;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__opt_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__opt_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ll_backend__opt_util__V_18_18;
                  MR_Word ll_backend__opt_util__V_19_19;
                  MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__V_18_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval1_16);
                  }
                  {
                    ll_backend__opt_util__V_19_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval2_17);
                  }
                  {
                    ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_18_18, ll_backend__opt_util__V_19_19);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__opt_util__MemRef_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(ll_backend__opt_util__MemRef_20);
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

MR_Word MR_CALL 
ll_backend__opt_util__lval_refers_stackvars_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__FieldNum_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_18_18;
              MR_Word ll_backend__opt_util__V_19_19;
              MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__V_18_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
              }
              {
                ll_backend__opt_util__V_19_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__FieldNum_17);
              }
              {
                ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_18_18, ll_backend__opt_util__V_19_19);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_27);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.lval_refers_stackvars\'/1", (MR_String) "lvar");
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__opt_util__count_temps_instr_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_37_37;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_38_38;

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_29, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_37_37, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_38_38);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_30, ll_backend__opt_util__STATE_VARIABLE_R_37_37, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_38_38, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Lval_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_49_49;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_50_50;

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_41, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_49_49, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_50_50);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_42, ll_backend__opt_util__STATE_VARIABLE_R_49_49, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_50_50, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 6:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_87, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__Rval_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_97, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__opt_util__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_116, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__opt_util__Lval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_125, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__opt_util__Lval_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__MaybeRegionRval_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeReuse_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 8)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_152_152;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_153_153;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_154_154;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_155_155;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_156_156;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_157_157;
              MR_Word ll_backend__opt_util__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 6)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_134, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_152_152, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_153_153);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_137, ll_backend__opt_util__STATE_VARIABLE_R_152_152, &ll_backend__opt_util__STATE_VARIABLE_R_154_154, ll_backend__opt_util__STATE_VARIABLE_F_153_153, &ll_backend__opt_util__STATE_VARIABLE_F_155_155);
              }
              if ((ll_backend__opt_util__MaybeRegionRval_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__opt_util__STATE_VARIABLE_R_156_156 = ll_backend__opt_util__STATE_VARIABLE_R_154_154;
                  ll_backend__opt_util__STATE_VARIABLE_F_157_157 = ll_backend__opt_util__STATE_VARIABLE_F_155_155;
                }
              else
                {
                  MR_Word ll_backend__opt_util__RegionRval_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_140, (MR_Integer) 0)));

                  {
                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__RegionRval_144, ll_backend__opt_util__STATE_VARIABLE_R_154_154, &ll_backend__opt_util__STATE_VARIABLE_R_156_156, ll_backend__opt_util__STATE_VARIABLE_F_155_155, &ll_backend__opt_util__STATE_VARIABLE_F_157_157);
                  }
                }
              if ((ll_backend__opt_util__MaybeReuse_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_156_156;
                  *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_157_157;
                }
              else
                {
                  MR_Word ll_backend__opt_util__ReuseRval_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_141, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_util__MaybeFlagLval_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_141, (MR_Integer) 1)));
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_158_158;
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_159_159;

                  {
                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ReuseRval_145, ll_backend__opt_util__STATE_VARIABLE_R_156_156, &ll_backend__opt_util__STATE_VARIABLE_R_158_158, ll_backend__opt_util__STATE_VARIABLE_F_157_157, &ll_backend__opt_util__STATE_VARIABLE_F_159_159);
                  }
                  if ((ll_backend__opt_util__MaybeFlagLval_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_158_158;
                      *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_159_159;
                    }
                  else
                    {
                      MR_Word ll_backend__opt_util__FlagLval_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_146, (MR_Integer) 0)));

                      {
                        ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__FlagLval_147, ll_backend__opt_util__STATE_VARIABLE_R_158_158, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_159_159, ll_backend__opt_util__STATE_VARIABLE_F_5);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__opt_util__Lval_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_162, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__opt_util__Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_171, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__opt_util__Rval_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_180, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__opt_util__IdRval_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__NumLval_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__AddrLval_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_208_208;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_209_209;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_210_210;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_211_211;
              MR_Word ll_backend__opt_util___FillOp_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___EmbeddedStackFrame_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__IdRval_199, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_208_208, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_209_209);
              }
              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__NumLval_200, ll_backend__opt_util__STATE_VARIABLE_R_208_208, &ll_backend__opt_util__STATE_VARIABLE_R_210_210, ll_backend__opt_util__STATE_VARIABLE_F_209_209, &ll_backend__opt_util__STATE_VARIABLE_F_211_211);
              }
              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__AddrLval_201, ll_backend__opt_util__STATE_VARIABLE_R_210_210, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_211_211, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__opt_util__ValueRval_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util___SetlOp_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___EmbeddedStackFrame_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ValueRval_216, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__opt_util__Lval_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_233, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__opt_util__Rval_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util___Reason_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_242, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__opt_util__Lval_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_264, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__opt_util__Rval_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_273, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 25:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 26:
            {
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__Comps_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 10)));

              {
                ll_backend__opt_util__count_temps_components_5_p_0(ll_backend__opt_util__Comps_306, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ll_backend__opt_util__Lval_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_323, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__opt_util__Lval_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_334, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__opt_util__Lval_344 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_344, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__opt_util__Lval_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_355, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_util__Rval_364 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Lval_365 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_373_373;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_374_374;
              MR_Word ll_backend__opt_util__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_364, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_373_373, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_374_374);
              }
              {
                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_365, ll_backend__opt_util__STATE_VARIABLE_R_373_373, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_374_374, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_util__LCRval_377 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval_378 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_386_386;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_387_387;
              MR_Word ll_backend__opt_util__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCRval_377, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_386_386, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_387_387);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCSRval_378, ll_backend__opt_util__STATE_VARIABLE_R_386_386, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_387_387, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__opt_util__LCRval_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__LCSRval_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_398_398;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_399_399;

              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCRval_390, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_398_398, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_399_399);
              }
              {
                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCSRval_391, ll_backend__opt_util__STATE_VARIABLE_R_398_398, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_399_399, ll_backend__opt_util__STATE_VARIABLE_F_5);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__count_temps_instr_list_5_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
          }
        else
          {
            MR_Word ll_backend__opt_util__Uinstr_12;
            MR_Word ll_backend__opt_util__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_22_22;
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_23_23;
            MR_String ll_backend__opt_util___Comment_13;

            ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
            ll_backend__opt_util___Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 1)));
            {
              ll_backend__opt_util__count_temps_instr_5_p_0(ll_backend__opt_util__Uinstr_12, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_22_22, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_23_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_14;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_22_22;
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_23_23;

              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__possible_targets_3_p_0(
  MR_Word ll_backend__opt_util__Uinstr_4,
  MR_Word * ll_backend__opt_util__Labels_5,
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "block");
                return;
              }
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
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_util__Return_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__ReturnLabel_71;

              ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Return_66)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__opt_util__succeeded)
                {
                  ll_backend__opt_util__ReturnLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Return_66, (MR_Integer) 0)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__Labels_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__ReturnLabel_71));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__CodeAddrs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Return_66));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_util__CodeAddr_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Label_74;

              ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_72)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__opt_util__succeeded)
                {
                  ll_backend__opt_util__Label_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_72, (MR_Integer) 0)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__Labels_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_74));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__CodeAddrs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__CodeAddr_72));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_util__MaybeLabels_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__RevLabels_84;
              MR_Word ll_backend__opt_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(ll_backend__opt_util__MaybeLabels_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevLabels_84);
              }
              {
                mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__RevLabels_84, ll_backend__opt_util__Labels_5);
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_util__CodeAddr_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Label_111;

              ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_114)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__opt_util__succeeded)
                {
                  ll_backend__opt_util__Label_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_114, (MR_Integer) 0)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__Labels_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_111));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__opt_util__CodeAddrs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__CodeAddr_114));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
            break;
          case (MR_Integer) 26:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "decr_sp_and_return");
                return;
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__MaybeFixLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__MaybeLayoutLabel_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__MaybeSubLabel_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__MaybeDefLabel_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 10)));

              {
                ll_backend__opt_util__foreign_proc_labels_6_p_0(ll_backend__opt_util__MaybeFixLabel_88, ll_backend__opt_util__MaybeLayoutLabel_89, ll_backend__opt_util__MaybeOnlyLayoutLabel_90, ll_backend__opt_util__MaybeSubLabel_91, ll_backend__opt_util__MaybeDefLabel_92, ll_backend__opt_util__Labels_5);
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__opt_util__Label_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_107));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_util__Label_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__opt_util__Labels_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_119));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_util__instr_labels_only_2_p_0(
  MR_Word ll_backend__opt_util__Instr_3,
  MR_Word * ll_backend__opt_util__Labels_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util___CodeAddrs_5;

    {
      ll_backend__opt_util__instr_labels_3_p_0(ll_backend__opt_util__Instr_3, ll_backend__opt_util__Labels_4, &ll_backend__opt_util___CodeAddrs_5);
    }
  }
}

void MR_CALL 
ll_backend__opt_util__instr_labels_3_p_0(
  MR_Word ll_backend__opt_util__Instr_4,
  MR_Word * ll_backend__opt_util__Labels_5,
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__TypeCtorInfo_20_20;
    MR_Word ll_backend__opt_util__Labels0_7;
    MR_Word ll_backend__opt_util__CodeAddrs1_8;
    MR_Word ll_backend__opt_util__Rvals_9;
    MR_Word ll_backend__opt_util__Lvals_10;
    MR_Word ll_backend__opt_util__CodeAddrs2_11;
    MR_Word ll_backend__opt_util__CodeAddrs3_13;
    MR_Word ll_backend__opt_util__V_15_15;
    MR_Word ll_backend__opt_util__V_16_16;
    MR_Word ll_backend__opt_util__V_17_17;
    MR_Word ll_backend__opt_util__V_12_12;
    MR_Word ll_backend__opt_util__V_14_14;

    {
      ll_backend__opt_util__instr_labels_2_3_p_0(ll_backend__opt_util__Instr_4, &ll_backend__opt_util__Labels0_7, &ll_backend__opt_util__CodeAddrs1_8);
    }
    {
      ll_backend__code_util__instr_rvals_and_lvals_3_p_0(ll_backend__opt_util__Instr_4, &ll_backend__opt_util__Rvals_9, &ll_backend__opt_util__Lvals_10);
    }
    {
      ll_backend__opt_util__V_15_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__opt_util__Rvals_9);
    }
    {
      ll_backend__exprn_aux__rval_list_addrs_3_p_0(ll_backend__opt_util__V_15_15, &ll_backend__opt_util__CodeAddrs2_11, &ll_backend__opt_util__V_12_12);
    }
    {
      ll_backend__opt_util__V_16_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_util__Lvals_10);
    }
    {
      ll_backend__exprn_aux__lval_list_addrs_3_p_0(ll_backend__opt_util__V_16_16, &ll_backend__opt_util__CodeAddrs3_13, &ll_backend__opt_util__V_14_14);
    }
    ll_backend__opt_util__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0;
    {
      ll_backend__opt_util__V_17_17 = mercury__list__f_43_43_2_f_0(ll_backend__opt_util__TypeCtorInfo_20_20, ll_backend__opt_util__CodeAddrs2_11, ll_backend__opt_util__CodeAddrs3_13);
    }
    {
      *ll_backend__opt_util__CodeAddrs_6 = mercury__list__f_43_43_2_f_0(ll_backend__opt_util__TypeCtorInfo_20_20, ll_backend__opt_util__CodeAddrs1_8, ll_backend__opt_util__V_17_17);
    }
    {
      ll_backend__opt_util__find_label_code_addrs_3_p_0(*ll_backend__opt_util__CodeAddrs_6, ll_backend__opt_util__Labels0_7, ll_backend__opt_util__Labels_5);
    }
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__livevals_addr_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_util__Label_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) ll_backend__opt_util__Label_3)) == (MR_mktag((MR_Integer) 1))))
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
          else
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_fall_through_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_util__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Integer ll_backend__opt_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__opt_util__can_block_fall_through_2_p_0(ll_backend__opt_util__Instrs_7, &ll_backend__opt_util__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 1:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 9:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 11:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 12:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 13:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 14:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 15:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 16:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 17:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 18:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 19:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 20:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 21:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 22:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 23:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 24:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 25:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 26:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 27:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 28:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 29:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 30:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 31:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 32:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 33:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 34:
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return ll_backend__opt_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__can_instr_branch_away_1_f_0(
  MR_Word ll_backend__opt_util__Uinstr_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__CanBranchAway_4;

    switch (MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 26:
          case (MR_Integer) 30:
          case (MR_Integer) 33:
            ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 1;
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
            ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_util__Comps_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
              MR_Word ll_backend__opt_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
              MR_Word ll_backend__opt_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
              MR_Word ll_backend__opt_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
              MR_Word ll_backend__opt_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
              MR_Word ll_backend__opt_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
              MR_Word ll_backend__opt_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
              MR_Word ll_backend__opt_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

              {
                ll_backend__opt_util__CanBranchAway_4 = ll_backend__opt_util__can_components_branch_away_1_f_0(ll_backend__opt_util__Comps_84);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_util__CanBranchAway_4;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_const_condition_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__Taken_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) {
      default:
        ll_backend__opt_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            ll_backend__opt_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_util__Const_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

              ll_backend__opt_util__succeeded = (ll_backend__opt_util__Const_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ll_backend__opt_util__succeeded)
                *ll_backend__opt_util__Taken_2 = (MR_Integer) 1;
              else
                {
                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__Const_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  if (ll_backend__opt_util__succeeded)
                    *ll_backend__opt_util__Taken_2 = (MR_Integer) 0;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.is_const_condition\'/2", (MR_String) "non-boolean constant as if-then-else condition");
                      }
                    }
                }
              ll_backend__opt_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_util__Op_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Taken1_11;

              ll_backend__opt_util__succeeded = (ll_backend__opt_util__Op_8 == (MR_Integer) 7);
              if (ll_backend__opt_util__succeeded)
                {
                  {
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__is_const_condition_2_p_0(ll_backend__opt_util__Rval1_9, &ll_backend__opt_util__Taken1_11);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      {
                        mercury__bool__not_2_p_0(ll_backend__opt_util__Taken1_11, ll_backend__opt_util__Taken_2);
                      }
                      ll_backend__opt_util__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_util__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__opt_util__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__opt_util__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

              ll_backend__opt_util__succeeded = (ll_backend__opt_util__Op_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
              if (ll_backend__opt_util__succeeded)
                {
                  {
                    ll_backend__opt_util__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__opt_util__Rval1_13, ll_backend__opt_util__Rval2_14);
                  }
                  if (ll_backend__opt_util__succeeded)
                    {
                      *ll_backend__opt_util__Taken_2 = (MR_Integer) 1;
                      ll_backend__opt_util__succeeded = MR_TRUE;
                    }
                }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__filter_in_livevals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_6;
        MR_Word ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_8_8;
        MR_Word ll_backend__opt_util__V_7_7;

        {
          ll_backend__opt_util__filter_in_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
            }
          }
        else
          *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
      }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_livevals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_6;
        MR_Word ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_8_8;
        MR_Word ll_backend__opt_util__V_7_7;

        {
          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
          }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_bad_livevals_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_6;
        MR_Word ll_backend__opt_util__Instrs2_9;
        MR_Word ll_backend__opt_util__Uinstr2_10;
        MR_Word ll_backend__opt_util__V_13_13;
        MR_Word ll_backend__opt_util__V_14_14;
        MR_Word ll_backend__opt_util__V_15_15;
        MR_Word ll_backend__opt_util__V_16_16;
        MR_String ll_backend__opt_util__V_8_8;
        MR_Word ll_backend__opt_util__V_7_7;
        MR_Word ll_backend__opt_util__V_12_12;
        MR_String ll_backend__opt_util__V_11_11;

        {
          ll_backend__opt_util__filter_out_bad_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
        ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
            {
              ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs1_6, &ll_backend__opt_util__Instrs2_9);
            }
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs2_9)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs2_9, (MR_Integer) 0)));
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs2_9, (MR_Integer) 1)));
                ll_backend__opt_util__Uinstr2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 0)));
                ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 1)));
                ll_backend__opt_util__V_15_15 = (MR_Integer) 0;
                {
                  ll_backend__opt_util__can_use_livevals_2_p_0(ll_backend__opt_util__Uinstr2_10, &ll_backend__opt_util__V_16_16);
                }
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_15_15 == ll_backend__opt_util__V_16_16);
              }
          }
        if (ll_backend__opt_util__succeeded)
          *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
          }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_labels_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_6;
        MR_Word ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_8_8;
        MR_Word ll_backend__opt_util__V_7_7;

        {
          ll_backend__opt_util__filter_out_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_9_9, (MR_Integer) 1)));
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__opt_util__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(
  MR_Word ll_backend__opt_util__Instrs0_5,
  MR_Word * ll_backend__opt_util__UntilSucceed_6,
  MR_String * ll_backend__opt_util__SucceedComment_7,
  MR_Word * ll_backend__opt_util__Remain_8)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__TypeCtorInfo_11_11;
    MR_Word ll_backend__opt_util__RevUntilSucceed_9;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(ll_backend__opt_util__Instrs0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevUntilSucceed_9, ll_backend__opt_util__SucceedComment_7, ll_backend__opt_util__Remain_8);
    }
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__TypeCtorInfo_11_11 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_11_11, ll_backend__opt_util__RevUntilSucceed_9, ll_backend__opt_util__UntilSucceed_6);
        }
        ll_backend__opt_util__succeeded = MR_TRUE;
      }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word * ll_backend__opt_util__StraightLine_5,
  MR_Word * ll_backend__opt_util__Instrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__RevStraightLine_7;

    {
      ll_backend__opt_util__no_stack_straight_line_2_4_p_0(ll_backend__opt_util__Instrs0_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevStraightLine_7, ll_backend__opt_util__Instrs_6);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__RevStraightLine_7, ll_backend__opt_util__StraightLine_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word * ll_backend__opt_util__Between_5,
  MR_Word * ll_backend__opt_util__After_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__TypeCtorInfo_9_9;
    MR_Word ll_backend__opt_util__BetweenRev_7;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__straight_alternative_2_4_p_0(ll_backend__opt_util__Instrs0_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__BetweenRev_7, ll_backend__opt_util__After_6);
    }
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__TypeCtorInfo_9_9 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_9_9, ll_backend__opt_util__BetweenRev_7, ll_backend__opt_util__Between_5);
        }
        ll_backend__opt_util__succeeded = MR_TRUE;
      }
    return ll_backend__opt_util__succeeded;
  }
}

void MR_CALL 
ll_backend__opt_util__filter_out_r1_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__opt_util__Instr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Success0_8;
        MR_Word ll_backend__opt_util__Instrs1_9;
        MR_Word ll_backend__opt_util__Success1_10;
        MR_Word ll_backend__opt_util__V_12_12;
        MR_Word ll_backend__opt_util__V_13_13;
        MR_Word ll_backend__opt_util__V_14_14;
        MR_Integer ll_backend__opt_util__V_15_15;
        MR_Word ll_backend__opt_util__V_16_16;
        MR_String ll_backend__opt_util__V_11_11;

        {
          ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Success0_8, &ll_backend__opt_util__Instrs1_9);
        }
        ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 0)));
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
            ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 2)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
                ll_backend__opt_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_14_14 == (MR_Integer) 0);
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_15_15 == (MR_Integer) 1);
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__opt_util__succeeded)
                          ll_backend__opt_util__Success1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
                      }
                  }
              }
          }
        if (ll_backend__opt_util__succeeded)
          {
            *ll_backend__opt_util__HeadVar__3_3 = ll_backend__opt_util__Instrs1_9;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Success1_10));
            }
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_9));
            }
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Success0_8;
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_forkproceed_next_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word ll_backend__opt_util__Sdprocmap_5,
  MR_Word * ll_backend__opt_util__Between_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Instrs1_7;
    MR_Word ll_backend__opt_util__Instr1_8;
    MR_Word ll_backend__opt_util__Instrs2_9;
    MR_Word ll_backend__opt_util__Uinstr1_10;
    MR_String ll_backend__opt_util__V_11_11;
    MR_Word ll_backend__opt_util__JumpLabel_12;
    MR_Word ll_backend__opt_util__V_17_17;
    MR_Word ll_backend__opt_util__V_18_18;
    MR_Word ll_backend__opt_util__V_19_19;
    MR_Integer ll_backend__opt_util__V_20_20;
    MR_Word ll_backend__opt_util__V_21_21;

    {
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_7);
    }
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_7)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 1)));
        ll_backend__opt_util__Uinstr1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 0)));
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr1_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 1)));
            ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 2)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_17_17, (MR_Integer) 0)));
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, (MR_Integer) 0)));
                    ll_backend__opt_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_19_19 == (MR_Integer) 0);
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_20_20 == (MR_Integer) 1);
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                            if (ll_backend__opt_util__succeeded)
                              ll_backend__opt_util__JumpLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
                          }
                      }
                  }
              }
          }
        if (ll_backend__opt_util__succeeded)
          {
            MR_Word ll_backend__opt_util__TypeInfo_56_56;
            MR_Word ll_backend__opt_util__TypeInfo_57_57;
            MR_Word ll_backend__opt_util__TypeInfo_58_58;
            MR_Word ll_backend__opt_util__BetweenJump_13;
            MR_Word ll_backend__opt_util__BetweenFall_14;
            MR_Word ll_backend__opt_util__BetweenTrue0_15;
            MR_Word ll_backend__opt_util__BetweenFalse0_16;
            MR_Word ll_backend__opt_util__V_22_22;
            MR_Word ll_backend__opt_util__V_23_23;
            MR_Word ll_backend__opt_util__V_24_24;
            MR_Word ll_backend__opt_util__V_25_25;
            MR_Word ll_backend__opt_util__V_50_50;
            MR_Word ll_backend__opt_util__V_51_51;
            MR_Word ll_backend__opt_util__V_52_52;
            MR_Box ll_backend__opt_util__conv0_BetweenJump_13;
            MR_Word ll_backend__opt_util__V_64_64;

            {
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_util_scalar_common_1[0], ll_backend__opt_util__Sdprocmap_5, ((MR_Box) (ll_backend__opt_util__JumpLabel_12)), &ll_backend__opt_util__conv0_BetweenJump_13);
            }
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__BetweenJump_13 = ((MR_Word) ll_backend__opt_util__conv0_BetweenJump_13);
                ll_backend__opt_util__succeeded = MR_TRUE;
              }
            if (ll_backend__opt_util__succeeded)
              {
                {
                  ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__BetweenFall_14, &ll_backend__opt_util__V_64_64);
                }
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    ll_backend__opt_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]);
                    {
                      ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenJump_13, &ll_backend__opt_util__V_50_50, &ll_backend__opt_util__BetweenTrue0_15);
                    }
                    ll_backend__opt_util__TypeInfo_56_56 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
                    {
                      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_56_56, ((MR_Box) (ll_backend__opt_util__V_22_22)), ((MR_Box) (ll_backend__opt_util__V_50_50)));
                    }
                    if (ll_backend__opt_util__succeeded)
                      {
                        {
                          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenTrue0_15, ll_backend__opt_util__Between_6);
                        }
                        ll_backend__opt_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                        ll_backend__opt_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]);
                        {
                          ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenFall_14, &ll_backend__opt_util__V_51_51, &ll_backend__opt_util__BetweenFalse0_16);
                        }
                        ll_backend__opt_util__TypeInfo_57_57 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
                        {
                          ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_57_57, ((MR_Box) (ll_backend__opt_util__V_24_24)), ((MR_Box) (ll_backend__opt_util__V_51_51)));
                        }
                        if (ll_backend__opt_util__succeeded)
                          {
                            {
                              ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenFalse0_16, &ll_backend__opt_util__V_52_52);
                            }
                            ll_backend__opt_util__TypeInfo_58_58 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
                            {
                              ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_58_58, ((MR_Box) (*ll_backend__opt_util__Between_6)), ((MR_Box) (ll_backend__opt_util__V_52_52)));
                            }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Word ll_backend__opt_util__TypeCtorInfo_48_48;
            MR_Word ll_backend__opt_util__TypeInfo_49_49;
            MR_Word ll_backend__opt_util__TypeInfo_59_59;
            MR_Word ll_backend__opt_util__TypeInfo_60_60;
            MR_Word ll_backend__opt_util__TypeInfo_61_61;
            MR_Word ll_backend__opt_util__V_26_26;
            MR_Word ll_backend__opt_util__V_32_32;
            MR_Word ll_backend__opt_util__V_33_33;
            MR_Word ll_backend__opt_util__V_34_34;
            MR_Word ll_backend__opt_util__V_35_35;
            MR_Word ll_backend__opt_util__V_36_36;
            MR_Word ll_backend__opt_util__BetweenJump_37;
            MR_Word ll_backend__opt_util__BetweenFall_38;
            MR_Word ll_backend__opt_util__BetweenTrue0_39;
            MR_Word ll_backend__opt_util__BetweenFalse0_40;
            MR_Word ll_backend__opt_util__JumpLabel_41;
            MR_Word ll_backend__opt_util__V_53_53;
            MR_Word ll_backend__opt_util__V_54_54;
            MR_Word ll_backend__opt_util__V_55_55;
            MR_Word ll_backend__opt_util__V_27_27;
            MR_Word ll_backend__opt_util__V_28_28;
            MR_Word ll_backend__opt_util__V_29_29;
            MR_Word ll_backend__opt_util__V_30_30;
            MR_Integer ll_backend__opt_util__V_31_31;
            MR_Box ll_backend__opt_util__conv1_BetweenJump_37;
            MR_Word ll_backend__opt_util__V_67_67;

            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr1_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 1)));
                ll_backend__opt_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 2)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 1)));
                    ll_backend__opt_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 2)));
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_27_27 == (MR_Integer) 7);
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_28_28, (MR_Integer) 0)));
                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                            if (ll_backend__opt_util__succeeded)
                              {
                                ll_backend__opt_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_29_29, (MR_Integer) 0)));
                                ll_backend__opt_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_29_29, (MR_Integer) 1)));
                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_30_30 == (MR_Integer) 0);
                                if (ll_backend__opt_util__succeeded)
                                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_31_31 == (MR_Integer) 1);
                              }
                          }
                      }
                  }
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__JumpLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_32_32, (MR_Integer) 0)));
                        ll_backend__opt_util__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                        ll_backend__opt_util__TypeInfo_49_49 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
                        {
                          ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_48_48, ll_backend__opt_util__TypeInfo_49_49, ll_backend__opt_util__Sdprocmap_5, ((MR_Box) (ll_backend__opt_util__JumpLabel_41)), &ll_backend__opt_util__conv1_BetweenJump_37);
                        }
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__BetweenJump_37 = ((MR_Word) ll_backend__opt_util__conv1_BetweenJump_37);
                            ll_backend__opt_util__succeeded = MR_TRUE;
                          }
                        if (ll_backend__opt_util__succeeded)
                          {
                            {
                              ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__BetweenFall_38, &ll_backend__opt_util__V_67_67);
                            }
                            if (ll_backend__opt_util__succeeded)
                              {
                                ll_backend__opt_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                ll_backend__opt_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]);
                                {
                                  ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenJump_37, &ll_backend__opt_util__V_53_53, &ll_backend__opt_util__BetweenFalse0_40);
                                }
                                ll_backend__opt_util__TypeInfo_59_59 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
                                {
                                  ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_59_59, ((MR_Box) (ll_backend__opt_util__V_33_33)), ((MR_Box) (ll_backend__opt_util__V_53_53)));
                                }
                                if (ll_backend__opt_util__succeeded)
                                  {
                                    {
                                      ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenFalse0_40, ll_backend__opt_util__Between_6);
                                    }
                                    ll_backend__opt_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    ll_backend__opt_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]);
                                    {
                                      ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenFall_38, &ll_backend__opt_util__V_54_54, &ll_backend__opt_util__BetweenTrue0_39);
                                    }
                                    ll_backend__opt_util__TypeInfo_60_60 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
                                    {
                                      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_60_60, ((MR_Box) (ll_backend__opt_util__V_35_35)), ((MR_Box) (ll_backend__opt_util__V_54_54)));
                                    }
                                    if (ll_backend__opt_util__succeeded)
                                      {
                                        {
                                          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenTrue0_39, &ll_backend__opt_util__V_55_55);
                                        }
                                        ll_backend__opt_util__TypeInfo_61_61 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
                                        {
                                          ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_61_61, ((MR_Box) (*ll_backend__opt_util__Between_6)), ((MR_Box) (ll_backend__opt_util__V_55_55)));
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
    return ll_backend__opt_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_succeed_next_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__InstrsBetweenIncl_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Instrs1_5;
    MR_Word ll_backend__opt_util__Instr1_6;
    MR_Word ll_backend__opt_util__Instrs2_7;
    MR_Word ll_backend__opt_util__Instrs3_10;
    MR_Word ll_backend__opt_util__Instr3_11;
    MR_Word ll_backend__opt_util__V_15_15;
    MR_Word ll_backend__opt_util__V_16_16;
    MR_Word ll_backend__opt_util__V_17_17;
    MR_Word ll_backend__opt_util__V_18_18;
    MR_Word ll_backend__opt_util__V_19_19;
    MR_String ll_backend__opt_util__V_9_9;
    MR_Word ll_backend__opt_util__V_8_8;
    MR_Word ll_backend__opt_util__V_12_12;
    MR_String ll_backend__opt_util__V_14_14;
    MR_Word ll_backend__opt_util__V_13_13;

    {
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__Instrs1_5);
    }
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_5)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 1)));
        ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 0)));
        ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_15_15)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_15_15, (MR_Integer) 0)));
            {
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_7, &ll_backend__opt_util__Instrs3_10);
            }
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_10)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__Instr3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_10, (MR_Integer) 0)));
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_10, (MR_Integer) 1)));
                ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_11, (MR_Integer) 0)));
                ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_11, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 1)));
                        ll_backend__opt_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          ll_backend__opt_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, 0) = ((MR_Box) (ll_backend__opt_util__Instr3_11));
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, 1) = ((MR_Box) (ll_backend__opt_util__V_19_19));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__opt_util__InstrsBetweenIncl_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1_6));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_18_18));
                        }
                        ll_backend__opt_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ll_backend__opt_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word * ll_backend__opt_util__InstrsBetween_5,
  MR_Word * ll_backend__opt_util__Success_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Instrs1_7;
    MR_Word ll_backend__opt_util__Instr1_8;
    MR_Word ll_backend__opt_util__Instrs2_9;
    MR_Word ll_backend__opt_util__Instr1use_12;
    MR_Word ll_backend__opt_util__Instrs3_13;
    MR_Word ll_backend__opt_util__Instr3_14;
    MR_Word ll_backend__opt_util__Instrs4_15;
    MR_Word ll_backend__opt_util__Instr3use_18;
    MR_Word ll_backend__opt_util__Instrs5_19;
    MR_Word ll_backend__opt_util__Instr5_20;
    MR_Word ll_backend__opt_util__Instrs6_21;
    MR_Word ll_backend__opt_util__R1val_22;
    MR_Word ll_backend__opt_util__Instrs7_24;
    MR_Word ll_backend__opt_util__Instr7_25;
    MR_Word ll_backend__opt_util__Instrs8_26;
    MR_Word ll_backend__opt_util__Instrs9_29;
    MR_Word ll_backend__opt_util__Instr9_30;
    MR_Word ll_backend__opt_util__V_44_44;
    MR_Word ll_backend__opt_util__V_45_45;
    MR_Word ll_backend__opt_util__V_46_46;
    MR_Integer ll_backend__opt_util__V_47_47;
    MR_Word ll_backend__opt_util__V_48_48;
    MR_Word ll_backend__opt_util__V_49_49;
    MR_Word ll_backend__opt_util__V_50_50;
    MR_Word ll_backend__opt_util__V_51_51;
    MR_Word ll_backend__opt_util__V_52_52;
    MR_Word ll_backend__opt_util__V_53_53;
    MR_Word ll_backend__opt_util__V_54_54;
    MR_Word ll_backend__opt_util__V_55_55;
    MR_Word ll_backend__opt_util__V_33_33;
    MR_Word ll_backend__opt_util__V_34_34;
    MR_Word ll_backend__opt_util__V_35_35;
    MR_Word ll_backend__opt_util__V_36_36;
    MR_String ll_backend__opt_util__V_11_11;
    MR_Integer ll_backend__opt_util__V_10_10;
    MR_Word ll_backend__opt_util__V_40_40;
    MR_String ll_backend__opt_util__V_17_17;
    MR_Integer ll_backend__opt_util__V_16_16;
    MR_String ll_backend__opt_util__V_23_23;
    MR_String ll_backend__opt_util__V_28_28;
    MR_Word ll_backend__opt_util__V_27_27;
    MR_Word ll_backend__opt_util__V_31_31;
    MR_String ll_backend__opt_util__V_32_32;

    {
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_7);
    }
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_7)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 1)));
        ll_backend__opt_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 0)));
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 1)));
            ll_backend__opt_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 2)));
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_35_35)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_35_35, (MR_Integer) 0)));
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__opt_util__succeeded)
                      ll_backend__opt_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_36_36, (MR_Integer) 1)));
                  }
              }
          }
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr1use_12 = ll_backend__opt_util__Instr1_8;
            {
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__Instrs3_13);
            }
          }
        else
          {
            ll_backend__opt_util__Instr1use_12 = (MR_Word) &ll_backend__opt_util_scalar_common_1[4];
            ll_backend__opt_util__Instrs3_13 = ll_backend__opt_util__Instrs1_7;
          }
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_13)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_13, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs4_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_13, (MR_Integer) 1)));
            ll_backend__opt_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_14, (MR_Integer) 0)));
            ll_backend__opt_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_14, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 25)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_40_40, (MR_Integer) 1)));
                ll_backend__opt_util__Instr3use_18 = ll_backend__opt_util__Instr3_14;
                {
                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs4_15, &ll_backend__opt_util__Instrs5_19);
                }
              }
            else
              {
                ll_backend__opt_util__Instr3use_18 = (MR_Word) &ll_backend__opt_util_scalar_common_1[5];
                ll_backend__opt_util__Instrs5_19 = ll_backend__opt_util__Instrs3_13;
              }
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs5_19)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__Instr5_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_19, (MR_Integer) 0)));
                ll_backend__opt_util__Instrs6_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_19, (MR_Integer) 1)));
                ll_backend__opt_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_20, (MR_Integer) 0)));
                ll_backend__opt_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_20, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 1)));
                    ll_backend__opt_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 2)));
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_45_45, (MR_Integer) 0)));
                        ll_backend__opt_util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_45_45, (MR_Integer) 1)));
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_46_46 == (MR_Integer) 0);
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_47_47 == (MR_Integer) 1);
                            if (ll_backend__opt_util__succeeded)
                              {
                                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (ll_backend__opt_util__succeeded)
                                  {
                                    ll_backend__opt_util__R1val_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_48_48, (MR_Integer) 1)));
                                    if ((ll_backend__opt_util__R1val_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                                      {
                                        *ll_backend__opt_util__Success_6 = (MR_Integer) 0;
                                        ll_backend__opt_util__succeeded = MR_TRUE;
                                      }
                                    else
                                    if ((ll_backend__opt_util__R1val_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      {
                                        *ll_backend__opt_util__Success_6 = (MR_Integer) 1;
                                        ll_backend__opt_util__succeeded = MR_TRUE;
                                      }
                                    else
                                      ll_backend__opt_util__succeeded = MR_FALSE;
                                    if (ll_backend__opt_util__succeeded)
                                      {
                                        {
                                          ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs6_21, &ll_backend__opt_util__Instrs7_24);
                                        }
                                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs7_24)) == (MR_mktag((MR_Integer) 1)));
                                        if (ll_backend__opt_util__succeeded)
                                          {
                                            ll_backend__opt_util__Instr7_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_24, (MR_Integer) 0)));
                                            ll_backend__opt_util__Instrs8_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_24, (MR_Integer) 1)));
                                            ll_backend__opt_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_25, (MR_Integer) 0)));
                                            ll_backend__opt_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_25, (MR_Integer) 1)));
                                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_49_49)) == (MR_mktag((MR_Integer) 2)));
                                            if (ll_backend__opt_util__succeeded)
                                              {
                                                ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_49_49, (MR_Integer) 0)));
                                                {
                                                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs8_26, &ll_backend__opt_util__Instrs9_29);
                                                }
                                                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs9_29)) == (MR_mktag((MR_Integer) 1)));
                                                if (ll_backend__opt_util__succeeded)
                                                  {
                                                    ll_backend__opt_util__Instr9_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs9_29, (MR_Integer) 0)));
                                                    ll_backend__opt_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs9_29, (MR_Integer) 1)));
                                                    ll_backend__opt_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr9_30, (MR_Integer) 0)));
                                                    ll_backend__opt_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr9_30, (MR_Integer) 1)));
                                                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                    if (ll_backend__opt_util__succeeded)
                                                      {
                                                        ll_backend__opt_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_50_50, (MR_Integer) 1)));
                                                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (ll_backend__opt_util__succeeded)
                                                          {
                                                            ll_backend__opt_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                            {
                                                              ll_backend__opt_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_54_54, 0) = ((MR_Box) (ll_backend__opt_util__Instr7_25));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_54_54, 1) = ((MR_Box) (ll_backend__opt_util__V_55_55));
                                                            }
                                                            {
                                                              ll_backend__opt_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_53_53, 0) = ((MR_Box) (ll_backend__opt_util__Instr5_20));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_53_53, 1) = ((MR_Box) (ll_backend__opt_util__V_54_54));
                                                            }
                                                            {
                                                              ll_backend__opt_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_52_52, 0) = ((MR_Box) (ll_backend__opt_util__Instr3use_18));
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_52_52, 1) = ((MR_Box) (ll_backend__opt_util__V_53_53));
                                                            }
                                                            {
                                                              MR_Word base;
                                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                              *ll_backend__opt_util__InstrsBetween_5 = base;
                                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1use_12));
                                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_52_52));
                                                            }
                                                            ll_backend__opt_util__succeeded = MR_TRUE;
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
    return ll_backend__opt_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__InstrsBetween_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__V_5_5;

    {
      ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs0_3, ll_backend__opt_util__InstrsBetween_4, &ll_backend__opt_util__V_5_5);
    }
    return ll_backend__opt_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_proceed_next_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__InstrsBetween_4)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Instrs1_5;
    MR_Word ll_backend__opt_util__Instr1_6;
    MR_Word ll_backend__opt_util__Instrs2_7;
    MR_Word ll_backend__opt_util__Instr1use_10;
    MR_Word ll_backend__opt_util__Instrs3_11;
    MR_Word ll_backend__opt_util__Instr3_12;
    MR_Word ll_backend__opt_util__Instrs4_13;
    MR_Word ll_backend__opt_util__Instr3use_16;
    MR_Word ll_backend__opt_util__Instrs5_17;
    MR_Word ll_backend__opt_util__Instr5_18;
    MR_Word ll_backend__opt_util__Instrs6_19;
    MR_Word ll_backend__opt_util__Instrs7_22;
    MR_Word ll_backend__opt_util__Instr7_23;
    MR_Word ll_backend__opt_util__V_37_37;
    MR_Word ll_backend__opt_util__V_38_38;
    MR_Word ll_backend__opt_util__V_39_39;
    MR_Word ll_backend__opt_util__V_40_40;
    MR_Word ll_backend__opt_util__V_41_41;
    MR_Word ll_backend__opt_util__V_42_42;
    MR_Word ll_backend__opt_util__V_26_26;
    MR_Word ll_backend__opt_util__V_27_27;
    MR_Word ll_backend__opt_util__V_28_28;
    MR_Word ll_backend__opt_util__V_29_29;
    MR_String ll_backend__opt_util__V_9_9;
    MR_Integer ll_backend__opt_util__V_8_8;
    MR_Word ll_backend__opt_util__V_33_33;
    MR_String ll_backend__opt_util__V_15_15;
    MR_Integer ll_backend__opt_util__V_14_14;
    MR_String ll_backend__opt_util__V_21_21;
    MR_Word ll_backend__opt_util__V_20_20;
    MR_Word ll_backend__opt_util__V_24_24;
    MR_String ll_backend__opt_util__V_25_25;

    {
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__Instrs1_5);
    }
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_5)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 1)));
        ll_backend__opt_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 0)));
        ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 1)));
            ll_backend__opt_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 2)));
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_28_28, (MR_Integer) 0)));
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__opt_util__succeeded)
                      ll_backend__opt_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_29_29, (MR_Integer) 1)));
                  }
              }
          }
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr1use_10 = ll_backend__opt_util__Instr1_6;
            {
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_7, &ll_backend__opt_util__Instrs3_11);
            }
          }
        else
          {
            ll_backend__opt_util__Instr1use_10 = (MR_Word) &ll_backend__opt_util_scalar_common_1[4];
            ll_backend__opt_util__Instrs3_11 = ll_backend__opt_util__Instrs1_5;
          }
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_11)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_11, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs4_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_11, (MR_Integer) 1)));
            ll_backend__opt_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_12, (MR_Integer) 0)));
            ll_backend__opt_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_12, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 25)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 1)));
                ll_backend__opt_util__Instr3use_16 = ll_backend__opt_util__Instr3_12;
                {
                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs4_13, &ll_backend__opt_util__Instrs5_17);
                }
              }
            else
              {
                ll_backend__opt_util__Instr3use_16 = (MR_Word) &ll_backend__opt_util_scalar_common_1[5];
                ll_backend__opt_util__Instrs5_17 = ll_backend__opt_util__Instrs3_11;
              }
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs5_17)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__Instr5_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_17, (MR_Integer) 0)));
                ll_backend__opt_util__Instrs6_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_17, (MR_Integer) 1)));
                ll_backend__opt_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_18, (MR_Integer) 0)));
                ll_backend__opt_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_18, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_37_37)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_37_37, (MR_Integer) 0)));
                    {
                      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs6_19, &ll_backend__opt_util__Instrs7_22);
                    }
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs7_22)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__Instr7_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_22, (MR_Integer) 0)));
                        ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_22, (MR_Integer) 1)));
                        ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_23, (MR_Integer) 0)));
                        ll_backend__opt_util__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_23, (MR_Integer) 1)));
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__opt_util__succeeded)
                              {
                                ll_backend__opt_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                {
                                  ll_backend__opt_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_41_41, 0) = ((MR_Box) (ll_backend__opt_util__Instr5_18));
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_41_41, 1) = ((MR_Box) (ll_backend__opt_util__V_42_42));
                                }
                                {
                                  ll_backend__opt_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_40_40, 0) = ((MR_Box) (ll_backend__opt_util__Instr3use_16));
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_40_40, 1) = ((MR_Box) (ll_backend__opt_util__V_41_41));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *ll_backend__opt_util__InstrsBetween_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1use_10));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_40_40));
                                }
                                ll_backend__opt_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__opt_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__opt_util__is_this_label_next_3_p_0(
  MR_Word ll_backend__opt_util__Label_4,
  MR_Word ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__Remainder_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr_5;
        MR_Word ll_backend__opt_util__Moreinstr_6;
        MR_Word ll_backend__opt_util__Uinstr_8;
        MR_String ll_backend__opt_util___Comment_9;
        MR_String ll_backend__opt_util__V_10_10;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__opt_util__Moreinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__opt_util__Uinstr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_5, (MR_Integer) 0)));
            ll_backend__opt_util___Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_5, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)));
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

                  ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_Word ll_backend__opt_util__V_11_11;

                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)));
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

                      ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ll_backend__opt_util__NextLabel_12;

                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__NextLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_8, (MR_Integer) 1)));
                        {
                          ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__Label_4, ll_backend__opt_util__NextLabel_12);
                        }
                        if (ll_backend__opt_util__succeeded)
                          {
                            *ll_backend__opt_util__Remainder_7 = ll_backend__opt_util__Moreinstr_6;
                            ll_backend__opt_util__succeeded = MR_TRUE;
                          }
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

                              ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__skip_to_next_label_3_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__opt_util__Instr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 0)));
        MR_String ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__V_8_8;

        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_11_11, (MR_Integer) 1)));
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__opt_util__HeadVar__3_3 = ll_backend__opt_util__HeadVar__1_1;
          }
        else
          {
            MR_Word ll_backend__opt_util__Before1_10;

            {
              ll_backend__opt_util__skip_to_next_label_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Before1_10, ll_backend__opt_util__HeadVar__3_3);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Before1_10));
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__opt_util__find_first_label_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__Label_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.find_first_label\'/2", (MR_String) "cannot find first label");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__LabelPrime_10;
            MR_Word ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
            MR_String ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));

            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__LabelPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
                *ll_backend__opt_util__Label_2 = ll_backend__opt_util__LabelPrime_10;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_8;

                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__find_no_fallthrough_2_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_util__succeeded;

    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
        MR_Word ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));

        {
          ll_backend__opt_util__V_9_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr0_6);
        }
        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_9_9 == (MR_Integer) 0);
        if (ll_backend__opt_util__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word ll_backend__opt_util__Instrs1_8;

            {
              ll_backend__opt_util__find_no_fallthrough_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__opt_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_8));
            }
          }
      }
  }
}

MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_1_f_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded;
        MR_Word ll_backend__opt_util__HeadVar__2_2;

        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__opt_util__Uinstr_3;
            MR_Word ll_backend__opt_util__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_9_9;
            MR_String ll_backend__opt_util__V_4_4;

            ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 0)));
            ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 1)));
            {
              ll_backend__opt_util__STATE_VARIABLE_Touch_9_9 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(ll_backend__opt_util__Uinstr_3);
            }
            switch (ll_backend__opt_util__STATE_VARIABLE_Touch_9_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_5;

                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__STATE_VARIABLE_Touch_9_9;
                break;
            }
          }
        return ll_backend__opt_util__HeadVar__2_2;
      }
      break;
    }
}

MR_bool MR_CALL 
ll_backend__opt_util__next_assign_to_redoip_6_p_0(
  MR_Word ll_backend__opt_util__HeadVar__1_1,
  MR_Word ll_backend__opt_util__AllowedBases_9,
  MR_Word ll_backend__opt_util__RevSkip_10,
  MR_Word * ll_backend__opt_util__Redoip_11,
  MR_Word * ll_backend__opt_util__Skip_12,
  MR_Word * ll_backend__opt_util__Rest_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instr_7;
        MR_Word ll_backend__opt_util__Instrs_8;
        MR_Word ll_backend__opt_util__Uinstr_14;
        MR_String ll_backend__opt_util___Comment_15;
        MR_Word ll_backend__opt_util__Redoip0_17;
        MR_Word ll_backend__opt_util__TypeCtorInfo_27_27;
        MR_Word ll_backend__opt_util__Fr_16;
        MR_Word ll_backend__opt_util__V_22_22;
        MR_Word ll_backend__opt_util__V_23_23;
        MR_Word ll_backend__opt_util__V_24_24;
        MR_Word ll_backend__opt_util__V_25_25;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__opt_util__Uinstr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_7, (MR_Integer) 0)));
            ll_backend__opt_util___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_7, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
                ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 2)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_22_22, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__Fr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_23_23, (MR_Integer) 0)));
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_24_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_24_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__opt_util__succeeded)
                          {
                            ll_backend__opt_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_24_24, (MR_Integer) 1)));
                            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
                            if (ll_backend__opt_util__succeeded)
                              {
                                ll_backend__opt_util__Redoip0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_25_25, (MR_Integer) 1)));
                                ll_backend__opt_util__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                                {
                                  ll_backend__opt_util__succeeded = mercury__list__member_2_p_0(ll_backend__opt_util__TypeCtorInfo_27_27, ((MR_Box) (ll_backend__opt_util__Fr_16)), ll_backend__opt_util__AllowedBases_9);
                                }
                              }
                          }
                      }
                  }
              }
            if (ll_backend__opt_util__succeeded)
              {
                *ll_backend__opt_util__Redoip_11 = ll_backend__opt_util__Redoip0_17;
                {
                  mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__RevSkip_10, ll_backend__opt_util__Skip_12);
                }
                *ll_backend__opt_util__Rest_13 = ll_backend__opt_util__Instrs_8;
                ll_backend__opt_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__opt_util__V_18_18;
                MR_Word ll_backend__opt_util__V_19_19;

                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
                    ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 2)));
                    ll_backend__opt_util__succeeded = MR_FALSE;
                  }
                else
                  {
                    MR_Word ll_backend__opt_util__V_20_20;

                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (ll_backend__opt_util__succeeded)
                      {
                        ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
                        ll_backend__opt_util__succeeded = MR_FALSE;
                      }
                    else
                      {
                        MR_Word ll_backend__opt_util__CanBranchAway_21;
                        MR_Word ll_backend__opt_util__V_26_26;

                        {
                          ll_backend__opt_util__CanBranchAway_21 = ll_backend__opt_util__can_instr_branch_away_1_f_0(ll_backend__opt_util__Uinstr_14);
                        }
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__CanBranchAway_21 == (MR_Integer) 0);
                        if (ll_backend__opt_util__succeeded)
                          {
                            {
                              ll_backend__opt_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_26_26, 0) = ((MR_Box) (ll_backend__opt_util__Instr_7));
                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_26_26, 1) = ((MR_Box) (ll_backend__opt_util__RevSkip_10));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_8;
                              MR_Word ll_backend__opt_util__RevSkip__tmp_copy_10 = ll_backend__opt_util__V_26_26;

                              ll_backend__opt_util__RevSkip_10 = ll_backend__opt_util__RevSkip__tmp_copy_10;
                              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return ll_backend__opt_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_labels_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__Instrs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_7;
        MR_Word ll_backend__opt_util__V_12_12;
        MR_Word ll_backend__opt_util__V_13_13;
        MR_String ll_backend__opt_util__V_6_6;
        MR_String ll_backend__opt_util__V_5_5;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
            ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
          }
        if (ll_backend__opt_util__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
            }
            continue;
          }
        else
          {
            MR_Word ll_backend__opt_util__Instrs1_19;
            MR_Word ll_backend__opt_util__V_14_14;
            MR_Word ll_backend__opt_util__V_15_15;
            MR_String ll_backend__opt_util__V_9_9;
            MR_Word ll_backend__opt_util__V_8_8;

            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
                ll_backend__opt_util__Instrs1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 0)));
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_15_15)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__opt_util__succeeded)
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_15_15, (MR_Integer) 0)));
              }
            if (ll_backend__opt_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_19;

                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
                }
                continue;
              }
            else
              {
                MR_Word ll_backend__opt_util__Instrs1_18;
                MR_Word ll_backend__opt_util__V_16_16;
                MR_Word ll_backend__opt_util__V_17_17;
                MR_String ll_backend__opt_util__V_11_11;
                MR_Word ll_backend__opt_util__V_10_10;

                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__opt_util__succeeded)
                  {
                    ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
                    ll_backend__opt_util__Instrs1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
                    ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_16_16, (MR_Integer) 0)));
                    ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (ll_backend__opt_util__succeeded)
                      ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 1)));
                  }
                if (ll_backend__opt_util__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_18;

                      ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
                    }
                    continue;
                  }
                else
                  *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
              }
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_labels_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__Instrs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_7;
        MR_Word ll_backend__opt_util__V_10_10;
        MR_Word ll_backend__opt_util__V_11_11;
        MR_String ll_backend__opt_util__V_6_6;
        MR_String ll_backend__opt_util__V_5_5;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
            ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 0)));
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_11_11, (MR_Integer) 0)));
          }
        if (ll_backend__opt_util__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
            }
            continue;
          }
        else
          {
            MR_Word ll_backend__opt_util__Instrs1_14;
            MR_Word ll_backend__opt_util__V_12_12;
            MR_Word ll_backend__opt_util__V_13_13;
            MR_String ll_backend__opt_util__V_9_9;
            MR_Word ll_backend__opt_util__V_8_8;

            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
                ll_backend__opt_util__Instrs1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (ll_backend__opt_util__succeeded)
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
              }
            if (ll_backend__opt_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_14;

                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
                }
                continue;
              }
            else
              *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__Instrs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_7;
        MR_Word ll_backend__opt_util__V_10_10;
        MR_Word ll_backend__opt_util__V_11_11;
        MR_String ll_backend__opt_util__V_6_6;
        MR_String ll_backend__opt_util__V_5_5;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
            ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 0)));
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_11_11, (MR_Integer) 0)));
          }
        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs1_7, ll_backend__opt_util__Instrs_4);
          }
        else
          {
            MR_Word ll_backend__opt_util__Instrs1_14;
            MR_Word ll_backend__opt_util__V_12_12;
            MR_Word ll_backend__opt_util__V_13_13;
            MR_String ll_backend__opt_util__V_9_9;
            MR_Word ll_backend__opt_util__V_8_8;

            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              {
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
                ll_backend__opt_util__Instrs1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__opt_util__succeeded)
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
              }
            if (ll_backend__opt_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_14;

                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
                }
                continue;
              }
            else
              *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__skip_comments_2_p_0(
  MR_Word ll_backend__opt_util__Instrs0_3,
  MR_Word * ll_backend__opt_util__Instrs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__opt_util__Instrs1_7;
        MR_Word ll_backend__opt_util__V_8_8;
        MR_Word ll_backend__opt_util__V_9_9;
        MR_String ll_backend__opt_util__V_6_6;
        MR_String ll_backend__opt_util__V_5_5;

        if (ll_backend__opt_util__succeeded)
          {
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
            ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 0)));
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 1)));
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_util__succeeded)
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
          }
        if (ll_backend__opt_util__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
            }
            continue;
          }
        else
          *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_util__gather_comments_livevals_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word * ll_backend__opt_util__Comments_5,
  MR_Word * ll_backend__opt_util__Instrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__opt_util__Instr0_7;
    MR_Word ll_backend__opt_util__Instrs1_8;
    MR_Word ll_backend__opt_util__Uinstr0_9;
    MR_String ll_backend__opt_util__V_10_10;

    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 1)));
        ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
        ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 1))))
          ll_backend__opt_util__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 2))))
          ll_backend__opt_util__succeeded = MR_TRUE;
        else
          ll_backend__opt_util__succeeded = MR_FALSE;
      }
    if (ll_backend__opt_util__succeeded)
      {
        MR_Word ll_backend__opt_util__Comments0_13;

        {
          ll_backend__opt_util__gather_comments_livevals_3_p_0(ll_backend__opt_util__Instrs1_8, &ll_backend__opt_util__Comments0_13, ll_backend__opt_util__Instrs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__Comments_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comments0_13));
        }
      }
    else
      {
        *ll_backend__opt_util__Instrs_6 = ll_backend__opt_util__Instrs0_4;
        *ll_backend__opt_util__Comments_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
ll_backend__opt_util__gather_comments_3_p_0(
  MR_Word ll_backend__opt_util__Instrs0_4,
  MR_Word * ll_backend__opt_util__Comments_5,
  MR_Word * ll_backend__opt_util__Instrs_6)
{
  {
    MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__opt_util__Instr0_7;
    MR_Word ll_backend__opt_util__Instrs1_8;
    MR_Word ll_backend__opt_util__V_12_12;
    MR_String ll_backend__opt_util__V_10_10;
    MR_String ll_backend__opt_util__V_9_9;

    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 1)));
        ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
        ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__opt_util__succeeded)
          ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
      }
    if (ll_backend__opt_util__succeeded)
      {
        MR_Word ll_backend__opt_util__Comments0_11;

        {
          ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs1_8, &ll_backend__opt_util__Comments0_11, ll_backend__opt_util__Instrs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__opt_util__Comments_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comments0_11));
        }
      }
    else
      {
        *ll_backend__opt_util__Instrs_6 = ll_backend__opt_util__Instrs0_4;
        *ll_backend__opt_util__Comments_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
ll_backend__opt_util__get_prologue_4_p_0(
  MR_Word ll_backend__opt_util__Instrs0_5,
  MR_Word * ll_backend__opt_util__LabelInstr_6,
  MR_Word * ll_backend__opt_util__Comments_7,
  MR_Word * ll_backend__opt_util__Instrs_8)
{
  {
    MR_bool ll_backend__opt_util__succeeded;
    MR_Word ll_backend__opt_util__Comments1_9;
    MR_Word ll_backend__opt_util__Instrs1_10;
    MR_Word ll_backend__opt_util__Instr1_11;
    MR_Word ll_backend__opt_util__Instrs2_12;
    MR_Word ll_backend__opt_util__V_16_16;
    MR_String ll_backend__opt_util__V_14_14;
    MR_Word ll_backend__opt_util__V_13_13;

    {
      ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Comments1_9, &ll_backend__opt_util__Instrs1_10);
    }
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_10)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__opt_util__succeeded)
      {
        ll_backend__opt_util__Instr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_10, (MR_Integer) 0)));
        ll_backend__opt_util__Instrs2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_10, (MR_Integer) 1)));
        ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_11, (MR_Integer) 0)));
        ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_11, (MR_Integer) 1)));
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__opt_util__succeeded)
          ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
      }
    if (ll_backend__opt_util__succeeded)
      {
        MR_Word ll_backend__opt_util__Comments2_15;

        *ll_backend__opt_util__LabelInstr_6 = ll_backend__opt_util__Instr1_11;
        {
          ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs2_12, &ll_backend__opt_util__Comments2_15, ll_backend__opt_util__Instrs_8);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__Comments1_9, ll_backend__opt_util__Comments2_15, ll_backend__opt_util__Comments_7);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.get_prologue\'/4", (MR_String) "procedure does not begin with label");
          return;
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.opt_util. */
