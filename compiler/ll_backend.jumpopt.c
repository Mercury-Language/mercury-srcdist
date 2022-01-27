/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module ll_backend.jumpopt. */
/* :- implementation. */

/*
INIT mercury__ll_backend__jumpopt__init
ENDINIT
*/

#include "ll_backend.jumpopt.mih"


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
#include "set_tree234.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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




#line 143 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 146 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

#line 149 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 152 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 155 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 158 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 161 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

#line 164 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10];

#line 167 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10];

#line 170 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0;

#line 173 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1];

#line 176 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1];

#line 179 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1];

#line 182 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1];

#line 185 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2];

#line 188 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2];

#line 191 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0;

#line 194 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1;

#line 197 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1];

#line 200 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1];

#line 203 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2];

#line 206 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2];

#line 209 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2];

#line 212 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 215 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 217 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 220 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 223 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 225 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 227 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 230 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 233 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 235 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 238 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 241 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 243 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 245 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 908 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 908 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 908 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_4);

#line 895 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 895 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
#line 895 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
#line 895 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 730 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 730 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
#line 730 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
#line 730 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 259 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
#line 259 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

#line 259 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

#line 245 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
#line 245 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

#line 245 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

#line 1214 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_foreign_proc_component_5_p_0(
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1214 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1214 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24);

#line 1180 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_labels_lval_3_p_0(
#line 1180 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_1,
#line 1180 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1180 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

#line 1118 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_labels_rval_3_p_0(
#line 1118 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_1,
#line 1118 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1118 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

#line 1094 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_2_6_p_0(
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1094 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1094 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12);

#line 1088 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1088 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1088 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10);

#line 1067 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_maybe_labels_3_p_0(
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

#line 1058 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_label_3_p_0(
#line 1058 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1058 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1058 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6);

#line 1034 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1034 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1034 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1034 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6);

#line 1013 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1013 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1013 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4);

#line 995 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 995 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3);

#line 965 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 965 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1);

#line 608 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 608 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
#line 608 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
#line 608 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 489 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 489 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
#line 489 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
#line 489 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 294 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
#line 294 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
#line 294 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7);

#line 227 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
#line 227 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4);

#line 161 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Recjump_2,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14);


static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[20][2];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_3[7][1];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_5[1][8];




static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[20][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_2[3]))),
    ((MR_Box) ((MR_String) "discard this frame"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "setup PC on return from tailcall"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[0]))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "setup curfr on return from tailcall"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[11]))),
    ((MR_Box) ((MR_String) "shortcircuit"))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[6]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[17]))),
    ((MR_Box) ((MR_String) "shortcircuit"))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_2[6][3] = {
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
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[3]))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[5])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[7])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[9])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "r1 = old r1"))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[0])),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[4]))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
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



#line 778 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 787 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 796 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 804 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 813 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 821 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 830 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 838 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10] = {
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_may_alter_rtti_0
};

#line 852 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10] = {
  (MR_String) "joi_instr_map",
  (MR_String) "joi_block_map",
  (MR_String) "joi_lval_map",
  (MR_String) "joi_proc_map",
  (MR_String) "joi_sdproc_map",
  (MR_String) "joi_fork_map",
  (MR_String) "joi_succ_map",
  (MR_String) "joi_layout_labels",
  (MR_String) "joi_full_jump_opt",
  (MR_String) "joi_may_alter_rtti"
};

#line 866 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 = {
  (MR_String) "jump_opt_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0,
  NULL,
  NULL
};

#line 881 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 886 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0
  }
};

#line 895 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 900 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 905 "ll_backend.jumpopt.c"
const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_jump_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "jump_opt_info",
  {
    ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0
  },
  {
    ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0
};

#line 926 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 932 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2] = {
  (MR_String) "new_instructions",
  (MR_String) "remaining_instructions"
};

#line 938 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0 = {
  (MR_String) "specified",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0,
  NULL,
  NULL
};

#line 953 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1 = {
  (MR_String) "usual_case",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 968 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 973 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0
};

#line 978 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1
  }
};

#line 992 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 998 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1004 "ll_backend.jumpopt.c"
const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_new_remain_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____new_remain_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____new_remain_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "new_remain",
  {
    ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0
  },
  {
    ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0
};

#line 1025 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 1028 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1030 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1032 "ll_backend.jumpopt.c"
{
#line 1034 "ll_backend.jumpopt.c"
  {
#line 1036 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1039 "ll_backend.jumpopt.c"
    {
#line 1041 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____jump_opt_info_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1044 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1046 "ll_backend.jumpopt.c"
  }
#line 1048 "ll_backend.jumpopt.c"
}

#line 1051 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 1054 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1056 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1058 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1060 "ll_backend.jumpopt.c"
{
#line 1062 "ll_backend.jumpopt.c"
  {
#line 1064 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1067 "ll_backend.jumpopt.c"
    {
#line 1069 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____jump_opt_info_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1072 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1074 "ll_backend.jumpopt.c"
  }
#line 1076 "ll_backend.jumpopt.c"
}

#line 1079 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 1082 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1084 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1086 "ll_backend.jumpopt.c"
{
#line 1088 "ll_backend.jumpopt.c"
  {
#line 1090 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1093 "ll_backend.jumpopt.c"
    {
#line 1095 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____new_remain_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1098 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1100 "ll_backend.jumpopt.c"
  }
#line 1102 "ll_backend.jumpopt.c"
}

#line 1105 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 1108 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1110 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1112 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1114 "ll_backend.jumpopt.c"
{
#line 1116 "ll_backend.jumpopt.c"
  {
#line 1118 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1121 "ll_backend.jumpopt.c"
    {
#line 1123 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____new_remain_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1126 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1128 "ll_backend.jumpopt.c"
  }
#line 1130 "ll_backend.jumpopt.c"
}

#line 908 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 908 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 908 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 908 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_4)
#line 908 "jumpopt.m"
{
#line 908 "jumpopt.m"
  {
#line 908 "jumpopt.m"
    MR_Box ll_backend__jumpopt__closure = ll_backend__jumpopt__closure_arg;
#line 908 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22;
#line 908 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24;

#line 908 "jumpopt.m"
    {
#line 908 "jumpopt.m"
      ll_backend__jumpopt__short_foreign_proc_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__jumpopt__wrapper_arg_1), &ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22, ((MR_Word) ll_backend__jumpopt__wrapper_arg_3), &ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24);
    }
#line 908 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_2 = ((MR_Box) (ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22));
#line 908 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_4 = ((MR_Box) (ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24));
#line 908 "jumpopt.m"
  }
#line 908 "jumpopt.m"
}

#line 895 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 895 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 895 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
#line 895 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
#line 895 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 895 "jumpopt.m"
{
#line 902 "jumpopt.m"
  {
#line 902 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_57_57;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MayCallMercury_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 7)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDefLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 8)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 9)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 10)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__InstrMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components_28;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix_31;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_37_37;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 902 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40;
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 908 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39;

#line 908 "jumpopt.m"
    {
#line 908 "jumpopt.m"
      ll_backend__jumpopt__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 908 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_5[0]));
#line 908 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 1) = ((MR_Box) (ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1));
#line 908 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 908 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 3) = ((MR_Box) (ll_backend__jumpopt__InstrMap_27));
#line 908 "jumpopt.m"
    }
#line 1263 "ll_backend.jumpopt.c"
    ll_backend__jumpopt__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 908 "jumpopt.m"
    {
#line 908 "jumpopt.m"
      mercury__list__map_foldl_5_p_0(ll_backend__jumpopt__TypeCtorInfo_57_57, ll_backend__jumpopt__TypeCtorInfo_57_57, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ll_backend__jumpopt__V_37_37, ll_backend__jumpopt__Components0_17, &ll_backend__jumpopt__Components_28, ((MR_Box) ((MR_Integer) 0)), &ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
    }
#line 908 "jumpopt.m"
    ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39 = ((MR_Word) ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
#line 915 "jumpopt.m"
    if ((ll_backend__jumpopt__MaybeNoFix0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "jumpopt.m"
      {
#line 917 "jumpopt.m"
        ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 916 "jumpopt.m"
      }
#line 915 "jumpopt.m"
    else
#line 911 "jumpopt.m"
      {
#line 911 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFix_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix0_22, (MR_Integer) 0)));
#line 911 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFixDest_30;
#line 1063 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Instr0_62;
#line 1061 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv3_Instr0_62;

#line 1061 "jumpopt.m"
        {
#line 1061 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_27, ((MR_Box) (ll_backend__jumpopt__NoFix_29)), &ll_backend__jumpopt__conv3_Instr0_62);
        }
#line 1061 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1061 "jumpopt.m"
          {
#line 1061 "jumpopt.m"
            ll_backend__jumpopt__Instr0_62 = ((MR_Word) ll_backend__jumpopt__conv3_Instr0_62);
#line 1061 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1061 "jumpopt.m"
          }
#line 1063 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1091 "jumpopt.m"
          {
#line 1092 "jumpopt.m"
            MR_Word ll_backend__jumpopt___Instr_63;

#line 1092 "jumpopt.m"
            {
#line 1092 "jumpopt.m"
              ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__InstrMap_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__NoFix_29, &ll_backend__jumpopt__NoFixDest_30, ll_backend__jumpopt__Instr0_62, &ll_backend__jumpopt___Instr_63);
            }
#line 1091 "jumpopt.m"
          }
#line 1063 "jumpopt.m"
        else
#line 1064 "jumpopt.m"
          ll_backend__jumpopt__NoFixDest_30 = ll_backend__jumpopt__NoFix_29;
#line 913 "jumpopt.m"
        {
#line 913 "jumpopt.m"
          ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 913 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix_31, 0) = ((MR_Box) (ll_backend__jumpopt__NoFixDest_30));
#line 913 "jumpopt.m"
        }
#line 914 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = (MR_Integer) 1;
#line 911 "jumpopt.m"
      }
#line 954 "jumpopt.m"
    if ((ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 == (MR_Integer) 0))
#line 953 "jumpopt.m"
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 954 "jumpopt.m"
    else
#line 955 "jumpopt.m"
      {
#line 955 "jumpopt.m"
        MR_String ll_backend__jumpopt__Comment_32;
#line 955 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Uinstr_33;
#line 955 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Instr_34;
#line 955 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_42_42;

#line 956 "jumpopt.m"
        {
#line 956 "jumpopt.m"
          ll_backend__jumpopt__Comment_32 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (some redirects)");
        }
#line 957 "jumpopt.m"
        {
#line 957 "jumpopt.m"
          ll_backend__jumpopt__Uinstr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 1) = ((MR_Box) (ll_backend__jumpopt__Decls_16));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 2) = ((MR_Box) (ll_backend__jumpopt__Components_28));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 3) = ((MR_Box) (ll_backend__jumpopt__MayCallMercury_18));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 4) = ((MR_Box) (ll_backend__jumpopt__MaybeFixNoLayout_19));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 5) = ((MR_Box) (ll_backend__jumpopt__MaybeFixLayout_20));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 6) = ((MR_Box) (ll_backend__jumpopt__MaybeFixOnlyLayout_21));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 7) = ((MR_Box) (ll_backend__jumpopt__MaybeNoFix_31));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 8) = ((MR_Box) (ll_backend__jumpopt__MaybeDefLabel_23));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 9) = ((MR_Box) (ll_backend__jumpopt__StackSlotRef_24));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 10) = ((MR_Box) (ll_backend__jumpopt__MaybeDup_25));
#line 957 "jumpopt.m"
        }
#line 960 "jumpopt.m"
        {
#line 960 "jumpopt.m"
          ll_backend__jumpopt__Instr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 960 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_33));
#line 960 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_32));
#line 960 "jumpopt.m"
        }
#line 961 "jumpopt.m"
        {
#line 961 "jumpopt.m"
          ll_backend__jumpopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_34));
#line 961 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 961 "jumpopt.m"
        }
#line 961 "jumpopt.m"
        {
#line 961 "jumpopt.m"
          MR_Word base;
#line 961 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "jumpopt.m"
          *ll_backend__jumpopt__NewRemain_15 = base;
#line 961 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_42_42));
#line 961 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 961 "jumpopt.m"
        }
#line 955 "jumpopt.m"
      }
#line 961 "jumpopt.m"
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35;
#line 902 "jumpopt.m"
  }
#line 895 "jumpopt.m"
}

#line 730 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 730 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 730 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
#line 730 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
#line 730 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 730 "jumpopt.m"
{
#line 737 "jumpopt.m"
  {
#line 737 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 737 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 737 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 891 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetLabel_18;

#line 739 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_17)) == (MR_mktag((MR_Integer) 1)));
#line 739 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 739 "jumpopt.m"
      {
#line 739 "jumpopt.m"
        ll_backend__jumpopt__TargetLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_17, (MR_Integer) 0)));
#line 742 "jumpopt.m"
        {
#line 742 "jumpopt.m"
          MR_Word ll_backend__jumpopt__InstrMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 742 "jumpopt.m"
          MR_Word ll_backend__jumpopt__BlockMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 742 "jumpopt.m"
          MR_Word ll_backend__jumpopt__LayoutLabels_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 742 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Fulljumpopt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___LvalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___ProcMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___SdprocMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___ForkMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___SuccMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 740 "jumpopt.m"
          MR_Word ll_backend__jumpopt___MayAlterRtti_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 791 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGoto_36;
#line 791 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoTarget_38;
#line 791 "jumpopt.m"
          MR_String ll_backend__jumpopt__GotoComment_39;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs1_29;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instr1_30;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs2_31;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoInstr_35;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__HaveLabel_37;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGotoComments_41;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__LabelInstr_42;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_72_72;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_73_73;
#line 762 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_134_134;
#line 769 "jumpopt.m"
          MR_Word ll_backend__jumpopt__ElimLabel_32;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_71_71;
#line 764 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_33_33;
#line 777 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_43_43;
#line 778 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_44_44;

#line 762 "jumpopt.m"
          {
#line 762 "jumpopt.m"
            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_29);
          }
#line 763 "jumpopt.m"
          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_29)) == (MR_mktag((MR_Integer) 1)));
#line 763 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 763 "jumpopt.m"
            {
#line 763 "jumpopt.m"
              ll_backend__jumpopt__Instr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 0)));
#line 763 "jumpopt.m"
              ll_backend__jumpopt__Instrs2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 1)));
#line 764 "jumpopt.m"
              ll_backend__jumpopt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 0)));
#line 764 "jumpopt.m"
              ll_backend__jumpopt__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 1)));
#line 764 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_71_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 764 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 764 "jumpopt.m"
                {
#line 764 "jumpopt.m"
                  ll_backend__jumpopt__ElimLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 1)));
#line 765 "jumpopt.m"
                  {
#line 765 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Instrs3_34;

#line 765 "jumpopt.m"
                    {
#line 765 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__ElimLabel_32)), ll_backend__jumpopt__LayoutLabels_26);
                    }
#line 765 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 765 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 765 "jumpopt.m"
                      {
#line 766 "jumpopt.m"
                        {
#line 766 "jumpopt.m"
                          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs2_31, &ll_backend__jumpopt__Instrs3_34);
                        }
#line 767 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs3_34)) == (MR_mktag((MR_Integer) 1)));
#line 767 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 767 "jumpopt.m"
                          {
#line 767 "jumpopt.m"
                            ll_backend__jumpopt__GotoInstr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 0)));
#line 767 "jumpopt.m"
                            ll_backend__jumpopt__AfterGoto_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 1)));
#line 768 "jumpopt.m"
                            ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 1;
#line 768 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 767 "jumpopt.m"
                          }
#line 765 "jumpopt.m"
                      }
#line 765 "jumpopt.m"
                  }
#line 764 "jumpopt.m"
                }
#line 764 "jumpopt.m"
              else
#line 770 "jumpopt.m"
                {
#line 770 "jumpopt.m"
                  ll_backend__jumpopt__GotoInstr_35 = ll_backend__jumpopt__Instr1_30;
#line 771 "jumpopt.m"
                  ll_backend__jumpopt__AfterGoto_36 = ll_backend__jumpopt__Instrs2_31;
#line 772 "jumpopt.m"
                  ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 0;
#line 770 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 770 "jumpopt.m"
                }
#line 762 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 762 "jumpopt.m"
                {
#line 774 "jumpopt.m"
                  ll_backend__jumpopt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 0)));
#line 774 "jumpopt.m"
                  ll_backend__jumpopt__GotoComment_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 1)));
#line 774 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_72_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 774 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 774 "jumpopt.m"
                    {
#line 774 "jumpopt.m"
                      ll_backend__jumpopt__GotoTarget_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 1)));
#line 775 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__HaveLabel_37 == (MR_Integer) 0);
#line 775 "jumpopt.m"
                      if (!(ll_backend__jumpopt__succeeded))
#line 775 "jumpopt.m"
                        {
#line 775 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_40_40;

#line 775 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoTarget_38)) == (MR_mktag((MR_Integer) 1)));
#line 775 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 775 "jumpopt.m"
                            ll_backend__jumpopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoTarget_38, (MR_Integer) 0)));
#line 775 "jumpopt.m"
                        }
#line 762 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 762 "jumpopt.m"
                        {
#line 776 "jumpopt.m"
                          {
#line 776 "jumpopt.m"
                            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__AfterGoto_36, &ll_backend__jumpopt__AfterGotoComments_41);
                          }
#line 777 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__AfterGotoComments_41)) == (MR_mktag((MR_Integer) 1)));
#line 777 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 777 "jumpopt.m"
                            {
#line 777 "jumpopt.m"
                              ll_backend__jumpopt__LabelInstr_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 0)));
#line 777 "jumpopt.m"
                              ll_backend__jumpopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 1)));
#line 778 "jumpopt.m"
                              ll_backend__jumpopt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 0)));
#line 778 "jumpopt.m"
                              ll_backend__jumpopt__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 1)));
#line 778 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 778 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 778 "jumpopt.m"
                                {
#line 778 "jumpopt.m"
                                  ll_backend__jumpopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 1)));
#line 778 "jumpopt.m"
                                  {
#line 778 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__V_134_134);
                                  }
#line 778 "jumpopt.m"
                                }
#line 777 "jumpopt.m"
                            }
#line 762 "jumpopt.m"
                        }
#line 774 "jumpopt.m"
                    }
#line 762 "jumpopt.m"
                }
#line 763 "jumpopt.m"
            }
#line 791 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 780 "jumpopt.m"
            {
#line 780 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NotCond_45;
#line 780 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NewInstr_46;
#line 780 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RemainInstrs_48;
#line 780 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_74_74;

#line 780 "jumpopt.m"
              {
#line 780 "jumpopt.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_45);
              }
#line 781 "jumpopt.m"
              {
#line 781 "jumpopt.m"
                ll_backend__jumpopt__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 781 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 781 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_45));
#line 781 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 2) = ((MR_Box) (ll_backend__jumpopt__GotoTarget_38));
#line 781 "jumpopt.m"
              }
#line 781 "jumpopt.m"
              {
#line 781 "jumpopt.m"
                ll_backend__jumpopt__NewInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 0) = ((MR_Box) (ll_backend__jumpopt__V_74_74));
#line 781 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_39));
#line 781 "jumpopt.m"
              }
#line 789 "jumpopt.m"
              {
#line 789 "jumpopt.m"
                ll_backend__jumpopt__RemainInstrs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstr_46));
#line 789 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_36));
#line 789 "jumpopt.m"
              }
#line 790 "jumpopt.m"
              {
#line 790 "jumpopt.m"
                MR_Word base;
#line 790 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "jumpopt.m"
                *ll_backend__jumpopt__NewRemain_15 = base;
#line 790 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_48));
#line 790 "jumpopt.m"
              }
#line 780 "jumpopt.m"
            }
#line 791 "jumpopt.m"
          else
#line 830 "jumpopt.m"
            {
#line 830 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoAddr_50;
#line 830 "jumpopt.m"
              MR_Word ll_backend__jumpopt__AfterGoto_121;
#line 830 "jumpopt.m"
              MR_String ll_backend__jumpopt__GotoComment_122;
#line 811 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeCtorInfo_127_127;
#line 811 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeInfo_128_128;
#line 811 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_75_75;
#line 811 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Instrs1_108;
#line 811 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoInstr_109;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt___TargetBlock_49;
#line 812 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0__TargetBlock_49;
#line 817 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoLabel_51;
#line 818 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_52_52;
#line 818 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv1_V_52_52;

#line 811 "jumpopt.m"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Fulljumpopt_27 == (MR_Integer) 1);
#line 811 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 811 "jumpopt.m"
                {
#line 1798 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1800 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_128_128 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 812 "jumpopt.m"
                  {
#line 812 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv0__TargetBlock_49);
                  }
#line 812 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 812 "jumpopt.m"
                    {
#line 812 "jumpopt.m"
                      ll_backend__jumpopt___TargetBlock_49 = ((MR_Word) ll_backend__jumpopt__conv0__TargetBlock_49);
#line 812 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 812 "jumpopt.m"
                    }
#line 811 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 811 "jumpopt.m"
                    {
#line 813 "jumpopt.m"
                      {
#line 813 "jumpopt.m"
                        ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_108);
                      }
#line 814 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_108)) == (MR_mktag((MR_Integer) 1)));
#line 814 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 814 "jumpopt.m"
                        {
#line 814 "jumpopt.m"
                          ll_backend__jumpopt__GotoInstr_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 0)));
#line 814 "jumpopt.m"
                          ll_backend__jumpopt__AfterGoto_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 1)));
#line 815 "jumpopt.m"
                          ll_backend__jumpopt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 0)));
#line 815 "jumpopt.m"
                          ll_backend__jumpopt__GotoComment_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 1)));
#line 815 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 815 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 815 "jumpopt.m"
                            {
#line 815 "jumpopt.m"
                              ll_backend__jumpopt__GotoAddr_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 1)));
#line 817 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoAddr_50)) == (MR_mktag((MR_Integer) 1)));
#line 817 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 817 "jumpopt.m"
                                {
#line 817 "jumpopt.m"
                                  ll_backend__jumpopt__GotoLabel_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoAddr_50, (MR_Integer) 0)));
#line 818 "jumpopt.m"
                                  {
#line 818 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__GotoLabel_51)), &ll_backend__jumpopt__conv1_V_52_52);
                                  }
#line 818 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 818 "jumpopt.m"
                                    {
#line 818 "jumpopt.m"
                                      ll_backend__jumpopt__V_52_52 = ((MR_Word) ll_backend__jumpopt__conv1_V_52_52);
#line 818 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 818 "jumpopt.m"
                                    }
#line 817 "jumpopt.m"
                                }
#line 816 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 815 "jumpopt.m"
                            }
#line 814 "jumpopt.m"
                        }
#line 811 "jumpopt.m"
                    }
#line 811 "jumpopt.m"
                }
#line 830 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 821 "jumpopt.m"
                {
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewIfInstr_53;
#line 821 "jumpopt.m"
                  MR_String ll_backend__jumpopt__NewGotoComment_54;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewGotoInstr_55;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_76_76;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_79_79;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NotCond_110;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_111;
#line 821 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__RemainInstrs_112;

#line 821 "jumpopt.m"
                  {
#line 821 "jumpopt.m"
                    ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_110);
                  }
#line 823 "jumpopt.m"
                  {
#line 823 "jumpopt.m"
                    ll_backend__jumpopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 823 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 823 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_110));
#line 823 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 2) = ((MR_Box) (ll_backend__jumpopt__GotoAddr_50));
#line 823 "jumpopt.m"
                  }
