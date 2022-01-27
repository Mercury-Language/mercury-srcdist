/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "ll_backend.opt_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0;

#line 146 "ll_backend.opt_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 149 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

#line 152 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 155 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 158 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0;

#line 161 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 164 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 167 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
#line 170 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 172 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2);

#line 175 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
#line 178 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 180 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 182 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3);

#line 185 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
#line 188 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 190 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2);

#line 193 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
#line 196 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 198 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 200 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3);

#line 203 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
#line 206 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 208 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2);

#line 211 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
#line 214 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 216 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 218 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3);

#line 221 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
#line 224 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 226 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2);

#line 229 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
#line 232 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 234 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 236 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3);

#line 2526 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2526__1_2_p_0(
#line 2526 "opt_util.m"
  MR_Word ll_backend__opt_util__Lvals0_8,
#line 2526 "opt_util.m"
  MR_Word ll_backend__opt_util__Lvals_9);

#line 2439 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2439__1_2_p_0(
#line 2439 "opt_util.m"
  MR_Word ll_backend__opt_util__DefLabel0_95,
#line 2439 "opt_util.m"
  MR_Word ll_backend__opt_util__DefLabel_96);

#line 2420 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2420__1_2_p_0(
#line 2420 "opt_util.m"
  MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89,
#line 2420 "opt_util.m"
  MR_Word ll_backend__opt_util__OnlyLayoutLabel_90);

#line 2411 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2411__1_2_p_0(
#line 2411 "opt_util.m"
  MR_Word ll_backend__opt_util__LayoutLabel0_87,
#line 2411 "opt_util.m"
  MR_Word ll_backend__opt_util__LayoutLabel_88);

#line 2402 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2402__1_2_p_0(
#line 2402 "opt_util.m"
  MR_Word ll_backend__opt_util__FixLabel0_85,
#line 2402 "opt_util.m"
  MR_Word ll_backend__opt_util__FixLabel_86);

#line 2623 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_mem_ref_3_p_0(
#line 2623 "opt_util.m"
  MR_Word ll_backend__opt_util__MemRef0_4,
#line 2623 "opt_util.m"
  MR_Word * ll_backend__opt_util__MemRef_5,
#line 2623 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6);

#line 2587 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
#line 2587 "opt_util.m"
  MR_Word ll_backend__opt_util__Rval0_4,
#line 2587 "opt_util.m"
  MR_Word * ll_backend__opt_util__Rval_5,
#line 2587 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6);

#line 2536 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
#line 2536 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval0_4,
#line 2536 "opt_util.m"
  MR_Word * ll_backend__opt_util__Lval_5,
#line 2536 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6);

#line 2530 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
#line 2530 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_4,
#line 2530 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval0_5,
#line 2530 "opt_util.m"
  MR_Word * ll_backend__opt_util__Lval_6);

#line 2526 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
#line 2526 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg);

#line 2524 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
#line 2524 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 2524 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 2524 "opt_util.m"
  MR_Box * ll_backend__opt_util__wrapper_arg_2);

#line 2513 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
#line 2513 "opt_util.m"
  MR_Word ll_backend__opt_util__LiveLvals0_4,
#line 2513 "opt_util.m"
  MR_Word * ll_backend__opt_util__LiveLvals_5,
#line 2513 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6);

#line 2072 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_3_p_0(
#line 2072 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 2072 "opt_util.m"
  MR_Word ll_backend__opt_util__Livevals0_2,
#line 2072 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3);

#line 2053 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_3_p_0(
#line 2053 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 2053 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0_2,
#line 2053 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_N_3);

#line 1977 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
#line 1977 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 1970 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(
#line 1970 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 1952 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
#line 1952 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 1924 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
#line 1924 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 1820 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
#line 1820 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_3);

#line 1792 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2,
#line 1792 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasIncr_3,
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4,
#line 1792 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasDecr_5);

#line 1761 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_mem_ref_5_p_0(
#line 1761 "opt_util.m"
  MR_Word ll_backend__opt_util__MemRef_6,
#line 1761 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_13,
#line 1761 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_14,
#line 1761 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_15,
#line 1761 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_16);

#line 1732 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
#line 1732 "opt_util.m"
  MR_Word ll_backend__opt_util__Rval_6,
#line 1732 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_19,
#line 1732 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_20,
#line 1732 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_21,
#line 1732 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_22);

#line 1690 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_lval_5_p_0(
#line 1690 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval_6,
#line 1690 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_23,
#line 1690 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_24,
#line 1690 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_25,
#line 1690 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_26);

#line 1680 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
#line 1680 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1680 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1680 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1680 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1680 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

#line 1670 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
#line 1670 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1670 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1670 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1670 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1670 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

#line 1640 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
#line 1640 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1640 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1640 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1640 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1640 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5);

#line 1511 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
#line 1511 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1511 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 1511 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3);

#line 1470 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeFixedLabel_7,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeLayoutLabel_8,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_9,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeSubLabel_10,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeDefLabel_11,
#line 1470 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Labels_18);

#line 1457 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
#line 1457 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1457 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2,
#line 1457 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevLabels_3);

#line 1362 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
#line 1362 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1362 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 1362 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_3);

#line 1278 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
#line 1278 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_4,
#line 1278 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_5,
#line 1278 "opt_util.m"
  MR_Word * ll_backend__opt_util__CodeAddrs_6);

#line 1221 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
#line 1221 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1221 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2);

#line 1211 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
#line 1211 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1211 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2);

#line 1125 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
#line 1125 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 1000 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
#line 1000 "opt_util.m"
  MR_Word ll_backend__opt_util__Input_3);

#line 987 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
#line 987 "opt_util.m"
  MR_Word ll_backend__opt_util__Input_3);

#line 975 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
#line 975 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 975 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1);

#line 971 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
#line 971 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 971 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1);

#line 966 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
#line 966 "opt_util.m"
  MR_Word ll_backend__opt_util__Component_3);

#line 771 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
#line 771 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 733 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(
#line 733 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1);

#line 664 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(
#line 664 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 664 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36,
#line 664 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37,
#line 664 "opt_util.m"
  MR_String * ll_backend__opt_util__SucceedComment_9,
#line 664 "opt_util.m"
  MR_Word * ll_backend__opt_util__Remain_10);

#line 635 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_2_4_p_0(
#line 635 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 635 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2,
#line 635 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3,
#line 635 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__4_4);

#line 603 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_2_4_p_0(
#line 603 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 603 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0_14,
#line 603 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Between_15,
#line 603 "opt_util.m"
  MR_Word * ll_backend__opt_util__After_8);

#line 2439 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
#line 2439 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg);

#line 2420 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
#line 2420 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg);

#line 2411 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
#line 2411 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg);

#line 2402 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
#line 2402 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg);

#line 957 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
#line 957 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 957 "opt_util.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 870 "ll_backend.opt_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__opt_util__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 879 "ll_backend.opt_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__opt_util__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 887 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 896 "ll_backend.opt_util.c"
const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_instrmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____instrmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____instrmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "instrmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 917 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 925 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__opt_util__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 934 "ll_backend.opt_util.c"
const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_lvalmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____lvalmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____lvalmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "lvalmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 955 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 964 "ll_backend.opt_util.c"
const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_succmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____succmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____succmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "succmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 985 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 993 "ll_backend.opt_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__opt_util__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1002 "ll_backend.opt_util.c"
const MR_TypeCtorInfo_Struct ll_backend__opt_util__ll_backend__opt_util__type_ctor_info_tailmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__opt_util____Unify____tailmap_0_0_10001)),
  ((MR_Box) (ll_backend__opt_util____Compare____tailmap_0_0_10001)),
  (MR_String) "ll_backend.opt_util",
  (MR_String) "tailmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__opt_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1023 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0_10001(
#line 1026 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 1028 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2)
#line 1030 "ll_backend.opt_util.c"
{
#line 1032 "ll_backend.opt_util.c"
  {
#line 1034 "ll_backend.opt_util.c"
    MR_bool ll_backend__opt_util__succeeded;

#line 1037 "ll_backend.opt_util.c"
    {
#line 1039 "ll_backend.opt_util.c"
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____instrmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
#line 1042 "ll_backend.opt_util.c"
    return ll_backend__opt_util__succeeded;
#line 1044 "ll_backend.opt_util.c"
  }
#line 1046 "ll_backend.opt_util.c"
}

#line 1049 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0_10001(
#line 1052 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 1054 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 1056 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3)
#line 1058 "ll_backend.opt_util.c"
{
#line 1060 "ll_backend.opt_util.c"
  {
#line 1062 "ll_backend.opt_util.c"
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

#line 1065 "ll_backend.opt_util.c"
    {
#line 1067 "ll_backend.opt_util.c"
      ll_backend__opt_util____Compare____instrmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
#line 1070 "ll_backend.opt_util.c"
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
#line 1072 "ll_backend.opt_util.c"
  }
#line 1074 "ll_backend.opt_util.c"
}

#line 1077 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0_10001(
#line 1080 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 1082 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2)
#line 1084 "ll_backend.opt_util.c"
{
#line 1086 "ll_backend.opt_util.c"
  {
#line 1088 "ll_backend.opt_util.c"
    MR_bool ll_backend__opt_util__succeeded;

#line 1091 "ll_backend.opt_util.c"
    {
#line 1093 "ll_backend.opt_util.c"
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____lvalmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
#line 1096 "ll_backend.opt_util.c"
    return ll_backend__opt_util__succeeded;
#line 1098 "ll_backend.opt_util.c"
  }
#line 1100 "ll_backend.opt_util.c"
}

#line 1103 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0_10001(
#line 1106 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 1108 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 1110 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3)
#line 1112 "ll_backend.opt_util.c"
{
#line 1114 "ll_backend.opt_util.c"
  {
#line 1116 "ll_backend.opt_util.c"
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

#line 1119 "ll_backend.opt_util.c"
    {
#line 1121 "ll_backend.opt_util.c"
      ll_backend__opt_util____Compare____lvalmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
#line 1124 "ll_backend.opt_util.c"
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
#line 1126 "ll_backend.opt_util.c"
  }
#line 1128 "ll_backend.opt_util.c"
}

#line 1131 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0_10001(
#line 1134 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 1136 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2)
#line 1138 "ll_backend.opt_util.c"
{
#line 1140 "ll_backend.opt_util.c"
  {
#line 1142 "ll_backend.opt_util.c"
    MR_bool ll_backend__opt_util__succeeded;

#line 1145 "ll_backend.opt_util.c"
    {
#line 1147 "ll_backend.opt_util.c"
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____succmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
#line 1150 "ll_backend.opt_util.c"
    return ll_backend__opt_util__succeeded;
#line 1152 "ll_backend.opt_util.c"
  }
#line 1154 "ll_backend.opt_util.c"
}

#line 1157 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0_10001(
#line 1160 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 1162 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 1164 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3)
#line 1166 "ll_backend.opt_util.c"
{
#line 1168 "ll_backend.opt_util.c"
  {
#line 1170 "ll_backend.opt_util.c"
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

#line 1173 "ll_backend.opt_util.c"
    {
#line 1175 "ll_backend.opt_util.c"
      ll_backend__opt_util____Compare____succmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
#line 1178 "ll_backend.opt_util.c"
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
#line 1180 "ll_backend.opt_util.c"
  }
#line 1182 "ll_backend.opt_util.c"
}

#line 1185 "ll_backend.opt_util.c"
static MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0_10001(
#line 1188 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 1190 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2)
#line 1192 "ll_backend.opt_util.c"
{
#line 1194 "ll_backend.opt_util.c"
  {
#line 1196 "ll_backend.opt_util.c"
    MR_bool ll_backend__opt_util__succeeded;

#line 1199 "ll_backend.opt_util.c"
    {
#line 1201 "ll_backend.opt_util.c"
      ll_backend__opt_util__succeeded = ll_backend__opt_util____Unify____tailmap_0_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1), ((MR_Word) ll_backend__opt_util__wrapper_arg_2));
    }
#line 1204 "ll_backend.opt_util.c"
    return ll_backend__opt_util__succeeded;
#line 1206 "ll_backend.opt_util.c"
  }
#line 1208 "ll_backend.opt_util.c"
}

#line 1211 "ll_backend.opt_util.c"
static void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0_10001(
#line 1214 "ll_backend.opt_util.c"
  MR_Box * ll_backend__opt_util__wrapper_arg_1,
#line 1216 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_2,
#line 1218 "ll_backend.opt_util.c"
  MR_Box ll_backend__opt_util__wrapper_arg_3)
#line 1220 "ll_backend.opt_util.c"
{
#line 1222 "ll_backend.opt_util.c"
  {
#line 1224 "ll_backend.opt_util.c"
    MR_Word ll_backend__opt_util__conv0_HeadVar__1_1;

#line 1227 "ll_backend.opt_util.c"
    {
#line 1229 "ll_backend.opt_util.c"
      ll_backend__opt_util____Compare____tailmap_0_0(&ll_backend__opt_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__opt_util__wrapper_arg_2), ((MR_Word) ll_backend__opt_util__wrapper_arg_3));
    }
#line 1232 "ll_backend.opt_util.c"
    *ll_backend__opt_util__wrapper_arg_1 = ((MR_Box) (ll_backend__opt_util__conv0_HeadVar__1_1));
#line 1234 "ll_backend.opt_util.c"
  }
#line 1236 "ll_backend.opt_util.c"
}

#line 2526 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2526__1_2_p_0(
#line 2526 "opt_util.m"
  MR_Word ll_backend__opt_util__Lvals0_8,
#line 2526 "opt_util.m"
  MR_Word ll_backend__opt_util__Lvals_9)
#line 2526 "opt_util.m"
{
#line 2526 "opt_util.m"
  {
#line 2526 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2526 "opt_util.m"
    {
#line 2526 "opt_util.m"
      return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_1[1], ((MR_Box) (ll_backend__opt_util__Lvals0_8)), ((MR_Box) (ll_backend__opt_util__Lvals_9)));
    }
#line 2526 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2526 "opt_util.m"
  }
#line 2526 "opt_util.m"
}

#line 2439 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2439__1_2_p_0(
#line 2439 "opt_util.m"
  MR_Word ll_backend__opt_util__DefLabel0_95,
#line 2439 "opt_util.m"
  MR_Word ll_backend__opt_util__DefLabel_96)
#line 2439 "opt_util.m"
{
#line 2439 "opt_util.m"
  {
#line 2439 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2439 "opt_util.m"
    {
#line 2439 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__DefLabel0_95, ll_backend__opt_util__DefLabel_96);
    }
#line 2439 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2439 "opt_util.m"
  }
#line 2439 "opt_util.m"
}

#line 2420 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2420__1_2_p_0(
#line 2420 "opt_util.m"
  MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89,
#line 2420 "opt_util.m"
  MR_Word ll_backend__opt_util__OnlyLayoutLabel_90)
#line 2420 "opt_util.m"
{
#line 2420 "opt_util.m"
  {
#line 2420 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2420 "opt_util.m"
    {
#line 2420 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__OnlyLayoutLabel0_89, ll_backend__opt_util__OnlyLayoutLabel_90);
    }
#line 2420 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2420 "opt_util.m"
  }
#line 2420 "opt_util.m"
}

#line 2411 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2411__1_2_p_0(
#line 2411 "opt_util.m"
  MR_Word ll_backend__opt_util__LayoutLabel0_87,
#line 2411 "opt_util.m"
  MR_Word ll_backend__opt_util__LayoutLabel_88)
#line 2411 "opt_util.m"
{
#line 2411 "opt_util.m"
  {
#line 2411 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2411 "opt_util.m"
    {
#line 2411 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__LayoutLabel0_87, ll_backend__opt_util__LayoutLabel_88);
    }
#line 2411 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2411 "opt_util.m"
  }
#line 2411 "opt_util.m"
}

#line 2402 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2402__1_2_p_0(
#line 2402 "opt_util.m"
  MR_Word ll_backend__opt_util__FixLabel0_85,
#line 2402 "opt_util.m"
  MR_Word ll_backend__opt_util__FixLabel_86)
#line 2402 "opt_util.m"
{
#line 2402 "opt_util.m"
  {
#line 2402 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2402 "opt_util.m"
    {
#line 2402 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__FixLabel0_85, ll_backend__opt_util__FixLabel_86);
    }
#line 2402 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2402 "opt_util.m"
  }
#line 2402 "opt_util.m"
}

#line 31 "opt_util.m"
void MR_CALL 
ll_backend__opt_util____Compare____tailmap_0_0(
#line 31 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
#line 31 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 31 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__3_3)
#line 31 "opt_util.m"
{
#line 31 "opt_util.m"
  {
#line 31 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 31 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
#line 31 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

#line 31 "opt_util.m"
    {
#line 31 "opt_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[3], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
#line 31 "opt_util.m"
      return;
    }
#line 31 "opt_util.m"
  }
#line 31 "opt_util.m"
}

#line 31 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util____Unify____tailmap_0_0(
#line 31 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 31 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2)
#line 31 "opt_util.m"
{
#line 31 "opt_util.m"
  {
#line 31 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 31 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
#line 31 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

#line 31 "opt_util.m"
    {
#line 31 "opt_util.m"
      return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[3], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
#line 31 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 31 "opt_util.m"
  }
#line 31 "opt_util.m"
}

#line 32 "opt_util.m"
void MR_CALL 
ll_backend__opt_util____Compare____succmap_0_0(
#line 32 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
#line 32 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 32 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__3_3)
#line 32 "opt_util.m"
{
#line 32 "opt_util.m"
  {
#line 32 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 32 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
#line 32 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

#line 32 "opt_util.m"
    {
#line 32 "opt_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[2], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
#line 32 "opt_util.m"
      return;
    }
#line 32 "opt_util.m"
  }
#line 32 "opt_util.m"
}

#line 32 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util____Unify____succmap_0_0(
#line 32 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 32 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2)
#line 32 "opt_util.m"
{
#line 32 "opt_util.m"
  {
#line 32 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 32 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
#line 32 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

#line 32 "opt_util.m"
    {
#line 32 "opt_util.m"
      return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[2], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
#line 32 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 32 "opt_util.m"
  }
#line 32 "opt_util.m"
}

#line 30 "opt_util.m"
void MR_CALL 
ll_backend__opt_util____Compare____lvalmap_0_0(
#line 30 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
#line 30 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 30 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__3_3)
#line 30 "opt_util.m"
{
#line 30 "opt_util.m"
  {
#line 30 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 30 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
#line 30 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

#line 30 "opt_util.m"
    {
#line 30 "opt_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[1], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
#line 30 "opt_util.m"
      return;
    }
#line 30 "opt_util.m"
  }
#line 30 "opt_util.m"
}

#line 30 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util____Unify____lvalmap_0_0(
#line 30 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 30 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2)
#line 30 "opt_util.m"
{
#line 30 "opt_util.m"
  {
#line 30 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 30 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
#line 30 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

#line 30 "opt_util.m"
    {
#line 30 "opt_util.m"
      return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[1], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
#line 30 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 30 "opt_util.m"
  }
#line 30 "opt_util.m"
}

#line 29 "opt_util.m"
void MR_CALL 
ll_backend__opt_util____Compare____instrmap_0_0(
#line 29 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__1_1,
#line 29 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 29 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__3_3)
#line 29 "opt_util.m"
{
#line 29 "opt_util.m"
  {
#line 29 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 29 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_4 = ll_backend__opt_util__HeadVar__2_2;
#line 29 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_5 = ll_backend__opt_util__HeadVar__3_3;

#line 29 "opt_util.m"
    {
#line 29 "opt_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[0], ll_backend__opt_util__HeadVar__1_1, ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_5)));
#line 29 "opt_util.m"
      return;
    }
#line 29 "opt_util.m"
  }
#line 29 "opt_util.m"
}

#line 29 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util____Unify____instrmap_0_0(
#line 29 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 29 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2)
#line 29 "opt_util.m"
{
#line 29 "opt_util.m"
  {
#line 29 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 29 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar1_3 = ll_backend__opt_util__HeadVar__1_1;
#line 29 "opt_util.m"
    MR_Word ll_backend__opt_util__Cast_HeadVar2_4 = ll_backend__opt_util__HeadVar__2_2;

#line 29 "opt_util.m"
    {
#line 29 "opt_util.m"
      return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__opt_util_scalar_common_2[0], ((MR_Box) (ll_backend__opt_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__opt_util__Cast_HeadVar2_4)));
    }
#line 29 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 29 "opt_util.m"
  }
#line 29 "opt_util.m"
}

#line 2623 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_mem_ref_3_p_0(
#line 2623 "opt_util.m"
  MR_Word ll_backend__opt_util__MemRef0_4,
#line 2623 "opt_util.m"
  MR_Word * ll_backend__opt_util__MemRef_5,
#line 2623 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 2623 "opt_util.m"
{
#line 2630 "opt_util.m"
  {
#line 2630 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2630 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__MemRef0_4)) == (MR_mktag((MR_Integer) 2))))
#line 2633 "opt_util.m"
      {
#line 2633 "opt_util.m"
        MR_Word ll_backend__opt_util__CellRval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 0)));
#line 2633 "opt_util.m"
        MR_Word ll_backend__opt_util__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 1)));
#line 2633 "opt_util.m"
        MR_Word ll_backend__opt_util__FieldNumRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef0_4, (MR_Integer) 2)));
#line 2633 "opt_util.m"
        MR_Word ll_backend__opt_util__CellRval_12;
#line 2633 "opt_util.m"
        MR_Word ll_backend__opt_util__FieldNumRval_13;

#line 2634 "opt_util.m"
        {
#line 2634 "opt_util.m"
          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__CellRval0_9, &ll_backend__opt_util__CellRval_12, ll_backend__opt_util__ReplMap_6);
        }
#line 2635 "opt_util.m"
        {
#line 2635 "opt_util.m"
          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__FieldNumRval0_11, &ll_backend__opt_util__FieldNumRval_13, ll_backend__opt_util__ReplMap_6);
        }
#line 2636 "opt_util.m"
        {
#line 2636 "opt_util.m"
          MR_Word base;
#line 2636 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2636 "opt_util.m"
          *ll_backend__opt_util__MemRef_5 = base;
#line 2636 "opt_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__opt_util__CellRval_12));
#line 2636 "opt_util.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__opt_util__MaybeTag_10));
#line 2636 "opt_util.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__opt_util__FieldNumRval_13));
#line 2636 "opt_util.m"
        }
#line 2633 "opt_util.m"
      }
#line 2630 "opt_util.m"
    else
#line 2631 "opt_util.m"
      *ll_backend__opt_util__MemRef_5 = ll_backend__opt_util__MemRef0_4;
#line 2630 "opt_util.m"
  }
#line 2623 "opt_util.m"
}

#line 2587 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_rval_3_p_0(
#line 2587 "opt_util.m"
  MR_Word ll_backend__opt_util__Rval0_4,
#line 2587 "opt_util.m"
  MR_Word * ll_backend__opt_util__Rval_5,
#line 2587 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 2587 "opt_util.m"
{
#line 2591 "opt_util.m"
  {
#line 2591 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2591 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 0))))
#line 2591 "opt_util.m"
      {
#line 2591 "opt_util.m"
        MR_Word ll_backend__opt_util__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)));
#line 2591 "opt_util.m"
        MR_Word ll_backend__opt_util__Lval_8;

#line 2592 "opt_util.m"
        {
#line 2592 "opt_util.m"
          ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_7, &ll_backend__opt_util__Lval_8, ll_backend__opt_util__ReplMap_6);
        }
#line 2593 "opt_util.m"
        {
#line 2593 "opt_util.m"
          MR_Word base;
#line 2593 "opt_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2593 "opt_util.m"
          *ll_backend__opt_util__Rval_5 = base;
#line 2593 "opt_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__opt_util__Lval_8));
#line 2593 "opt_util.m"
        }
#line 2591 "opt_util.m"
      }
#line 2591 "opt_util.m"
    else
#line 2591 "opt_util.m"
      if (((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 2))))
#line 2598 "opt_util.m"
        {
#line 2598 "opt_util.m"
          MR_Integer ll_backend__opt_util__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)));
#line 2598 "opt_util.m"
          MR_Word ll_backend__opt_util__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
#line 2598 "opt_util.m"
          MR_Word ll_backend__opt_util__SubRval_12;

#line 2599 "opt_util.m"
          {
#line 2599 "opt_util.m"
            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRval0_11, &ll_backend__opt_util__SubRval_12, ll_backend__opt_util__ReplMap_6);
          }
#line 2600 "opt_util.m"
          {
#line 2600 "opt_util.m"
            MR_Word base;
#line 2600 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2600 "opt_util.m"
            *ll_backend__opt_util__Rval_5 = base;
#line 2600 "opt_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__opt_util__Tag_10));
#line 2600 "opt_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__opt_util__SubRval_12));
#line 2600 "opt_util.m"
          }
#line 2598 "opt_util.m"
        }
#line 2591 "opt_util.m"
      else
#line 2591 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 1))))
#line 2596 "opt_util.m"
          *ll_backend__opt_util__Rval_5 = ll_backend__opt_util__Rval0_4;
#line 2591 "opt_util.m"
        else
#line 2591 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2613 "opt_util.m"
            {
#line 2613 "opt_util.m"
              MR_Word ll_backend__opt_util__BinOp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
#line 2613 "opt_util.m"
              MR_Word ll_backend__opt_util__SubRvalB0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 3)));
#line 2613 "opt_util.m"
              MR_Word ll_backend__opt_util__SubRvalB_20;
#line 2613 "opt_util.m"
              MR_Word ll_backend__opt_util__SubRvalA0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 2)));
#line 2613 "opt_util.m"
              MR_Word ll_backend__opt_util__SubRvalA_25;

#line 2614 "opt_util.m"
              {
#line 2614 "opt_util.m"
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalA0_24, &ll_backend__opt_util__SubRvalA_25, ll_backend__opt_util__ReplMap_6);
              }
#line 2615 "opt_util.m"
              {
#line 2615 "opt_util.m"
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalB0_19, &ll_backend__opt_util__SubRvalB_20, ll_backend__opt_util__ReplMap_6);
              }
#line 2616 "opt_util.m"
              {
#line 2616 "opt_util.m"
                MR_Word base;
#line 2616 "opt_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2616 "opt_util.m"
                *ll_backend__opt_util__Rval_5 = base;
#line 2616 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2616 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__BinOp_18));
#line 2616 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__SubRvalA_25));
#line 2616 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__SubRvalB_20));
#line 2616 "opt_util.m"
              }
#line 2613 "opt_util.m"
            }
#line 2591 "opt_util.m"
          else
#line 2591 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2605 "opt_util.m"
              {
#line 2605 "opt_util.m"
                MR_Word ll_backend__opt_util__Const0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
#line 2605 "opt_util.m"
                MR_Word ll_backend__opt_util__Const_14;

#line 2652 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Const0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const0_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2655 "opt_util.m"
                  {
#line 2655 "opt_util.m"
                    MR_Word ll_backend__opt_util__Addr0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const0_13, (MR_Integer) 1)));
#line 2655 "opt_util.m"
                    MR_Word ll_backend__opt_util__Addr_38;

#line 2656 "opt_util.m"
                    {
#line 2656 "opt_util.m"
                      ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Addr0_37, &ll_backend__opt_util__Addr_38, ll_backend__opt_util__ReplMap_6);
                    }
#line 2657 "opt_util.m"
                    {
#line 2657 "opt_util.m"
                      ll_backend__opt_util__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2657 "opt_util.m"
                      MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2657 "opt_util.m"
                      MR_hl_field(MR_mktag(3), ll_backend__opt_util__Const_14, 1) = ((MR_Box) (ll_backend__opt_util__Addr_38));
#line 2657 "opt_util.m"
                    }
#line 2655 "opt_util.m"
                  }
#line 2652 "opt_util.m"
                else
#line 2653 "opt_util.m"
                  ll_backend__opt_util__Const_14 = ll_backend__opt_util__Const0_13;
#line 2607 "opt_util.m"
                {
#line 2607 "opt_util.m"
                  MR_Word base;
#line 2607 "opt_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2607 "opt_util.m"
                  *ll_backend__opt_util__Rval_5 = base;
#line 2607 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2607 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Const_14));
#line 2607 "opt_util.m"
                }
#line 2605 "opt_util.m"
              }
#line 2591 "opt_util.m"
            else
#line 2591 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2618 "opt_util.m"
                {
#line 2618 "opt_util.m"
                  MR_Word ll_backend__opt_util__MemRef0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
#line 2618 "opt_util.m"
                  MR_Word ll_backend__opt_util__MemRef_22;

#line 2619 "opt_util.m"
                  {
#line 2619 "opt_util.m"
                    ll_backend__opt_util__replace_labels_mem_ref_3_p_0(ll_backend__opt_util__MemRef0_21, &ll_backend__opt_util__MemRef_22, ll_backend__opt_util__ReplMap_6);
                  }
#line 2620 "opt_util.m"
                  {
#line 2620 "opt_util.m"
                    MR_Word base;
#line 2620 "opt_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2620 "opt_util.m"
                    *ll_backend__opt_util__Rval_5 = base;
#line 2620 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2620 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__MemRef_22));
#line 2620 "opt_util.m"
                  }
#line 2618 "opt_util.m"
                }
#line 2591 "opt_util.m"
              else
#line 2591 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2603 "opt_util.m"
                  *ll_backend__opt_util__Rval_5 = ll_backend__opt_util__Rval0_4;
#line 2591 "opt_util.m"
                else
#line 2609 "opt_util.m"
                  {
#line 2609 "opt_util.m"
                    MR_Word ll_backend__opt_util__UnOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 1)));
#line 2609 "opt_util.m"
                    MR_Word ll_backend__opt_util__SubRvalA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval0_4, (MR_Integer) 2)));
#line 2609 "opt_util.m"
                    MR_Word ll_backend__opt_util__SubRvalA_17;

#line 2610 "opt_util.m"
                    {
#line 2610 "opt_util.m"
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__SubRvalA0_16, &ll_backend__opt_util__SubRvalA_17, ll_backend__opt_util__ReplMap_6);
                    }
#line 2611 "opt_util.m"
                    {
#line 2611 "opt_util.m"
                      MR_Word base;
#line 2611 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2611 "opt_util.m"
                      *ll_backend__opt_util__Rval_5 = base;
#line 2611 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2611 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__UnOp_15));
#line 2611 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__SubRvalA_17));
#line 2611 "opt_util.m"
                    }
#line 2609 "opt_util.m"
                  }
#line 2591 "opt_util.m"
  }
#line 2587 "opt_util.m"
}

#line 2536 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_3_p_0(
#line 2536 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval0_4,
#line 2536 "opt_util.m"
  MR_Word * ll_backend__opt_util__Lval_5,
#line 2536 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 2536 "opt_util.m"
{
#line 2554 "opt_util.m"
  {
#line 2554 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2554 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2577 "opt_util.m"
      {
#line 2577 "opt_util.m"
        MR_Word ll_backend__opt_util__Tag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2577 "opt_util.m"
        MR_Word ll_backend__opt_util__BaseRval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 2)));
#line 2577 "opt_util.m"
        MR_Word ll_backend__opt_util__OffsetRval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 3)));
#line 2577 "opt_util.m"
        MR_Word ll_backend__opt_util__BaseRval_23;
#line 2577 "opt_util.m"
        MR_Word ll_backend__opt_util__OffsetRval_24;

#line 2578 "opt_util.m"
        {
#line 2578 "opt_util.m"
          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__BaseRval0_21, &ll_backend__opt_util__BaseRval_23, ll_backend__opt_util__ReplMap_6);
        }
#line 2579 "opt_util.m"
        {
#line 2579 "opt_util.m"
          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__OffsetRval0_22, &ll_backend__opt_util__OffsetRval_24, ll_backend__opt_util__ReplMap_6);
        }
#line 2580 "opt_util.m"
        {
#line 2580 "opt_util.m"
          MR_Word base;
#line 2580 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2580 "opt_util.m"
          *ll_backend__opt_util__Lval_5 = base;
#line 2580 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 2580 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Tag_20));
#line 2580 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__BaseRval_23));
#line 2580 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__OffsetRval_24));
#line 2580 "opt_util.m"
        }
#line 2577 "opt_util.m"
      }
#line 2554 "opt_util.m"
    else
#line 2554 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 2582 "opt_util.m"
        {
#line 2582 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2582 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval_34;

#line 2583 "opt_util.m"
          {
#line 2583 "opt_util.m"
            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_33, &ll_backend__opt_util__Rval_34, ll_backend__opt_util__ReplMap_6);
          }
#line 2584 "opt_util.m"
          {
#line 2584 "opt_util.m"
            MR_Word base;
#line 2584 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2584 "opt_util.m"
            *ll_backend__opt_util__Lval_5 = base;
#line 2584 "opt_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 2584 "opt_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_34));
#line 2584 "opt_util.m"
          }
#line 2582 "opt_util.m"
        }
#line 2554 "opt_util.m"
      else
#line 2554 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2573 "opt_util.m"
          {
#line 2573 "opt_util.m"
            MR_Word ll_backend__opt_util__Rval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2573 "opt_util.m"
            MR_Word ll_backend__opt_util__Rval_32;

#line 2574 "opt_util.m"
            {
#line 2574 "opt_util.m"
              ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_31, &ll_backend__opt_util__Rval_32, ll_backend__opt_util__ReplMap_6);
            }
#line 2575 "opt_util.m"
            {
#line 2575 "opt_util.m"
              MR_Word base;
#line 2575 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2575 "opt_util.m"
              *ll_backend__opt_util__Lval_5 = base;
#line 2575 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 2575 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_32));
#line 2575 "opt_util.m"
            }
#line 2573 "opt_util.m"
          }
#line 2554 "opt_util.m"
        else
#line 2554 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2569 "opt_util.m"
            {
#line 2569 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2569 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_30;

#line 2570 "opt_util.m"
              {
#line 2570 "opt_util.m"
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_29, &ll_backend__opt_util__Rval_30, ll_backend__opt_util__ReplMap_6);
              }
#line 2571 "opt_util.m"
              {
#line 2571 "opt_util.m"
                MR_Word base;
#line 2571 "opt_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2571 "opt_util.m"
                *ll_backend__opt_util__Lval_5 = base;
#line 2571 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 2571 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_30));
#line 2571 "opt_util.m"
              }
#line 2569 "opt_util.m"
            }
#line 2554 "opt_util.m"
          else
#line 2554 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2565 "opt_util.m"
              {
#line 2565 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2565 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval_28;

#line 2566 "opt_util.m"
                {
#line 2566 "opt_util.m"
                  ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_27, &ll_backend__opt_util__Rval_28, ll_backend__opt_util__ReplMap_6);
                }
#line 2567 "opt_util.m"
                {
#line 2567 "opt_util.m"
                  MR_Word base;
#line 2567 "opt_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2567 "opt_util.m"
                  *ll_backend__opt_util__Lval_5 = base;
#line 2567 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2567 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_28));
#line 2567 "opt_util.m"
                }
#line 2565 "opt_util.m"
              }
#line 2554 "opt_util.m"
            else
#line 2554 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2561 "opt_util.m"
                {
#line 2561 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2561 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval_26;

#line 2562 "opt_util.m"
                  {
#line 2562 "opt_util.m"
                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_25, &ll_backend__opt_util__Rval_26, ll_backend__opt_util__ReplMap_6);
                  }
#line 2563 "opt_util.m"
                  {
#line 2563 "opt_util.m"
                    MR_Word base;
#line 2563 "opt_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2563 "opt_util.m"
                    *ll_backend__opt_util__Lval_5 = base;
#line 2563 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2563 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_26));
#line 2563 "opt_util.m"
                  }
#line 2561 "opt_util.m"
                }
#line 2554 "opt_util.m"
              else
#line 2554 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2557 "opt_util.m"
                  {
#line 2557 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval0_4, (MR_Integer) 1)));
#line 2557 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval_19;

#line 2558 "opt_util.m"
                    {
#line 2558 "opt_util.m"
                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_18, &ll_backend__opt_util__Rval_19, ll_backend__opt_util__ReplMap_6);
                    }
#line 2559 "opt_util.m"
                    {
#line 2559 "opt_util.m"
                      MR_Word base;
#line 2559 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "opt_util.m"
                      *ll_backend__opt_util__Lval_5 = base;
#line 2559 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2559 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_19));
#line 2559 "opt_util.m"
                    }
#line 2557 "opt_util.m"
                  }
#line 2554 "opt_util.m"
                else
#line 2555 "opt_util.m"
                  *ll_backend__opt_util__Lval_5 = ll_backend__opt_util__Lval0_4;
#line 2554 "opt_util.m"
  }
#line 2536 "opt_util.m"
}

#line 2530 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_lval_map_3_p_0(
#line 2530 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_4,
#line 2530 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval0_5,
#line 2530 "opt_util.m"
  MR_Word * ll_backend__opt_util__Lval_6)
#line 2530 "opt_util.m"
{
#line 2534 "opt_util.m"
  {
#line 2534 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2534 "opt_util.m"
    {
#line 2534 "opt_util.m"
      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_5, ll_backend__opt_util__Lval_6, ll_backend__opt_util__ReplMap_4);
#line 2534 "opt_util.m"
      return;
    }
#line 2534 "opt_util.m"
  }
#line 2530 "opt_util.m"
}

#line 2526 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2(
#line 2526 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg)
#line 2526 "opt_util.m"
{
#line 2526 "opt_util.m"
  {
#line 2526 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2526 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

#line 2526 "opt_util.m"
    {
#line 2526 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2526__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
#line 2526 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2526 "opt_util.m"
  }
#line 2526 "opt_util.m"
}

#line 2524 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1(
#line 2524 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 2524 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1,
#line 2524 "opt_util.m"
  MR_Box * ll_backend__opt_util__wrapper_arg_2)
#line 2524 "opt_util.m"
{
#line 2524 "opt_util.m"
  {
#line 2524 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
#line 2524 "opt_util.m"
    MR_Word ll_backend__opt_util__conv0_Lval_6;

#line 2524 "opt_util.m"
    {
#line 2524 "opt_util.m"
      ll_backend__opt_util__replace_labels_lval_map_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__opt_util__wrapper_arg_1), &ll_backend__opt_util__conv0_Lval_6);
    }
#line 2524 "opt_util.m"
    *ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Lval_6));
#line 2524 "opt_util.m"
  }
#line 2524 "opt_util.m"
}

#line 2513 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(
#line 2513 "opt_util.m"
  MR_Word ll_backend__opt_util__LiveLvals0_4,
#line 2513 "opt_util.m"
  MR_Word * ll_backend__opt_util__LiveLvals_5,
#line 2513 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 2513 "opt_util.m"
{
#line 2519 "opt_util.m"
  {
#line 2519 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2519 "opt_util.m"
    if ((ll_backend__opt_util__LiveLvals0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2520 "opt_util.m"
      *ll_backend__opt_util__LiveLvals_5 = ll_backend__opt_util__LiveLvals0_4;
#line 2519 "opt_util.m"
    else
#line 2522 "opt_util.m"
      {
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__LvalSet0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__LiveLvals0_4, (MR_Integer) 0)));
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__Lvals0_8;
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__Lvals_9;
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__V_10_10;
#line 2522 "opt_util.m"
        MR_Word ll_backend__opt_util__V_11_11;

#line 2523 "opt_util.m"
        {
#line 2523 "opt_util.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__LvalSet0_7, &ll_backend__opt_util__Lvals0_8);
        }
#line 2524 "opt_util.m"
        {
#line 2524 "opt_util.m"
          ll_backend__opt_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2524 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_5[0]));
#line 2524 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_1));
#line 2524 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2524 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, 3) = ((MR_Box) (ll_backend__opt_util__ReplMap_6));
#line 2524 "opt_util.m"
        }
#line 2524 "opt_util.m"
        {
#line 2524 "opt_util.m"
          mercury__list__map_3_p_0(ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__TypeCtorInfo_15_15, ll_backend__opt_util__V_10_10, ll_backend__opt_util__Lvals0_8, &ll_backend__opt_util__Lvals_9);
        }
#line 2526 "opt_util.m"
        {
#line 2526 "opt_util.m"
          ll_backend__opt_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2526 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[4]));
#line 2526 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0_2));
#line 2526 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2526 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 3) = ((MR_Box) (ll_backend__opt_util__Lvals0_8));
#line 2526 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_11_11, 4) = ((MR_Box) (ll_backend__opt_util__Lvals_9));
#line 2526 "opt_util.m"
        }
#line 2526 "opt_util.m"
        {
#line 2526 "opt_util.m"
          mercury__require__expect_4_p_0(ll_backend__opt_util__V_11_11, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_c_code_live_lvals\'/3", (MR_String) "some replacements");
        }
#line 2527 "opt_util.m"
        *ll_backend__opt_util__LiveLvals_5 = ll_backend__opt_util__LiveLvals0_4;
#line 2522 "opt_util.m"
      }
#line 2519 "opt_util.m"
  }
#line 2513 "opt_util.m"
}

#line 2072 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_3_p_0(
#line 2072 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 2072 "opt_util.m"
  MR_Word ll_backend__opt_util__Livevals0_2,
#line 2072 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
#line 2072 "opt_util.m"
{
#line 2075 "opt_util.m"
  {
#line 2075 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2075 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2075 "opt_util.m"
      *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2075 "opt_util.m"
    else
#line 2077 "opt_util.m"
      {
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr_8;
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs_9;
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
#line 2077 "opt_util.m"
        MR_String ll_backend__opt_util__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
#line 2077 "opt_util.m"
        MR_Word ll_backend__opt_util__Livevals_13;
#line 2082 "opt_util.m"
        MR_Word ll_backend__opt_util__ThisLivevals_12;

#line 2079 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
#line 2079 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 2079 "opt_util.m"
          {
#line 2079 "opt_util.m"
            ll_backend__opt_util__ThisLivevals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)));
#line 2080 "opt_util.m"
            {
#line 2080 "opt_util.m"
              MR_Word ll_backend__opt_util__V_16_16;

#line 2080 "opt_util.m"
              {
#line 2080 "opt_util.m"
                mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_util__Livevals0_2, ll_backend__opt_util__ThisLivevals_12, &ll_backend__opt_util__Livevals_13);
              }
#line 2081 "opt_util.m"
              {
#line 2081 "opt_util.m"
                ll_backend__opt_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "opt_util.m"
                MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_16_16, 0) = ((MR_Box) (ll_backend__opt_util__Livevals_13));
#line 2081 "opt_util.m"
              }
#line 2081 "opt_util.m"
              {
#line 2081 "opt_util.m"
                ll_backend__opt_util__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2081 "opt_util.m"
                MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_8, 0) = ((MR_Box) (ll_backend__opt_util__V_16_16));
#line 2081 "opt_util.m"
                MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_8, 1) = ((MR_Box) (ll_backend__opt_util__Comment_11));
#line 2081 "opt_util.m"
              }
#line 2080 "opt_util.m"
            }
#line 2079 "opt_util.m"
          }
#line 2079 "opt_util.m"
        else
#line 2083 "opt_util.m"
          {
#line 2086 "opt_util.m"
            MR_Word ll_backend__opt_util__Lval_14;
#line 2084 "opt_util.m"
            MR_Word ll_backend__opt_util__V_15_15;

#line 2083 "opt_util.m"
            ll_backend__opt_util__Instr_8 = ll_backend__opt_util__Instr0_5;
#line 2084 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2084 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2084 "opt_util.m"
              {
#line 2084 "opt_util.m"
                ll_backend__opt_util__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
#line 2084 "opt_util.m"
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
#line 2085 "opt_util.m"
                {
#line 2085 "opt_util.m"
                  mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__opt_util__Lval_14)), ll_backend__opt_util__Livevals0_2, &ll_backend__opt_util__Livevals_13);
                }
#line 2084 "opt_util.m"
              }
#line 2084 "opt_util.m"
            else
#line 2088 "opt_util.m"
              {
#line 2086 "opt_util.m"
                MR_Word ll_backend__opt_util__V_17_17;

#line 2086 "opt_util.m"
                {
#line 2086 "opt_util.m"
                  ll_backend__opt_util__V_17_17 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr0_10);
                }
#line 2086 "opt_util.m"
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_17_17 == (MR_Integer) 0);
#line 2088 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 2087 "opt_util.m"
                  {
#line 2087 "opt_util.m"
                    {
#line 2087 "opt_util.m"
                      mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__opt_util__Livevals_13);
                    }
#line 2087 "opt_util.m"
                  }
#line 2088 "opt_util.m"
                else
#line 2089 "opt_util.m"
                  ll_backend__opt_util__Livevals_13 = ll_backend__opt_util__Livevals0_2;
#line 2088 "opt_util.m"
              }
#line 2083 "opt_util.m"
          }
#line 2092 "opt_util.m"
        {
#line 2092 "opt_util.m"
          ll_backend__opt_util__propagate_livevals_2_3_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__Livevals_13, &ll_backend__opt_util__Instrs_9);
        }
#line 2077 "opt_util.m"
        {
#line 2077 "opt_util.m"
          MR_Word base;
#line 2077 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "opt_util.m"
          *ll_backend__opt_util__HeadVar__3_3 = base;
#line 2077 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr_8));
#line 2077 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs_9));
#line 2077 "opt_util.m"
        }
#line 2077 "opt_util.m"
      }
#line 2075 "opt_util.m"
  }
#line 2072 "opt_util.m"
}

#line 2053 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_3_p_0(
#line 2053 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 2053 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0_2,
#line 2053 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_N_3)
#line 2053 "opt_util.m"
{
#line 2055 "opt_util.m"
  while (MR_TRUE)
#line 2055 "opt_util.m"
    {
#line 2055 "opt_util.m"
      /* tailcall optimized into a loop */
#line 2055 "opt_util.m"
      {
#line 2055 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 2055 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2055 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_N_3 = ll_backend__opt_util__STATE_VARIABLE_N_0_2;
#line 2055 "opt_util.m"
        else
#line 2056 "opt_util.m"
          {
#line 2056 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr0_7;
#line 2056 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2056 "opt_util.m"
            MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2056 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_22_22;
#line 2056 "opt_util.m"
            MR_String ll_backend__opt_util__V_8_8;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_11_11;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_12_12;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_13_13;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_14_14;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_15_15;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_16_16;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_17_17;
#line 2057 "opt_util.m"
            MR_Word ll_backend__opt_util__V_18_18;

#line 2056 "opt_util.m"
            ll_backend__opt_util__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
#line 2056 "opt_util.m"
            ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 1)));
#line 2057 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 2057 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2057 "opt_util.m"
              {
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 1)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 2)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 3)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 4)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 5)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 6)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 7)));
#line 2057 "opt_util.m"
                ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_7, (MR_Integer) 8)));
#line 2058 "opt_util.m"
                ll_backend__opt_util__STATE_VARIABLE_N_22_22 = (ll_backend__opt_util__STATE_VARIABLE_N_0_2 + (MR_Integer) 1);
#line 2057 "opt_util.m"
              }
#line 2057 "opt_util.m"
            else
#line 2058 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_N_22_22 = ll_backend__opt_util__STATE_VARIABLE_N_0_2;
#line 2062 "opt_util.m"
            /* direct tailcall eliminated */
#line 2062 "opt_util.m"
            {
#line 2062 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_9;
#line 2062 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_N_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_N_22_22;

#line 2062 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_N_0_2 = ll_backend__opt_util__STATE_VARIABLE_N_0__tmp_copy_2;
#line 2062 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 2062 "opt_util.m"
            }
#line 2062 "opt_util.m"
            continue;
#line 2056 "opt_util.m"
          }
#line 2055 "opt_util.m"
      }
#line 2055 "opt_util.m"
      break;
#line 2055 "opt_util.m"
    }
#line 2053 "opt_util.m"
}

#line 1977 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(
#line 1977 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 1977 "opt_util.m"
{
#line 1979 "opt_util.m"
  {
#line 1979 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1979 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1979 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1979 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1979 "opt_util.m"
    else
#line 1980 "opt_util.m"
      {
#line 1980 "opt_util.m"
        MR_Word ll_backend__opt_util__Comp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1980 "opt_util.m"
        MR_Word ll_backend__opt_util__Comps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1980 "opt_util.m"
        MR_Word ll_backend__opt_util__Touch1_6;
#line 1980 "opt_util.m"
        MR_Word ll_backend__opt_util__Touch2_7;

#line 1993 "opt_util.m"
        if ((ll_backend__opt_util__Comp_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1999 "opt_util.m"
          ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
        else
#line 1993 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) == (MR_mktag((MR_Integer) 1))))
#line 1993 "opt_util.m"
            ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
          else
#line 1993 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) == (MR_mktag((MR_Integer) 2))))
#line 1994 "opt_util.m"
              ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
            else
#line 1993 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1998 "opt_util.m"
                ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
              else
#line 1993 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1997 "opt_util.m"
                  ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
                else
#line 1993 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1995 "opt_util.m"
                    ll_backend__opt_util__Touch1_6 = (MR_Integer) 0;
#line 1993 "opt_util.m"
                  else
#line 1996 "opt_util.m"
                    ll_backend__opt_util__Touch1_6 = (MR_Integer) 1;
#line 1982 "opt_util.m"
        {
#line 1982 "opt_util.m"
          ll_backend__opt_util__Touch2_7 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(ll_backend__opt_util__Comps_4);
        }
#line 1983 "opt_util.m"
        {
#line 1983 "opt_util.m"
          mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_6, ll_backend__opt_util__Touch2_7, &ll_backend__opt_util__HeadVar__2_2);
        }
#line 1980 "opt_util.m"
      }
#line 1979 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1979 "opt_util.m"
  }
#line 1977 "opt_util.m"
}

#line 1970 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(
#line 1970 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 1970 "opt_util.m"
{
#line 1972 "opt_util.m"
  {
#line 1972 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1972 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1972 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1973 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1972 "opt_util.m"
    else
#line 1972 "opt_util.m"
      if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1974 "opt_util.m"
        {
#line 1974 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1974 "opt_util.m"
          MR_Word ll_backend__opt_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1974 "opt_util.m"
          MR_Word ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1974 "opt_util.m"
          {
#line 1974 "opt_util.m"
            return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_5);
          }
#line 1974 "opt_util.m"
        }
#line 1972 "opt_util.m"
      else
#line 1972 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1972 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1972 "opt_util.m"
  }
#line 1970 "opt_util.m"
}

#line 1952 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(
#line 1952 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 1952 "opt_util.m"
{
#line 1954 "opt_util.m"
  while (MR_TRUE)
#line 1954 "opt_util.m"
    {
#line 1954 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1954 "opt_util.m"
      {
#line 1954 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 1954 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1954 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1954 "opt_util.m"
          {
#line 1954 "opt_util.m"
            MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1954 "opt_util.m"
            {
#line 1954 "opt_util.m"
              return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_3);
            }
#line 1954 "opt_util.m"
          }
#line 1954 "opt_util.m"
        else
#line 1954 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1957 "opt_util.m"
            {
#line 1957 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1957 "opt_util.m"
              MR_Integer ll_backend__opt_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1957 "opt_util.m"
              /* direct tailcall eliminated */
#line 1957 "opt_util.m"
              {
#line 1957 "opt_util.m"
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_6;

#line 1957 "opt_util.m"
                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1957 "opt_util.m"
              }
#line 1957 "opt_util.m"
              continue;
#line 1957 "opt_util.m"
            }
#line 1954 "opt_util.m"
          else
#line 1954 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1956 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1954 "opt_util.m"
            else
#line 1954 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1963 "opt_util.m"
                {
#line 1963 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1963 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1963 "opt_util.m"
                  MR_Word ll_backend__opt_util__Touch1_15;
#line 1963 "opt_util.m"
                  MR_Word ll_backend__opt_util__Touch2_16;
#line 1963 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1964 "opt_util.m"
                  {
#line 1964 "opt_util.m"
                    ll_backend__opt_util__Touch1_15 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval1_12);
                  }
#line 1965 "opt_util.m"
                  {
#line 1965 "opt_util.m"
                    ll_backend__opt_util__Touch2_16 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval2_13);
                  }
#line 1966 "opt_util.m"
                  {
#line 1966 "opt_util.m"
                    mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_15, ll_backend__opt_util__Touch2_16, &ll_backend__opt_util__HeadVar__2_2);
                  }
#line 1963 "opt_util.m"
                }
#line 1954 "opt_util.m"
              else
#line 1954 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1960 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1954 "opt_util.m"
                else
#line 1954 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1967 "opt_util.m"
                    {
#line 1967 "opt_util.m"
                      MR_Word ll_backend__opt_util__MemRef_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1967 "opt_util.m"
                      {
#line 1967 "opt_util.m"
                        return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_f_0(ll_backend__opt_util__MemRef_17);
                      }
#line 1967 "opt_util.m"
                    }
#line 1954 "opt_util.m"
                  else
#line 1954 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1959 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1954 "opt_util.m"
                    else
#line 1961 "opt_util.m"
                      {
#line 1961 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1961 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1961 "opt_util.m"
                        /* direct tailcall eliminated */
#line 1961 "opt_util.m"
                        {
#line 1961 "opt_util.m"
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_10;

#line 1961 "opt_util.m"
                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1961 "opt_util.m"
                        }
#line 1961 "opt_util.m"
                        continue;
#line 1961 "opt_util.m"
                      }
#line 1954 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 1954 "opt_util.m"
      }
#line 1954 "opt_util.m"
      break;
#line 1954 "opt_util.m"
    }
#line 1952 "opt_util.m"
}

#line 1924 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(
#line 1924 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 1924 "opt_util.m"
{
#line 1926 "opt_util.m"
  {
#line 1926 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1926 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1926 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1933 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
    else
#line 1926 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1939 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
      else
#line 1926 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1932 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
        else
#line 1926 "opt_util.m"
          if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1941 "opt_util.m"
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
          else
#line 1926 "opt_util.m"
            if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1940 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
            else
#line 1926 "opt_util.m"
              if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1931 "opt_util.m"
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
              else
#line 1926 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1926 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                else
#line 1926 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1947 "opt_util.m"
                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                  else
#line 1926 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1930 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                    else
#line 1926 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1942 "opt_util.m"
                        {
#line 1942 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1942 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1942 "opt_util.m"
                          MR_Word ll_backend__opt_util__Touch1_19;
#line 1942 "opt_util.m"
                          MR_Word ll_backend__opt_util__Touch2_20;
#line 1942 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1943 "opt_util.m"
                          {
#line 1943 "opt_util.m"
                            ll_backend__opt_util__Touch1_19 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval1_16);
                          }
#line 1944 "opt_util.m"
                          {
#line 1944 "opt_util.m"
                            ll_backend__opt_util__Touch2_20 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval2_17);
                          }
#line 1945 "opt_util.m"
                          {
#line 1945 "opt_util.m"
                            mercury__bool__or_3_p_0(ll_backend__opt_util__Touch1_19, ll_backend__opt_util__Touch2_20, &ll_backend__opt_util__HeadVar__2_2);
                          }
#line 1942 "opt_util.m"
                        }
#line 1926 "opt_util.m"
                      else
#line 1926 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1929 "opt_util.m"
                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                        else
#line 1926 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1950 "opt_util.m"
                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                          else
#line 1926 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1946 "opt_util.m"
                              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                            else
#line 1926 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1948 "opt_util.m"
                                {
#line 1948 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1948 "opt_util.m"
                                  {
#line 1948 "opt_util.m"
                                    return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_24);
                                  }
#line 1948 "opt_util.m"
                                }
#line 1926 "opt_util.m"
                              else
#line 1926 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1928 "opt_util.m"
                                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                                else
#line 1926 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1935 "opt_util.m"
                                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
                                  else
#line 1926 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1936 "opt_util.m"
                                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
                                    else
#line 1926 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1937 "opt_util.m"
                                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
                                      else
#line 1926 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1927 "opt_util.m"
                                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1926 "opt_util.m"
                                        else
#line 1926 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1934 "opt_util.m"
                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
                                          else
#line 1938 "opt_util.m"
                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1926 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1926 "opt_util.m"
  }
#line 1924 "opt_util.m"
}

#line 1820 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(
#line 1820 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_3)
#line 1820 "opt_util.m"
{
#line 1834 "opt_util.m"
  {
#line 1834 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1834 "opt_util.m"
    MR_Word ll_backend__opt_util__Touch_4;

#line 1834 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1869 "opt_util.m"
      {
#line 1869 "opt_util.m"
        MR_Word ll_backend__opt_util__TouchLval_49;
#line 1869 "opt_util.m"
        MR_Word ll_backend__opt_util__TouchRval_50;
#line 1869 "opt_util.m"
        MR_Word ll_backend__opt_util__Lval_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1869 "opt_util.m"
        MR_Word ll_backend__opt_util__Rval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 1870 "opt_util.m"
        {
#line 1870 "opt_util.m"
          ll_backend__opt_util__TouchLval_49 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_99);
        }
#line 1871 "opt_util.m"
        {
#line 1871 "opt_util.m"
          ll_backend__opt_util__TouchRval_50 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_100);
        }
#line 1872 "opt_util.m"
        {
#line 1872 "opt_util.m"
          mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_49, ll_backend__opt_util__TouchRval_50, &ll_backend__opt_util__Touch_4);
        }
#line 1869 "opt_util.m"
      }
#line 1834 "opt_util.m"
    else
#line 1834 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1881 "opt_util.m"
        {
#line 1883 "opt_util.m"
          {
#line 1883 "opt_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.touches_nondet_ctrl_instr\'/1", (MR_String) "block");
          }
#line 1881 "opt_util.m"
        }
#line 1834 "opt_util.m"
      else
#line 1834 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1920 "opt_util.m"
          {
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__Components_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
#line 1920 "opt_util.m"
            MR_Word ll_backend__opt_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

#line 1921 "opt_util.m"
            {
#line 1921 "opt_util.m"
              return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_components_1_f_0(ll_backend__opt_util__Components_74);
            }
#line 1920 "opt_util.m"
          }
#line 1834 "opt_util.m"
        else
#line 1834 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1863 "opt_util.m"
            {
#line 1863 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1864 "opt_util.m"
              {
#line 1864 "opt_util.m"
                return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_44);
              }
#line 1863 "opt_util.m"
            }
#line 1834 "opt_util.m"
          else
#line 1834 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1886 "opt_util.m"
              {
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeRegionRval_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeReuse_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_87_87;
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__V_88_88;
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__V_89_89;
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_91_91;
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__Lval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1886 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 1885 "opt_util.m"
                MR_Word ll_backend__opt_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1885 "opt_util.m"
                MR_Word ll_backend__opt_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 1885 "opt_util.m"
                MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 1885 "opt_util.m"
                MR_Word ll_backend__opt_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));

#line 1888 "opt_util.m"
                {
#line 1888 "opt_util.m"
                  ll_backend__opt_util__V_88_88 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_101);
                }
#line 1888 "opt_util.m"
                {
#line 1888 "opt_util.m"
                  ll_backend__opt_util__V_89_89 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_102);
                }
#line 1888 "opt_util.m"
                {
#line 1888 "opt_util.m"
                  ll_backend__opt_util__STATE_VARIABLE_Touch_87_87 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_88_88, ll_backend__opt_util__V_89_89);
                }
#line 1894 "opt_util.m"
                if ((ll_backend__opt_util__MaybeRegionRval_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1895 "opt_util.m"
                  ll_backend__opt_util__STATE_VARIABLE_Touch_91_91 = ll_backend__opt_util__STATE_VARIABLE_Touch_87_87;
#line 1894 "opt_util.m"
                else
#line 1892 "opt_util.m"
                  {
#line 1892 "opt_util.m"
                    MR_Word ll_backend__opt_util__RegionRval_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_63, (MR_Integer) 0)));
#line 1892 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_90_90;

#line 1893 "opt_util.m"
                    {
#line 1893 "opt_util.m"
                      ll_backend__opt_util__V_90_90 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__RegionRval_65);
                    }
#line 1893 "opt_util.m"
                    {
#line 1893 "opt_util.m"
                      mercury__bool__or_3_p_0(ll_backend__opt_util__V_90_90, ll_backend__opt_util__STATE_VARIABLE_Touch_87_87, &ll_backend__opt_util__STATE_VARIABLE_Touch_91_91);
                    }
#line 1892 "opt_util.m"
                  }
#line 1906 "opt_util.m"
                if ((ll_backend__opt_util__MaybeReuse_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1907 "opt_util.m"
                  ll_backend__opt_util__Touch_4 = ll_backend__opt_util__STATE_VARIABLE_Touch_91_91;
#line 1906 "opt_util.m"
                else
#line 1898 "opt_util.m"
                  {
#line 1898 "opt_util.m"
                    MR_Word ll_backend__opt_util__ReuseRval_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_64, (MR_Integer) 0)));
#line 1898 "opt_util.m"
                    MR_Word ll_backend__opt_util__MaybeFlagLval_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_64, (MR_Integer) 1)));
#line 1898 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_92_92;
#line 1898 "opt_util.m"
                    MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_93_93;

#line 1899 "opt_util.m"
                    {
#line 1899 "opt_util.m"
                      ll_backend__opt_util__V_92_92 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__ReuseRval_66);
                    }
#line 1899 "opt_util.m"
                    {
#line 1899 "opt_util.m"
                      mercury__bool__or_3_p_0(ll_backend__opt_util__V_92_92, ll_backend__opt_util__STATE_VARIABLE_Touch_91_91, &ll_backend__opt_util__STATE_VARIABLE_Touch_93_93);
                    }
#line 1903 "opt_util.m"
                    if ((ll_backend__opt_util__MaybeFlagLval_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1904 "opt_util.m"
                      ll_backend__opt_util__Touch_4 = ll_backend__opt_util__STATE_VARIABLE_Touch_93_93;
#line 1903 "opt_util.m"
                    else
#line 1901 "opt_util.m"
                      {
#line 1901 "opt_util.m"
                        MR_Word ll_backend__opt_util__FlagLval_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_67, (MR_Integer) 0)));
#line 1901 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_94_94;

#line 1902 "opt_util.m"
                        {
#line 1902 "opt_util.m"
                          ll_backend__opt_util__V_94_94 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__FlagLval_68);
                        }
#line 1902 "opt_util.m"
                        {
#line 1902 "opt_util.m"
                          mercury__bool__or_3_p_0(ll_backend__opt_util__V_94_94, ll_backend__opt_util__STATE_VARIABLE_Touch_93_93, &ll_backend__opt_util__Touch_4);
                        }
#line 1901 "opt_util.m"
                      }
#line 1898 "opt_util.m"
                  }
#line 1886 "opt_util.m"
              }
#line 1834 "opt_util.m"
            else
#line 1834 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1869 "opt_util.m"
                {
#line 1869 "opt_util.m"
                  MR_Word ll_backend__opt_util__TouchLval_105;
#line 1869 "opt_util.m"
                  MR_Word ll_backend__opt_util__TouchRval_106;
#line 1869 "opt_util.m"
                  MR_Word ll_backend__opt_util__Lval_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1869 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 1870 "opt_util.m"
                  {
#line 1870 "opt_util.m"
                    ll_backend__opt_util__TouchLval_105 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_107);
                  }
#line 1871 "opt_util.m"
                  {
#line 1871 "opt_util.m"
                    ll_backend__opt_util__TouchRval_106 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_108);
                  }
#line 1872 "opt_util.m"
                  {
#line 1872 "opt_util.m"
                    mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_105, ll_backend__opt_util__TouchRval_106, &ll_backend__opt_util__Touch_4);
                  }
#line 1869 "opt_util.m"
                }
#line 1834 "opt_util.m"
              else
#line 1834 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1855 "opt_util.m"
                  {
#line 1855 "opt_util.m"
                    MR_Word ll_backend__opt_util__Lval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1854 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1856 "opt_util.m"
                    {
#line 1856 "opt_util.m"
                      return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_42);
                    }
#line 1855 "opt_util.m"
                  }
#line 1834 "opt_util.m"
                else
#line 1834 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1876 "opt_util.m"
                    {
#line 1876 "opt_util.m"
                      MR_Word ll_backend__opt_util__LCRval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1876 "opt_util.m"
                      MR_Word ll_backend__opt_util__LCSRval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1876 "opt_util.m"
                      MR_Word ll_backend__opt_util__TouchLC_54;
#line 1876 "opt_util.m"
                      MR_Word ll_backend__opt_util__TouchLCS_55;

#line 1877 "opt_util.m"
                      {
#line 1877 "opt_util.m"
                        ll_backend__opt_util__TouchLC_54 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCRval_51);
                      }
#line 1878 "opt_util.m"
                      {
#line 1878 "opt_util.m"
                        ll_backend__opt_util__TouchLCS_55 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCSRval_52);
                      }
#line 1879 "opt_util.m"
                      {
#line 1879 "opt_util.m"
                        mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLC_54, ll_backend__opt_util__TouchLCS_55, &ll_backend__opt_util__Touch_4);
                      }
#line 1876 "opt_util.m"
                    }
#line 1834 "opt_util.m"
                  else
#line 1834 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1876 "opt_util.m"
                      {
#line 1876 "opt_util.m"
                        MR_Word ll_backend__opt_util__LCRval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1876 "opt_util.m"
                        MR_Word ll_backend__opt_util__LCSRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1876 "opt_util.m"
                        MR_Word ll_backend__opt_util__TouchLC_111;
#line 1876 "opt_util.m"
                        MR_Word ll_backend__opt_util__TouchLCS_112;
#line 1874 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

#line 1877 "opt_util.m"
                        {
#line 1877 "opt_util.m"
                          ll_backend__opt_util__TouchLC_111 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCRval_109);
                        }
#line 1878 "opt_util.m"
                        {
#line 1878 "opt_util.m"
                          ll_backend__opt_util__TouchLCS_112 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__LCSRval_110);
                        }
#line 1879 "opt_util.m"
                        {
#line 1879 "opt_util.m"
                          mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLC_111, ll_backend__opt_util__TouchLCS_112, &ll_backend__opt_util__Touch_4);
                        }
#line 1876 "opt_util.m"
                      }
#line 1834 "opt_util.m"
                    else
#line 1834 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1869 "opt_util.m"
                        {
#line 1869 "opt_util.m"
                          MR_Word ll_backend__opt_util__TouchLval_113;
#line 1869 "opt_util.m"
                          MR_Word ll_backend__opt_util__TouchRval_114;
#line 1869 "opt_util.m"
                          MR_Word ll_backend__opt_util__Lval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1869 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1868 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

#line 1870 "opt_util.m"
                          {
#line 1870 "opt_util.m"
                            ll_backend__opt_util__TouchLval_113 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_115);
                          }
#line 1871 "opt_util.m"
                          {
#line 1871 "opt_util.m"
                            ll_backend__opt_util__TouchRval_114 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_116);
                          }
#line 1872 "opt_util.m"
                          {
#line 1872 "opt_util.m"
                            mercury__bool__or_3_p_0(ll_backend__opt_util__TouchLval_113, ll_backend__opt_util__TouchRval_114, &ll_backend__opt_util__Touch_4);
                          }
#line 1869 "opt_util.m"
                        }
#line 1834 "opt_util.m"
                      else
#line 1834 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1855 "opt_util.m"
                          {
#line 1855 "opt_util.m"
                            MR_Word ll_backend__opt_util__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1856 "opt_util.m"
                            {
#line 1856 "opt_util.m"
                              return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_117);
                            }
#line 1855 "opt_util.m"
                          }
#line 1834 "opt_util.m"
                        else
#line 1834 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1855 "opt_util.m"
                            {
#line 1855 "opt_util.m"
                              MR_Word ll_backend__opt_util__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1856 "opt_util.m"
                              {
#line 1856 "opt_util.m"
                                return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_118);
                              }
#line 1855 "opt_util.m"
                            }
#line 1834 "opt_util.m"
                          else
#line 1834 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1863 "opt_util.m"
                              {
#line 1863 "opt_util.m"
                                MR_Word ll_backend__opt_util__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1864 "opt_util.m"
                                {
#line 1864 "opt_util.m"
                                  return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_119);
                                }
#line 1863 "opt_util.m"
                              }
#line 1834 "opt_util.m"
                            else
#line 1834 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1913 "opt_util.m"
                                {
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__IdRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__NumLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__AddrLval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__V_83_83;
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__V_84_84;
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__V_85_85;
#line 1913 "opt_util.m"
                                  MR_Word ll_backend__opt_util__V_86_86;
#line 1912 "opt_util.m"
                                  MR_Word ll_backend__opt_util___FillOp_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1912 "opt_util.m"
                                  MR_Word ll_backend__opt_util___EmbeddedStackFrame_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 1914 "opt_util.m"
                                  {
#line 1914 "opt_util.m"
                                    ll_backend__opt_util__V_83_83 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__IdRval_70);
                                  }
#line 1916 "opt_util.m"
                                  {
#line 1916 "opt_util.m"
                                    ll_backend__opt_util__V_85_85 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__NumLval_71);
                                  }
#line 1916 "opt_util.m"
                                  {
#line 1916 "opt_util.m"
                                    ll_backend__opt_util__V_86_86 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__AddrLval_72);
                                  }
#line 1914 "opt_util.m"
                                  {
#line 1914 "opt_util.m"
                                    ll_backend__opt_util__V_84_84 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_85_85, ll_backend__opt_util__V_86_86);
                                  }
#line 1914 "opt_util.m"
                                  {
#line 1914 "opt_util.m"
                                    return ll_backend__opt_util__Touch_4 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_83_83, ll_backend__opt_util__V_84_84);
                                  }
#line 1913 "opt_util.m"
                                }
#line 1834 "opt_util.m"
                              else
#line 1834 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1863 "opt_util.m"
                                  {
#line 1863 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Rval_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 1860 "opt_util.m"
                                    MR_Word ll_backend__opt_util___SetOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1860 "opt_util.m"
                                    MR_Word ll_backend__opt_util___EmbeddedStackFrame_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 1864 "opt_util.m"
                                    {
#line 1864 "opt_util.m"
                                      return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_120);
                                    }
#line 1863 "opt_util.m"
                                  }
#line 1834 "opt_util.m"
                                else
#line 1834 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1863 "opt_util.m"
                                    {
#line 1863 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Rval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1861 "opt_util.m"
                                      MR_Word ll_backend__opt_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 1864 "opt_util.m"
                                      {
#line 1864 "opt_util.m"
                                        return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_121);
                                      }
#line 1863 "opt_util.m"
                                    }
#line 1834 "opt_util.m"
                                  else
#line 1834 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1863 "opt_util.m"
                                      {
#line 1863 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Rval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1864 "opt_util.m"
                                        {
#line 1864 "opt_util.m"
                                          return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_rval_1_f_0(ll_backend__opt_util__Rval_122);
                                        }
#line 1863 "opt_util.m"
                                      }
#line 1834 "opt_util.m"
                                    else
#line 1834 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1855 "opt_util.m"
                                        {
#line 1855 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Lval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 1856 "opt_util.m"
                                          {
#line 1856 "opt_util.m"
                                            return ll_backend__opt_util__Touch_4 = ll_backend__opt_util__touches_nondet_ctrl_lval_1_f_0(ll_backend__opt_util__Lval_123);
                                          }
#line 1855 "opt_util.m"
                                        }
#line 1834 "opt_util.m"
                                      else
#line 1834 "opt_util.m"
                                        if (((((((((((((((((((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 1)))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || ((ll_backend__opt_util__Uinstr_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 24)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 2)))))) || ((ll_backend__opt_util__Uinstr_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 19))))))
#line 1835 "opt_util.m"
                                          ll_backend__opt_util__Touch_4 = (MR_Integer) 0;
#line 1834 "opt_util.m"
                                        else
#line 1849 "opt_util.m"
                                          ll_backend__opt_util__Touch_4 = (MR_Integer) 1;
#line 1834 "opt_util.m"
    return ll_backend__opt_util__Touch_4;
#line 1834 "opt_util.m"
  }
#line 1820 "opt_util.m"
}

#line 1792 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2,
#line 1792 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasIncr_3,
#line 1792 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4,
#line 1792 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_HasDecr_5)
#line 1792 "opt_util.m"
{
#line 1795 "opt_util.m"
  while (MR_TRUE)
#line 1795 "opt_util.m"
    {
#line 1795 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1795 "opt_util.m"
      {
#line 1795 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1795 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "opt_util.m"
          {
#line 1795 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_HasDecr_5 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4;
#line 1795 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_HasIncr_3 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2;
#line 1795 "opt_util.m"
          }
#line 1795 "opt_util.m"
        else
#line 1797 "opt_util.m"
          {
#line 1797 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_12;
#line 1797 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1797 "opt_util.m"
            MR_Word ll_backend__opt_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1797 "opt_util.m"
            MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26;
#line 1797 "opt_util.m"
            MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27;
#line 1796 "opt_util.m"
            MR_String ll_backend__opt_util__V_13_13;
#line 1798 "opt_util.m"
            MR_Integer ll_backend__opt_util__V_17_17;
#line 1798 "opt_util.m"
            MR_String ll_backend__opt_util__V_18_18;
#line 1798 "opt_util.m"
            MR_Word ll_backend__opt_util__V_19_19;
#line 1803 "opt_util.m"
            MR_Integer ll_backend__opt_util__V_20_20;

#line 1796 "opt_util.m"
            ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_25_25, (MR_Integer) 0)));
#line 1796 "opt_util.m"
            ll_backend__opt_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_25_25, (MR_Integer) 1)));
#line 1798 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 1798 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1798 "opt_util.m"
              {
#line 1798 "opt_util.m"
                ll_backend__opt_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
#line 1798 "opt_util.m"
                ll_backend__opt_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 2)));
#line 1798 "opt_util.m"
                ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 3)));
#line 1799 "opt_util.m"
                ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26 = (MR_Integer) 1;
#line 1798 "opt_util.m"
              }
#line 1798 "opt_util.m"
            else
#line 1799 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2;
#line 1803 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 1803 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1803 "opt_util.m"
              {
#line 1803 "opt_util.m"
                ll_backend__opt_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
#line 1804 "opt_util.m"
                ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27 = (MR_Integer) 1;
#line 1803 "opt_util.m"
              }
#line 1803 "opt_util.m"
            else
#line 1804 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4;
#line 1808 "opt_util.m"
            /* direct tailcall eliminated */
#line 1808 "opt_util.m"
            {
#line 1808 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_14;
#line 1808 "opt_util.m"
              MR_Word ll_backend__opt_util__STATE_VARIABLE_HasIncr_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_26_26;
#line 1808 "opt_util.m"
              MR_Word ll_backend__opt_util__STATE_VARIABLE_HasDecr_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_27_27;

#line 1808 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_HasDecr_0_4 = ll_backend__opt_util__STATE_VARIABLE_HasDecr_0__tmp_copy_4;
#line 1808 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_HasIncr_0_2 = ll_backend__opt_util__STATE_VARIABLE_HasIncr_0__tmp_copy_2;
#line 1808 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1808 "opt_util.m"
            }
#line 1808 "opt_util.m"
            continue;
#line 1797 "opt_util.m"
          }
#line 1795 "opt_util.m"
      }
#line 1795 "opt_util.m"
      break;
#line 1795 "opt_util.m"
    }
#line 1792 "opt_util.m"
}

#line 1761 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_mem_ref_5_p_0(
#line 1761 "opt_util.m"
  MR_Word ll_backend__opt_util__MemRef_6,
#line 1761 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_13,
#line 1761 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_14,
#line 1761 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_15,
#line 1761 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_16)
#line 1761 "opt_util.m"
{
#line 1768 "opt_util.m"
  {
#line 1768 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1768 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__MemRef_6)) == (MR_mktag((MR_Integer) 1))))
#line 1768 "opt_util.m"
      {
#line 1768 "opt_util.m"
        MR_Word ll_backend__opt_util__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));

#line 1769 "opt_util.m"
        {
#line 1769 "opt_util.m"
          ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_9, ll_backend__opt_util__STATE_VARIABLE_R_0_13, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_0_15, ll_backend__opt_util__STATE_VARIABLE_F_16);
#line 1769 "opt_util.m"
          return;
        }
#line 1768 "opt_util.m"
      }
#line 1768 "opt_util.m"
    else
#line 1768 "opt_util.m"
      if (((MR_tag((MR_Word) ll_backend__opt_util__MemRef_6)) == (MR_mktag((MR_Integer) 2))))
#line 1771 "opt_util.m"
        {
#line 1771 "opt_util.m"
          MR_Word ll_backend__opt_util__CellRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));
#line 1771 "opt_util.m"
          MR_Word ll_backend__opt_util__FieldNumRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 2)));
#line 1771 "opt_util.m"
          MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_17_17;
#line 1771 "opt_util.m"
          MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_18_18;
#line 1771 "opt_util.m"
          MR_Word ll_backend__opt_util___MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__MemRef_6, (MR_Integer) 1)));

#line 1772 "opt_util.m"
          {
#line 1772 "opt_util.m"
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__CellRval_10, ll_backend__opt_util__STATE_VARIABLE_R_0_13, &ll_backend__opt_util__STATE_VARIABLE_R_17_17, ll_backend__opt_util__STATE_VARIABLE_F_0_15, &ll_backend__opt_util__STATE_VARIABLE_F_18_18);
          }
#line 1773 "opt_util.m"
          {
#line 1773 "opt_util.m"
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__FieldNumRval_12, ll_backend__opt_util__STATE_VARIABLE_R_17_17, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_18_18, ll_backend__opt_util__STATE_VARIABLE_F_16);
#line 1773 "opt_util.m"
            return;
          }
#line 1771 "opt_util.m"
        }
#line 1768 "opt_util.m"
      else
#line 1768 "opt_util.m"
        {
#line 1768 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__MemRef_6, (MR_Integer) 0)));

#line 1769 "opt_util.m"
          {
#line 1769 "opt_util.m"
            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_23, ll_backend__opt_util__STATE_VARIABLE_R_0_13, ll_backend__opt_util__STATE_VARIABLE_R_14, ll_backend__opt_util__STATE_VARIABLE_F_0_15, ll_backend__opt_util__STATE_VARIABLE_F_16);
#line 1769 "opt_util.m"
            return;
          }
#line 1768 "opt_util.m"
        }
#line 1768 "opt_util.m"
  }
#line 1761 "opt_util.m"
}

#line 1732 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_rval_5_p_0(
#line 1732 "opt_util.m"
  MR_Word ll_backend__opt_util__Rval_6,
#line 1732 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_19,
#line 1732 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_20,
#line 1732 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_21,
#line 1732 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_22)
#line 1732 "opt_util.m"
{
#line 1737 "opt_util.m"
  while (MR_TRUE)
#line 1737 "opt_util.m"
    {
#line 1737 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1737 "opt_util.m"
      {
#line 1737 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1737 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 0))))
#line 1737 "opt_util.m"
          {
#line 1737 "opt_util.m"
            MR_Word ll_backend__opt_util__Lval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval_6, (MR_Integer) 0)));

#line 1738 "opt_util.m"
            {
#line 1738 "opt_util.m"
              ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_9, ll_backend__opt_util__STATE_VARIABLE_R_0_19, ll_backend__opt_util__STATE_VARIABLE_R_20, ll_backend__opt_util__STATE_VARIABLE_F_0_21, ll_backend__opt_util__STATE_VARIABLE_F_22);
#line 1738 "opt_util.m"
              return;
            }
#line 1737 "opt_util.m"
          }
#line 1737 "opt_util.m"
        else
#line 1737 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1743 "opt_util.m"
            {
#line 1743 "opt_util.m"
              MR_Word ll_backend__opt_util__SubRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));
#line 1743 "opt_util.m"
              MR_Integer ll_backend__opt_util___Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Rval_6, (MR_Integer) 0)));

#line 1744 "opt_util.m"
              /* direct tailcall eliminated */
#line 1744 "opt_util.m"
              {
#line 1744 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRval_12;

#line 1744 "opt_util.m"
                ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
#line 1744 "opt_util.m"
              }
#line 1744 "opt_util.m"
              continue;
#line 1743 "opt_util.m"
            }
#line 1737 "opt_util.m"
          else
#line 1737 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1740 "opt_util.m"
              {
#line 1741 "opt_util.m"
                {
#line 1741 "opt_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.count_temps_rval\'/5", (MR_String) "var");
#line 1741 "opt_util.m"
                  return;
                }
#line 1740 "opt_util.m"
              }
#line 1737 "opt_util.m"
            else
#line 1737 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1753 "opt_util.m"
                {
#line 1753 "opt_util.m"
                  MR_Word ll_backend__opt_util__SubRvalB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 3)));
#line 1753 "opt_util.m"
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_25_25;
#line 1753 "opt_util.m"
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_26_26;
#line 1753 "opt_util.m"
                  MR_Word ll_backend__opt_util__SubRvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 2)));
#line 1753 "opt_util.m"
                  MR_Word ll_backend__opt_util___Binop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

#line 1754 "opt_util.m"
                  {
#line 1754 "opt_util.m"
                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__SubRvalA_40, ll_backend__opt_util__STATE_VARIABLE_R_0_19, &ll_backend__opt_util__STATE_VARIABLE_R_25_25, ll_backend__opt_util__STATE_VARIABLE_F_0_21, &ll_backend__opt_util__STATE_VARIABLE_F_26_26);
                  }
#line 1755 "opt_util.m"
                  /* direct tailcall eliminated */
#line 1755 "opt_util.m"
                  {
#line 1755 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRvalB_17;
#line 1755 "opt_util.m"
                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_19 = ll_backend__opt_util__STATE_VARIABLE_R_25_25;
#line 1755 "opt_util.m"
                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_21 = ll_backend__opt_util__STATE_VARIABLE_F_26_26;

#line 1755 "opt_util.m"
                    ll_backend__opt_util__STATE_VARIABLE_F_0_21 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_21;
#line 1755 "opt_util.m"
                    ll_backend__opt_util__STATE_VARIABLE_R_0_19 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_19;
#line 1755 "opt_util.m"
                    ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
#line 1755 "opt_util.m"
                  }
#line 1755 "opt_util.m"
                  continue;
#line 1753 "opt_util.m"
                }
#line 1737 "opt_util.m"
              else
#line 1737 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1748 "opt_util.m"
                  {
#line 1748 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_R_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_19;
#line 1748 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_F_22 = ll_backend__opt_util__STATE_VARIABLE_F_0_21;
#line 1748 "opt_util.m"
                  }
#line 1737 "opt_util.m"
                else
#line 1737 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1757 "opt_util.m"
                    {
#line 1757 "opt_util.m"
                      MR_Word ll_backend__opt_util__MemRef_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

#line 1758 "opt_util.m"
                      {
#line 1758 "opt_util.m"
                        ll_backend__opt_util__count_temps_mem_ref_5_p_0(ll_backend__opt_util__MemRef_18, ll_backend__opt_util__STATE_VARIABLE_R_0_19, ll_backend__opt_util__STATE_VARIABLE_R_20, ll_backend__opt_util__STATE_VARIABLE_F_0_21, ll_backend__opt_util__STATE_VARIABLE_F_22);
#line 1758 "opt_util.m"
                        return;
                      }
#line 1757 "opt_util.m"
                    }
#line 1737 "opt_util.m"
                  else
#line 1737 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1746 "opt_util.m"
                      {
#line 1746 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_R_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_19;
#line 1746 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_F_22 = ll_backend__opt_util__STATE_VARIABLE_F_0_21;
#line 1746 "opt_util.m"
                      }
#line 1737 "opt_util.m"
                    else
#line 1750 "opt_util.m"
                      {
#line 1750 "opt_util.m"
                        MR_Word ll_backend__opt_util__SubRvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 2)));
#line 1750 "opt_util.m"
                        MR_Word ll_backend__opt_util___Unop_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Rval_6, (MR_Integer) 1)));

#line 1751 "opt_util.m"
                        /* direct tailcall eliminated */
#line 1751 "opt_util.m"
                        {
#line 1751 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval__tmp_copy_6 = ll_backend__opt_util__SubRvalA_15;

#line 1751 "opt_util.m"
                          ll_backend__opt_util__Rval_6 = ll_backend__opt_util__Rval__tmp_copy_6;
#line 1751 "opt_util.m"
                        }
#line 1751 "opt_util.m"
                        continue;
#line 1750 "opt_util.m"
                      }
#line 1737 "opt_util.m"
      }
#line 1737 "opt_util.m"
      break;
#line 1737 "opt_util.m"
    }
#line 1732 "opt_util.m"
}

#line 1690 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_lval_5_p_0(
#line 1690 "opt_util.m"
  MR_Word ll_backend__opt_util__Lval_6,
#line 1690 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_23,
#line 1690 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_24,
#line 1690 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_25,
#line 1690 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_26)
#line 1690 "opt_util.m"
{
#line 1695 "opt_util.m"
  {
#line 1695 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1695 "opt_util.m"
    if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1698 "opt_util.m"
      {
#line 1698 "opt_util.m"
        *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1698 "opt_util.m"
        *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1698 "opt_util.m"
      }
#line 1695 "opt_util.m"
    else
#line 1695 "opt_util.m"
      if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1699 "opt_util.m"
        {
#line 1699 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1699 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1699 "opt_util.m"
        }
#line 1695 "opt_util.m"
      else
#line 1695 "opt_util.m"
        if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1697 "opt_util.m"
          {
#line 1697 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1697 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1697 "opt_util.m"
          }
#line 1695 "opt_util.m"
        else
#line 1695 "opt_util.m"
          if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1701 "opt_util.m"
            {
#line 1701 "opt_util.m"
              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1701 "opt_util.m"
              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1701 "opt_util.m"
            }
#line 1695 "opt_util.m"
          else
#line 1695 "opt_util.m"
            if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1700 "opt_util.m"
              {
#line 1700 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1700 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1700 "opt_util.m"
              }
#line 1695 "opt_util.m"
            else
#line 1695 "opt_util.m"
              if ((ll_backend__opt_util__Lval_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1696 "opt_util.m"
                {
#line 1696 "opt_util.m"
                  *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1696 "opt_util.m"
                  *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1696 "opt_util.m"
                }
#line 1695 "opt_util.m"
              else
#line 1695 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1695 "opt_util.m"
                  {
#line 1695 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1695 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1695 "opt_util.m"
                  }
#line 1695 "opt_util.m"
                else
#line 1695 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1695 "opt_util.m"
                    {
#line 1695 "opt_util.m"
                      MR_Integer ll_backend__opt_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));
#line 1695 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Lval_6, (MR_Integer) 0)));

#line 1695 "opt_util.m"
                      if ((ll_backend__opt_util__V_47_47 == (MR_Integer) 1))
#line 1712 "opt_util.m"
                        {
#line 1713 "opt_util.m"
                          {
#line 1713 "opt_util.m"
                            mercury__int__max_3_p_0(ll_backend__opt_util__V_46_46, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
                          }
#line 1713 "opt_util.m"
                          *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1712 "opt_util.m"
                        }
#line 1695 "opt_util.m"
                      else
#line 1709 "opt_util.m"
                        {
#line 1710 "opt_util.m"
                          {
#line 1710 "opt_util.m"
                            mercury__int__max_3_p_0(ll_backend__opt_util__V_46_46, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24);
                          }
#line 1710 "opt_util.m"
                          *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1709 "opt_util.m"
                        }
#line 1695 "opt_util.m"
                    }
#line 1695 "opt_util.m"
                  else
#line 1695 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1705 "opt_util.m"
                      {
#line 1705 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1705 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1705 "opt_util.m"
                      }
#line 1695 "opt_util.m"
                    else
#line 1695 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1715 "opt_util.m"
                        {
#line 1715 "opt_util.m"
                          MR_Word ll_backend__opt_util__BaseAddrRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 2)));
#line 1715 "opt_util.m"
                          MR_Word ll_backend__opt_util__FieldNumRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 3)));
#line 1715 "opt_util.m"
                          MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_32_32;
#line 1715 "opt_util.m"
                          MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_33_33;
#line 1715 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1716 "opt_util.m"
                          {
#line 1716 "opt_util.m"
                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__BaseAddrRval_19, ll_backend__opt_util__STATE_VARIABLE_R_0_23, &ll_backend__opt_util__STATE_VARIABLE_R_32_32, ll_backend__opt_util__STATE_VARIABLE_F_0_25, &ll_backend__opt_util__STATE_VARIABLE_F_33_33);
                          }
#line 1717 "opt_util.m"
                          {
#line 1717 "opt_util.m"
                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__FieldNumRval_20, ll_backend__opt_util__STATE_VARIABLE_R_32_32, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_33_33, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1717 "opt_util.m"
                            return;
                          }
#line 1715 "opt_util.m"
                        }
#line 1695 "opt_util.m"
                      else
#line 1695 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1703 "opt_util.m"
                          {
#line 1703 "opt_util.m"
                            *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1703 "opt_util.m"
                            *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1703 "opt_util.m"
                          }
#line 1695 "opt_util.m"
                        else
#line 1695 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1706 "opt_util.m"
                            {
#line 1706 "opt_util.m"
                              *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1706 "opt_util.m"
                              *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1706 "opt_util.m"
                            }
#line 1695 "opt_util.m"
                          else
#line 1695 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1728 "opt_util.m"
                              {
#line 1729 "opt_util.m"
                                {
#line 1729 "opt_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.count_temps_lval\'/5", (MR_String) "lvar");
#line 1729 "opt_util.m"
                                  return;
                                }
#line 1728 "opt_util.m"
                              }
#line 1695 "opt_util.m"
                            else
#line 1695 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1725 "opt_util.m"
                                {
#line 1725 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                  {
#line 1726 "opt_util.m"
                                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_21, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                    return;
                                  }
#line 1725 "opt_util.m"
                                }
#line 1695 "opt_util.m"
                              else
#line 1695 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1704 "opt_util.m"
                                  {
#line 1704 "opt_util.m"
                                    *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1704 "opt_util.m"
                                    *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1704 "opt_util.m"
                                  }
#line 1695 "opt_util.m"
                                else
#line 1695 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1725 "opt_util.m"
                                    {
#line 1725 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Rval_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                      {
#line 1726 "opt_util.m"
                                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_41, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                        return;
                                      }
#line 1725 "opt_util.m"
                                    }
#line 1695 "opt_util.m"
                                  else
#line 1695 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1725 "opt_util.m"
                                      {
#line 1725 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Rval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                        {
#line 1726 "opt_util.m"
                                          ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_42, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                          return;
                                        }
#line 1725 "opt_util.m"
                                      }
#line 1695 "opt_util.m"
                                    else
#line 1695 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1725 "opt_util.m"
                                        {
#line 1725 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Rval_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                          {
#line 1726 "opt_util.m"
                                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_43, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                            return;
                                          }
#line 1725 "opt_util.m"
                                        }
#line 1695 "opt_util.m"
                                      else
#line 1695 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1702 "opt_util.m"
                                          {
#line 1702 "opt_util.m"
                                            *ll_backend__opt_util__STATE_VARIABLE_R_24 = ll_backend__opt_util__STATE_VARIABLE_R_0_23;
#line 1702 "opt_util.m"
                                            *ll_backend__opt_util__STATE_VARIABLE_F_26 = ll_backend__opt_util__STATE_VARIABLE_F_0_25;
#line 1702 "opt_util.m"
                                          }
#line 1695 "opt_util.m"
                                        else
#line 1695 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1725 "opt_util.m"
                                            {
#line 1725 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                              {
#line 1726 "opt_util.m"
                                                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_44, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                                return;
                                              }
#line 1725 "opt_util.m"
                                            }
#line 1695 "opt_util.m"
                                          else
#line 1725 "opt_util.m"
                                            {
#line 1725 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Rval_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_6, (MR_Integer) 1)));

#line 1726 "opt_util.m"
                                              {
#line 1726 "opt_util.m"
                                                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_45, ll_backend__opt_util__STATE_VARIABLE_R_0_23, ll_backend__opt_util__STATE_VARIABLE_R_24, ll_backend__opt_util__STATE_VARIABLE_F_0_25, ll_backend__opt_util__STATE_VARIABLE_F_26);
#line 1726 "opt_util.m"
                                                return;
                                              }
#line 1725 "opt_util.m"
                                            }
#line 1695 "opt_util.m"
  }
#line 1690 "opt_util.m"
}

#line 1680 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_outputs_5_p_0(
#line 1680 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1680 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1680 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1680 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1680 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
#line 1680 "opt_util.m"
{
#line 1683 "opt_util.m"
  while (MR_TRUE)
#line 1683 "opt_util.m"
    {
#line 1683 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1683 "opt_util.m"
      {
#line 1683 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1683 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1683 "opt_util.m"
          {
#line 1683 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1683 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1683 "opt_util.m"
          }
#line 1683 "opt_util.m"
        else
#line 1684 "opt_util.m"
          {
#line 1684 "opt_util.m"
            MR_Word ll_backend__opt_util__Output_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1684 "opt_util.m"
            MR_Word ll_backend__opt_util__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1684 "opt_util.m"
            MR_Word ll_backend__opt_util__DestLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 0)));
#line 1684 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_27_27;
#line 1684 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_28_28;
#line 1685 "opt_util.m"
            MR_Word ll_backend__opt_util___VarType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 1)));
#line 1685 "opt_util.m"
            MR_Word ll_backend__opt_util___IsDummy_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 2)));
#line 1685 "opt_util.m"
            MR_Word ll_backend__opt_util___OrigType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 3)));
#line 1685 "opt_util.m"
            MR_String ll_backend__opt_util___VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 4)));
#line 1685 "opt_util.m"
            MR_Word ll_backend__opt_util___MaybeForeignType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 5)));
#line 1685 "opt_util.m"
            MR_Word ll_backend__opt_util___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Output_12, (MR_Integer) 6)));

#line 1687 "opt_util.m"
            {
#line 1687 "opt_util.m"
              ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__DestLval_16, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_27_27, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_28_28);
            }
#line 1688 "opt_util.m"
            /* direct tailcall eliminated */
#line 1688 "opt_util.m"
            {
#line 1688 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Outputs_13;
#line 1688 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_27_27;
#line 1688 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_28_28;

#line 1688 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
#line 1688 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
#line 1688 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1688 "opt_util.m"
            }
#line 1688 "opt_util.m"
            continue;
#line 1684 "opt_util.m"
          }
#line 1683 "opt_util.m"
      }
#line 1683 "opt_util.m"
      break;
#line 1683 "opt_util.m"
    }
#line 1680 "opt_util.m"
}

#line 1670 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_inputs_5_p_0(
#line 1670 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1670 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1670 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1670 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1670 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
#line 1670 "opt_util.m"
{
#line 1673 "opt_util.m"
  while (MR_TRUE)
#line 1673 "opt_util.m"
    {
#line 1673 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1673 "opt_util.m"
      {
#line 1673 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1673 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1673 "opt_util.m"
          {
#line 1673 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1673 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1673 "opt_util.m"
          }
#line 1673 "opt_util.m"
        else
#line 1674 "opt_util.m"
          {
#line 1674 "opt_util.m"
            MR_Word ll_backend__opt_util__Input_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1674 "opt_util.m"
            MR_Word ll_backend__opt_util__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1674 "opt_util.m"
            MR_Word ll_backend__opt_util__ArgRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 4)));
#line 1674 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_27_27;
#line 1674 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_28_28;
#line 1675 "opt_util.m"
            MR_String ll_backend__opt_util___VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 0)));
#line 1675 "opt_util.m"
            MR_Word ll_backend__opt_util___VarType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 1)));
#line 1675 "opt_util.m"
            MR_Word ll_backend__opt_util___IsDummy_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 2)));
#line 1675 "opt_util.m"
            MR_Word ll_backend__opt_util___OrigType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 3)));
#line 1675 "opt_util.m"
            MR_Word ll_backend__opt_util___MaybeForeignType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 5)));
#line 1675 "opt_util.m"
            MR_Word ll_backend__opt_util___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_12, (MR_Integer) 6)));

#line 1677 "opt_util.m"
            {
#line 1677 "opt_util.m"
              ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ArgRval_20, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_27_27, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_28_28);
            }
#line 1678 "opt_util.m"
            /* direct tailcall eliminated */
#line 1678 "opt_util.m"
            {
#line 1678 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Inputs_13;
#line 1678 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_27_27;
#line 1678 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_28_28;

#line 1678 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
#line 1678 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
#line 1678 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1678 "opt_util.m"
            }
#line 1678 "opt_util.m"
            continue;
#line 1674 "opt_util.m"
          }
#line 1673 "opt_util.m"
      }
#line 1673 "opt_util.m"
      break;
#line 1673 "opt_util.m"
    }
#line 1670 "opt_util.m"
}

#line 1640 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__count_temps_components_5_p_0(
#line 1640 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1640 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 1640 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 1640 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 1640 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
#line 1640 "opt_util.m"
{
#line 1643 "opt_util.m"
  while (MR_TRUE)
#line 1643 "opt_util.m"
    {
#line 1643 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1643 "opt_util.m"
      {
#line 1643 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1643 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1643 "opt_util.m"
          {
#line 1643 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1643 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1643 "opt_util.m"
          }
#line 1643 "opt_util.m"
        else
#line 1644 "opt_util.m"
          {
#line 1644 "opt_util.m"
            MR_Word ll_backend__opt_util__Comp_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1644 "opt_util.m"
            MR_Word ll_backend__opt_util__Comps_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1644 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_20_20;
#line 1644 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_21_21;

#line 1653 "opt_util.m"
            if ((ll_backend__opt_util__Comp_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1667 "opt_util.m"
              {
#line 1667 "opt_util.m"
                ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1667 "opt_util.m"
                ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1667 "opt_util.m"
              }
#line 1653 "opt_util.m"
            else
#line 1653 "opt_util.m"
              if (((MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) == (MR_mktag((MR_Integer) 1))))
#line 1653 "opt_util.m"
                {
#line 1653 "opt_util.m"
                  MR_Word ll_backend__opt_util__Inputs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Comp_12, (MR_Integer) 0)));

#line 1654 "opt_util.m"
                  {
#line 1654 "opt_util.m"
                    ll_backend__opt_util__count_temps_inputs_5_p_0(ll_backend__opt_util__Inputs_31, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_20_20, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_21_21);
                  }
#line 1653 "opt_util.m"
                }
#line 1653 "opt_util.m"
              else
#line 1653 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) == (MR_mktag((MR_Integer) 2))))
#line 1656 "opt_util.m"
                  {
#line 1656 "opt_util.m"
                    MR_Word ll_backend__opt_util__Outputs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Comp_12, (MR_Integer) 0)));

#line 1657 "opt_util.m"
                    {
#line 1657 "opt_util.m"
                      ll_backend__opt_util__count_temps_outputs_5_p_0(ll_backend__opt_util__Outputs_32, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_20_20, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_21_21);
                    }
#line 1656 "opt_util.m"
                  }
#line 1653 "opt_util.m"
                else
#line 1653 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1665 "opt_util.m"
                    {
#line 1665 "opt_util.m"
                      ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1665 "opt_util.m"
                      ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1665 "opt_util.m"
                    }
#line 1653 "opt_util.m"
                  else
#line 1653 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1663 "opt_util.m"
                      {
#line 1663 "opt_util.m"
                        ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1663 "opt_util.m"
                        ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1663 "opt_util.m"
                      }
#line 1653 "opt_util.m"
                    else
#line 1653 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1661 "opt_util.m"
                        {
#line 1661 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1661 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1661 "opt_util.m"
                        }
#line 1653 "opt_util.m"
                      else
#line 1659 "opt_util.m"
                        {
#line 1659 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_R_20_20 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1659 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_F_21_21 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1659 "opt_util.m"
                        }
#line 1646 "opt_util.m"
            /* direct tailcall eliminated */
#line 1646 "opt_util.m"
            {
#line 1646 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Comps_13;
#line 1646 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_20_20;
#line 1646 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_21_21;

#line 1646 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
#line 1646 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
#line 1646 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1646 "opt_util.m"
            }
#line 1646 "opt_util.m"
            continue;
#line 1644 "opt_util.m"
          }
#line 1643 "opt_util.m"
      }
#line 1643 "opt_util.m"
      break;
#line 1643 "opt_util.m"
    }
#line 1640 "opt_util.m"
}

#line 1511 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__instr_list_labels_3_p_0(
#line 1511 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1511 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 1511 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
#line 1511 "opt_util.m"
{
#line 1514 "opt_util.m"
  {
#line 1514 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1514 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1514 "opt_util.m"
      {
#line 1514 "opt_util.m"
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1514 "opt_util.m"
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1514 "opt_util.m"
      }
#line 1514 "opt_util.m"
    else
#line 1515 "opt_util.m"
      {
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr_4;
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadLabels_9;
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadCodeAddrs_10;
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__TailLabels_11;
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__TailCodeAddrs_12;
#line 1515 "opt_util.m"
        MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1515 "opt_util.m"
        MR_String ll_backend__opt_util__V_5_5;

#line 1515 "opt_util.m"
        ll_backend__opt_util__Uinstr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
#line 1515 "opt_util.m"
        ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
#line 1516 "opt_util.m"
        {
#line 1516 "opt_util.m"
          ll_backend__opt_util__instr_labels_3_p_0(ll_backend__opt_util__Uinstr_4, &ll_backend__opt_util__HeadLabels_9, &ll_backend__opt_util__HeadCodeAddrs_10);
        }
#line 1517 "opt_util.m"
        {
#line 1517 "opt_util.m"
          ll_backend__opt_util__instr_list_labels_3_p_0(ll_backend__opt_util__Instrs_6, &ll_backend__opt_util__TailLabels_11, &ll_backend__opt_util__TailCodeAddrs_12);
        }
#line 1518 "opt_util.m"
        {
#line 1518 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__HeadLabels_9, ll_backend__opt_util__TailLabels_11);
        }
#line 1519 "opt_util.m"
        {
#line 1519 "opt_util.m"
          *ll_backend__opt_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__opt_util__HeadCodeAddrs_10, ll_backend__opt_util__TailCodeAddrs_12);
        }
#line 1515 "opt_util.m"
      }
#line 1514 "opt_util.m"
  }
#line 1511 "opt_util.m"
}

#line 1470 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__foreign_proc_labels_6_p_0(
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeFixedLabel_7,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeLayoutLabel_8,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_9,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeSubLabel_10,
#line 1470 "opt_util.m"
  MR_Word ll_backend__opt_util__MaybeDefLabel_11,
#line 1470 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Labels_18)
#line 1470 "opt_util.m"
{
#line 1475 "opt_util.m"
  {
#line 1475 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1475 "opt_util.m"
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1475 "opt_util.m"
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_20_20;
#line 1475 "opt_util.m"
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_21_21;
#line 1475 "opt_util.m"
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_22_22;
#line 1475 "opt_util.m"
    MR_Word ll_backend__opt_util__STATE_VARIABLE_Labels_23_23;

#line 1480 "opt_util.m"
    if ((ll_backend__opt_util__MaybeFixedLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1481 "opt_util.m"
      ll_backend__opt_util__STATE_VARIABLE_Labels_20_20 = ll_backend__opt_util__STATE_VARIABLE_Labels_19_19;
#line 1480 "opt_util.m"
    else
#line 1478 "opt_util.m"
      {
#line 1478 "opt_util.m"
        MR_Word ll_backend__opt_util__FixedLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFixedLabel_7, (MR_Integer) 0)));

#line 1479 "opt_util.m"
        {
#line 1479 "opt_util.m"
          ll_backend__opt_util__STATE_VARIABLE_Labels_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_20_20, 0) = ((MR_Box) (ll_backend__opt_util__FixedLabel_13));
#line 1479 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_20_20, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_19_19));
#line 1479 "opt_util.m"
        }
#line 1478 "opt_util.m"
      }
#line 1486 "opt_util.m"
    if ((ll_backend__opt_util__MaybeLayoutLabel_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1487 "opt_util.m"
      ll_backend__opt_util__STATE_VARIABLE_Labels_21_21 = ll_backend__opt_util__STATE_VARIABLE_Labels_20_20;
#line 1486 "opt_util.m"
    else
#line 1484 "opt_util.m"
      {
#line 1484 "opt_util.m"
        MR_Word ll_backend__opt_util__LayoutLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLayoutLabel_8, (MR_Integer) 0)));

#line 1485 "opt_util.m"
        {
#line 1485 "opt_util.m"
          ll_backend__opt_util__STATE_VARIABLE_Labels_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_21_21, 0) = ((MR_Box) (ll_backend__opt_util__LayoutLabel_14));
#line 1485 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_21_21, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_20_20));
#line 1485 "opt_util.m"
        }
#line 1484 "opt_util.m"
      }
#line 1492 "opt_util.m"
    if ((ll_backend__opt_util__MaybeOnlyLayoutLabel_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1493 "opt_util.m"
      ll_backend__opt_util__STATE_VARIABLE_Labels_22_22 = ll_backend__opt_util__STATE_VARIABLE_Labels_21_21;
#line 1492 "opt_util.m"
    else
#line 1490 "opt_util.m"
      {
#line 1490 "opt_util.m"
        MR_Word ll_backend__opt_util__OnlyLayoutLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeOnlyLayoutLabel_9, (MR_Integer) 0)));

#line 1491 "opt_util.m"
        {
#line 1491 "opt_util.m"
          ll_backend__opt_util__STATE_VARIABLE_Labels_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_22_22, 0) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel_15));
#line 1491 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_22_22, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_21_21));
#line 1491 "opt_util.m"
        }
#line 1490 "opt_util.m"
      }
#line 1498 "opt_util.m"
    if ((ll_backend__opt_util__MaybeSubLabel_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1499 "opt_util.m"
      ll_backend__opt_util__STATE_VARIABLE_Labels_23_23 = ll_backend__opt_util__STATE_VARIABLE_Labels_22_22;
#line 1498 "opt_util.m"
    else
#line 1496 "opt_util.m"
      {
#line 1496 "opt_util.m"
        MR_Word ll_backend__opt_util__SubLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSubLabel_10, (MR_Integer) 0)));

#line 1497 "opt_util.m"
        {
#line 1497 "opt_util.m"
          ll_backend__opt_util__STATE_VARIABLE_Labels_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_23_23, 0) = ((MR_Box) (ll_backend__opt_util__SubLabel_16));
#line 1497 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Labels_23_23, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_22_22));
#line 1497 "opt_util.m"
        }
#line 1496 "opt_util.m"
      }
#line 1504 "opt_util.m"
    if ((ll_backend__opt_util__MaybeDefLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1505 "opt_util.m"
      *ll_backend__opt_util__STATE_VARIABLE_Labels_18 = ll_backend__opt_util__STATE_VARIABLE_Labels_23_23;
#line 1504 "opt_util.m"
    else
#line 1502 "opt_util.m"
      {
#line 1502 "opt_util.m"
        MR_Word ll_backend__opt_util__DefLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeDefLabel_11, (MR_Integer) 0)));

#line 1503 "opt_util.m"
        {
#line 1503 "opt_util.m"
          MR_Word base;
#line 1503 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_Labels_18 = base;
#line 1503 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__DefLabel_17));
#line 1503 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Labels_23_23));
#line 1503 "opt_util.m"
        }
#line 1502 "opt_util.m"
      }
#line 1475 "opt_util.m"
  }
#line 1470 "opt_util.m"
}

#line 1457 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(
#line 1457 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1457 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2,
#line 1457 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevLabels_3)
#line 1457 "opt_util.m"
{
#line 1460 "opt_util.m"
  while (MR_TRUE)
#line 1460 "opt_util.m"
    {
#line 1460 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1460 "opt_util.m"
      {
#line 1460 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1460 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_RevLabels_3 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2;
#line 1460 "opt_util.m"
        else
#line 1461 "opt_util.m"
          {
#line 1461 "opt_util.m"
            MR_Word ll_backend__opt_util__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1461 "opt_util.m"
            MR_Word ll_backend__opt_util__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1461 "opt_util.m"
            MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13;

#line 1465 "opt_util.m"
            if ((ll_backend__opt_util__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1466 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2;
#line 1465 "opt_util.m"
            else
#line 1463 "opt_util.m"
              {
#line 1463 "opt_util.m"
                MR_Word ll_backend__opt_util__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel_7, (MR_Integer) 0)));

#line 1464 "opt_util.m"
                {
#line 1464 "opt_util.m"
                  ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13, 0) = ((MR_Box) (ll_backend__opt_util__Label_10));
#line 1464 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2));
#line 1464 "opt_util.m"
                }
#line 1463 "opt_util.m"
              }
#line 1468 "opt_util.m"
            /* direct tailcall eliminated */
#line 1468 "opt_util.m"
            {
#line 1468 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__MaybeLabels_8;
#line 1468 "opt_util.m"
              MR_Word ll_backend__opt_util__STATE_VARIABLE_RevLabels_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_13_13;

#line 1468 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_RevLabels_0_2 = ll_backend__opt_util__STATE_VARIABLE_RevLabels_0__tmp_copy_2;
#line 1468 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1468 "opt_util.m"
            }
#line 1468 "opt_util.m"
            continue;
#line 1461 "opt_util.m"
          }
#line 1460 "opt_util.m"
      }
#line 1460 "opt_util.m"
      break;
#line 1460 "opt_util.m"
    }
#line 1457 "opt_util.m"
}

#line 1362 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__find_label_code_addrs_3_p_0(
#line 1362 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1362 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 1362 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_3)
#line 1362 "opt_util.m"
{
#line 1365 "opt_util.m"
  while (MR_TRUE)
#line 1365 "opt_util.m"
    {
#line 1365 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1365 "opt_util.m"
      {
#line 1365 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1365 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "opt_util.m"
          *ll_backend__opt_util__Labels_3 = ll_backend__opt_util__HeadVar__2_2;
#line 1365 "opt_util.m"
        else
#line 1366 "opt_util.m"
          {
#line 1366 "opt_util.m"
            MR_Word ll_backend__opt_util__CodeAddr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1366 "opt_util.m"
            MR_Word ll_backend__opt_util__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1366 "opt_util.m"
            MR_Word ll_backend__opt_util__Labels1_10;
#line 1369 "opt_util.m"
            MR_Word ll_backend__opt_util__Label_9;

#line 1367 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_5)) == (MR_mktag((MR_Integer) 1)));
#line 1367 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1367 "opt_util.m"
              {
#line 1367 "opt_util.m"
                ll_backend__opt_util__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_5, (MR_Integer) 0)));
#line 1368 "opt_util.m"
                {
#line 1368 "opt_util.m"
                  ll_backend__opt_util__Labels1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__Labels1_10, 0) = ((MR_Box) (ll_backend__opt_util__Label_9));
#line 1368 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__Labels1_10, 1) = ((MR_Box) (ll_backend__opt_util__HeadVar__2_2));
#line 1368 "opt_util.m"
                }
#line 1367 "opt_util.m"
              }
#line 1367 "opt_util.m"
            else
#line 1370 "opt_util.m"
              ll_backend__opt_util__Labels1_10 = ll_backend__opt_util__HeadVar__2_2;
#line 1372 "opt_util.m"
            /* direct tailcall eliminated */
#line 1372 "opt_util.m"
            {
#line 1372 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rest_6;
#line 1372 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Labels1_10;

#line 1372 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
#line 1372 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1372 "opt_util.m"
            }
#line 1372 "opt_util.m"
            continue;
#line 1366 "opt_util.m"
          }
#line 1365 "opt_util.m"
      }
#line 1365 "opt_util.m"
      break;
#line 1365 "opt_util.m"
    }
#line 1362 "opt_util.m"
}

#line 1278 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__instr_labels_2_3_p_0(
#line 1278 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_4,
#line 1278 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_5,
#line 1278 "opt_util.m"
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
#line 1278 "opt_util.m"
{
#line 1311 "opt_util.m"
  {
#line 1311 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1311 "opt_util.m"
    if ((ll_backend__opt_util__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1311 "opt_util.m"
      {
#line 1312 "opt_util.m"
        *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
      }
#line 1311 "opt_util.m"
    else
#line 1311 "opt_util.m"
      if ((ll_backend__opt_util__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "opt_util.m"
        {
#line 1312 "opt_util.m"
          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
        }
#line 1311 "opt_util.m"
      else
#line 1311 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "opt_util.m"
          {
#line 1312 "opt_util.m"
            *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
          }
#line 1311 "opt_util.m"
        else
#line 1311 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 2))))
#line 1311 "opt_util.m"
            {
#line 1312 "opt_util.m"
              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
            }
#line 1311 "opt_util.m"
          else
#line 1311 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1311 "opt_util.m"
              {
#line 1312 "opt_util.m"
                *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
              }
#line 1311 "opt_util.m"
            else
#line 1311 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1311 "opt_util.m"
                {
#line 1312 "opt_util.m"
                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                }
#line 1311 "opt_util.m"
              else
#line 1311 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1345 "opt_util.m"
                  {
#line 1345 "opt_util.m"
                    MR_Word ll_backend__opt_util__Instrs_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1345 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1345 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

#line 1346 "opt_util.m"
                    {
#line 1346 "opt_util.m"
                      ll_backend__opt_util__instr_list_labels_3_p_0(ll_backend__opt_util__Instrs_79, ll_backend__opt_util__Labels_5, ll_backend__opt_util__CodeAddrs_6);
#line 1346 "opt_util.m"
                      return;
                    }
#line 1345 "opt_util.m"
                  }
#line 1311 "opt_util.m"
                else
#line 1311 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1348 "opt_util.m"
                    {
#line 1348 "opt_util.m"
                      MR_Word ll_backend__opt_util__MaybeLabels_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1348 "opt_util.m"
                      MR_Word ll_backend__opt_util__RevLabels_82;
#line 1348 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1349 "opt_util.m"
                      {
#line 1349 "opt_util.m"
                        ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(ll_backend__opt_util__MaybeLabels_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevLabels_82);
                      }
#line 1350 "opt_util.m"
                      {
#line 1350 "opt_util.m"
                        mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__RevLabels_82, ll_backend__opt_util__Labels_5);
                      }
#line 1351 "opt_util.m"
                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "opt_util.m"
                    }
#line 1311 "opt_util.m"
                  else
#line 1311 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1311 "opt_util.m"
                      {
#line 1312 "opt_util.m"
                        *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                      }
#line 1311 "opt_util.m"
                    else
#line 1311 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1326 "opt_util.m"
                        {
#line 1332 "opt_util.m"
                          {
#line 1332 "opt_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.instr_labels_2\'/3", (MR_String) "decr_sp_and_return");
#line 1332 "opt_util.m"
                            return;
                          }
#line 1326 "opt_util.m"
                        }
#line 1311 "opt_util.m"
                      else
#line 1311 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1354 "opt_util.m"
                          {
#line 1354 "opt_util.m"
                            MR_Word ll_backend__opt_util__MaybeFixLabel_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
#line 1354 "opt_util.m"
                            MR_Word ll_backend__opt_util__MaybeLayoutLabel_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
#line 1354 "opt_util.m"
                            MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
#line 1354 "opt_util.m"
                            MR_Word ll_backend__opt_util__MaybeSubLabel_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 7)));
#line 1354 "opt_util.m"
                            MR_Word ll_backend__opt_util__MaybeDefLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 8)));
#line 1353 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1353 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1353 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1353 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 9)));
#line 1353 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 10)));

#line 1355 "opt_util.m"
                            {
#line 1355 "opt_util.m"
                              ll_backend__opt_util__foreign_proc_labels_6_p_0(ll_backend__opt_util__MaybeFixLabel_86, ll_backend__opt_util__MaybeLayoutLabel_87, ll_backend__opt_util__MaybeOnlyLayoutLabel_88, ll_backend__opt_util__MaybeSubLabel_89, ll_backend__opt_util__MaybeDefLabel_90, ll_backend__opt_util__Labels_5);
                            }
#line 1357 "opt_util.m"
                            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "opt_util.m"
                          }
#line 1311 "opt_util.m"
                        else
#line 1311 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1334 "opt_util.m"
                            {
#line 1334 "opt_util.m"
                              MR_Word ll_backend__opt_util__Child_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1334 "opt_util.m"
                              MR_Word ll_backend__opt_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1335 "opt_util.m"
                              {
#line 1335 "opt_util.m"
                                MR_Word base;
#line 1335 "opt_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "opt_util.m"
                                *ll_backend__opt_util__Labels_5 = base;
#line 1335 "opt_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Child_70));
#line 1335 "opt_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1335 "opt_util.m"
                              }
#line 1336 "opt_util.m"
                              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1334 "opt_util.m"
                            }
#line 1311 "opt_util.m"
                          else
#line 1311 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1311 "opt_util.m"
                              {
#line 1312 "opt_util.m"
                                *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                              }
#line 1311 "opt_util.m"
                            else
#line 1311 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1322 "opt_util.m"
                                {
#line 1322 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Addr_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1323 "opt_util.m"
                                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1324 "opt_util.m"
                                  {
#line 1324 "opt_util.m"
                                    MR_Word base;
#line 1324 "opt_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "opt_util.m"
                                    *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1324 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_66));
#line 1324 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "opt_util.m"
                                  }
#line 1322 "opt_util.m"
                                }
#line 1311 "opt_util.m"
                              else
#line 1311 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1322 "opt_util.m"
                                  {
#line 1322 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Addr_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1321 "opt_util.m"
                                    MR_Word ll_backend__opt_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1323 "opt_util.m"
                                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1324 "opt_util.m"
                                    {
#line 1324 "opt_util.m"
                                      MR_Word base;
#line 1324 "opt_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "opt_util.m"
                                      *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1324 "opt_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_105));
#line 1324 "opt_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "opt_util.m"
                                    }
#line 1322 "opt_util.m"
                                  }
#line 1311 "opt_util.m"
                                else
#line 1311 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1311 "opt_util.m"
                                    {
#line 1312 "opt_util.m"
                                      *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                    }
#line 1311 "opt_util.m"
                                  else
#line 1311 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1311 "opt_util.m"
                                      {
#line 1312 "opt_util.m"
                                        *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                      }
#line 1311 "opt_util.m"
                                    else
#line 1311 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1311 "opt_util.m"
                                        {
#line 1312 "opt_util.m"
                                          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                        }
#line 1311 "opt_util.m"
                                      else
#line 1311 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1341 "opt_util.m"
                                          {
#line 1341 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Label_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1338 "opt_util.m"
                                            MR_Word ll_backend__opt_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1342 "opt_util.m"
                                            {
#line 1342 "opt_util.m"
                                              MR_Word base;
#line 1342 "opt_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "opt_util.m"
                                              *ll_backend__opt_util__Labels_5 = base;
#line 1342 "opt_util.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_72));
#line 1342 "opt_util.m"
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "opt_util.m"
                                            }
#line 1343 "opt_util.m"
                                            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "opt_util.m"
                                          }
#line 1311 "opt_util.m"
                                        else
#line 1311 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1311 "opt_util.m"
                                            {
#line 1312 "opt_util.m"
                                              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                            }
#line 1311 "opt_util.m"
                                          else
#line 1311 "opt_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1311 "opt_util.m"
                                              {
#line 1312 "opt_util.m"
                                                *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                              }
#line 1311 "opt_util.m"
                                            else
#line 1311 "opt_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1311 "opt_util.m"
                                                {
#line 1312 "opt_util.m"
                                                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                }
#line 1311 "opt_util.m"
                                              else
#line 1311 "opt_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1311 "opt_util.m"
                                                  {
#line 1312 "opt_util.m"
                                                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                    *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                  }
#line 1311 "opt_util.m"
                                                else
#line 1311 "opt_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1341 "opt_util.m"
                                                    {
#line 1341 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__Label_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1340 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1340 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

#line 1342 "opt_util.m"
                                                      {
#line 1342 "opt_util.m"
                                                        MR_Word base;
#line 1342 "opt_util.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "opt_util.m"
                                                        *ll_backend__opt_util__Labels_5 = base;
#line 1342 "opt_util.m"
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_107));
#line 1342 "opt_util.m"
                                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "opt_util.m"
                                                      }
#line 1343 "opt_util.m"
                                                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "opt_util.m"
                                                    }
#line 1311 "opt_util.m"
                                                  else
#line 1311 "opt_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1341 "opt_util.m"
                                                      {
#line 1341 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__Label_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1339 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1339 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

#line 1342 "opt_util.m"
                                                        {
#line 1342 "opt_util.m"
                                                          MR_Word base;
#line 1342 "opt_util.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "opt_util.m"
                                                          *ll_backend__opt_util__Labels_5 = base;
#line 1342 "opt_util.m"
                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_109));
#line 1342 "opt_util.m"
                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "opt_util.m"
                                                        }
#line 1343 "opt_util.m"
                                                        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "opt_util.m"
                                                      }
#line 1311 "opt_util.m"
                                                    else
#line 1311 "opt_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1315 "opt_util.m"
                                                        {
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__Target_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__Ret_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__V_101_101;
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
#line 1315 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));

#line 1316 "opt_util.m"
                                                          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "opt_util.m"
                                                          {
#line 1317 "opt_util.m"
                                                            ll_backend__opt_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "opt_util.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_101_101, 0) = ((MR_Box) (ll_backend__opt_util__Ret_60));
#line 1317 "opt_util.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "opt_util.m"
                                                          }
#line 1317 "opt_util.m"
                                                          {
#line 1317 "opt_util.m"
                                                            MR_Word base;
#line 1317 "opt_util.m"
                                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "opt_util.m"
                                                            *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1317 "opt_util.m"
                                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Target_59));
#line 1317 "opt_util.m"
                                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_101_101));
#line 1317 "opt_util.m"
                                                          }
#line 1315 "opt_util.m"
                                                        }
#line 1311 "opt_util.m"
                                                      else
#line 1311 "opt_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1311 "opt_util.m"
                                                          {
#line 1312 "opt_util.m"
                                                            *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                          }
#line 1311 "opt_util.m"
                                                        else
#line 1311 "opt_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1311 "opt_util.m"
                                                            {
#line 1312 "opt_util.m"
                                                              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                            }
#line 1311 "opt_util.m"
                                                          else
#line 1311 "opt_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1311 "opt_util.m"
                                                              {
#line 1311 "opt_util.m"
                                                                MR_Word ll_backend__opt_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1319 "opt_util.m"
                                                                MR_Word ll_backend__opt_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1311 "opt_util.m"
                                                                if ((ll_backend__opt_util__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "opt_util.m"
                                                                  {
#line 1312 "opt_util.m"
                                                                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                    *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                  }
#line 1311 "opt_util.m"
                                                                else
#line 1322 "opt_util.m"
                                                                  {
#line 1322 "opt_util.m"
                                                                    MR_Word ll_backend__opt_util__Addr_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_115_115, (MR_Integer) 0)));

#line 1323 "opt_util.m"
                                                                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1324 "opt_util.m"
                                                                    {
#line 1324 "opt_util.m"
                                                                      MR_Word base;
#line 1324 "opt_util.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "opt_util.m"
                                                                      *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1324 "opt_util.m"
                                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Addr_111));
#line 1324 "opt_util.m"
                                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "opt_util.m"
                                                                    }
#line 1322 "opt_util.m"
                                                                  }
#line 1311 "opt_util.m"
                                                              }
#line 1311 "opt_util.m"
                                                            else
#line 1311 "opt_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1311 "opt_util.m"
                                                                {
#line 1312 "opt_util.m"
                                                                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                }
#line 1311 "opt_util.m"
                                                              else
#line 1311 "opt_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1311 "opt_util.m"
                                                                  {
#line 1312 "opt_util.m"
                                                                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                    *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                  }
#line 1311 "opt_util.m"
                                                                else
#line 1311 "opt_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1311 "opt_util.m"
                                                                    {
#line 1312 "opt_util.m"
                                                                      *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                    }
#line 1311 "opt_util.m"
                                                                  else
#line 1311 "opt_util.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1311 "opt_util.m"
                                                                      {
#line 1312 "opt_util.m"
                                                                        *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                      }
#line 1311 "opt_util.m"
                                                                    else
#line 1311 "opt_util.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1311 "opt_util.m"
                                                                        {
#line 1312 "opt_util.m"
                                                                          *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                        }
#line 1311 "opt_util.m"
                                                                      else
#line 1311 "opt_util.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1311 "opt_util.m"
                                                                          {
#line 1312 "opt_util.m"
                                                                            *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                          }
#line 1311 "opt_util.m"
                                                                        else
#line 1311 "opt_util.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1311 "opt_util.m"
                                                                            {
#line 1312 "opt_util.m"
                                                                              *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                            }
#line 1311 "opt_util.m"
                                                                          else
#line 1311 "opt_util.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1311 "opt_util.m"
                                                                              {
#line 1312 "opt_util.m"
                                                                                *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                                *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                              }
#line 1311 "opt_util.m"
                                                                            else
#line 1311 "opt_util.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1311 "opt_util.m"
                                                                                {
#line 1312 "opt_util.m"
                                                                                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                                }
#line 1311 "opt_util.m"
                                                                              else
#line 1311 "opt_util.m"
                                                                                {
#line 1312 "opt_util.m"
                                                                                  *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1313 "opt_util.m"
                                                                                  *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1311 "opt_util.m"
                                                                                }
#line 1311 "opt_util.m"
  }
#line 1278 "opt_util.m"
}

#line 1221 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__can_use_livevals_2_p_0(
#line 1221 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1221 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 1221 "opt_util.m"
{
#line 1223 "opt_util.m"
  {
#line 1223 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1223 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1247 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
    else
#line 1223 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "opt_util.m"
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
      else
#line 1223 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1223 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
        else
#line 1223 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1224 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
          else
#line 1223 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1233 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
            else
#line 1223 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1226 "opt_util.m"
                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
              else
#line 1223 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1225 "opt_util.m"
                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                else
#line 1223 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1232 "opt_util.m"
                    *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                  else
#line 1223 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1252 "opt_util.m"
                      *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                    else
#line 1223 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1253 "opt_util.m"
                        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1223 "opt_util.m"
                      else
#line 1223 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1254 "opt_util.m"
                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                        else
#line 1223 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1256 "opt_util.m"
                            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                          else
#line 1223 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1240 "opt_util.m"
                              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                            else
#line 1223 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1231 "opt_util.m"
                                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1223 "opt_util.m"
                              else
#line 1223 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1234 "opt_util.m"
                                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1223 "opt_util.m"
                                else
#line 1223 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1237 "opt_util.m"
                                    *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                  else
#line 1223 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1251 "opt_util.m"
                                      *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                    else
#line 1223 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1255 "opt_util.m"
                                        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                      else
#line 1223 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1257 "opt_util.m"
                                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                        else
#line 1223 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1227 "opt_util.m"
                                            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                          else
#line 1223 "opt_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1230 "opt_util.m"
                                              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                            else
#line 1223 "opt_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1258 "opt_util.m"
                                                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                              else
#line 1223 "opt_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1261 "opt_util.m"
                                                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                else
#line 1223 "opt_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1260 "opt_util.m"
                                                    *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1223 "opt_util.m"
                                                  else
#line 1223 "opt_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1259 "opt_util.m"
                                                      *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                    else
#line 1223 "opt_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1228 "opt_util.m"
                                                        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1223 "opt_util.m"
                                                      else
#line 1223 "opt_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1238 "opt_util.m"
                                                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                        else
#line 1223 "opt_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1249 "opt_util.m"
                                                            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                          else
#line 1223 "opt_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1229 "opt_util.m"
                                                              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                            else
#line 1223 "opt_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1250 "opt_util.m"
                                                                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                              else
#line 1223 "opt_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1241 "opt_util.m"
                                                                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                else
#line 1223 "opt_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1242 "opt_util.m"
                                                                    *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                  else
#line 1223 "opt_util.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1243 "opt_util.m"
                                                                      *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                    else
#line 1223 "opt_util.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1246 "opt_util.m"
                                                                        *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                      else
#line 1223 "opt_util.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1239 "opt_util.m"
                                                                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                        else
#line 1223 "opt_util.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1236 "opt_util.m"
                                                                            *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                          else
#line 1223 "opt_util.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1235 "opt_util.m"
                                                                              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                            else
#line 1223 "opt_util.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1245 "opt_util.m"
                                                                                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
                                                                              else
#line 1244 "opt_util.m"
                                                                                *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1223 "opt_util.m"
  }
#line 1221 "opt_util.m"
}

#line 1211 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__can_block_fall_through_2_p_0(
#line 1211 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 1211 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 1211 "opt_util.m"
{
#line 1213 "opt_util.m"
  while (MR_TRUE)
#line 1213 "opt_util.m"
    {
#line 1213 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1213 "opt_util.m"
      {
#line 1213 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1213 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1213 "opt_util.m"
        else
#line 1214 "opt_util.m"
          {
#line 1214 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_3;
#line 1214 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1214 "opt_util.m"
            MR_Word ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1214 "opt_util.m"
            MR_String ll_backend__opt_util__V_4_4;
#line 1215 "opt_util.m"
            MR_Word ll_backend__opt_util__V_8_8;

#line 1214 "opt_util.m"
            ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_7_7, (MR_Integer) 0)));
#line 1214 "opt_util.m"
            ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_7_7, (MR_Integer) 1)));
#line 1215 "opt_util.m"
            {
#line 1215 "opt_util.m"
              ll_backend__opt_util__V_8_8 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr_3);
            }
#line 1215 "opt_util.m"
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_8_8 == (MR_Integer) 0);
#line 1217 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1216 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1217 "opt_util.m"
            else
#line 1218 "opt_util.m"
              {
#line 1218 "opt_util.m"
                /* direct tailcall eliminated */
#line 1218 "opt_util.m"
                {
#line 1218 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_5;

#line 1218 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1218 "opt_util.m"
                }
#line 1218 "opt_util.m"
                continue;
#line 1218 "opt_util.m"
              }
#line 1214 "opt_util.m"
          }
#line 1213 "opt_util.m"
      }
#line 1213 "opt_util.m"
      break;
#line 1213 "opt_util.m"
    }
#line 1211 "opt_util.m"
}

#line 1125 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__can_components_branch_away_1_f_0(
#line 1125 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 1125 "opt_util.m"
{
#line 1127 "opt_util.m"
  while (MR_TRUE)
#line 1127 "opt_util.m"
    {
#line 1127 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1127 "opt_util.m"
      {
#line 1127 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 1127 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1127 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1127 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1127 "opt_util.m"
        else
#line 1128 "opt_util.m"
          {
#line 1128 "opt_util.m"
            MR_Word ll_backend__opt_util__Component_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1128 "opt_util.m"
            MR_Word ll_backend__opt_util__Components_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 6370 "ll_backend.opt_util.c"
            if ((ll_backend__opt_util__Component_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1134 "opt_util.m"
              {
#line 1134 "opt_util.m"
                /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                {
#line 1134 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                }
#line 1134 "opt_util.m"
                continue;
#line 1134 "opt_util.m"
              }
#line 6389 "ll_backend.opt_util.c"
            else
#line 6391 "ll_backend.opt_util.c"
              if (((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 1))))
#line 1134 "opt_util.m"
                {
#line 1134 "opt_util.m"
                  /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                  {
#line 1134 "opt_util.m"
                    MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                    ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                  }
#line 1134 "opt_util.m"
                  continue;
#line 1134 "opt_util.m"
                }
#line 6410 "ll_backend.opt_util.c"
              else
#line 6412 "ll_backend.opt_util.c"
                if (((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 2))))
#line 1134 "opt_util.m"
                  {
#line 1134 "opt_util.m"
                    /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                    {
#line 1134 "opt_util.m"
                      MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                      ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                    }
#line 1134 "opt_util.m"
                    continue;
#line 1134 "opt_util.m"
                  }
#line 6431 "ll_backend.opt_util.c"
                else
#line 6433 "ll_backend.opt_util.c"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1134 "opt_util.m"
                    {
#line 1134 "opt_util.m"
                      /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                      {
#line 1134 "opt_util.m"
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                      }
#line 1134 "opt_util.m"
                      continue;
#line 1134 "opt_util.m"
                    }
#line 6452 "ll_backend.opt_util.c"
                  else
#line 6454 "ll_backend.opt_util.c"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1163 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 6458 "ll_backend.opt_util.c"
                    else
#line 6460 "ll_backend.opt_util.c"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6462 "ll_backend.opt_util.c"
                        {
#line 6464 "ll_backend.opt_util.c"
                          MR_Word ll_backend__opt_util__CanBranchAway_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 1)));
#line 1154 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 2)));
#line 1154 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 3)));
#line 1154 "opt_util.m"
                          MR_String ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Component_3, (MR_Integer) 4)));

#line 6473 "ll_backend.opt_util.c"
                          if ((ll_backend__opt_util__CanBranchAway_11 == (MR_Integer) 0))
#line 1157 "opt_util.m"
                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 6477 "ll_backend.opt_util.c"
                          else
#line 1134 "opt_util.m"
                            {
#line 1134 "opt_util.m"
                              /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                              {
#line 1134 "opt_util.m"
                                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                              }
#line 1134 "opt_util.m"
                              continue;
#line 1134 "opt_util.m"
                            }
#line 6496 "ll_backend.opt_util.c"
                        }
#line 6498 "ll_backend.opt_util.c"
                      else
#line 1134 "opt_util.m"
                        {
#line 1134 "opt_util.m"
                          /* direct tailcall eliminated */
#line 1134 "opt_util.m"
                          {
#line 1134 "opt_util.m"
                            MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Components_4;

#line 1134 "opt_util.m"
                            ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1134 "opt_util.m"
                          }
#line 1134 "opt_util.m"
                          continue;
#line 1134 "opt_util.m"
                        }
#line 1128 "opt_util.m"
          }
#line 1127 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 1127 "opt_util.m"
      }
#line 1127 "opt_util.m"
      break;
#line 1127 "opt_util.m"
    }
#line 1125 "opt_util.m"
}

#line 1000 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(
#line 1000 "opt_util.m"
  MR_Word ll_backend__opt_util__Input_3)
#line 1000 "opt_util.m"
{
#line 1002 "opt_util.m"
  {
#line 1002 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1002 "opt_util.m"
    MR_Word ll_backend__opt_util__Refers_4;
#line 1002 "opt_util.m"
    MR_Word ll_backend__opt_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 0)));
#line 1002 "opt_util.m"
    MR_Word ll_backend__opt_util__IsDummy_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 2)));
#line 1003 "opt_util.m"
    MR_Word ll_backend__opt_util___Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 1)));
#line 1003 "opt_util.m"
    MR_Word ll_backend__opt_util___OrigType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 3)));
#line 1003 "opt_util.m"
    MR_String ll_backend__opt_util___Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 4)));
#line 1003 "opt_util.m"
    MR_Word ll_backend__opt_util___MaybeForeign_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 5)));
#line 1003 "opt_util.m"
    MR_Word ll_backend__opt_util___BoxPolicy_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 6)));

#line 1008 "opt_util.m"
    if ((ll_backend__opt_util__IsDummy_7 == (MR_Integer) 0))
#line 1007 "opt_util.m"
      ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
#line 1008 "opt_util.m"
    else
#line 1010 "opt_util.m"
      {
#line 1010 "opt_util.m"
        return ll_backend__opt_util__Refers_4 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_5);
      }
#line 1002 "opt_util.m"
    return ll_backend__opt_util__Refers_4;
#line 1002 "opt_util.m"
  }
#line 1000 "opt_util.m"
}

#line 987 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(
#line 987 "opt_util.m"
  MR_Word ll_backend__opt_util__Input_3)
#line 987 "opt_util.m"
{
#line 989 "opt_util.m"
  {
#line 989 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 989 "opt_util.m"
    MR_Word ll_backend__opt_util__Refers_4;
#line 989 "opt_util.m"
    MR_Word ll_backend__opt_util__IsDummy_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 2)));
#line 989 "opt_util.m"
    MR_Word ll_backend__opt_util__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 4)));
#line 990 "opt_util.m"
    MR_String ll_backend__opt_util___Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 0)));
#line 990 "opt_util.m"
    MR_Word ll_backend__opt_util___Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 1)));
#line 990 "opt_util.m"
    MR_Word ll_backend__opt_util___OrigType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 3)));
#line 990 "opt_util.m"
    MR_Word ll_backend__opt_util___MaybeForeign_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 5)));
#line 990 "opt_util.m"
    MR_Word ll_backend__opt_util___BoxPolicy_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Input_3, (MR_Integer) 6)));

#line 995 "opt_util.m"
    if ((ll_backend__opt_util__IsDummy_7 == (MR_Integer) 0))
#line 994 "opt_util.m"
      ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
#line 995 "opt_util.m"
    else
#line 997 "opt_util.m"
      {
#line 997 "opt_util.m"
        return ll_backend__opt_util__Refers_4 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_9);
      }
#line 989 "opt_util.m"
    return ll_backend__opt_util__Refers_4;
#line 989 "opt_util.m"
  }
#line 987 "opt_util.m"
}

#line 975 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_2(
#line 975 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 975 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1)
#line 975 "opt_util.m"
{
#line 975 "opt_util.m"
  {
#line 975 "opt_util.m"
    MR_Box ll_backend__opt_util__wrapper_arg_2;
#line 975 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
#line 975 "opt_util.m"
    MR_Word ll_backend__opt_util__conv1_Refers_4;

#line 975 "opt_util.m"
    {
#line 975 "opt_util.m"
      ll_backend__opt_util__conv1_Refers_4 = ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
#line 975 "opt_util.m"
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv1_Refers_4));
#line 975 "opt_util.m"
    return ll_backend__opt_util__wrapper_arg_2;
#line 975 "opt_util.m"
  }
#line 975 "opt_util.m"
}

#line 971 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0_1(
#line 971 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 971 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1)
#line 971 "opt_util.m"
{
#line 971 "opt_util.m"
  {
#line 971 "opt_util.m"
    MR_Box ll_backend__opt_util__wrapper_arg_2;
#line 971 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
#line 971 "opt_util.m"
    MR_Word ll_backend__opt_util__conv0_Refers_4;

#line 971 "opt_util.m"
    {
#line 971 "opt_util.m"
      ll_backend__opt_util__conv0_Refers_4 = ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
#line 971 "opt_util.m"
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Refers_4));
#line 971 "opt_util.m"
    return ll_backend__opt_util__wrapper_arg_2;
#line 971 "opt_util.m"
  }
#line 971 "opt_util.m"
}

#line 966 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(
#line 966 "opt_util.m"
  MR_Word ll_backend__opt_util__Component_3)
#line 966 "opt_util.m"
{
#line 970 "opt_util.m"
  {
#line 970 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 970 "opt_util.m"
    MR_Word ll_backend__opt_util__Refers_4;

#line 970 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 1))))
#line 970 "opt_util.m"
      {
#line 970 "opt_util.m"
        MR_Word ll_backend__opt_util__Inputs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Component_3, (MR_Integer) 0)));
#line 970 "opt_util.m"
        MR_Word ll_backend__opt_util__V_18_18;

#line 971 "opt_util.m"
        {
#line 971 "opt_util.m"
          ll_backend__opt_util__V_18_18 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[5], ll_backend__opt_util__Inputs_5);
        }
#line 971 "opt_util.m"
        {
#line 971 "opt_util.m"
          mercury__bool__or_list_2_p_0(ll_backend__opt_util__V_18_18, &ll_backend__opt_util__Refers_4);
        }
#line 970 "opt_util.m"
      }
#line 970 "opt_util.m"
    else
#line 970 "opt_util.m"
      if (((MR_tag((MR_Word) ll_backend__opt_util__Component_3)) == (MR_mktag((MR_Integer) 2))))
#line 974 "opt_util.m"
        {
#line 974 "opt_util.m"
          MR_Word ll_backend__opt_util__Outputs_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Component_3, (MR_Integer) 0)));
#line 974 "opt_util.m"
          MR_Word ll_backend__opt_util__V_16_16;

#line 975 "opt_util.m"
          {
#line 975 "opt_util.m"
            ll_backend__opt_util__V_16_16 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[6], ll_backend__opt_util__Outputs_6);
          }
#line 975 "opt_util.m"
          {
#line 975 "opt_util.m"
            mercury__bool__or_list_2_p_0(ll_backend__opt_util__V_16_16, &ll_backend__opt_util__Refers_4);
          }
#line 974 "opt_util.m"
        }
#line 970 "opt_util.m"
      else
#line 984 "opt_util.m"
        ll_backend__opt_util__Refers_4 = (MR_Integer) 0;
#line 970 "opt_util.m"
    return ll_backend__opt_util__Refers_4;
#line 970 "opt_util.m"
  }
#line 966 "opt_util.m"
}

#line 771 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(
#line 771 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 771 "opt_util.m"
{
#line 773 "opt_util.m"
  {
#line 773 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 773 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 773 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
    else
#line 773 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 778 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "opt_util.m"
      else
#line 773 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 783 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
        else
#line 773 "opt_util.m"
          if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 777 "opt_util.m"
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "opt_util.m"
          else
#line 773 "opt_util.m"
            if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 780 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "opt_util.m"
            else
#line 773 "opt_util.m"
              if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 779 "opt_util.m"
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "opt_util.m"
              else
#line 773 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 774 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
                else
#line 773 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 773 "opt_util.m"
                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
                  else
#line 773 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 782 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
                    else
#line 773 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 781 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "opt_util.m"
                      else
#line 776 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 773 "opt_util.m"
  }
#line 771 "opt_util.m"
}

#line 733 "opt_util.m"
static MR_Word MR_CALL 
ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(
#line 733 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 733 "opt_util.m"
{
#line 735 "opt_util.m"
  {
#line 735 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 735 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 735 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 736 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 735 "opt_util.m"
    else
#line 735 "opt_util.m"
      if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 737 "opt_util.m"
        {
#line 737 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 737 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 737 "opt_util.m"
          MR_Word ll_backend__opt_util__V_8_8;
#line 737 "opt_util.m"
          MR_Word ll_backend__opt_util__V_9_9;
#line 737 "opt_util.m"
          MR_Word ll_backend__opt_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 738 "opt_util.m"
          {
#line 738 "opt_util.m"
            ll_backend__opt_util__V_8_8 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval1_5);
          }
#line 738 "opt_util.m"
          {
#line 738 "opt_util.m"
            ll_backend__opt_util__V_9_9 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval2_7);
          }
#line 737 "opt_util.m"
          {
#line 737 "opt_util.m"
            return ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_8_8, ll_backend__opt_util__V_9_9);
          }
#line 737 "opt_util.m"
        }
#line 735 "opt_util.m"
      else
#line 735 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 735 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 735 "opt_util.m"
  }
#line 733 "opt_util.m"
}

#line 664 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(
#line 664 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 664 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36,
#line 664 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37,
#line 664 "opt_util.m"
  MR_String * ll_backend__opt_util__SucceedComment_9,
#line 664 "opt_util.m"
  MR_Word * ll_backend__opt_util__Remain_10)
#line 664 "opt_util.m"
{
#line 669 "opt_util.m"
  while (MR_TRUE)
#line 669 "opt_util.m"
    {
#line 669 "opt_util.m"
      /* tailcall optimized into a loop */
#line 669 "opt_util.m"
      {
#line 669 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 669 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_6;
#line 669 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_7;
#line 669 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr_11;
#line 669 "opt_util.m"
        MR_String ll_backend__opt_util__Comment_12;
#line 672 "opt_util.m"
        MR_Word ll_backend__opt_util__V_38_38;
#line 672 "opt_util.m"
        MR_Word ll_backend__opt_util__V_39_39;

#line 669 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 669 "opt_util.m"
          {
#line 669 "opt_util.m"
            ll_backend__opt_util__Instr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 669 "opt_util.m"
            ll_backend__opt_util__Instrs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 670 "opt_util.m"
            ll_backend__opt_util__Uinstr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_6, (MR_Integer) 0)));
#line 670 "opt_util.m"
            ll_backend__opt_util__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_6, (MR_Integer) 1)));
#line 672 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 672 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 672 "opt_util.m"
              {
#line 672 "opt_util.m"
                ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 1)));
#line 672 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 672 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 672 "opt_util.m"
                  {
#line 672 "opt_util.m"
                    ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
#line 672 "opt_util.m"
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_39_39 == (MR_Integer) 1);
#line 672 "opt_util.m"
                  }
#line 672 "opt_util.m"
              }
#line 676 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 674 "opt_util.m"
              {
#line 674 "opt_util.m"
                *ll_backend__opt_util__SucceedComment_9 = ll_backend__opt_util__Comment_12;
#line 675 "opt_util.m"
                *ll_backend__opt_util__Remain_10 = ll_backend__opt_util__Instrs0_7;
#line 675 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_37 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36;
#line 674 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 674 "opt_util.m"
              }
#line 676 "opt_util.m"
            else
#line 702 "opt_util.m"
              {
#line 702 "opt_util.m"
                MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42;

#line 681 "opt_util.m"
                if ((ll_backend__opt_util__Uinstr_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 693 "opt_util.m"
                  ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                else
#line 681 "opt_util.m"
                  if ((ll_backend__opt_util__Uinstr_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                  else
#line 681 "opt_util.m"
                    if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 1))))
#line 682 "opt_util.m"
                      ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                    else
#line 681 "opt_util.m"
                      if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 2))))
#line 683 "opt_util.m"
                        ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                      else
#line 681 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 678 "opt_util.m"
                          {
#line 678 "opt_util.m"
                            MR_Word ll_backend__opt_util__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 1)));
#line 678 "opt_util.m"
                            MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 2)));
#line 678 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_40_40;
#line 678 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_41_41;

#line 679 "opt_util.m"
                            {
#line 679 "opt_util.m"
                              ll_backend__opt_util__V_40_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_13);
                            }
#line 679 "opt_util.m"
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_40_40 == (MR_Integer) 0);
#line 678 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 678 "opt_util.m"
                              {
#line 680 "opt_util.m"
                                {
#line 680 "opt_util.m"
                                  ll_backend__opt_util__V_41_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_14);
                                }
#line 680 "opt_util.m"
                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_41_41 == (MR_Integer) 0);
#line 678 "opt_util.m"
                              }
#line 678 "opt_util.m"
                          }
#line 681 "opt_util.m"
                        else
#line 681 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 688 "opt_util.m"
                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                          else
#line 681 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 684 "opt_util.m"
                              ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                            else
#line 681 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 685 "opt_util.m"
                                ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                              else
#line 681 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 686 "opt_util.m"
                                  ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                else
#line 681 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 694 "opt_util.m"
                                    ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                  else
#line 681 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 695 "opt_util.m"
                                      ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                    else
#line 681 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 691 "opt_util.m"
                                        ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                      else
#line 681 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 687 "opt_util.m"
                                          ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                        else
#line 681 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_11, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 681 "opt_util.m"
                                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 681 "opt_util.m"
                                          else
#line 681 "opt_util.m"
                                            ll_backend__opt_util__succeeded = MR_FALSE;
#line 702 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 702 "opt_util.m"
                  {
#line 699 "opt_util.m"
                    {
#line 699 "opt_util.m"
                      ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "opt_util.m"
                      MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_6));
#line 699 "opt_util.m"
                      MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36));
#line 699 "opt_util.m"
                    }
#line 700 "opt_util.m"
                    /* direct tailcall eliminated */
#line 700 "opt_util.m"
                    {
#line 700 "opt_util.m"
                      MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_7;
#line 700 "opt_util.m"
                      MR_Word ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0__tmp_copy_36 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_42_42;

#line 700 "opt_util.m"
                      ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0_36 = ll_backend__opt_util__STATE_VARIABLE_RevUntilSucceed_0__tmp_copy_36;
#line 700 "opt_util.m"
                      ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 700 "opt_util.m"
                    }
#line 700 "opt_util.m"
                    continue;
#line 702 "opt_util.m"
                  }
#line 702 "opt_util.m"
              }
#line 669 "opt_util.m"
          }
#line 669 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 669 "opt_util.m"
      }
#line 669 "opt_util.m"
      break;
#line 669 "opt_util.m"
    }
#line 664 "opt_util.m"
}

#line 635 "opt_util.m"
static void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_2_4_p_0(
#line 635 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 635 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2,
#line 635 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3,
#line 635 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__4_4)
#line 635 "opt_util.m"
{
#line 638 "opt_util.m"
  while (MR_TRUE)
#line 638 "opt_util.m"
    {
#line 638 "opt_util.m"
      /* tailcall optimized into a loop */
#line 638 "opt_util.m"
      {
#line 638 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 638 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "opt_util.m"
          {
#line 638 "opt_util.m"
            *ll_backend__opt_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2;
#line 638 "opt_util.m"
          }
#line 638 "opt_util.m"
        else
#line 639 "opt_util.m"
          {
#line 639 "opt_util.m"
            MR_Word ll_backend__opt_util__Instr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 639 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 639 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_8, (MR_Integer) 0)));
#line 640 "opt_util.m"
            MR_String ll_backend__opt_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_8, (MR_Integer) 1)));

#line 644 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 1))))
#line 643 "opt_util.m"
              ll_backend__opt_util__succeeded = MR_TRUE;
#line 644 "opt_util.m"
            else
#line 644 "opt_util.m"
              if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 2))))
#line 645 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 644 "opt_util.m"
              else
#line 644 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 647 "opt_util.m"
                  {
#line 647 "opt_util.m"
                    MR_Word ll_backend__opt_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 1)));
#line 647 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_12, (MR_Integer) 2)));
#line 647 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_20_20;
#line 647 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_21_21;

#line 648 "opt_util.m"
                    {
#line 648 "opt_util.m"
                      ll_backend__opt_util__V_20_20 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_16);
                    }
#line 648 "opt_util.m"
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_20_20 == (MR_Integer) 0);
#line 647 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 647 "opt_util.m"
                      {
#line 649 "opt_util.m"
                        {
#line 649 "opt_util.m"
                          ll_backend__opt_util__V_21_21 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_17);
                        }
#line 649 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_21_21 == (MR_Integer) 0);
#line 647 "opt_util.m"
                      }
#line 647 "opt_util.m"
                  }
#line 644 "opt_util.m"
                else
#line 644 "opt_util.m"
                  ll_backend__opt_util__succeeded = MR_FALSE;
#line 654 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 652 "opt_util.m"
              {
#line 652 "opt_util.m"
                MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22;

#line 652 "opt_util.m"
                {
#line 652 "opt_util.m"
                  ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_8));
#line 652 "opt_util.m"
                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2));
#line 652 "opt_util.m"
                }
#line 653 "opt_util.m"
                /* direct tailcall eliminated */
#line 653 "opt_util.m"
                {
#line 653 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_9;
#line 653 "opt_util.m"
                  MR_Word ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_22_22;

#line 653 "opt_util.m"
                  ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0__tmp_copy_2;
#line 653 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 653 "opt_util.m"
                }
#line 653 "opt_util.m"
                continue;
#line 652 "opt_util.m"
              }
#line 654 "opt_util.m"
            else
#line 655 "opt_util.m"
              {
#line 655 "opt_util.m"
                *ll_backend__opt_util__HeadVar__4_4 = ll_backend__opt_util__HeadVar__1_1;
#line 655 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_3 = ll_backend__opt_util__STATE_VARIABLE_RevStraightLine_0_2;
#line 655 "opt_util.m"
              }
#line 639 "opt_util.m"
          }
#line 638 "opt_util.m"
      }
#line 638 "opt_util.m"
      break;
#line 638 "opt_util.m"
    }
#line 635 "opt_util.m"
}

#line 603 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_2_4_p_0(
#line 603 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 603 "opt_util.m"
  MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0_14,
#line 603 "opt_util.m"
  MR_Word * ll_backend__opt_util__STATE_VARIABLE_Between_15,
#line 603 "opt_util.m"
  MR_Word * ll_backend__opt_util__After_8)
#line 603 "opt_util.m"
{
#line 606 "opt_util.m"
  while (MR_TRUE)
#line 606 "opt_util.m"
    {
#line 606 "opt_util.m"
      /* tailcall optimized into a loop */
#line 606 "opt_util.m"
      {
#line 606 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 606 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_5;
#line 606 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_6;
#line 606 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr0_9;
#line 607 "opt_util.m"
        MR_String ll_backend__opt_util__V_10_10;
#line 609 "opt_util.m"
        MR_Word ll_backend__opt_util__V_11_11;

#line 606 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 606 "opt_util.m"
          {
#line 606 "opt_util.m"
            ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "opt_util.m"
            ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "opt_util.m"
            ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
#line 607 "opt_util.m"
            ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
#line 609 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 609 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 609 "opt_util.m"
              {
#line 609 "opt_util.m"
                ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
#line 611 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_FALSE;
#line 609 "opt_util.m"
              }
#line 609 "opt_util.m"
            else
#line 616 "opt_util.m"
              {
#line 613 "opt_util.m"
                MR_Word ll_backend__opt_util__V_16_16;
#line 613 "opt_util.m"
                MR_Word ll_backend__opt_util__V_17_17;

#line 613 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 613 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 613 "opt_util.m"
                  {
#line 613 "opt_util.m"
                    ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
#line 613 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 613 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 613 "opt_util.m"
                      {
#line 613 "opt_util.m"
                        ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
#line 613 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_17_17 == (MR_Integer) 0);
#line 613 "opt_util.m"
                      }
#line 613 "opt_util.m"
                  }
#line 616 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 615 "opt_util.m"
                  {
#line 615 "opt_util.m"
                    *ll_backend__opt_util__After_8 = ll_backend__opt_util__Instrs0_6;
#line 615 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_Between_15 = ll_backend__opt_util__STATE_VARIABLE_Between_0_14;
#line 615 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_TRUE;
#line 615 "opt_util.m"
                  }
#line 616 "opt_util.m"
                else
#line 627 "opt_util.m"
                  {
#line 627 "opt_util.m"
                    MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_20_20;

#line 618 "opt_util.m"
                    {
#line 618 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_18_18;
#line 618 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_19_19;

#line 618 "opt_util.m"
                      {
#line 618 "opt_util.m"
                        ll_backend__opt_util__V_18_18 = ll_backend__opt_util__can_instr_branch_away_1_f_0(ll_backend__opt_util__Uinstr0_9);
                      }
#line 618 "opt_util.m"
                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_18_18 == (MR_Integer) 0);
#line 618 "opt_util.m"
                      if (ll_backend__opt_util__succeeded)
#line 618 "opt_util.m"
                        {
#line 619 "opt_util.m"
                          {
#line 619 "opt_util.m"
                            ll_backend__opt_util__V_19_19 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(ll_backend__opt_util__Uinstr0_9);
                          }
#line 619 "opt_util.m"
                          ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_19_19 == (MR_Integer) 0);
#line 618 "opt_util.m"
                        }
#line 618 "opt_util.m"
                    }
#line 620 "opt_util.m"
                    if (!(ll_backend__opt_util__succeeded))
#line 621 "opt_util.m"
                      {
#line 621 "opt_util.m"
                        MR_Word ll_backend__opt_util__CodeAddr_13;
#line 621 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_12_12;

#line 621 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 621 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 621 "opt_util.m"
                          {
#line 621 "opt_util.m"
                            ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 1)));
#line 621 "opt_util.m"
                            ll_backend__opt_util__CodeAddr_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_9, (MR_Integer) 2)));
#line 622 "opt_util.m"
                            if ((ll_backend__opt_util__CodeAddr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 622 "opt_util.m"
                              ll_backend__opt_util__succeeded = MR_TRUE;
#line 622 "opt_util.m"
                            else
#line 622 "opt_util.m"
                              if ((ll_backend__opt_util__CodeAddr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 622 "opt_util.m"
                                ll_backend__opt_util__succeeded = MR_TRUE;
#line 622 "opt_util.m"
                              else
#line 622 "opt_util.m"
                                ll_backend__opt_util__succeeded = MR_FALSE;
#line 621 "opt_util.m"
                          }
#line 621 "opt_util.m"
                      }
#line 627 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 627 "opt_util.m"
                      {
#line 625 "opt_util.m"
                        {
#line 625 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_Between_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "opt_util.m"
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Between_20_20, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
#line 625 "opt_util.m"
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__STATE_VARIABLE_Between_20_20, 1) = ((MR_Box) (ll_backend__opt_util__STATE_VARIABLE_Between_0_14));
#line 625 "opt_util.m"
                        }
#line 626 "opt_util.m"
                        /* direct tailcall eliminated */
#line 626 "opt_util.m"
                        {
#line 626 "opt_util.m"
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_6;
#line 626 "opt_util.m"
                          MR_Word ll_backend__opt_util__STATE_VARIABLE_Between_0__tmp_copy_14 = ll_backend__opt_util__STATE_VARIABLE_Between_20_20;

#line 626 "opt_util.m"
                          ll_backend__opt_util__STATE_VARIABLE_Between_0_14 = ll_backend__opt_util__STATE_VARIABLE_Between_0__tmp_copy_14;
#line 626 "opt_util.m"
                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 626 "opt_util.m"
                        }
#line 626 "opt_util.m"
                        continue;
#line 627 "opt_util.m"
                      }
#line 627 "opt_util.m"
                  }
#line 616 "opt_util.m"
              }
#line 606 "opt_util.m"
          }
#line 606 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 606 "opt_util.m"
      }
#line 606 "opt_util.m"
      break;
#line 606 "opt_util.m"
    }
#line 603 "opt_util.m"
}

#line 310 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_label_3_p_0(
#line 310 "opt_util.m"
  MR_Word ll_backend__opt_util__Label0_4,
#line 310 "opt_util.m"
  MR_Word * ll_backend__opt_util__Label_5,
#line 310 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 310 "opt_util.m"
{
#line 2696 "opt_util.m"
  {
#line 2696 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2696 "opt_util.m"
    MR_Word ll_backend__opt_util__NewLabel_7;
#line 2694 "opt_util.m"
    MR_Word ll_backend__opt_util__TypeCtorInfo_8_8 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2694 "opt_util.m"
    MR_Box ll_backend__opt_util__conv0_NewLabel_7;

#line 2694 "opt_util.m"
    {
#line 2694 "opt_util.m"
      ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__ReplMap_6, ((MR_Box) (ll_backend__opt_util__Label0_4)), &ll_backend__opt_util__conv0_NewLabel_7);
    }
#line 2694 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 2694 "opt_util.m"
      {
#line 2694 "opt_util.m"
        ll_backend__opt_util__NewLabel_7 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_7);
#line 2694 "opt_util.m"
        ll_backend__opt_util__succeeded = MR_TRUE;
#line 2694 "opt_util.m"
      }
#line 2696 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 2695 "opt_util.m"
      *ll_backend__opt_util__Label_5 = ll_backend__opt_util__NewLabel_7;
#line 2696 "opt_util.m"
    else
#line 2697 "opt_util.m"
      *ll_backend__opt_util__Label_5 = ll_backend__opt_util__Label0_4;
#line 2696 "opt_util.m"
  }
#line 310 "opt_util.m"
}

#line 307 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(
#line 307 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 307 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 307 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__3_3)
#line 307 "opt_util.m"
{
#line 2680 "opt_util.m"
  {
#line 2680 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2680 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2680 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2680 "opt_util.m"
    else
#line 2682 "opt_util.m"
      {
#line 2682 "opt_util.m"
        MR_Word ll_backend__opt_util__MaybeLabel0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2682 "opt_util.m"
        MR_Word ll_backend__opt_util__MaybeLabels0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2682 "opt_util.m"
        MR_Word ll_backend__opt_util__MaybeLabel_7;
#line 2682 "opt_util.m"
        MR_Word ll_backend__opt_util__MaybeLabels_8;

#line 2687 "opt_util.m"
        if ((ll_backend__opt_util__MaybeLabel0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2689 "opt_util.m"
          ll_backend__opt_util__MaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2687 "opt_util.m"
        else
#line 2684 "opt_util.m"
          {
#line 2684 "opt_util.m"
            MR_Word ll_backend__opt_util__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel0_5, (MR_Integer) 0)));
#line 2684 "opt_util.m"
            MR_Word ll_backend__opt_util__Label_11;
#line 2696 "opt_util.m"
            MR_Word ll_backend__opt_util__NewLabel_15;
#line 2694 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeCtorInfo_8_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2694 "opt_util.m"
            MR_Box ll_backend__opt_util__conv0_NewLabel_15;

#line 2694 "opt_util.m"
            {
#line 2694 "opt_util.m"
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_16, ll_backend__opt_util__TypeCtorInfo_8_16, ll_backend__opt_util__HeadVar__3_3, ((MR_Box) (ll_backend__opt_util__Label0_10)), &ll_backend__opt_util__conv0_NewLabel_15);
            }
#line 2694 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2694 "opt_util.m"
              {
#line 2694 "opt_util.m"
                ll_backend__opt_util__NewLabel_15 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_15);
#line 2694 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 2694 "opt_util.m"
              }
#line 2696 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2695 "opt_util.m"
              ll_backend__opt_util__Label_11 = ll_backend__opt_util__NewLabel_15;
#line 2696 "opt_util.m"
            else
#line 2697 "opt_util.m"
              ll_backend__opt_util__Label_11 = ll_backend__opt_util__Label0_10;
#line 2686 "opt_util.m"
            {
#line 2686 "opt_util.m"
              ll_backend__opt_util__MaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2686 "opt_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLabel_7, 0) = ((MR_Box) (ll_backend__opt_util__Label_11));
#line 2686 "opt_util.m"
            }
#line 2684 "opt_util.m"
          }
#line 2691 "opt_util.m"
        {
#line 2691 "opt_util.m"
          ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(ll_backend__opt_util__MaybeLabels0_6, &ll_backend__opt_util__MaybeLabels_8, ll_backend__opt_util__HeadVar__3_3);
        }
#line 2682 "opt_util.m"
        {
#line 2682 "opt_util.m"
          MR_Word base;
#line 2682 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2682 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2682 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__MaybeLabel_7));
#line 2682 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__MaybeLabels_8));
#line 2682 "opt_util.m"
        }
#line 2682 "opt_util.m"
      }
#line 2680 "opt_util.m"
  }
#line 307 "opt_util.m"
}

#line 304 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_code_addr_3_p_0(
#line 304 "opt_util.m"
  MR_Word ll_backend__opt_util__Addr0_4,
#line 304 "opt_util.m"
  MR_Word * ll_backend__opt_util__Addr_5,
#line 304 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_6)
#line 304 "opt_util.m"
{
#line 2662 "opt_util.m"
  {
#line 2662 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2662 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__Addr0_4)) == (MR_mktag((MR_Integer) 1))))
#line 2662 "opt_util.m"
      {
#line 2662 "opt_util.m"
        MR_Word ll_backend__opt_util__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Addr0_4, (MR_Integer) 0)));
#line 2662 "opt_util.m"
        MR_Word ll_backend__opt_util__Label_8;
#line 2696 "opt_util.m"
        MR_Word ll_backend__opt_util__NewLabel_16;
#line 2694 "opt_util.m"
        MR_Word ll_backend__opt_util__TypeCtorInfo_8_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2694 "opt_util.m"
        MR_Box ll_backend__opt_util__conv0_NewLabel_16;

#line 2694 "opt_util.m"
        {
#line 2694 "opt_util.m"
          ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_17, ll_backend__opt_util__TypeCtorInfo_8_17, ll_backend__opt_util__ReplMap_6, ((MR_Box) (ll_backend__opt_util__Label0_7)), &ll_backend__opt_util__conv0_NewLabel_16);
        }
#line 2694 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 2694 "opt_util.m"
          {
#line 2694 "opt_util.m"
            ll_backend__opt_util__NewLabel_16 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_16);
#line 2694 "opt_util.m"
            ll_backend__opt_util__succeeded = MR_TRUE;
#line 2694 "opt_util.m"
          }
#line 2696 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 2695 "opt_util.m"
          ll_backend__opt_util__Label_8 = ll_backend__opt_util__NewLabel_16;
#line 2696 "opt_util.m"
        else
#line 2697 "opt_util.m"
          ll_backend__opt_util__Label_8 = ll_backend__opt_util__Label0_7;
#line 2664 "opt_util.m"
        {
#line 2664 "opt_util.m"
          MR_Word base;
#line 2664 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2664 "opt_util.m"
          *ll_backend__opt_util__Addr_5 = base;
#line 2664 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_8));
#line 2664 "opt_util.m"
        }
#line 2662 "opt_util.m"
      }
#line 2662 "opt_util.m"
    else
#line 2677 "opt_util.m"
      *ll_backend__opt_util__Addr_5 = ll_backend__opt_util__Addr0_4;
#line 2662 "opt_util.m"
  }
#line 304 "opt_util.m"
}

#line 300 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_comps_3_p_0(
#line 300 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 300 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 300 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_3)
#line 300 "opt_util.m"
{
#line 2488 "opt_util.m"
  {
#line 2488 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2488 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2488 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2488 "opt_util.m"
    else
#line 2489 "opt_util.m"
      {
#line 2489 "opt_util.m"
        MR_Word ll_backend__opt_util__Comp0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2489 "opt_util.m"
        MR_Word ll_backend__opt_util__Comps0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2489 "opt_util.m"
        MR_Word ll_backend__opt_util__Comp_7;
#line 2489 "opt_util.m"
        MR_Word ll_backend__opt_util__Comps_8;

#line 2505 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Comp0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2508 "opt_util.m"
          {
#line 2508 "opt_util.m"
            MR_Word ll_backend__opt_util__Label0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp0_5, (MR_Integer) 1)));
#line 2508 "opt_util.m"
            MR_Word ll_backend__opt_util__Label_24;
#line 2696 "opt_util.m"
            MR_Word ll_backend__opt_util__NewLabel_28;
#line 2694 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeCtorInfo_8_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2694 "opt_util.m"
            MR_Box ll_backend__opt_util__conv0_NewLabel_28;

#line 2694 "opt_util.m"
            {
#line 2694 "opt_util.m"
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_29, ll_backend__opt_util__TypeCtorInfo_8_29, ll_backend__opt_util__ReplMap_3, ((MR_Box) (ll_backend__opt_util__Label0_23)), &ll_backend__opt_util__conv0_NewLabel_28);
            }
#line 2694 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2694 "opt_util.m"
              {
#line 2694 "opt_util.m"
                ll_backend__opt_util__NewLabel_28 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_28);
#line 2694 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 2694 "opt_util.m"
              }
#line 2696 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2695 "opt_util.m"
              ll_backend__opt_util__Label_24 = ll_backend__opt_util__NewLabel_28;
#line 2696 "opt_util.m"
            else
#line 2697 "opt_util.m"
              ll_backend__opt_util__Label_24 = ll_backend__opt_util__Label0_23;
#line 2510 "opt_util.m"
            {
#line 2510 "opt_util.m"
              ll_backend__opt_util__Comp_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2510 "opt_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2510 "opt_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__Comp_7, 1) = ((MR_Box) (ll_backend__opt_util__Label_24));
#line 2510 "opt_util.m"
            }
#line 2508 "opt_util.m"
          }
#line 2505 "opt_util.m"
        else
#line 2506 "opt_util.m"
          ll_backend__opt_util__Comp_7 = ll_backend__opt_util__Comp0_5;
#line 2491 "opt_util.m"
        {
#line 2491 "opt_util.m"
          ll_backend__opt_util__replace_labels_comps_3_p_0(ll_backend__opt_util__Comps0_6, &ll_backend__opt_util__Comps_8, ll_backend__opt_util__ReplMap_3);
        }
#line 2489 "opt_util.m"
        {
#line 2489 "opt_util.m"
          MR_Word base;
#line 2489 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2489 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2489 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Comp_7));
#line 2489 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comps_8));
#line 2489 "opt_util.m"
        }
#line 2489 "opt_util.m"
      }
#line 2488 "opt_util.m"
  }
#line 300 "opt_util.m"
}

#line 296 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_list_5_p_0(
#line 296 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 296 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 296 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_3,
#line 296 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplData_4,
#line 296 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplLabel_5)
#line 296 "opt_util.m"
{
#line 2099 "opt_util.m"
  {
#line 2099 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2099 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2099 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2099 "opt_util.m"
    else
#line 2101 "opt_util.m"
      {
#line 2101 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2101 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2101 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr_11;
#line 2101 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs_12;
#line 2108 "opt_util.m"
        MR_Word ll_backend__opt_util__InstrLabel_16;
#line 2108 "opt_util.m"
        MR_String ll_backend__opt_util__Comment_17;
#line 2103 "opt_util.m"
        MR_Word ll_backend__opt_util__V_19_19;

#line 2104 "opt_util.m"
        ll_backend__opt_util__succeeded = (ll_backend__opt_util__ReplLabel_5 == (MR_Integer) 1);
#line 2103 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 2103 "opt_util.m"
          {
#line 2103 "opt_util.m"
            ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 0)));
#line 2103 "opt_util.m"
            ll_backend__opt_util__Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 1)));
#line 2103 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 2103 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2103 "opt_util.m"
              ll_backend__opt_util__InstrLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_19_19, (MR_Integer) 1)));
#line 2103 "opt_util.m"
          }
#line 2108 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 2106 "opt_util.m"
          {
#line 2106 "opt_util.m"
            MR_Word ll_backend__opt_util__ReplInstrLabel_18;
#line 2106 "opt_util.m"
            MR_Word ll_backend__opt_util__V_20_20;
#line 2696 "opt_util.m"
            MR_Word ll_backend__opt_util__NewLabel_24;
#line 2694 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeCtorInfo_8_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2694 "opt_util.m"
            MR_Box ll_backend__opt_util__conv0_NewLabel_24;

#line 2694 "opt_util.m"
            {
#line 2694 "opt_util.m"
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_8_25, ll_backend__opt_util__TypeCtorInfo_8_25, ll_backend__opt_util__ReplMap_3, ((MR_Box) (ll_backend__opt_util__InstrLabel_16)), &ll_backend__opt_util__conv0_NewLabel_24);
            }
#line 2694 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2694 "opt_util.m"
              {
#line 2694 "opt_util.m"
                ll_backend__opt_util__NewLabel_24 = ((MR_Word) ll_backend__opt_util__conv0_NewLabel_24);
#line 2694 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 2694 "opt_util.m"
              }
#line 2696 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2695 "opt_util.m"
              ll_backend__opt_util__ReplInstrLabel_18 = ll_backend__opt_util__NewLabel_24;
#line 2696 "opt_util.m"
            else
#line 2697 "opt_util.m"
              ll_backend__opt_util__ReplInstrLabel_18 = ll_backend__opt_util__InstrLabel_16;
#line 2107 "opt_util.m"
            {
#line 2107 "opt_util.m"
              ll_backend__opt_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "opt_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2107 "opt_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_20_20, 1) = ((MR_Box) (ll_backend__opt_util__ReplInstrLabel_18));
#line 2107 "opt_util.m"
            }
#line 2107 "opt_util.m"
            {
#line 2107 "opt_util.m"
              ll_backend__opt_util__Instr_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2107 "opt_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 0) = ((MR_Box) (ll_backend__opt_util__V_20_20));
#line 2107 "opt_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 1) = ((MR_Box) (ll_backend__opt_util__Comment_17));
#line 2107 "opt_util.m"
            }
#line 2106 "opt_util.m"
          }
#line 2108 "opt_util.m"
        else
#line 2114 "opt_util.m"
          {
#line 2114 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 0)));
#line 2114 "opt_util.m"
            MR_String ll_backend__opt_util__Comment_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_9, (MR_Integer) 1)));
#line 2114 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_32;

#line 2116 "opt_util.m"
            {
#line 2116 "opt_util.m"
              ll_backend__opt_util__replace_labels_instr_4_p_0(ll_backend__opt_util__Uinstr0_30, &ll_backend__opt_util__Uinstr_32, ll_backend__opt_util__ReplMap_3, ll_backend__opt_util__ReplData_4);
            }
#line 2117 "opt_util.m"
            {
#line 2117 "opt_util.m"
              ll_backend__opt_util__Instr_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "opt_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 0) = ((MR_Box) (ll_backend__opt_util__Uinstr_32));
#line 2117 "opt_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_11, 1) = ((MR_Box) (ll_backend__opt_util__Comment_31));
#line 2117 "opt_util.m"
            }
#line 2114 "opt_util.m"
          }
#line 2111 "opt_util.m"
        {
#line 2111 "opt_util.m"
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__opt_util__Instrs0_10, &ll_backend__opt_util__Instrs_12, ll_backend__opt_util__ReplMap_3, ll_backend__opt_util__ReplData_4, ll_backend__opt_util__ReplLabel_5);
        }
#line 2101 "opt_util.m"
        {
#line 2101 "opt_util.m"
          MR_Word base;
#line 2101 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2101 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2101 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr_11));
#line 2101 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs_12));
#line 2101 "opt_util.m"
        }
#line 2101 "opt_util.m"
      }
#line 2099 "opt_util.m"
  }
#line 296 "opt_util.m"
}

#line 293 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_instruction_4_p_0(
#line 293 "opt_util.m"
  MR_Word ll_backend__opt_util__Instr0_5,
#line 293 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instr_6,
#line 293 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_7,
#line 293 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplData_8)
#line 293 "opt_util.m"
{
#line 2114 "opt_util.m"
  {
#line 2114 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2114 "opt_util.m"
    MR_Word ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
#line 2114 "opt_util.m"
    MR_String ll_backend__opt_util__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
#line 2114 "opt_util.m"
    MR_Word ll_backend__opt_util__Uinstr_11;

#line 2116 "opt_util.m"
    {
#line 2116 "opt_util.m"
      ll_backend__opt_util__replace_labels_instr_4_p_0(ll_backend__opt_util__Uinstr0_9, &ll_backend__opt_util__Uinstr_11, ll_backend__opt_util__ReplMap_7, ll_backend__opt_util__ReplData_8);
    }
#line 2117 "opt_util.m"
    {
#line 2117 "opt_util.m"
      MR_Word base;
#line 2117 "opt_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "opt_util.m"
      *ll_backend__opt_util__Instr_6 = base;
#line 2117 "opt_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__opt_util__Uinstr_11));
#line 2117 "opt_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__opt_util__Comment_10));
#line 2117 "opt_util.m"
    }
#line 2114 "opt_util.m"
  }
#line 293 "opt_util.m"
}

#line 2439 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_4(
#line 2439 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg)
#line 2439 "opt_util.m"
{
#line 2439 "opt_util.m"
  {
#line 2439 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2439 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

#line 2439 "opt_util.m"
    {
#line 2439 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2439__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
#line 2439 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2439 "opt_util.m"
  }
#line 2439 "opt_util.m"
}

#line 2420 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_3(
#line 2420 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg)
#line 2420 "opt_util.m"
{
#line 2420 "opt_util.m"
  {
#line 2420 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2420 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

#line 2420 "opt_util.m"
    {
#line 2420 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2420__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
#line 2420 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2420 "opt_util.m"
  }
#line 2420 "opt_util.m"
}

#line 2411 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_2(
#line 2411 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg)
#line 2411 "opt_util.m"
{
#line 2411 "opt_util.m"
  {
#line 2411 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2411 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

#line 2411 "opt_util.m"
    {
#line 2411 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2411__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
#line 2411 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2411 "opt_util.m"
  }
#line 2411 "opt_util.m"
}

#line 2402 "opt_util.m"
static MR_bool MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0_1(
#line 2402 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg)
#line 2402 "opt_util.m"
{
#line 2402 "opt_util.m"
  {
#line 2402 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2402 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;

#line 2402 "opt_util.m"
    {
#line 2402 "opt_util.m"
      return ll_backend__opt_util__succeeded = ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2402__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__closure, (MR_Integer) 4))));
    }
#line 2402 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 2402 "opt_util.m"
  }
#line 2402 "opt_util.m"
}

#line 290 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__replace_labels_instr_4_p_0(
#line 290 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr0_5,
#line 290 "opt_util.m"
  MR_Word * ll_backend__opt_util__Uinstr_6,
#line 290 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplMap_7,
#line 290 "opt_util.m"
  MR_Word ll_backend__opt_util__ReplData_8)
#line 290 "opt_util.m"
{
#line 2128 "opt_util.m"
  {
#line 2128 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2128 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2208 "opt_util.m"
      {
#line 2208 "opt_util.m"
        MR_Word ll_backend__opt_util__AffectsLiveness_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2208 "opt_util.m"
        MR_Word ll_backend__opt_util__Lvals0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2208 "opt_util.m"
        MR_String ll_backend__opt_util__Code_43 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2208 "opt_util.m"
        MR_Word ll_backend__opt_util__Lvals_44;

#line 2212 "opt_util.m"
        if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2214 "opt_util.m"
          ll_backend__opt_util__Lvals_44 = ll_backend__opt_util__Lvals0_42;
#line 2212 "opt_util.m"
        else
#line 2211 "opt_util.m"
          {
#line 2211 "opt_util.m"
            ll_backend__opt_util__replace_labels_c_code_live_lvals_3_p_0(ll_backend__opt_util__Lvals0_42, &ll_backend__opt_util__Lvals_44, ll_backend__opt_util__ReplMap_7);
          }
#line 2216 "opt_util.m"
        {
#line 2216 "opt_util.m"
          MR_Word base;
#line 2216 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "opt_util.m"
          *ll_backend__opt_util__Uinstr_6 = base;
#line 2216 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 2216 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__AffectsLiveness_41));
#line 2216 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lvals_44));
#line 2216 "opt_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Code_43));
#line 2216 "opt_util.m"
        }
#line 2208 "opt_util.m"
      }
#line 2128 "opt_util.m"
    else
#line 2128 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2137 "opt_util.m"
        {
#line 2137 "opt_util.m"
          MR_Word ll_backend__opt_util__Lval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2137 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2137 "opt_util.m"
          MR_Word ll_backend__opt_util__Lval_22;
#line 2137 "opt_util.m"
          MR_Word ll_backend__opt_util__Rval_23;

#line 2142 "opt_util.m"
          if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2143 "opt_util.m"
            {
#line 2144 "opt_util.m"
              ll_backend__opt_util__Lval_22 = ll_backend__opt_util__Lval0_20;
#line 2145 "opt_util.m"
              ll_backend__opt_util__Rval_23 = ll_backend__opt_util__Rval0_21;
#line 2143 "opt_util.m"
            }
#line 2142 "opt_util.m"
          else
#line 2139 "opt_util.m"
            {
#line 2140 "opt_util.m"
              {
#line 2140 "opt_util.m"
                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_20, &ll_backend__opt_util__Lval_22, ll_backend__opt_util__ReplMap_7);
              }
#line 2141 "opt_util.m"
              {
#line 2141 "opt_util.m"
                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_21, &ll_backend__opt_util__Rval_23, ll_backend__opt_util__ReplMap_7);
              }
#line 2139 "opt_util.m"
            }
#line 2147 "opt_util.m"
          {
#line 2147 "opt_util.m"
            MR_Word base;
#line 2147 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "opt_util.m"
            *ll_backend__opt_util__Uinstr_6 = base;
#line 2147 "opt_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2147 "opt_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_22));
#line 2147 "opt_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Rval_23));
#line 2147 "opt_util.m"
          }
#line 2137 "opt_util.m"
        }
#line 2128 "opt_util.m"
      else
#line 2128 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2131 "opt_util.m"
          {
#line 2131 "opt_util.m"
            MR_Integer ll_backend__opt_util__R_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2131 "opt_util.m"
            MR_Integer ll_backend__opt_util__F_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2131 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2131 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_19;

#line 2133 "opt_util.m"
            {
#line 2133 "opt_util.m"
              ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__opt_util__Instrs0_18, &ll_backend__opt_util__Instrs_19, ll_backend__opt_util__ReplMap_7, ll_backend__opt_util__ReplData_8, (MR_Integer) 0);
            }
#line 2135 "opt_util.m"
            {
#line 2135 "opt_util.m"
              MR_Word base;
#line 2135 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2135 "opt_util.m"
              *ll_backend__opt_util__Uinstr_6 = base;
#line 2135 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2135 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__R_16));
#line 2135 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__F_17));
#line 2135 "opt_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Instrs_19));
#line 2135 "opt_util.m"
            }
#line 2131 "opt_util.m"
          }
#line 2128 "opt_util.m"
        else
#line 2128 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2197 "opt_util.m"
            {
#line 2197 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeLabels0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2197 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeLabels_40;
#line 2197 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval0_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2197 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_133;

#line 2201 "opt_util.m"
              if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2203 "opt_util.m"
                ll_backend__opt_util__Rval_133 = ll_backend__opt_util__Rval0_132;
#line 2201 "opt_util.m"
              else
#line 2200 "opt_util.m"
                {
#line 2200 "opt_util.m"
                  ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_132, &ll_backend__opt_util__Rval_133, ll_backend__opt_util__ReplMap_7);
                }
#line 2205 "opt_util.m"
              {
#line 2205 "opt_util.m"
                ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(ll_backend__opt_util__MaybeLabels0_39, &ll_backend__opt_util__MaybeLabels_40, ll_backend__opt_util__ReplMap_7);
              }
#line 2206 "opt_util.m"
              {
#line 2206 "opt_util.m"
                MR_Word base;
#line 2206 "opt_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "opt_util.m"
                *ll_backend__opt_util__Uinstr_6 = base;
#line 2206 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 2206 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_133));
#line 2206 "opt_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeLabels_40));
#line 2206 "opt_util.m"
              }
#line 2197 "opt_util.m"
            }
#line 2128 "opt_util.m"
          else
#line 2128 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 2395 "opt_util.m"
              {
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__Decls_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__Comps0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MayCallMercury_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeFix_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeLayout_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeOnlyLayout_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeSub0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 7)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeDef_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 8)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__StackSlotRef_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 9)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MayDupl_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 10)));
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__MaybeSub_91;
#line 2395 "opt_util.m"
                MR_Word ll_backend__opt_util__Comps_92;

#line 2398 "opt_util.m"
                if ((ll_backend__opt_util__MaybeFix_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2397 "opt_util.m"
                  {
#line 2397 "opt_util.m"
                  }
#line 2398 "opt_util.m"
                else
#line 2399 "opt_util.m"
                  {
#line 2399 "opt_util.m"
                    MR_Word ll_backend__opt_util__FixLabel0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFix_78, (MR_Integer) 0)));
#line 2399 "opt_util.m"
                    MR_Word ll_backend__opt_util__FixLabel_86;
#line 2399 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_107_107;

#line 2400 "opt_util.m"
                    {
#line 2400 "opt_util.m"
                      ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__FixLabel0_85, &ll_backend__opt_util__FixLabel_86, ll_backend__opt_util__ReplMap_7);
                    }
#line 2402 "opt_util.m"
                    {
#line 2402 "opt_util.m"
                      ll_backend__opt_util__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2402 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
#line 2402 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_1));
#line 2402 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2402 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 3) = ((MR_Box) (ll_backend__opt_util__FixLabel0_85));
#line 2402 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_107_107, 4) = ((MR_Box) (ll_backend__opt_util__FixLabel_86));
#line 2402 "opt_util.m"
                    }
#line 2402 "opt_util.m"
                    {
#line 2402 "opt_util.m"
                      mercury__require__expect_4_p_0(ll_backend__opt_util__V_107_107, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label in C code");
                    }
#line 2399 "opt_util.m"
                  }
#line 2407 "opt_util.m"
                if ((ll_backend__opt_util__MaybeLayout_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2406 "opt_util.m"
                  {
#line 2406 "opt_util.m"
                  }
#line 2407 "opt_util.m"
                else
#line 2408 "opt_util.m"
                  {
#line 2408 "opt_util.m"
                    MR_Word ll_backend__opt_util__LayoutLabel0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeLayout_79, (MR_Integer) 0)));
#line 2408 "opt_util.m"
                    MR_Word ll_backend__opt_util__LayoutLabel_88;
#line 2408 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_111_111;

#line 2409 "opt_util.m"
                    {
#line 2409 "opt_util.m"
                      ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__LayoutLabel0_87, &ll_backend__opt_util__LayoutLabel_88, ll_backend__opt_util__ReplMap_7);
                    }
#line 2411 "opt_util.m"
                    {
#line 2411 "opt_util.m"
                      ll_backend__opt_util__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2411 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
#line 2411 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_2));
#line 2411 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2411 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 3) = ((MR_Box) (ll_backend__opt_util__LayoutLabel0_87));
#line 2411 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_111_111, 4) = ((MR_Box) (ll_backend__opt_util__LayoutLabel_88));
#line 2411 "opt_util.m"
                    }
#line 2411 "opt_util.m"
                    {
#line 2411 "opt_util.m"
                      mercury__require__expect_4_p_0(ll_backend__opt_util__V_111_111, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                    }
#line 2408 "opt_util.m"
                  }
#line 2416 "opt_util.m"
                if ((ll_backend__opt_util__MaybeOnlyLayout_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2415 "opt_util.m"
                  {
#line 2415 "opt_util.m"
                  }
#line 2416 "opt_util.m"
                else
#line 2417 "opt_util.m"
                  {
#line 2417 "opt_util.m"
                    MR_Word ll_backend__opt_util__OnlyLayoutLabel0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeOnlyLayout_80, (MR_Integer) 0)));
#line 2417 "opt_util.m"
                    MR_Word ll_backend__opt_util__OnlyLayoutLabel_90;
#line 2417 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_115_115;

#line 2418 "opt_util.m"
                    {
#line 2418 "opt_util.m"
                      ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__OnlyLayoutLabel0_89, &ll_backend__opt_util__OnlyLayoutLabel_90, ll_backend__opt_util__ReplMap_7);
                    }
#line 2420 "opt_util.m"
                    {
#line 2420 "opt_util.m"
                      ll_backend__opt_util__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2420 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
#line 2420 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_3));
#line 2420 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2420 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 3) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel0_89));
#line 2420 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_115_115, 4) = ((MR_Box) (ll_backend__opt_util__OnlyLayoutLabel_90));
#line 2420 "opt_util.m"
                    }
#line 2420 "opt_util.m"
                    {
#line 2420 "opt_util.m"
                      mercury__require__expect_4_p_0(ll_backend__opt_util__V_115_115, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                    }
#line 2417 "opt_util.m"
                  }
#line 2427 "opt_util.m"
                if ((ll_backend__opt_util__MaybeSub0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2424 "opt_util.m"
                  {
#line 2425 "opt_util.m"
                    ll_backend__opt_util__MaybeSub_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2426 "opt_util.m"
                    ll_backend__opt_util__Comps_92 = ll_backend__opt_util__Comps0_76;
#line 2424 "opt_util.m"
                  }
#line 2427 "opt_util.m"
                else
#line 2428 "opt_util.m"
                  {
#line 2428 "opt_util.m"
                    MR_Word ll_backend__opt_util__SubLabel0_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSub0_81, (MR_Integer) 0)));
#line 2428 "opt_util.m"
                    MR_Word ll_backend__opt_util__SubLabel_94;

#line 2429 "opt_util.m"
                    {
#line 2429 "opt_util.m"
                      ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__SubLabel0_93, &ll_backend__opt_util__SubLabel_94, ll_backend__opt_util__ReplMap_7);
                    }
#line 2430 "opt_util.m"
                    {
#line 2430 "opt_util.m"
                      ll_backend__opt_util__MaybeSub_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2430 "opt_util.m"
                      MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeSub_91, 0) = ((MR_Box) (ll_backend__opt_util__SubLabel_94));
#line 2430 "opt_util.m"
                    }
#line 2431 "opt_util.m"
                    {
#line 2431 "opt_util.m"
                      ll_backend__opt_util__replace_labels_comps_3_p_0(ll_backend__opt_util__Comps0_76, &ll_backend__opt_util__Comps_92, ll_backend__opt_util__ReplMap_7);
                    }
#line 2428 "opt_util.m"
                  }
#line 2435 "opt_util.m"
                if ((ll_backend__opt_util__MaybeDef_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2434 "opt_util.m"
                  {
#line 2434 "opt_util.m"
                  }
#line 2435 "opt_util.m"
                else
#line 2436 "opt_util.m"
                  {
#line 2436 "opt_util.m"
                    MR_Word ll_backend__opt_util__DefLabel0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeDef_82, (MR_Integer) 0)));
#line 2436 "opt_util.m"
                    MR_Word ll_backend__opt_util__DefLabel_96;
#line 2436 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_119_119;

#line 2437 "opt_util.m"
                    {
#line 2437 "opt_util.m"
                      ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__DefLabel0_95, &ll_backend__opt_util__DefLabel_96, ll_backend__opt_util__ReplMap_7);
                    }
#line 2439 "opt_util.m"
                    {
#line 2439 "opt_util.m"
                      ll_backend__opt_util__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2439 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 0) = ((MR_Box) (&ll_backend__opt_util_scalar_common_4[1]));
#line 2439 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 1) = ((MR_Box) (ll_backend__opt_util__replace_labels_instr_4_p_0_4));
#line 2439 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2439 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 3) = ((MR_Box) (ll_backend__opt_util__DefLabel0_95));
#line 2439 "opt_util.m"
                      MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_119_119, 4) = ((MR_Box) (ll_backend__opt_util__DefLabel_96));
#line 2439 "opt_util.m"
                    }
#line 2439 "opt_util.m"
                    {
#line 2439 "opt_util.m"
                      mercury__require__expect_4_p_0(ll_backend__opt_util__V_119_119, (MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "trying to replace Mercury label with layout");
                    }
#line 2436 "opt_util.m"
                  }
#line 2442 "opt_util.m"
                {
#line 2442 "opt_util.m"
                  MR_Word base;
#line 2442 "opt_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 2442 "opt_util.m"
                  *ll_backend__opt_util__Uinstr_6 = base;
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Decls_75));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Comps_92));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__MayCallMercury_77));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__MaybeFix_78));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__MaybeLayout_79));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__MaybeOnlyLayout_80));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__opt_util__MaybeSub_91));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__opt_util__MaybeDef_82));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__opt_util__StackSlotRef_83));
#line 2442 "opt_util.m"
                  MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__opt_util__MayDupl_84));
#line 2442 "opt_util.m"
                }
#line 2395 "opt_util.m"
              }
#line 2128 "opt_util.m"
            else
#line 2128 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 2456 "opt_util.m"
                {
#line 2456 "opt_util.m"
                  MR_Word ll_backend__opt_util__Child0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2456 "opt_util.m"
                  MR_Word ll_backend__opt_util__Child_100;
#line 2456 "opt_util.m"
                  MR_Word ll_backend__opt_util__Lval0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2456 "opt_util.m"
                  MR_Word ll_backend__opt_util__Lval_166;

#line 2457 "opt_util.m"
                  {
#line 2457 "opt_util.m"
                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_165, &ll_backend__opt_util__Lval_166, ll_backend__opt_util__ReplMap_7);
                  }
#line 2458 "opt_util.m"
                  {
#line 2458 "opt_util.m"
                    ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Child0_99, &ll_backend__opt_util__Child_100, ll_backend__opt_util__ReplMap_7);
                  }
#line 2459 "opt_util.m"
                  {
#line 2459 "opt_util.m"
                    MR_Word base;
#line 2459 "opt_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2459 "opt_util.m"
                    *ll_backend__opt_util__Uinstr_6 = base;
#line 2459 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 2459 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_166));
#line 2459 "opt_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Child_100));
#line 2459 "opt_util.m"
                  }
#line 2456 "opt_util.m"
                }
#line 2128 "opt_util.m"
              else
#line 2128 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 2309 "opt_util.m"
                  {
#line 2309 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2309 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval_151;

#line 2313 "opt_util.m"
                    if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2315 "opt_util.m"
                      ll_backend__opt_util__Rval_151 = ll_backend__opt_util__Rval0_150;
#line 2313 "opt_util.m"
                    else
#line 2312 "opt_util.m"
                      {
#line 2312 "opt_util.m"
                        ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_150, &ll_backend__opt_util__Rval_151, ll_backend__opt_util__ReplMap_7);
                      }
#line 2317 "opt_util.m"
                    {
#line 2317 "opt_util.m"
                      MR_Word base;
#line 2317 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "opt_util.m"
                      *ll_backend__opt_util__Uinstr_6 = base;
#line 2317 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 2317 "opt_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_151));
#line 2317 "opt_util.m"
                    }
#line 2309 "opt_util.m"
                  }
#line 2128 "opt_util.m"
                else
#line 2128 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2193 "opt_util.m"
                    {
#line 2193 "opt_util.m"
                      MR_Word ll_backend__opt_util__Target0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2193 "opt_util.m"
                      MR_Word ll_backend__opt_util__Target_131;

#line 2194 "opt_util.m"
                      {
#line 2194 "opt_util.m"
                        ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Target0_38, &ll_backend__opt_util__Target_131, ll_backend__opt_util__ReplMap_7);
                      }
#line 2195 "opt_util.m"
                      {
#line 2195 "opt_util.m"
                        MR_Word base;
#line 2195 "opt_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "opt_util.m"
                        *ll_backend__opt_util__Uinstr_6 = base;
#line 2195 "opt_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2195 "opt_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Target_131));
#line 2195 "opt_util.m"
                      }
#line 2193 "opt_util.m"
                    }
#line 2128 "opt_util.m"
                  else
#line 2128 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2218 "opt_util.m"
                      {
#line 2218 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2218 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval_135;
#line 2218 "opt_util.m"
                        MR_Word ll_backend__opt_util__Target_136;
#line 2218 "opt_util.m"
                        MR_Word ll_backend__opt_util__Target0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

#line 2222 "opt_util.m"
                        if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2224 "opt_util.m"
                          ll_backend__opt_util__Rval_135 = ll_backend__opt_util__Rval0_134;
#line 2222 "opt_util.m"
                        else
#line 2221 "opt_util.m"
                          {
#line 2221 "opt_util.m"
                            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_134, &ll_backend__opt_util__Rval_135, ll_backend__opt_util__ReplMap_7);
                          }
#line 2226 "opt_util.m"
                        {
#line 2226 "opt_util.m"
                          ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Target0_137, &ll_backend__opt_util__Target_136, ll_backend__opt_util__ReplMap_7);
                        }
#line 2227 "opt_util.m"
                        {
#line 2227 "opt_util.m"
                          MR_Word base;
#line 2227 "opt_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "opt_util.m"
                          *ll_backend__opt_util__Uinstr_6 = base;
#line 2227 "opt_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 2227 "opt_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_135));
#line 2227 "opt_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Target_136));
#line 2227 "opt_util.m"
                        }
#line 2218 "opt_util.m"
                      }
#line 2128 "opt_util.m"
                    else
#line 2128 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 2250 "opt_util.m"
                        {
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeTag_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MO_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Msg_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Atomic_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeRegionRval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 7)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeReuse0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 8)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeRegionRval_53;
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeReuse_60;
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Lval0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Lval_144;
#line 2250 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval_145;

#line 2279 "opt_util.m"
                          if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2280 "opt_util.m"
                            {
#line 2281 "opt_util.m"
                              ll_backend__opt_util__Lval_144 = ll_backend__opt_util__Lval0_142;
#line 2282 "opt_util.m"
                              ll_backend__opt_util__Rval_145 = ll_backend__opt_util__Rval0_143;
#line 2283 "opt_util.m"
                              ll_backend__opt_util__MaybeRegionRval_53 = ll_backend__opt_util__MaybeRegionRval0_49;
#line 2284 "opt_util.m"
                              ll_backend__opt_util__MaybeReuse_60 = ll_backend__opt_util__MaybeReuse0_50;
#line 2280 "opt_util.m"
                            }
#line 2279 "opt_util.m"
                          else
#line 2252 "opt_util.m"
                            {
#line 2253 "opt_util.m"
                              {
#line 2253 "opt_util.m"
                                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_142, &ll_backend__opt_util__Lval_144, ll_backend__opt_util__ReplMap_7);
                              }
#line 2254 "opt_util.m"
                              {
#line 2254 "opt_util.m"
                                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_143, &ll_backend__opt_util__Rval_145, ll_backend__opt_util__ReplMap_7);
                              }
#line 2259 "opt_util.m"
                              if ((ll_backend__opt_util__MaybeRegionRval0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2261 "opt_util.m"
                                ll_backend__opt_util__MaybeRegionRval_53 = ll_backend__opt_util__MaybeRegionRval0_49;
#line 2259 "opt_util.m"
                              else
#line 2256 "opt_util.m"
                                {
#line 2256 "opt_util.m"
                                  MR_Word ll_backend__opt_util__RegionRval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval0_49, (MR_Integer) 0)));
#line 2256 "opt_util.m"
                                  MR_Word ll_backend__opt_util__RegionRval_52;

#line 2257 "opt_util.m"
                                  {
#line 2257 "opt_util.m"
                                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__RegionRval0_51, &ll_backend__opt_util__RegionRval_52, ll_backend__opt_util__ReplMap_7);
                                  }
#line 2258 "opt_util.m"
                                  {
#line 2258 "opt_util.m"
                                    ll_backend__opt_util__MaybeRegionRval_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2258 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_53, 0) = ((MR_Box) (ll_backend__opt_util__RegionRval_52));
#line 2258 "opt_util.m"
                                  }
#line 2256 "opt_util.m"
                                }
#line 2275 "opt_util.m"
                              if ((ll_backend__opt_util__MaybeReuse0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2277 "opt_util.m"
                                ll_backend__opt_util__MaybeReuse_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2275 "opt_util.m"
                              else
#line 2264 "opt_util.m"
                                {
#line 2264 "opt_util.m"
                                  MR_Word ll_backend__opt_util__ReuseRval0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse0_50, (MR_Integer) 0)));
#line 2264 "opt_util.m"
                                  MR_Word ll_backend__opt_util__MaybeFlagLval0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse0_50, (MR_Integer) 1)));
#line 2264 "opt_util.m"
                                  MR_Word ll_backend__opt_util__ReuseRval_56;
#line 2264 "opt_util.m"
                                  MR_Word ll_backend__opt_util__MaybeFlagLval_59;

#line 2265 "opt_util.m"
                                  {
#line 2265 "opt_util.m"
                                    ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__ReuseRval0_54, &ll_backend__opt_util__ReuseRval_56, ll_backend__opt_util__ReplMap_7);
                                  }
#line 2270 "opt_util.m"
                                  if ((ll_backend__opt_util__MaybeFlagLval0_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2272 "opt_util.m"
                                    ll_backend__opt_util__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2270 "opt_util.m"
                                  else
#line 2267 "opt_util.m"
                                    {
#line 2267 "opt_util.m"
                                      MR_Word ll_backend__opt_util__FlagLval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval0_55, (MR_Integer) 0)));
#line 2267 "opt_util.m"
                                      MR_Word ll_backend__opt_util__FlagLval_58;

#line 2268 "opt_util.m"
                                      {
#line 2268 "opt_util.m"
                                        ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__FlagLval0_57, &ll_backend__opt_util__FlagLval_58, ll_backend__opt_util__ReplMap_7);
                                      }
#line 2269 "opt_util.m"
                                      {
#line 2269 "opt_util.m"
                                        ll_backend__opt_util__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2269 "opt_util.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_59, 0) = ((MR_Box) (ll_backend__opt_util__FlagLval_58));
#line 2269 "opt_util.m"
                                      }
#line 2267 "opt_util.m"
                                    }
#line 2274 "opt_util.m"
                                  {
#line 2274 "opt_util.m"
                                    ll_backend__opt_util__MaybeReuse_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_60, 0) = ((MR_Box) (ll_backend__opt_util__ReuseRval_56));
#line 2274 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_60, 1) = ((MR_Box) (ll_backend__opt_util__MaybeFlagLval_59));
#line 2274 "opt_util.m"
                                  }
#line 2264 "opt_util.m"
                                }
#line 2252 "opt_util.m"
                            }
#line 2286 "opt_util.m"
                          {
#line 2286 "opt_util.m"
                            MR_Word base;
#line 2286 "opt_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "opt_util.m"
                            *ll_backend__opt_util__Uinstr_6 = base;
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_144));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeTag_45));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__MO_46));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__Rval_145));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__Msg_47));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__Atomic_48));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__opt_util__MaybeRegionRval_53));
#line 2286 "opt_util.m"
                            MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__opt_util__MaybeReuse_60));
#line 2286 "opt_util.m"
                          }
#line 2250 "opt_util.m"
                        }
#line 2128 "opt_util.m"
                      else
#line 2128 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 2446 "opt_util.m"
                          {
#line 2446 "opt_util.m"
                            MR_Integer ll_backend__opt_util__NumConjuncts_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2446 "opt_util.m"
                            MR_Integer ll_backend__opt_util__TSStringIndex_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2446 "opt_util.m"
                            MR_Word ll_backend__opt_util__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2446 "opt_util.m"
                            MR_Word ll_backend__opt_util__Lval_164;

#line 2450 "opt_util.m"
                            if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2452 "opt_util.m"
                              ll_backend__opt_util__Lval_164 = ll_backend__opt_util__Lval0_163;
#line 2450 "opt_util.m"
                            else
#line 2449 "opt_util.m"
                              {
#line 2449 "opt_util.m"
                                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_163, &ll_backend__opt_util__Lval_164, ll_backend__opt_util__ReplMap_7);
                              }
#line 2454 "opt_util.m"
                            {
#line 2454 "opt_util.m"
                              MR_Word base;
#line 2454 "opt_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2454 "opt_util.m"
                              *ll_backend__opt_util__Uinstr_6 = base;
#line 2454 "opt_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 2454 "opt_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_164));
#line 2454 "opt_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__NumConjuncts_97));
#line 2454 "opt_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__TSStringIndex_98));
#line 2454 "opt_util.m"
                            }
#line 2446 "opt_util.m"
                          }
#line 2128 "opt_util.m"
                        else
#line 2128 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 2461 "opt_util.m"
                            {
#line 2461 "opt_util.m"
                              MR_Word ll_backend__opt_util__Label0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2461 "opt_util.m"
                              MR_Word ll_backend__opt_util__Lval0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2461 "opt_util.m"
                              MR_Word ll_backend__opt_util__Lval_168;
#line 2461 "opt_util.m"
                              MR_Word ll_backend__opt_util__Label_169;

#line 2462 "opt_util.m"
                              {
#line 2462 "opt_util.m"
                                ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_167, &ll_backend__opt_util__Lval_168, ll_backend__opt_util__ReplMap_7);
                              }
#line 2463 "opt_util.m"
                              {
#line 2463 "opt_util.m"
                                ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_101, &ll_backend__opt_util__Label_169, ll_backend__opt_util__ReplMap_7);
                              }
#line 2464 "opt_util.m"
                              {
#line 2464 "opt_util.m"
                                MR_Word base;
#line 2464 "opt_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2464 "opt_util.m"
                                *ll_backend__opt_util__Uinstr_6 = base;
#line 2464 "opt_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 2464 "opt_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_168));
#line 2464 "opt_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Label_169));
#line 2464 "opt_util.m"
                              }
#line 2461 "opt_util.m"
                            }
#line 2128 "opt_util.m"
                          else
#line 2128 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2149 "opt_util.m"
                              {
#line 2149 "opt_util.m"
                                MR_Word ll_backend__opt_util__Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2149 "opt_util.m"
                                MR_Word ll_backend__opt_util__Rval0_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2149 "opt_util.m"
                                MR_Word ll_backend__opt_util__Lval_129;
#line 2149 "opt_util.m"
                                MR_Word ll_backend__opt_util__Rval_130;

#line 2154 "opt_util.m"
                                if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2155 "opt_util.m"
                                  {
#line 2156 "opt_util.m"
                                    ll_backend__opt_util__Lval_129 = ll_backend__opt_util__Lval0_127;
#line 2157 "opt_util.m"
                                    ll_backend__opt_util__Rval_130 = ll_backend__opt_util__Rval0_128;
#line 2155 "opt_util.m"
                                  }
#line 2154 "opt_util.m"
                                else
#line 2151 "opt_util.m"
                                  {
#line 2152 "opt_util.m"
                                    {
#line 2152 "opt_util.m"
                                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_127, &ll_backend__opt_util__Lval_129, ll_backend__opt_util__ReplMap_7);
                                    }
#line 2153 "opt_util.m"
                                    {
#line 2153 "opt_util.m"
                                      ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_128, &ll_backend__opt_util__Rval_130, ll_backend__opt_util__ReplMap_7);
                                    }
#line 2151 "opt_util.m"
                                  }
#line 2159 "opt_util.m"
                                {
#line 2159 "opt_util.m"
                                  MR_Word base;
#line 2159 "opt_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "opt_util.m"
                                  *ll_backend__opt_util__Uinstr_6 = base;
#line 2159 "opt_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2159 "opt_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_129));
#line 2159 "opt_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Rval_130));
#line 2159 "opt_util.m"
                                }
#line 2149 "opt_util.m"
                              }
#line 2128 "opt_util.m"
                            else
#line 2128 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2182 "opt_util.m"
                                {
#line 2182 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Label_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2183 "opt_util.m"
                                  MR_Word ll_backend__opt_util__TypeCtorInfo_184_184 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2183 "opt_util.m"
                                  MR_Word ll_backend__opt_util__V_37_37;
#line 2183 "opt_util.m"
                                  MR_Box ll_backend__opt_util__conv0_V_37_37;

#line 2183 "opt_util.m"
                                  {
#line 2183 "opt_util.m"
                                    ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_184_184, ll_backend__opt_util__TypeCtorInfo_184_184, ll_backend__opt_util__ReplMap_7, ((MR_Box) (ll_backend__opt_util__Label_36)), &ll_backend__opt_util__conv0_V_37_37);
                                  }
#line 2183 "opt_util.m"
                                  if (ll_backend__opt_util__succeeded)
#line 2183 "opt_util.m"
                                    {
#line 2183 "opt_util.m"
                                      ll_backend__opt_util__V_37_37 = ((MR_Word) ll_backend__opt_util__conv0_V_37_37);
#line 2183 "opt_util.m"
                                      ll_backend__opt_util__succeeded = MR_TRUE;
#line 2183 "opt_util.m"
                                    }
#line 2188 "opt_util.m"
                                  if (ll_backend__opt_util__succeeded)
#line 2187 "opt_util.m"
                                    {
#line 2187 "opt_util.m"
                                      {
#line 2187 "opt_util.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.replace_labels_instr\'/4", (MR_String) "eliminated label");
#line 2187 "opt_util.m"
                                        return;
                                      }
#line 2187 "opt_util.m"
                                    }
#line 2188 "opt_util.m"
                                  else
#line 2189 "opt_util.m"
                                    {
#line 2189 "opt_util.m"
                                    }
#line 2191 "opt_util.m"
                                  *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
#line 2182 "opt_util.m"
                                }
#line 2128 "opt_util.m"
                              else
#line 2128 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 2466 "opt_util.m"
                                  {
#line 2466 "opt_util.m"
                                    MR_Integer ll_backend__opt_util__NumSLots_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2466 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Lval0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2466 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Lval_171;

#line 2467 "opt_util.m"
                                    {
#line 2467 "opt_util.m"
                                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_170, &ll_backend__opt_util__Lval_171, ll_backend__opt_util__ReplMap_7);
                                    }
#line 2468 "opt_util.m"
                                    {
#line 2468 "opt_util.m"
                                      MR_Word base;
#line 2468 "opt_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2468 "opt_util.m"
                                      *ll_backend__opt_util__Uinstr_6 = base;
#line 2468 "opt_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 2468 "opt_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__NumSLots_102));
#line 2468 "opt_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lval_171));
#line 2468 "opt_util.m"
                                    }
#line 2466 "opt_util.m"
                                  }
#line 2128 "opt_util.m"
                                else
#line 2128 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 2482 "opt_util.m"
                                    {
#line 2482 "opt_util.m"
                                      MR_Word ll_backend__opt_util__LCRval0_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2482 "opt_util.m"
                                      MR_Word ll_backend__opt_util__LCSRval0_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2482 "opt_util.m"
                                      MR_Word ll_backend__opt_util__LCRval_182;
#line 2482 "opt_util.m"
                                      MR_Word ll_backend__opt_util__LCSRval_183;

#line 2483 "opt_util.m"
                                      {
#line 2483 "opt_util.m"
                                        ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCRval0_180, &ll_backend__opt_util__LCRval_182, ll_backend__opt_util__ReplMap_7);
                                      }
#line 2484 "opt_util.m"
                                      {
#line 2484 "opt_util.m"
                                        ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCSRval0_181, &ll_backend__opt_util__LCSRval_183, ll_backend__opt_util__ReplMap_7);
                                      }
#line 2485 "opt_util.m"
                                      {
#line 2485 "opt_util.m"
                                        MR_Word base;
#line 2485 "opt_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2485 "opt_util.m"
                                        *ll_backend__opt_util__Uinstr_6 = base;
#line 2485 "opt_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 2485 "opt_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__LCRval_182));
#line 2485 "opt_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__LCSRval_183));
#line 2485 "opt_util.m"
                                      }
#line 2482 "opt_util.m"
                                    }
#line 2128 "opt_util.m"
                                  else
#line 2128 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 2476 "opt_util.m"
                                      {
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__LCRval0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__LCSRval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__LCRval_105;
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__LCSRval_106;
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Label_178;
#line 2476 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Label0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));

#line 2477 "opt_util.m"
                                        {
#line 2477 "opt_util.m"
                                          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCRval0_103, &ll_backend__opt_util__LCRval_105, ll_backend__opt_util__ReplMap_7);
                                        }
#line 2478 "opt_util.m"
                                        {
#line 2478 "opt_util.m"
                                          ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__LCSRval0_104, &ll_backend__opt_util__LCSRval_106, ll_backend__opt_util__ReplMap_7);
                                        }
#line 2479 "opt_util.m"
                                        {
#line 2479 "opt_util.m"
                                          ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_179, &ll_backend__opt_util__Label_178, ll_backend__opt_util__ReplMap_7);
                                        }
#line 2480 "opt_util.m"
                                        {
#line 2480 "opt_util.m"
                                          MR_Word base;
#line 2480 "opt_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2480 "opt_util.m"
                                          *ll_backend__opt_util__Uinstr_6 = base;
#line 2480 "opt_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 2480 "opt_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__LCRval_105));
#line 2480 "opt_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__LCSRval_106));
#line 2480 "opt_util.m"
                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Label_178));
#line 2480 "opt_util.m"
                                        }
#line 2476 "opt_util.m"
                                      }
#line 2128 "opt_util.m"
                                    else
#line 2128 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 2470 "opt_util.m"
                                        {
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Lval0_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Rval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Lval_174;
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Rval_175;
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Label_176;
#line 2470 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Label0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));

#line 2471 "opt_util.m"
                                          {
#line 2471 "opt_util.m"
                                            ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_173, &ll_backend__opt_util__Rval_175, ll_backend__opt_util__ReplMap_7);
                                          }
#line 2472 "opt_util.m"
                                          {
#line 2472 "opt_util.m"
                                            ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_172, &ll_backend__opt_util__Lval_174, ll_backend__opt_util__ReplMap_7);
                                          }
#line 2473 "opt_util.m"
                                          {
#line 2473 "opt_util.m"
                                            ll_backend__opt_util__replace_labels_label_3_p_0(ll_backend__opt_util__Label0_177, &ll_backend__opt_util__Label_176, ll_backend__opt_util__ReplMap_7);
                                          }
#line 2474 "opt_util.m"
                                          {
#line 2474 "opt_util.m"
                                            MR_Word base;
#line 2474 "opt_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2474 "opt_util.m"
                                            *ll_backend__opt_util__Uinstr_6 = base;
#line 2474 "opt_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 2474 "opt_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_175));
#line 2474 "opt_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Lval_174));
#line 2474 "opt_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__Label_176));
#line 2474 "opt_util.m"
                                          }
#line 2470 "opt_util.m"
                                        }
#line 2128 "opt_util.m"
                                      else
#line 2128 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2161 "opt_util.m"
                                          {
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Target_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Return0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__LiveInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__CXT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__GP_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__CM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 6)));
#line 2161 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Return_30;

#line 2162 "opt_util.m"
                                            {
#line 2162 "opt_util.m"
                                              ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Return0_25, &ll_backend__opt_util__Return_30, ll_backend__opt_util__ReplMap_7);
                                            }
#line 2163 "opt_util.m"
                                            {
#line 2163 "opt_util.m"
                                              MR_Word base;
#line 2163 "opt_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "opt_util.m"
                                              *ll_backend__opt_util__Uinstr_6 = base;
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Target_24));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Return_30));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__LiveInfo_26));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__CXT_27));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__GP_28));
#line 2163 "opt_util.m"
                                              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__opt_util__CM_29));
#line 2163 "opt_util.m"
                                            }
#line 2161 "opt_util.m"
                                          }
#line 2128 "opt_util.m"
                                        else
#line 2128 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 2289 "opt_util.m"
                                            {
#line 2289 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Lval0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2289 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Lval_147;

#line 2293 "opt_util.m"
                                              if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2295 "opt_util.m"
                                                ll_backend__opt_util__Lval_147 = ll_backend__opt_util__Lval0_146;
#line 2293 "opt_util.m"
                                              else
#line 2292 "opt_util.m"
                                                {
#line 2292 "opt_util.m"
                                                  ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_146, &ll_backend__opt_util__Lval_147, ll_backend__opt_util__ReplMap_7);
                                                }
#line 2297 "opt_util.m"
                                              {
#line 2297 "opt_util.m"
                                                MR_Word base;
#line 2297 "opt_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2297 "opt_util.m"
                                                *ll_backend__opt_util__Uinstr_6 = base;
#line 2297 "opt_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 2297 "opt_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_147));
#line 2297 "opt_util.m"
                                              }
#line 2289 "opt_util.m"
                                            }
#line 2128 "opt_util.m"
                                          else
#line 2128 "opt_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 2373 "opt_util.m"
                                              {
#line 2373 "opt_util.m"
                                                MR_Word ll_backend__opt_util__Lval0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2373 "opt_util.m"
                                                MR_Word ll_backend__opt_util__Lval_160;

#line 2377 "opt_util.m"
                                                if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2379 "opt_util.m"
                                                  ll_backend__opt_util__Lval_160 = ll_backend__opt_util__Lval0_159;
#line 2377 "opt_util.m"
                                                else
#line 2376 "opt_util.m"
                                                  {
#line 2376 "opt_util.m"
                                                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_159, &ll_backend__opt_util__Lval_160, ll_backend__opt_util__ReplMap_7);
                                                  }
#line 2381 "opt_util.m"
                                                {
#line 2381 "opt_util.m"
                                                  MR_Word base;
#line 2381 "opt_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2381 "opt_util.m"
                                                  *ll_backend__opt_util__Uinstr_6 = base;
#line 2381 "opt_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 2381 "opt_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_160));
#line 2381 "opt_util.m"
                                                }
#line 2373 "opt_util.m"
                                              }
#line 2128 "opt_util.m"
                                            else
#line 2128 "opt_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2165 "opt_util.m"
                                                {
#line 2165 "opt_util.m"
                                                  MR_Word ll_backend__opt_util__NondetFrameInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2165 "opt_util.m"
                                                  MR_Word ll_backend__opt_util__MaybeRedoip0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2165 "opt_util.m"
                                                  MR_Word ll_backend__opt_util__MaybeRedoip_35;

#line 2176 "opt_util.m"
                                                  if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2178 "opt_util.m"
                                                    ll_backend__opt_util__MaybeRedoip_35 = ll_backend__opt_util__MaybeRedoip0_32;
#line 2176 "opt_util.m"
                                                  else
#line 2172 "opt_util.m"
                                                    if ((ll_backend__opt_util__MaybeRedoip0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2174 "opt_util.m"
                                                      ll_backend__opt_util__MaybeRedoip_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2172 "opt_util.m"
                                                    else
#line 2169 "opt_util.m"
                                                      {
#line 2169 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__Redoip0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRedoip0_32, (MR_Integer) 0)));
#line 2169 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__Redoip_34;

#line 2170 "opt_util.m"
                                                        {
#line 2170 "opt_util.m"
                                                          ll_backend__opt_util__replace_labels_code_addr_3_p_0(ll_backend__opt_util__Redoip0_33, &ll_backend__opt_util__Redoip_34, ll_backend__opt_util__ReplMap_7);
                                                        }
#line 2171 "opt_util.m"
                                                        {
#line 2171 "opt_util.m"
                                                          ll_backend__opt_util__MaybeRedoip_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "opt_util.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRedoip_35, 0) = ((MR_Box) (ll_backend__opt_util__Redoip_34));
#line 2171 "opt_util.m"
                                                        }
#line 2169 "opt_util.m"
                                                      }
#line 2180 "opt_util.m"
                                                  {
#line 2180 "opt_util.m"
                                                    MR_Word base;
#line 2180 "opt_util.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "opt_util.m"
                                                    *ll_backend__opt_util__Uinstr_6 = base;
#line 2180 "opt_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2180 "opt_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__NondetFrameInfo_31));
#line 2180 "opt_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__MaybeRedoip_35));
#line 2180 "opt_util.m"
                                                  }
#line 2165 "opt_util.m"
                                                }
#line 2128 "opt_util.m"
                                              else
#line 2128 "opt_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 2383 "opt_util.m"
                                                  {
#line 2383 "opt_util.m"
                                                    MR_Word ll_backend__opt_util__Rval0_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2383 "opt_util.m"
                                                    MR_Word ll_backend__opt_util__Rval_162;

#line 2387 "opt_util.m"
                                                    if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2389 "opt_util.m"
                                                      ll_backend__opt_util__Rval_162 = ll_backend__opt_util__Rval0_161;
#line 2387 "opt_util.m"
                                                    else
#line 2386 "opt_util.m"
                                                      {
#line 2386 "opt_util.m"
                                                        ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_161, &ll_backend__opt_util__Rval_162, ll_backend__opt_util__ReplMap_7);
                                                      }
#line 2391 "opt_util.m"
                                                    {
#line 2391 "opt_util.m"
                                                      MR_Word base;
#line 2391 "opt_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2391 "opt_util.m"
                                                      *ll_backend__opt_util__Uinstr_6 = base;
#line 2391 "opt_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 2391 "opt_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_162));
#line 2391 "opt_util.m"
                                                    }
#line 2383 "opt_util.m"
                                                  }
#line 2128 "opt_util.m"
                                                else
#line 2128 "opt_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 2320 "opt_util.m"
                                                    *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
#line 2128 "opt_util.m"
                                                  else
#line 2128 "opt_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 2323 "opt_util.m"
                                                      {
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__FillOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__IdRval0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__NumLval0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 4)));
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__AddrLval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 5)));
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__IdRval_67;
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__NumLval_68;
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__AddrLval_69;
#line 2323 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__EmbeddedStackFrame_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

#line 2329 "opt_util.m"
                                                        if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2330 "opt_util.m"
                                                          {
#line 2331 "opt_util.m"
                                                            ll_backend__opt_util__IdRval_67 = ll_backend__opt_util__IdRval0_64;
#line 2332 "opt_util.m"
                                                            ll_backend__opt_util__NumLval_68 = ll_backend__opt_util__NumLval0_65;
#line 2333 "opt_util.m"
                                                            ll_backend__opt_util__AddrLval_69 = ll_backend__opt_util__AddrLval0_66;
#line 2330 "opt_util.m"
                                                          }
#line 2329 "opt_util.m"
                                                        else
#line 2325 "opt_util.m"
                                                          {
#line 2326 "opt_util.m"
                                                            {
#line 2326 "opt_util.m"
                                                              ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__IdRval0_64, &ll_backend__opt_util__IdRval_67, ll_backend__opt_util__ReplMap_7);
                                                            }
#line 2327 "opt_util.m"
                                                            {
#line 2327 "opt_util.m"
                                                              ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__NumLval0_65, &ll_backend__opt_util__NumLval_68, ll_backend__opt_util__ReplMap_7);
                                                            }
#line 2328 "opt_util.m"
                                                            {
#line 2328 "opt_util.m"
                                                              ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__AddrLval0_66, &ll_backend__opt_util__AddrLval_69, ll_backend__opt_util__ReplMap_7);
                                                            }
#line 2325 "opt_util.m"
                                                          }
#line 2335 "opt_util.m"
                                                        {
#line 2335 "opt_util.m"
                                                          MR_Word base;
#line 2335 "opt_util.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2335 "opt_util.m"
                                                          *ll_backend__opt_util__Uinstr_6 = base;
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__FillOp_63));
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__EmbeddedStackFrame_152));
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__IdRval_67));
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__opt_util__NumLval_68));
#line 2335 "opt_util.m"
                                                          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__opt_util__AddrLval_69));
#line 2335 "opt_util.m"
                                                        }
#line 2323 "opt_util.m"
                                                      }
#line 2128 "opt_util.m"
                                                    else
#line 2128 "opt_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 2339 "opt_util.m"
                                                        {
#line 2339 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__SetOp_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2339 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__ValueRval0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 3)));
#line 2339 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__ValueRval_72;
#line 2339 "opt_util.m"
                                                          MR_Word ll_backend__opt_util__EmbeddedStackFrame_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));

#line 2343 "opt_util.m"
                                                          if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2345 "opt_util.m"
                                                            ll_backend__opt_util__ValueRval_72 = ll_backend__opt_util__ValueRval0_71;
#line 2343 "opt_util.m"
                                                          else
#line 2342 "opt_util.m"
                                                            {
#line 2342 "opt_util.m"
                                                              ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__ValueRval0_71, &ll_backend__opt_util__ValueRval_72, ll_backend__opt_util__ReplMap_7);
                                                            }
#line 2347 "opt_util.m"
                                                          {
#line 2347 "opt_util.m"
                                                            MR_Word base;
#line 2347 "opt_util.m"
                                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2347 "opt_util.m"
                                                            *ll_backend__opt_util__Uinstr_6 = base;
#line 2347 "opt_util.m"
                                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 2347 "opt_util.m"
                                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__SetOp_70));
#line 2347 "opt_util.m"
                                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__EmbeddedStackFrame_153));
#line 2347 "opt_util.m"
                                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__opt_util__ValueRval_72));
#line 2347 "opt_util.m"
                                                          }
#line 2339 "opt_util.m"
                                                        }
#line 2128 "opt_util.m"
                                                      else
#line 2128 "opt_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 2363 "opt_util.m"
                                                          {
#line 2363 "opt_util.m"
                                                            MR_Word ll_backend__opt_util__Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 2)));
#line 2363 "opt_util.m"
                                                            MR_Word ll_backend__opt_util__Rval0_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2363 "opt_util.m"
                                                            MR_Word ll_backend__opt_util__Rval_158;

#line 2367 "opt_util.m"
                                                            if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2369 "opt_util.m"
                                                              ll_backend__opt_util__Rval_158 = ll_backend__opt_util__Rval0_157;
#line 2367 "opt_util.m"
                                                            else
#line 2366 "opt_util.m"
                                                              {
#line 2366 "opt_util.m"
                                                                ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_157, &ll_backend__opt_util__Rval_158, ll_backend__opt_util__ReplMap_7);
                                                              }
#line 2371 "opt_util.m"
                                                            {
#line 2371 "opt_util.m"
                                                              MR_Word base;
#line 2371 "opt_util.m"
                                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2371 "opt_util.m"
                                                              *ll_backend__opt_util__Uinstr_6 = base;
#line 2371 "opt_util.m"
                                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 2371 "opt_util.m"
                                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_158));
#line 2371 "opt_util.m"
                                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__opt_util__Reason_74));
#line 2371 "opt_util.m"
                                                            }
#line 2363 "opt_util.m"
                                                          }
#line 2128 "opt_util.m"
                                                        else
#line 2128 "opt_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 2299 "opt_util.m"
                                                            {
#line 2299 "opt_util.m"
                                                              MR_Word ll_backend__opt_util__Rval0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2299 "opt_util.m"
                                                              MR_Word ll_backend__opt_util__Rval_149;

#line 2303 "opt_util.m"
                                                              if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2305 "opt_util.m"
                                                                ll_backend__opt_util__Rval_149 = ll_backend__opt_util__Rval0_148;
#line 2303 "opt_util.m"
                                                              else
#line 2302 "opt_util.m"
                                                                {
#line 2302 "opt_util.m"
                                                                  ll_backend__opt_util__replace_labels_rval_3_p_0(ll_backend__opt_util__Rval0_148, &ll_backend__opt_util__Rval_149, ll_backend__opt_util__ReplMap_7);
                                                                }
#line 2307 "opt_util.m"
                                                              {
#line 2307 "opt_util.m"
                                                                MR_Word base;
#line 2307 "opt_util.m"
                                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "opt_util.m"
                                                                *ll_backend__opt_util__Uinstr_6 = base;
#line 2307 "opt_util.m"
                                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 2307 "opt_util.m"
                                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Rval_149));
#line 2307 "opt_util.m"
                                                              }
#line 2299 "opt_util.m"
                                                            }
#line 2128 "opt_util.m"
                                                          else
#line 2128 "opt_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 2239 "opt_util.m"
                                                              {
#line 2239 "opt_util.m"
                                                                MR_Word ll_backend__opt_util__Lval0_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2239 "opt_util.m"
                                                                MR_Word ll_backend__opt_util__Lval_141;

#line 2243 "opt_util.m"
                                                                if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2245 "opt_util.m"
                                                                  ll_backend__opt_util__Lval_141 = ll_backend__opt_util__Lval0_140;
#line 2243 "opt_util.m"
                                                                else
#line 2242 "opt_util.m"
                                                                  {
#line 2242 "opt_util.m"
                                                                    ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_140, &ll_backend__opt_util__Lval_141, ll_backend__opt_util__ReplMap_7);
                                                                  }
#line 2247 "opt_util.m"
                                                                {
#line 2247 "opt_util.m"
                                                                  MR_Word base;
#line 2247 "opt_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "opt_util.m"
                                                                  *ll_backend__opt_util__Uinstr_6 = base;
#line 2247 "opt_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 2247 "opt_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_141));
#line 2247 "opt_util.m"
                                                                }
#line 2239 "opt_util.m"
                                                              }
#line 2128 "opt_util.m"
                                                            else
#line 2128 "opt_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 2229 "opt_util.m"
                                                                {
#line 2229 "opt_util.m"
                                                                  MR_Word ll_backend__opt_util__Lval0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2229 "opt_util.m"
                                                                  MR_Word ll_backend__opt_util__Lval_139;

#line 2233 "opt_util.m"
                                                                  if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2235 "opt_util.m"
                                                                    ll_backend__opt_util__Lval_139 = ll_backend__opt_util__Lval0_138;
#line 2233 "opt_util.m"
                                                                  else
#line 2232 "opt_util.m"
                                                                    {
#line 2232 "opt_util.m"
                                                                      ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_138, &ll_backend__opt_util__Lval_139, ll_backend__opt_util__ReplMap_7);
                                                                    }
#line 2237 "opt_util.m"
                                                                  {
#line 2237 "opt_util.m"
                                                                    MR_Word base;
#line 2237 "opt_util.m"
                                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2237 "opt_util.m"
                                                                    *ll_backend__opt_util__Uinstr_6 = base;
#line 2237 "opt_util.m"
                                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 2237 "opt_util.m"
                                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_139));
#line 2237 "opt_util.m"
                                                                  }
#line 2229 "opt_util.m"
                                                                }
#line 2128 "opt_util.m"
                                                              else
#line 2128 "opt_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 2353 "opt_util.m"
                                                                  {
#line 2353 "opt_util.m"
                                                                    MR_Word ll_backend__opt_util__Lval0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 1)));
#line 2353 "opt_util.m"
                                                                    MR_Word ll_backend__opt_util__Lval_156;

#line 2357 "opt_util.m"
                                                                    if ((ll_backend__opt_util__ReplData_8 == (MR_Integer) 0))
#line 2359 "opt_util.m"
                                                                      ll_backend__opt_util__Lval_156 = ll_backend__opt_util__Lval0_155;
#line 2357 "opt_util.m"
                                                                    else
#line 2356 "opt_util.m"
                                                                      {
#line 2356 "opt_util.m"
                                                                        ll_backend__opt_util__replace_labels_lval_3_p_0(ll_backend__opt_util__Lval0_155, &ll_backend__opt_util__Lval_156, ll_backend__opt_util__ReplMap_7);
                                                                      }
#line 2361 "opt_util.m"
                                                                    {
#line 2361 "opt_util.m"
                                                                      MR_Word base;
#line 2361 "opt_util.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "opt_util.m"
                                                                      *ll_backend__opt_util__Uinstr_6 = base;
#line 2361 "opt_util.m"
                                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 2361 "opt_util.m"
                                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__opt_util__Lval_156));
#line 2361 "opt_util.m"
                                                                    }
#line 2353 "opt_util.m"
                                                                  }
#line 2128 "opt_util.m"
                                                                else
#line 2128 "opt_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_5, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 2351 "opt_util.m"
                                                                    *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
#line 2128 "opt_util.m"
                                                                  else
#line 2129 "opt_util.m"
                                                                    *ll_backend__opt_util__Uinstr_6 = ll_backend__opt_util__Uinstr0_5;
#line 2128 "opt_util.m"
  }
#line 290 "opt_util.m"
}

#line 277 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__propagate_livevals_2_p_0(
#line 277 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 277 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_4)
#line 277 "opt_util.m"
{
#line 2066 "opt_util.m"
  {
#line 2066 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 2066 "opt_util.m"
    MR_Word ll_backend__opt_util__TypeCtorInfo_8_8 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 2066 "opt_util.m"
    MR_Word ll_backend__opt_util__RevInstrs0_5;
#line 2066 "opt_util.m"
    MR_Word ll_backend__opt_util__Livevals_6;
#line 2066 "opt_util.m"
    MR_Word ll_backend__opt_util__RevInstrs_7;

#line 2067 "opt_util.m"
    {
#line 2067 "opt_util.m"
      mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__RevInstrs0_5);
    }
#line 2068 "opt_util.m"
    {
#line 2068 "opt_util.m"
      mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__opt_util__Livevals_6);
    }
#line 2069 "opt_util.m"
    {
#line 2069 "opt_util.m"
      ll_backend__opt_util__propagate_livevals_2_3_p_0(ll_backend__opt_util__RevInstrs0_5, ll_backend__opt_util__Livevals_6, &ll_backend__opt_util__RevInstrs_7);
    }
#line 2070 "opt_util.m"
    {
#line 2070 "opt_util.m"
      mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_8_8, ll_backend__opt_util__RevInstrs_7, ll_backend__opt_util__Instrs_4);
#line 2070 "opt_util.m"
      return;
    }
#line 2066 "opt_util.m"
  }
#line 277 "opt_util.m"
}

#line 269 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__count_incr_hp_2_p_0(
#line 269 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs_3,
#line 269 "opt_util.m"
  MR_Integer * ll_backend__opt_util__N_4)
#line 269 "opt_util.m"
{
#line 2050 "opt_util.m"
  {
#line 2050 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2051 "opt_util.m"
    {
#line 2051 "opt_util.m"
      ll_backend__opt_util__count_incr_hp_2_3_p_0(ll_backend__opt_util__Instrs_3, (MR_Integer) 0, ll_backend__opt_util__N_4);
#line 2051 "opt_util.m"
      return;
    }
#line 2050 "opt_util.m"
  }
#line 269 "opt_util.m"
}

#line 265 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__rvals_free_of_lval_2_p_0(
#line 265 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 265 "opt_util.m"
  MR_Word ll_backend__opt_util__Forbidden_2)
#line 265 "opt_util.m"
{
#line 2028 "opt_util.m"
  while (MR_TRUE)
#line 2028 "opt_util.m"
    {
#line 2028 "opt_util.m"
      /* tailcall optimized into a loop */
#line 2028 "opt_util.m"
      {
#line 2028 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 2028 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2028 "opt_util.m"
          ll_backend__opt_util__succeeded = MR_TRUE;
#line 2028 "opt_util.m"
        else
#line 2029 "opt_util.m"
          {
#line 2029 "opt_util.m"
            MR_Word ll_backend__opt_util__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2029 "opt_util.m"
            MR_Word ll_backend__opt_util__Rvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2030 "opt_util.m"
            {
#line 2030 "opt_util.m"
              ll_backend__opt_util__succeeded = ll_backend__opt_util__rval_free_of_lval_2_p_0(ll_backend__opt_util__Rval_4, ll_backend__opt_util__Forbidden_2);
            }
#line 2029 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2031 "opt_util.m"
              {
#line 2031 "opt_util.m"
                /* direct tailcall eliminated */
#line 2031 "opt_util.m"
                {
#line 2031 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rvals_5;

#line 2031 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 2031 "opt_util.m"
                }
#line 2031 "opt_util.m"
                continue;
#line 2031 "opt_util.m"
              }
#line 2029 "opt_util.m"
          }
#line 2028 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 2028 "opt_util.m"
      }
#line 2028 "opt_util.m"
      break;
#line 2028 "opt_util.m"
    }
#line 265 "opt_util.m"
}

#line 261 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__rval_free_of_lval_2_p_0(
#line 261 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 261 "opt_util.m"
  MR_Word ll_backend__opt_util__Forbidden_2)
#line 261 "opt_util.m"
{
#line 2033 "opt_util.m"
  while (MR_TRUE)
#line 2033 "opt_util.m"
    {
#line 2033 "opt_util.m"
      /* tailcall optimized into a loop */
#line 2033 "opt_util.m"
      {
#line 2033 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 2033 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2033 "opt_util.m"
          {
#line 2033 "opt_util.m"
            MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2033 "opt_util.m"
            MR_Word ll_backend__opt_util__Rvals_5;

#line 2034 "opt_util.m"
            {
#line 2034 "opt_util.m"
              ll_backend__opt_util__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__opt_util__Lval_3, ll_backend__opt_util__Forbidden_2);
            }
#line 2034 "opt_util.m"
            ll_backend__opt_util__succeeded = !(ll_backend__opt_util__succeeded);
#line 2033 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 2033 "opt_util.m"
              {
#line 2035 "opt_util.m"
                {
#line 2035 "opt_util.m"
                  ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__opt_util__Lval_3, &ll_backend__opt_util__Rvals_5);
                }
#line 2036 "opt_util.m"
                {
#line 2036 "opt_util.m"
                  return ll_backend__opt_util__succeeded = ll_backend__opt_util__rvals_free_of_lval_2_p_0(ll_backend__opt_util__Rvals_5, ll_backend__opt_util__Forbidden_2);
                }
#line 2033 "opt_util.m"
              }
#line 2033 "opt_util.m"
          }
#line 2033 "opt_util.m"
        else
#line 2033 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2039 "opt_util.m"
            {
#line 2039 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2039 "opt_util.m"
              MR_Integer ll_backend__opt_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 2040 "opt_util.m"
              /* direct tailcall eliminated */
#line 2040 "opt_util.m"
              {
#line 2040 "opt_util.m"
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_12;

#line 2040 "opt_util.m"
                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 2040 "opt_util.m"
              }
#line 2040 "opt_util.m"
              continue;
#line 2039 "opt_util.m"
            }
#line 2033 "opt_util.m"
          else
#line 2033 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2037 "opt_util.m"
              {
#line 2038 "opt_util.m"
                {
#line 2038 "opt_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.rval_free_of_lval\'/2", (MR_String) "var");
                }
#line 2037 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 2037 "opt_util.m"
              }
#line 2033 "opt_util.m"
            else
#line 2033 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2044 "opt_util.m"
                {
#line 2044 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 2044 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 2044 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2045 "opt_util.m"
                  {
#line 2045 "opt_util.m"
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__rval_free_of_lval_2_p_0(ll_backend__opt_util__Rval1_20, ll_backend__opt_util__Forbidden_2);
                  }
#line 2044 "opt_util.m"
                  if (ll_backend__opt_util__succeeded)
#line 2046 "opt_util.m"
                    {
#line 2046 "opt_util.m"
                      /* direct tailcall eliminated */
#line 2046 "opt_util.m"
                      {
#line 2046 "opt_util.m"
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval2_21;

#line 2046 "opt_util.m"
                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 2046 "opt_util.m"
                      }
#line 2046 "opt_util.m"
                      continue;
#line 2046 "opt_util.m"
                    }
#line 2044 "opt_util.m"
                }
#line 2033 "opt_util.m"
              else
#line 2033 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2041 "opt_util.m"
                  ll_backend__opt_util__succeeded = MR_TRUE;
#line 2033 "opt_util.m"
                else
#line 2033 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2042 "opt_util.m"
                    {
#line 2042 "opt_util.m"
                      MR_Word ll_backend__opt_util__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 2042 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2043 "opt_util.m"
                      /* direct tailcall eliminated */
#line 2043 "opt_util.m"
                      {
#line 2043 "opt_util.m"
                        MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_17;

#line 2043 "opt_util.m"
                        ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 2043 "opt_util.m"
                      }
#line 2043 "opt_util.m"
                      continue;
#line 2042 "opt_util.m"
                    }
#line 2033 "opt_util.m"
                  else
#line 2033 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_FALSE;
#line 2033 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 2033 "opt_util.m"
      }
#line 2033 "opt_util.m"
      break;
#line 2033 "opt_util.m"
    }
#line 261 "opt_util.m"
}

#line 257 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__lval_access_rvals_2_p_0(
#line 257 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 257 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 257 "opt_util.m"
{
#line 2003 "opt_util.m"
  {
#line 2003 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 2003 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2010 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
    else
#line 2003 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2016 "opt_util.m"
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
      else
#line 2003 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2009 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
        else
#line 2003 "opt_util.m"
          if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 2018 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
          else
#line 2003 "opt_util.m"
            if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2017 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
            else
#line 2003 "opt_util.m"
              if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2008 "opt_util.m"
                *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
              else
#line 2003 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2003 "opt_util.m"
                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                else
#line 2003 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2020 "opt_util.m"
                    *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                  else
#line 2003 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2007 "opt_util.m"
                      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                    else
#line 2003 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2019 "opt_util.m"
                        {
#line 2019 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 2019 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 2019 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_23_23;
#line 2019 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2019 "opt_util.m"
                          {
#line 2019 "opt_util.m"
                            ll_backend__opt_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "opt_util.m"
                            MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_23_23, 0) = ((MR_Box) (ll_backend__opt_util__Rval2_22));
#line 2019 "opt_util.m"
                            MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2019 "opt_util.m"
                          }
#line 2019 "opt_util.m"
                          {
#line 2019 "opt_util.m"
                            MR_Word base;
#line 2019 "opt_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "opt_util.m"
                            *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2019 "opt_util.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval1_21));
#line 2019 "opt_util.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_23_23));
#line 2019 "opt_util.m"
                          }
#line 2019 "opt_util.m"
                        }
#line 2003 "opt_util.m"
                      else
#line 2003 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2006 "opt_util.m"
                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                        else
#line 2003 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 2024 "opt_util.m"
                            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                          else
#line 2003 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 2021 "opt_util.m"
                              {
#line 2022 "opt_util.m"
                                {
#line 2022 "opt_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.lval_access_rvals\'/2", (MR_String) "lvar");
#line 2022 "opt_util.m"
                                  return;
                                }
#line 2021 "opt_util.m"
                              }
#line 2003 "opt_util.m"
                            else
#line 2003 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 2023 "opt_util.m"
                                {
#line 2023 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Rval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2023 "opt_util.m"
                                  {
#line 2023 "opt_util.m"
                                    MR_Word base;
#line 2023 "opt_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "opt_util.m"
                                    *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2023 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_32));
#line 2023 "opt_util.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2023 "opt_util.m"
                                  }
#line 2023 "opt_util.m"
                                }
#line 2003 "opt_util.m"
                              else
#line 2003 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2005 "opt_util.m"
                                  *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                                else
#line 2003 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2014 "opt_util.m"
                                    {
#line 2014 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2014 "opt_util.m"
                                      {
#line 2014 "opt_util.m"
                                        MR_Word base;
#line 2014 "opt_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2014 "opt_util.m"
                                        *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2014 "opt_util.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_16));
#line 2014 "opt_util.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2014 "opt_util.m"
                                      }
#line 2014 "opt_util.m"
                                    }
#line 2003 "opt_util.m"
                                  else
#line 2003 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2013 "opt_util.m"
                                      {
#line 2013 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2013 "opt_util.m"
                                        {
#line 2013 "opt_util.m"
                                          MR_Word base;
#line 2013 "opt_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2013 "opt_util.m"
                                          *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2013 "opt_util.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_14));
#line 2013 "opt_util.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2013 "opt_util.m"
                                        }
#line 2013 "opt_util.m"
                                      }
#line 2003 "opt_util.m"
                                    else
#line 2003 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2011 "opt_util.m"
                                        {
#line 2011 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2011 "opt_util.m"
                                          {
#line 2011 "opt_util.m"
                                            MR_Word base;
#line 2011 "opt_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "opt_util.m"
                                            *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2011 "opt_util.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_10));
#line 2011 "opt_util.m"
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2011 "opt_util.m"
                                          }
#line 2011 "opt_util.m"
                                        }
#line 2003 "opt_util.m"
                                      else
#line 2003 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2004 "opt_util.m"
                                          *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2003 "opt_util.m"
                                        else
#line 2003 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2015 "opt_util.m"
                                            {
#line 2015 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2015 "opt_util.m"
                                              {
#line 2015 "opt_util.m"
                                                MR_Word base;
#line 2015 "opt_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "opt_util.m"
                                                *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2015 "opt_util.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_18));
#line 2015 "opt_util.m"
                                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2015 "opt_util.m"
                                              }
#line 2015 "opt_util.m"
                                            }
#line 2003 "opt_util.m"
                                          else
#line 2012 "opt_util.m"
                                            {
#line 2012 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 2012 "opt_util.m"
                                              {
#line 2012 "opt_util.m"
                                                MR_Word base;
#line 2012 "opt_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2012 "opt_util.m"
                                                *ll_backend__opt_util__HeadVar__2_2 = base;
#line 2012 "opt_util.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Rval_12));
#line 2012 "opt_util.m"
                                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2012 "opt_util.m"
                                              }
#line 2012 "opt_util.m"
                                            }
#line 2003 "opt_util.m"
  }
#line 257 "opt_util.m"
}

#line 253 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__has_both_incr_decr_sp_1_p_0(
#line 253 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs_2)
#line 253 "opt_util.m"
{
#line 1789 "opt_util.m"
  {
#line 1789 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1789 "opt_util.m"
    MR_Word ll_backend__opt_util__V_7_7;
#line 1789 "opt_util.m"
    MR_Word ll_backend__opt_util__V_8_8;

#line 1790 "opt_util.m"
    {
#line 1790 "opt_util.m"
      ll_backend__opt_util__has_both_incr_decr_sp_2_5_p_0(ll_backend__opt_util__Instrs_2, (MR_Integer) 0, &ll_backend__opt_util__V_7_7, (MR_Integer) 0, &ll_backend__opt_util__V_8_8);
    }
#line 1790 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_Integer) 1 == ll_backend__opt_util__V_7_7);
#line 1789 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 1790 "opt_util.m"
      ll_backend__opt_util__succeeded = ((MR_Integer) 1 == ll_backend__opt_util__V_8_8);
#line 1789 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 1789 "opt_util.m"
  }
#line 253 "opt_util.m"
}

#line 249 "opt_util.m"
MR_String MR_CALL 
ll_backend__opt_util__format_proc_label_1_f_0(
#line 249 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 249 "opt_util.m"
{
#line 1780 "opt_util.m"
  {
#line 1780 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1780 "opt_util.m"
    MR_String ll_backend__opt_util__HeadVar__2_2;

#line 1780 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1780 "opt_util.m"
      {
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1780 "opt_util.m"
        MR_Integer ll_backend__opt_util__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1780 "opt_util.m"
        MR_Integer ll_backend__opt_util__Mode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__V_9_9;
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__V_11_11;
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__V_12_12;
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__V_13_13;
#line 1780 "opt_util.m"
        MR_String ll_backend__opt_util__V_15_15;
#line 1780 "opt_util.m"
        MR_Word ll_backend__opt_util___Module_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1780 "opt_util.m"
        MR_Word ll_backend__opt_util___PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1780 "opt_util.m"
        MR_Word ll_backend__opt_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1781 "opt_util.m"
        {
#line 1781 "opt_util.m"
          ll_backend__opt_util__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Arity_7);
        }
#line 1781 "opt_util.m"
        {
#line 1781 "opt_util.m"
          ll_backend__opt_util__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Mode_8);
        }
#line 1781 "opt_util.m"
        {
#line 1781 "opt_util.m"
          ll_backend__opt_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", ll_backend__opt_util__V_15_15);
        }
#line 1781 "opt_util.m"
        {
#line 1781 "opt_util.m"
          ll_backend__opt_util__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__V_12_12, ll_backend__opt_util__V_13_13);
        }
#line 1781 "opt_util.m"
        {
#line 1781 "opt_util.m"
          ll_backend__opt_util__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__opt_util__V_11_11);
        }
#line 1780 "opt_util.m"
        {
#line 1780 "opt_util.m"
          return ll_backend__opt_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__Name_6, ll_backend__opt_util__V_9_9);
        }
#line 1780 "opt_util.m"
      }
#line 1780 "opt_util.m"
    else
#line 1785 "opt_util.m"
      {
#line 1785 "opt_util.m"
        MR_Word ll_backend__opt_util__SpecialPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1785 "opt_util.m"
        MR_Word ll_backend__opt_util__TypeModule_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1785 "opt_util.m"
        MR_Integer ll_backend__opt_util__TypeArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1785 "opt_util.m"
        MR_Integer ll_backend__opt_util__Mode_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__PredName_22;
#line 1785 "opt_util.m"
        MR_Word ll_backend__opt_util__TypeCtor_23;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_24_24;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_26_26;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_27_27;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_29_29;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_30_30;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_31_31;
#line 1785 "opt_util.m"
        MR_String ll_backend__opt_util__V_33_33;
#line 1785 "opt_util.m"
        MR_Word ll_backend__opt_util__V_34_34;
#line 1785 "opt_util.m"
        MR_Word ll_backend__opt_util___Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1785 "opt_util.m"
        {
#line 1785 "opt_util.m"
          ll_backend__opt_util__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__TypeArity_20);
        }
#line 1785 "opt_util.m"
        {
#line 1785 "opt_util.m"
          ll_backend__opt_util__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_util__Mode_21);
        }
#line 1785 "opt_util.m"
        {
#line 1785 "opt_util.m"
          ll_backend__opt_util__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", ll_backend__opt_util__V_33_33);
        }
#line 1784 "opt_util.m"
        {
#line 1784 "opt_util.m"
          ll_backend__opt_util__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__V_30_30, ll_backend__opt_util__V_31_31);
        }
#line 1784 "opt_util.m"
        {
#line 1784 "opt_util.m"
          ll_backend__opt_util__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__opt_util__V_29_29);
        }
#line 1784 "opt_util.m"
        {
#line 1784 "opt_util.m"
          ll_backend__opt_util__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__TypeName_19, ll_backend__opt_util__V_27_27);
        }
#line 1784 "opt_util.m"
        {
#line 1784 "opt_util.m"
          ll_backend__opt_util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_util__V_26_26);
        }
#line 1786 "opt_util.m"
        {
#line 1786 "opt_util.m"
          ll_backend__opt_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_34_34, 0) = ((MR_Box) (ll_backend__opt_util__TypeModule_18));
#line 1786 "opt_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_34_34, 1) = ((MR_Box) (ll_backend__opt_util__TypeName_19));
#line 1786 "opt_util.m"
        }
#line 1786 "opt_util.m"
        {
#line 1786 "opt_util.m"
          ll_backend__opt_util__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__TypeCtor_23, 0) = ((MR_Box) (ll_backend__opt_util__V_34_34));
#line 1786 "opt_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_util__TypeCtor_23, 1) = ((MR_Box) (ll_backend__opt_util__TypeArity_20));
#line 1786 "opt_util.m"
        }
#line 1787 "opt_util.m"
        {
#line 1787 "opt_util.m"
          ll_backend__opt_util__PredName_22 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_util__SpecialPredId_17, ll_backend__opt_util__TypeCtor_23);
        }
#line 1785 "opt_util.m"
        {
#line 1785 "opt_util.m"
          return ll_backend__opt_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_util__PredName_22, ll_backend__opt_util__V_24_24);
        }
#line 1785 "opt_util.m"
      }
#line 1780 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1780 "opt_util.m"
  }
#line 249 "opt_util.m"
}

#line 248 "opt_util.m"
MR_String MR_CALL 
ll_backend__opt_util__format_label_1_f_0(
#line 248 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 248 "opt_util.m"
{
#line 1776 "opt_util.m"
  {
#line 1776 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1776 "opt_util.m"
    MR_String ll_backend__opt_util__HeadVar__2_2;

#line 1776 "opt_util.m"
    if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1777 "opt_util.m"
      {
#line 1777 "opt_util.m"
        MR_Word ll_backend__opt_util__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1777 "opt_util.m"
        MR_Word ll_backend__opt_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1777 "opt_util.m"
        {
#line 1777 "opt_util.m"
          return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__opt_util__ProcLabel_6);
        }
#line 1777 "opt_util.m"
      }
#line 1776 "opt_util.m"
    else
#line 1776 "opt_util.m"
      {
#line 1776 "opt_util.m"
        MR_Word ll_backend__opt_util__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1776 "opt_util.m"
        MR_Integer ll_backend__opt_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1776 "opt_util.m"
        {
#line 1776 "opt_util.m"
          return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__opt_util__ProcLabel_4);
        }
#line 1776 "opt_util.m"
      }
#line 1776 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1776 "opt_util.m"
  }
#line 248 "opt_util.m"
}

#line 243 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(
#line 243 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 243 "opt_util.m"
  MR_Integer ll_backend__opt_util__FrameSize_7,
#line 243 "opt_util.m"
  MR_Word * ll_backend__opt_util__Between_8,
#line 243 "opt_util.m"
  MR_Word * ll_backend__opt_util__Remain_9)
#line 243 "opt_util.m"
{
#line 785 "opt_util.m"
  while (MR_TRUE)
#line 785 "opt_util.m"
    {
#line 785 "opt_util.m"
      /* tailcall optimized into a loop */
#line 785 "opt_util.m"
      {
#line 785 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 785 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_5;
#line 785 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_6;
#line 785 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr0_10;
#line 786 "opt_util.m"
        MR_String ll_backend__opt_util__V_11_11;

#line 785 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 785 "opt_util.m"
          {
#line 785 "opt_util.m"
            ll_backend__opt_util__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "opt_util.m"
            ll_backend__opt_util__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "opt_util.m"
            ll_backend__opt_util__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 0)));
#line 786 "opt_util.m"
            ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_5, (MR_Integer) 1)));
#line 791 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 788 "opt_util.m"
              {
#line 788 "opt_util.m"
                MR_Word ll_backend__opt_util__Between0_13;

#line 789 "opt_util.m"
                {
#line 789 "opt_util.m"
                  ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_13, ll_backend__opt_util__Remain_9);
                }
#line 788 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 788 "opt_util.m"
                  {
#line 790 "opt_util.m"
                    {
#line 790 "opt_util.m"
                      MR_Word base;
#line 790 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "opt_util.m"
                      *ll_backend__opt_util__Between_8 = base;
#line 790 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
#line 790 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_13));
#line 790 "opt_util.m"
                    }
#line 790 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_TRUE;
#line 788 "opt_util.m"
                  }
#line 788 "opt_util.m"
              }
#line 791 "opt_util.m"
            else
#line 791 "opt_util.m"
              if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 2))))
#line 792 "opt_util.m"
                {
#line 792 "opt_util.m"
                  MR_Word ll_backend__opt_util__Between0_42;

#line 793 "opt_util.m"
                  {
#line 793 "opt_util.m"
                    ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_42, ll_backend__opt_util__Remain_9);
                  }
#line 792 "opt_util.m"
                  if (ll_backend__opt_util__succeeded)
#line 792 "opt_util.m"
                    {
#line 794 "opt_util.m"
                      {
#line 794 "opt_util.m"
                        MR_Word base;
#line 794 "opt_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "opt_util.m"
                        *ll_backend__opt_util__Between_8 = base;
#line 794 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
#line 794 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_42));
#line 794 "opt_util.m"
                      }
#line 794 "opt_util.m"
                      ll_backend__opt_util__succeeded = MR_TRUE;
#line 792 "opt_util.m"
                    }
#line 792 "opt_util.m"
                }
#line 791 "opt_util.m"
              else
#line 791 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 796 "opt_util.m"
                  {
#line 796 "opt_util.m"
                    MR_Word ll_backend__opt_util__Lval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
#line 796 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
#line 798 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_36_36;
#line 798 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_17_17;

#line 798 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Lval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 798 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 798 "opt_util.m"
                      {
#line 798 "opt_util.m"
                        ll_backend__opt_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Lval_15, (MR_Integer) 1)));
#line 799 "opt_util.m"
                        {
#line 799 "opt_util.m"
                          ll_backend__opt_util__V_36_36 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
                        }
#line 799 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_36_36 == (MR_Integer) 0);
#line 798 "opt_util.m"
                      }
#line 802 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 801 "opt_util.m"
                      {
#line 801 "opt_util.m"
                        /* direct tailcall eliminated */
#line 801 "opt_util.m"
                        {
#line 801 "opt_util.m"
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_6;

#line 801 "opt_util.m"
                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 801 "opt_util.m"
                        }
#line 801 "opt_util.m"
                        continue;
#line 801 "opt_util.m"
                      }
#line 802 "opt_util.m"
                    else
#line 810 "opt_util.m"
                      {
#line 810 "opt_util.m"
                        MR_Word ll_backend__opt_util__Instrs2_20;
#line 803 "opt_util.m"
                        MR_Word ll_backend__opt_util__Instrs1_18;
#line 803 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_37_37;
#line 803 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_38_38;
#line 803 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_39_39;
#line 803 "opt_util.m"
                        MR_Integer ll_backend__opt_util__V_50_50;
#line 803 "opt_util.m"
                        MR_Integer ll_backend__opt_util__V_51_51;
#line 806 "opt_util.m"
                        MR_String ll_backend__opt_util__V_19_19;

#line 803 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__Lval_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 803 "opt_util.m"
                          {
#line 804 "opt_util.m"
                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Rval_16)) == (MR_mktag((MR_Integer) 0)));
#line 804 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 804 "opt_util.m"
                              {
#line 804 "opt_util.m"
                                ll_backend__opt_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Rval_16, (MR_Integer) 0)));
#line 804 "opt_util.m"
                                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 804 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 804 "opt_util.m"
                                  {
#line 804 "opt_util.m"
                                    ll_backend__opt_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_37_37, (MR_Integer) 1)));
#line 804 "opt_util.m"
                                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_50_50);
#line 803 "opt_util.m"
                                    if (ll_backend__opt_util__succeeded)
#line 803 "opt_util.m"
                                      {
#line 805 "opt_util.m"
                                        {
#line 805 "opt_util.m"
                                          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs0_6, &ll_backend__opt_util__Instrs1_18);
                                        }
#line 806 "opt_util.m"
                                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_18)) == (MR_mktag((MR_Integer) 1)));
#line 806 "opt_util.m"
                                        if (ll_backend__opt_util__succeeded)
#line 806 "opt_util.m"
                                          {
#line 806 "opt_util.m"
                                            ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_18, (MR_Integer) 0)));
#line 806 "opt_util.m"
                                            ll_backend__opt_util__Instrs2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_18, (MR_Integer) 1)));
#line 806 "opt_util.m"
                                            ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_38_38, (MR_Integer) 0)));
#line 806 "opt_util.m"
                                            ll_backend__opt_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
#line 806 "opt_util.m"
                                            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 806 "opt_util.m"
                                            if (ll_backend__opt_util__succeeded)
#line 806 "opt_util.m"
                                              {
#line 806 "opt_util.m"
                                                ll_backend__opt_util__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_39_39, (MR_Integer) 1)));
#line 806 "opt_util.m"
                                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_51_51);
#line 806 "opt_util.m"
                                              }
#line 806 "opt_util.m"
                                          }
#line 803 "opt_util.m"
                                      }
#line 804 "opt_util.m"
                                  }
#line 804 "opt_util.m"
                              }
#line 803 "opt_util.m"
                          }
#line 810 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 808 "opt_util.m"
                          {
#line 808 "opt_util.m"
                            *ll_backend__opt_util__Between_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 809 "opt_util.m"
                            *ll_backend__opt_util__Remain_9 = ll_backend__opt_util__Instrs2_20;
#line 808 "opt_util.m"
                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 808 "opt_util.m"
                          }
#line 810 "opt_util.m"
                        else
#line 811 "opt_util.m"
                          {
#line 811 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_40_40;
#line 811 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_41_41;
#line 811 "opt_util.m"
                            MR_Word ll_backend__opt_util__Between0_43;

#line 811 "opt_util.m"
                            {
#line 811 "opt_util.m"
                              ll_backend__opt_util__V_40_40 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_15);
                            }
#line 811 "opt_util.m"
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_40_40 == (MR_Integer) 0);
#line 811 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 811 "opt_util.m"
                              {
#line 812 "opt_util.m"
                                {
#line 812 "opt_util.m"
                                  ll_backend__opt_util__V_41_41 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
                                }
#line 812 "opt_util.m"
                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_41_41 == (MR_Integer) 0);
#line 811 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 811 "opt_util.m"
                                  {
#line 813 "opt_util.m"
                                    {
#line 813 "opt_util.m"
                                      ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_43, ll_backend__opt_util__Remain_9);
                                    }
#line 811 "opt_util.m"
                                    if (ll_backend__opt_util__succeeded)
#line 811 "opt_util.m"
                                      {
#line 814 "opt_util.m"
                                        {
#line 814 "opt_util.m"
                                          MR_Word base;
#line 814 "opt_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "opt_util.m"
                                          *ll_backend__opt_util__Between_8 = base;
#line 814 "opt_util.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
#line 814 "opt_util.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_43));
#line 814 "opt_util.m"
                                        }
#line 814 "opt_util.m"
                                        ll_backend__opt_util__succeeded = MR_TRUE;
#line 811 "opt_util.m"
                                      }
#line 811 "opt_util.m"
                                  }
#line 811 "opt_util.m"
                              }
#line 811 "opt_util.m"
                          }
#line 810 "opt_util.m"
                      }
#line 796 "opt_util.m"
                  }
#line 791 "opt_util.m"
                else
#line 791 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 842 "opt_util.m"
                    {
#line 842 "opt_util.m"
                      MR_Integer ll_backend__opt_util__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));

#line 842 "opt_util.m"
                      ll_backend__opt_util__succeeded = (ll_backend__opt_util__FrameSize_7 == ll_backend__opt_util__V_52_52);
#line 842 "opt_util.m"
                      if (ll_backend__opt_util__succeeded)
#line 842 "opt_util.m"
                        {
#line 843 "opt_util.m"
                          *ll_backend__opt_util__Between_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "opt_util.m"
                          *ll_backend__opt_util__Remain_9 = ll_backend__opt_util__Instrs0_6;
#line 844 "opt_util.m"
                          ll_backend__opt_util__succeeded = MR_TRUE;
#line 842 "opt_util.m"
                        }
#line 842 "opt_util.m"
                    }
#line 791 "opt_util.m"
                  else
#line 791 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 818 "opt_util.m"
                      {
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__MaybeRegionRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 7)));
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__MaybeReuse_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 8)));
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_31_31;
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_32_32;
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__Between0_47;
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__Lval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 1)));
#line 818 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 4)));
#line 817 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 2)));
#line 817 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 3)));
#line 817 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 5)));
#line 817 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr0_10, (MR_Integer) 6)));

#line 819 "opt_util.m"
                        {
#line 819 "opt_util.m"
                          ll_backend__opt_util__V_31_31 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_48);
                        }
#line 819 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_31_31 == (MR_Integer) 0);
#line 818 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 818 "opt_util.m"
                          {
#line 820 "opt_util.m"
                            {
#line 820 "opt_util.m"
                              ll_backend__opt_util__V_32_32 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_49);
                            }
#line 820 "opt_util.m"
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_32_32 == (MR_Integer) 0);
#line 818 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 818 "opt_util.m"
                              {
#line 824 "opt_util.m"
                                if ((ll_backend__opt_util__MaybeRegionRval_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "opt_util.m"
                                  ll_backend__opt_util__succeeded = MR_TRUE;
#line 824 "opt_util.m"
                                else
#line 822 "opt_util.m"
                                  {
#line 822 "opt_util.m"
                                    MR_Word ll_backend__opt_util__RegionRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_25, (MR_Integer) 0)));
#line 822 "opt_util.m"
                                    MR_Word ll_backend__opt_util__V_33_33;

#line 823 "opt_util.m"
                                    {
#line 823 "opt_util.m"
                                      ll_backend__opt_util__V_33_33 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__RegionRval_27);
                                    }
#line 823 "opt_util.m"
                                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_33_33 == (MR_Integer) 0);
#line 822 "opt_util.m"
                                  }
#line 818 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 818 "opt_util.m"
                                  {
#line 836 "opt_util.m"
                                    if ((ll_backend__opt_util__MaybeReuse_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "opt_util.m"
                                      ll_backend__opt_util__succeeded = MR_TRUE;
#line 836 "opt_util.m"
                                    else
#line 828 "opt_util.m"
                                      {
#line 828 "opt_util.m"
                                        MR_Word ll_backend__opt_util__ReuseRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_26, (MR_Integer) 0)));
#line 828 "opt_util.m"
                                        MR_Word ll_backend__opt_util__MaybeFlagLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_26, (MR_Integer) 1)));
#line 828 "opt_util.m"
                                        MR_Word ll_backend__opt_util__V_34_34;

#line 829 "opt_util.m"
                                        {
#line 829 "opt_util.m"
                                          ll_backend__opt_util__V_34_34 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__ReuseRval_28);
                                        }
#line 829 "opt_util.m"
                                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_34_34 == (MR_Integer) 0);
#line 828 "opt_util.m"
                                        if (ll_backend__opt_util__succeeded)
#line 833 "opt_util.m"
                                          {
#line 833 "opt_util.m"
                                            if ((ll_backend__opt_util__MaybeFlagLval_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "opt_util.m"
                                              ll_backend__opt_util__succeeded = MR_TRUE;
#line 833 "opt_util.m"
                                            else
#line 831 "opt_util.m"
                                              {
#line 831 "opt_util.m"
                                                MR_Word ll_backend__opt_util__FlagLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_29, (MR_Integer) 0)));
#line 831 "opt_util.m"
                                                MR_Word ll_backend__opt_util__V_35_35;

#line 832 "opt_util.m"
                                                {
#line 832 "opt_util.m"
                                                  ll_backend__opt_util__V_35_35 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__FlagLval_30);
                                                }
#line 832 "opt_util.m"
                                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_35_35 == (MR_Integer) 0);
#line 831 "opt_util.m"
                                              }
#line 833 "opt_util.m"
                                          }
#line 828 "opt_util.m"
                                      }
#line 818 "opt_util.m"
                                    if (ll_backend__opt_util__succeeded)
#line 818 "opt_util.m"
                                      {
#line 839 "opt_util.m"
                                        {
#line 839 "opt_util.m"
                                          ll_backend__opt_util__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__opt_util__Instrs0_6, ll_backend__opt_util__FrameSize_7, &ll_backend__opt_util__Between0_47, ll_backend__opt_util__Remain_9);
                                        }
#line 818 "opt_util.m"
                                        if (ll_backend__opt_util__succeeded)
#line 818 "opt_util.m"
                                          {
#line 840 "opt_util.m"
                                            {
#line 840 "opt_util.m"
                                              MR_Word base;
#line 840 "opt_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "opt_util.m"
                                              *ll_backend__opt_util__Between_8 = base;
#line 840 "opt_util.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_5));
#line 840 "opt_util.m"
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Between0_47));
#line 840 "opt_util.m"
                                            }
#line 840 "opt_util.m"
                                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 818 "opt_util.m"
                                          }
#line 818 "opt_util.m"
                                      }
#line 818 "opt_util.m"
                                  }
#line 818 "opt_util.m"
                              }
#line 818 "opt_util.m"
                          }
#line 818 "opt_util.m"
                      }
#line 791 "opt_util.m"
                    else
#line 791 "opt_util.m"
                      ll_backend__opt_util__succeeded = MR_FALSE;
#line 785 "opt_util.m"
          }
#line 785 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 785 "opt_util.m"
      }
#line 785 "opt_util.m"
      break;
#line 785 "opt_util.m"
    }
#line 243 "opt_util.m"
}

#line 234 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__block_refers_to_stack_1_f_0(
#line 234 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 234 "opt_util.m"
{
#line 847 "opt_util.m"
  while (MR_TRUE)
#line 847 "opt_util.m"
    {
#line 847 "opt_util.m"
      /* tailcall optimized into a loop */
#line 847 "opt_util.m"
      {
#line 847 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 847 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 847 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 847 "opt_util.m"
        else
#line 848 "opt_util.m"
          {
#line 848 "opt_util.m"
            MR_Word ll_backend__opt_util__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 848 "opt_util.m"
            MR_Word ll_backend__opt_util__InstrRefers_6;

#line 849 "opt_util.m"
            {
#line 849 "opt_util.m"
              ll_backend__opt_util__InstrRefers_6 = ll_backend__opt_util__instr_refers_to_stack_1_f_0(ll_backend__opt_util__Instr_3);
            }
#line 853 "opt_util.m"
            if ((ll_backend__opt_util__InstrRefers_6 == (MR_Integer) 0))
#line 854 "opt_util.m"
              {
#line 854 "opt_util.m"
                MR_Word ll_backend__opt_util__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_3, (MR_Integer) 0)));
#line 854 "opt_util.m"
                MR_Word ll_backend__opt_util__CanFallThrough_9;
#line 855 "opt_util.m"
                MR_String ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_3, (MR_Integer) 1)));

#line 856 "opt_util.m"
                {
#line 856 "opt_util.m"
                  ll_backend__opt_util__CanFallThrough_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr_7);
                }
#line 860 "opt_util.m"
                if ((ll_backend__opt_util__CanFallThrough_9 == (MR_Integer) 0))
#line 862 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 860 "opt_util.m"
                else
#line 859 "opt_util.m"
                  {
#line 859 "opt_util.m"
                    /* direct tailcall eliminated */
#line 859 "opt_util.m"
                    {
#line 859 "opt_util.m"
                      MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_4;

#line 859 "opt_util.m"
                      ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 859 "opt_util.m"
                    }
#line 859 "opt_util.m"
                    continue;
#line 859 "opt_util.m"
                  }
#line 854 "opt_util.m"
              }
#line 853 "opt_util.m"
            else
#line 852 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 848 "opt_util.m"
          }
#line 847 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 847 "opt_util.m"
      }
#line 847 "opt_util.m"
      break;
#line 847 "opt_util.m"
    }
#line 234 "opt_util.m"
}

#line 957 "opt_util.m"
static MR_Box MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0_1(
#line 957 "opt_util.m"
  MR_Box ll_backend__opt_util__closure_arg,
#line 957 "opt_util.m"
  MR_Box ll_backend__opt_util__wrapper_arg_1)
#line 957 "opt_util.m"
{
#line 957 "opt_util.m"
  {
#line 957 "opt_util.m"
    MR_Box ll_backend__opt_util__wrapper_arg_2;
#line 957 "opt_util.m"
    MR_Box ll_backend__opt_util__closure = ll_backend__opt_util__closure_arg;
#line 957 "opt_util.m"
    MR_Word ll_backend__opt_util__conv0_Refers_4;

#line 957 "opt_util.m"
    {
#line 957 "opt_util.m"
      ll_backend__opt_util__conv0_Refers_4 = ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_f_0(((MR_Word) ll_backend__opt_util__wrapper_arg_1));
    }
#line 957 "opt_util.m"
    ll_backend__opt_util__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_util__conv0_Refers_4));
#line 957 "opt_util.m"
    return ll_backend__opt_util__wrapper_arg_2;
#line 957 "opt_util.m"
  }
#line 957 "opt_util.m"
}

#line 233 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__instr_refers_to_stack_1_f_0(
#line 233 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 233 "opt_util.m"
{
#line 866 "opt_util.m"
  {
#line 866 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 866 "opt_util.m"
    MR_Word ll_backend__opt_util__Refers_5;
#line 866 "opt_util.m"
    MR_Word ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 866 "opt_util.m"
    MR_String ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 877 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 899 "opt_util.m"
      {
#line 899 "opt_util.m"
        MR_Word ll_backend__opt_util__Lval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 899 "opt_util.m"
        MR_Word ll_backend__opt_util__Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 899 "opt_util.m"
        MR_Word ll_backend__opt_util__V_94_94;
#line 899 "opt_util.m"
        MR_Word ll_backend__opt_util__V_95_95;

#line 900 "opt_util.m"
        {
#line 900 "opt_util.m"
          ll_backend__opt_util__V_94_94 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_52);
        }
#line 900 "opt_util.m"
        {
#line 900 "opt_util.m"
          ll_backend__opt_util__V_95_95 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_53);
        }
#line 900 "opt_util.m"
        {
#line 900 "opt_util.m"
          return ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_94_94, ll_backend__opt_util__V_95_95);
        }
#line 899 "opt_util.m"
      }
#line 877 "opt_util.m"
    else
#line 877 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 894 "opt_util.m"
        {
#line 894 "opt_util.m"
          MR_Word ll_backend__opt_util__BlockInstrs_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 894 "opt_util.m"
          MR_Integer ll_backend__opt_util__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 894 "opt_util.m"
          MR_Integer ll_backend__opt_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 895 "opt_util.m"
          {
#line 895 "opt_util.m"
            return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__opt_util__BlockInstrs_51);
          }
#line 894 "opt_util.m"
        }
#line 877 "opt_util.m"
      else
#line 877 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 926 "opt_util.m"
          {
#line 926 "opt_util.m"
            MR_Word ll_backend__opt_util__Rval_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 921 "opt_util.m"
            MR_Word ll_backend__opt_util___Labels_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 927 "opt_util.m"
            {
#line 927 "opt_util.m"
              return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_99);
            }
#line 926 "opt_util.m"
          }
#line 877 "opt_util.m"
        else
#line 877 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 956 "opt_util.m"
            {
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__Components_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_81_81;
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
#line 956 "opt_util.m"
              MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

#line 957 "opt_util.m"
              {
#line 957 "opt_util.m"
                ll_backend__opt_util__V_81_81 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__opt_util_scalar_common_2[4], ll_backend__opt_util__Components_69);
              }
#line 957 "opt_util.m"
              {
#line 957 "opt_util.m"
                return ll_backend__opt_util__Refers_5 = mercury__bool__or_list_1_f_0(ll_backend__opt_util__V_81_81);
              }
#line 956 "opt_util.m"
            }
#line 877 "opt_util.m"
          else
#line 877 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 926 "opt_util.m"
              {
#line 926 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 927 "opt_util.m"
                {
#line 927 "opt_util.m"
                  return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_108);
                }
#line 926 "opt_util.m"
              }
#line 877 "opt_util.m"
            else
#line 877 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 904 "opt_util.m"
                {
#line 904 "opt_util.m"
                  MR_Word ll_backend__opt_util__CodeAddr_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 905 "opt_util.m"
                  {
#line 905 "opt_util.m"
                    return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(ll_backend__opt_util__CodeAddr_54);
                  }
#line 904 "opt_util.m"
                }
#line 877 "opt_util.m"
              else
#line 877 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 907 "opt_util.m"
                  {
#line 907 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_92_92;
#line 907 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_93_93;
#line 907 "opt_util.m"
                    MR_Word ll_backend__opt_util__Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 907 "opt_util.m"
                    MR_Word ll_backend__opt_util__CodeAddr_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 908 "opt_util.m"
                    {
#line 908 "opt_util.m"
                      ll_backend__opt_util__V_92_92 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_96);
                    }
#line 908 "opt_util.m"
                    {
#line 908 "opt_util.m"
                      ll_backend__opt_util__V_93_93 = ll_backend__opt_util__code_addr_refers_to_stack_1_f_0(ll_backend__opt_util__CodeAddr_97);
                    }
#line 908 "opt_util.m"
                    {
#line 908 "opt_util.m"
                      return ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_92_92, ll_backend__opt_util__V_93_93);
                    }
#line 907 "opt_util.m"
                  }
#line 877 "opt_util.m"
                else
#line 877 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 930 "opt_util.m"
                    {
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__MaybeRegionRval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__MaybeReuse_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_83_83;
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_84_84;
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_85_85;
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_87_87;
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__Lval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 930 "opt_util.m"
                      MR_Word ll_backend__opt_util__Rval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 929 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 929 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 929 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 929 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));

#line 932 "opt_util.m"
                      {
#line 932 "opt_util.m"
                        ll_backend__opt_util__V_84_84 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_100);
                      }
#line 932 "opt_util.m"
                      {
#line 932 "opt_util.m"
                        ll_backend__opt_util__V_85_85 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_101);
                      }
#line 932 "opt_util.m"
                      {
#line 932 "opt_util.m"
                        ll_backend__opt_util__STATE_VARIABLE_Refers_83_83 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_84_84, ll_backend__opt_util__V_85_85);
                      }
#line 938 "opt_util.m"
                      if ((ll_backend__opt_util__MaybeRegionRval_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "opt_util.m"
                        ll_backend__opt_util__STATE_VARIABLE_Refers_87_87 = ll_backend__opt_util__STATE_VARIABLE_Refers_83_83;
#line 938 "opt_util.m"
                      else
#line 936 "opt_util.m"
                        {
#line 936 "opt_util.m"
                          MR_Word ll_backend__opt_util__RegionRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_62, (MR_Integer) 0)));
#line 936 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_86_86;

#line 937 "opt_util.m"
                          {
#line 937 "opt_util.m"
                            ll_backend__opt_util__V_86_86 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__RegionRval_64);
                          }
#line 937 "opt_util.m"
                          {
#line 937 "opt_util.m"
                            mercury__bool__or_3_p_0(ll_backend__opt_util__V_86_86, ll_backend__opt_util__STATE_VARIABLE_Refers_83_83, &ll_backend__opt_util__STATE_VARIABLE_Refers_87_87);
                          }
#line 936 "opt_util.m"
                        }
#line 950 "opt_util.m"
                      if ((ll_backend__opt_util__MaybeReuse_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "opt_util.m"
                        ll_backend__opt_util__Refers_5 = ll_backend__opt_util__STATE_VARIABLE_Refers_87_87;
#line 950 "opt_util.m"
                      else
#line 942 "opt_util.m"
                        {
#line 942 "opt_util.m"
                          MR_Word ll_backend__opt_util__ReuseRval_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_63, (MR_Integer) 0)));
#line 942 "opt_util.m"
                          MR_Word ll_backend__opt_util__MaybeFlagLval_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_63, (MR_Integer) 1)));
#line 942 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_88_88;
#line 942 "opt_util.m"
                          MR_Word ll_backend__opt_util__STATE_VARIABLE_Refers_89_89;

#line 943 "opt_util.m"
                          {
#line 943 "opt_util.m"
                            ll_backend__opt_util__V_88_88 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__ReuseRval_65);
                          }
#line 943 "opt_util.m"
                          {
#line 943 "opt_util.m"
                            mercury__bool__or_3_p_0(ll_backend__opt_util__V_88_88, ll_backend__opt_util__STATE_VARIABLE_Refers_87_87, &ll_backend__opt_util__STATE_VARIABLE_Refers_89_89);
                          }
#line 947 "opt_util.m"
                          if ((ll_backend__opt_util__MaybeFlagLval_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "opt_util.m"
                            ll_backend__opt_util__Refers_5 = ll_backend__opt_util__STATE_VARIABLE_Refers_89_89;
#line 947 "opt_util.m"
                          else
#line 945 "opt_util.m"
                            {
#line 945 "opt_util.m"
                              MR_Word ll_backend__opt_util__FlagLval_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_66, (MR_Integer) 0)));
#line 945 "opt_util.m"
                              MR_Word ll_backend__opt_util__V_90_90;

#line 946 "opt_util.m"
                              {
#line 946 "opt_util.m"
                                ll_backend__opt_util__V_90_90 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__FlagLval_67);
                              }
#line 946 "opt_util.m"
                              {
#line 946 "opt_util.m"
                                mercury__bool__or_3_p_0(ll_backend__opt_util__V_90_90, ll_backend__opt_util__STATE_VARIABLE_Refers_89_89, &ll_backend__opt_util__Refers_5);
                              }
#line 945 "opt_util.m"
                            }
#line 942 "opt_util.m"
                        }
#line 930 "opt_util.m"
                    }
#line 877 "opt_util.m"
                  else
#line 877 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 899 "opt_util.m"
                      {
#line 899 "opt_util.m"
                        MR_Word ll_backend__opt_util__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 899 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 899 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_111_111;
#line 899 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_112_112;

#line 900 "opt_util.m"
                        {
#line 900 "opt_util.m"
                          ll_backend__opt_util__V_111_111 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_109);
                        }
#line 900 "opt_util.m"
                        {
#line 900 "opt_util.m"
                          ll_backend__opt_util__V_112_112 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_110);
                        }
#line 900 "opt_util.m"
                        {
#line 900 "opt_util.m"
                          return ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_111_111, ll_backend__opt_util__V_112_112);
                        }
#line 899 "opt_util.m"
                      }
#line 877 "opt_util.m"
                    else
#line 877 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 918 "opt_util.m"
                        {
#line 918 "opt_util.m"
                          MR_Word ll_backend__opt_util__Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 917 "opt_util.m"
                          MR_Integer ll_backend__opt_util__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                          {
#line 919 "opt_util.m"
                            return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_98);
                          }
#line 918 "opt_util.m"
                        }
#line 877 "opt_util.m"
                      else
#line 877 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 960 "opt_util.m"
                          {
#line 960 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_79_79;
#line 960 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_80_80;
#line 960 "opt_util.m"
                            MR_Word ll_backend__opt_util__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 960 "opt_util.m"
                            MR_Word ll_backend__opt_util__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 960 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));

#line 961 "opt_util.m"
                            {
#line 961 "opt_util.m"
                              ll_backend__opt_util__V_79_79 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_103);
                            }
#line 961 "opt_util.m"
                            {
#line 961 "opt_util.m"
                              ll_backend__opt_util__V_80_80 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_102);
                            }
#line 961 "opt_util.m"
                            {
#line 961 "opt_util.m"
                              return ll_backend__opt_util__Refers_5 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_79_79, ll_backend__opt_util__V_80_80);
                            }
#line 960 "opt_util.m"
                          }
#line 877 "opt_util.m"
                        else
#line 877 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 918 "opt_util.m"
                            {
#line 918 "opt_util.m"
                              MR_Word ll_backend__opt_util__Lval_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                              {
#line 919 "opt_util.m"
                                return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_113);
                              }
#line 918 "opt_util.m"
                            }
#line 877 "opt_util.m"
                          else
#line 877 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 918 "opt_util.m"
                              {
#line 918 "opt_util.m"
                                MR_Word ll_backend__opt_util__Lval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                                {
#line 919 "opt_util.m"
                                  return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_114);
                                }
#line 918 "opt_util.m"
                              }
#line 877 "opt_util.m"
                            else
#line 877 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 926 "opt_util.m"
                                {
#line 926 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 927 "opt_util.m"
                                  {
#line 927 "opt_util.m"
                                    return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_115);
                                  }
#line 926 "opt_util.m"
                                }
#line 877 "opt_util.m"
                              else
#line 877 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 926 "opt_util.m"
                                  {
#line 926 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Rval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 924 "opt_util.m"
                                    MR_Word ll_backend__opt_util___Reason_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));

#line 927 "opt_util.m"
                                    {
#line 927 "opt_util.m"
                                      return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_116);
                                    }
#line 926 "opt_util.m"
                                  }
#line 877 "opt_util.m"
                                else
#line 877 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 926 "opt_util.m"
                                    {
#line 926 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Rval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 927 "opt_util.m"
                                      {
#line 927 "opt_util.m"
                                        return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_117);
                                      }
#line 926 "opt_util.m"
                                    }
#line 877 "opt_util.m"
                                  else
#line 877 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 918 "opt_util.m"
                                      {
#line 918 "opt_util.m"
                                        MR_Word ll_backend__opt_util__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                                        {
#line 919 "opt_util.m"
                                          return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_118);
                                        }
#line 918 "opt_util.m"
                                      }
#line 877 "opt_util.m"
                                    else
#line 877 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 918 "opt_util.m"
                                        {
#line 918 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Lval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                                          {
#line 919 "opt_util.m"
                                            return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_119);
                                          }
#line 918 "opt_util.m"
                                        }
#line 877 "opt_util.m"
                                      else
#line 877 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 918 "opt_util.m"
                                          {
#line 918 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Lval_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));

#line 919 "opt_util.m"
                                            {
#line 919 "opt_util.m"
                                              return ll_backend__opt_util__Refers_5 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_120);
                                            }
#line 918 "opt_util.m"
                                          }
#line 877 "opt_util.m"
                                        else
#line 877 "opt_util.m"
                                          if (((((((((((((((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 8)))) || (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 1)))))) || ((ll_backend__opt_util__Uinstr_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 34)))))) || (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 2)))))) || ((ll_backend__opt_util__Uinstr_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 876 "opt_util.m"
                                            ll_backend__opt_util__Refers_5 = (MR_Integer) 0;
#line 877 "opt_util.m"
                                          else
#line 892 "opt_util.m"
                                            ll_backend__opt_util__Refers_5 = (MR_Integer) 1;
#line 866 "opt_util.m"
    return ll_backend__opt_util__Refers_5;
#line 866 "opt_util.m"
  }
#line 233 "opt_util.m"
}

#line 232 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__rvals_refer_stackvars_1_f_0(
#line 232 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 232 "opt_util.m"
{
#line 756 "opt_util.m"
  while (MR_TRUE)
#line 756 "opt_util.m"
    {
#line 756 "opt_util.m"
      /* tailcall optimized into a loop */
#line 756 "opt_util.m"
      {
#line 756 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 756 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 756 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 756 "opt_util.m"
        else
#line 757 "opt_util.m"
          {
#line 757 "opt_util.m"
            MR_Word ll_backend__opt_util__MaybeRval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "opt_util.m"
            MR_Word ll_backend__opt_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 761 "opt_util.m"
            if ((ll_backend__opt_util__MaybeRval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "opt_util.m"
              ll_backend__opt_util__succeeded = MR_TRUE;
#line 761 "opt_util.m"
            else
#line 762 "opt_util.m"
              {
#line 762 "opt_util.m"
                MR_Word ll_backend__opt_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRval_3, (MR_Integer) 0)));
#line 762 "opt_util.m"
                MR_Word ll_backend__opt_util__V_6_6;

#line 763 "opt_util.m"
                {
#line 763 "opt_util.m"
                  ll_backend__opt_util__V_6_6 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_5);
                }
#line 763 "opt_util.m"
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_6_6 == (MR_Integer) 0);
#line 762 "opt_util.m"
              }
#line 757 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 757 "opt_util.m"
              {
#line 757 "opt_util.m"
                /* direct tailcall eliminated */
#line 757 "opt_util.m"
                {
#line 757 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Tail_4;

#line 757 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 757 "opt_util.m"
                }
#line 757 "opt_util.m"
                continue;
#line 757 "opt_util.m"
              }
#line 757 "opt_util.m"
            else
#line 757 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 757 "opt_util.m"
          }
#line 756 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 756 "opt_util.m"
      }
#line 756 "opt_util.m"
      break;
#line 756 "opt_util.m"
    }
#line 232 "opt_util.m"
}

#line 231 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__rval_refers_stackvars_1_f_0(
#line 231 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 231 "opt_util.m"
{
#line 740 "opt_util.m"
  while (MR_TRUE)
#line 740 "opt_util.m"
    {
#line 740 "opt_util.m"
      /* tailcall optimized into a loop */
#line 740 "opt_util.m"
      {
#line 740 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 740 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 740 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 740 "opt_util.m"
          {
#line 740 "opt_util.m"
            MR_Word ll_backend__opt_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 740 "opt_util.m"
            {
#line 740 "opt_util.m"
              return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(ll_backend__opt_util__Lval_3);
            }
#line 740 "opt_util.m"
          }
#line 740 "opt_util.m"
        else
#line 740 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 744 "opt_util.m"
            {
#line 744 "opt_util.m"
              MR_Word ll_backend__opt_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 744 "opt_util.m"
              MR_Integer ll_backend__opt_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 744 "opt_util.m"
              /* direct tailcall eliminated */
#line 744 "opt_util.m"
              {
#line 744 "opt_util.m"
                MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_10;

#line 744 "opt_util.m"
                ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 744 "opt_util.m"
              }
#line 744 "opt_util.m"
              continue;
#line 744 "opt_util.m"
            }
#line 740 "opt_util.m"
          else
#line 740 "opt_util.m"
            if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 742 "opt_util.m"
              {
#line 743 "opt_util.m"
                {
#line 743 "opt_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.rval_refers_stackvars\'/1", (MR_String) "var");
                }
#line 742 "opt_util.m"
              }
#line 740 "opt_util.m"
            else
#line 740 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 750 "opt_util.m"
                {
#line 750 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 750 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 750 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_18_18;
#line 750 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_19_19;
#line 750 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 751 "opt_util.m"
                  {
#line 751 "opt_util.m"
                    ll_backend__opt_util__V_18_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval1_16);
                  }
#line 751 "opt_util.m"
                  {
#line 751 "opt_util.m"
                    ll_backend__opt_util__V_19_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval2_17);
                  }
#line 750 "opt_util.m"
                  {
#line 750 "opt_util.m"
                    return ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_18_18, ll_backend__opt_util__V_19_19);
                  }
#line 750 "opt_util.m"
                }
#line 740 "opt_util.m"
              else
#line 740 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 747 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 740 "opt_util.m"
                else
#line 740 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 752 "opt_util.m"
                    {
#line 752 "opt_util.m"
                      MR_Word ll_backend__opt_util__MemRef_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 752 "opt_util.m"
                      {
#line 752 "opt_util.m"
                        return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__mem_ref_refers_stackvars_1_f_0(ll_backend__opt_util__MemRef_20);
                      }
#line 752 "opt_util.m"
                    }
#line 740 "opt_util.m"
                  else
#line 740 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 746 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 740 "opt_util.m"
                    else
#line 748 "opt_util.m"
                      {
#line 748 "opt_util.m"
                        MR_Word ll_backend__opt_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 748 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 748 "opt_util.m"
                        /* direct tailcall eliminated */
#line 748 "opt_util.m"
                        {
#line 748 "opt_util.m"
                          MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Rval_14;

#line 748 "opt_util.m"
                          ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 748 "opt_util.m"
                        }
#line 748 "opt_util.m"
                        continue;
#line 748 "opt_util.m"
                      }
#line 740 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 740 "opt_util.m"
      }
#line 740 "opt_util.m"
      break;
#line 740 "opt_util.m"
    }
#line 231 "opt_util.m"
}

#line 230 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__lval_refers_stackvars_1_f_0(
#line 230 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 230 "opt_util.m"
{
#line 706 "opt_util.m"
  {
#line 706 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 706 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 706 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 713 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
    else
#line 706 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 719 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
      else
#line 706 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 712 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
        else
#line 706 "opt_util.m"
          if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 721 "opt_util.m"
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
          else
#line 706 "opt_util.m"
            if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 720 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
            else
#line 706 "opt_util.m"
              if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "opt_util.m"
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
              else
#line 706 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 706 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
                else
#line 706 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 728 "opt_util.m"
                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
                  else
#line 706 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 710 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                    else
#line 706 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 722 "opt_util.m"
                        {
#line 722 "opt_util.m"
                          MR_Word ll_backend__opt_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 722 "opt_util.m"
                          MR_Word ll_backend__opt_util__FieldNum_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 722 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_18_18;
#line 722 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_19_19;
#line 722 "opt_util.m"
                          MR_Word ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 723 "opt_util.m"
                          {
#line 723 "opt_util.m"
                            ll_backend__opt_util__V_18_18 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_16);
                          }
#line 723 "opt_util.m"
                          {
#line 723 "opt_util.m"
                            ll_backend__opt_util__V_19_19 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__FieldNum_17);
                          }
#line 722 "opt_util.m"
                          {
#line 722 "opt_util.m"
                            return ll_backend__opt_util__HeadVar__2_2 = mercury__bool__or_2_f_0(ll_backend__opt_util__V_18_18, ll_backend__opt_util__V_19_19);
                          }
#line 722 "opt_util.m"
                        }
#line 706 "opt_util.m"
                      else
#line 706 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 709 "opt_util.m"
                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                        else
#line 706 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 731 "opt_util.m"
                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 706 "opt_util.m"
                          else
#line 706 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 726 "opt_util.m"
                              {
#line 727 "opt_util.m"
                                {
#line 727 "opt_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "function \140ll_backend.opt_util.lval_refers_stackvars\'/1", (MR_String) "lvar");
                                }
#line 726 "opt_util.m"
                              }
#line 706 "opt_util.m"
                            else
#line 706 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 729 "opt_util.m"
                                {
#line 729 "opt_util.m"
                                  MR_Word ll_backend__opt_util__Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 729 "opt_util.m"
                                  {
#line 729 "opt_util.m"
                                    return ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(ll_backend__opt_util__Rval_27);
                                  }
#line 729 "opt_util.m"
                                }
#line 706 "opt_util.m"
                              else
#line 706 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 708 "opt_util.m"
                                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                else
#line 706 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 715 "opt_util.m"
                                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                  else
#line 706 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 716 "opt_util.m"
                                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                    else
#line 706 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 717 "opt_util.m"
                                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                      else
#line 706 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 707 "opt_util.m"
                                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                        else
#line 706 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 714 "opt_util.m"
                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
                                          else
#line 718 "opt_util.m"
                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 706 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 706 "opt_util.m"
  }
#line 230 "opt_util.m"
}

#line 224 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__count_temps_instr_5_p_0(
#line 224 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 224 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 224 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 224 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 224 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
#line 224 "opt_util.m"
{
#line 1545 "opt_util.m"
  {
#line 1545 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1545 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1610 "opt_util.m"
      {
#line 1610 "opt_util.m"
        *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1610 "opt_util.m"
        *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1610 "opt_util.m"
      }
#line 1545 "opt_util.m"
    else
#line 1545 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1611 "opt_util.m"
        {
#line 1611 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1611 "opt_util.m"
          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1611 "opt_util.m"
        }
#line 1545 "opt_util.m"
      else
#line 1545 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1545 "opt_util.m"
          {
#line 1545 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1545 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1545 "opt_util.m"
          }
#line 1545 "opt_util.m"
        else
#line 1545 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1546 "opt_util.m"
            {
#line 1546 "opt_util.m"
              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1546 "opt_util.m"
              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1546 "opt_util.m"
            }
#line 1545 "opt_util.m"
          else
#line 1545 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1562 "opt_util.m"
              {
#line 1562 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1562 "opt_util.m"
                *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1562 "opt_util.m"
              }
#line 1545 "opt_util.m"
            else
#line 1545 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1548 "opt_util.m"
                {
#line 1548 "opt_util.m"
                  MR_Word ll_backend__opt_util__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1548 "opt_util.m"
                  MR_Word ll_backend__opt_util__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1548 "opt_util.m"
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_37_37;
#line 1548 "opt_util.m"
                  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_38_38;

#line 1549 "opt_util.m"
                  {
#line 1549 "opt_util.m"
                    ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_29, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_37_37, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_38_38);
                  }
#line 1550 "opt_util.m"
                  {
#line 1550 "opt_util.m"
                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_30, ll_backend__opt_util__STATE_VARIABLE_R_37_37, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_38_38, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1550 "opt_util.m"
                    return;
                  }
#line 1548 "opt_util.m"
                }
#line 1545 "opt_util.m"
              else
#line 1545 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1547 "opt_util.m"
                  {
#line 1547 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1547 "opt_util.m"
                    *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1547 "opt_util.m"
                  }
#line 1545 "opt_util.m"
                else
#line 1545 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1558 "opt_util.m"
                    {
#line 1558 "opt_util.m"
                      MR_Word ll_backend__opt_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1558 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1559 "opt_util.m"
                      {
#line 1559 "opt_util.m"
                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_87, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1559 "opt_util.m"
                        return;
                      }
#line 1558 "opt_util.m"
                    }
#line 1545 "opt_util.m"
                  else
#line 1545 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1617 "opt_util.m"
                      {
#line 1617 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1617 "opt_util.m"
                        *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1617 "opt_util.m"
                      }
#line 1545 "opt_util.m"
                    else
#line 1545 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1618 "opt_util.m"
                        {
#line 1618 "opt_util.m"
                          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1618 "opt_util.m"
                          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1618 "opt_util.m"
                        }
#line 1545 "opt_util.m"
                      else
#line 1545 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1620 "opt_util.m"
                          {
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__Comps_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 6)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 7)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 8)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 9)));
#line 1620 "opt_util.m"
                            MR_Word ll_backend__opt_util__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 10)));

#line 1621 "opt_util.m"
                            {
#line 1621 "opt_util.m"
                              ll_backend__opt_util__count_temps_components_5_p_0(ll_backend__opt_util__Comps_306, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1621 "opt_util.m"
                              return;
                            }
#line 1620 "opt_util.m"
                          }
#line 1545 "opt_util.m"
                        else
#line 1545 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1624 "opt_util.m"
                            {
#line 1624 "opt_util.m"
                              MR_Word ll_backend__opt_util__Lval_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1624 "opt_util.m"
                              MR_Word ll_backend__opt_util__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1625 "opt_util.m"
                              {
#line 1625 "opt_util.m"
                                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_334, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1625 "opt_util.m"
                                return;
                              }
#line 1624 "opt_util.m"
                            }
#line 1545 "opt_util.m"
                          else
#line 1545 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1593 "opt_util.m"
                              {
#line 1593 "opt_util.m"
                                MR_Word ll_backend__opt_util__Rval_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1594 "opt_util.m"
                                {
#line 1594 "opt_util.m"
                                  ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_180, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1594 "opt_util.m"
                                  return;
                                }
#line 1593 "opt_util.m"
                              }
#line 1545 "opt_util.m"
                            else
#line 1545 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1557 "opt_util.m"
                                {
#line 1557 "opt_util.m"
                                  *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1557 "opt_util.m"
                                  *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1557 "opt_util.m"
                                }
#line 1545 "opt_util.m"
                              else
#line 1545 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1560 "opt_util.m"
                                  {
#line 1560 "opt_util.m"
                                    MR_Word ll_backend__opt_util__Rval_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1560 "opt_util.m"
                                    MR_Word ll_backend__opt_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1561 "opt_util.m"
                                    {
#line 1561 "opt_util.m"
                                      ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_97, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1561 "opt_util.m"
                                      return;
                                    }
#line 1560 "opt_util.m"
                                  }
#line 1545 "opt_util.m"
                                else
#line 1545 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1568 "opt_util.m"
                                    {
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Lval_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__Rval_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__MaybeRegionRval_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 7)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__MaybeReuse_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 8)));
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_152_152;
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_153_153;
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_154_154;
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_155_155;
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_156_156;
#line 1568 "opt_util.m"
                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_157_157;
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1568 "opt_util.m"
                                      MR_Word ll_backend__opt_util__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 6)));

#line 1569 "opt_util.m"
                                      {
#line 1569 "opt_util.m"
                                        ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_134, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_152_152, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_153_153);
                                      }
#line 1570 "opt_util.m"
                                      {
#line 1570 "opt_util.m"
                                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_137, ll_backend__opt_util__STATE_VARIABLE_R_152_152, &ll_backend__opt_util__STATE_VARIABLE_R_154_154, ll_backend__opt_util__STATE_VARIABLE_F_153_153, &ll_backend__opt_util__STATE_VARIABLE_F_155_155);
                                      }
#line 1574 "opt_util.m"
                                      if ((ll_backend__opt_util__MaybeRegionRval_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1575 "opt_util.m"
                                        {
#line 1575 "opt_util.m"
                                          ll_backend__opt_util__STATE_VARIABLE_R_156_156 = ll_backend__opt_util__STATE_VARIABLE_R_154_154;
#line 1575 "opt_util.m"
                                          ll_backend__opt_util__STATE_VARIABLE_F_157_157 = ll_backend__opt_util__STATE_VARIABLE_F_155_155;
#line 1575 "opt_util.m"
                                        }
#line 1574 "opt_util.m"
                                      else
#line 1572 "opt_util.m"
                                        {
#line 1572 "opt_util.m"
                                          MR_Word ll_backend__opt_util__RegionRval_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeRegionRval_140, (MR_Integer) 0)));

#line 1573 "opt_util.m"
                                          {
#line 1573 "opt_util.m"
                                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__RegionRval_144, ll_backend__opt_util__STATE_VARIABLE_R_154_154, &ll_backend__opt_util__STATE_VARIABLE_R_156_156, ll_backend__opt_util__STATE_VARIABLE_F_155_155, &ll_backend__opt_util__STATE_VARIABLE_F_157_157);
                                          }
#line 1572 "opt_util.m"
                                        }
#line 1586 "opt_util.m"
                                      if ((ll_backend__opt_util__MaybeReuse_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1587 "opt_util.m"
                                        {
#line 1587 "opt_util.m"
                                          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_156_156;
#line 1587 "opt_util.m"
                                          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_157_157;
#line 1587 "opt_util.m"
                                        }
#line 1586 "opt_util.m"
                                      else
#line 1578 "opt_util.m"
                                        {
#line 1578 "opt_util.m"
                                          MR_Word ll_backend__opt_util__ReuseRval_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_141, (MR_Integer) 0)));
#line 1578 "opt_util.m"
                                          MR_Word ll_backend__opt_util__MaybeFlagLval_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeReuse_141, (MR_Integer) 1)));
#line 1578 "opt_util.m"
                                          MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_158_158;
#line 1578 "opt_util.m"
                                          MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_159_159;

#line 1579 "opt_util.m"
                                          {
#line 1579 "opt_util.m"
                                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ReuseRval_145, ll_backend__opt_util__STATE_VARIABLE_R_156_156, &ll_backend__opt_util__STATE_VARIABLE_R_158_158, ll_backend__opt_util__STATE_VARIABLE_F_157_157, &ll_backend__opt_util__STATE_VARIABLE_F_159_159);
                                          }
#line 1583 "opt_util.m"
                                          if ((ll_backend__opt_util__MaybeFlagLval_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1584 "opt_util.m"
                                            {
#line 1584 "opt_util.m"
                                              *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_158_158;
#line 1584 "opt_util.m"
                                              *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_159_159;
#line 1584 "opt_util.m"
                                            }
#line 1583 "opt_util.m"
                                          else
#line 1581 "opt_util.m"
                                            {
#line 1581 "opt_util.m"
                                              MR_Word ll_backend__opt_util__FlagLval_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__MaybeFlagLval_146, (MR_Integer) 0)));

#line 1582 "opt_util.m"
                                              {
#line 1582 "opt_util.m"
                                                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__FlagLval_147, ll_backend__opt_util__STATE_VARIABLE_R_158_158, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_159_159, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1582 "opt_util.m"
                                                return;
                                              }
#line 1581 "opt_util.m"
                                            }
#line 1578 "opt_util.m"
                                        }
#line 1568 "opt_util.m"
                                    }
#line 1545 "opt_util.m"
                                  else
#line 1545 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1616 "opt_util.m"
                                      {
#line 1616 "opt_util.m"
                                        *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1616 "opt_util.m"
                                        *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1616 "opt_util.m"
                                      }
#line 1545 "opt_util.m"
                                    else
#line 1545 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1622 "opt_util.m"
                                        {
#line 1622 "opt_util.m"
                                          MR_Word ll_backend__opt_util__Lval_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1622 "opt_util.m"
                                          MR_Integer ll_backend__opt_util__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1622 "opt_util.m"
                                          MR_Integer ll_backend__opt_util__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

#line 1623 "opt_util.m"
                                          {
#line 1623 "opt_util.m"
                                            ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_323, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1623 "opt_util.m"
                                            return;
                                          }
#line 1622 "opt_util.m"
                                        }
#line 1545 "opt_util.m"
                                      else
#line 1545 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1626 "opt_util.m"
                                          {
#line 1626 "opt_util.m"
                                            MR_Word ll_backend__opt_util__Lval_344 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1626 "opt_util.m"
                                            MR_Word ll_backend__opt_util__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1627 "opt_util.m"
                                            {
#line 1627 "opt_util.m"
                                              ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_344, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1627 "opt_util.m"
                                              return;
                                            }
#line 1626 "opt_util.m"
                                          }
#line 1545 "opt_util.m"
                                        else
#line 1545 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1551 "opt_util.m"
                                            {
#line 1551 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Lval_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1551 "opt_util.m"
                                              MR_Word ll_backend__opt_util__Rval_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1551 "opt_util.m"
                                              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_49_49;
#line 1551 "opt_util.m"
                                              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_50_50;

#line 1552 "opt_util.m"
                                              {
#line 1552 "opt_util.m"
                                                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_41, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_49_49, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_50_50);
                                              }
#line 1553 "opt_util.m"
                                              {
#line 1553 "opt_util.m"
                                                ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_42, ll_backend__opt_util__STATE_VARIABLE_R_49_49, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_50_50, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1553 "opt_util.m"
                                                return;
                                              }
#line 1551 "opt_util.m"
                                            }
#line 1545 "opt_util.m"
                                          else
#line 1545 "opt_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1556 "opt_util.m"
                                              {
#line 1556 "opt_util.m"
                                                *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1556 "opt_util.m"
                                                *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1556 "opt_util.m"
                                              }
#line 1545 "opt_util.m"
                                            else
#line 1545 "opt_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1628 "opt_util.m"
                                                {
#line 1628 "opt_util.m"
                                                  MR_Word ll_backend__opt_util__Lval_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1628 "opt_util.m"
                                                  MR_Integer ll_backend__opt_util__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1629 "opt_util.m"
                                                  {
#line 1629 "opt_util.m"
                                                    ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_355, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1629 "opt_util.m"
                                                    return;
                                                  }
#line 1628 "opt_util.m"
                                                }
#line 1545 "opt_util.m"
                                              else
#line 1545 "opt_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1636 "opt_util.m"
                                                  {
#line 1636 "opt_util.m"
                                                    MR_Word ll_backend__opt_util__LCRval_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1636 "opt_util.m"
                                                    MR_Word ll_backend__opt_util__LCSRval_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1636 "opt_util.m"
                                                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_398_398;
#line 1636 "opt_util.m"
                                                    MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_399_399;

#line 1637 "opt_util.m"
                                                    {
#line 1637 "opt_util.m"
                                                      ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCRval_390, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_398_398, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_399_399);
                                                    }
#line 1638 "opt_util.m"
                                                    {
#line 1638 "opt_util.m"
                                                      ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCSRval_391, ll_backend__opt_util__STATE_VARIABLE_R_398_398, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_399_399, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1638 "opt_util.m"
                                                      return;
                                                    }
#line 1636 "opt_util.m"
                                                  }
#line 1545 "opt_util.m"
                                                else
#line 1545 "opt_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1633 "opt_util.m"
                                                    {
#line 1633 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__LCRval_377 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1633 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__LCSRval_378 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1633 "opt_util.m"
                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_386_386;
#line 1633 "opt_util.m"
                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_387_387;
#line 1633 "opt_util.m"
                                                      MR_Word ll_backend__opt_util__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

#line 1634 "opt_util.m"
                                                      {
#line 1634 "opt_util.m"
                                                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCRval_377, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_386_386, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_387_387);
                                                      }
#line 1635 "opt_util.m"
                                                      {
#line 1635 "opt_util.m"
                                                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__LCSRval_378, ll_backend__opt_util__STATE_VARIABLE_R_386_386, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_387_387, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1635 "opt_util.m"
                                                        return;
                                                      }
#line 1633 "opt_util.m"
                                                    }
#line 1545 "opt_util.m"
                                                  else
#line 1545 "opt_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1630 "opt_util.m"
                                                      {
#line 1630 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__Rval_364 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1630 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__Lval_365 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1630 "opt_util.m"
                                                        MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_373_373;
#line 1630 "opt_util.m"
                                                        MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_374_374;
#line 1630 "opt_util.m"
                                                        MR_Word ll_backend__opt_util__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

#line 1631 "opt_util.m"
                                                        {
#line 1631 "opt_util.m"
                                                          ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_364, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_373_373, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_374_374);
                                                        }
#line 1632 "opt_util.m"
                                                        {
#line 1632 "opt_util.m"
                                                          ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_365, ll_backend__opt_util__STATE_VARIABLE_R_373_373, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_374_374, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1632 "opt_util.m"
                                                          return;
                                                        }
#line 1630 "opt_util.m"
                                                      }
#line 1545 "opt_util.m"
                                                    else
#line 1545 "opt_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1554 "opt_util.m"
                                                        {
#line 1554 "opt_util.m"
                                                          *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1554 "opt_util.m"
                                                          *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1554 "opt_util.m"
                                                        }
#line 1545 "opt_util.m"
                                                      else
#line 1545 "opt_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1589 "opt_util.m"
                                                          {
#line 1589 "opt_util.m"
                                                            MR_Word ll_backend__opt_util__Lval_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1590 "opt_util.m"
                                                            {
#line 1590 "opt_util.m"
                                                              ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_162, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1590 "opt_util.m"
                                                              return;
                                                            }
#line 1589 "opt_util.m"
                                                          }
#line 1545 "opt_util.m"
                                                        else
#line 1545 "opt_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1612 "opt_util.m"
                                                            {
#line 1612 "opt_util.m"
                                                              MR_Word ll_backend__opt_util__Lval_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1613 "opt_util.m"
                                                              {
#line 1613 "opt_util.m"
                                                                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_264, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1613 "opt_util.m"
                                                                return;
                                                              }
#line 1612 "opt_util.m"
                                                            }
#line 1545 "opt_util.m"
                                                          else
#line 1545 "opt_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1555 "opt_util.m"
                                                              {
#line 1555 "opt_util.m"
                                                                *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1555 "opt_util.m"
                                                                *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1555 "opt_util.m"
                                                              }
#line 1545 "opt_util.m"
                                                            else
#line 1545 "opt_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1614 "opt_util.m"
                                                                {
#line 1614 "opt_util.m"
                                                                  MR_Word ll_backend__opt_util__Rval_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1615 "opt_util.m"
                                                                  {
#line 1615 "opt_util.m"
                                                                    ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_273, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1615 "opt_util.m"
                                                                    return;
                                                                  }
#line 1614 "opt_util.m"
                                                                }
#line 1545 "opt_util.m"
                                                              else
#line 1545 "opt_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1595 "opt_util.m"
                                                                  {
#line 1595 "opt_util.m"
                                                                    *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1595 "opt_util.m"
                                                                    *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1595 "opt_util.m"
                                                                  }
#line 1545 "opt_util.m"
                                                                else
#line 1545 "opt_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1597 "opt_util.m"
                                                                    {
#line 1597 "opt_util.m"
                                                                      MR_Word ll_backend__opt_util__IdRval_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1597 "opt_util.m"
                                                                      MR_Word ll_backend__opt_util__NumLval_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1597 "opt_util.m"
                                                                      MR_Word ll_backend__opt_util__AddrLval_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1597 "opt_util.m"
                                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_208_208;
#line 1597 "opt_util.m"
                                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_209_209;
#line 1597 "opt_util.m"
                                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_210_210;
#line 1597 "opt_util.m"
                                                                      MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_211_211;
#line 1597 "opt_util.m"
                                                                      MR_Word ll_backend__opt_util___FillOp_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1597 "opt_util.m"
                                                                      MR_Word ll_backend__opt_util___EmbeddedStackFrame_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1598 "opt_util.m"
                                                                      {
#line 1598 "opt_util.m"
                                                                        ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__IdRval_199, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_208_208, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_209_209);
                                                                      }
#line 1599 "opt_util.m"
                                                                      {
#line 1599 "opt_util.m"
                                                                        ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__NumLval_200, ll_backend__opt_util__STATE_VARIABLE_R_208_208, &ll_backend__opt_util__STATE_VARIABLE_R_210_210, ll_backend__opt_util__STATE_VARIABLE_F_209_209, &ll_backend__opt_util__STATE_VARIABLE_F_211_211);
                                                                      }
#line 1600 "opt_util.m"
                                                                      {
#line 1600 "opt_util.m"
                                                                        ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__AddrLval_201, ll_backend__opt_util__STATE_VARIABLE_R_210_210, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_211_211, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1600 "opt_util.m"
                                                                        return;
                                                                      }
#line 1597 "opt_util.m"
                                                                    }
#line 1545 "opt_util.m"
                                                                  else
#line 1545 "opt_util.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1602 "opt_util.m"
                                                                      {
#line 1602 "opt_util.m"
                                                                        MR_Word ll_backend__opt_util__ValueRval_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1602 "opt_util.m"
                                                                        MR_Word ll_backend__opt_util___SetlOp_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1602 "opt_util.m"
                                                                        MR_Word ll_backend__opt_util___EmbeddedStackFrame_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1603 "opt_util.m"
                                                                        {
#line 1603 "opt_util.m"
                                                                          ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__ValueRval_216, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1603 "opt_util.m"
                                                                          return;
                                                                        }
#line 1602 "opt_util.m"
                                                                      }
#line 1545 "opt_util.m"
                                                                    else
#line 1545 "opt_util.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1608 "opt_util.m"
                                                                        {
#line 1608 "opt_util.m"
                                                                          MR_Word ll_backend__opt_util__Rval_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1608 "opt_util.m"
                                                                          MR_Word ll_backend__opt_util___Reason_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1609 "opt_util.m"
                                                                          {
#line 1609 "opt_util.m"
                                                                            ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_242, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1609 "opt_util.m"
                                                                            return;
                                                                          }
#line 1608 "opt_util.m"
                                                                        }
#line 1545 "opt_util.m"
                                                                      else
#line 1545 "opt_util.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1591 "opt_util.m"
                                                                          {
#line 1591 "opt_util.m"
                                                                            MR_Word ll_backend__opt_util__Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1592 "opt_util.m"
                                                                            {
#line 1592 "opt_util.m"
                                                                              ll_backend__opt_util__count_temps_rval_5_p_0(ll_backend__opt_util__Rval_171, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1592 "opt_util.m"
                                                                              return;
                                                                            }
#line 1591 "opt_util.m"
                                                                          }
#line 1545 "opt_util.m"
                                                                        else
#line 1545 "opt_util.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1565 "opt_util.m"
                                                                            {
#line 1565 "opt_util.m"
                                                                              MR_Word ll_backend__opt_util__Lval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1566 "opt_util.m"
                                                                              {
#line 1566 "opt_util.m"
                                                                                ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_125, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1566 "opt_util.m"
                                                                                return;
                                                                              }
#line 1565 "opt_util.m"
                                                                            }
#line 1545 "opt_util.m"
                                                                          else
#line 1545 "opt_util.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1563 "opt_util.m"
                                                                              {
#line 1563 "opt_util.m"
                                                                                MR_Word ll_backend__opt_util__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1564 "opt_util.m"
                                                                                {
#line 1564 "opt_util.m"
                                                                                  ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_116, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1564 "opt_util.m"
                                                                                  return;
                                                                                }
#line 1563 "opt_util.m"
                                                                              }
#line 1545 "opt_util.m"
                                                                            else
#line 1545 "opt_util.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1606 "opt_util.m"
                                                                                {
#line 1606 "opt_util.m"
                                                                                  MR_Word ll_backend__opt_util__Lval_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1607 "opt_util.m"
                                                                                  {
#line 1607 "opt_util.m"
                                                                                    ll_backend__opt_util__count_temps_lval_5_p_0(ll_backend__opt_util__Lval_233, ll_backend__opt_util__STATE_VARIABLE_R_0_2, ll_backend__opt_util__STATE_VARIABLE_R_3, ll_backend__opt_util__STATE_VARIABLE_F_0_4, ll_backend__opt_util__STATE_VARIABLE_F_5);
#line 1607 "opt_util.m"
                                                                                    return;
                                                                                  }
#line 1606 "opt_util.m"
                                                                                }
#line 1545 "opt_util.m"
                                                                              else
#line 1604 "opt_util.m"
                                                                                {
#line 1604 "opt_util.m"
                                                                                  *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1604 "opt_util.m"
                                                                                  *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1604 "opt_util.m"
                                                                                }
#line 1545 "opt_util.m"
  }
#line 224 "opt_util.m"
}

#line 221 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__count_temps_instr_list_5_p_0(
#line 221 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 221 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0_2,
#line 221 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_R_3,
#line 221 "opt_util.m"
  MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0_4,
#line 221 "opt_util.m"
  MR_Integer * ll_backend__opt_util__STATE_VARIABLE_F_5)
#line 221 "opt_util.m"
{
#line 1540 "opt_util.m"
  while (MR_TRUE)
#line 1540 "opt_util.m"
    {
#line 1540 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1540 "opt_util.m"
      {
#line 1540 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 1540 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1540 "opt_util.m"
          {
#line 1540 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_F_5 = ll_backend__opt_util__STATE_VARIABLE_F_0_4;
#line 1540 "opt_util.m"
            *ll_backend__opt_util__STATE_VARIABLE_R_3 = ll_backend__opt_util__STATE_VARIABLE_R_0_2;
#line 1540 "opt_util.m"
          }
#line 1540 "opt_util.m"
        else
#line 1541 "opt_util.m"
          {
#line 1541 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_12;
#line 1541 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1541 "opt_util.m"
            MR_Word ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1541 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_22_22;
#line 1541 "opt_util.m"
            MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_23_23;
#line 1541 "opt_util.m"
            MR_String ll_backend__opt_util___Comment_13;

#line 1541 "opt_util.m"
            ll_backend__opt_util__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
#line 1541 "opt_util.m"
            ll_backend__opt_util___Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_21_21, (MR_Integer) 1)));
#line 1542 "opt_util.m"
            {
#line 1542 "opt_util.m"
              ll_backend__opt_util__count_temps_instr_5_p_0(ll_backend__opt_util__Uinstr_12, ll_backend__opt_util__STATE_VARIABLE_R_0_2, &ll_backend__opt_util__STATE_VARIABLE_R_22_22, ll_backend__opt_util__STATE_VARIABLE_F_0_4, &ll_backend__opt_util__STATE_VARIABLE_F_23_23);
            }
#line 1543 "opt_util.m"
            /* direct tailcall eliminated */
#line 1543 "opt_util.m"
            {
#line 1543 "opt_util.m"
              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_14;
#line 1543 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2 = ll_backend__opt_util__STATE_VARIABLE_R_22_22;
#line 1543 "opt_util.m"
              MR_Integer ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4 = ll_backend__opt_util__STATE_VARIABLE_F_23_23;

#line 1543 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_F_0_4 = ll_backend__opt_util__STATE_VARIABLE_F_0__tmp_copy_4;
#line 1543 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_R_0_2 = ll_backend__opt_util__STATE_VARIABLE_R_0__tmp_copy_2;
#line 1543 "opt_util.m"
              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1543 "opt_util.m"
            }
#line 1543 "opt_util.m"
            continue;
#line 1541 "opt_util.m"
          }
#line 1540 "opt_util.m"
      }
#line 1540 "opt_util.m"
      break;
#line 1540 "opt_util.m"
    }
#line 221 "opt_util.m"
}

#line 216 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__possible_targets_3_p_0(
#line 216 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_4,
#line 216 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_5,
#line 216 "opt_util.m"
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
#line 216 "opt_util.m"
{
#line 1408 "opt_util.m"
  {
#line 1408 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1408 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1442 "opt_util.m"
      {
#line 1443 "opt_util.m"
        {
#line 1443 "opt_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "block");
#line 1443 "opt_util.m"
          return;
        }
#line 1442 "opt_util.m"
      }
#line 1408 "opt_util.m"
    else
#line 1408 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1445 "opt_util.m"
        {
#line 1445 "opt_util.m"
          MR_Word ll_backend__opt_util__MaybeLabels_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1445 "opt_util.m"
          MR_Word ll_backend__opt_util__RevLabels_84;
#line 1445 "opt_util.m"
          MR_Word ll_backend__opt_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1446 "opt_util.m"
          {
#line 1446 "opt_util.m"
            ll_backend__opt_util__possible_targets_maybe_labels_3_p_0(ll_backend__opt_util__MaybeLabels_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevLabels_84);
          }
#line 1447 "opt_util.m"
          {
#line 1447 "opt_util.m"
            mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__opt_util__RevLabels_84, ll_backend__opt_util__Labels_5);
          }
#line 1448 "opt_util.m"
          *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1445 "opt_util.m"
        }
#line 1408 "opt_util.m"
      else
#line 1408 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1432 "opt_util.m"
          {
#line 1434 "opt_util.m"
            {
#line 1434 "opt_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.possible_targets\'/3", (MR_String) "decr_sp_and_return");
#line 1434 "opt_util.m"
              return;
            }
#line 1432 "opt_util.m"
          }
#line 1408 "opt_util.m"
        else
#line 1408 "opt_util.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1451 "opt_util.m"
            {
#line 1451 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeFixLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
#line 1451 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeLayoutLabel_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
#line 1451 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeOnlyLayoutLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
#line 1451 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeSubLabel_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 7)));
#line 1451 "opt_util.m"
              MR_Word ll_backend__opt_util__MaybeDefLabel_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 8)));
#line 1450 "opt_util.m"
              MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1450 "opt_util.m"
              MR_Word ll_backend__opt_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1450 "opt_util.m"
              MR_Word ll_backend__opt_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1450 "opt_util.m"
              MR_Word ll_backend__opt_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 9)));
#line 1450 "opt_util.m"
              MR_Word ll_backend__opt_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 10)));

#line 1452 "opt_util.m"
              {
#line 1452 "opt_util.m"
                ll_backend__opt_util__foreign_proc_labels_6_p_0(ll_backend__opt_util__MaybeFixLabel_88, ll_backend__opt_util__MaybeLayoutLabel_89, ll_backend__opt_util__MaybeOnlyLayoutLabel_90, ll_backend__opt_util__MaybeSubLabel_91, ll_backend__opt_util__MaybeDefLabel_92, ll_backend__opt_util__Labels_5);
              }
#line 1454 "opt_util.m"
              *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "opt_util.m"
            }
#line 1408 "opt_util.m"
          else
#line 1408 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1423 "opt_util.m"
              {
#line 1423 "opt_util.m"
                MR_Word ll_backend__opt_util__CodeAddr_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1427 "opt_util.m"
                MR_Word ll_backend__opt_util__Label_74;

#line 1424 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_72)) == (MR_mktag((MR_Integer) 1)));
#line 1424 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 1424 "opt_util.m"
                  {
#line 1424 "opt_util.m"
                    ll_backend__opt_util__Label_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_72, (MR_Integer) 0)));
#line 1425 "opt_util.m"
                    {
#line 1425 "opt_util.m"
                      MR_Word base;
#line 1425 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "opt_util.m"
                      *ll_backend__opt_util__Labels_5 = base;
#line 1425 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_74));
#line 1425 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "opt_util.m"
                    }
#line 1426 "opt_util.m"
                    *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1424 "opt_util.m"
                  }
#line 1424 "opt_util.m"
                else
#line 1428 "opt_util.m"
                  {
#line 1428 "opt_util.m"
                    *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "opt_util.m"
                    {
#line 1429 "opt_util.m"
                      MR_Word base;
#line 1429 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "opt_util.m"
                      *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1429 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__CodeAddr_72));
#line 1429 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1429 "opt_util.m"
                    }
#line 1428 "opt_util.m"
                  }
#line 1423 "opt_util.m"
              }
#line 1408 "opt_util.m"
            else
#line 1408 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1423 "opt_util.m"
                {
#line 1423 "opt_util.m"
                  MR_Word ll_backend__opt_util__CodeAddr_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1422 "opt_util.m"
                  MR_Word ll_backend__opt_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1427 "opt_util.m"
                  MR_Word ll_backend__opt_util__Label_111;

#line 1424 "opt_util.m"
                  ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__CodeAddr_114)) == (MR_mktag((MR_Integer) 1)));
#line 1424 "opt_util.m"
                  if (ll_backend__opt_util__succeeded)
#line 1424 "opt_util.m"
                    {
#line 1424 "opt_util.m"
                      ll_backend__opt_util__Label_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__CodeAddr_114, (MR_Integer) 0)));
#line 1425 "opt_util.m"
                      {
#line 1425 "opt_util.m"
                        MR_Word base;
#line 1425 "opt_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "opt_util.m"
                        *ll_backend__opt_util__Labels_5 = base;
#line 1425 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_111));
#line 1425 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "opt_util.m"
                      }
#line 1426 "opt_util.m"
                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1424 "opt_util.m"
                    }
#line 1424 "opt_util.m"
                  else
#line 1428 "opt_util.m"
                    {
#line 1428 "opt_util.m"
                      *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "opt_util.m"
                      {
#line 1429 "opt_util.m"
                        MR_Word base;
#line 1429 "opt_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "opt_util.m"
                        *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1429 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__CodeAddr_114));
#line 1429 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1429 "opt_util.m"
                      }
#line 1428 "opt_util.m"
                    }
#line 1423 "opt_util.m"
                }
#line 1408 "opt_util.m"
              else
#line 1408 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1438 "opt_util.m"
                  {
#line 1438 "opt_util.m"
                    MR_Word ll_backend__opt_util__Label_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1436 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));

#line 1439 "opt_util.m"
                    {
#line 1439 "opt_util.m"
                      MR_Word base;
#line 1439 "opt_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "opt_util.m"
                      *ll_backend__opt_util__Labels_5 = base;
#line 1439 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_107));
#line 1439 "opt_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "opt_util.m"
                    }
#line 1440 "opt_util.m"
                    *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1438 "opt_util.m"
                  }
#line 1408 "opt_util.m"
                else
#line 1408 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1438 "opt_util.m"
                    {
#line 1438 "opt_util.m"
                      MR_Word ll_backend__opt_util__Label_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1437 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1437 "opt_util.m"
                      MR_Word ll_backend__opt_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));

#line 1439 "opt_util.m"
                      {
#line 1439 "opt_util.m"
                        MR_Word base;
#line 1439 "opt_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "opt_util.m"
                        *ll_backend__opt_util__Labels_5 = base;
#line 1439 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Label_119));
#line 1439 "opt_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "opt_util.m"
                      }
#line 1440 "opt_util.m"
                      *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1438 "opt_util.m"
                    }
#line 1408 "opt_util.m"
                  else
#line 1408 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1412 "opt_util.m"
                      {
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__Return_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 2)));
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 1)));
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 3)));
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 4)));
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 5)));
#line 1412 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_4, (MR_Integer) 6)));
#line 1416 "opt_util.m"
                        MR_Word ll_backend__opt_util__ReturnLabel_71;

#line 1413 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Return_66)) == (MR_mktag((MR_Integer) 1)));
#line 1413 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 1413 "opt_util.m"
                          {
#line 1413 "opt_util.m"
                            ll_backend__opt_util__ReturnLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Return_66, (MR_Integer) 0)));
#line 1414 "opt_util.m"
                            {
#line 1414 "opt_util.m"
                              MR_Word base;
#line 1414 "opt_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "opt_util.m"
                              *ll_backend__opt_util__Labels_5 = base;
#line 1414 "opt_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__ReturnLabel_71));
#line 1414 "opt_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "opt_util.m"
                            }
#line 1415 "opt_util.m"
                            *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1413 "opt_util.m"
                          }
#line 1413 "opt_util.m"
                        else
#line 1417 "opt_util.m"
                          {
#line 1417 "opt_util.m"
                            *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1418 "opt_util.m"
                            {
#line 1418 "opt_util.m"
                              MR_Word base;
#line 1418 "opt_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "opt_util.m"
                              *ll_backend__opt_util__CodeAddrs_6 = base;
#line 1418 "opt_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Return_66));
#line 1418 "opt_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1418 "opt_util.m"
                            }
#line 1417 "opt_util.m"
                          }
#line 1412 "opt_util.m"
                      }
#line 1408 "opt_util.m"
                    else
#line 1408 "opt_util.m"
                      {
#line 1409 "opt_util.m"
                        *ll_backend__opt_util__Labels_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1410 "opt_util.m"
                        *ll_backend__opt_util__CodeAddrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "opt_util.m"
                      }
#line 1408 "opt_util.m"
  }
#line 216 "opt_util.m"
}

#line 210 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__instr_labels_only_2_p_0(
#line 210 "opt_util.m"
  MR_Word ll_backend__opt_util__Instr_3,
#line 210 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_4)
#line 210 "opt_util.m"
{
#line 1272 "opt_util.m"
  {
#line 1272 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1272 "opt_util.m"
    MR_Word ll_backend__opt_util___CodeAddrs_5;

#line 1272 "opt_util.m"
    {
#line 1272 "opt_util.m"
      ll_backend__opt_util__instr_labels_3_p_0(ll_backend__opt_util__Instr_3, ll_backend__opt_util__Labels_4, &ll_backend__opt_util___CodeAddrs_5);
    }
#line 1272 "opt_util.m"
  }
#line 210 "opt_util.m"
}

#line 209 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__instr_labels_3_p_0(
#line 209 "opt_util.m"
  MR_Word ll_backend__opt_util__Instr_4,
#line 209 "opt_util.m"
  MR_Word * ll_backend__opt_util__Labels_5,
#line 209 "opt_util.m"
  MR_Word * ll_backend__opt_util__CodeAddrs_6)
#line 209 "opt_util.m"
{
#line 1263 "opt_util.m"
  {
#line 1263 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__TypeCtorInfo_20_20;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__Labels0_7;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__CodeAddrs1_8;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__Rvals_9;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__Lvals_10;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__CodeAddrs2_11;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__CodeAddrs3_13;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__V_15_15;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__V_16_16;
#line 1263 "opt_util.m"
    MR_Word ll_backend__opt_util__V_17_17;
#line 1266 "opt_util.m"
    MR_Word ll_backend__opt_util__V_12_12;
#line 1267 "opt_util.m"
    MR_Word ll_backend__opt_util__V_14_14;

#line 1264 "opt_util.m"
    {
#line 1264 "opt_util.m"
      ll_backend__opt_util__instr_labels_2_3_p_0(ll_backend__opt_util__Instr_4, &ll_backend__opt_util__Labels0_7, &ll_backend__opt_util__CodeAddrs1_8);
    }
#line 1265 "opt_util.m"
    {
#line 1265 "opt_util.m"
      ll_backend__code_util__instr_rvals_and_lvals_3_p_0(ll_backend__opt_util__Instr_4, &ll_backend__opt_util__Rvals_9, &ll_backend__opt_util__Lvals_10);
    }
#line 1266 "opt_util.m"
    {
#line 1266 "opt_util.m"
      ll_backend__opt_util__V_15_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__opt_util__Rvals_9);
    }
#line 1266 "opt_util.m"
    {
#line 1266 "opt_util.m"
      ll_backend__exprn_aux__rval_list_addrs_3_p_0(ll_backend__opt_util__V_15_15, &ll_backend__opt_util__CodeAddrs2_11, &ll_backend__opt_util__V_12_12);
    }
#line 1267 "opt_util.m"
    {
#line 1267 "opt_util.m"
      ll_backend__opt_util__V_16_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_util__Lvals_10);
    }
#line 1267 "opt_util.m"
    {
#line 1267 "opt_util.m"
      ll_backend__exprn_aux__lval_list_addrs_3_p_0(ll_backend__opt_util__V_16_16, &ll_backend__opt_util__CodeAddrs3_13, &ll_backend__opt_util__V_14_14);
    }
#line 14022 "ll_backend.opt_util.c"
    ll_backend__opt_util__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0;
#line 1268 "opt_util.m"
    {
#line 1268 "opt_util.m"
      ll_backend__opt_util__V_17_17 = mercury__list__f_43_43_2_f_0(ll_backend__opt_util__TypeCtorInfo_20_20, ll_backend__opt_util__CodeAddrs2_11, ll_backend__opt_util__CodeAddrs3_13);
    }
#line 1268 "opt_util.m"
    {
#line 1268 "opt_util.m"
      *ll_backend__opt_util__CodeAddrs_6 = mercury__list__f_43_43_2_f_0(ll_backend__opt_util__TypeCtorInfo_20_20, ll_backend__opt_util__CodeAddrs1_8, ll_backend__opt_util__V_17_17);
    }
#line 1269 "opt_util.m"
    {
#line 1269 "opt_util.m"
      ll_backend__opt_util__find_label_code_addrs_3_p_0(*ll_backend__opt_util__CodeAddrs_6, ll_backend__opt_util__Labels0_7, ll_backend__opt_util__Labels_5);
#line 1269 "opt_util.m"
      return;
    }
#line 1263 "opt_util.m"
  }
#line 209 "opt_util.m"
}

#line 203 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__livevals_addr_1_f_0(
#line 203 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 203 "opt_util.m"
{
#line 1521 "opt_util.m"
  {
#line 1521 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1521 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1521 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1521 "opt_util.m"
    else
#line 1521 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1533 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
      else
#line 1521 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1538 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
        else
#line 1521 "opt_util.m"
          if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1532 "opt_util.m"
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
          else
#line 1521 "opt_util.m"
            if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1535 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
            else
#line 1521 "opt_util.m"
              if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1534 "opt_util.m"
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
              else
#line 1521 "opt_util.m"
                if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1529 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1521 "opt_util.m"
                else
#line 1521 "opt_util.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1521 "opt_util.m"
                    {
#line 1521 "opt_util.m"
                      MR_Word ll_backend__opt_util__Label_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1525 "opt_util.m"
                      if (((MR_tag((MR_Word) ll_backend__opt_util__Label_3)) == (MR_mktag((MR_Integer) 1))))
#line 1527 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1525 "opt_util.m"
                      else
#line 1524 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1521 "opt_util.m"
                    }
#line 1521 "opt_util.m"
                  else
#line 1521 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1537 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1521 "opt_util.m"
                    else
#line 1521 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1536 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1521 "opt_util.m"
                      else
#line 1531 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1521 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1521 "opt_util.m"
  }
#line 203 "opt_util.m"
}

#line 197 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__can_instr_fall_through_1_f_0(
#line 197 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 197 "opt_util.m"
{
#line 1167 "opt_util.m"
  {
#line 1167 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1167 "opt_util.m"
    MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1167 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1192 "opt_util.m"
      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
    else
#line 1167 "opt_util.m"
      if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "opt_util.m"
        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
      else
#line 1167 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1167 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
        else
#line 1167 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1168 "opt_util.m"
            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
          else
#line 1167 "opt_util.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1178 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
            else
#line 1167 "opt_util.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1171 "opt_util.m"
                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
              else
#line 1167 "opt_util.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1169 "opt_util.m"
                  {
#line 1169 "opt_util.m"
                    MR_Word ll_backend__opt_util__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1169 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1169 "opt_util.m"
                    MR_Integer ll_backend__opt_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1170 "opt_util.m"
                    {
#line 1170 "opt_util.m"
                      ll_backend__opt_util__can_block_fall_through_2_p_0(ll_backend__opt_util__Instrs_7, &ll_backend__opt_util__HeadVar__2_2);
                    }
#line 1169 "opt_util.m"
                  }
#line 1167 "opt_util.m"
                else
#line 1167 "opt_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1177 "opt_util.m"
                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                  else
#line 1167 "opt_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1197 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                    else
#line 1167 "opt_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1198 "opt_util.m"
                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                      else
#line 1167 "opt_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1199 "opt_util.m"
                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                        else
#line 1167 "opt_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1201 "opt_util.m"
                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                          else
#line 1167 "opt_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1185 "opt_util.m"
                              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                            else
#line 1167 "opt_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1176 "opt_util.m"
                                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                              else
#line 1167 "opt_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1179 "opt_util.m"
                                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                else
#line 1167 "opt_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1182 "opt_util.m"
                                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                  else
#line 1167 "opt_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1196 "opt_util.m"
                                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                    else
#line 1167 "opt_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1200 "opt_util.m"
                                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                      else
#line 1167 "opt_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1202 "opt_util.m"
                                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                                        else
#line 1167 "opt_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1172 "opt_util.m"
                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                          else
#line 1167 "opt_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1175 "opt_util.m"
                                              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                            else
#line 1167 "opt_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1203 "opt_util.m"
                                                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                              else
#line 1167 "opt_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1206 "opt_util.m"
                                                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                                                else
#line 1167 "opt_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1205 "opt_util.m"
                                                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                  else
#line 1167 "opt_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1204 "opt_util.m"
                                                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                    else
#line 1167 "opt_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1173 "opt_util.m"
                                                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "opt_util.m"
                                                      else
#line 1167 "opt_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1183 "opt_util.m"
                                                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                        else
#line 1167 "opt_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1194 "opt_util.m"
                                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                          else
#line 1167 "opt_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1174 "opt_util.m"
                                                              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                            else
#line 1167 "opt_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1195 "opt_util.m"
                                                                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                              else
#line 1167 "opt_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1186 "opt_util.m"
                                                                  ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                else
#line 1167 "opt_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1187 "opt_util.m"
                                                                    ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                  else
#line 1167 "opt_util.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1188 "opt_util.m"
                                                                      ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                    else
#line 1167 "opt_util.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1191 "opt_util.m"
                                                                        ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                      else
#line 1167 "opt_util.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1184 "opt_util.m"
                                                                          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                        else
#line 1167 "opt_util.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1181 "opt_util.m"
                                                                            ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                          else
#line 1167 "opt_util.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1180 "opt_util.m"
                                                                              ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                            else
#line 1167 "opt_util.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1190 "opt_util.m"
                                                                                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
                                                                              else
#line 1189 "opt_util.m"
                                                                                ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "opt_util.m"
    return ll_backend__opt_util__HeadVar__2_2;
#line 1167 "opt_util.m"
  }
#line 197 "opt_util.m"
}

#line 192 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__can_instr_branch_away_1_f_0(
#line 192 "opt_util.m"
  MR_Word ll_backend__opt_util__Uinstr_3)
#line 192 "opt_util.m"
{
#line 1107 "opt_util.m"
  {
#line 1107 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 1107 "opt_util.m"
    MR_Word ll_backend__opt_util__CanBranchAway_4;

#line 1107 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1121 "opt_util.m"
      {
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__Comps_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 2)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 1)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 3)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 4)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 5)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 6)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 7)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 8)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 9)));
#line 1121 "opt_util.m"
        MR_Word ll_backend__opt_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 10)));

#line 1122 "opt_util.m"
        {
#line 1122 "opt_util.m"
          return ll_backend__opt_util__CanBranchAway_4 = ll_backend__opt_util__can_components_branch_away_1_f_0(ll_backend__opt_util__Comps_84);
        }
#line 1121 "opt_util.m"
      }
#line 1107 "opt_util.m"
    else
#line 1107 "opt_util.m"
      if (((((((((((((((((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 0)))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 30)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 33)))))) || (((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1119 "opt_util.m"
        ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 1;
#line 1107 "opt_util.m"
      else
#line 1108 "opt_util.m"
        ll_backend__opt_util__CanBranchAway_4 = (MR_Integer) 0;
#line 1107 "opt_util.m"
    return ll_backend__opt_util__CanBranchAway_4;
#line 1107 "opt_util.m"
  }
#line 192 "opt_util.m"
}

#line 188 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_const_condition_2_p_0(
#line 188 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 188 "opt_util.m"
  MR_Word * ll_backend__opt_util__Taken_2)
#line 188 "opt_util.m"
{
#line 1057 "opt_util.m"
  {
#line 1057 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1057 "opt_util.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1070 "opt_util.m"
      {
#line 1070 "opt_util.m"
        MR_Word ll_backend__opt_util__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1070 "opt_util.m"
        MR_Word ll_backend__opt_util__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1070 "opt_util.m"
        MR_Word ll_backend__opt_util__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 3)));

#line 1071 "opt_util.m"
        ll_backend__opt_util__succeeded = (ll_backend__opt_util__Op_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1070 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1070 "opt_util.m"
          {
#line 1072 "opt_util.m"
            {
#line 1072 "opt_util.m"
              ll_backend__opt_util__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__opt_util__Rval1_13, ll_backend__opt_util__Rval2_14);
            }
#line 1070 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1070 "opt_util.m"
              {
#line 1073 "opt_util.m"
                *ll_backend__opt_util__Taken_2 = (MR_Integer) 1;
#line 1073 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 1070 "opt_util.m"
              }
#line 1070 "opt_util.m"
          }
#line 1070 "opt_util.m"
      }
#line 1057 "opt_util.m"
    else
#line 1057 "opt_util.m"
      if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1057 "opt_util.m"
        {
#line 1057 "opt_util.m"
          MR_Word ll_backend__opt_util__Const_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1058 "opt_util.m"
          ll_backend__opt_util__succeeded = (ll_backend__opt_util__Const_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "opt_util.m"
          if (ll_backend__opt_util__succeeded)
#line 1059 "opt_util.m"
            *ll_backend__opt_util__Taken_2 = (MR_Integer) 1;
#line 1060 "opt_util.m"
          else
#line 1062 "opt_util.m"
            {
#line 1060 "opt_util.m"
              ll_backend__opt_util__succeeded = (ll_backend__opt_util__Const_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1062 "opt_util.m"
              if (ll_backend__opt_util__succeeded)
#line 1061 "opt_util.m"
                *ll_backend__opt_util__Taken_2 = (MR_Integer) 0;
#line 1062 "opt_util.m"
              else
#line 1063 "opt_util.m"
                {
#line 1063 "opt_util.m"
                  {
#line 1063 "opt_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.is_const_condition\'/2", (MR_String) "non-boolean constant as if-then-else condition");
                  }
#line 1063 "opt_util.m"
                }
#line 1062 "opt_util.m"
            }
#line 1057 "opt_util.m"
          ll_backend__opt_util__succeeded = MR_TRUE;
#line 1057 "opt_util.m"
        }
#line 1057 "opt_util.m"
      else
#line 1057 "opt_util.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1066 "opt_util.m"
          {
#line 1066 "opt_util.m"
            MR_Word ll_backend__opt_util__Op_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1066 "opt_util.m"
            MR_Word ll_backend__opt_util__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1066 "opt_util.m"
            MR_Word ll_backend__opt_util__Taken1_11;

#line 1067 "opt_util.m"
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__Op_8 == (MR_Integer) 7);
#line 1066 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1066 "opt_util.m"
              {
#line 1068 "opt_util.m"
                {
#line 1068 "opt_util.m"
                  ll_backend__opt_util__succeeded = ll_backend__opt_util__is_const_condition_2_p_0(ll_backend__opt_util__Rval1_9, &ll_backend__opt_util__Taken1_11);
                }
#line 1066 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 1066 "opt_util.m"
                  {
#line 1069 "opt_util.m"
                    {
#line 1069 "opt_util.m"
                      mercury__bool__not_2_p_0(ll_backend__opt_util__Taken1_11, ll_backend__opt_util__Taken_2);
                    }
#line 1069 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_TRUE;
#line 1066 "opt_util.m"
                  }
#line 1066 "opt_util.m"
              }
#line 1066 "opt_util.m"
          }
#line 1057 "opt_util.m"
        else
#line 1057 "opt_util.m"
          ll_backend__opt_util__succeeded = MR_FALSE;
#line 1057 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 1057 "opt_util.m"
  }
#line 188 "opt_util.m"
}

#line 182 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__filter_in_livevals_2_p_0(
#line 182 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 182 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 182 "opt_util.m"
{
#line 1045 "opt_util.m"
  {
#line 1045 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1045 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1045 "opt_util.m"
    else
#line 1046 "opt_util.m"
      {
#line 1046 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1046 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1046 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_6;
#line 1048 "opt_util.m"
        MR_Word ll_backend__opt_util__V_9_9;
#line 1048 "opt_util.m"
        MR_String ll_backend__opt_util__V_8_8;
#line 1048 "opt_util.m"
        MR_Word ll_backend__opt_util__V_7_7;

#line 1047 "opt_util.m"
        {
#line 1047 "opt_util.m"
          ll_backend__opt_util__filter_in_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
#line 1048 "opt_util.m"
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
#line 1048 "opt_util.m"
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
#line 1048 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 2)));
#line 1048 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1048 "opt_util.m"
          {
#line 1048 "opt_util.m"
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
#line 1049 "opt_util.m"
            {
#line 1049 "opt_util.m"
              MR_Word base;
#line 1049 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = base;
#line 1049 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 1049 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
#line 1049 "opt_util.m"
            }
#line 1048 "opt_util.m"
          }
#line 1048 "opt_util.m"
        else
#line 1051 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
#line 1046 "opt_util.m"
      }
#line 1045 "opt_util.m"
  }
#line 182 "opt_util.m"
}

#line 177 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__filter_out_livevals_2_p_0(
#line 177 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 177 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 177 "opt_util.m"
{
#line 1036 "opt_util.m"
  {
#line 1036 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1036 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1036 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1036 "opt_util.m"
    else
#line 1037 "opt_util.m"
      {
#line 1037 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1037 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1037 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_6;
#line 1039 "opt_util.m"
        MR_Word ll_backend__opt_util__V_9_9;
#line 1039 "opt_util.m"
        MR_String ll_backend__opt_util__V_8_8;
#line 1039 "opt_util.m"
        MR_Word ll_backend__opt_util__V_7_7;

#line 1038 "opt_util.m"
        {
#line 1038 "opt_util.m"
          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
#line 1039 "opt_util.m"
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
#line 1039 "opt_util.m"
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
#line 1039 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 2)));
#line 1039 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1039 "opt_util.m"
          {
#line 1039 "opt_util.m"
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
#line 1040 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
#line 1039 "opt_util.m"
          }
#line 1039 "opt_util.m"
        else
#line 1042 "opt_util.m"
          {
#line 1042 "opt_util.m"
            MR_Word base;
#line 1042 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = base;
#line 1042 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 1042 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
#line 1042 "opt_util.m"
          }
#line 1037 "opt_util.m"
      }
#line 1036 "opt_util.m"
  }
#line 177 "opt_util.m"
}

#line 171 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__filter_out_bad_livevals_2_p_0(
#line 171 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 171 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 171 "opt_util.m"
{
#line 1022 "opt_util.m"
  {
#line 1022 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1022 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1022 "opt_util.m"
    else
#line 1023 "opt_util.m"
      {
#line 1023 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1023 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1023 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_6;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs2_9;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr2_10;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__V_13_13;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__V_14_14;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__V_15_15;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__V_16_16;
#line 1026 "opt_util.m"
        MR_String ll_backend__opt_util__V_8_8;
#line 1026 "opt_util.m"
        MR_Word ll_backend__opt_util__V_7_7;
#line 1028 "opt_util.m"
        MR_Word ll_backend__opt_util__V_12_12;
#line 1028 "opt_util.m"
        MR_String ll_backend__opt_util__V_11_11;

#line 1024 "opt_util.m"
        {
#line 1024 "opt_util.m"
          ll_backend__opt_util__filter_out_bad_livevals_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
#line 1026 "opt_util.m"
        ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
#line 1026 "opt_util.m"
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
#line 1026 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 1026 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1026 "opt_util.m"
          {
#line 1026 "opt_util.m"
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
#line 1027 "opt_util.m"
            {
#line 1027 "opt_util.m"
              ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs1_6, &ll_backend__opt_util__Instrs2_9);
            }
#line 1028 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 1028 "opt_util.m"
              {
#line 1028 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs2_9, (MR_Integer) 0)));
#line 1028 "opt_util.m"
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs2_9, (MR_Integer) 1)));
#line 1028 "opt_util.m"
                ll_backend__opt_util__Uinstr2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 0)));
#line 1028 "opt_util.m"
                ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 1)));
#line 1029 "opt_util.m"
                ll_backend__opt_util__V_15_15 = (MR_Integer) 0;
#line 1029 "opt_util.m"
                {
#line 1029 "opt_util.m"
                  ll_backend__opt_util__can_use_livevals_2_p_0(ll_backend__opt_util__Uinstr2_10, &ll_backend__opt_util__V_16_16);
                }
#line 1029 "opt_util.m"
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_15_15 == ll_backend__opt_util__V_16_16);
#line 1028 "opt_util.m"
              }
#line 1026 "opt_util.m"
          }
#line 1032 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1031 "opt_util.m"
          *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
#line 1032 "opt_util.m"
        else
#line 1033 "opt_util.m"
          {
#line 1033 "opt_util.m"
            MR_Word base;
#line 1033 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = base;
#line 1033 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 1033 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
#line 1033 "opt_util.m"
          }
#line 1023 "opt_util.m"
      }
#line 1022 "opt_util.m"
  }
#line 171 "opt_util.m"
}

#line 165 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__filter_out_labels_2_p_0(
#line 165 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 165 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 165 "opt_util.m"
{
#line 1013 "opt_util.m"
  {
#line 1013 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 1013 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "opt_util.m"
    else
#line 1014 "opt_util.m"
      {
#line 1014 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1014 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1014 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_6;
#line 1016 "opt_util.m"
        MR_Word ll_backend__opt_util__V_9_9;
#line 1016 "opt_util.m"
        MR_String ll_backend__opt_util__V_8_8;
#line 1016 "opt_util.m"
        MR_Word ll_backend__opt_util__V_7_7;

#line 1015 "opt_util.m"
        {
#line 1015 "opt_util.m"
          ll_backend__opt_util__filter_out_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_6);
        }
#line 1016 "opt_util.m"
        ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
#line 1016 "opt_util.m"
        ll_backend__opt_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));
#line 1016 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1016 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 1016 "opt_util.m"
          {
#line 1016 "opt_util.m"
            ll_backend__opt_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_9_9, (MR_Integer) 1)));
#line 1017 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Instrs1_6;
#line 1016 "opt_util.m"
          }
#line 1016 "opt_util.m"
        else
#line 1019 "opt_util.m"
          {
#line 1019 "opt_util.m"
            MR_Word base;
#line 1019 "opt_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = base;
#line 1019 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 1019 "opt_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_6));
#line 1019 "opt_util.m"
          }
#line 1014 "opt_util.m"
      }
#line 1013 "opt_util.m"
  }
#line 165 "opt_util.m"
}

#line 160 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(
#line 160 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_5,
#line 160 "opt_util.m"
  MR_Word * ll_backend__opt_util__UntilSucceed_6,
#line 160 "opt_util.m"
  MR_String * ll_backend__opt_util__SucceedComment_7,
#line 160 "opt_util.m"
  MR_Word * ll_backend__opt_util__Remain_8)
#line 160 "opt_util.m"
{
#line 659 "opt_util.m"
  {
#line 659 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 659 "opt_util.m"
    MR_Word ll_backend__opt_util__TypeCtorInfo_11_11;
#line 659 "opt_util.m"
    MR_Word ll_backend__opt_util__RevUntilSucceed_9;

#line 660 "opt_util.m"
    {
#line 660 "opt_util.m"
      ll_backend__opt_util__succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_p_0(ll_backend__opt_util__Instrs0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevUntilSucceed_9, ll_backend__opt_util__SucceedComment_7, ll_backend__opt_util__Remain_8);
    }
#line 659 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 659 "opt_util.m"
      {
#line 15007 "ll_backend.opt_util.c"
        ll_backend__opt_util__TypeCtorInfo_11_11 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 662 "opt_util.m"
        {
#line 662 "opt_util.m"
          mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_11_11, ll_backend__opt_util__RevUntilSucceed_9, ll_backend__opt_util__UntilSucceed_6);
        }
#line 662 "opt_util.m"
        ll_backend__opt_util__succeeded = MR_TRUE;
#line 659 "opt_util.m"
      }
#line 659 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 659 "opt_util.m"
  }
#line 160 "opt_util.m"
}

#line 150 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__no_stack_straight_line_3_p_0(
#line 150 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 150 "opt_util.m"
  MR_Word * ll_backend__opt_util__StraightLine_5,
#line 150 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_6)
#line 150 "opt_util.m"
{
#line 631 "opt_util.m"
  {
#line 631 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 631 "opt_util.m"
    MR_Word ll_backend__opt_util__RevStraightLine_7;

#line 632 "opt_util.m"
    {
#line 632 "opt_util.m"
      ll_backend__opt_util__no_stack_straight_line_2_4_p_0(ll_backend__opt_util__Instrs0_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__RevStraightLine_7, ll_backend__opt_util__Instrs_6);
    }
#line 633 "opt_util.m"
    {
#line 633 "opt_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__RevStraightLine_7, ll_backend__opt_util__StraightLine_5);
#line 633 "opt_util.m"
      return;
    }
#line 631 "opt_util.m"
  }
#line 150 "opt_util.m"
}

#line 144 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__straight_alternative_3_p_0(
#line 144 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 144 "opt_util.m"
  MR_Word * ll_backend__opt_util__Between_5,
#line 144 "opt_util.m"
  MR_Word * ll_backend__opt_util__After_6)
#line 144 "opt_util.m"
{
#line 599 "opt_util.m"
  {
#line 599 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 599 "opt_util.m"
    MR_Word ll_backend__opt_util__TypeCtorInfo_9_9;
#line 599 "opt_util.m"
    MR_Word ll_backend__opt_util__BetweenRev_7;

#line 600 "opt_util.m"
    {
#line 600 "opt_util.m"
      ll_backend__opt_util__succeeded = ll_backend__opt_util__straight_alternative_2_4_p_0(ll_backend__opt_util__Instrs0_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__opt_util__BetweenRev_7, ll_backend__opt_util__After_6);
    }
#line 599 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 599 "opt_util.m"
      {
#line 15089 "ll_backend.opt_util.c"
        ll_backend__opt_util__TypeCtorInfo_9_9 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 601 "opt_util.m"
        {
#line 601 "opt_util.m"
          mercury__list__reverse_2_p_0(ll_backend__opt_util__TypeCtorInfo_9_9, ll_backend__opt_util__BetweenRev_7, ll_backend__opt_util__Between_5);
        }
#line 601 "opt_util.m"
        ll_backend__opt_util__succeeded = MR_TRUE;
#line 599 "opt_util.m"
      }
#line 599 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 599 "opt_util.m"
  }
#line 144 "opt_util.m"
}

#line 136 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__filter_out_r1_3_p_0(
#line 136 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 136 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 136 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
#line 136 "opt_util.m"
{
#line 588 "opt_util.m"
  {
#line 588 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 588 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "opt_util.m"
      {
#line 588 "opt_util.m"
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "opt_util.m"
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "opt_util.m"
      }
#line 588 "opt_util.m"
    else
#line 589 "opt_util.m"
      {
#line 589 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "opt_util.m"
        MR_Word ll_backend__opt_util__Success0_8;
#line 589 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_9;
#line 594 "opt_util.m"
        MR_Word ll_backend__opt_util__Success1_10;
#line 591 "opt_util.m"
        MR_Word ll_backend__opt_util__V_12_12;
#line 591 "opt_util.m"
        MR_Word ll_backend__opt_util__V_13_13;
#line 591 "opt_util.m"
        MR_Word ll_backend__opt_util__V_14_14;
#line 591 "opt_util.m"
        MR_Integer ll_backend__opt_util__V_15_15;
#line 591 "opt_util.m"
        MR_Word ll_backend__opt_util__V_16_16;
#line 591 "opt_util.m"
        MR_String ll_backend__opt_util__V_11_11;

#line 590 "opt_util.m"
        {
#line 590 "opt_util.m"
          ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Success0_8, &ll_backend__opt_util__Instrs1_9);
        }
#line 591 "opt_util.m"
        ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 0)));
#line 591 "opt_util.m"
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 1)));
#line 591 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 591 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 591 "opt_util.m"
          {
#line 591 "opt_util.m"
            ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
#line 591 "opt_util.m"
            ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 2)));
#line 591 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 591 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 591 "opt_util.m"
              {
#line 591 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
#line 591 "opt_util.m"
                ll_backend__opt_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
#line 591 "opt_util.m"
                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_14_14 == (MR_Integer) 0);
#line 591 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 591 "opt_util.m"
                  {
#line 591 "opt_util.m"
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_15_15 == (MR_Integer) 1);
#line 591 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 591 "opt_util.m"
                      {
#line 591 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 591 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 591 "opt_util.m"
                          ll_backend__opt_util__Success1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
#line 591 "opt_util.m"
                      }
#line 591 "opt_util.m"
                  }
#line 591 "opt_util.m"
              }
#line 591 "opt_util.m"
          }
#line 594 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 592 "opt_util.m"
          {
#line 592 "opt_util.m"
            *ll_backend__opt_util__HeadVar__3_3 = ll_backend__opt_util__Instrs1_9;
#line 593 "opt_util.m"
            {
#line 593 "opt_util.m"
              MR_Word base;
#line 593 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = base;
#line 593 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Success1_10));
#line 593 "opt_util.m"
            }
#line 592 "opt_util.m"
          }
#line 594 "opt_util.m"
        else
#line 595 "opt_util.m"
          {
#line 595 "opt_util.m"
            {
#line 595 "opt_util.m"
              MR_Word base;
#line 595 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "opt_util.m"
              *ll_backend__opt_util__HeadVar__3_3 = base;
#line 595 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_4));
#line 595 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_9));
#line 595 "opt_util.m"
            }
#line 596 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__Success0_8;
#line 595 "opt_util.m"
          }
#line 589 "opt_util.m"
      }
#line 588 "opt_util.m"
  }
#line 136 "opt_util.m"
}

#line 131 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_forkproceed_next_3_p_0(
#line 131 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 131 "opt_util.m"
  MR_Word ll_backend__opt_util__Sdprocmap_5,
#line 131 "opt_util.m"
  MR_Word * ll_backend__opt_util__Between_6)
#line 131 "opt_util.m"
{
#line 561 "opt_util.m"
  {
#line 561 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 561 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_7;
#line 561 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1_8;
#line 561 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs2_9;
#line 561 "opt_util.m"
    MR_Word ll_backend__opt_util__Uinstr1_10;
#line 564 "opt_util.m"
    MR_String ll_backend__opt_util__V_11_11;
#line 574 "opt_util.m"
    MR_Word ll_backend__opt_util__JumpLabel_12;
#line 566 "opt_util.m"
    MR_Word ll_backend__opt_util__V_17_17;
#line 566 "opt_util.m"
    MR_Word ll_backend__opt_util__V_18_18;
#line 566 "opt_util.m"
    MR_Word ll_backend__opt_util__V_19_19;
#line 566 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_20_20;
#line 566 "opt_util.m"
    MR_Word ll_backend__opt_util__V_21_21;

#line 562 "opt_util.m"
    {
#line 562 "opt_util.m"
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_7);
    }
#line 563 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_7)) == (MR_mktag((MR_Integer) 1)));
#line 563 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 563 "opt_util.m"
      {
#line 563 "opt_util.m"
        ll_backend__opt_util__Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 0)));
#line 563 "opt_util.m"
        ll_backend__opt_util__Instrs2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 1)));
#line 564 "opt_util.m"
        ll_backend__opt_util__Uinstr1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 0)));
#line 564 "opt_util.m"
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 1)));
#line 566 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr1_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 566 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
          {
#line 566 "opt_util.m"
            ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 1)));
#line 566 "opt_util.m"
            ll_backend__opt_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 2)));
#line 566 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 566 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
              {
#line 566 "opt_util.m"
                ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_17_17, (MR_Integer) 0)));
#line 566 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 566 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
                  {
#line 566 "opt_util.m"
                    ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, (MR_Integer) 0)));
#line 566 "opt_util.m"
                    ll_backend__opt_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, (MR_Integer) 1)));
#line 566 "opt_util.m"
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_19_19 == (MR_Integer) 0);
#line 566 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
                      {
#line 566 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_20_20 == (MR_Integer) 1);
#line 566 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
                          {
#line 566 "opt_util.m"
                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 566 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 566 "opt_util.m"
                              ll_backend__opt_util__JumpLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_21_21, (MR_Integer) 0)));
#line 566 "opt_util.m"
                          }
#line 566 "opt_util.m"
                      }
#line 566 "opt_util.m"
                  }
#line 566 "opt_util.m"
              }
#line 566 "opt_util.m"
          }
#line 574 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
          {
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_56_56;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_57_57;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_58_58;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenJump_13;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenFall_14;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenTrue0_15;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenFalse0_16;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_22_22;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_23_23;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_24_24;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_25_25;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_50_50;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_51_51;
#line 568 "opt_util.m"
            MR_Word ll_backend__opt_util__V_52_52;
#line 568 "opt_util.m"
            MR_Box ll_backend__opt_util__conv0_BetweenJump_13;
#line 515 "opt_util.m"
            MR_Word ll_backend__opt_util__V_64_64;

#line 568 "opt_util.m"
            {
#line 568 "opt_util.m"
              ll_backend__opt_util__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_util_scalar_common_1[0], ll_backend__opt_util__Sdprocmap_5, ((MR_Box) (ll_backend__opt_util__JumpLabel_12)), &ll_backend__opt_util__conv0_BetweenJump_13);
            }
#line 568 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
              {
#line 568 "opt_util.m"
                ll_backend__opt_util__BetweenJump_13 = ((MR_Word) ll_backend__opt_util__conv0_BetweenJump_13);
#line 568 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 568 "opt_util.m"
              }
#line 568 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
              {
#line 515 "opt_util.m"
                {
#line 515 "opt_util.m"
                  ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__BetweenFall_14, &ll_backend__opt_util__V_64_64);
                }
#line 568 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
                  {
#line 570 "opt_util.m"
                    ll_backend__opt_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "opt_util.m"
                    ll_backend__opt_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]);
#line 570 "opt_util.m"
                    {
#line 570 "opt_util.m"
                      ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenJump_13, &ll_backend__opt_util__V_50_50, &ll_backend__opt_util__BetweenTrue0_15);
                    }
#line 15451 "ll_backend.opt_util.c"
                    ll_backend__opt_util__TypeInfo_56_56 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
#line 570 "opt_util.m"
                    {
#line 570 "opt_util.m"
                      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_56_56, ((MR_Box) (ll_backend__opt_util__V_22_22)), ((MR_Box) (ll_backend__opt_util__V_50_50)));
                    }
#line 568 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
                      {
#line 571 "opt_util.m"
                        {
#line 571 "opt_util.m"
                          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenTrue0_15, ll_backend__opt_util__Between_6);
                        }
#line 572 "opt_util.m"
                        ll_backend__opt_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 572 "opt_util.m"
                        ll_backend__opt_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]);
#line 572 "opt_util.m"
                        {
#line 572 "opt_util.m"
                          ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenFall_14, &ll_backend__opt_util__V_51_51, &ll_backend__opt_util__BetweenFalse0_16);
                        }
#line 15476 "ll_backend.opt_util.c"
                        ll_backend__opt_util__TypeInfo_57_57 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
#line 572 "opt_util.m"
                        {
#line 572 "opt_util.m"
                          ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_57_57, ((MR_Box) (ll_backend__opt_util__V_24_24)), ((MR_Box) (ll_backend__opt_util__V_51_51)));
                        }
#line 568 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 568 "opt_util.m"
                          {
#line 573 "opt_util.m"
                            {
#line 573 "opt_util.m"
                              ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenFalse0_16, &ll_backend__opt_util__V_52_52);
                            }
#line 15492 "ll_backend.opt_util.c"
                            ll_backend__opt_util__TypeInfo_58_58 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
#line 573 "opt_util.m"
                            {
#line 573 "opt_util.m"
                              return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_58_58, ((MR_Box) (*ll_backend__opt_util__Between_6)), ((MR_Box) (ll_backend__opt_util__V_52_52)));
                            }
#line 568 "opt_util.m"
                          }
#line 568 "opt_util.m"
                      }
#line 568 "opt_util.m"
                  }
#line 568 "opt_util.m"
              }
#line 568 "opt_util.m"
          }
#line 574 "opt_util.m"
        else
#line 584 "opt_util.m"
          {
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeCtorInfo_48_48;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_49_49;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_59_59;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_60_60;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__TypeInfo_61_61;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_26_26;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_32_32;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_33_33;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_34_34;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_35_35;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_36_36;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenJump_37;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenFall_38;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenTrue0_39;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__BetweenFalse0_40;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__JumpLabel_41;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_53_53;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_54_54;
#line 584 "opt_util.m"
            MR_Word ll_backend__opt_util__V_55_55;
#line 575 "opt_util.m"
            MR_Word ll_backend__opt_util__V_27_27;
#line 575 "opt_util.m"
            MR_Word ll_backend__opt_util__V_28_28;
#line 575 "opt_util.m"
            MR_Word ll_backend__opt_util__V_29_29;
#line 575 "opt_util.m"
            MR_Word ll_backend__opt_util__V_30_30;
#line 575 "opt_util.m"
            MR_Integer ll_backend__opt_util__V_31_31;
#line 578 "opt_util.m"
            MR_Box ll_backend__opt_util__conv1_BetweenJump_37;
#line 515 "opt_util.m"
            MR_Word ll_backend__opt_util__V_67_67;

#line 575 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr1_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 575 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
              {
#line 575 "opt_util.m"
                ll_backend__opt_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 1)));
#line 575 "opt_util.m"
                ll_backend__opt_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr1_10, (MR_Integer) 2)));
#line 575 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 575 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                  {
#line 575 "opt_util.m"
                    ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 1)));
#line 575 "opt_util.m"
                    ll_backend__opt_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 2)));
#line 575 "opt_util.m"
                    ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_27_27 == (MR_Integer) 7);
#line 575 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                      {
#line 575 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 575 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                          {
#line 575 "opt_util.m"
                            ll_backend__opt_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_28_28, (MR_Integer) 0)));
#line 575 "opt_util.m"
                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 575 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                              {
#line 575 "opt_util.m"
                                ll_backend__opt_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_29_29, (MR_Integer) 0)));
#line 575 "opt_util.m"
                                ll_backend__opt_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_29_29, (MR_Integer) 1)));
#line 575 "opt_util.m"
                                ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_30_30 == (MR_Integer) 0);
#line 575 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                                  ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_31_31 == (MR_Integer) 1);
#line 575 "opt_util.m"
                              }
#line 575 "opt_util.m"
                          }
#line 575 "opt_util.m"
                      }
#line 575 "opt_util.m"
                  }
#line 584 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 584 "opt_util.m"
                  {
#line 575 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 575 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 575 "opt_util.m"
                      {
#line 575 "opt_util.m"
                        ll_backend__opt_util__JumpLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_32_32, (MR_Integer) 0)));
#line 15636 "ll_backend.opt_util.c"
                        ll_backend__opt_util__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 15638 "ll_backend.opt_util.c"
                        ll_backend__opt_util__TypeInfo_49_49 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
#line 578 "opt_util.m"
                        {
#line 578 "opt_util.m"
                          ll_backend__opt_util__succeeded = mercury__map__search_3_p_0(ll_backend__opt_util__TypeCtorInfo_48_48, ll_backend__opt_util__TypeInfo_49_49, ll_backend__opt_util__Sdprocmap_5, ((MR_Box) (ll_backend__opt_util__JumpLabel_41)), &ll_backend__opt_util__conv1_BetweenJump_37);
                        }
#line 578 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 578 "opt_util.m"
                          {
#line 578 "opt_util.m"
                            ll_backend__opt_util__BetweenJump_37 = ((MR_Word) ll_backend__opt_util__conv1_BetweenJump_37);
#line 578 "opt_util.m"
                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 578 "opt_util.m"
                          }
#line 584 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 584 "opt_util.m"
                          {
#line 515 "opt_util.m"
                            {
#line 515 "opt_util.m"
                              ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__BetweenFall_38, &ll_backend__opt_util__V_67_67);
                            }
#line 584 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 584 "opt_util.m"
                              {
#line 580 "opt_util.m"
                                ll_backend__opt_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 580 "opt_util.m"
                                ll_backend__opt_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[3]);
#line 580 "opt_util.m"
                                {
#line 580 "opt_util.m"
                                  ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenJump_37, &ll_backend__opt_util__V_53_53, &ll_backend__opt_util__BetweenFalse0_40);
                                }
#line 15677 "ll_backend.opt_util.c"
                                ll_backend__opt_util__TypeInfo_59_59 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
#line 580 "opt_util.m"
                                {
#line 580 "opt_util.m"
                                  ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_59_59, ((MR_Box) (ll_backend__opt_util__V_33_33)), ((MR_Box) (ll_backend__opt_util__V_53_53)));
                                }
#line 584 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 584 "opt_util.m"
                                  {
#line 581 "opt_util.m"
                                    {
#line 581 "opt_util.m"
                                      ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenFalse0_40, ll_backend__opt_util__Between_6);
                                    }
#line 582 "opt_util.m"
                                    ll_backend__opt_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "opt_util.m"
                                    ll_backend__opt_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__opt_util_scalar_common_3[2]);
#line 582 "opt_util.m"
                                    {
#line 582 "opt_util.m"
                                      ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__opt_util__BetweenFall_38, &ll_backend__opt_util__V_54_54, &ll_backend__opt_util__BetweenTrue0_39);
                                    }
#line 15702 "ll_backend.opt_util.c"
                                    ll_backend__opt_util__TypeInfo_60_60 = (MR_Word) &ll_backend__opt_util_scalar_common_1[3];
#line 582 "opt_util.m"
                                    {
#line 582 "opt_util.m"
                                      ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_60_60, ((MR_Box) (ll_backend__opt_util__V_35_35)), ((MR_Box) (ll_backend__opt_util__V_54_54)));
                                    }
#line 584 "opt_util.m"
                                    if (ll_backend__opt_util__succeeded)
#line 584 "opt_util.m"
                                      {
#line 583 "opt_util.m"
                                        {
#line 583 "opt_util.m"
                                          ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__opt_util__BetweenTrue0_39, &ll_backend__opt_util__V_55_55);
                                        }
#line 15718 "ll_backend.opt_util.c"
                                        ll_backend__opt_util__TypeInfo_61_61 = (MR_Word) &ll_backend__opt_util_scalar_common_1[0];
#line 583 "opt_util.m"
                                        {
#line 583 "opt_util.m"
                                          return ll_backend__opt_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__opt_util__TypeInfo_61_61, ((MR_Box) (*ll_backend__opt_util__Between_6)), ((MR_Box) (ll_backend__opt_util__V_55_55)));
                                        }
#line 584 "opt_util.m"
                                      }
#line 584 "opt_util.m"
                                  }
#line 584 "opt_util.m"
                              }
#line 584 "opt_util.m"
                          }
#line 575 "opt_util.m"
                      }
#line 584 "opt_util.m"
                  }
#line 575 "opt_util.m"
              }
#line 584 "opt_util.m"
          }
#line 563 "opt_util.m"
      }
#line 561 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 561 "opt_util.m"
  }
#line 131 "opt_util.m"
}

#line 121 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_succeed_next_2_p_0(
#line 121 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 121 "opt_util.m"
  MR_Word * ll_backend__opt_util__InstrsBetweenIncl_4)
#line 121 "opt_util.m"
{
#line 552 "opt_util.m"
  {
#line 552 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_5;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1_6;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs2_7;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs3_10;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr3_11;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__V_15_15;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__V_16_16;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__V_17_17;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__V_18_18;
#line 552 "opt_util.m"
    MR_Word ll_backend__opt_util__V_19_19;
#line 555 "opt_util.m"
    MR_String ll_backend__opt_util__V_9_9;
#line 555 "opt_util.m"
    MR_Word ll_backend__opt_util__V_8_8;
#line 557 "opt_util.m"
    MR_Word ll_backend__opt_util__V_12_12;
#line 558 "opt_util.m"
    MR_String ll_backend__opt_util__V_14_14;
#line 558 "opt_util.m"
    MR_Word ll_backend__opt_util__V_13_13;

#line 553 "opt_util.m"
    {
#line 553 "opt_util.m"
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__Instrs1_5);
    }
#line 554 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_5)) == (MR_mktag((MR_Integer) 1)));
#line 554 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 554 "opt_util.m"
      {
#line 554 "opt_util.m"
        ll_backend__opt_util__Instr1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 0)));
#line 554 "opt_util.m"
        ll_backend__opt_util__Instrs2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 1)));
#line 555 "opt_util.m"
        ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 0)));
#line 555 "opt_util.m"
        ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 1)));
#line 555 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_15_15)) == (MR_mktag((MR_Integer) 2)));
#line 555 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 555 "opt_util.m"
          {
#line 555 "opt_util.m"
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_15_15, (MR_Integer) 0)));
#line 556 "opt_util.m"
            {
#line 556 "opt_util.m"
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_7, &ll_backend__opt_util__Instrs3_10);
            }
#line 557 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_10)) == (MR_mktag((MR_Integer) 1)));
#line 557 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 557 "opt_util.m"
              {
#line 557 "opt_util.m"
                ll_backend__opt_util__Instr3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_10, (MR_Integer) 0)));
#line 557 "opt_util.m"
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_10, (MR_Integer) 1)));
#line 558 "opt_util.m"
                ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_11, (MR_Integer) 0)));
#line 558 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_11, (MR_Integer) 1)));
#line 558 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 558 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 558 "opt_util.m"
                  {
#line 558 "opt_util.m"
                    ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
#line 558 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 558 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 558 "opt_util.m"
                      {
#line 558 "opt_util.m"
                        ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 1)));
#line 559 "opt_util.m"
                        ll_backend__opt_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "opt_util.m"
                        {
#line 559 "opt_util.m"
                          ll_backend__opt_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "opt_util.m"
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, 0) = ((MR_Box) (ll_backend__opt_util__Instr3_11));
#line 559 "opt_util.m"
                          MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_18_18, 1) = ((MR_Box) (ll_backend__opt_util__V_19_19));
#line 559 "opt_util.m"
                        }
#line 559 "opt_util.m"
                        {
#line 559 "opt_util.m"
                          MR_Word base;
#line 559 "opt_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "opt_util.m"
                          *ll_backend__opt_util__InstrsBetweenIncl_4 = base;
#line 559 "opt_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1_6));
#line 559 "opt_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_18_18));
#line 559 "opt_util.m"
                        }
#line 559 "opt_util.m"
                        ll_backend__opt_util__succeeded = MR_TRUE;
#line 558 "opt_util.m"
                      }
#line 558 "opt_util.m"
                  }
#line 557 "opt_util.m"
              }
#line 555 "opt_util.m"
          }
#line 554 "opt_util.m"
      }
#line 552 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 552 "opt_util.m"
  }
#line 121 "opt_util.m"
}

#line 114 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(
#line 114 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 114 "opt_util.m"
  MR_Word * ll_backend__opt_util__InstrsBetween_5,
#line 114 "opt_util.m"
  MR_Word * ll_backend__opt_util__Success_6)
#line 114 "opt_util.m"
{
#line 517 "opt_util.m"
  {
#line 517 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_7;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1_8;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs2_9;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1use_12;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs3_13;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr3_14;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs4_15;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr3use_18;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs5_19;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr5_20;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs6_21;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__R1val_22;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs7_24;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr7_25;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs8_26;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs9_29;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr9_30;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_44_44;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_45_45;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_46_46;
#line 517 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_47_47;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_48_48;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_49_49;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_50_50;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_51_51;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_52_52;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_53_53;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_54_54;
#line 517 "opt_util.m"
    MR_Word ll_backend__opt_util__V_55_55;
#line 520 "opt_util.m"
    MR_Word ll_backend__opt_util__V_33_33;
#line 520 "opt_util.m"
    MR_Word ll_backend__opt_util__V_34_34;
#line 520 "opt_util.m"
    MR_Word ll_backend__opt_util__V_35_35;
#line 520 "opt_util.m"
    MR_Word ll_backend__opt_util__V_36_36;
#line 520 "opt_util.m"
    MR_String ll_backend__opt_util__V_11_11;
#line 520 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_10_10;
#line 528 "opt_util.m"
    MR_Word ll_backend__opt_util__V_40_40;
#line 528 "opt_util.m"
    MR_String ll_backend__opt_util__V_17_17;
#line 528 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_16_16;
#line 536 "opt_util.m"
    MR_String ll_backend__opt_util__V_23_23;
#line 546 "opt_util.m"
    MR_String ll_backend__opt_util__V_28_28;
#line 546 "opt_util.m"
    MR_Word ll_backend__opt_util__V_27_27;
#line 548 "opt_util.m"
    MR_Word ll_backend__opt_util__V_31_31;
#line 549 "opt_util.m"
    MR_String ll_backend__opt_util__V_32_32;

#line 518 "opt_util.m"
    {
#line 518 "opt_util.m"
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_7);
    }
#line 519 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_7)) == (MR_mktag((MR_Integer) 1)));
#line 519 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 519 "opt_util.m"
      {
#line 519 "opt_util.m"
        ll_backend__opt_util__Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 0)));
#line 519 "opt_util.m"
        ll_backend__opt_util__Instrs2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_7, (MR_Integer) 1)));
#line 520 "opt_util.m"
        ll_backend__opt_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 0)));
#line 520 "opt_util.m"
        ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_8, (MR_Integer) 1)));
#line 520 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 520 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 520 "opt_util.m"
          {
#line 520 "opt_util.m"
            ll_backend__opt_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 1)));
#line 520 "opt_util.m"
            ll_backend__opt_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 2)));
#line 520 "opt_util.m"
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 520 "opt_util.m"
              {
#line 520 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 520 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 520 "opt_util.m"
                  {
#line 520 "opt_util.m"
                    ll_backend__opt_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_35_35, (MR_Integer) 0)));
#line 520 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 520 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 520 "opt_util.m"
                      ll_backend__opt_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_36_36, (MR_Integer) 1)));
#line 520 "opt_util.m"
                  }
#line 520 "opt_util.m"
              }
#line 520 "opt_util.m"
          }
#line 523 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 521 "opt_util.m"
          {
#line 521 "opt_util.m"
            ll_backend__opt_util__Instr1use_12 = ll_backend__opt_util__Instr1_8;
#line 522 "opt_util.m"
            {
#line 522 "opt_util.m"
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_9, &ll_backend__opt_util__Instrs3_13);
            }
#line 521 "opt_util.m"
          }
#line 523 "opt_util.m"
        else
#line 524 "opt_util.m"
          {
#line 524 "opt_util.m"
            ll_backend__opt_util__Instr1use_12 = (MR_Word) &ll_backend__opt_util_scalar_common_1[4];
#line 525 "opt_util.m"
            ll_backend__opt_util__Instrs3_13 = ll_backend__opt_util__Instrs1_7;
#line 524 "opt_util.m"
          }
#line 527 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_13)) == (MR_mktag((MR_Integer) 1)));
#line 527 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 527 "opt_util.m"
          {
#line 527 "opt_util.m"
            ll_backend__opt_util__Instr3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_13, (MR_Integer) 0)));
#line 527 "opt_util.m"
            ll_backend__opt_util__Instrs4_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_13, (MR_Integer) 1)));
#line 528 "opt_util.m"
            ll_backend__opt_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_14, (MR_Integer) 0)));
#line 528 "opt_util.m"
            ll_backend__opt_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_14, (MR_Integer) 1)));
#line 528 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 528 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 528 "opt_util.m"
              {
#line 528 "opt_util.m"
                ll_backend__opt_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_40_40, (MR_Integer) 1)));
#line 529 "opt_util.m"
                ll_backend__opt_util__Instr3use_18 = ll_backend__opt_util__Instr3_14;
#line 530 "opt_util.m"
                {
#line 530 "opt_util.m"
                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs4_15, &ll_backend__opt_util__Instrs5_19);
                }
#line 528 "opt_util.m"
              }
#line 528 "opt_util.m"
            else
#line 532 "opt_util.m"
              {
#line 532 "opt_util.m"
                ll_backend__opt_util__Instr3use_18 = (MR_Word) &ll_backend__opt_util_scalar_common_1[5];
#line 533 "opt_util.m"
                ll_backend__opt_util__Instrs5_19 = ll_backend__opt_util__Instrs3_13;
#line 532 "opt_util.m"
              }
#line 535 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs5_19)) == (MR_mktag((MR_Integer) 1)));
#line 535 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 535 "opt_util.m"
              {
#line 535 "opt_util.m"
                ll_backend__opt_util__Instr5_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_19, (MR_Integer) 0)));
#line 535 "opt_util.m"
                ll_backend__opt_util__Instrs6_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_19, (MR_Integer) 1)));
#line 536 "opt_util.m"
                ll_backend__opt_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_20, (MR_Integer) 0)));
#line 536 "opt_util.m"
                ll_backend__opt_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_20, (MR_Integer) 1)));
#line 536 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 536 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 536 "opt_util.m"
                  {
#line 536 "opt_util.m"
                    ll_backend__opt_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 1)));
#line 536 "opt_util.m"
                    ll_backend__opt_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_44_44, (MR_Integer) 2)));
#line 536 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 536 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 536 "opt_util.m"
                      {
#line 536 "opt_util.m"
                        ll_backend__opt_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_45_45, (MR_Integer) 0)));
#line 536 "opt_util.m"
                        ll_backend__opt_util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_45_45, (MR_Integer) 1)));
#line 536 "opt_util.m"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_46_46 == (MR_Integer) 0);
#line 517 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 517 "opt_util.m"
                          {
#line 536 "opt_util.m"
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_47_47 == (MR_Integer) 1);
#line 517 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 517 "opt_util.m"
                              {
#line 536 "opt_util.m"
                                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 536 "opt_util.m"
                                if (ll_backend__opt_util__succeeded)
#line 536 "opt_util.m"
                                  {
#line 536 "opt_util.m"
                                    ll_backend__opt_util__R1val_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_48_48, (MR_Integer) 1)));
#line 540 "opt_util.m"
                                    if ((ll_backend__opt_util__R1val_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 542 "opt_util.m"
                                      {
#line 542 "opt_util.m"
                                        *ll_backend__opt_util__Success_6 = (MR_Integer) 0;
#line 542 "opt_util.m"
                                        ll_backend__opt_util__succeeded = MR_TRUE;
#line 542 "opt_util.m"
                                      }
#line 540 "opt_util.m"
                                    else
#line 540 "opt_util.m"
                                      if ((ll_backend__opt_util__R1val_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "opt_util.m"
                                        {
#line 539 "opt_util.m"
                                          *ll_backend__opt_util__Success_6 = (MR_Integer) 1;
#line 539 "opt_util.m"
                                          ll_backend__opt_util__succeeded = MR_TRUE;
#line 539 "opt_util.m"
                                        }
#line 540 "opt_util.m"
                                      else
#line 540 "opt_util.m"
                                        ll_backend__opt_util__succeeded = MR_FALSE;
#line 517 "opt_util.m"
                                    if (ll_backend__opt_util__succeeded)
#line 517 "opt_util.m"
                                      {
#line 544 "opt_util.m"
                                        {
#line 544 "opt_util.m"
                                          ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs6_21, &ll_backend__opt_util__Instrs7_24);
                                        }
#line 545 "opt_util.m"
                                        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs7_24)) == (MR_mktag((MR_Integer) 1)));
#line 545 "opt_util.m"
                                        if (ll_backend__opt_util__succeeded)
#line 545 "opt_util.m"
                                          {
#line 545 "opt_util.m"
                                            ll_backend__opt_util__Instr7_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_24, (MR_Integer) 0)));
#line 545 "opt_util.m"
                                            ll_backend__opt_util__Instrs8_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_24, (MR_Integer) 1)));
#line 546 "opt_util.m"
                                            ll_backend__opt_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_25, (MR_Integer) 0)));
#line 546 "opt_util.m"
                                            ll_backend__opt_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_25, (MR_Integer) 1)));
#line 546 "opt_util.m"
                                            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 546 "opt_util.m"
                                            if (ll_backend__opt_util__succeeded)
#line 546 "opt_util.m"
                                              {
#line 546 "opt_util.m"
                                                ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_49_49, (MR_Integer) 0)));
#line 547 "opt_util.m"
                                                {
#line 547 "opt_util.m"
                                                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs8_26, &ll_backend__opt_util__Instrs9_29);
                                                }
#line 548 "opt_util.m"
                                                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs9_29)) == (MR_mktag((MR_Integer) 1)));
#line 548 "opt_util.m"
                                                if (ll_backend__opt_util__succeeded)
#line 548 "opt_util.m"
                                                  {
#line 548 "opt_util.m"
                                                    ll_backend__opt_util__Instr9_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs9_29, (MR_Integer) 0)));
#line 548 "opt_util.m"
                                                    ll_backend__opt_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs9_29, (MR_Integer) 1)));
#line 549 "opt_util.m"
                                                    ll_backend__opt_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr9_30, (MR_Integer) 0)));
#line 549 "opt_util.m"
                                                    ll_backend__opt_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr9_30, (MR_Integer) 1)));
#line 549 "opt_util.m"
                                                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 549 "opt_util.m"
                                                    if (ll_backend__opt_util__succeeded)
#line 549 "opt_util.m"
                                                      {
#line 549 "opt_util.m"
                                                        ll_backend__opt_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_50_50, (MR_Integer) 1)));
#line 549 "opt_util.m"
                                                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "opt_util.m"
                                                        if (ll_backend__opt_util__succeeded)
#line 517 "opt_util.m"
                                                          {
#line 550 "opt_util.m"
                                                            ll_backend__opt_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "opt_util.m"
                                                            {
#line 550 "opt_util.m"
                                                              ll_backend__opt_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_54_54, 0) = ((MR_Box) (ll_backend__opt_util__Instr7_25));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_54_54, 1) = ((MR_Box) (ll_backend__opt_util__V_55_55));
#line 550 "opt_util.m"
                                                            }
#line 550 "opt_util.m"
                                                            {
#line 550 "opt_util.m"
                                                              ll_backend__opt_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_53_53, 0) = ((MR_Box) (ll_backend__opt_util__Instr5_20));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_53_53, 1) = ((MR_Box) (ll_backend__opt_util__V_54_54));
#line 550 "opt_util.m"
                                                            }
#line 550 "opt_util.m"
                                                            {
#line 550 "opt_util.m"
                                                              ll_backend__opt_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_52_52, 0) = ((MR_Box) (ll_backend__opt_util__Instr3use_18));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_52_52, 1) = ((MR_Box) (ll_backend__opt_util__V_53_53));
#line 550 "opt_util.m"
                                                            }
#line 550 "opt_util.m"
                                                            {
#line 550 "opt_util.m"
                                                              MR_Word base;
#line 550 "opt_util.m"
                                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "opt_util.m"
                                                              *ll_backend__opt_util__InstrsBetween_5 = base;
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1use_12));
#line 550 "opt_util.m"
                                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_52_52));
#line 550 "opt_util.m"
                                                            }
#line 550 "opt_util.m"
                                                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 517 "opt_util.m"
                                                          }
#line 549 "opt_util.m"
                                                      }
#line 548 "opt_util.m"
                                                  }
#line 546 "opt_util.m"
                                              }
#line 545 "opt_util.m"
                                          }
#line 517 "opt_util.m"
                                      }
#line 536 "opt_util.m"
                                  }
#line 517 "opt_util.m"
                              }
#line 517 "opt_util.m"
                          }
#line 536 "opt_util.m"
                      }
#line 536 "opt_util.m"
                  }
#line 535 "opt_util.m"
              }
#line 527 "opt_util.m"
          }
#line 519 "opt_util.m"
      }
#line 517 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 517 "opt_util.m"
  }
#line 114 "opt_util.m"
}

#line 108 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_sdproceed_next_2_p_0(
#line 108 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 108 "opt_util.m"
  MR_Word * ll_backend__opt_util__InstrsBetween_4)
#line 108 "opt_util.m"
{
#line 515 "opt_util.m"
  {
#line 515 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 515 "opt_util.m"
    MR_Word ll_backend__opt_util__V_5_5;

#line 515 "opt_util.m"
    {
#line 515 "opt_util.m"
      ll_backend__opt_util__succeeded = ll_backend__opt_util__is_sdproceed_next_sf_3_p_0(ll_backend__opt_util__Instrs0_3, ll_backend__opt_util__InstrsBetween_4, &ll_backend__opt_util__V_5_5);
    }
#line 515 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 515 "opt_util.m"
  }
#line 108 "opt_util.m"
}

#line 100 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_proceed_next_2_p_0(
#line 100 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 100 "opt_util.m"
  MR_Word * ll_backend__opt_util__InstrsBetween_4)
#line 100 "opt_util.m"
{
#line 489 "opt_util.m"
  {
#line 489 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_5;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1_6;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs2_7;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1use_10;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs3_11;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr3_12;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs4_13;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr3use_16;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs5_17;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr5_18;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs6_19;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs7_22;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr7_23;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_37_37;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_38_38;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_39_39;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_40_40;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_41_41;
#line 489 "opt_util.m"
    MR_Word ll_backend__opt_util__V_42_42;
#line 492 "opt_util.m"
    MR_Word ll_backend__opt_util__V_26_26;
#line 492 "opt_util.m"
    MR_Word ll_backend__opt_util__V_27_27;
#line 492 "opt_util.m"
    MR_Word ll_backend__opt_util__V_28_28;
#line 492 "opt_util.m"
    MR_Word ll_backend__opt_util__V_29_29;
#line 492 "opt_util.m"
    MR_String ll_backend__opt_util__V_9_9;
#line 492 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_8_8;
#line 500 "opt_util.m"
    MR_Word ll_backend__opt_util__V_33_33;
#line 500 "opt_util.m"
    MR_String ll_backend__opt_util__V_15_15;
#line 500 "opt_util.m"
    MR_Integer ll_backend__opt_util__V_14_14;
#line 508 "opt_util.m"
    MR_String ll_backend__opt_util__V_21_21;
#line 508 "opt_util.m"
    MR_Word ll_backend__opt_util__V_20_20;
#line 510 "opt_util.m"
    MR_Word ll_backend__opt_util__V_24_24;
#line 511 "opt_util.m"
    MR_String ll_backend__opt_util__V_25_25;

#line 490 "opt_util.m"
    {
#line 490 "opt_util.m"
      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs0_3, &ll_backend__opt_util__Instrs1_5);
    }
#line 491 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_5)) == (MR_mktag((MR_Integer) 1)));
#line 491 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 491 "opt_util.m"
      {
#line 491 "opt_util.m"
        ll_backend__opt_util__Instr1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 0)));
#line 491 "opt_util.m"
        ll_backend__opt_util__Instrs2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_5, (MR_Integer) 1)));
#line 492 "opt_util.m"
        ll_backend__opt_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 0)));
#line 492 "opt_util.m"
        ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_6, (MR_Integer) 1)));
#line 492 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 492 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 492 "opt_util.m"
          {
#line 492 "opt_util.m"
            ll_backend__opt_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 1)));
#line 492 "opt_util.m"
            ll_backend__opt_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_26_26, (MR_Integer) 2)));
#line 492 "opt_util.m"
            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 492 "opt_util.m"
              {
#line 492 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 492 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 492 "opt_util.m"
                  {
#line 492 "opt_util.m"
                    ll_backend__opt_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_28_28, (MR_Integer) 0)));
#line 492 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 492 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 492 "opt_util.m"
                      ll_backend__opt_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_29_29, (MR_Integer) 1)));
#line 492 "opt_util.m"
                  }
#line 492 "opt_util.m"
              }
#line 492 "opt_util.m"
          }
#line 495 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 493 "opt_util.m"
          {
#line 493 "opt_util.m"
            ll_backend__opt_util__Instr1use_10 = ll_backend__opt_util__Instr1_6;
#line 494 "opt_util.m"
            {
#line 494 "opt_util.m"
              ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs2_7, &ll_backend__opt_util__Instrs3_11);
            }
#line 493 "opt_util.m"
          }
#line 495 "opt_util.m"
        else
#line 496 "opt_util.m"
          {
#line 496 "opt_util.m"
            ll_backend__opt_util__Instr1use_10 = (MR_Word) &ll_backend__opt_util_scalar_common_1[4];
#line 497 "opt_util.m"
            ll_backend__opt_util__Instrs3_11 = ll_backend__opt_util__Instrs1_5;
#line 496 "opt_util.m"
          }
#line 499 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs3_11)) == (MR_mktag((MR_Integer) 1)));
#line 499 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 499 "opt_util.m"
          {
#line 499 "opt_util.m"
            ll_backend__opt_util__Instr3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_11, (MR_Integer) 0)));
#line 499 "opt_util.m"
            ll_backend__opt_util__Instrs4_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs3_11, (MR_Integer) 1)));
#line 500 "opt_util.m"
            ll_backend__opt_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_12, (MR_Integer) 0)));
#line 500 "opt_util.m"
            ll_backend__opt_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr3_12, (MR_Integer) 1)));
#line 500 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 500 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 500 "opt_util.m"
              {
#line 500 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_33_33, (MR_Integer) 1)));
#line 501 "opt_util.m"
                ll_backend__opt_util__Instr3use_16 = ll_backend__opt_util__Instr3_12;
#line 502 "opt_util.m"
                {
#line 502 "opt_util.m"
                  ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs4_13, &ll_backend__opt_util__Instrs5_17);
                }
#line 500 "opt_util.m"
              }
#line 500 "opt_util.m"
            else
#line 504 "opt_util.m"
              {
#line 504 "opt_util.m"
                ll_backend__opt_util__Instr3use_16 = (MR_Word) &ll_backend__opt_util_scalar_common_1[5];
#line 505 "opt_util.m"
                ll_backend__opt_util__Instrs5_17 = ll_backend__opt_util__Instrs3_11;
#line 504 "opt_util.m"
              }
#line 507 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs5_17)) == (MR_mktag((MR_Integer) 1)));
#line 507 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 507 "opt_util.m"
              {
#line 507 "opt_util.m"
                ll_backend__opt_util__Instr5_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_17, (MR_Integer) 0)));
#line 507 "opt_util.m"
                ll_backend__opt_util__Instrs6_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs5_17, (MR_Integer) 1)));
#line 508 "opt_util.m"
                ll_backend__opt_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_18, (MR_Integer) 0)));
#line 508 "opt_util.m"
                ll_backend__opt_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr5_18, (MR_Integer) 1)));
#line 508 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_37_37)) == (MR_mktag((MR_Integer) 2)));
#line 508 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 508 "opt_util.m"
                  {
#line 508 "opt_util.m"
                    ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_37_37, (MR_Integer) 0)));
#line 509 "opt_util.m"
                    {
#line 509 "opt_util.m"
                      ll_backend__opt_util__skip_comments_labels_2_p_0(ll_backend__opt_util__Instrs6_19, &ll_backend__opt_util__Instrs7_22);
                    }
#line 510 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs7_22)) == (MR_mktag((MR_Integer) 1)));
#line 510 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 510 "opt_util.m"
                      {
#line 510 "opt_util.m"
                        ll_backend__opt_util__Instr7_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_22, (MR_Integer) 0)));
#line 510 "opt_util.m"
                        ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs7_22, (MR_Integer) 1)));
#line 511 "opt_util.m"
                        ll_backend__opt_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_23, (MR_Integer) 0)));
#line 511 "opt_util.m"
                        ll_backend__opt_util__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr7_23, (MR_Integer) 1)));
#line 511 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 511 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 511 "opt_util.m"
                          {
#line 511 "opt_util.m"
                            ll_backend__opt_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_38_38, (MR_Integer) 1)));
#line 511 "opt_util.m"
                            ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 489 "opt_util.m"
                              {
#line 512 "opt_util.m"
                                ll_backend__opt_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "opt_util.m"
                                {
#line 512 "opt_util.m"
                                  ll_backend__opt_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_41_41, 0) = ((MR_Box) (ll_backend__opt_util__Instr5_18));
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_41_41, 1) = ((MR_Box) (ll_backend__opt_util__V_42_42));
#line 512 "opt_util.m"
                                }
#line 512 "opt_util.m"
                                {
#line 512 "opt_util.m"
                                  ll_backend__opt_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_40_40, 0) = ((MR_Box) (ll_backend__opt_util__Instr3use_16));
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_40_40, 1) = ((MR_Box) (ll_backend__opt_util__V_41_41));
#line 512 "opt_util.m"
                                }
#line 512 "opt_util.m"
                                {
#line 512 "opt_util.m"
                                  MR_Word base;
#line 512 "opt_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "opt_util.m"
                                  *ll_backend__opt_util__InstrsBetween_4 = base;
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr1use_10));
#line 512 "opt_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__V_40_40));
#line 512 "opt_util.m"
                                }
#line 512 "opt_util.m"
                                ll_backend__opt_util__succeeded = MR_TRUE;
#line 489 "opt_util.m"
                              }
#line 511 "opt_util.m"
                          }
#line 510 "opt_util.m"
                      }
#line 508 "opt_util.m"
                  }
#line 507 "opt_util.m"
              }
#line 499 "opt_util.m"
          }
#line 491 "opt_util.m"
      }
#line 489 "opt_util.m"
    return ll_backend__opt_util__succeeded;
#line 489 "opt_util.m"
  }
#line 100 "opt_util.m"
}

#line 92 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__is_this_label_next_3_p_0(
#line 92 "opt_util.m"
  MR_Word ll_backend__opt_util__Label_4,
#line 92 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__2_2,
#line 92 "opt_util.m"
  MR_Word * ll_backend__opt_util__Remainder_7)
#line 92 "opt_util.m"
{
#line 472 "opt_util.m"
  while (MR_TRUE)
#line 472 "opt_util.m"
    {
#line 472 "opt_util.m"
      /* tailcall optimized into a loop */
#line 472 "opt_util.m"
      {
#line 472 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 472 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr_5;
#line 472 "opt_util.m"
        MR_Word ll_backend__opt_util__Moreinstr_6;
#line 472 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr_8;
#line 473 "opt_util.m"
        MR_String ll_backend__opt_util___Comment_9;
#line 474 "opt_util.m"
        MR_String ll_backend__opt_util__V_10_10;

#line 472 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 472 "opt_util.m"
          {
#line 472 "opt_util.m"
            ll_backend__opt_util__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__2_2, (MR_Integer) 0)));
#line 472 "opt_util.m"
            ll_backend__opt_util__Moreinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__2_2, (MR_Integer) 1)));
#line 473 "opt_util.m"
            ll_backend__opt_util__Uinstr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_5, (MR_Integer) 0)));
#line 473 "opt_util.m"
            ll_backend__opt_util___Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_5, (MR_Integer) 1)));
#line 474 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 1)));
#line 474 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 474 "opt_util.m"
              {
#line 474 "opt_util.m"
                ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)));
#line 475 "opt_util.m"
                /* direct tailcall eliminated */
#line 475 "opt_util.m"
                {
#line 475 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

#line 475 "opt_util.m"
                  ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
#line 475 "opt_util.m"
                }
#line 475 "opt_util.m"
                continue;
#line 474 "opt_util.m"
              }
#line 474 "opt_util.m"
            else
#line 479 "opt_util.m"
              {
#line 476 "opt_util.m"
                MR_Word ll_backend__opt_util__V_11_11;

#line 476 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 2)));
#line 476 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 476 "opt_util.m"
                  {
#line 476 "opt_util.m"
                    ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)));
#line 478 "opt_util.m"
                    /* direct tailcall eliminated */
#line 478 "opt_util.m"
                    {
#line 478 "opt_util.m"
                      MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

#line 478 "opt_util.m"
                      ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
#line 478 "opt_util.m"
                    }
#line 478 "opt_util.m"
                    continue;
#line 476 "opt_util.m"
                  }
#line 476 "opt_util.m"
                else
#line 485 "opt_util.m"
                  {
#line 485 "opt_util.m"
                    MR_Word ll_backend__opt_util__NextLabel_12;

#line 479 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 479 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 479 "opt_util.m"
                      {
#line 479 "opt_util.m"
                        ll_backend__opt_util__NextLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_8, (MR_Integer) 1)));
#line 480 "opt_util.m"
                        {
#line 480 "opt_util.m"
                          ll_backend__opt_util__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__opt_util__Label_4, ll_backend__opt_util__NextLabel_12);
                        }
#line 482 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 481 "opt_util.m"
                          {
#line 481 "opt_util.m"
                            *ll_backend__opt_util__Remainder_7 = ll_backend__opt_util__Moreinstr_6;
#line 481 "opt_util.m"
                            ll_backend__opt_util__succeeded = MR_TRUE;
#line 481 "opt_util.m"
                          }
#line 482 "opt_util.m"
                        else
#line 483 "opt_util.m"
                          {
#line 483 "opt_util.m"
                            /* direct tailcall eliminated */
#line 483 "opt_util.m"
                            {
#line 483 "opt_util.m"
                              MR_Word ll_backend__opt_util__HeadVar__2__tmp_copy_2 = ll_backend__opt_util__Moreinstr_6;

#line 483 "opt_util.m"
                              ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__HeadVar__2__tmp_copy_2;
#line 483 "opt_util.m"
                            }
#line 483 "opt_util.m"
                            continue;
#line 483 "opt_util.m"
                          }
#line 479 "opt_util.m"
                      }
#line 485 "opt_util.m"
                  }
#line 479 "opt_util.m"
              }
#line 472 "opt_util.m"
          }
#line 472 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 472 "opt_util.m"
      }
#line 472 "opt_util.m"
      break;
#line 472 "opt_util.m"
    }
#line 92 "opt_util.m"
}

#line 86 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__skip_to_next_label_3_p_0(
#line 86 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 86 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2,
#line 86 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__3_3)
#line 86 "opt_util.m"
{
#line 462 "opt_util.m"
  {
#line 462 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 462 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "opt_util.m"
      {
#line 462 "opt_util.m"
        *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "opt_util.m"
        *ll_backend__opt_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "opt_util.m"
      }
#line 462 "opt_util.m"
    else
#line 463 "opt_util.m"
      {
#line 463 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 464 "opt_util.m"
        MR_Word ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 0)));
#line 464 "opt_util.m"
        MR_String ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_4, (MR_Integer) 1)));
#line 464 "opt_util.m"
        MR_Word ll_backend__opt_util__V_8_8;

#line 464 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 464 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 464 "opt_util.m"
          {
#line 464 "opt_util.m"
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_11_11, (MR_Integer) 1)));
#line 465 "opt_util.m"
            *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "opt_util.m"
            *ll_backend__opt_util__HeadVar__3_3 = ll_backend__opt_util__HeadVar__1_1;
#line 464 "opt_util.m"
          }
#line 464 "opt_util.m"
        else
#line 468 "opt_util.m"
          {
#line 468 "opt_util.m"
            MR_Word ll_backend__opt_util__Before1_10;

#line 468 "opt_util.m"
            {
#line 468 "opt_util.m"
              ll_backend__opt_util__skip_to_next_label_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Before1_10, ll_backend__opt_util__HeadVar__3_3);
            }
#line 469 "opt_util.m"
            {
#line 469 "opt_util.m"
              MR_Word base;
#line 469 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = base;
#line 469 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_4));
#line 469 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Before1_10));
#line 469 "opt_util.m"
            }
#line 468 "opt_util.m"
          }
#line 463 "opt_util.m"
      }
#line 462 "opt_util.m"
  }
#line 86 "opt_util.m"
}

#line 81 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__find_first_label_2_p_0(
#line 81 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 81 "opt_util.m"
  MR_Word * ll_backend__opt_util__Label_2)
#line 81 "opt_util.m"
{
#line 453 "opt_util.m"
  while (MR_TRUE)
#line 453 "opt_util.m"
    {
#line 453 "opt_util.m"
      /* tailcall optimized into a loop */
#line 453 "opt_util.m"
      {
#line 453 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;

#line 453 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "opt_util.m"
          {
#line 454 "opt_util.m"
            {
#line 454 "opt_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.find_first_label\'/2", (MR_String) "cannot find first label");
#line 454 "opt_util.m"
              return;
            }
#line 453 "opt_util.m"
          }
#line 453 "opt_util.m"
        else
#line 455 "opt_util.m"
          {
#line 455 "opt_util.m"
            MR_Word ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "opt_util.m"
            MR_Word ll_backend__opt_util__LabelPrime_10;
#line 456 "opt_util.m"
            MR_Word ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
#line 456 "opt_util.m"
            MR_String ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));

#line 456 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 456 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 456 "opt_util.m"
              {
#line 456 "opt_util.m"
                ll_backend__opt_util__LabelPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
#line 457 "opt_util.m"
                *ll_backend__opt_util__Label_2 = ll_backend__opt_util__LabelPrime_10;
#line 456 "opt_util.m"
              }
#line 456 "opt_util.m"
            else
#line 459 "opt_util.m"
              {
#line 459 "opt_util.m"
                /* direct tailcall eliminated */
#line 459 "opt_util.m"
                {
#line 459 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs0_8;

#line 459 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 459 "opt_util.m"
                }
#line 459 "opt_util.m"
                continue;
#line 459 "opt_util.m"
              }
#line 455 "opt_util.m"
          }
#line 453 "opt_util.m"
      }
#line 453 "opt_util.m"
      break;
#line 453 "opt_util.m"
    }
#line 81 "opt_util.m"
}

#line 76 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__find_no_fallthrough_2_p_0(
#line 76 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 76 "opt_util.m"
  MR_Word * ll_backend__opt_util__HeadVar__2_2)
#line 76 "opt_util.m"
{
#line 441 "opt_util.m"
  {
#line 441 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;

#line 441 "opt_util.m"
    if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "opt_util.m"
      *ll_backend__opt_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "opt_util.m"
    else
#line 442 "opt_util.m"
      {
#line 442 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 0)));
#line 444 "opt_util.m"
        MR_Word ll_backend__opt_util__V_9_9;
#line 444 "opt_util.m"
        MR_String ll_backend__opt_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_3, (MR_Integer) 1)));

#line 445 "opt_util.m"
        {
#line 445 "opt_util.m"
          ll_backend__opt_util__V_9_9 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__opt_util__Uinstr0_6);
        }
#line 445 "opt_util.m"
        ll_backend__opt_util__succeeded = (ll_backend__opt_util__V_9_9 == (MR_Integer) 0);
#line 448 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 447 "opt_util.m"
          {
#line 447 "opt_util.m"
            {
#line 447 "opt_util.m"
              MR_Word base;
#line 447 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = base;
#line 447 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 447 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "opt_util.m"
            }
#line 447 "opt_util.m"
          }
#line 448 "opt_util.m"
        else
#line 449 "opt_util.m"
          {
#line 449 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs1_8;

#line 449 "opt_util.m"
            {
#line 449 "opt_util.m"
              ll_backend__opt_util__find_no_fallthrough_2_p_0(ll_backend__opt_util__Instrs0_4, &ll_backend__opt_util__Instrs1_8);
            }
#line 450 "opt_util.m"
            {
#line 450 "opt_util.m"
              MR_Word base;
#line 450 "opt_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "opt_util.m"
              *ll_backend__opt_util__HeadVar__2_2 = base;
#line 450 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_3));
#line 450 "opt_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Instrs1_8));
#line 450 "opt_util.m"
            }
#line 449 "opt_util.m"
          }
#line 442 "opt_util.m"
      }
#line 441 "opt_util.m"
  }
#line 76 "opt_util.m"
}

#line 71 "opt_util.m"
MR_Word MR_CALL 
ll_backend__opt_util__touches_nondet_ctrl_1_f_0(
#line 71 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1)
#line 71 "opt_util.m"
{
#line 1810 "opt_util.m"
  while (MR_TRUE)
#line 1810 "opt_util.m"
    {
#line 1810 "opt_util.m"
      /* tailcall optimized into a loop */
#line 1810 "opt_util.m"
      {
#line 1810 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded;
#line 1810 "opt_util.m"
        MR_Word ll_backend__opt_util__HeadVar__2_2;

#line 1810 "opt_util.m"
        if ((ll_backend__opt_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1810 "opt_util.m"
          ll_backend__opt_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1810 "opt_util.m"
        else
#line 1811 "opt_util.m"
          {
#line 1811 "opt_util.m"
            MR_Word ll_backend__opt_util__Uinstr_3;
#line 1811 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1811 "opt_util.m"
            MR_Word ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1811 "opt_util.m"
            MR_Word ll_backend__opt_util__STATE_VARIABLE_Touch_9_9;
#line 1811 "opt_util.m"
            MR_String ll_backend__opt_util__V_4_4;

#line 1811 "opt_util.m"
            ll_backend__opt_util__Uinstr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 0)));
#line 1811 "opt_util.m"
            ll_backend__opt_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 1)));
#line 1812 "opt_util.m"
            {
#line 1812 "opt_util.m"
              ll_backend__opt_util__STATE_VARIABLE_Touch_9_9 = ll_backend__opt_util__touches_nondet_ctrl_instr_1_f_0(ll_backend__opt_util__Uinstr_3);
            }
#line 1815 "opt_util.m"
            if ((ll_backend__opt_util__STATE_VARIABLE_Touch_9_9 == (MR_Integer) 0))
#line 1817 "opt_util.m"
              {
#line 1817 "opt_util.m"
                /* direct tailcall eliminated */
#line 1817 "opt_util.m"
                {
#line 1817 "opt_util.m"
                  MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_5;

#line 1817 "opt_util.m"
                  ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 1817 "opt_util.m"
                }
#line 1817 "opt_util.m"
                continue;
#line 1817 "opt_util.m"
              }
#line 1815 "opt_util.m"
            else
#line 1814 "opt_util.m"
              ll_backend__opt_util__HeadVar__2_2 = ll_backend__opt_util__STATE_VARIABLE_Touch_9_9;
#line 1811 "opt_util.m"
          }
#line 1810 "opt_util.m"
        return ll_backend__opt_util__HeadVar__2_2;
#line 1810 "opt_util.m"
      }
#line 1810 "opt_util.m"
      break;
#line 1810 "opt_util.m"
    }
#line 71 "opt_util.m"
}

#line 63 "opt_util.m"
MR_bool MR_CALL 
ll_backend__opt_util__next_assign_to_redoip_6_p_0(
#line 63 "opt_util.m"
  MR_Word ll_backend__opt_util__HeadVar__1_1,
#line 63 "opt_util.m"
  MR_Word ll_backend__opt_util__AllowedBases_9,
#line 63 "opt_util.m"
  MR_Word ll_backend__opt_util__RevSkip_10,
#line 63 "opt_util.m"
  MR_Word * ll_backend__opt_util__Redoip_11,
#line 63 "opt_util.m"
  MR_Word * ll_backend__opt_util__Skip_12,
#line 63 "opt_util.m"
  MR_Word * ll_backend__opt_util__Rest_13)
#line 63 "opt_util.m"
{
#line 410 "opt_util.m"
  while (MR_TRUE)
#line 410 "opt_util.m"
    {
#line 410 "opt_util.m"
      /* tailcall optimized into a loop */
#line 410 "opt_util.m"
      {
#line 410 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 410 "opt_util.m"
        MR_Word ll_backend__opt_util__Instr_7;
#line 410 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs_8;
#line 410 "opt_util.m"
        MR_Word ll_backend__opt_util__Uinstr_14;
#line 411 "opt_util.m"
        MR_String ll_backend__opt_util___Comment_15;
#line 420 "opt_util.m"
        MR_Word ll_backend__opt_util__Redoip0_17;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__TypeCtorInfo_27_27;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__Fr_16;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__V_22_22;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__V_23_23;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__V_24_24;
#line 414 "opt_util.m"
        MR_Word ll_backend__opt_util__V_25_25;

#line 410 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 410 "opt_util.m"
          {
#line 410 "opt_util.m"
            ll_backend__opt_util__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "opt_util.m"
            ll_backend__opt_util__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__HeadVar__1_1, (MR_Integer) 1)));
#line 411 "opt_util.m"
            ll_backend__opt_util__Uinstr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_7, (MR_Integer) 0)));
#line 411 "opt_util.m"
            ll_backend__opt_util___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr_7, (MR_Integer) 1)));
#line 413 "opt_util.m"
            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 413 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 413 "opt_util.m"
              {
#line 413 "opt_util.m"
                ll_backend__opt_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
#line 413 "opt_util.m"
                ll_backend__opt_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 2)));
#line 413 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 413 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 413 "opt_util.m"
                  {
#line 413 "opt_util.m"
                    ll_backend__opt_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_22_22, (MR_Integer) 1)));
#line 413 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 413 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 413 "opt_util.m"
                      {
#line 413 "opt_util.m"
                        ll_backend__opt_util__Fr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_23_23, (MR_Integer) 0)));
#line 413 "opt_util.m"
                        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_24_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_24_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 413 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 413 "opt_util.m"
                          {
#line 413 "opt_util.m"
                            ll_backend__opt_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_24_24, (MR_Integer) 1)));
#line 414 "opt_util.m"
                            ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 414 "opt_util.m"
                            if (ll_backend__opt_util__succeeded)
#line 414 "opt_util.m"
                              {
#line 414 "opt_util.m"
                                ll_backend__opt_util__Redoip0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_25_25, (MR_Integer) 1)));
#line 17316 "ll_backend.opt_util.c"
                                ll_backend__opt_util__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 415 "opt_util.m"
                                {
#line 415 "opt_util.m"
                                  ll_backend__opt_util__succeeded = mercury__list__member_2_p_0(ll_backend__opt_util__TypeCtorInfo_27_27, ((MR_Box) (ll_backend__opt_util__Fr_16)), ll_backend__opt_util__AllowedBases_9);
                                }
#line 414 "opt_util.m"
                              }
#line 413 "opt_util.m"
                          }
#line 413 "opt_util.m"
                      }
#line 413 "opt_util.m"
                  }
#line 413 "opt_util.m"
              }
#line 420 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 417 "opt_util.m"
              {
#line 417 "opt_util.m"
                *ll_backend__opt_util__Redoip_11 = ll_backend__opt_util__Redoip0_17;
#line 418 "opt_util.m"
                {
#line 418 "opt_util.m"
                  mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__RevSkip_10, ll_backend__opt_util__Skip_12);
                }
#line 419 "opt_util.m"
                *ll_backend__opt_util__Rest_13 = ll_backend__opt_util__Instrs_8;
#line 417 "opt_util.m"
                ll_backend__opt_util__succeeded = MR_TRUE;
#line 417 "opt_util.m"
              }
#line 420 "opt_util.m"
            else
#line 425 "opt_util.m"
              {
#line 421 "opt_util.m"
                MR_Word ll_backend__opt_util__V_18_18;
#line 421 "opt_util.m"
                MR_Word ll_backend__opt_util__V_19_19;

#line 421 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 421 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 421 "opt_util.m"
                  {
#line 421 "opt_util.m"
                    ll_backend__opt_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
#line 421 "opt_util.m"
                    ll_backend__opt_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 2)));
#line 423 "opt_util.m"
                    ll_backend__opt_util__succeeded = MR_FALSE;
#line 421 "opt_util.m"
                  }
#line 421 "opt_util.m"
                else
#line 429 "opt_util.m"
                  {
#line 426 "opt_util.m"
                    MR_Word ll_backend__opt_util__V_20_20;

#line 426 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__Uinstr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 426 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 426 "opt_util.m"
                      {
#line 426 "opt_util.m"
                        ll_backend__opt_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__Uinstr_14, (MR_Integer) 1)));
#line 428 "opt_util.m"
                        ll_backend__opt_util__succeeded = MR_FALSE;
#line 426 "opt_util.m"
                      }
#line 426 "opt_util.m"
                    else
#line 430 "opt_util.m"
                      {
#line 430 "opt_util.m"
                        MR_Word ll_backend__opt_util__CanBranchAway_21;
#line 430 "opt_util.m"
                        MR_Word ll_backend__opt_util__V_26_26;

#line 430 "opt_util.m"
                        {
#line 430 "opt_util.m"
                          ll_backend__opt_util__CanBranchAway_21 = ll_backend__opt_util__can_instr_branch_away_1_f_0(ll_backend__opt_util__Uinstr_14);
                        }
#line 17406 "ll_backend.opt_util.c"
                        ll_backend__opt_util__succeeded = (ll_backend__opt_util__CanBranchAway_21 == (MR_Integer) 0);
#line 430 "opt_util.m"
                        if (ll_backend__opt_util__succeeded)
#line 430 "opt_util.m"
                          {
#line 433 "opt_util.m"
                            {
#line 433 "opt_util.m"
                              ll_backend__opt_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "opt_util.m"
                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_26_26, 0) = ((MR_Box) (ll_backend__opt_util__Instr_7));
#line 433 "opt_util.m"
                              MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_26_26, 1) = ((MR_Box) (ll_backend__opt_util__RevSkip_10));
#line 433 "opt_util.m"
                            }
#line 433 "opt_util.m"
                            /* direct tailcall eliminated */
#line 433 "opt_util.m"
                            {
#line 433 "opt_util.m"
                              MR_Word ll_backend__opt_util__HeadVar__1__tmp_copy_1 = ll_backend__opt_util__Instrs_8;
#line 433 "opt_util.m"
                              MR_Word ll_backend__opt_util__RevSkip__tmp_copy_10 = ll_backend__opt_util__V_26_26;

#line 433 "opt_util.m"
                              ll_backend__opt_util__RevSkip_10 = ll_backend__opt_util__RevSkip__tmp_copy_10;
#line 433 "opt_util.m"
                              ll_backend__opt_util__HeadVar__1_1 = ll_backend__opt_util__HeadVar__1__tmp_copy_1;
#line 433 "opt_util.m"
                            }
#line 433 "opt_util.m"
                            continue;
#line 430 "opt_util.m"
                          }
#line 430 "opt_util.m"
                      }
#line 429 "opt_util.m"
                  }
#line 425 "opt_util.m"
              }
#line 410 "opt_util.m"
          }
#line 410 "opt_util.m"
        return ll_backend__opt_util__succeeded;
#line 410 "opt_util.m"
      }
#line 410 "opt_util.m"
      break;
#line 410 "opt_util.m"
    }
#line 63 "opt_util.m"
}

#line 55 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_labels_2_p_0(
#line 55 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 55 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_4)
#line 55 "opt_util.m"
{
#line 401 "opt_util.m"
  while (MR_TRUE)
#line 401 "opt_util.m"
    {
#line 401 "opt_util.m"
      /* tailcall optimized into a loop */
#line 401 "opt_util.m"
      {
#line 401 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 401 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_7;
#line 399 "opt_util.m"
        MR_Word ll_backend__opt_util__V_12_12;
#line 399 "opt_util.m"
        MR_Word ll_backend__opt_util__V_13_13;
#line 399 "opt_util.m"
        MR_String ll_backend__opt_util__V_6_6;
#line 399 "opt_util.m"
        MR_String ll_backend__opt_util__V_5_5;

#line 399 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 399 "opt_util.m"
          {
#line 399 "opt_util.m"
            ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 399 "opt_util.m"
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 399 "opt_util.m"
            ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
#line 399 "opt_util.m"
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
#line 399 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 399 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 399 "opt_util.m"
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
#line 399 "opt_util.m"
          }
#line 401 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 400 "opt_util.m"
          {
#line 400 "opt_util.m"
            /* direct tailcall eliminated */
#line 400 "opt_util.m"
            {
#line 400 "opt_util.m"
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

#line 400 "opt_util.m"
              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 400 "opt_util.m"
            }
#line 400 "opt_util.m"
            continue;
#line 400 "opt_util.m"
          }
#line 401 "opt_util.m"
        else
#line 403 "opt_util.m"
          {
#line 403 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs1_19;
#line 401 "opt_util.m"
            MR_Word ll_backend__opt_util__V_14_14;
#line 401 "opt_util.m"
            MR_Word ll_backend__opt_util__V_15_15;
#line 401 "opt_util.m"
            MR_String ll_backend__opt_util__V_9_9;
#line 401 "opt_util.m"
            MR_Word ll_backend__opt_util__V_8_8;

#line 401 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 401 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 401 "opt_util.m"
              {
#line 401 "opt_util.m"
                ll_backend__opt_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 401 "opt_util.m"
                ll_backend__opt_util__Instrs1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 401 "opt_util.m"
                ll_backend__opt_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 0)));
#line 401 "opt_util.m"
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_14_14, (MR_Integer) 1)));
#line 401 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_15_15)) == (MR_mktag((MR_Integer) 2)));
#line 401 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 401 "opt_util.m"
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_15_15, (MR_Integer) 0)));
#line 401 "opt_util.m"
              }
#line 403 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 402 "opt_util.m"
              {
#line 402 "opt_util.m"
                /* direct tailcall eliminated */
#line 402 "opt_util.m"
                {
#line 402 "opt_util.m"
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_19;

#line 402 "opt_util.m"
                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 402 "opt_util.m"
                }
#line 402 "opt_util.m"
                continue;
#line 402 "opt_util.m"
              }
#line 403 "opt_util.m"
            else
#line 405 "opt_util.m"
              {
#line 405 "opt_util.m"
                MR_Word ll_backend__opt_util__Instrs1_18;
#line 403 "opt_util.m"
                MR_Word ll_backend__opt_util__V_16_16;
#line 403 "opt_util.m"
                MR_Word ll_backend__opt_util__V_17_17;
#line 403 "opt_util.m"
                MR_String ll_backend__opt_util__V_11_11;
#line 403 "opt_util.m"
                MR_Word ll_backend__opt_util__V_10_10;

#line 403 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 403 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 403 "opt_util.m"
                  {
#line 403 "opt_util.m"
                    ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 403 "opt_util.m"
                    ll_backend__opt_util__Instrs1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 403 "opt_util.m"
                    ll_backend__opt_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_16_16, (MR_Integer) 0)));
#line 403 "opt_util.m"
                    ll_backend__opt_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
#line 403 "opt_util.m"
                    ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 403 "opt_util.m"
                    if (ll_backend__opt_util__succeeded)
#line 403 "opt_util.m"
                      ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_17_17, (MR_Integer) 1)));
#line 403 "opt_util.m"
                  }
#line 405 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 404 "opt_util.m"
                  {
#line 404 "opt_util.m"
                    /* direct tailcall eliminated */
#line 404 "opt_util.m"
                    {
#line 404 "opt_util.m"
                      MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_18;

#line 404 "opt_util.m"
                      ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 404 "opt_util.m"
                    }
#line 404 "opt_util.m"
                    continue;
#line 404 "opt_util.m"
                  }
#line 405 "opt_util.m"
                else
#line 406 "opt_util.m"
                  *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
#line 405 "opt_util.m"
              }
#line 403 "opt_util.m"
          }
#line 401 "opt_util.m"
      }
#line 401 "opt_util.m"
      break;
#line 401 "opt_util.m"
    }
#line 55 "opt_util.m"
}

#line 52 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__skip_comments_labels_2_p_0(
#line 52 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 52 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_4)
#line 52 "opt_util.m"
{
#line 392 "opt_util.m"
  while (MR_TRUE)
#line 392 "opt_util.m"
    {
#line 392 "opt_util.m"
      /* tailcall optimized into a loop */
#line 392 "opt_util.m"
      {
#line 392 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 392 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_7;
#line 390 "opt_util.m"
        MR_Word ll_backend__opt_util__V_10_10;
#line 390 "opt_util.m"
        MR_Word ll_backend__opt_util__V_11_11;
#line 390 "opt_util.m"
        MR_String ll_backend__opt_util__V_6_6;
#line 390 "opt_util.m"
        MR_String ll_backend__opt_util__V_5_5;

#line 390 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 390 "opt_util.m"
          {
#line 390 "opt_util.m"
            ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 390 "opt_util.m"
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 390 "opt_util.m"
            ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 0)));
#line 390 "opt_util.m"
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 1)));
#line 390 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 390 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 390 "opt_util.m"
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_11_11, (MR_Integer) 0)));
#line 390 "opt_util.m"
          }
#line 392 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 391 "opt_util.m"
          {
#line 391 "opt_util.m"
            /* direct tailcall eliminated */
#line 391 "opt_util.m"
            {
#line 391 "opt_util.m"
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

#line 391 "opt_util.m"
              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 391 "opt_util.m"
            }
#line 391 "opt_util.m"
            continue;
#line 391 "opt_util.m"
          }
#line 392 "opt_util.m"
        else
#line 394 "opt_util.m"
          {
#line 394 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs1_14;
#line 392 "opt_util.m"
            MR_Word ll_backend__opt_util__V_12_12;
#line 392 "opt_util.m"
            MR_Word ll_backend__opt_util__V_13_13;
#line 392 "opt_util.m"
            MR_String ll_backend__opt_util__V_9_9;
#line 392 "opt_util.m"
            MR_Word ll_backend__opt_util__V_8_8;

#line 392 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 392 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 392 "opt_util.m"
              {
#line 392 "opt_util.m"
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 392 "opt_util.m"
                ll_backend__opt_util__Instrs1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 392 "opt_util.m"
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
#line 392 "opt_util.m"
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
#line 392 "opt_util.m"
                ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 392 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 392 "opt_util.m"
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_13_13, (MR_Integer) 1)));
#line 392 "opt_util.m"
              }
#line 394 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 393 "opt_util.m"
              {
#line 393 "opt_util.m"
                /* direct tailcall eliminated */
#line 393 "opt_util.m"
                {
#line 393 "opt_util.m"
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_14;

#line 393 "opt_util.m"
                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 393 "opt_util.m"
                }
#line 393 "opt_util.m"
                continue;
#line 393 "opt_util.m"
              }
#line 394 "opt_util.m"
            else
#line 395 "opt_util.m"
              *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
#line 394 "opt_util.m"
          }
#line 392 "opt_util.m"
      }
#line 392 "opt_util.m"
      break;
#line 392 "opt_util.m"
    }
#line 52 "opt_util.m"
}

#line 49 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__skip_comments_livevals_2_p_0(
#line 49 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 49 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_4)
#line 49 "opt_util.m"
{
#line 383 "opt_util.m"
  while (MR_TRUE)
#line 383 "opt_util.m"
    {
#line 383 "opt_util.m"
      /* tailcall optimized into a loop */
#line 383 "opt_util.m"
      {
#line 383 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 383 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_7;
#line 381 "opt_util.m"
        MR_Word ll_backend__opt_util__V_10_10;
#line 381 "opt_util.m"
        MR_Word ll_backend__opt_util__V_11_11;
#line 381 "opt_util.m"
        MR_String ll_backend__opt_util__V_6_6;
#line 381 "opt_util.m"
        MR_String ll_backend__opt_util__V_5_5;

#line 381 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 381 "opt_util.m"
          {
#line 381 "opt_util.m"
            ll_backend__opt_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 381 "opt_util.m"
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 381 "opt_util.m"
            ll_backend__opt_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 0)));
#line 381 "opt_util.m"
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_10_10, (MR_Integer) 1)));
#line 381 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 381 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 381 "opt_util.m"
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_11_11, (MR_Integer) 0)));
#line 381 "opt_util.m"
          }
#line 383 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 382 "opt_util.m"
          {
#line 382 "opt_util.m"
            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__opt_util__Instrs1_7, ll_backend__opt_util__Instrs_4);
#line 382 "opt_util.m"
            return;
          }
#line 383 "opt_util.m"
        else
#line 385 "opt_util.m"
          {
#line 385 "opt_util.m"
            MR_Word ll_backend__opt_util__Instrs1_14;
#line 383 "opt_util.m"
            MR_Word ll_backend__opt_util__V_12_12;
#line 383 "opt_util.m"
            MR_Word ll_backend__opt_util__V_13_13;
#line 383 "opt_util.m"
            MR_String ll_backend__opt_util__V_9_9;
#line 383 "opt_util.m"
            MR_Word ll_backend__opt_util__V_8_8;

#line 383 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 383 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 383 "opt_util.m"
              {
#line 383 "opt_util.m"
                ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 383 "opt_util.m"
                ll_backend__opt_util__Instrs1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 383 "opt_util.m"
                ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
#line 383 "opt_util.m"
                ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_12_12, (MR_Integer) 1)));
#line 383 "opt_util.m"
                ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 383 "opt_util.m"
                if (ll_backend__opt_util__succeeded)
#line 383 "opt_util.m"
                  ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_util__V_13_13, (MR_Integer) 0)));
#line 383 "opt_util.m"
              }
#line 385 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 384 "opt_util.m"
              {
#line 384 "opt_util.m"
                /* direct tailcall eliminated */
#line 384 "opt_util.m"
                {
#line 384 "opt_util.m"
                  MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_14;

#line 384 "opt_util.m"
                  ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 384 "opt_util.m"
                }
#line 384 "opt_util.m"
                continue;
#line 384 "opt_util.m"
              }
#line 385 "opt_util.m"
            else
#line 386 "opt_util.m"
              *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
#line 385 "opt_util.m"
          }
#line 383 "opt_util.m"
      }
#line 383 "opt_util.m"
      break;
#line 383 "opt_util.m"
    }
#line 49 "opt_util.m"
}

#line 47 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__skip_comments_2_p_0(
#line 47 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_3,
#line 47 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_4)
#line 47 "opt_util.m"
{
#line 376 "opt_util.m"
  while (MR_TRUE)
#line 376 "opt_util.m"
    {
#line 376 "opt_util.m"
      /* tailcall optimized into a loop */
#line 376 "opt_util.m"
      {
#line 376 "opt_util.m"
        MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_3)) == (MR_mktag((MR_Integer) 1)));
#line 376 "opt_util.m"
        MR_Word ll_backend__opt_util__Instrs1_7;
#line 374 "opt_util.m"
        MR_Word ll_backend__opt_util__V_8_8;
#line 374 "opt_util.m"
        MR_Word ll_backend__opt_util__V_9_9;
#line 374 "opt_util.m"
        MR_String ll_backend__opt_util__V_6_6;
#line 374 "opt_util.m"
        MR_String ll_backend__opt_util__V_5_5;

#line 374 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 374 "opt_util.m"
          {
#line 374 "opt_util.m"
            ll_backend__opt_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 0)));
#line 374 "opt_util.m"
            ll_backend__opt_util__Instrs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_3, (MR_Integer) 1)));
#line 374 "opt_util.m"
            ll_backend__opt_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 0)));
#line 374 "opt_util.m"
            ll_backend__opt_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__V_8_8, (MR_Integer) 1)));
#line 374 "opt_util.m"
            ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 374 "opt_util.m"
            if (ll_backend__opt_util__succeeded)
#line 374 "opt_util.m"
              ll_backend__opt_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_9_9, (MR_Integer) 0)));
#line 374 "opt_util.m"
          }
#line 376 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 375 "opt_util.m"
          {
#line 375 "opt_util.m"
            /* direct tailcall eliminated */
#line 375 "opt_util.m"
            {
#line 375 "opt_util.m"
              MR_Word ll_backend__opt_util__Instrs0__tmp_copy_3 = ll_backend__opt_util__Instrs1_7;

#line 375 "opt_util.m"
              ll_backend__opt_util__Instrs0_3 = ll_backend__opt_util__Instrs0__tmp_copy_3;
#line 375 "opt_util.m"
            }
#line 375 "opt_util.m"
            continue;
#line 375 "opt_util.m"
          }
#line 376 "opt_util.m"
        else
#line 377 "opt_util.m"
          *ll_backend__opt_util__Instrs_4 = ll_backend__opt_util__Instrs0_3;
#line 376 "opt_util.m"
      }
#line 376 "opt_util.m"
      break;
#line 376 "opt_util.m"
    }
#line 47 "opt_util.m"
}

#line 40 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__gather_comments_livevals_3_p_0(
#line 40 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 40 "opt_util.m"
  MR_Word * ll_backend__opt_util__Comments_5,
#line 40 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_6)
#line 40 "opt_util.m"
{
#line 368 "opt_util.m"
  {
#line 368 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
#line 368 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr0_7;
#line 368 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_8;
#line 360 "opt_util.m"
    MR_Word ll_backend__opt_util__Uinstr0_9;
#line 361 "opt_util.m"
    MR_String ll_backend__opt_util__V_10_10;

#line 360 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 360 "opt_util.m"
      {
#line 360 "opt_util.m"
        ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 0)));
#line 360 "opt_util.m"
        ll_backend__opt_util__Instrs1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 1)));
#line 361 "opt_util.m"
        ll_backend__opt_util__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
#line 361 "opt_util.m"
        ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));
#line 363 "opt_util.m"
        if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 1))))
#line 362 "opt_util.m"
          ll_backend__opt_util__succeeded = MR_TRUE;
#line 363 "opt_util.m"
        else
#line 363 "opt_util.m"
          if (((MR_tag((MR_Word) ll_backend__opt_util__Uinstr0_9)) == (MR_mktag((MR_Integer) 2))))
#line 363 "opt_util.m"
            ll_backend__opt_util__succeeded = MR_TRUE;
#line 363 "opt_util.m"
          else
#line 363 "opt_util.m"
            ll_backend__opt_util__succeeded = MR_FALSE;
#line 360 "opt_util.m"
      }
#line 368 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 366 "opt_util.m"
      {
#line 366 "opt_util.m"
        MR_Word ll_backend__opt_util__Comments0_13;

#line 366 "opt_util.m"
        {
#line 366 "opt_util.m"
          ll_backend__opt_util__gather_comments_livevals_3_p_0(ll_backend__opt_util__Instrs1_8, &ll_backend__opt_util__Comments0_13, ll_backend__opt_util__Instrs_6);
        }
#line 367 "opt_util.m"
        {
#line 367 "opt_util.m"
          MR_Word base;
#line 367 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "opt_util.m"
          *ll_backend__opt_util__Comments_5 = base;
#line 367 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_7));
#line 367 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comments0_13));
#line 367 "opt_util.m"
        }
#line 366 "opt_util.m"
      }
#line 368 "opt_util.m"
    else
#line 369 "opt_util.m"
      {
#line 369 "opt_util.m"
        *ll_backend__opt_util__Instrs_6 = ll_backend__opt_util__Instrs0_4;
#line 370 "opt_util.m"
        *ll_backend__opt_util__Comments_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "opt_util.m"
      }
#line 368 "opt_util.m"
  }
#line 40 "opt_util.m"
}

#line 37 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__gather_comments_3_p_0(
#line 37 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_4,
#line 37 "opt_util.m"
  MR_Word * ll_backend__opt_util__Comments_5,
#line 37 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_6)
#line 37 "opt_util.m"
{
#line 353 "opt_util.m"
  {
#line 353 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
#line 353 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr0_7;
#line 353 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_8;
#line 348 "opt_util.m"
    MR_Word ll_backend__opt_util__V_12_12;
#line 349 "opt_util.m"
    MR_String ll_backend__opt_util__V_10_10;
#line 349 "opt_util.m"
    MR_String ll_backend__opt_util__V_9_9;

#line 348 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 348 "opt_util.m"
      {
#line 348 "opt_util.m"
        ll_backend__opt_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 0)));
#line 348 "opt_util.m"
        ll_backend__opt_util__Instrs1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs0_4, (MR_Integer) 1)));
#line 349 "opt_util.m"
        ll_backend__opt_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 0)));
#line 349 "opt_util.m"
        ll_backend__opt_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr0_7, (MR_Integer) 1)));
#line 349 "opt_util.m"
        ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 349 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 349 "opt_util.m"
          ll_backend__opt_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__V_12_12, (MR_Integer) 0)));
#line 348 "opt_util.m"
      }
#line 353 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 351 "opt_util.m"
      {
#line 351 "opt_util.m"
        MR_Word ll_backend__opt_util__Comments0_11;

#line 351 "opt_util.m"
        {
#line 351 "opt_util.m"
          ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs1_8, &ll_backend__opt_util__Comments0_11, ll_backend__opt_util__Instrs_6);
        }
#line 352 "opt_util.m"
        {
#line 352 "opt_util.m"
          MR_Word base;
#line 352 "opt_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "opt_util.m"
          *ll_backend__opt_util__Comments_5 = base;
#line 352 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__opt_util__Instr0_7));
#line 352 "opt_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__opt_util__Comments0_11));
#line 352 "opt_util.m"
        }
#line 351 "opt_util.m"
      }
#line 353 "opt_util.m"
    else
#line 354 "opt_util.m"
      {
#line 354 "opt_util.m"
        *ll_backend__opt_util__Instrs_6 = ll_backend__opt_util__Instrs0_4;
#line 355 "opt_util.m"
        *ll_backend__opt_util__Comments_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "opt_util.m"
      }
#line 353 "opt_util.m"
  }
#line 37 "opt_util.m"
}

#line 34 "opt_util.m"
void MR_CALL 
ll_backend__opt_util__get_prologue_4_p_0(
#line 34 "opt_util.m"
  MR_Word ll_backend__opt_util__Instrs0_5,
#line 34 "opt_util.m"
  MR_Word * ll_backend__opt_util__LabelInstr_6,
#line 34 "opt_util.m"
  MR_Word * ll_backend__opt_util__Comments_7,
#line 34 "opt_util.m"
  MR_Word * ll_backend__opt_util__Instrs_8)
#line 34 "opt_util.m"
{
#line 333 "opt_util.m"
  {
#line 333 "opt_util.m"
    MR_bool ll_backend__opt_util__succeeded;
#line 333 "opt_util.m"
    MR_Word ll_backend__opt_util__Comments1_9;
#line 333 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs1_10;
#line 342 "opt_util.m"
    MR_Word ll_backend__opt_util__Instr1_11;
#line 342 "opt_util.m"
    MR_Word ll_backend__opt_util__Instrs2_12;
#line 336 "opt_util.m"
    MR_Word ll_backend__opt_util__V_16_16;
#line 337 "opt_util.m"
    MR_String ll_backend__opt_util__V_14_14;
#line 337 "opt_util.m"
    MR_Word ll_backend__opt_util__V_13_13;

#line 334 "opt_util.m"
    {
#line 334 "opt_util.m"
      ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs0_5, &ll_backend__opt_util__Comments1_9, &ll_backend__opt_util__Instrs1_10);
    }
#line 336 "opt_util.m"
    ll_backend__opt_util__succeeded = ((MR_tag((MR_Word) ll_backend__opt_util__Instrs1_10)) == (MR_mktag((MR_Integer) 1)));
#line 336 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 336 "opt_util.m"
      {
#line 336 "opt_util.m"
        ll_backend__opt_util__Instr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_10, (MR_Integer) 0)));
#line 336 "opt_util.m"
        ll_backend__opt_util__Instrs2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_util__Instrs1_10, (MR_Integer) 1)));
#line 337 "opt_util.m"
        ll_backend__opt_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_11, (MR_Integer) 0)));
#line 337 "opt_util.m"
        ll_backend__opt_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_util__Instr1_11, (MR_Integer) 1)));
#line 337 "opt_util.m"
        ll_backend__opt_util__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_util__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 337 "opt_util.m"
        if (ll_backend__opt_util__succeeded)
#line 337 "opt_util.m"
          ll_backend__opt_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_util__V_16_16, (MR_Integer) 1)));
#line 336 "opt_util.m"
      }
#line 342 "opt_util.m"
    if (ll_backend__opt_util__succeeded)
#line 339 "opt_util.m"
      {
#line 339 "opt_util.m"
        MR_Word ll_backend__opt_util__Comments2_15;

#line 339 "opt_util.m"
        *ll_backend__opt_util__LabelInstr_6 = ll_backend__opt_util__Instr1_11;
#line 340 "opt_util.m"
        {
#line 340 "opt_util.m"
          ll_backend__opt_util__gather_comments_3_p_0(ll_backend__opt_util__Instrs2_12, &ll_backend__opt_util__Comments2_15, ll_backend__opt_util__Instrs_8);
        }
#line 341 "opt_util.m"
        {
#line 341 "opt_util.m"
          mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__opt_util__Comments1_9, ll_backend__opt_util__Comments2_15, ll_backend__opt_util__Comments_7);
#line 341 "opt_util.m"
          return;
        }
#line 339 "opt_util.m"
      }
#line 342 "opt_util.m"
    else
#line 343 "opt_util.m"
      {
#line 343 "opt_util.m"
        {
#line 343 "opt_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.opt_util", (MR_String) "predicate \140ll_backend.opt_util.get_prologue\'/4", (MR_String) "procedure does not begin with label");
#line 343 "opt_util.m"
          return;
        }
#line 343 "opt_util.m"
      }
#line 333 "opt_util.m"
  }
#line 34 "opt_util.m"
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