#line 822 "jumpopt.m"
                  {
#line 822 "jumpopt.m"
                    ll_backend__jumpopt__NewIfInstr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 0) = ((MR_Box) (ll_backend__jumpopt__V_76_76));
#line 822 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_122));
#line 822 "jumpopt.m"
                  }
#line 824 "jumpopt.m"
                  {
#line 824 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 0) = ((MR_Box) (ll_backend__jumpopt__NewIfInstr_53));
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "jumpopt.m"
                  }
#line 825 "jumpopt.m"
                  {
#line 825 "jumpopt.m"
                    ll_backend__jumpopt__NewGotoComment_54 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (switched)");
                  }
#line 827 "jumpopt.m"
                  {
#line 827 "jumpopt.m"
                    ll_backend__jumpopt__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 827 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, 1) = ((MR_Box) (ll_backend__jumpopt__TargetAddr_17));
#line 827 "jumpopt.m"
                  }
#line 826 "jumpopt.m"
                  {
#line 826 "jumpopt.m"
                    ll_backend__jumpopt__NewGotoInstr_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_79_79));
#line 826 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 1) = ((MR_Box) (ll_backend__jumpopt__NewGotoComment_54));
#line 826 "jumpopt.m"
                  }
#line 828 "jumpopt.m"
                  {
#line 828 "jumpopt.m"
                    ll_backend__jumpopt__RemainInstrs_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 0) = ((MR_Box) (ll_backend__jumpopt__NewGotoInstr_55));
#line 828 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_121));
#line 828 "jumpopt.m"
                  }
#line 829 "jumpopt.m"
                  {
#line 829 "jumpopt.m"
                    MR_Word base;
#line 829 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 829 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_111));
#line 829 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_112));
#line 829 "jumpopt.m"
                  }
#line 821 "jumpopt.m"
                }
#line 830 "jumpopt.m"
              else
#line 888 "jumpopt.m"
                {
#line 888 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TargetInstr_56;
#line 831 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv2_TargetInstr_56;

#line 831 "jumpopt.m"
                  {
#line 831 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_19, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv2_TargetInstr_56);
                  }
#line 831 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 831 "jumpopt.m"
                    {
#line 831 "jumpopt.m"
                      ll_backend__jumpopt__TargetInstr_56 = ((MR_Word) ll_backend__jumpopt__conv2_TargetInstr_56);
#line 831 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 831 "jumpopt.m"
                    }
#line 888 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 834 "jumpopt.m"
                    {
#line 834 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__DestLabel_57;
#line 833 "jumpopt.m"
                      MR_Word ll_backend__jumpopt___DestInstr_58;
#line 876 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between_63;
#line 876 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewCond_65;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeCtorInfo_131_131;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_132_132;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_137_137;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenFT_59;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Block_60;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenBR_61;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccessFT_62;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccessBR_64;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_81_81;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_82_82;
#line 851 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_135_135;
#line 852 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv3_Block_60;
#line 865 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_83_83;
#line 865 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_84_84;
#line 865 "jumpopt.m"
                      MR_Integer ll_backend__jumpopt__V_85_85;

#line 833 "jumpopt.m"
                      {
#line 833 "jumpopt.m"
                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_19, ll_backend__jumpopt__TargetLabel_18, &ll_backend__jumpopt__DestLabel_57, ll_backend__jumpopt__TargetInstr_56, &ll_backend__jumpopt___DestInstr_58);
                      }
#line 851 "jumpopt.m"
                      {
#line 851 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__BetweenFT_59);
                      }
#line 851 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                        {
#line 2073 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2075 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeInfo_132_132 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 852 "jumpopt.m"
                          {
#line 852 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_131_131, ll_backend__jumpopt__TypeInfo_132_132, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__DestLabel_57)), &ll_backend__jumpopt__conv3_Block_60);
                          }
#line 852 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 852 "jumpopt.m"
                            {
#line 852 "jumpopt.m"
                              ll_backend__jumpopt__Block_60 = ((MR_Word) ll_backend__jumpopt__conv3_Block_60);
#line 852 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 852 "jumpopt.m"
                            }
#line 851 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                            {
#line 853 "jumpopt.m"
                              {
#line 853 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Block_60, &ll_backend__jumpopt__BetweenBR_61);
                              }
#line 851 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                                {
#line 854 "jumpopt.m"
                                  {
#line 854 "jumpopt.m"
                                    ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenFT_59, &ll_backend__jumpopt__V_81_81, &ll_backend__jumpopt__Between_63);
                                  }
#line 854 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 854 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 854 "jumpopt.m"
                                    {
#line 854 "jumpopt.m"
                                      ll_backend__jumpopt__SuccessFT_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_81_81, (MR_Integer) 0)));
#line 855 "jumpopt.m"
                                      {
#line 855 "jumpopt.m"
                                        ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenBR_61, &ll_backend__jumpopt__V_82_82, &ll_backend__jumpopt__V_135_135);
                                      }
#line 2123 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_137_137 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 855 "jumpopt.m"
                                      {
#line 855 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_137_137, ((MR_Box) (ll_backend__jumpopt__Between_63)), ((MR_Box) (ll_backend__jumpopt__V_135_135)));
                                      }
#line 851 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                                        {
#line 855 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 855 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 855 "jumpopt.m"
                                            {
#line 855 "jumpopt.m"
                                              ll_backend__jumpopt__SuccessBR_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, (MR_Integer) 0)));
#line 860 "jumpopt.m"
                                              if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 861 "jumpopt.m"
                                                {
#line 862 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 861 "jumpopt.m"
                                                    {
#line 863 "jumpopt.m"
                                                      ll_backend__jumpopt__NewCond_65 = ll_backend__jumpopt__Cond_16;
#line 863 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 861 "jumpopt.m"
                                                    }
#line 861 "jumpopt.m"
                                                }
#line 860 "jumpopt.m"
                                              else
#line 860 "jumpopt.m"
                                                if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "jumpopt.m"
                                                  {
#line 858 "jumpopt.m"
                                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 857 "jumpopt.m"
                                                    if (ll_backend__jumpopt__succeeded)
#line 857 "jumpopt.m"
                                                      {
#line 859 "jumpopt.m"
                                                        {
#line 859 "jumpopt.m"
                                                          ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NewCond_65);
                                                        }
#line 859 "jumpopt.m"
                                                        ll_backend__jumpopt__succeeded = MR_TRUE;
#line 857 "jumpopt.m"
                                                      }
#line 857 "jumpopt.m"
                                                  }
#line 860 "jumpopt.m"
                                                else
#line 860 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 851 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                                                {
#line 865 "jumpopt.m"
                                                  ll_backend__jumpopt__V_84_84 = (MR_Integer) 0;
#line 865 "jumpopt.m"
                                                  ll_backend__jumpopt__V_85_85 = (MR_Integer) 1;
#line 865 "jumpopt.m"
                                                  ll_backend__jumpopt__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[15]);
#line 865 "jumpopt.m"
                                                  {
#line 865 "jumpopt.m"
                                                    ll_backend__jumpopt__succeeded = ll_backend__jumpopt__needs_workaround_2_p_0(ll_backend__jumpopt__V_83_83, ll_backend__jumpopt__NewCond_65);
                                                  }
#line 865 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 851 "jumpopt.m"
                                                }
#line 855 "jumpopt.m"
                                            }
#line 851 "jumpopt.m"
                                        }
#line 854 "jumpopt.m"
                                    }
#line 851 "jumpopt.m"
                                }
#line 851 "jumpopt.m"
                            }
#line 851 "jumpopt.m"
                        }
#line 876 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 872 "jumpopt.m"
                        {
#line 872 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewAssign_66;
#line 872 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_100_100;
#line 872 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_113;
#line 867 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_86_86;
#line 867 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_87_87;
#line 867 "jumpopt.m"
                          MR_Integer ll_backend__jumpopt__V_88_88;

#line 867 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__NewCond_65)) == (MR_mktag((MR_Integer) 0)));
#line 867 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 867 "jumpopt.m"
                            {
#line 867 "jumpopt.m"
                              ll_backend__jumpopt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewCond_65, (MR_Integer) 0)));
#line 867 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 867 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 867 "jumpopt.m"
                                {
#line 867 "jumpopt.m"
                                  ll_backend__jumpopt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_86_86, (MR_Integer) 0)));
#line 867 "jumpopt.m"
                                  ll_backend__jumpopt__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_86_86, (MR_Integer) 1)));
#line 867 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_87_87 == (MR_Integer) 0);
#line 867 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 867 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_88_88 == (MR_Integer) 1);
#line 867 "jumpopt.m"
                                }
#line 867 "jumpopt.m"
                            }
#line 869 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 868 "jumpopt.m"
                            {
#line 868 "jumpopt.m"
                              ll_backend__jumpopt__NewAssign_66 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[16];
#line 868 "jumpopt.m"
                            }
#line 869 "jumpopt.m"
                          else
#line 870 "jumpopt.m"
                            {
#line 870 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_92_92;

#line 870 "jumpopt.m"
                              {
#line 870 "jumpopt.m"
                                ll_backend__jumpopt__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 870 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 870 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[15])));
#line 870 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 2) = ((MR_Box) (ll_backend__jumpopt__NewCond_65));
#line 870 "jumpopt.m"
                              }
#line 870 "jumpopt.m"
                              {
#line 870 "jumpopt.m"
                                ll_backend__jumpopt__NewAssign_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 0) = ((MR_Box) (ll_backend__jumpopt__V_92_92));
#line 870 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 1) = ((MR_Box) ((MR_String) "shortcircuit bool computation"));
#line 870 "jumpopt.m"
                              }
#line 870 "jumpopt.m"
                            }
#line 874 "jumpopt.m"
                          {
#line 874 "jumpopt.m"
                            ll_backend__jumpopt__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_100_100, 0) = ((MR_Box) (ll_backend__jumpopt__NewAssign_66));
#line 874 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_100_100, 1) = ((MR_Box) (ll_backend__jumpopt__Between_63));
#line 874 "jumpopt.m"
                          }
#line 874 "jumpopt.m"
                          {
#line 874 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_113 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__V_100_100, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[19]));
                          }
#line 875 "jumpopt.m"
                          {
#line 875 "jumpopt.m"
                            MR_Word base;
#line 875 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 875 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_113));
#line 875 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 875 "jumpopt.m"
                          }
#line 872 "jumpopt.m"
                        }
#line 876 "jumpopt.m"
                      else
#line 885 "jumpopt.m"
                        {
#line 878 "jumpopt.m"
                          {
#line 878 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__DestLabel_57);
                          }
#line 878 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 885 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 880 "jumpopt.m"
                            {
#line 880 "jumpopt.m"
                              MR_String ll_backend__jumpopt__Shorted_68;
#line 880 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_104_104;
#line 880 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_105_105;
#line 880 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_106_106;
#line 880 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_114;

#line 880 "jumpopt.m"
                              {
#line 880 "jumpopt.m"
                                ll_backend__jumpopt__Shorted_68 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                              }
#line 882 "jumpopt.m"
                              {
#line 882 "jumpopt.m"
                                ll_backend__jumpopt__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_106_106, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_57));
#line 882 "jumpopt.m"
                              }
#line 882 "jumpopt.m"
                              {
#line 882 "jumpopt.m"
                                ll_backend__jumpopt__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 1) = ((MR_Box) (ll_backend__jumpopt__Cond_16));
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 2) = ((MR_Box) (ll_backend__jumpopt__V_106_106));
#line 882 "jumpopt.m"
                              }
#line 883 "jumpopt.m"
                              {
#line 883 "jumpopt.m"
                                ll_backend__jumpopt__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 0) = ((MR_Box) (ll_backend__jumpopt__V_105_105));
#line 883 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_68));
#line 883 "jumpopt.m"
                              }
#line 881 "jumpopt.m"
                              {
#line 881 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 0) = ((MR_Box) (ll_backend__jumpopt__V_104_104));
#line 881 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "jumpopt.m"
                              }
#line 884 "jumpopt.m"
                              {
#line 884 "jumpopt.m"
                                MR_Word base;
#line 884 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 884 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_114));
#line 884 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 884 "jumpopt.m"
                              }
#line 880 "jumpopt.m"
                            }
#line 885 "jumpopt.m"
                          else
#line 886 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "jumpopt.m"
                        }
#line 834 "jumpopt.m"
                    }
#line 888 "jumpopt.m"
                  else
#line 889 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "jumpopt.m"
                }
#line 830 "jumpopt.m"
            }
#line 742 "jumpopt.m"
        }
#line 739 "jumpopt.m"
      }
#line 739 "jumpopt.m"
    else
#line 892 "jumpopt.m"
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "jumpopt.m"
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69;
#line 737 "jumpopt.m"
  }
#line 730 "jumpopt.m"
}

#line 259 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
#line 259 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
#line 259 "jumpopt.m"
{
#line 259 "jumpopt.m"
  {
#line 259 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 259 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_13 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
#line 259 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_14 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

#line 259 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_13 == ll_backend__jumpopt__CastY_14);
#line 259 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 2475 "ll_backend.jumpopt.c"
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "jumpopt.m"
    else
#line 259 "jumpopt.m"
      if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "jumpopt.m"
        else
#line 2487 "ll_backend.jumpopt.c"
          *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "jumpopt.m"
      else
#line 259 "jumpopt.m"
        {
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));

#line 259 "jumpopt.m"
          if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2500 "ll_backend.jumpopt.c"
            *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "jumpopt.m"
          else
#line 259 "jumpopt.m"
            {
#line 259 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_8_8;

#line 259 "jumpopt.m"
              {
#line 259 "jumpopt.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], &ll_backend__jumpopt__V_8_8, ((MR_Box) (ll_backend__jumpopt__V_18_18)), ((MR_Box) (ll_backend__jumpopt__V_6_6)));
              }
#line 2518 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_8_8 == (MR_Integer) 0);
#line 259 "jumpopt.m"
              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 259 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 259 "jumpopt.m"
                *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_8_8;
#line 259 "jumpopt.m"
              else
#line 259 "jumpopt.m"
                {
#line 259 "jumpopt.m"
                  {
#line 259 "jumpopt.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__V_17_17)), ((MR_Box) (ll_backend__jumpopt__V_7_7)));
#line 259 "jumpopt.m"
                    return;
                  }
#line 259 "jumpopt.m"
                }
#line 259 "jumpopt.m"
            }
#line 259 "jumpopt.m"
        }
#line 259 "jumpopt.m"
  }
#line 259 "jumpopt.m"
}

#line 259 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 259 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
#line 259 "jumpopt.m"
{
#line 259 "jumpopt.m"
  {
#line 259 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 259 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_9 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 259 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_10 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 259 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_9 == ll_backend__jumpopt__CastY_10);
#line 259 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 259 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 259 "jumpopt.m"
    else
#line 259 "jumpopt.m"
      if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "jumpopt.m"
        {
#line 259 "jumpopt.m"
          MR_Integer ll_backend__jumpopt__CastX_7 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 259 "jumpopt.m"
          MR_Integer ll_backend__jumpopt__CastY_8 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 259 "jumpopt.m"
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastY_8 == ll_backend__jumpopt__CastX_7);
#line 259 "jumpopt.m"
        }
#line 259 "jumpopt.m"
      else
#line 259 "jumpopt.m"
        {
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__TypeInfo_11_11;
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__TypeInfo_12_12;
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_5_5;
#line 259 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_6_6;

#line 259 "jumpopt.m"
          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 259 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 259 "jumpopt.m"
            {
#line 259 "jumpopt.m"
              ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "jumpopt.m"
              ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 2614 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__TypeInfo_11_11 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2616 "ll_backend.jumpopt.c"
              {
#line 2618 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_11_11, ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_5_5)));
              }
#line 259 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 259 "jumpopt.m"
                {
#line 2625 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_12_12 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2627 "ll_backend.jumpopt.c"
                  {
#line 2629 "ll_backend.jumpopt.c"
                    return ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_12_12, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_6_6)));
                  }
#line 259 "jumpopt.m"
                }
#line 259 "jumpopt.m"
            }
#line 259 "jumpopt.m"
        }
#line 259 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 259 "jumpopt.m"
  }
#line 259 "jumpopt.m"
}

#line 245 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
#line 245 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
#line 245 "jumpopt.m"
{
#line 245 "jumpopt.m"
  {
#line 245 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 245 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_33 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
#line 245 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_34 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

#line 245 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_33 == ll_backend__jumpopt__CastY_34);
#line 245 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 2669 "ll_backend.jumpopt.c"
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "jumpopt.m"
    else
#line 245 "jumpopt.m"
      {
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 2)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 3)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 4)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 5)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 6)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 7)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 8)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 9)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_24_24;

#line 245 "jumpopt.m"
        {
#line 245 "jumpopt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], &ll_backend__jumpopt__V_24_24, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_14_14)));
        }
#line 2723 "ll_backend.jumpopt.c"
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_24_24 == (MR_Integer) 0);
#line 245 "jumpopt.m"
        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_24_24;
#line 245 "jumpopt.m"
        else
#line 245 "jumpopt.m"
          {
#line 245 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_25_25;

#line 245 "jumpopt.m"
            {
#line 245 "jumpopt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_25_25, ((MR_Box) (ll_backend__jumpopt__V_5_5)), ((MR_Box) (ll_backend__jumpopt__V_15_15)));
            }
#line 2743 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_25_25 == (MR_Integer) 0);
#line 245 "jumpopt.m"
            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_25_25;
#line 245 "jumpopt.m"
            else
#line 245 "jumpopt.m"
              {
#line 245 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_26_26;

#line 245 "jumpopt.m"
                {
#line 245 "jumpopt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[2], &ll_backend__jumpopt__V_26_26, ((MR_Box) (ll_backend__jumpopt__V_6_6)), ((MR_Box) (ll_backend__jumpopt__V_16_16)));
                }
#line 2763 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_26_26 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                  *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_26_26;
#line 245 "jumpopt.m"
                else
#line 245 "jumpopt.m"
                  {
#line 245 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_27_27;

#line 245 "jumpopt.m"
                    {
#line 245 "jumpopt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_27_27, ((MR_Box) (ll_backend__jumpopt__V_7_7)), ((MR_Box) (ll_backend__jumpopt__V_17_17)));
                    }
#line 2783 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_27_27 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                      *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_27_27;
#line 245 "jumpopt.m"
                    else
#line 245 "jumpopt.m"
                      {
#line 245 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_28_28;

#line 245 "jumpopt.m"
                        {
#line 245 "jumpopt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_28_28, ((MR_Box) (ll_backend__jumpopt__V_8_8)), ((MR_Box) (ll_backend__jumpopt__V_18_18)));
                        }
#line 2803 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_28_28 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_28_28;
#line 245 "jumpopt.m"
                        else
#line 245 "jumpopt.m"
                          {
#line 245 "jumpopt.m"
                            MR_Word ll_backend__jumpopt__V_29_29;

#line 245 "jumpopt.m"
                            {
#line 245 "jumpopt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_29_29, ((MR_Box) (ll_backend__jumpopt__V_9_9)), ((MR_Box) (ll_backend__jumpopt__V_19_19)));
                            }
#line 2823 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_29_29 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_29_29;
#line 245 "jumpopt.m"
                            else
#line 245 "jumpopt.m"
                              {
#line 245 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_30_30;

#line 245 "jumpopt.m"
                                {
#line 245 "jumpopt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_30_30, ((MR_Box) (ll_backend__jumpopt__V_10_10)), ((MR_Box) (ll_backend__jumpopt__V_20_20)));
                                }
#line 2843 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_30_30 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                  *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_30_30;
#line 245 "jumpopt.m"
                                else
#line 245 "jumpopt.m"
                                  {
#line 245 "jumpopt.m"
                                    MR_Word ll_backend__jumpopt__V_31_31;

#line 245 "jumpopt.m"
                                    {
#line 245 "jumpopt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[2], &ll_backend__jumpopt__V_31_31, ((MR_Box) (ll_backend__jumpopt__V_11_11)), ((MR_Box) (ll_backend__jumpopt__V_21_21)));
                                    }
#line 2863 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_31_31 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                      *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_31_31;
#line 245 "jumpopt.m"
                                    else
#line 245 "jumpopt.m"
                                      {
#line 245 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__V_32_32;
#line 245 "jumpopt.m"
                                        MR_Integer ll_backend__jumpopt__V_45_45 = (MR_Integer) ll_backend__jumpopt__V_12_12;
#line 245 "jumpopt.m"
                                        MR_Integer ll_backend__jumpopt__V_46_46 = (MR_Integer) ll_backend__jumpopt__V_22_22;

#line 245 "jumpopt.m"
                                        {
#line 245 "jumpopt.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__jumpopt__V_32_32, ll_backend__jumpopt__V_45_45, ll_backend__jumpopt__V_46_46);
                                        }
#line 2887 "ll_backend.jumpopt.c"
                                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_32_32 == (MR_Integer) 0);
#line 245 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 245 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_32_32;
#line 245 "jumpopt.m"
                                        else
#line 245 "jumpopt.m"
                                          {
#line 245 "jumpopt.m"
                                            MR_Integer ll_backend__jumpopt__V_47_47 = (MR_Integer) ll_backend__jumpopt__V_13_13;
#line 245 "jumpopt.m"
                                            MR_Integer ll_backend__jumpopt__V_48_48 = (MR_Integer) ll_backend__jumpopt__V_23_23;

#line 245 "jumpopt.m"
                                            {
#line 245 "jumpopt.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__V_47_47, ll_backend__jumpopt__V_48_48);
#line 245 "jumpopt.m"
                                              return;
                                            }
#line 245 "jumpopt.m"
                                          }
#line 245 "jumpopt.m"
                                      }
#line 245 "jumpopt.m"
                                  }
#line 245 "jumpopt.m"
                              }
#line 245 "jumpopt.m"
                          }
#line 245 "jumpopt.m"
                      }
#line 245 "jumpopt.m"
                  }
#line 245 "jumpopt.m"
              }
#line 245 "jumpopt.m"
          }
#line 245 "jumpopt.m"
      }
#line 245 "jumpopt.m"
  }
#line 245 "jumpopt.m"
}

#line 245 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 245 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
#line 245 "jumpopt.m"
{
#line 245 "jumpopt.m"
  {
#line 245 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 245 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_23 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 245 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_24 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 245 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_23 == ll_backend__jumpopt__CastY_24);
#line 245 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 245 "jumpopt.m"
    else
#line 245 "jumpopt.m"
      {
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_26_26;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_27_27;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_28_28;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_29_29;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_30_30;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_31_31;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_32_32;
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 2)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 3)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 4)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 5)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 6)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 7)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 8)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 9)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
#line 245 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));

#line 3019 "ll_backend.jumpopt.c"
        {
#line 3021 "ll_backend.jumpopt.c"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_13_13)));
        }
#line 245 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
          {
#line 3028 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeInfo_26_26 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3030 "ll_backend.jumpopt.c"
            {
#line 3032 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_26_26, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_14_14)));
            }
#line 245 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
              {
#line 3039 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__TypeInfo_27_27 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[2];
#line 3041 "ll_backend.jumpopt.c"
                {
#line 3043 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_27_27, ((MR_Box) (ll_backend__jumpopt__V_5_5)), ((MR_Box) (ll_backend__jumpopt__V_15_15)));
                }
#line 245 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                  {
#line 3050 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__TypeInfo_28_28 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3052 "ll_backend.jumpopt.c"
                    {
#line 3054 "ll_backend.jumpopt.c"
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_28_28, ((MR_Box) (ll_backend__jumpopt__V_6_6)), ((MR_Box) (ll_backend__jumpopt__V_16_16)));
                    }
#line 245 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                      {
#line 3061 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__TypeInfo_29_29 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3063 "ll_backend.jumpopt.c"
                        {
#line 3065 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_29_29, ((MR_Box) (ll_backend__jumpopt__V_7_7)), ((MR_Box) (ll_backend__jumpopt__V_17_17)));
                        }
#line 245 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                          {
#line 3072 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__TypeInfo_30_30 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3074 "ll_backend.jumpopt.c"
                            {
#line 3076 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_30_30, ((MR_Box) (ll_backend__jumpopt__V_8_8)), ((MR_Box) (ll_backend__jumpopt__V_18_18)));
                            }
#line 245 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                              {
#line 3083 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__TypeInfo_31_31 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3085 "ll_backend.jumpopt.c"
                                {
#line 3087 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_31_31, ((MR_Box) (ll_backend__jumpopt__V_9_9)), ((MR_Box) (ll_backend__jumpopt__V_19_19)));
                                }
#line 245 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                  {
#line 3094 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__TypeInfo_32_32 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[2];
#line 3096 "ll_backend.jumpopt.c"
                                    {
#line 3098 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_32_32, ((MR_Box) (ll_backend__jumpopt__V_10_10)), ((MR_Box) (ll_backend__jumpopt__V_20_20)));
                                    }
#line 245 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                      {
#line 3105 "ll_backend.jumpopt.c"
                                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_11_11 == ll_backend__jumpopt__V_21_21);
#line 245 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 3109 "ll_backend.jumpopt.c"
                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_12_12 == ll_backend__jumpopt__V_22_22);
#line 245 "jumpopt.m"
                                      }
#line 245 "jumpopt.m"
                                  }
#line 245 "jumpopt.m"
                              }
#line 245 "jumpopt.m"
                          }
#line 245 "jumpopt.m"
                      }
#line 245 "jumpopt.m"
                  }
#line 245 "jumpopt.m"
              }
#line 245 "jumpopt.m"
          }
#line 245 "jumpopt.m"
      }
#line 245 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 245 "jumpopt.m"
  }
#line 245 "jumpopt.m"
}

#line 1214 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_foreign_proc_component_5_p_0(
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1214 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1214 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1214 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24)
#line 1214 "jumpopt.m"
{
#line 1220 "jumpopt.m"
  {
#line 1220 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1220 "jumpopt.m"
    if ((ll_backend__jumpopt__STATE_VARIABLE_Component_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1239 "jumpopt.m"
      {
#line 1239 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1239 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1239 "jumpopt.m"
      }
#line 1220 "jumpopt.m"
    else
#line 1220 "jumpopt.m"
      if (((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 1))))
#line 1220 "jumpopt.m"
        {
#line 1220 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1220 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1220 "jumpopt.m"
        }
#line 1220 "jumpopt.m"
      else
#line 1220 "jumpopt.m"
        if (((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 2))))
#line 1222 "jumpopt.m"
          {
#line 1222 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1222 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1222 "jumpopt.m"
          }
#line 1220 "jumpopt.m"
        else
#line 1220 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1237 "jumpopt.m"
            {
#line 1237 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1237 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1237 "jumpopt.m"
            }
#line 1220 "jumpopt.m"
          else
#line 1220 "jumpopt.m"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1228 "jumpopt.m"
              {
#line 1228 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Label0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 1)));
#line 1228 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Label_19;
#line 1063 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Instr0_31;
#line 1061 "jumpopt.m"
                MR_Box ll_backend__jumpopt__conv0_Instr0_31;

#line 1061 "jumpopt.m"
                {
#line 1061 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_6, ((MR_Box) (ll_backend__jumpopt__Label0_18)), &ll_backend__jumpopt__conv0_Instr0_31);
                }
#line 1061 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1061 "jumpopt.m"
                  {
#line 1061 "jumpopt.m"
                    ll_backend__jumpopt__Instr0_31 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_31);
#line 1061 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1061 "jumpopt.m"
                  }
#line 1063 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1091 "jumpopt.m"
                  {
#line 1092 "jumpopt.m"
                    MR_Word ll_backend__jumpopt___Instr_32;

#line 1092 "jumpopt.m"
                    {
#line 1092 "jumpopt.m"
                      ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_18, &ll_backend__jumpopt__Label_19, ll_backend__jumpopt__Instr0_31, &ll_backend__jumpopt___Instr_32);
                    }
#line 1091 "jumpopt.m"
                  }
#line 1063 "jumpopt.m"
                else
#line 1064 "jumpopt.m"
                  ll_backend__jumpopt__Label_19 = ll_backend__jumpopt__Label0_18;
#line 1230 "jumpopt.m"
                {
#line 1230 "jumpopt.m"
                  MR_Word base;
#line 1230 "jumpopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = base;
#line 1230 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1230 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Label_19));
#line 1230 "jumpopt.m"
                }
#line 1231 "jumpopt.m"
                {
#line 1231 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_19, ll_backend__jumpopt__Label0_18);
                }
#line 1233 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1231 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1233 "jumpopt.m"
                else
#line 1234 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = (MR_Integer) 1;
#line 1228 "jumpopt.m"
              }
#line 1220 "jumpopt.m"
            else
#line 1220 "jumpopt.m"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1226 "jumpopt.m"
                {
#line 1226 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1226 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1226 "jumpopt.m"
                }
#line 1220 "jumpopt.m"
              else
#line 1224 "jumpopt.m"
                {
#line 1224 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1224 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1224 "jumpopt.m"
                }
#line 1220 "jumpopt.m"
  }
#line 1214 "jumpopt.m"
}

#line 1180 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_labels_lval_3_p_0(
#line 1180 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_1,
#line 1180 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1180 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
#line 1180 "jumpopt.m"
{
#line 1182 "jumpopt.m"
  {
#line 1182 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1182 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1185 "jumpopt.m"
      *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 1182 "jumpopt.m"
    else
#line 1182 "jumpopt.m"
      if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1186 "jumpopt.m"
        *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 1182 "jumpopt.m"
      else
#line 1182 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1184 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1182 "jumpopt.m"
        else
#line 1182 "jumpopt.m"
          if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1188 "jumpopt.m"
            *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1182 "jumpopt.m"
          else
#line 1182 "jumpopt.m"
            if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1187 "jumpopt.m"
              *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 1182 "jumpopt.m"
            else
#line 1182 "jumpopt.m"
              if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "jumpopt.m"
                *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "jumpopt.m"
              else
#line 1182 "jumpopt.m"
                if (((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1182 "jumpopt.m"
                  *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                else
#line 1182 "jumpopt.m"
                  if (((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1189 "jumpopt.m"
                    *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                  else
#line 1182 "jumpopt.m"
                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1193 "jumpopt.m"
                      *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                    else
#line 1182 "jumpopt.m"
                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1206 "jumpopt.m"
                        {
#line 1206 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Tag_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1206 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Rval0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 1206 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Field0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 1206 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Rval_46;
#line 1206 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Field_47;

#line 1207 "jumpopt.m"
                          {
#line 1207 "jumpopt.m"
                            ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_44, &ll_backend__jumpopt__Rval_46);
                          }
#line 1208 "jumpopt.m"
                          {
#line 1208 "jumpopt.m"
                            ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Field0_45, &ll_backend__jumpopt__Field_47);
                          }
#line 1206 "jumpopt.m"
                          {
#line 1206 "jumpopt.m"
                            MR_Word base;
#line 1206 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "jumpopt.m"
                            *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1206 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1206 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Tag_43));
#line 1206 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_46));
#line 1206 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__Field_47));
#line 1206 "jumpopt.m"
                          }
#line 1206 "jumpopt.m"
                        }
#line 1182 "jumpopt.m"
                      else
#line 1182 "jumpopt.m"
                        if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1192 "jumpopt.m"
                          *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                        else
#line 1182 "jumpopt.m"
                          if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1194 "jumpopt.m"
                            *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                          else
#line 1182 "jumpopt.m"
                            if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1211 "jumpopt.m"
                              {
#line 1212 "jumpopt.m"
                                {
#line 1212 "jumpopt.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_labels_lval\'/3", (MR_String) "lvar");
#line 1212 "jumpopt.m"
                                  return;
                                }
#line 1211 "jumpopt.m"
                              }
#line 1182 "jumpopt.m"
                            else
#line 1182 "jumpopt.m"
                              if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1209 "jumpopt.m"
                                {
#line 1209 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__Rval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1209 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__Rval_50;

#line 1210 "jumpopt.m"
                                  {
#line 1210 "jumpopt.m"
                                    ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_49, &ll_backend__jumpopt__Rval_50);
                                  }
#line 1209 "jumpopt.m"
                                  {
#line 1209 "jumpopt.m"
                                    MR_Word base;
#line 1209 "jumpopt.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "jumpopt.m"
                                    *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1209 "jumpopt.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1209 "jumpopt.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_50));
#line 1209 "jumpopt.m"
                                  }
#line 1209 "jumpopt.m"
                                }
#line 1182 "jumpopt.m"
                              else
#line 1182 "jumpopt.m"
                                if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1191 "jumpopt.m"
                                  *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                                else
#line 1182 "jumpopt.m"
                                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1203 "jumpopt.m"
                                    {
#line 1203 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Rval0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1203 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Rval_41;

#line 1204 "jumpopt.m"
                                      {
#line 1204 "jumpopt.m"
                                        ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_40, &ll_backend__jumpopt__Rval_41);
                                      }
#line 1203 "jumpopt.m"
                                      {
#line 1203 "jumpopt.m"
                                        MR_Word base;
#line 1203 "jumpopt.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "jumpopt.m"
                                        *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1203 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1203 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_41));
#line 1203 "jumpopt.m"
                                      }
#line 1203 "jumpopt.m"
                                    }
#line 1182 "jumpopt.m"
                                  else
#line 1182 "jumpopt.m"
                                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1199 "jumpopt.m"
                                      {
#line 1199 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__Rval0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1199 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__Rval_35;

#line 1200 "jumpopt.m"
                                        {
#line 1200 "jumpopt.m"
                                          ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_34, &ll_backend__jumpopt__Rval_35);
                                        }
#line 1199 "jumpopt.m"
                                        {
#line 1199 "jumpopt.m"
                                          MR_Word base;
#line 1199 "jumpopt.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "jumpopt.m"
                                          *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1199 "jumpopt.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1199 "jumpopt.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_35));
#line 1199 "jumpopt.m"
                                        }
#line 1199 "jumpopt.m"
                                      }
#line 1182 "jumpopt.m"
                                    else
#line 1182 "jumpopt.m"
                                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1197 "jumpopt.m"
                                        {
#line 1197 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__Rval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1197 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__Rval_32;

#line 1198 "jumpopt.m"
                                          {
#line 1198 "jumpopt.m"
                                            ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_31, &ll_backend__jumpopt__Rval_32);
                                          }
#line 1197 "jumpopt.m"
                                          {
#line 1197 "jumpopt.m"
                                            MR_Word base;
#line 1197 "jumpopt.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "jumpopt.m"
                                            *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1197 "jumpopt.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1197 "jumpopt.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_32));
#line 1197 "jumpopt.m"
                                          }
#line 1197 "jumpopt.m"
                                        }
#line 1182 "jumpopt.m"
                                      else
#line 1182 "jumpopt.m"
                                        if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1190 "jumpopt.m"
                                          *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1182 "jumpopt.m"
                                        else
#line 1182 "jumpopt.m"
                                          if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1201 "jumpopt.m"
                                            {
#line 1201 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1201 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__Rval_38;

#line 1202 "jumpopt.m"
                                              {
#line 1202 "jumpopt.m"
                                                ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_37, &ll_backend__jumpopt__Rval_38);
                                              }
#line 1201 "jumpopt.m"
                                              {
#line 1201 "jumpopt.m"
                                                MR_Word base;
#line 1201 "jumpopt.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "jumpopt.m"
                                                *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1201 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1201 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_38));
#line 1201 "jumpopt.m"
                                              }
#line 1201 "jumpopt.m"
                                            }
#line 1182 "jumpopt.m"
                                          else
#line 1195 "jumpopt.m"
                                            {
#line 1195 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__Rval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1195 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__Rval_29;

#line 1196 "jumpopt.m"
                                              {
#line 1196 "jumpopt.m"
                                                ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_28, &ll_backend__jumpopt__Rval_29);
                                              }
#line 1195 "jumpopt.m"
                                              {
#line 1195 "jumpopt.m"
                                                MR_Word base;
#line 1195 "jumpopt.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "jumpopt.m"
                                                *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1195 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1195 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_29));
#line 1195 "jumpopt.m"
                                              }
#line 1195 "jumpopt.m"
                                            }
#line 1182 "jumpopt.m"
  }
#line 1180 "jumpopt.m"
}

#line 1118 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_labels_rval_3_p_0(
#line 1118 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_1,
#line 1118 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1118 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
#line 1118 "jumpopt.m"
{
#line 1120 "jumpopt.m"
  {
#line 1120 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1120 "jumpopt.m"
    if (((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1120 "jumpopt.m"
      {
#line 1120 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Lval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 1120 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Lval_6;

#line 1121 "jumpopt.m"
        {
#line 1121 "jumpopt.m"
          ll_backend__jumpopt__short_labels_lval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Lval0_5, &ll_backend__jumpopt__Lval_6);
        }
#line 1120 "jumpopt.m"
        {
#line 1120 "jumpopt.m"
          MR_Word base;
#line 1120 "jumpopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1120 "jumpopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__jumpopt__Lval_6));
#line 1120 "jumpopt.m"
        }
#line 1120 "jumpopt.m"
      }
#line 1120 "jumpopt.m"
    else
#line 1120 "jumpopt.m"
      if (((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1124 "jumpopt.m"
        {
#line 1124 "jumpopt.m"
          MR_Integer ll_backend__jumpopt__Tag_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 1124 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Rval0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1124 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Rval_16;

#line 1125 "jumpopt.m"
          {
#line 1125 "jumpopt.m"
            ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_15, &ll_backend__jumpopt__Rval_16);
          }
#line 1124 "jumpopt.m"
          {
#line 1124 "jumpopt.m"
            MR_Word base;
#line 1124 "jumpopt.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "jumpopt.m"
            *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1124 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__jumpopt__Tag_14));
#line 1124 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_16));
#line 1124 "jumpopt.m"
          }
#line 1124 "jumpopt.m"
        }
#line 1120 "jumpopt.m"
      else
#line 1120 "jumpopt.m"
        if (((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1122 "jumpopt.m"
          {
#line 1123 "jumpopt.m"
            {
#line 1123 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_labels_rval\'/3", (MR_String) "var");
#line 1123 "jumpopt.m"
              return;
            }
#line 1122 "jumpopt.m"
          }
#line 1120 "jumpopt.m"
        else
#line 1120 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1132 "jumpopt.m"
            {
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Op_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval_30;
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval_31;

#line 1133 "jumpopt.m"
              {
#line 1133 "jumpopt.m"
                ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__LRval0_28, &ll_backend__jumpopt__LRval_30);
              }
#line 1134 "jumpopt.m"
              {
#line 1134 "jumpopt.m"
                ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__RRval0_29, &ll_backend__jumpopt__RRval_31);
              }
#line 1132 "jumpopt.m"
              {
#line 1132 "jumpopt.m"
                MR_Word base;
#line 1132 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "jumpopt.m"
                *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1132 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1132 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_27));
#line 1132 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__LRval_30));
#line 1132 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__RRval_31));
#line 1132 "jumpopt.m"
              }
#line 1132 "jumpopt.m"
            }
#line 1120 "jumpopt.m"
          else
#line 1120 "jumpopt.m"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1127 "jumpopt.m"
              {
#line 1127 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Const0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1127 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Const_21;

#line 1140 "jumpopt.m"
                if ((ll_backend__jumpopt__Const0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1141 "jumpopt.m"
                  ll_backend__jumpopt__Const_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1140 "jumpopt.m"
                else
#line 1140 "jumpopt.m"
                  if ((ll_backend__jumpopt__Const0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "jumpopt.m"
                    ll_backend__jumpopt__Const_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1140 "jumpopt.m"
                  else
#line 1140 "jumpopt.m"
                    if (((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 2))))
#line 1143 "jumpopt.m"
                      ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1140 "jumpopt.m"
                    else
#line 1140 "jumpopt.m"
                      if (((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 1))))
#line 1142 "jumpopt.m"
                        ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1140 "jumpopt.m"
                      else
#line 1140 "jumpopt.m"
                        if (((((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1148 "jumpopt.m"
                          {
#line 1148 "jumpopt.m"
                            MR_Word ll_backend__jumpopt__CodeAddr0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_20, (MR_Integer) 1)));
#line 1148 "jumpopt.m"
                            MR_Word ll_backend__jumpopt__CodeAddr_49;
#line 1152 "jumpopt.m"
                            MR_Word ll_backend__jumpopt__Label0_50;

#line 1149 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CodeAddr0_48)) == (MR_mktag((MR_Integer) 1)));
#line 1149 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1149 "jumpopt.m"
                              {
#line 1149 "jumpopt.m"
                                ll_backend__jumpopt__Label0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr0_48, (MR_Integer) 0)));
#line 1150 "jumpopt.m"
                                {
#line 1150 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__Label_51;
#line 1063 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__Instr0_58;
#line 1061 "jumpopt.m"
                                  MR_Box ll_backend__jumpopt__conv0_Instr0_58;

#line 1061 "jumpopt.m"
                                  {
#line 1061 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_1, ((MR_Box) (ll_backend__jumpopt__Label0_50)), &ll_backend__jumpopt__conv0_Instr0_58);
                                  }
#line 1061 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 1061 "jumpopt.m"
                                    {
#line 1061 "jumpopt.m"
                                      ll_backend__jumpopt__Instr0_58 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_58);
#line 1061 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1061 "jumpopt.m"
                                    }
#line 1063 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 1091 "jumpopt.m"
                                    {
#line 1092 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt___Instr_59;

#line 1092 "jumpopt.m"
                                      {
#line 1092 "jumpopt.m"
                                        ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__InstrMap_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_50, &ll_backend__jumpopt__Label_51, ll_backend__jumpopt__Instr0_58, &ll_backend__jumpopt___Instr_59);
                                      }
#line 1091 "jumpopt.m"
                                    }
#line 1063 "jumpopt.m"
                                  else
#line 1064 "jumpopt.m"
                                    ll_backend__jumpopt__Label_51 = ll_backend__jumpopt__Label0_50;
#line 1151 "jumpopt.m"
                                  {
#line 1151 "jumpopt.m"
                                    ll_backend__jumpopt__CodeAddr_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr_49, 0) = ((MR_Box) (ll_backend__jumpopt__Label_51));
#line 1151 "jumpopt.m"
                                  }
#line 1150 "jumpopt.m"
                                }
#line 1149 "jumpopt.m"
                              }
#line 1149 "jumpopt.m"
                            else
#line 1153 "jumpopt.m"
                              ll_backend__jumpopt__CodeAddr_49 = ll_backend__jumpopt__CodeAddr0_48;
#line 1148 "jumpopt.m"
                            {
#line 1148 "jumpopt.m"
                              ll_backend__jumpopt__Const_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "jumpopt.m"
                              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1148 "jumpopt.m"
                              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_21, 1) = ((MR_Box) (ll_backend__jumpopt__CodeAddr_49));
#line 1148 "jumpopt.m"
                            }
#line 1148 "jumpopt.m"
                          }
#line 1140 "jumpopt.m"
                        else
#line 1140 "jumpopt.m"
                          if (((((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_20, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1155 "jumpopt.m"
                            ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1140 "jumpopt.m"
                          else
#line 1140 "jumpopt.m"
                            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1144 "jumpopt.m"
                              ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1140 "jumpopt.m"
                            else
#line 1140 "jumpopt.m"
                              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Const0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_20, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1146 "jumpopt.m"
                                ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1140 "jumpopt.m"
                              else
#line 1145 "jumpopt.m"
                                ll_backend__jumpopt__Const_21 = ll_backend__jumpopt__Const0_20;
#line 1127 "jumpopt.m"
                {
#line 1127 "jumpopt.m"
                  MR_Word base;
#line 1127 "jumpopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "jumpopt.m"
                  *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1127 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1127 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Const_21));
#line 1127 "jumpopt.m"
                }
#line 1127 "jumpopt.m"
              }
#line 1120 "jumpopt.m"
            else
#line 1120 "jumpopt.m"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1135 "jumpopt.m"
                *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1120 "jumpopt.m"
              else
#line 1120 "jumpopt.m"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1126 "jumpopt.m"
                  *ll_backend__jumpopt__HeadVar__3_3 = ll_backend__jumpopt__HeadVar__2_2;
#line 1120 "jumpopt.m"
                else
#line 1129 "jumpopt.m"
                  {
#line 1129 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Op_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1129 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Rval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 1129 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Rval_25;

#line 1130 "jumpopt.m"
                    {
#line 1130 "jumpopt.m"
                      ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_1, ll_backend__jumpopt__Rval0_24, &ll_backend__jumpopt__Rval_25);
                    }
#line 1129 "jumpopt.m"
                    {
#line 1129 "jumpopt.m"
                      MR_Word base;
#line 1129 "jumpopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "jumpopt.m"
                      *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1129 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1129 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_23));
#line 1129 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_25));
#line 1129 "jumpopt.m"
                    }
#line 1129 "jumpopt.m"
                  }
#line 1120 "jumpopt.m"
  }
#line 1118 "jumpopt.m"
}

#line 1094 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_2_6_p_0(
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1094 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1094 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1094 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12)
#line 1094 "jumpopt.m"
{
#line 1111 "jumpopt.m"
  while (MR_TRUE)
#line 1111 "jumpopt.m"
    {
#line 1111 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 1111 "jumpopt.m"
      {
#line 1111 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 1111 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetLabel_15;
#line 1111 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetInstr_16;
#line 1100 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_19_19;
#line 1100 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_20_20;
#line 1100 "jumpopt.m"
        MR_Word ll_backend__jumpopt__SrcUinstr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 0)));
#line 1100 "jumpopt.m"
        MR_String ll_backend__jumpopt___Comment_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 1)));
#line 1106 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv0_TargetInstr_16;

#line 1103 "jumpopt.m"
        if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1102 "jumpopt.m"
          {
#line 1102 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));

#line 1102 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1102 "jumpopt.m"
              ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)));
#line 1102 "jumpopt.m"
          }
#line 1103 "jumpopt.m"
        else
#line 1103 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1104 "jumpopt.m"
            {
#line 1104 "jumpopt.m"
              ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));
#line 1104 "jumpopt.m"
              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1104 "jumpopt.m"
            }
#line 1103 "jumpopt.m"
          else
#line 1103 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1100 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1100 "jumpopt.m"
          {
#line 4085 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 4087 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1106 "jumpopt.m"
            {
#line 1106 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ll_backend__jumpopt__TypeCtorInfo_20_20, ll_backend__jumpopt__InstrMap_7, ((MR_Box) (ll_backend__jumpopt__TargetLabel_15)), &ll_backend__jumpopt__conv0_TargetInstr_16);
            }
#line 1106 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1106 "jumpopt.m"
              {
#line 1106 "jumpopt.m"
                ll_backend__jumpopt__TargetInstr_16 = ((MR_Word) ll_backend__jumpopt__conv0_TargetInstr_16);
#line 1106 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1106 "jumpopt.m"
              }
#line 1100 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1100 "jumpopt.m"
              {
#line 1107 "jumpopt.m"
                {
#line 1107 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = mercury__list__member_2_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__jumpopt__SrcLabel_9)), ll_backend__jumpopt__LabelsSofar_8);
                }
#line 1107 "jumpopt.m"
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 1100 "jumpopt.m"
              }
#line 1100 "jumpopt.m"
          }
#line 1111 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1109 "jumpopt.m"
          {
#line 1109 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;

#line 1109 "jumpopt.m"
            {
#line 1109 "jumpopt.m"
              ll_backend__jumpopt__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 0) = ((MR_Box) (ll_backend__jumpopt__SrcLabel_9));
#line 1109 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 1) = ((MR_Box) (ll_backend__jumpopt__LabelsSofar_8));
#line 1109 "jumpopt.m"
            }
#line 1109 "jumpopt.m"
            /* direct tailcall eliminated */
#line 1109 "jumpopt.m"
            {
#line 1109 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LabelsSofar__tmp_copy_8 = ll_backend__jumpopt__V_18_18;
#line 1109 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcLabel__tmp_copy_9 = ll_backend__jumpopt__TargetLabel_15;
#line 1109 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcInstr__tmp_copy_11 = ll_backend__jumpopt__TargetInstr_16;

#line 1109 "jumpopt.m"
              ll_backend__jumpopt__SrcInstr_11 = ll_backend__jumpopt__SrcInstr__tmp_copy_11;
#line 1109 "jumpopt.m"
              ll_backend__jumpopt__SrcLabel_9 = ll_backend__jumpopt__SrcLabel__tmp_copy_9;
#line 1109 "jumpopt.m"
              ll_backend__jumpopt__LabelsSofar_8 = ll_backend__jumpopt__LabelsSofar__tmp_copy_8;
#line 1109 "jumpopt.m"
            }
#line 1109 "jumpopt.m"
            continue;
#line 1109 "jumpopt.m"
          }
#line 1111 "jumpopt.m"
        else
#line 1112 "jumpopt.m"
          {
#line 1112 "jumpopt.m"
            *ll_backend__jumpopt__DestLabel_10 = ll_backend__jumpopt__SrcLabel_9;
#line 1113 "jumpopt.m"
            *ll_backend__jumpopt__DestInstr_12 = ll_backend__jumpopt__SrcInstr_11;
#line 1112 "jumpopt.m"
          }
#line 1111 "jumpopt.m"
      }
#line 1111 "jumpopt.m"
      break;
#line 1111 "jumpopt.m"
    }
#line 1094 "jumpopt.m"
}

#line 1088 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1088 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1088 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1088 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10)
#line 1088 "jumpopt.m"
{
#line 1091 "jumpopt.m"
  {
#line 1091 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1092 "jumpopt.m"
    {
#line 1092 "jumpopt.m"
      ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__SrcLabel_7, ll_backend__jumpopt__DestLabel_8, ll_backend__jumpopt__SrcInstr_9, ll_backend__jumpopt__DestInstr_10);
#line 1092 "jumpopt.m"
      return;
    }
#line 1091 "jumpopt.m"
  }
#line 1088 "jumpopt.m"
}

#line 1067 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_maybe_labels_3_p_0(
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
#line 1067 "jumpopt.m"
{
#line 1070 "jumpopt.m"
  {
#line 1070 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1070 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "jumpopt.m"
      *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1070 "jumpopt.m"
    else
#line 1072 "jumpopt.m"
      {
#line 1072 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 1072 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1072 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel_8;
#line 1072 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels_9;

#line 1077 "jumpopt.m"
        if ((ll_backend__jumpopt__MaybeLabel0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "jumpopt.m"
          ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1077 "jumpopt.m"
        else
#line 1074 "jumpopt.m"
          {
#line 1074 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel0_6, (MR_Integer) 0)));
#line 1074 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_11;
#line 1063 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_15;
#line 1061 "jumpopt.m"
            MR_Box ll_backend__jumpopt__conv0_Instr0_15;

#line 1061 "jumpopt.m"
            {
#line 1061 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__Label0_10)), &ll_backend__jumpopt__conv0_Instr0_15);
            }
#line 1061 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1061 "jumpopt.m"
              {
#line 1061 "jumpopt.m"
                ll_backend__jumpopt__Instr0_15 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_15);
#line 1061 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1061 "jumpopt.m"
              }
#line 1063 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1091 "jumpopt.m"
              {
#line 1092 "jumpopt.m"
                MR_Word ll_backend__jumpopt___Instr_16;

#line 1092 "jumpopt.m"
                {
#line 1092 "jumpopt.m"
                  ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_10, &ll_backend__jumpopt__Label_11, ll_backend__jumpopt__Instr0_15, &ll_backend__jumpopt___Instr_16);
                }
#line 1091 "jumpopt.m"
              }
#line 1063 "jumpopt.m"
            else
#line 1064 "jumpopt.m"
              ll_backend__jumpopt__Label_11 = ll_backend__jumpopt__Label0_10;
#line 1076 "jumpopt.m"
            {
#line 1076 "jumpopt.m"
              ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel_8, 0) = ((MR_Box) (ll_backend__jumpopt__Label_11));
#line 1076 "jumpopt.m"
            }
#line 1074 "jumpopt.m"
          }
#line 1081 "jumpopt.m"
        {
#line 1081 "jumpopt.m"
          ll_backend__jumpopt__short_maybe_labels_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__MaybeLabels0_7, &ll_backend__jumpopt__MaybeLabels_9);
        }
#line 1072 "jumpopt.m"
        {
#line 1072 "jumpopt.m"
          MR_Word base;
#line 1072 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1072 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__MaybeLabel_8));
#line 1072 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__MaybeLabels_9));
#line 1072 "jumpopt.m"
        }
#line 1072 "jumpopt.m"
      }
#line 1070 "jumpopt.m"
  }
#line 1067 "jumpopt.m"
}

#line 1058 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_label_3_p_0(
#line 1058 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1058 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1058 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6)
#line 1058 "jumpopt.m"
{
#line 1063 "jumpopt.m"
  {
#line 1063 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 1063 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instr0_7;
#line 1061 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv0_Instr0_7;

#line 1061 "jumpopt.m"
    {
#line 1061 "jumpopt.m"
      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_5)), &ll_backend__jumpopt__conv0_Instr0_7);
    }
#line 1061 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1061 "jumpopt.m"
      {
#line 1061 "jumpopt.m"
        ll_backend__jumpopt__Instr0_7 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_7);
#line 1061 "jumpopt.m"
        ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1061 "jumpopt.m"
      }
#line 1063 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1091 "jumpopt.m"
      {
#line 1092 "jumpopt.m"
        MR_Word ll_backend__jumpopt___Instr_8;

#line 1092 "jumpopt.m"
        {
#line 1092 "jumpopt.m"
          ll_backend__jumpopt__final_dest_2_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_5, ll_backend__jumpopt__Label_6, ll_backend__jumpopt__Instr0_7, &ll_backend__jumpopt___Instr_8);
        }
#line 1091 "jumpopt.m"
      }
#line 1063 "jumpopt.m"
    else
#line 1064 "jumpopt.m"
      *ll_backend__jumpopt__Label_6 = ll_backend__jumpopt__Label0_5;
#line 1063 "jumpopt.m"
  }
#line 1058 "jumpopt.m"
}

#line 1034 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1034 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1034 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1034 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6)
#line 1034 "jumpopt.m"
{
#line 1049 "jumpopt.m"
  {
#line 1049 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_4)) == (MR_mktag((MR_Integer) 2)));
#line 1049 "jumpopt.m"
    MR_Word ll_backend__jumpopt__PrevLivevals_7;
#line 1049 "jumpopt.m"
    MR_Word ll_backend__jumpopt__BetweenLivevals_9;
#line 1049 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs2_11;
#line 1039 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs1_8;
#line 1039 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_12_12;
#line 1039 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_13_13;
#line 1041 "jumpopt.m"
    MR_String ll_backend__jumpopt__V_10_10;

#line 1039 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1039 "jumpopt.m"
      {
#line 1039 "jumpopt.m"
        ll_backend__jumpopt__PrevLivevals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_4, (MR_Integer) 0)));
#line 1040 "jumpopt.m"
        {
#line 1040 "jumpopt.m"
          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_5, &ll_backend__jumpopt__Instrs1_8);
        }
#line 1041 "jumpopt.m"
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1041 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1041 "jumpopt.m"
          {
#line 1041 "jumpopt.m"
            ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 0)));
#line 1041 "jumpopt.m"
            ll_backend__jumpopt__Instrs2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 1)));
#line 1041 "jumpopt.m"
            ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1041 "jumpopt.m"
            ll_backend__jumpopt__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 1)));
#line 1041 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 1041 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1041 "jumpopt.m"
              ll_backend__jumpopt__BetweenLivevals_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_13_13, (MR_Integer) 0)));
#line 1041 "jumpopt.m"
          }
#line 1039 "jumpopt.m"
      }
#line 1049 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1045 "jumpopt.m"
      {
#line 1043 "jumpopt.m"
        {
#line 1043 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[14], ((MR_Box) (ll_backend__jumpopt__BetweenLivevals_9)), ((MR_Box) (ll_backend__jumpopt__PrevLivevals_7)));
        }
#line 1045 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1044 "jumpopt.m"
          *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs2_11;
#line 1045 "jumpopt.m"
        else
#line 1046 "jumpopt.m"
          {
#line 1046 "jumpopt.m"
            {
#line 1046 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.adjust_livevals\'/3", (MR_String) "BetweenLivevals and PrevLivevals differ");
#line 1046 "jumpopt.m"
              return;
            }
#line 1046 "jumpopt.m"
          }
#line 1045 "jumpopt.m"
      }
#line 1049 "jumpopt.m"
    else
#line 1050 "jumpopt.m"
      *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs0_5;
#line 1049 "jumpopt.m"
  }
#line 1034 "jumpopt.m"
}

#line 1013 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1013 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1013 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4)
#line 1013 "jumpopt.m"
{
#line 1017 "jumpopt.m"
  {
#line 1017 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1017 "jumpopt.m"
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1019 "jumpopt.m"
      {
#line 1019 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1019 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1019 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Right_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 3)));

#line 1020 "jumpopt.m"
        if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 1020 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1020 "jumpopt.m"
        else
#line 1020 "jumpopt.m"
          if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 1020 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1020 "jumpopt.m"
          else
#line 1020 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1019 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
          {
#line 1026 "jumpopt.m"
            if (((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "jumpopt.m"
              {
#line 1027 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));

#line 1027 "jumpopt.m"
                {
#line 1027 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_28_28);
                }
#line 1027 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                  {
#line 1029 "jumpopt.m"
                    if (((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 2))))
#line 1029 "jumpopt.m"
                      {
#line 1029 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1029 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1029 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_10_10;
#line 1029 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_11_11;
#line 1029 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_12_12;
#line 1029 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_13_13;

#line 1029 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_8_8 == (MR_Integer) 0);
#line 1029 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                          {
#line 1029 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1029 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                              {
#line 1029 "jumpopt.m"
                                ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 1)));
#line 1029 "jumpopt.m"
                                ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 2)));
#line 1029 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_10_10 == (MR_Integer) 4);
#line 1029 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                                  {
#line 1029 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1029 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                                      {
#line 1029 "jumpopt.m"
                                        ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 1)));
#line 1029 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1029 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 1029 "jumpopt.m"
                                          {
#line 1029 "jumpopt.m"
                                            ll_backend__jumpopt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1029 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 0);
#line 1029 "jumpopt.m"
                                          }
#line 1029 "jumpopt.m"
                                      }
#line 1029 "jumpopt.m"
                                  }
#line 1029 "jumpopt.m"
                              }
#line 1029 "jumpopt.m"
                          }
#line 1029 "jumpopt.m"
                      }
#line 1029 "jumpopt.m"
                    else
#line 1029 "jumpopt.m"
                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1028 "jumpopt.m"
                        {
#line 1028 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1028 "jumpopt.m"
                          MR_Integer ll_backend__jumpopt__V_15_15;

#line 1028 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                            {
#line 1028 "jumpopt.m"
                              ll_backend__jumpopt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_14_14, (MR_Integer) 0)));
#line 1028 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_15_15 == (MR_Integer) 0);
#line 1028 "jumpopt.m"
                            }
#line 1028 "jumpopt.m"
                        }
#line 1029 "jumpopt.m"
                      else
#line 1029 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1029 "jumpopt.m"
                  }
#line 1027 "jumpopt.m"
              }
#line 1026 "jumpopt.m"
            else
#line 1026 "jumpopt.m"
              if (((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 2))))
#line 1022 "jumpopt.m"
                {
#line 1022 "jumpopt.m"
                  MR_Integer ll_backend__jumpopt__V_16_16;
#line 1022 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_17_17;
#line 1022 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_18_18;
#line 1022 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_19_19;
#line 1022 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_20_20;
#line 1022 "jumpopt.m"
                  MR_Integer ll_backend__jumpopt__V_21_21;
#line 1022 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_29_29;

#line 1022 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                    {
#line 1022 "jumpopt.m"
                      ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1022 "jumpopt.m"
                      {
#line 1022 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_29_29);
                      }
#line 1022 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                        {
#line 1024 "jumpopt.m"
                          ll_backend__jumpopt__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));
#line 1024 "jumpopt.m"
                          ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1024 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_16_16 == (MR_Integer) 0);
#line 1022 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                            {
#line 1024 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1024 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 1024 "jumpopt.m"
                                {
#line 1024 "jumpopt.m"
                                  ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 1)));
#line 1024 "jumpopt.m"
                                  ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 2)));
#line 1024 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_18_18 == (MR_Integer) 4);
#line 1022 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                                    {
#line 1024 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1024 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 1024 "jumpopt.m"
                                        {
#line 1024 "jumpopt.m"
                                          ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 1)));
#line 1024 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1024 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 1024 "jumpopt.m"
                                            {
#line 1024 "jumpopt.m"
                                              ll_backend__jumpopt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_20_20, (MR_Integer) 0)));
#line 1024 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_21_21 == (MR_Integer) 0);
#line 1024 "jumpopt.m"
                                            }
#line 1024 "jumpopt.m"
                                        }
#line 1022 "jumpopt.m"
                                    }
#line 1024 "jumpopt.m"
                                }
#line 1022 "jumpopt.m"
                            }
#line 1022 "jumpopt.m"
                        }
#line 1022 "jumpopt.m"
                    }
#line 1022 "jumpopt.m"
                }
#line 1026 "jumpopt.m"
              else
#line 1026 "jumpopt.m"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1022 "jumpopt.m"
                  {
#line 1022 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_22_22;
#line 1022 "jumpopt.m"
                    MR_Integer ll_backend__jumpopt__V_23_23;
#line 1022 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_27_27;

#line 1022 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                      {
#line 1022 "jumpopt.m"
                        ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1022 "jumpopt.m"
                        {
#line 1022 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_27_27);
                        }
#line 1022 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                          {
#line 1023 "jumpopt.m"
                            ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1023 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1023 "jumpopt.m"
                              {
#line 1023 "jumpopt.m"
                                ll_backend__jumpopt__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_22_22, (MR_Integer) 0)));
#line 1023 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_23_23 == (MR_Integer) 0);
#line 1023 "jumpopt.m"
                              }
#line 1022 "jumpopt.m"
                          }
#line 1022 "jumpopt.m"
                      }
#line 1022 "jumpopt.m"
                  }
#line 1026 "jumpopt.m"
                else
#line 1026 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1026 "jumpopt.m"
          }
#line 1019 "jumpopt.m"
      }
#line 1017 "jumpopt.m"
    else
#line 1017 "jumpopt.m"
      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1017 "jumpopt.m"
        {
#line 1017 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1017 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1017 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_26_26;

#line 1017 "jumpopt.m"
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_24_24 == (MR_Integer) 7);
#line 1017 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 1017 "jumpopt.m"
            {
#line 1017 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1017 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 1017 "jumpopt.m"
                {
#line 1017 "jumpopt.m"
                  ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_25_25, (MR_Integer) 0)));
#line 1017 "jumpopt.m"
                  {
#line 1017 "jumpopt.m"
                    return ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_26_26);
                  }
#line 1017 "jumpopt.m"
                }
#line 1017 "jumpopt.m"
            }
#line 1017 "jumpopt.m"
        }
#line 1017 "jumpopt.m"
      else
#line 1017 "jumpopt.m"
        ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1017 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 1017 "jumpopt.m"
  }
#line 1013 "jumpopt.m"
}

#line 995 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 995 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3)
#line 995 "jumpopt.m"
{
#line 997 "jumpopt.m"
  {
#line 997 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 997 "jumpopt.m"
    MR_String ll_backend__jumpopt__HeadVar__2_2;

#line 997 "jumpopt.m"
    {
#line 997 "jumpopt.m"
      return ll_backend__jumpopt__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment_3, (MR_String) " (redirected return)");
    }
#line 997 "jumpopt.m"
    return ll_backend__jumpopt__HeadVar__2_2;
#line 997 "jumpopt.m"
  }
#line 995 "jumpopt.m"
}

#line 965 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 965 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1)
#line 965 "jumpopt.m"
{
#line 967 "jumpopt.m"
  while (MR_TRUE)
#line 967 "jumpopt.m"
    {
#line 967 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 967 "jumpopt.m"
      {
#line 967 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 967 "jumpopt.m"
        MR_Word ll_backend__jumpopt__HeadVar__2_2;

#line 967 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "jumpopt.m"
          ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 1;
#line 967 "jumpopt.m"
        else
#line 968 "jumpopt.m"
          {
#line 968 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 968 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 968 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 0)));
#line 969 "jumpopt.m"
            MR_String ll_backend__jumpopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 1)));
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_12_12;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_14_14;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_15_15;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_16_16;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_19_19;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_20_20;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_21_21;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_22_22;
#line 982 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_11_11;

#line 982 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 982 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 982 "jumpopt.m"
              {
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 982 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 982 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 982 "jumpopt.m"
                  ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 982 "jumpopt.m"
              }
#line 4974 "ll_backend.jumpopt.c"
            if (ll_backend__jumpopt__succeeded)
#line 973 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 4978 "ll_backend.jumpopt.c"
            else
#line 4980 "ll_backend.jumpopt.c"
              {
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_13_13;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_23_23;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_24_24;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_25_25;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_26_26;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_27_27;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_29_29;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_30_30;
#line 989 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_31_31;

#line 989 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 989 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 989 "jumpopt.m"
                  {
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 989 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 1);
#line 989 "jumpopt.m"
                  }
#line 5033 "ll_backend.jumpopt.c"
                if (ll_backend__jumpopt__succeeded)
#line 973 "jumpopt.m"
                  ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 5037 "ll_backend.jumpopt.c"
                else
#line 976 "jumpopt.m"
                  {
#line 976 "jumpopt.m"
                    /* direct tailcall eliminated */
#line 976 "jumpopt.m"
                    {
#line 976 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs_4;

#line 976 "jumpopt.m"
                      ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 976 "jumpopt.m"
                    }
#line 976 "jumpopt.m"
                    continue;
#line 976 "jumpopt.m"
                  }
#line 5056 "ll_backend.jumpopt.c"
              }
#line 968 "jumpopt.m"
          }
#line 967 "jumpopt.m"
        return ll_backend__jumpopt__HeadVar__2_2;
#line 967 "jumpopt.m"
      }
#line 967 "jumpopt.m"
      break;
#line 967 "jumpopt.m"
    }
#line 965 "jumpopt.m"
}

#line 608 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 608 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 608 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
#line 608 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
#line 608 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 608 "jumpopt.m"
{
#line 615 "jumpopt.m"
  {
#line 615 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 615 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 726 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetLabel_17;

#line 617 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_16)) == (MR_mktag((MR_Integer) 1)));
#line 617 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 617 "jumpopt.m"
      {
#line 617 "jumpopt.m"
        ll_backend__jumpopt__TargetLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_16, (MR_Integer) 0)));
#line 624 "jumpopt.m"
        {
#line 620 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_18_18;

#line 620 "jumpopt.m"
          {
#line 620 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__V_18_18);
          }
#line 624 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 622 "jumpopt.m"
            {
#line 623 "jumpopt.m"
              {
#line 623 "jumpopt.m"
                MR_Word base;
#line 623 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "jumpopt.m"
                *ll_backend__jumpopt__NewRemain_15 = base;
#line 623 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 623 "jumpopt.m"
              }
#line 623 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 622 "jumpopt.m"
            }
#line 624 "jumpopt.m"
          else
#line 636 "jumpopt.m"
            {
#line 625 "jumpopt.m"
              MR_Word ll_backend__jumpopt__IfTargetLabel_21;
#line 625 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_50_50;
#line 625 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_20_20;
#line 626 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_22_22;

#line 625 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 625 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 625 "jumpopt.m"
                {
#line 625 "jumpopt.m"
                  ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 1)));
#line 625 "jumpopt.m"
                  ll_backend__jumpopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 2)));
#line 625 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 625 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 625 "jumpopt.m"
                    {
#line 625 "jumpopt.m"
                      ll_backend__jumpopt__IfTargetLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_50_50, (MR_Integer) 0)));
#line 626 "jumpopt.m"
                      {
#line 626 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__IfTargetLabel_21, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__V_22_22);
                      }
#line 625 "jumpopt.m"
                    }
#line 625 "jumpopt.m"
                }
#line 636 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 634 "jumpopt.m"
                {
#line 634 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_51_51;
#line 634 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_83;

#line 634 "jumpopt.m"
                  {
#line 634 "jumpopt.m"
                    ll_backend__jumpopt__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_51_51, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 634 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_51_51, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 634 "jumpopt.m"
                  }
#line 634 "jumpopt.m"
                  {
#line 634 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 0) = ((MR_Box) (ll_backend__jumpopt__V_51_51));
#line 634 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "jumpopt.m"
                  }
#line 635 "jumpopt.m"
                  {
#line 635 "jumpopt.m"
                    MR_Word base;
#line 635 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 635 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_83));
#line 635 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 635 "jumpopt.m"
                  }
#line 635 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 634 "jumpopt.m"
                }
#line 636 "jumpopt.m"
              else
#line 645 "jumpopt.m"
                {
#line 645 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between0_24;
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__ProcMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 639 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv0_Between0_24;

#line 639 "jumpopt.m"
                  {
#line 639 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__ProcMap_23, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv0_Between0_24);
                  }
#line 639 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 639 "jumpopt.m"
                    {
#line 639 "jumpopt.m"
                      ll_backend__jumpopt__Between0_24 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_24);
#line 639 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 639 "jumpopt.m"
                    }
#line 645 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 641 "jumpopt.m"
                    {
#line 641 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between_25;
#line 641 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewInstrs_84;

#line 641 "jumpopt.m"
                      {
#line 641 "jumpopt.m"
                        ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_24, &ll_backend__jumpopt__Between_25);
                      }
#line 642 "jumpopt.m"
                      {
#line 642 "jumpopt.m"
                        ll_backend__jumpopt__NewInstrs_84 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_25, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[13]));
                      }
#line 644 "jumpopt.m"
                      {
#line 644 "jumpopt.m"
                        MR_Word base;
#line 644 "jumpopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "jumpopt.m"
                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 644 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_84));
#line 644 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 644 "jumpopt.m"
                      }
#line 644 "jumpopt.m"
                      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 641 "jumpopt.m"
                    }
#line 645 "jumpopt.m"
                  else
#line 654 "jumpopt.m"
                    {
#line 654 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between0_101;
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SdprocMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 647 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 648 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv1_Between0_101;

#line 648 "jumpopt.m"
                      {
#line 648 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SdprocMap_26, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv1_Between0_101);
                      }
#line 648 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 648 "jumpopt.m"
                        {
#line 648 "jumpopt.m"
                          ll_backend__jumpopt__Between0_101 = ((MR_Word) ll_backend__jumpopt__conv1_Between0_101);
#line 648 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 648 "jumpopt.m"
                        }
#line 654 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 650 "jumpopt.m"
                        {
#line 650 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_85;
#line 650 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Between_86;

#line 650 "jumpopt.m"
                          {
#line 650 "jumpopt.m"
                            ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_101, &ll_backend__jumpopt__Between_86);
                          }
#line 651 "jumpopt.m"
                          {
#line 651 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_85 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_86, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[13]));
                          }
#line 653 "jumpopt.m"
                          {
#line 653 "jumpopt.m"
                            MR_Word base;
#line 653 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 653 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_85));
#line 653 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 653 "jumpopt.m"
                          }
#line 653 "jumpopt.m"
                          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 650 "jumpopt.m"
                        }
#line 654 "jumpopt.m"
                      else
#line 661 "jumpopt.m"
                        {
#line 661 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__BetweenIncl0_28;
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__SuccMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 656 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 657 "jumpopt.m"
                          MR_Box ll_backend__jumpopt__conv2_BetweenIncl0_28;

#line 657 "jumpopt.m"
                          {
#line 657 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SuccMap_27, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv2_BetweenIncl0_28);
                          }
#line 657 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 657 "jumpopt.m"
                            {
#line 657 "jumpopt.m"
                              ll_backend__jumpopt__BetweenIncl0_28 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl0_28);
#line 657 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 657 "jumpopt.m"
                            }
#line 661 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 659 "jumpopt.m"
                            {
#line 659 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_87;

#line 659 "jumpopt.m"
                              {
#line 659 "jumpopt.m"
                                ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__BetweenIncl0_28, &ll_backend__jumpopt__NewInstrs_87);
                              }
#line 660 "jumpopt.m"
                              {
#line 660 "jumpopt.m"
                                MR_Word base;
#line 660 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 660 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_87));
#line 660 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 660 "jumpopt.m"
                              }
#line 660 "jumpopt.m"
                              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 659 "jumpopt.m"
                            }
#line 661 "jumpopt.m"
                          else
#line 694 "jumpopt.m"
                            {
#line 694 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__DestLabel_31;
#line 694 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__BlockMap_33;
#line 694 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__Block_34;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_195_195;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_196_196;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeInfo_197_197;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__InstrMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TargetInstr_30;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_66_66;
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 673 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 675 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv3_TargetInstr_30;
#line 676 "jumpopt.m"
                              MR_Word ll_backend__jumpopt___DestInstr_32;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_150_150;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_151_151;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_152_152;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_153_153;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_154_154;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_155_155;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_156_156;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_157_157;
#line 678 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_158_158;
#line 679 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv4_Block_34;

#line 673 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_65_65 == (MR_Integer) 1);
#line 673 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 673 "jumpopt.m"
                                {
#line 5535 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_195_195 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 5537 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 675 "jumpopt.m"
                                  {
#line 675 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeCtorInfo_196_196, ll_backend__jumpopt__InstrMap_29, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv3_TargetInstr_30);
                                  }
#line 675 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 675 "jumpopt.m"
                                    {
#line 675 "jumpopt.m"
                                      ll_backend__jumpopt__TargetInstr_30 = ((MR_Word) ll_backend__jumpopt__conv3_TargetInstr_30);
#line 675 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 675 "jumpopt.m"
                                    }
#line 673 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 673 "jumpopt.m"
                                    {
#line 676 "jumpopt.m"
                                      {
#line 676 "jumpopt.m"
                                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_29, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_31, ll_backend__jumpopt__TargetInstr_30, &ll_backend__jumpopt___DestInstr_32);
                                      }
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__BlockMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 678 "jumpopt.m"
                                      ll_backend__jumpopt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 5583 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_197_197 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 679 "jumpopt.m"
                                      {
#line 679 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeInfo_197_197, ll_backend__jumpopt__BlockMap_33, ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), &ll_backend__jumpopt__conv4_Block_34);
                                      }
#line 679 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 679 "jumpopt.m"
                                        {
#line 679 "jumpopt.m"
                                          ll_backend__jumpopt__Block_34 = ((MR_Word) ll_backend__jumpopt__conv4_Block_34);
#line 679 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 679 "jumpopt.m"
                                        }
#line 673 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 673 "jumpopt.m"
                                        {
#line 680 "jumpopt.m"
                                          {
#line 680 "jumpopt.m"
                                            ll_backend__jumpopt__V_66_66 = ll_backend__jumpopt__block_may_be_duplicated_1_f_0(ll_backend__jumpopt__Block_34);
                                          }
#line 680 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_66_66 == (MR_Integer) 1);
#line 673 "jumpopt.m"
                                        }
#line 673 "jumpopt.m"
                                    }
#line 673 "jumpopt.m"
                                }
#line 694 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 682 "jumpopt.m"
                                {
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__FilteredBlock_35;
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__AdjustedBlock_36;
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__CrippledBlockMap_37;
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__CrippledJumpOptInfo_38;
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__RevNewInstrs_39;
#line 682 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_71_71;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_159_159;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_161_161;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_162_162;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_163_163;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_164_164;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_165_165;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_166_166;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_167_167;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_168_168;
#line 688 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_160_160;

#line 682 "jumpopt.m"
                                  {
#line 682 "jumpopt.m"
                                    ll_backend__opt_util__filter_out_labels_2_p_0(ll_backend__jumpopt__Block_34, &ll_backend__jumpopt__FilteredBlock_35);
                                  }
#line 683 "jumpopt.m"
                                  {
#line 683 "jumpopt.m"
                                    ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__FilteredBlock_35, &ll_backend__jumpopt__AdjustedBlock_36);
                                  }
#line 687 "jumpopt.m"
                                  {
#line 687 "jumpopt.m"
                                    mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), ll_backend__jumpopt__BlockMap_33, &ll_backend__jumpopt__CrippledBlockMap_37);
                                  }
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 688 "jumpopt.m"
                                  ll_backend__jumpopt__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 688 "jumpopt.m"
                                  {
#line 688 "jumpopt.m"
                                    ll_backend__jumpopt__CrippledJumpOptInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 0) = ((MR_Box) (ll_backend__jumpopt__V_159_159));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 1) = ((MR_Box) (ll_backend__jumpopt__CrippledBlockMap_37));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 2) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 3) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 4) = ((MR_Box) (ll_backend__jumpopt__V_163_163));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 5) = ((MR_Box) (ll_backend__jumpopt__V_164_164));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 6) = ((MR_Box) (ll_backend__jumpopt__V_165_165));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 7) = ((MR_Box) (ll_backend__jumpopt__V_166_166));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 8) = ((MR_Box) (ll_backend__jumpopt__V_167_167));
#line 688 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 9) = ((MR_Box) (ll_backend__jumpopt__V_168_168));
#line 688 "jumpopt.m"
                                  }
#line 690 "jumpopt.m"
                                  {
#line 690 "jumpopt.m"
                                    ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__AdjustedBlock_36, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__CrippledJumpOptInfo_38, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevNewInstrs_39);
                                  }
#line 693 "jumpopt.m"
                                  {
#line 693 "jumpopt.m"
                                    ll_backend__jumpopt__V_71_71 = mercury__list__reverse_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__RevNewInstrs_39);
                                  }
#line 693 "jumpopt.m"
                                  {
#line 693 "jumpopt.m"
                                    MR_Word base;
#line 693 "jumpopt.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 693 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_71_71));
#line 693 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 693 "jumpopt.m"
                                  }
#line 682 "jumpopt.m"
                                }
#line 694 "jumpopt.m"
                              else
#line 723 "jumpopt.m"
                                {
#line 723 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__InstrMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 723 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__TargetInstr_92;
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 696 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 697 "jumpopt.m"
                                  MR_Box ll_backend__jumpopt__conv5_TargetInstr_92;

#line 697 "jumpopt.m"
                                  {
#line 697 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_91, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv5_TargetInstr_92);
                                  }
#line 697 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 697 "jumpopt.m"
                                    {
#line 697 "jumpopt.m"
                                      ll_backend__jumpopt__TargetInstr_92 = ((MR_Word) ll_backend__jumpopt__conv5_TargetInstr_92);
#line 697 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 697 "jumpopt.m"
                                    }
#line 723 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 700 "jumpopt.m"
                                    {
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__DestInstr_40;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__UdestInstr_41;
#line 700 "jumpopt.m"
                                      MR_String ll_backend__jumpopt__Shorted_43;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Canfallthrough_44;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__NewInstrs0_45;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__LvalMap_46;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__NewInstrs_88;
#line 700 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__DestLabel_89;
#line 701 "jumpopt.m"
                                      MR_String ll_backend__jumpopt___Destcomment_42;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_178_178;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_179_179;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_180_180;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_181_181;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_182_182;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_183_183;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_184_184;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_185_185;
#line 716 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_186_186;
#line 719 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Lvalinstr_47;
#line 717 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_81_81;
#line 717 "jumpopt.m"
                                      MR_Box ll_backend__jumpopt__conv6_V_81_81;

#line 699 "jumpopt.m"
                                      {
#line 699 "jumpopt.m"
                                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_91, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_89, ll_backend__jumpopt__TargetInstr_92, &ll_backend__jumpopt__DestInstr_40);
                                      }
#line 701 "jumpopt.m"
                                      ll_backend__jumpopt__UdestInstr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 0)));
#line 701 "jumpopt.m"
                                      ll_backend__jumpopt___Destcomment_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 1)));
#line 702 "jumpopt.m"
                                      {
#line 702 "jumpopt.m"
                                        ll_backend__jumpopt__Shorted_43 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                                      }
#line 703 "jumpopt.m"
                                      {
#line 703 "jumpopt.m"
                                        ll_backend__jumpopt__Canfallthrough_44 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__jumpopt__UdestInstr_41);
                                      }
#line 707 "jumpopt.m"
                                      if ((ll_backend__jumpopt__Canfallthrough_44 == (MR_Integer) 0))
#line 705 "jumpopt.m"
                                        {
#line 705 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__V_79_79;

#line 706 "jumpopt.m"
                                          {
#line 706 "jumpopt.m"
                                            ll_backend__jumpopt__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "jumpopt.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_79_79, 0) = ((MR_Box) (ll_backend__jumpopt__UdestInstr_41));
#line 706 "jumpopt.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_79_79, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
#line 706 "jumpopt.m"
                                          }
#line 706 "jumpopt.m"
                                          {
#line 706 "jumpopt.m"
                                            ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_79_79));
#line 706 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "jumpopt.m"
                                          }
#line 705 "jumpopt.m"
                                        }
#line 707 "jumpopt.m"
                                      else
#line 711 "jumpopt.m"
                                        {
#line 709 "jumpopt.m"
                                          {
#line 709 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__DestLabel_89);
                                          }
#line 711 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 710 "jumpopt.m"
                                            {
#line 710 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__V_73_73;

#line 710 "jumpopt.m"
                                              {
#line 710 "jumpopt.m"
                                                ll_backend__jumpopt__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "jumpopt.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_73_73, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 710 "jumpopt.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_73_73, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 710 "jumpopt.m"
                                              }
#line 710 "jumpopt.m"
                                              {
#line 710 "jumpopt.m"
                                                ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_73_73));
#line 710 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "jumpopt.m"
                                              }
#line 710 "jumpopt.m"
                                            }
#line 711 "jumpopt.m"
                                          else
#line 712 "jumpopt.m"
                                            {
#line 712 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__V_75_75;
#line 712 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__V_76_76;
#line 712 "jumpopt.m"
                                              MR_Word ll_backend__jumpopt__V_77_77;

#line 713 "jumpopt.m"
                                              {
#line 713 "jumpopt.m"
                                                ll_backend__jumpopt__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_89));
#line 713 "jumpopt.m"
                                              }
#line 713 "jumpopt.m"
                                              {
#line 713 "jumpopt.m"
                                                ll_backend__jumpopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 1) = ((MR_Box) (ll_backend__jumpopt__V_77_77));
#line 713 "jumpopt.m"
                                              }
#line 713 "jumpopt.m"
                                              {
#line 713 "jumpopt.m"
                                                ll_backend__jumpopt__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, 0) = ((MR_Box) (ll_backend__jumpopt__V_76_76));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
#line 713 "jumpopt.m"
                                              }
#line 712 "jumpopt.m"
                                              {
#line 712 "jumpopt.m"
                                                ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_75_75));
#line 712 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "jumpopt.m"
                                              }
#line 712 "jumpopt.m"
                                            }
#line 711 "jumpopt.m"
                                        }
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__LvalMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 716 "jumpopt.m"
                                      ll_backend__jumpopt__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 717 "jumpopt.m"
                                      {
#line 717 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ll_backend__jumpopt__LvalMap_46, ((MR_Box) (ll_backend__jumpopt__DestLabel_89)), &ll_backend__jumpopt__conv6_V_81_81);
                                      }
#line 717 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 717 "jumpopt.m"
                                        {
#line 717 "jumpopt.m"
                                          ll_backend__jumpopt__V_81_81 = ((MR_Word) ll_backend__jumpopt__conv6_V_81_81);
#line 717 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 717 "jumpopt.m"
                                        }
#line 717 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 717 "jumpopt.m"
                                        {
#line 717 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 717 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 717 "jumpopt.m"
                                            ll_backend__jumpopt__Lvalinstr_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_81_81, (MR_Integer) 0)));
#line 717 "jumpopt.m"
                                        }
#line 719 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 718 "jumpopt.m"
                                        {
#line 718 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__V_82_82;

#line 718 "jumpopt.m"
                                          {
#line 718 "jumpopt.m"
                                            ll_backend__jumpopt__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, 0) = ((MR_Box) (ll_backend__jumpopt__Lvalinstr_47));
#line 718 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, 1) = ((MR_Box) (ll_backend__jumpopt__NewInstrs0_45));
#line 718 "jumpopt.m"
                                          }
#line 718 "jumpopt.m"
                                          {
#line 718 "jumpopt.m"
                                            ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__V_82_82, &ll_backend__jumpopt__NewInstrs_88);
                                          }
#line 718 "jumpopt.m"
                                        }
#line 719 "jumpopt.m"
                                      else
#line 720 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_88 = ll_backend__jumpopt__NewInstrs0_45;
#line 722 "jumpopt.m"
                                      {
#line 722 "jumpopt.m"
                                        MR_Word base;
#line 722 "jumpopt.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "jumpopt.m"
                                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 722 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_88));
#line 722 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 722 "jumpopt.m"
                                      }
#line 700 "jumpopt.m"
                                    }
#line 723 "jumpopt.m"
                                  else
#line 724 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 724 "jumpopt.m"
                                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 723 "jumpopt.m"
                                }
#line 694 "jumpopt.m"
                            }
#line 661 "jumpopt.m"
                        }
#line 654 "jumpopt.m"
                    }
#line 645 "jumpopt.m"
                }
#line 636 "jumpopt.m"
            }
#line 624 "jumpopt.m"
        }
#line 617 "jumpopt.m"
      }
#line 617 "jumpopt.m"
    else
#line 727 "jumpopt.m"
      {
#line 727 "jumpopt.m"
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 727 "jumpopt.m"
      }
#line 615 "jumpopt.m"
  }
#line 608 "jumpopt.m"
}

#line 489 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 489 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 489 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
#line 489 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
#line 489 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 489 "jumpopt.m"
{
#line 496 "jumpopt.m"
  {
#line 496 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Proc_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__LiveInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
#line 496 "jumpopt.m"
    MR_Word ll_backend__jumpopt__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
#line 604 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RetLabel_22;

#line 498 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__RetAddr_17)) == (MR_mktag((MR_Integer) 1)));
#line 498 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 498 "jumpopt.m"
      {
#line 498 "jumpopt.m"
        ll_backend__jumpopt__RetLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RetAddr_17, (MR_Integer) 0)));
#line 510 "jumpopt.m"
        {
#line 502 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 502 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 501 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));

#line 501 "jumpopt.m"
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_281_281 == (MR_Integer) 1);
#line 502 "jumpopt.m"
          if (!(ll_backend__jumpopt__succeeded))
#line 503 "jumpopt.m"
            {
#line 504 "jumpopt.m"
              {
#line 504 "jumpopt.m"
                ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), ll_backend__jumpopt__V_283_283);
              }
#line 503 "jumpopt.m"
            }
#line 510 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 509 "jumpopt.m"
            {
#line 509 "jumpopt.m"
              *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 509 "jumpopt.m"
            }
#line 510 "jumpopt.m"
          else
#line 526 "jumpopt.m"
            {
#line 526 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Between0_25;
#line 516 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeCtorInfo_269_269;
#line 516 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeInfo_270_270;
#line 516 "jumpopt.m"
              MR_Word ll_backend__jumpopt__ProcMap_24;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_223_223;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_224_224;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_225_225;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_226_226;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_227_227;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_228_228;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_229_229;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_230_230;
#line 517 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_231_231;
#line 518 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0_Between0_25;
#line 519 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Livevals_26;

#line 515 "jumpopt.m"
              if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 0))))
#line 514 "jumpopt.m"
                {
#line 514 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

#line 514 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_54_54 == (MR_Integer) 1);
#line 514 "jumpopt.m"
                }
#line 515 "jumpopt.m"
              else
#line 515 "jumpopt.m"
                if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1))))
#line 515 "jumpopt.m"
                  {
#line 515 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

#line 515 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_53_53 == (MR_Integer) 1);
#line 515 "jumpopt.m"
                  }
#line 515 "jumpopt.m"
                else
#line 515 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 516 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 516 "jumpopt.m"
                {
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__ProcMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 517 "jumpopt.m"
                  ll_backend__jumpopt__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 6280 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_269_269 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6282 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_270_270 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 518 "jumpopt.m"
                  {
#line 518 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_269_269, ll_backend__jumpopt__TypeInfo_270_270, ll_backend__jumpopt__ProcMap_24, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv0_Between0_25);
                  }
#line 518 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 518 "jumpopt.m"
                    {
#line 518 "jumpopt.m"
                      ll_backend__jumpopt__Between0_25 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_25);
#line 518 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 518 "jumpopt.m"
                    }
#line 516 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 516 "jumpopt.m"
                    {
#line 519 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 519 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 519 "jumpopt.m"
                        ll_backend__jumpopt__Livevals_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 516 "jumpopt.m"
                    }
#line 516 "jumpopt.m"
                }
#line 526 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 521 "jumpopt.m"
                {
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between1_27;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_28;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_55_55;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_56_56;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_59_59;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_60_60;
#line 521 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_61_61;
#line 521 "jumpopt.m"
                  MR_String ll_backend__jumpopt__V_62_62;

#line 521 "jumpopt.m"
                  {
#line 521 "jumpopt.m"
                    ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__jumpopt__Between0_25, &ll_backend__jumpopt__Between1_27);
                  }
#line 523 "jumpopt.m"
                  {
#line 523 "jumpopt.m"
                    ll_backend__jumpopt__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_56_56, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_56_56, 1) = ((MR_Box) ((MR_String) ""));
#line 523 "jumpopt.m"
                  }
#line 524 "jumpopt.m"
                  {
#line 524 "jumpopt.m"
                    ll_backend__jumpopt__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_61_61, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 524 "jumpopt.m"
                  }
#line 524 "jumpopt.m"
                  {
#line 524 "jumpopt.m"
                    ll_backend__jumpopt__V_62_62 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                  }
#line 524 "jumpopt.m"
                  {
#line 524 "jumpopt.m"
                    ll_backend__jumpopt__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_60_60, 0) = ((MR_Box) (ll_backend__jumpopt__V_61_61));
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_60_60, 1) = ((MR_Box) (ll_backend__jumpopt__V_62_62));
#line 524 "jumpopt.m"
                  }
#line 523 "jumpopt.m"
                  {
#line 523 "jumpopt.m"
                    ll_backend__jumpopt__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 0) = ((MR_Box) (ll_backend__jumpopt__V_60_60));
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "jumpopt.m"
                  }
#line 522 "jumpopt.m"
                  {
#line 522 "jumpopt.m"
                    ll_backend__jumpopt__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_56_56));
#line 522 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 1) = ((MR_Box) (ll_backend__jumpopt__V_59_59));
#line 522 "jumpopt.m"
                  }
#line 522 "jumpopt.m"
                  {
#line 522 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between1_27, ll_backend__jumpopt__V_55_55);
                  }
#line 525 "jumpopt.m"
                  {
#line 525 "jumpopt.m"
                    MR_Word base;
#line 525 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 525 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_28));
#line 525 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 525 "jumpopt.m"
                  }
#line 525 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 521 "jumpopt.m"
                }
#line 526 "jumpopt.m"
              else
#line 537 "jumpopt.m"
                {
#line 537 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between_30;
#line 528 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TypeCtorInfo_272_272;
#line 528 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TypeInfo_273_273;
#line 528 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__ForkMap_29;
#line 528 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_64_64;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_232_232;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_233_233;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_234_234;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_235_235;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_236_236;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_237_237;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_238_238;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_239_239;
#line 529 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_240_240;
#line 530 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv1_Between_30;
#line 531 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Livevals_203;

#line 528 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1)));
#line 528 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 528 "jumpopt.m"
                    {
#line 528 "jumpopt.m"
                      ll_backend__jumpopt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 528 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_64_64 == (MR_Integer) 1);
#line 528 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 528 "jumpopt.m"
                        {
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__ForkMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 529 "jumpopt.m"
                          ll_backend__jumpopt__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 6488 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_272_272 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6490 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeInfo_273_273 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 530 "jumpopt.m"
                          {
#line 530 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_272_272, ll_backend__jumpopt__TypeInfo_273_273, ll_backend__jumpopt__ForkMap_29, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv1_Between_30);
                          }
#line 530 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 530 "jumpopt.m"
                            {
#line 530 "jumpopt.m"
                              ll_backend__jumpopt__Between_30 = ((MR_Word) ll_backend__jumpopt__conv1_Between_30);
#line 530 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 530 "jumpopt.m"
                            }
#line 528 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 528 "jumpopt.m"
                            {
#line 531 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 531 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 531 "jumpopt.m"
                                ll_backend__jumpopt__Livevals_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 528 "jumpopt.m"
                            }
#line 528 "jumpopt.m"
                        }
#line 528 "jumpopt.m"
                    }
#line 537 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 535 "jumpopt.m"
                    {
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_65_65;
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_66_66;
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_69_69;
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_70_70;
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_71_71;
#line 535 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_72_72;
#line 535 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewInstrs_189;

#line 534 "jumpopt.m"
                      {
#line 534 "jumpopt.m"
                        ll_backend__jumpopt__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_66_66, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_66_66, 1) = ((MR_Box) ((MR_String) ""));
#line 534 "jumpopt.m"
                      }
#line 535 "jumpopt.m"
                      {
#line 535 "jumpopt.m"
                        ll_backend__jumpopt__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 535 "jumpopt.m"
                      }
#line 535 "jumpopt.m"
                      {
#line 535 "jumpopt.m"
                        ll_backend__jumpopt__V_72_72 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                      }
#line 535 "jumpopt.m"
                      {
#line 535 "jumpopt.m"
                        ll_backend__jumpopt__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_70_70, 0) = ((MR_Box) (ll_backend__jumpopt__V_71_71));
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_70_70, 1) = ((MR_Box) (ll_backend__jumpopt__V_72_72));
#line 535 "jumpopt.m"
                      }
#line 534 "jumpopt.m"
                      {
#line 534 "jumpopt.m"
                        ll_backend__jumpopt__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 0) = ((MR_Box) (ll_backend__jumpopt__V_70_70));
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 534 "jumpopt.m"
                      }
#line 533 "jumpopt.m"
                      {
#line 533 "jumpopt.m"
                        ll_backend__jumpopt__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 0) = ((MR_Box) (ll_backend__jumpopt__V_66_66));
#line 533 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 1) = ((MR_Box) (ll_backend__jumpopt__V_69_69));
#line 533 "jumpopt.m"
                      }
#line 533 "jumpopt.m"
                      {
#line 533 "jumpopt.m"
                        ll_backend__jumpopt__NewInstrs_189 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_30, ll_backend__jumpopt__V_65_65);
                      }
#line 536 "jumpopt.m"
                      {
#line 536 "jumpopt.m"
                        MR_Word base;
#line 536 "jumpopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "jumpopt.m"
                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 536 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_189));
#line 536 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 536 "jumpopt.m"
                      }
#line 536 "jumpopt.m"
                      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 535 "jumpopt.m"
                    }
#line 537 "jumpopt.m"
                  else
#line 557 "jumpopt.m"
                    {
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeCtorInfo_275_275;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_276_276;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccMap_31;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenIncl_32;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_74_74;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_75_75;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_76_76;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_77_77;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_78_78;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_79_79;
#line 540 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_80_80;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_241_241;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_242_242;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_243_243;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_244_244;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_245_245;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_246_246;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_247_247;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_248_248;
#line 541 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_249_249;
#line 542 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv2_BetweenIncl_32;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Livevals_201;
#line 543 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_34_34;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_33_33;
#line 543 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_36_36;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_35_35;

#line 540 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
#line 540 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 540 "jumpopt.m"
                        {
#line 540 "jumpopt.m"
                          ll_backend__jumpopt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 540 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_74_74 == (MR_Integer) 2);
#line 540 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 540 "jumpopt.m"
                            {
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__SuccMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 541 "jumpopt.m"
                              ll_backend__jumpopt__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 6711 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeCtorInfo_275_275 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6713 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeInfo_276_276 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 542 "jumpopt.m"
                              {
#line 542 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_275_275, ll_backend__jumpopt__TypeInfo_276_276, ll_backend__jumpopt__SuccMap_31, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv2_BetweenIncl_32);
                              }
#line 542 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 542 "jumpopt.m"
                                {
#line 542 "jumpopt.m"
                                  ll_backend__jumpopt__BetweenIncl_32 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl_32);
#line 542 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 542 "jumpopt.m"
                                }
#line 540 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 540 "jumpopt.m"
                                {
#line 544 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 544 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 544 "jumpopt.m"
                                    {
#line 544 "jumpopt.m"
                                      ll_backend__jumpopt__Livevals_201 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_32)) == (MR_mktag((MR_Integer) 1)));
#line 543 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                        {
#line 543 "jumpopt.m"
                                          ll_backend__jumpopt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                          ll_backend__jumpopt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 1)));
#line 543 "jumpopt.m"
                                          ll_backend__jumpopt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                          ll_backend__jumpopt__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, (MR_Integer) 1)));
#line 543 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 543 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                            {
#line 543 "jumpopt.m"
                                              ll_backend__jumpopt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_76_76, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 543 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                                {
#line 543 "jumpopt.m"
                                                  ll_backend__jumpopt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                                  ll_backend__jumpopt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, (MR_Integer) 1)));
#line 543 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 540 "jumpopt.m"
                                                    {
#line 543 "jumpopt.m"
                                                      ll_backend__jumpopt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_78_78, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                                                      ll_backend__jumpopt__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_78_78, (MR_Integer) 1)));
#line 543 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_79_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 543 "jumpopt.m"
                                                      if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                                        ll_backend__jumpopt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, (MR_Integer) 1)));
#line 540 "jumpopt.m"
                                                    }
#line 543 "jumpopt.m"
                                                }
#line 543 "jumpopt.m"
                                            }
#line 543 "jumpopt.m"
                                        }
#line 544 "jumpopt.m"
                                    }
#line 540 "jumpopt.m"
                                }
#line 540 "jumpopt.m"
                            }
#line 540 "jumpopt.m"
                        }
#line 557 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 555 "jumpopt.m"
                        {
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_89_89;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_98_98;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_107_107;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_108_108;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_111_111;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_112_112;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_113_113;
#line 555 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_114_114;
#line 555 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_190;

#line 553 "jumpopt.m"
                          {
#line 553 "jumpopt.m"
                            ll_backend__jumpopt__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_108_108, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_108_108, 1) = ((MR_Box) ((MR_String) ""));
#line 553 "jumpopt.m"
                          }
#line 554 "jumpopt.m"
                          {
#line 554 "jumpopt.m"
                            ll_backend__jumpopt__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 554 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_113_113, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 554 "jumpopt.m"
                          }
#line 554 "jumpopt.m"
                          {
#line 554 "jumpopt.m"
                            ll_backend__jumpopt__V_114_114 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                          }
#line 555 "jumpopt.m"
                          {
#line 555 "jumpopt.m"
                            ll_backend__jumpopt__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 0) = ((MR_Box) (ll_backend__jumpopt__V_113_113));
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 1) = ((MR_Box) (ll_backend__jumpopt__V_114_114));
#line 555 "jumpopt.m"
                          }
#line 553 "jumpopt.m"
                          {
#line 553 "jumpopt.m"
                            ll_backend__jumpopt__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 0) = ((MR_Box) (ll_backend__jumpopt__V_112_112));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "jumpopt.m"
                          }
#line 552 "jumpopt.m"
                          {
#line 552 "jumpopt.m"
                            ll_backend__jumpopt__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 0) = ((MR_Box) (ll_backend__jumpopt__V_108_108));
#line 552 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 1) = ((MR_Box) (ll_backend__jumpopt__V_111_111));
#line 552 "jumpopt.m"
                          }
#line 550 "jumpopt.m"
                          {
#line 550 "jumpopt.m"
                            ll_backend__jumpopt__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 550 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 1) = ((MR_Box) (ll_backend__jumpopt__V_107_107));
#line 550 "jumpopt.m"
                          }
#line 548 "jumpopt.m"
                          {
#line 548 "jumpopt.m"
                            ll_backend__jumpopt__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 548 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 1) = ((MR_Box) (ll_backend__jumpopt__V_98_98));
#line 548 "jumpopt.m"
                          }
#line 546 "jumpopt.m"
                          {
#line 546 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_190, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 546 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_190, 1) = ((MR_Box) (ll_backend__jumpopt__V_89_89));
#line 546 "jumpopt.m"
                          }
#line 556 "jumpopt.m"
                          {
#line 556 "jumpopt.m"
                            MR_Word base;
#line 556 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_190));
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 556 "jumpopt.m"
                          }
#line 556 "jumpopt.m"
                          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 555 "jumpopt.m"
                        }
#line 557 "jumpopt.m"
                      else
#line 587 "jumpopt.m"
                        {
#line 587 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ProcLabel_37;
#line 587 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Counter0_38;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_277_277;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeInfo_278_278;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_116_116;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_117_117;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_118_118;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_119_119;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_120_120;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_121_121;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_122_122;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_123_123;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__SuccMap_191;
#line 560 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__BetweenIncl_192;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_250_250;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_251_251;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_252_252;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_253_253;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_254_254;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_255_255;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_256_256;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_257_257;
#line 562 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_258_258;
#line 563 "jumpopt.m"
                          MR_Box ll_backend__jumpopt__conv3_BetweenIncl_192;
#line 565 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Livevals_197;
#line 564 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_40_40;
#line 564 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_39_39;
#line 564 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_42_42;
#line 564 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_41_41;

#line 560 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
#line 560 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 560 "jumpopt.m"
                            {
#line 560 "jumpopt.m"
                              ll_backend__jumpopt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 560 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_116_116 == (MR_Integer) 1);
#line 560 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 560 "jumpopt.m"
                                {
#line 561 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50)) == (MR_mktag((MR_Integer) 1)));
#line 561 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 561 "jumpopt.m"
                                    {
#line 561 "jumpopt.m"
                                      ll_backend__jumpopt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 0)));
#line 561 "jumpopt.m"
                                      ll_backend__jumpopt__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_117_117, (MR_Integer) 0)));
#line 561 "jumpopt.m"
                                      ll_backend__jumpopt__Counter0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_117_117, (MR_Integer) 1)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__SuccMap_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 562 "jumpopt.m"
                                      ll_backend__jumpopt__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 7041 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeCtorInfo_277_277 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 7043 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_278_278 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 563 "jumpopt.m"
                                      {
#line 563 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_277_277, ll_backend__jumpopt__TypeInfo_278_278, ll_backend__jumpopt__SuccMap_191, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv3_BetweenIncl_192);
                                      }
#line 563 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 563 "jumpopt.m"
                                        {
#line 563 "jumpopt.m"
                                          ll_backend__jumpopt__BetweenIncl_192 = ((MR_Word) ll_backend__jumpopt__conv3_BetweenIncl_192);
#line 563 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 563 "jumpopt.m"
                                        }
#line 560 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 560 "jumpopt.m"
                                        {
#line 565 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 565 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 565 "jumpopt.m"
                                            {
#line 565 "jumpopt.m"
                                              ll_backend__jumpopt__Livevals_197 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_192)) == (MR_mktag((MR_Integer) 1)));
#line 564 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 564 "jumpopt.m"
                                                {
#line 564 "jumpopt.m"
                                                  ll_backend__jumpopt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_192, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                                  ll_backend__jumpopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_192, (MR_Integer) 1)));
#line 564 "jumpopt.m"
                                                  ll_backend__jumpopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_118_118, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                                  ll_backend__jumpopt__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_118_118, (MR_Integer) 1)));
#line 564 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_119_119)) == (MR_mktag((MR_Integer) 2)));
#line 564 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 564 "jumpopt.m"
                                                    {
#line 564 "jumpopt.m"
                                                      ll_backend__jumpopt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_119_119, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_120_120)) == (MR_mktag((MR_Integer) 1)));
#line 564 "jumpopt.m"
                                                      if (ll_backend__jumpopt__succeeded)
#line 564 "jumpopt.m"
                                                        {
#line 564 "jumpopt.m"
                                                          ll_backend__jumpopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_120_120, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                                          ll_backend__jumpopt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_120_120, (MR_Integer) 1)));
#line 564 "jumpopt.m"
                                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_123_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "jumpopt.m"
                                                          if (ll_backend__jumpopt__succeeded)
#line 560 "jumpopt.m"
                                                            {
#line 564 "jumpopt.m"
                                                              ll_backend__jumpopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_121_121, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                                              ll_backend__jumpopt__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_121_121, (MR_Integer) 1)));
#line 564 "jumpopt.m"
                                                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_122_122)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_122_122, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 564 "jumpopt.m"
                                                              if (ll_backend__jumpopt__succeeded)
#line 564 "jumpopt.m"
                                                                ll_backend__jumpopt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_122_122, (MR_Integer) 1)));
#line 560 "jumpopt.m"
                                                            }
#line 564 "jumpopt.m"
                                                        }
#line 564 "jumpopt.m"
                                                    }
#line 564 "jumpopt.m"
                                                }
#line 565 "jumpopt.m"
                                            }
#line 560 "jumpopt.m"
                                        }
#line 561 "jumpopt.m"
                                    }
#line 560 "jumpopt.m"
                                }
#line 560 "jumpopt.m"
                            }
#line 587 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 567 "jumpopt.m"
                            {
#line 567 "jumpopt.m"
                              MR_Integer ll_backend__jumpopt__LabelNum_43;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__Counter1_44;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewLabel_45;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_124_124;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_125_125;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_132_132;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_134_134;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_143_143;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_152_152;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_161_161;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_162_162;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_165_165;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_166_166;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_167_167;
#line 567 "jumpopt.m"
                              MR_String ll_backend__jumpopt__V_168_168;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_169_169;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_170_170;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_171_171;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_173_173;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_177_177;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_178_178;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_181_181;
#line 567 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_193;

#line 567 "jumpopt.m"
                              {
#line 567 "jumpopt.m"
                                mercury__counter__allocate_3_p_0(&ll_backend__jumpopt__LabelNum_43, ll_backend__jumpopt__Counter0_38, &ll_backend__jumpopt__Counter1_44);
                              }
#line 568 "jumpopt.m"
                              {
#line 568 "jumpopt.m"
                                ll_backend__jumpopt__NewLabel_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 0) = ((MR_Box) (ll_backend__jumpopt__LabelNum_43));
#line 568 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 1) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
#line 568 "jumpopt.m"
                              }
#line 570 "jumpopt.m"
                              {
#line 570 "jumpopt.m"
                                ll_backend__jumpopt__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_132_132, 0) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
#line 570 "jumpopt.m"
                              }
#line 570 "jumpopt.m"
                              {
#line 570 "jumpopt.m"
                                ll_backend__jumpopt__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_4[0])));
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_125_125, 2) = ((MR_Box) (ll_backend__jumpopt__V_132_132));
#line 570 "jumpopt.m"
                              }
#line 572 "jumpopt.m"
                              {
#line 572 "jumpopt.m"
                                ll_backend__jumpopt__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_124_124, 0) = ((MR_Box) (ll_backend__jumpopt__V_125_125));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_124_124, 1) = ((MR_Box) ((MR_String) "branch around if cannot tail call"));
#line 572 "jumpopt.m"
                              }
#line 579 "jumpopt.m"
                              {
#line 579 "jumpopt.m"
                                ll_backend__jumpopt__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_162_162, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_162_162, 1) = ((MR_Box) ((MR_String) ""));
#line 579 "jumpopt.m"
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_167_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_167_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 580 "jumpopt.m"
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_168_168 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_166_166, 0) = ((MR_Box) (ll_backend__jumpopt__V_167_167));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_166_166, 1) = ((MR_Box) (ll_backend__jumpopt__V_168_168));
#line 580 "jumpopt.m"
                              }
#line 581 "jumpopt.m"
                              {
#line 581 "jumpopt.m"
                                ll_backend__jumpopt__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_171_171, 1) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
#line 581 "jumpopt.m"
                              }
#line 581 "jumpopt.m"
                              {
#line 581 "jumpopt.m"
                                ll_backend__jumpopt__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_170_170, 0) = ((MR_Box) (ll_backend__jumpopt__V_171_171));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_170_170, 1) = ((MR_Box) ((MR_String) "non tail call"));
#line 581 "jumpopt.m"
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_178_178, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_178_178, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 584 "jumpopt.m"
                              }
#line 582 "jumpopt.m"
                              {
#line 582 "jumpopt.m"
                                ll_backend__jumpopt__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_177_177, 0) = ((MR_Box) (ll_backend__jumpopt__V_178_178));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "jumpopt.m"
                              }
#line 581 "jumpopt.m"
                              {
#line 581 "jumpopt.m"
                                ll_backend__jumpopt__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_173_173, 0) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_173_173, 1) = ((MR_Box) (ll_backend__jumpopt__V_177_177));
#line 581 "jumpopt.m"
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_169_169, 0) = ((MR_Box) (ll_backend__jumpopt__V_170_170));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_169_169, 1) = ((MR_Box) (ll_backend__jumpopt__V_173_173));
#line 580 "jumpopt.m"
                              }
#line 579 "jumpopt.m"
                              {
#line 579 "jumpopt.m"
                                ll_backend__jumpopt__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_165_165, 0) = ((MR_Box) (ll_backend__jumpopt__V_166_166));
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_165_165, 1) = ((MR_Box) (ll_backend__jumpopt__V_169_169));
#line 579 "jumpopt.m"
                              }
#line 578 "jumpopt.m"
                              {
#line 578 "jumpopt.m"
                                ll_backend__jumpopt__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_161_161, 0) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_161_161, 1) = ((MR_Box) (ll_backend__jumpopt__V_165_165));
#line 578 "jumpopt.m"
                              }
#line 576 "jumpopt.m"
                              {
#line 576 "jumpopt.m"
                                ll_backend__jumpopt__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_152_152, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_152_152, 1) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 576 "jumpopt.m"
                              }
#line 574 "jumpopt.m"
                              {
#line 574 "jumpopt.m"
                                ll_backend__jumpopt__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, 1) = ((MR_Box) (ll_backend__jumpopt__V_152_152));
#line 574 "jumpopt.m"
                              }
#line 572 "jumpopt.m"
                              {
#line 572 "jumpopt.m"
                                ll_backend__jumpopt__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_134_134, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_134_134, 1) = ((MR_Box) (ll_backend__jumpopt__V_143_143));
#line 572 "jumpopt.m"
                              }
#line 569 "jumpopt.m"
                              {
#line 569 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 0) = ((MR_Box) (ll_backend__jumpopt__V_124_124));
#line 569 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 1) = ((MR_Box) (ll_backend__jumpopt__V_134_134));
#line 569 "jumpopt.m"
                              }
#line 585 "jumpopt.m"
                              {
#line 585 "jumpopt.m"
                                MR_Word base;
#line 585 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_193));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 585 "jumpopt.m"
                              }
#line 586 "jumpopt.m"
                              {
#line 586 "jumpopt.m"
                                ll_backend__jumpopt__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_181_181, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
#line 586 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_181_181, 1) = ((MR_Box) (ll_backend__jumpopt__Counter1_44));
#line 586 "jumpopt.m"
                              }
#line 586 "jumpopt.m"
                              {
#line 586 "jumpopt.m"
                                MR_Word base;
#line 586 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "jumpopt.m"
                                *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = base;
#line 586 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_181_181));
#line 586 "jumpopt.m"
                              }
#line 567 "jumpopt.m"
                            }
#line 587 "jumpopt.m"
                          else
#line 601 "jumpopt.m"
                            {
#line 601 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__InstrMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 601 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__RetInstr_47;
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 589 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 590 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv4_RetInstr_47;

#line 590 "jumpopt.m"
                              {
#line 590 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_46, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv4_RetInstr_47);
                              }
#line 590 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 590 "jumpopt.m"
                                {
#line 590 "jumpopt.m"
                                  ll_backend__jumpopt__RetInstr_47 = ((MR_Word) ll_backend__jumpopt__conv4_RetInstr_47);
#line 590 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 590 "jumpopt.m"
                                }
#line 601 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 592 "jumpopt.m"
                                {
#line 592 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__DestLabel_48;
#line 592 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__NewInstrs_194;
#line 592 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt___DestInstr_49;

#line 592 "jumpopt.m"
                                  {
#line 592 "jumpopt.m"
                                    ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_46, ll_backend__jumpopt__RetLabel_22, &ll_backend__jumpopt__DestLabel_48, ll_backend__jumpopt__RetInstr_47, &ll_backend__jumpopt___DestInstr_49);
                                  }
#line 593 "jumpopt.m"
                                  {
#line 593 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__RetLabel_22, ll_backend__jumpopt__DestLabel_48);
                                  }
#line 595 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 594 "jumpopt.m"
                                    {
#line 594 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_182_182;

#line 594 "jumpopt.m"
                                      {
#line 594 "jumpopt.m"
                                        ll_backend__jumpopt__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_182_182, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 594 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_182_182, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 594 "jumpopt.m"
                                      }
#line 594 "jumpopt.m"
                                      {
#line 594 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 0) = ((MR_Box) (ll_backend__jumpopt__V_182_182));
#line 594 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "jumpopt.m"
                                      }
#line 594 "jumpopt.m"
                                    }
#line 595 "jumpopt.m"
                                  else
#line 596 "jumpopt.m"
                                    {
#line 596 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_184_184;
#line 596 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_185_185;
#line 596 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_186_186;
#line 596 "jumpopt.m"
                                      MR_String ll_backend__jumpopt__V_187_187;

#line 596 "jumpopt.m"
                                      {
#line 596 "jumpopt.m"
                                        ll_backend__jumpopt__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_186_186, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_48));
#line 596 "jumpopt.m"
                                      }
#line 596 "jumpopt.m"
                                      {
#line 596 "jumpopt.m"
                                        ll_backend__jumpopt__V_185_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 2) = ((MR_Box) (ll_backend__jumpopt__V_186_186));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 3) = ((MR_Box) (ll_backend__jumpopt__LiveInfos_18));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 4) = ((MR_Box) (ll_backend__jumpopt__Context_19));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 5) = ((MR_Box) (ll_backend__jumpopt__GoalPath_20));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_185_185, 6) = ((MR_Box) (ll_backend__jumpopt__CallModel_21));
#line 596 "jumpopt.m"
                                      }
#line 596 "jumpopt.m"
                                      {
#line 596 "jumpopt.m"
                                        ll_backend__jumpopt__V_187_187 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                                      }
#line 598 "jumpopt.m"
                                      {
#line 598 "jumpopt.m"
                                        ll_backend__jumpopt__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 598 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_184_184, 0) = ((MR_Box) (ll_backend__jumpopt__V_185_185));
#line 598 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_184_184, 1) = ((MR_Box) (ll_backend__jumpopt__V_187_187));
#line 598 "jumpopt.m"
                                      }
#line 596 "jumpopt.m"
                                      {
#line 596 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 0) = ((MR_Box) (ll_backend__jumpopt__V_184_184));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "jumpopt.m"
                                      }
#line 596 "jumpopt.m"
                                    }
#line 600 "jumpopt.m"
                                  {
#line 600 "jumpopt.m"
                                    MR_Word base;
#line 600 "jumpopt.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 600 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_194));
#line 600 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 600 "jumpopt.m"
                                  }
#line 592 "jumpopt.m"
                                }
#line 601 "jumpopt.m"
                              else
#line 602 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "jumpopt.m"
                              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 601 "jumpopt.m"
                            }
#line 587 "jumpopt.m"
                        }
#line 557 "jumpopt.m"
                    }
#line 537 "jumpopt.m"
                }
#line 526 "jumpopt.m"
            }
#line 510 "jumpopt.m"
        }
#line 498 "jumpopt.m"
      }
#line 498 "jumpopt.m"
    else
#line 605 "jumpopt.m"
      {
#line 605 "jumpopt.m"
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 605 "jumpopt.m"
      }
#line 496 "jumpopt.m"
  }
#line 489 "jumpopt.m"
}

#line 294 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
#line 294 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
#line 294 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
#line 294 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7)
#line 294 "jumpopt.m"
{
#line 300 "jumpopt.m"
  while (MR_TRUE)
#line 300 "jumpopt.m"
    {
#line 300 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 300 "jumpopt.m"
      {
#line 300 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 300 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "jumpopt.m"
          {
#line 300 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6;
#line 300 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 300 "jumpopt.m"
          }
#line 300 "jumpopt.m"
        else
#line 302 "jumpopt.m"
          {
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 0)));
#line 302 "jumpopt.m"
            MR_String ll_backend__jumpopt__Comment0_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 1)));
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__ReplacementInstrsEmpty_119;
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__RecurseInstrs_120;
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__NewPrevInstr_125;
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
#line 302 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

#line 7703 "ll_backend.jumpopt.c"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7705 "ll_backend.jumpopt.c"
              {
#line 7707 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 7709 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 7711 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Rval_42;
#line 7713 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__InstrMap_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 339 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 340 "jumpopt.m"
                {
#line 340 "jumpopt.m"
                  ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_174, ll_backend__jumpopt__Rval0_41, &ll_backend__jumpopt__Rval_42);
                }
#line 346 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 341 "jumpopt.m"
                {
#line 341 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_42, ll_backend__jumpopt__Rval0_41);
                }
#line 7746 "ll_backend.jumpopt.c"
                if (ll_backend__jumpopt__succeeded)
#line 7748 "ll_backend.jumpopt.c"
                  {
#line 460 "jumpopt.m"
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                    {
#line 462 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                    }
#line 7764 "ll_backend.jumpopt.c"
                  }
#line 7766 "ll_backend.jumpopt.c"
                else
#line 7768 "ll_backend.jumpopt.c"
                  {
#line 7770 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_289;
#line 7772 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_121;
#line 7774 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_155_155;
#line 7776 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_156_156;
#line 7778 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_166_166;
#line 7780 "ll_backend.jumpopt.c"
                    MR_String ll_backend__jumpopt__Shorted_170;

#line 344 "jumpopt.m"
                    {
#line 344 "jumpopt.m"
                      ll_backend__jumpopt__Shorted_170 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                    }
#line 345 "jumpopt.m"
                    {
#line 345 "jumpopt.m"
                      ll_backend__jumpopt__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_40));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_42));
#line 345 "jumpopt.m"
                    }
#line 345 "jumpopt.m"
                    {
#line 345 "jumpopt.m"
                      ll_backend__jumpopt__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_155_155, 0) = ((MR_Box) (ll_backend__jumpopt__V_156_156));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_155_155, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_170));
#line 345 "jumpopt.m"
                    }
#line 345 "jumpopt.m"
                    {
#line 345 "jumpopt.m"
                      ll_backend__jumpopt__ReplacementInstrs_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 0) = ((MR_Box) (ll_backend__jumpopt__V_155_155));
#line 345 "jumpopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "jumpopt.m"
                    }
#line 464 "jumpopt.m"
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 7822 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__TypeCtorInfo_289_289 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                    {
#line 468 "jumpopt.m"
                      ll_backend__jumpopt__V_166_166 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__ReplacementInstrs_121);
                    }
#line 468 "jumpopt.m"
                    {
#line 468 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__V_166_166, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    }
#line 474 "jumpopt.m"
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 7836 "ll_backend.jumpopt.c"
                  }
#line 7838 "ll_backend.jumpopt.c"
              }
#line 7840 "ll_backend.jumpopt.c"
            else
#line 7842 "ll_backend.jumpopt.c"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7844 "ll_backend.jumpopt.c"
                {
#line 385 "jumpopt.m"
                  {
#line 385 "jumpopt.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", (MR_String) "block");
#line 385 "jumpopt.m"
                    return;
                  }
#line 7853 "ll_backend.jumpopt.c"
                }
#line 7855 "ll_backend.jumpopt.c"
              else
#line 7857 "ll_backend.jumpopt.c"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7859 "ll_backend.jumpopt.c"
                  {
#line 7861 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__Index_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 7863 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__MaybeTargets0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 7865 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__InstrMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 7867 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__MaybeTargets_35;
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 321 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 323 "jumpopt.m"
                    {
#line 323 "jumpopt.m"
                      ll_backend__jumpopt__short_maybe_labels_3_p_0(ll_backend__jumpopt__InstrMap_34, ll_backend__jumpopt__MaybeTargets0_33, &ll_backend__jumpopt__MaybeTargets_35);
                    }
#line 330 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 324 "jumpopt.m"
                    {
#line 324 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[4], ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35)), ((MR_Box) (ll_backend__jumpopt__MaybeTargets0_33)));
                    }
#line 7900 "ll_backend.jumpopt.c"
                    if (ll_backend__jumpopt__succeeded)
#line 7902 "ll_backend.jumpopt.c"
                      {
#line 460 "jumpopt.m"
                        ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                        ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                        {
#line 462 "jumpopt.m"
                          ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                        }
#line 7918 "ll_backend.jumpopt.c"
                      }
#line 7920 "ll_backend.jumpopt.c"
                    else
#line 7922 "ll_backend.jumpopt.c"
                      {
#line 7924 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__TypeCtorInfo_289_300;
#line 7926 "ll_backend.jumpopt.c"
                        MR_String ll_backend__jumpopt__Shorted_36;
#line 7928 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__V_160_160;
#line 7930 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__V_161_161;
#line 7932 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__ReplacementInstrs_298;
#line 7934 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__V_299_299;

#line 327 "jumpopt.m"
                        {
#line 327 "jumpopt.m"
                          ll_backend__jumpopt__Shorted_36 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                        }
#line 329 "jumpopt.m"
                        {
#line 329 "jumpopt.m"
                          ll_backend__jumpopt__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 1) = ((MR_Box) (ll_backend__jumpopt__Index_32));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 2) = ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35));
#line 329 "jumpopt.m"
                        }
#line 329 "jumpopt.m"
                        {
#line 329 "jumpopt.m"
                          ll_backend__jumpopt__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_160_160, 0) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_160_160, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_36));
#line 329 "jumpopt.m"
                        }
#line 328 "jumpopt.m"
                        {
#line 328 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrs_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 0) = ((MR_Box) (ll_backend__jumpopt__V_160_160));
#line 328 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "jumpopt.m"
                        }
#line 464 "jumpopt.m"
                        ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 7976 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__TypeCtorInfo_289_300 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__V_299_299 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__ReplacementInstrs_298);
                        }
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__V_299_299, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                        }
#line 474 "jumpopt.m"
                        ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 7990 "ll_backend.jumpopt.c"
                      }
#line 7992 "ll_backend.jumpopt.c"
                  }
#line 7994 "ll_backend.jumpopt.c"
                else
#line 7996 "ll_backend.jumpopt.c"
                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 7998 "ll_backend.jumpopt.c"
                    {
#line 8000 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__NewRemain_314;

#line 379 "jumpopt.m"
                      {
#line 379 "jumpopt.m"
                        ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_314);
                      }
#line 463 "jumpopt.m"
                      if ((ll_backend__jumpopt__NewRemain_314 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "jumpopt.m"
                        {
#line 460 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                          {
#line 462 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                          }
#line 459 "jumpopt.m"
                        }
#line 463 "jumpopt.m"
                      else
#line 464 "jumpopt.m"
                        {
#line 464 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_310;
#line 464 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 0)));
#line 464 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_309_309;

#line 464 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 1)));
#line 8041 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_310 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                          {
#line 468 "jumpopt.m"
                            ll_backend__jumpopt__V_309_309 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__ReplacementInstrs_308);
                          }
#line 468 "jumpopt.m"
                          {
#line 468 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__V_309_309, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 472 "jumpopt.m"
                          if ((ll_backend__jumpopt__ReplacementInstrs_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 472 "jumpopt.m"
                          else
#line 474 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 464 "jumpopt.m"
                        }
#line 8063 "ll_backend.jumpopt.c"
                    }
#line 8065 "ll_backend.jumpopt.c"
                  else
#line 8067 "ll_backend.jumpopt.c"
                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 8069 "ll_backend.jumpopt.c"
                      {
#line 8071 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__SyncTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8073 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__Child0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8075 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__Child_62;
#line 8077 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__InstrMap_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 388 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 389 "jumpopt.m"
                        {
#line 389 "jumpopt.m"
                          ll_backend__jumpopt__short_label_3_p_0(ll_backend__jumpopt__InstrMap_200, ll_backend__jumpopt__Child0_61, &ll_backend__jumpopt__Child_62);
                        }
#line 396 "jumpopt.m"
                        ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 390 "jumpopt.m"
                        {
#line 390 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_62, ll_backend__jumpopt__Child0_61);
                        }
#line 8110 "ll_backend.jumpopt.c"
                        if (ll_backend__jumpopt__succeeded)
#line 8112 "ll_backend.jumpopt.c"
                          {
#line 460 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                            ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                            {
#line 462 "jumpopt.m"
                              ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                            }
#line 8128 "ll_backend.jumpopt.c"
                          }
#line 8130 "ll_backend.jumpopt.c"
                        else
#line 8132 "ll_backend.jumpopt.c"
                          {
#line 8134 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__TypeCtorInfo_289_320;
#line 8136 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__Uinstr_63;
#line 8138 "ll_backend.jumpopt.c"
                            MR_String ll_backend__jumpopt__Comment_64;
#line 8140 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__Instr_65;
#line 8142 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__ReplacementInstrs_318;
#line 8144 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__V_319_319;

#line 393 "jumpopt.m"
                            {
#line 393 "jumpopt.m"
                              ll_backend__jumpopt__Uinstr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "jumpopt.m"
                              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 393 "jumpopt.m"
                              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_60));
#line 393 "jumpopt.m"
                              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 2) = ((MR_Box) (ll_backend__jumpopt__Child_62));
#line 393 "jumpopt.m"
                            }
#line 394 "jumpopt.m"
                            {
#line 394 "jumpopt.m"
                              ll_backend__jumpopt__Comment_64 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                            }
#line 395 "jumpopt.m"
                            {
#line 395 "jumpopt.m"
                              ll_backend__jumpopt__Instr_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "jumpopt.m"
                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_63));
#line 395 "jumpopt.m"
                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_64));
#line 395 "jumpopt.m"
                            }
#line 396 "jumpopt.m"
                            {
#line 396 "jumpopt.m"
                              ll_backend__jumpopt__ReplacementInstrs_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "jumpopt.m"
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_65));
#line 396 "jumpopt.m"
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "jumpopt.m"
                            }
#line 464 "jumpopt.m"
                            ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8186 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__TypeCtorInfo_289_320 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                            {
#line 468 "jumpopt.m"
                              ll_backend__jumpopt__V_319_319 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__ReplacementInstrs_318);
                            }
#line 468 "jumpopt.m"
                            {
#line 468 "jumpopt.m"
                              ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__V_319_319, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                            }
#line 474 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8200 "ll_backend.jumpopt.c"
                          }
#line 8202 "ll_backend.jumpopt.c"
                      }
#line 8204 "ll_backend.jumpopt.c"
                    else
#line 8206 "ll_backend.jumpopt.c"
                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 8208 "ll_backend.jumpopt.c"
                        {
#line 8210 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__NewRemain_334;

#line 317 "jumpopt.m"
                          {
#line 317 "jumpopt.m"
                            ll_backend__jumpopt__jump_opt_goto_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_334);
                          }
#line 463 "jumpopt.m"
                          if ((ll_backend__jumpopt__NewRemain_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "jumpopt.m"
                            {
#line 460 "jumpopt.m"
                              ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                              ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                              {
#line 462 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                              }
#line 459 "jumpopt.m"
                            }
#line 463 "jumpopt.m"
                          else
#line 464 "jumpopt.m"
                            {
#line 464 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_289_330;
#line 464 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__ReplacementInstrs_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 0)));
#line 464 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_329_329;

#line 464 "jumpopt.m"
                              ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 1)));
#line 8251 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeCtorInfo_289_330 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                              {
#line 468 "jumpopt.m"
                                ll_backend__jumpopt__V_329_329 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__ReplacementInstrs_328);
                              }
#line 468 "jumpopt.m"
                              {
#line 468 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__V_329_329, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                              }
#line 472 "jumpopt.m"
                              if ((ll_backend__jumpopt__ReplacementInstrs_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "jumpopt.m"
                                ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 472 "jumpopt.m"
                              else
#line 474 "jumpopt.m"
                                ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 464 "jumpopt.m"
                            }
#line 8273 "ll_backend.jumpopt.c"
                        }
#line 8275 "ll_backend.jumpopt.c"
                      else
#line 8277 "ll_backend.jumpopt.c"
                        if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 8279 "ll_backend.jumpopt.c"
                          {
#line 8281 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__NewRemain_344;

#line 334 "jumpopt.m"
                            {
#line 334 "jumpopt.m"
                              ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_344);
                            }
#line 463 "jumpopt.m"
                            if ((ll_backend__jumpopt__NewRemain_344 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "jumpopt.m"
                              {
#line 460 "jumpopt.m"
                                ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                {
#line 462 "jumpopt.m"
                                  ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                }
#line 459 "jumpopt.m"
                              }
#line 463 "jumpopt.m"
                            else
#line 464 "jumpopt.m"
                              {
#line 464 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__TypeCtorInfo_289_340;
#line 464 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__ReplacementInstrs_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 0)));
#line 464 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_339_339;

#line 464 "jumpopt.m"
                                ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 1)));
#line 8322 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__TypeCtorInfo_289_340 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                {
#line 468 "jumpopt.m"
                                  ll_backend__jumpopt__V_339_339 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__ReplacementInstrs_338);
                                }
#line 468 "jumpopt.m"
                                {
#line 468 "jumpopt.m"
                                  ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__V_339_339, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                }
#line 472 "jumpopt.m"
                                if ((ll_backend__jumpopt__ReplacementInstrs_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "jumpopt.m"
                                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 472 "jumpopt.m"
                                else
#line 474 "jumpopt.m"
                                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 464 "jumpopt.m"
                              }
#line 8344 "ll_backend.jumpopt.c"
                          }
#line 8346 "ll_backend.jumpopt.c"
                        else
#line 8348 "ll_backend.jumpopt.c"
                          if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 8350 "ll_backend.jumpopt.c"
                            {
#line 8352 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__InstrMap_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8354 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__Label0_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8356 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__Label_209;
#line 8358 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__SyncTerm_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 400 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 401 "jumpopt.m"
                              {
#line 401 "jumpopt.m"
                                ll_backend__jumpopt__short_label_3_p_0(ll_backend__jumpopt__InstrMap_207, ll_backend__jumpopt__Label0_208, &ll_backend__jumpopt__Label_209);
                              }
#line 408 "jumpopt.m"
                              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 402 "jumpopt.m"
                              {
#line 402 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_209, ll_backend__jumpopt__Label0_208);
                              }
#line 8391 "ll_backend.jumpopt.c"
                              if (ll_backend__jumpopt__succeeded)
#line 8393 "ll_backend.jumpopt.c"
                                {
#line 460 "jumpopt.m"
                                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                  {
#line 462 "jumpopt.m"
                                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                  }
#line 8409 "ll_backend.jumpopt.c"
                                }
#line 8411 "ll_backend.jumpopt.c"
                              else
#line 8413 "ll_backend.jumpopt.c"
                                {
#line 8415 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__TypeCtorInfo_289_350;
#line 8417 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Uinstr_201;
#line 8419 "ll_backend.jumpopt.c"
                                  MR_String ll_backend__jumpopt__Comment_202;
#line 8421 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Instr_203;
#line 8423 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__ReplacementInstrs_348;
#line 8425 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__V_349_349;

#line 405 "jumpopt.m"
                                  {
#line 405 "jumpopt.m"
                                    ll_backend__jumpopt__Uinstr_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 405 "jumpopt.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 405 "jumpopt.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_210));
#line 405 "jumpopt.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 2) = ((MR_Box) (ll_backend__jumpopt__Label_209));
#line 405 "jumpopt.m"
                                  }
#line 406 "jumpopt.m"
                                  {
#line 406 "jumpopt.m"
                                    ll_backend__jumpopt__Comment_202 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                                  }
#line 407 "jumpopt.m"
                                  {
#line 407 "jumpopt.m"
                                    ll_backend__jumpopt__Instr_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_201));
#line 407 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_202));
#line 407 "jumpopt.m"
                                  }
#line 408 "jumpopt.m"
                                  {
#line 408 "jumpopt.m"
                                    ll_backend__jumpopt__ReplacementInstrs_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_203));
#line 408 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "jumpopt.m"
                                  }
#line 464 "jumpopt.m"
                                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8467 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_289_350 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                  {
#line 468 "jumpopt.m"
                                    ll_backend__jumpopt__V_349_349 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__ReplacementInstrs_348);
                                  }
#line 468 "jumpopt.m"
                                  {
#line 468 "jumpopt.m"
                                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__V_349_349, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                  }
#line 474 "jumpopt.m"
                                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8481 "ll_backend.jumpopt.c"
                                }
#line 8483 "ll_backend.jumpopt.c"
                            }
#line 8485 "ll_backend.jumpopt.c"
                          else
#line 8487 "ll_backend.jumpopt.c"
                            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8489 "ll_backend.jumpopt.c"
                              {
#line 8491 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__InstrMap_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8493 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__Lval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8495 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__Rval0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8497 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__Rval_186;
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 351 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 352 "jumpopt.m"
                                {
#line 352 "jumpopt.m"
                                  ll_backend__jumpopt__short_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_181, ll_backend__jumpopt__Rval0_185, &ll_backend__jumpopt__Rval_186);
                                }
#line 358 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 353 "jumpopt.m"
                                {
#line 353 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_186, ll_backend__jumpopt__Rval0_185);
                                }
#line 8530 "ll_backend.jumpopt.c"
                                if (ll_backend__jumpopt__succeeded)
#line 8532 "ll_backend.jumpopt.c"
                                  {
#line 460 "jumpopt.m"
                                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                    {
#line 462 "jumpopt.m"
                                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                    }
#line 8548 "ll_backend.jumpopt.c"
                                  }
#line 8550 "ll_backend.jumpopt.c"
                                else
#line 8552 "ll_backend.jumpopt.c"
                                  {
#line 8554 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_360;
#line 8556 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__V_151_151;
#line 8558 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__V_152_152;
#line 8560 "ll_backend.jumpopt.c"
                                    MR_String ll_backend__jumpopt__Shorted_177;
#line 8562 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__ReplacementInstrs_358;
#line 8564 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__V_359_359;

#line 356 "jumpopt.m"
                                    {
#line 356 "jumpopt.m"
                                      ll_backend__jumpopt__Shorted_177 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                                    }
#line 357 "jumpopt.m"
                                    {
#line 357 "jumpopt.m"
                                      ll_backend__jumpopt__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_184));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_186));
#line 357 "jumpopt.m"
                                    }
#line 357 "jumpopt.m"
                                    {
#line 357 "jumpopt.m"
                                      ll_backend__jumpopt__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_151_151, 0) = ((MR_Box) (ll_backend__jumpopt__V_152_152));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_151_151, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_177));
#line 357 "jumpopt.m"
                                    }
#line 357 "jumpopt.m"
                                    {
#line 357 "jumpopt.m"
                                      ll_backend__jumpopt__ReplacementInstrs_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 0) = ((MR_Box) (ll_backend__jumpopt__V_151_151));
#line 357 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "jumpopt.m"
                                    }
#line 464 "jumpopt.m"
                                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8606 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__TypeCtorInfo_289_360 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                    {
#line 468 "jumpopt.m"
                                      ll_backend__jumpopt__V_359_359 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__ReplacementInstrs_358);
                                    }
#line 468 "jumpopt.m"
                                    {
#line 468 "jumpopt.m"
                                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__V_359_359, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                    }
#line 474 "jumpopt.m"
                                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8620 "ll_backend.jumpopt.c"
                                  }
#line 8622 "ll_backend.jumpopt.c"
                              }
#line 8624 "ll_backend.jumpopt.c"
                            else
#line 8626 "ll_backend.jumpopt.c"
                              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 8628 "ll_backend.jumpopt.c"
                                {
#line 8630 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__LCRval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8632 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__LCSRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8634 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__InstrMap_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8636 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Child0_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 3)));
#line 8638 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Child_222;
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 418 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 419 "jumpopt.m"
                                  {
#line 419 "jumpopt.m"
                                    ll_backend__jumpopt__short_label_3_p_0(ll_backend__jumpopt__InstrMap_220, ll_backend__jumpopt__Child0_221, &ll_backend__jumpopt__Child_222);
                                  }
#line 426 "jumpopt.m"
                                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 420 "jumpopt.m"
                                  {
#line 420 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_222, ll_backend__jumpopt__Child0_221);
                                  }
#line 8671 "ll_backend.jumpopt.c"
                                  if (ll_backend__jumpopt__succeeded)
#line 8673 "ll_backend.jumpopt.c"
                                    {
#line 460 "jumpopt.m"
                                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                      {
#line 462 "jumpopt.m"
                                        ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                      }
#line 8689 "ll_backend.jumpopt.c"
                                    }
#line 8691 "ll_backend.jumpopt.c"
                                  else
#line 8693 "ll_backend.jumpopt.c"
                                    {
#line 8695 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__TypeCtorInfo_289_370;
#line 8697 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__Uinstr_214;
#line 8699 "ll_backend.jumpopt.c"
                                      MR_String ll_backend__jumpopt__Comment_215;
#line 8701 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__Instr_216;
#line 8703 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__ReplacementInstrs_368;
#line 8705 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__V_369_369;

#line 423 "jumpopt.m"
                                      {
#line 423 "jumpopt.m"
                                        ll_backend__jumpopt__Uinstr_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 423 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 423 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 1) = ((MR_Box) (ll_backend__jumpopt__LCRval_69));
#line 423 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 2) = ((MR_Box) (ll_backend__jumpopt__LCSRval_70));
#line 423 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 3) = ((MR_Box) (ll_backend__jumpopt__Child_222));
#line 423 "jumpopt.m"
                                      }
#line 424 "jumpopt.m"
                                      {
#line 424 "jumpopt.m"
                                        ll_backend__jumpopt__Comment_215 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                                      }
#line 425 "jumpopt.m"
                                      {
#line 425 "jumpopt.m"
                                        ll_backend__jumpopt__Instr_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_214));
#line 425 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_215));
#line 425 "jumpopt.m"
                                      }
#line 426 "jumpopt.m"
                                      {
#line 426 "jumpopt.m"
                                        ll_backend__jumpopt__ReplacementInstrs_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_216));
#line 426 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "jumpopt.m"
                                      }
#line 464 "jumpopt.m"
                                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8749 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeCtorInfo_289_370 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                      {
#line 468 "jumpopt.m"
                                        ll_backend__jumpopt__V_369_369 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__ReplacementInstrs_368);
                                      }
#line 468 "jumpopt.m"
                                      {
#line 468 "jumpopt.m"
                                        ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__V_369_369, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                      }
#line 474 "jumpopt.m"
                                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8763 "ll_backend.jumpopt.c"
                                    }
#line 8765 "ll_backend.jumpopt.c"
                                }
#line 8767 "ll_backend.jumpopt.c"
                              else
#line 8769 "ll_backend.jumpopt.c"
                                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 8771 "ll_backend.jumpopt.c"
                                  {
#line 415 "jumpopt.m"
                                    ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 460 "jumpopt.m"
                                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                    {
#line 462 "jumpopt.m"
                                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                    }
#line 8789 "ll_backend.jumpopt.c"
                                  }
#line 8791 "ll_backend.jumpopt.c"
                                else
#line 8793 "ll_backend.jumpopt.c"
                                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8795 "ll_backend.jumpopt.c"
                                    {
#line 8797 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__NewRemain_386;

#line 313 "jumpopt.m"
                                      {
#line 313 "jumpopt.m"
                                        ll_backend__jumpopt__jump_opt_llcall_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_386);
                                      }
#line 463 "jumpopt.m"
                                      if ((ll_backend__jumpopt__NewRemain_386 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "jumpopt.m"
                                        {
#line 460 "jumpopt.m"
                                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                          {
#line 462 "jumpopt.m"
                                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                          }
#line 459 "jumpopt.m"
                                        }
#line 463 "jumpopt.m"
                                      else
#line 464 "jumpopt.m"
                                        {
#line 464 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_382;
#line 464 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__ReplacementInstrs_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 0)));
#line 464 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__V_381_381;

#line 464 "jumpopt.m"
                                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 1)));
#line 8838 "ll_backend.jumpopt.c"
                                          ll_backend__jumpopt__TypeCtorInfo_289_382 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                          {
#line 468 "jumpopt.m"
                                            ll_backend__jumpopt__V_381_381 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__ReplacementInstrs_380);
                                          }
#line 468 "jumpopt.m"
                                          {
#line 468 "jumpopt.m"
                                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__V_381_381, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                          }
#line 472 "jumpopt.m"
                                          if ((ll_backend__jumpopt__ReplacementInstrs_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "jumpopt.m"
                                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 472 "jumpopt.m"
                                          else
#line 474 "jumpopt.m"
                                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 464 "jumpopt.m"
                                        }
#line 8860 "ll_backend.jumpopt.c"
                                    }
#line 8862 "ll_backend.jumpopt.c"
                                  else
#line 8864 "ll_backend.jumpopt.c"
                                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 8866 "ll_backend.jumpopt.c"
                                      {
#line 8868 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__FrameInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8870 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__Redoip_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8872 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__Label0_45;
#line 362 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__V_143_143;

#line 375 "jumpopt.m"
                                        ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 362 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Redoip_44)) == (MR_mktag((MR_Integer) 1)));
#line 362 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 362 "jumpopt.m"
                                          {
#line 362 "jumpopt.m"
                                            ll_backend__jumpopt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Redoip_44, (MR_Integer) 0)));
#line 362 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_143_143)) == (MR_mktag((MR_Integer) 1)));
#line 362 "jumpopt.m"
                                            if (ll_backend__jumpopt__succeeded)
#line 362 "jumpopt.m"
                                              ll_backend__jumpopt__Label0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, (MR_Integer) 0)));
#line 362 "jumpopt.m"
                                          }
#line 8895 "ll_backend.jumpopt.c"
                                        if (ll_backend__jumpopt__succeeded)
#line 8897 "ll_backend.jumpopt.c"
                                          {
#line 8899 "ll_backend.jumpopt.c"
                                            MR_Word ll_backend__jumpopt__Label_46;
#line 8901 "ll_backend.jumpopt.c"
                                            MR_Word ll_backend__jumpopt__InstrMap_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 363 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 364 "jumpopt.m"
                                            {
#line 364 "jumpopt.m"
                                              ll_backend__jumpopt__short_label_3_p_0(ll_backend__jumpopt__InstrMap_191, ll_backend__jumpopt__Label0_45, &ll_backend__jumpopt__Label_46);
                                            }
#line 365 "jumpopt.m"
                                            {
#line 365 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_46, ll_backend__jumpopt__Label0_45);
                                            }
#line 8932 "ll_backend.jumpopt.c"
                                            if (ll_backend__jumpopt__succeeded)
#line 8934 "ll_backend.jumpopt.c"
                                              {
#line 460 "jumpopt.m"
                                                ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                                ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                                {
#line 462 "jumpopt.m"
                                                  ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                                }
#line 8950 "ll_backend.jumpopt.c"
                                              }
#line 8952 "ll_backend.jumpopt.c"
                                            else
#line 8954 "ll_backend.jumpopt.c"
                                              {
#line 8956 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__TypeCtorInfo_289_392;
#line 8958 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_145_145;
#line 8960 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_146_146;
#line 8962 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_147_147;
#line 8964 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_148_148;
#line 8966 "ll_backend.jumpopt.c"
                                                MR_String ll_backend__jumpopt__Shorted_187;
#line 8968 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__ReplacementInstrs_390;
#line 8970 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_391_391;

#line 368 "jumpopt.m"
                                                {
#line 368 "jumpopt.m"
                                                  ll_backend__jumpopt__Shorted_187 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                                                }
#line 370 "jumpopt.m"
                                                {
#line 370 "jumpopt.m"
                                                  ll_backend__jumpopt__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_148_148, 0) = ((MR_Box) (ll_backend__jumpopt__Label_46));
#line 370 "jumpopt.m"
                                                }
#line 370 "jumpopt.m"
                                                {
#line 370 "jumpopt.m"
                                                  ll_backend__jumpopt__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_147_147, 0) = ((MR_Box) (ll_backend__jumpopt__V_148_148));
#line 370 "jumpopt.m"
                                                }
#line 370 "jumpopt.m"
                                                {
#line 370 "jumpopt.m"
                                                  ll_backend__jumpopt__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 1) = ((MR_Box) (ll_backend__jumpopt__FrameInfo_43));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 2) = ((MR_Box) (ll_backend__jumpopt__V_147_147));
#line 370 "jumpopt.m"
                                                }
#line 371 "jumpopt.m"
                                                {
#line 371 "jumpopt.m"
                                                  ll_backend__jumpopt__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 0) = ((MR_Box) (ll_backend__jumpopt__V_146_146));
#line 371 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_187));
#line 371 "jumpopt.m"
                                                }
#line 369 "jumpopt.m"
                                                {
#line 369 "jumpopt.m"
                                                  ll_backend__jumpopt__ReplacementInstrs_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 0) = ((MR_Box) (ll_backend__jumpopt__V_145_145));
#line 369 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "jumpopt.m"
                                                }
#line 464 "jumpopt.m"
                                                ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 9028 "ll_backend.jumpopt.c"
                                                ll_backend__jumpopt__TypeCtorInfo_289_392 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "jumpopt.m"
                                                {
#line 468 "jumpopt.m"
                                                  ll_backend__jumpopt__V_391_391 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__ReplacementInstrs_390);
                                                }
#line 468 "jumpopt.m"
                                                {
#line 468 "jumpopt.m"
                                                  ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__V_391_391, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                                                }
#line 474 "jumpopt.m"
                                                ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 9042 "ll_backend.jumpopt.c"
                                              }
#line 9044 "ll_backend.jumpopt.c"
                                          }
#line 9046 "ll_backend.jumpopt.c"
                                        else
#line 9048 "ll_backend.jumpopt.c"
                                          {
#line 460 "jumpopt.m"
                                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                            ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                            {
#line 462 "jumpopt.m"
                                              ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                            }
#line 9064 "ll_backend.jumpopt.c"
                                          }
#line 9066 "ll_backend.jumpopt.c"
                                      }
#line 9068 "ll_backend.jumpopt.c"
                                    else
#line 9070 "ll_backend.jumpopt.c"
                                      {
#line 456 "jumpopt.m"
                                        ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 460 "jumpopt.m"
                                        ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 461 "jumpopt.m"
                                        ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 462 "jumpopt.m"
                                        {
#line 462 "jumpopt.m"
                                          ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "jumpopt.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 462 "jumpopt.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 462 "jumpopt.m"
                                        }
#line 9088 "ll_backend.jumpopt.c"
                                      }
#line 478 "jumpopt.m"
            {
#line 478 "jumpopt.m"
              MR_String ll_backend__jumpopt__V_124_124;

#line 478 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 1)));
#line 478 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 478 "jumpopt.m"
                ll_backend__jumpopt__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)));
#line 478 "jumpopt.m"
            }
#line 479 "jumpopt.m"
            if (!(ll_backend__jumpopt__succeeded))
#line 479 "jumpopt.m"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__ReplacementInstrsEmpty_119 == (MR_Integer) 1);
#line 483 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 482 "jumpopt.m"
              ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__HeadVar__2_2;
#line 483 "jumpopt.m"
            else
#line 484 "jumpopt.m"
              ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__Uinstr0_22;
#line 486 "jumpopt.m"
            /* direct tailcall eliminated */
#line 486 "jumpopt.m"
            {
#line 486 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__RecurseInstrs_120;
#line 486 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__2__tmp_copy_2 = ll_backend__jumpopt__NewPrevInstr_125;
#line 486 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0__tmp_copy_4 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
#line 486 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_6 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

#line 486 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_6;
#line 486 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0__tmp_copy_4;
#line 486 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__2_2 = ll_backend__jumpopt__HeadVar__2__tmp_copy_2;
#line 486 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 486 "jumpopt.m"
            }
#line 486 "jumpopt.m"
            continue;
#line 302 "jumpopt.m"
          }
#line 300 "jumpopt.m"
      }
#line 300 "jumpopt.m"
      break;
#line 300 "jumpopt.m"
    }
#line 294 "jumpopt.m"
}

#line 227 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 227 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
#line 227 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4)
#line 227 "jumpopt.m"
{
#line 230 "jumpopt.m"
  while (MR_TRUE)
#line 230 "jumpopt.m"
    {
#line 230 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 230 "jumpopt.m"
      {
#line 230 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 230 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
#line 230 "jumpopt.m"
        else
#line 232 "jumpopt.m"
          {
#line 232 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr_9;
#line 232 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;
#line 231 "jumpopt.m"
            MR_String ll_backend__jumpopt___Comment_10;
#line 238 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_14;
#line 238 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Between_15;

#line 231 "jumpopt.m"
            ll_backend__jumpopt__Uinstr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_18_18, (MR_Integer) 0)));
#line 231 "jumpopt.m"
            ll_backend__jumpopt___Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_18_18, (MR_Integer) 1)));
#line 234 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 234 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 234 "jumpopt.m"
              {
#line 234 "jumpopt.m"
                ll_backend__jumpopt__Label_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 1)));
#line 235 "jumpopt.m"
                {
#line 235 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_forkproceed_next_3_p_0(ll_backend__jumpopt__Instrs_11, ll_backend__jumpopt__HeadVar__2_2, &ll_backend__jumpopt__Between_15);
                }
#line 234 "jumpopt.m"
              }
#line 238 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 237 "jumpopt.m"
              {
#line 237 "jumpopt.m"
                {
#line 237 "jumpopt.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_14)), ((MR_Box) (ll_backend__jumpopt__Between_15)), ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19);
                }
#line 237 "jumpopt.m"
              }
#line 238 "jumpopt.m"
            else
#line 237 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
#line 241 "jumpopt.m"
            /* direct tailcall eliminated */
#line 241 "jumpopt.m"
            {
#line 241 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs_11;
#line 241 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0__tmp_copy_3 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;

#line 241 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0__tmp_copy_3;
#line 241 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 241 "jumpopt.m"
            }
#line 241 "jumpopt.m"
            continue;
#line 232 "jumpopt.m"
          }
#line 230 "jumpopt.m"
      }
#line 230 "jumpopt.m"
      break;
#line 230 "jumpopt.m"
    }
#line 227 "jumpopt.m"
}

#line 161 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Recjump_2,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
#line 161 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
#line 161 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14)
#line 161 "jumpopt.m"
{
#line 166 "jumpopt.m"
  while (MR_TRUE)
#line 166 "jumpopt.m"
    {
#line 166 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 166 "jumpopt.m"
      {
#line 166 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 166 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "jumpopt.m"
          {
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 166 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 166 "jumpopt.m"
          }
#line 166 "jumpopt.m"
        else
#line 169 "jumpopt.m"
          {
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 0)));
#line 169 "jumpopt.m"
            MR_String ll_backend__jumpopt__Comment0_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 1)));
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;
#line 169 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
#line 218 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_45;

#line 171 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 171 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 171 "jumpopt.m"
              {
#line 171 "jumpopt.m"
                ll_backend__jumpopt__Label_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 1)));
#line 172 "jumpopt.m"
                {
#line 172 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instrs1_46;
#line 172 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instrs2_51;
#line 175 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instr1_47;
#line 173 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_74_74;
#line 173 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_48_48;
#line 173 "jumpopt.m"
                  MR_String ll_backend__jumpopt__V_50_50;
#line 173 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_49_49;
#line 181 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instr2_52;
#line 179 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_53_53;
#line 186 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between1_54;
#line 191 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between2_55;
#line 196 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between3_56;

#line 172 "jumpopt.m"
                  {
#line 172 "jumpopt.m"
                    ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_35, &ll_backend__jumpopt__Instrs1_46);
                  }
#line 173 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_46)) == (MR_mktag((MR_Integer) 1)));
#line 173 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 173 "jumpopt.m"
                    {
#line 173 "jumpopt.m"
                      ll_backend__jumpopt__Instr1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 0)));
#line 173 "jumpopt.m"
                      ll_backend__jumpopt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 1)));
#line 173 "jumpopt.m"
                      ll_backend__jumpopt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 0)));
#line 173 "jumpopt.m"
                      ll_backend__jumpopt__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 1)));
#line 173 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_74_74)) == (MR_mktag((MR_Integer) 2)));
#line 173 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 173 "jumpopt.m"
                        ll_backend__jumpopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_74_74, (MR_Integer) 0)));
#line 173 "jumpopt.m"
                    }
#line 175 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 174 "jumpopt.m"
                    {
#line 174 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_75_75;

#line 174 "jumpopt.m"
                      {
#line 174 "jumpopt.m"
                        ll_backend__jumpopt__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_75_75, 0) = ((MR_Box) (ll_backend__jumpopt__Instr1_47));
#line 174 "jumpopt.m"
                      }
#line 174 "jumpopt.m"
                      {
#line 174 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__V_75_75)), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
                      }
#line 174 "jumpopt.m"
                    }
#line 175 "jumpopt.m"
                  else
#line 176 "jumpopt.m"
                    {
#line 176 "jumpopt.m"
                      {
#line 176 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
                      }
#line 176 "jumpopt.m"
                    }
#line 178 "jumpopt.m"
                  {
#line 178 "jumpopt.m"
                    ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Instrs2_51);
                  }
#line 179 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs2_51)) == (MR_mktag((MR_Integer) 1)));
#line 179 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 179 "jumpopt.m"
                    {
#line 179 "jumpopt.m"
                      ll_backend__jumpopt__Instr2_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 0)));
#line 179 "jumpopt.m"
                      ll_backend__jumpopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 1)));
#line 180 "jumpopt.m"
                      {
#line 180 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Instr2_52)), ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79);
                      }
#line 179 "jumpopt.m"
                    }
#line 179 "jumpopt.m"
                  else
#line 180 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 184 "jumpopt.m"
                  {
#line 184 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_proceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between1_54);
                  }
#line 186 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 185 "jumpopt.m"
                    {
#line 185 "jumpopt.m"
                      {
#line 185 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between1_54)), ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80);
                      }
#line 185 "jumpopt.m"
                    }
#line 186 "jumpopt.m"
                  else
#line 185 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 189 "jumpopt.m"
                  {
#line 189 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between2_55);
                  }
#line 191 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 190 "jumpopt.m"
                    {
#line 190 "jumpopt.m"
                      {
#line 190 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between2_55)), ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81);
                      }
#line 190 "jumpopt.m"
                    }
#line 191 "jumpopt.m"
                  else
#line 190 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 194 "jumpopt.m"
                  {
#line 194 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between3_56);
                  }
#line 196 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 195 "jumpopt.m"
                    {
#line 195 "jumpopt.m"
                      {
#line 195 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between3_56)), ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82);
                      }
#line 195 "jumpopt.m"
                    }
#line 196 "jumpopt.m"
                  else
#line 195 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 207 "jumpopt.m"
                  if (((MR_tag((MR_Word) ll_backend__jumpopt__Label_45)) == (MR_mktag((MR_Integer) 1))))
#line 210 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Recjump_2 == (MR_Integer) 1);
#line 207 "jumpopt.m"
                  else
#line 206 "jumpopt.m"
                    {
#line 206 "jumpopt.m"
                      {
#line 206 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = mercury__string__suffix_2_p_0(ll_backend__jumpopt__Comment0_44, (MR_String) "nofulljump");
                      }
#line 206 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 206 "jumpopt.m"
                    }
#line 215 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 213 "jumpopt.m"
                    {
#line 213 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Block_61;

#line 213 "jumpopt.m"
                      {
#line 213 "jumpopt.m"
                        ll_backend__opt_util__find_no_fallthrough_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Block_61);
                      }
#line 214 "jumpopt.m"
                      {
#line 214 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Block_61)), ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84);
                      }
#line 213 "jumpopt.m"
                    }
#line 215 "jumpopt.m"
                  else
#line 214 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 172 "jumpopt.m"
                }
#line 171 "jumpopt.m"
              }
#line 171 "jumpopt.m"
            else
#line 219 "jumpopt.m"
              {
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 219 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 219 "jumpopt.m"
              }
#line 221 "jumpopt.m"
            /* direct tailcall eliminated */
#line 221 "jumpopt.m"
            {
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs0_35;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0__tmp_copy_3 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0__tmp_copy_5 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0__tmp_copy_7 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0__tmp_copy_9 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0__tmp_copy_11 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
#line 221 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0__tmp_copy_13 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;

#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0__tmp_copy_13;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0__tmp_copy_11;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0__tmp_copy_9;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0__tmp_copy_7;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0__tmp_copy_5;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0__tmp_copy_3;
#line 221 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 221 "jumpopt.m"
            }
#line 221 "jumpopt.m"
            continue;
#line 169 "jumpopt.m"
          }
#line 166 "jumpopt.m"
      }
#line 166 "jumpopt.m"
      break;
#line 166 "jumpopt.m"
    }
#line 161 "jumpopt.m"
}

#line 56 "jumpopt.m"
void MR_CALL 
ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LayoutLabels_13,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__MayAlterRtti_14,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__ProcLabel_15,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Fulljumpopt_16,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Recjump_17,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PessimizeTailCalls_18,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__CheckedNondetTailCall_19,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_C_0_37,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_C_38,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Instrs_40,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Mod_22)
#line 56 "jumpopt.m"
{
#line 110 "jumpopt.m"
  {
#line 110 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeInfo_76_76;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__JumpOptInfo_31;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RevInstrs_34;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_53_53;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58;
#line 110 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_71_71;

#line 111 "jumpopt.m"
    {
#line 111 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeCtorInfo_75_75, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41);
    }
#line 9727 "ll_backend.jumpopt.c"
    ll_backend__jumpopt__TypeInfo_76_76 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 112 "jumpopt.m"
    {
#line 112 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42);
    }
#line 113 "jumpopt.m"
    {
#line 113 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43);
    }
#line 114 "jumpopt.m"
    {
#line 114 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44);
    }
#line 115 "jumpopt.m"
    {
#line 115 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45);
    }
#line 116 "jumpopt.m"
    {
#line 116 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46);
    }
#line 117 "jumpopt.m"
    {
#line 117 "jumpopt.m"
      ll_backend__jumpopt__jump_opt_build_maps_14_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__Recjump_17, ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47, ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48, ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49, ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52);
    }
#line 119 "jumpopt.m"
    {
#line 119 "jumpopt.m"
      ll_backend__jumpopt__V_53_53 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76);
    }
#line 119 "jumpopt.m"
    {
#line 119 "jumpopt.m"
      ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__V_53_53, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54);
    }
#line 122 "jumpopt.m"
    if ((ll_backend__jumpopt__PessimizeTailCalls_18 == (MR_Integer) 0))
#line 121 "jumpopt.m"
      {
#line 121 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
#line 121 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
#line 121 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
#line 121 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
#line 121 "jumpopt.m"
      }
#line 122 "jumpopt.m"
    else
#line 123 "jumpopt.m"
      {
#line 124 "jumpopt.m"
        {
#line 124 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76);
        }
#line 125 "jumpopt.m"
        {
#line 125 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76);
        }
#line 126 "jumpopt.m"
        {
#line 126 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76);
        }
#line 127 "jumpopt.m"
        {
#line 127 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_74_74, ll_backend__jumpopt__TypeInfo_76_76);
        }
#line 123 "jumpopt.m"
      }
#line 129 "jumpopt.m"
    {
#line 129 "jumpopt.m"
      ll_backend__jumpopt__JumpOptInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 0) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 2) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 3) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 4) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 5) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 6) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 7) = ((MR_Box) (ll_backend__jumpopt__LayoutLabels_13));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 8) = ((MR_Box) (ll_backend__jumpopt__Fulljumpopt_16));
#line 129 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 9) = ((MR_Box) (ll_backend__jumpopt__MayAlterRtti_14));
#line 129 "jumpopt.m"
    }
#line 144 "jumpopt.m"
    if ((ll_backend__jumpopt__CheckedNondetTailCall_19 == (MR_Integer) 0))
#line 145 "jumpopt.m"
      {
#line 147 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_36_36;

#line 147 "jumpopt.m"
        {
#line 147 "jumpopt.m"
          ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__JumpOptInfo_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__V_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
        }
#line 147 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_C_38 = ll_backend__jumpopt__STATE_VARIABLE_C_0_37;
#line 145 "jumpopt.m"
      }
#line 144 "jumpopt.m"
    else
#line 133 "jumpopt.m"
      {
#line 133 "jumpopt.m"
        MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo0_32;
#line 133 "jumpopt.m"
        MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo_33;
#line 133 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_62_62;

#line 134 "jumpopt.m"
        {
#line 134 "jumpopt.m"
          ll_backend__jumpopt__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_62_62, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_15));
#line 134 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_62_62, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_C_0_37));
#line 134 "jumpopt.m"
        }
#line 134 "jumpopt.m"
        {
#line 134 "jumpopt.m"
          ll_backend__jumpopt__CheckedNondetTailCallInfo0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 134 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, 0) = ((MR_Box) (ll_backend__jumpopt__V_62_62));
#line 134 "jumpopt.m"
        }
#line 135 "jumpopt.m"
        {
#line 135 "jumpopt.m"
          ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__JumpOptInfo_31, ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, &ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
        }
#line 140 "jumpopt.m"
        if ((ll_backend__jumpopt__CheckedNondetTailCallInfo_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "jumpopt.m"
          {
#line 142 "jumpopt.m"
            {
#line 142 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.optimize_jumps_in_proc\'/12", (MR_String) "lost the next label number");
#line 142 "jumpopt.m"
              return;
            }
#line 141 "jumpopt.m"
          }
#line 140 "jumpopt.m"
        else
#line 139 "jumpopt.m"
          {
#line 139 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Integer) 0)));
#line 139 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_69_69, (MR_Integer) 0)));

#line 139 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_C_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_69_69, (MR_Integer) 1)));
#line 139 "jumpopt.m"
          }
#line 133 "jumpopt.m"
      }
#line 150 "jumpopt.m"
    {
#line 150 "jumpopt.m"
      mercury__list__reverse_2_p_0(ll_backend__jumpopt__TypeCtorInfo_75_75, ll_backend__jumpopt__RevInstrs_34, &ll_backend__jumpopt__STATE_VARIABLE_Instrs_71_71);
    }
#line 151 "jumpopt.m"
    {
#line 151 "jumpopt.m"
      ll_backend__opt_util__filter_out_bad_livevals_2_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_71_71, ll_backend__jumpopt__STATE_VARIABLE_Instrs_40);
    }
#line 152 "jumpopt.m"
    {
#line 152 "jumpopt.m"
      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (*ll_backend__jumpopt__STATE_VARIABLE_Instrs_40)), ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39)));
    }
#line 154 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 153 "jumpopt.m"
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 0;
#line 154 "jumpopt.m"
    else
#line 155 "jumpopt.m"
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 1;
#line 110 "jumpopt.m"
  }
#line 56 "jumpopt.m"
}

void mercury__ll_backend__jumpopt__init(void)
{
}

void mercury__ll_backend__jumpopt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_jump_opt_info_0);
	MR_register_type_ctor_info(&ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_new_remain_0);
}

void mercury__ll_backend__jumpopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.jumpopt. */
