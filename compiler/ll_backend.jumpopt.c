/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "mdbcomp.sym_name.mih"
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




#line 145 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 148 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

#line 151 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 154 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 157 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 160 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 163 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

#line 166 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10];

#line 169 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10];

#line 172 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0;

#line 175 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1];

#line 178 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1];

#line 181 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1];

#line 184 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1];

#line 187 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2];

#line 190 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2];

#line 193 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0;

#line 196 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1;

#line 199 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1];

#line 202 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1];

#line 205 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2];

#line 208 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2];

#line 211 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2];

#line 214 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 217 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 219 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 222 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 225 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 227 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 229 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 232 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 235 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 237 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 240 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 243 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 245 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 247 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 905 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 905 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 905 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_4);

#line 892 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 892 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
#line 892 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
#line 892 "jumpopt.m"
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

#line 1250 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1250 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1250 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24);

#line 1197 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(
#line 1197 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1197 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval0_5,
#line 1197 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Lval_6);

#line 1115 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
#line 1115 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1115 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Rval0_5,
#line 1115 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Rval_6);

#line 1097 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
#line 1097 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1097 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1097 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

#line 1073 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1073 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1073 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12);

#line 1067 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10);

#line 1055 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
#line 1055 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1055 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1055 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6);

#line 1031 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1031 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1031 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1031 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6);

#line 1010 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1010 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1010 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4);

#line 992 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 992 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3);

#line 962 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 962 "jumpopt.m"
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



#line 780 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 789 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 798 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 806 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 815 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 823 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 832 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 840 "ll_backend.jumpopt.c"
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

#line 854 "ll_backend.jumpopt.c"
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

#line 868 "ll_backend.jumpopt.c"
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

#line 883 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 888 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0
  }
};

#line 897 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 902 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 907 "ll_backend.jumpopt.c"
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

#line 928 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 934 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2] = {
  (MR_String) "new_instructions",
  (MR_String) "remaining_instructions"
};

#line 940 "ll_backend.jumpopt.c"
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

#line 955 "ll_backend.jumpopt.c"
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

#line 970 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 975 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0
};

#line 980 "ll_backend.jumpopt.c"
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

#line 994 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 1000 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1006 "ll_backend.jumpopt.c"
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

#line 1027 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 1030 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1032 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1034 "ll_backend.jumpopt.c"
{
#line 1036 "ll_backend.jumpopt.c"
  {
#line 1038 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1041 "ll_backend.jumpopt.c"
    {
#line 1043 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____jump_opt_info_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1046 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1048 "ll_backend.jumpopt.c"
  }
#line 1050 "ll_backend.jumpopt.c"
}

#line 1053 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 1056 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1058 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1060 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1062 "ll_backend.jumpopt.c"
{
#line 1064 "ll_backend.jumpopt.c"
  {
#line 1066 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1069 "ll_backend.jumpopt.c"
    {
#line 1071 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____jump_opt_info_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1074 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1076 "ll_backend.jumpopt.c"
  }
#line 1078 "ll_backend.jumpopt.c"
}

#line 1081 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 1084 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1086 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1088 "ll_backend.jumpopt.c"
{
#line 1090 "ll_backend.jumpopt.c"
  {
#line 1092 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1095 "ll_backend.jumpopt.c"
    {
#line 1097 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____new_remain_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1100 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1102 "ll_backend.jumpopt.c"
  }
#line 1104 "ll_backend.jumpopt.c"
}

#line 1107 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 1110 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1112 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1114 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1116 "ll_backend.jumpopt.c"
{
#line 1118 "ll_backend.jumpopt.c"
  {
#line 1120 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1123 "ll_backend.jumpopt.c"
    {
#line 1125 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____new_remain_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1128 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1130 "ll_backend.jumpopt.c"
  }
#line 1132 "ll_backend.jumpopt.c"
}

#line 905 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 905 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 905 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 905 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_4)
#line 905 "jumpopt.m"
{
#line 905 "jumpopt.m"
  {
#line 905 "jumpopt.m"
    MR_Box ll_backend__jumpopt__closure = ll_backend__jumpopt__closure_arg;
#line 905 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22;
#line 905 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24;

#line 905 "jumpopt.m"
    {
#line 905 "jumpopt.m"
      ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__jumpopt__wrapper_arg_1), &ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22, ((MR_Word) ll_backend__jumpopt__wrapper_arg_3), &ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24);
    }
#line 905 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_2 = ((MR_Box) (ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22));
#line 905 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_4 = ((MR_Box) (ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24));
#line 905 "jumpopt.m"
  }
#line 905 "jumpopt.m"
}

#line 892 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 892 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 892 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
#line 892 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
#line 892 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 892 "jumpopt.m"
{
#line 899 "jumpopt.m"
  {
#line 899 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_57_57;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MayCallMercury_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 7)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDefLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 8)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 9)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 10)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__InstrMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components_28;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix_31;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_37_37;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 899 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40;
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 904 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 905 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39;

#line 905 "jumpopt.m"
    {
#line 905 "jumpopt.m"
      ll_backend__jumpopt__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 905 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_5[0]));
#line 905 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 1) = ((MR_Box) (ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1));
#line 905 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 905 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 3) = ((MR_Box) (ll_backend__jumpopt__InstrMap_27));
#line 905 "jumpopt.m"
    }
#line 1265 "ll_backend.jumpopt.c"
    ll_backend__jumpopt__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 905 "jumpopt.m"
    {
#line 905 "jumpopt.m"
      mercury__list__map_foldl_5_p_0(ll_backend__jumpopt__TypeCtorInfo_57_57, ll_backend__jumpopt__TypeCtorInfo_57_57, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ll_backend__jumpopt__V_37_37, ll_backend__jumpopt__Components0_17, &ll_backend__jumpopt__Components_28, ((MR_Box) ((MR_Integer) 0)), &ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
    }
#line 905 "jumpopt.m"
    ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39 = ((MR_Word) ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
#line 912 "jumpopt.m"
    if ((ll_backend__jumpopt__MaybeNoFix0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "jumpopt.m"
      {
#line 914 "jumpopt.m"
        ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 913 "jumpopt.m"
      }
#line 912 "jumpopt.m"
    else
#line 908 "jumpopt.m"
      {
#line 908 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFix_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix0_22, (MR_Integer) 0)));
#line 908 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFixDest_30;
#line 1060 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Instr0_62;
#line 1058 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv3_Instr0_62;

#line 1058 "jumpopt.m"
        {
#line 1058 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_27, ((MR_Box) (ll_backend__jumpopt__NoFix_29)), &ll_backend__jumpopt__conv3_Instr0_62);
        }
#line 1058 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1058 "jumpopt.m"
          {
#line 1058 "jumpopt.m"
            ll_backend__jumpopt__Instr0_62 = ((MR_Word) ll_backend__jumpopt__conv3_Instr0_62);
#line 1058 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1058 "jumpopt.m"
          }
#line 1060 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1070 "jumpopt.m"
          {
#line 1071 "jumpopt.m"
            MR_Word ll_backend__jumpopt___Instr_63;

#line 1071 "jumpopt.m"
            {
#line 1071 "jumpopt.m"
              ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__NoFix_29, &ll_backend__jumpopt__NoFixDest_30, ll_backend__jumpopt__Instr0_62, &ll_backend__jumpopt___Instr_63);
            }
#line 1070 "jumpopt.m"
          }
#line 1060 "jumpopt.m"
        else
#line 1061 "jumpopt.m"
          ll_backend__jumpopt__NoFixDest_30 = ll_backend__jumpopt__NoFix_29;
#line 910 "jumpopt.m"
        {
#line 910 "jumpopt.m"
          ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix_31, 0) = ((MR_Box) (ll_backend__jumpopt__NoFixDest_30));
#line 910 "jumpopt.m"
        }
#line 911 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = (MR_Integer) 1;
#line 908 "jumpopt.m"
      }
#line 951 "jumpopt.m"
    if ((ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 == (MR_Integer) 0))
#line 950 "jumpopt.m"
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "jumpopt.m"
    else
#line 952 "jumpopt.m"
      {
#line 952 "jumpopt.m"
        MR_String ll_backend__jumpopt__Comment_32;
#line 952 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Uinstr_33;
#line 952 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Instr_34;
#line 952 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_42_42;

#line 953 "jumpopt.m"
        {
#line 953 "jumpopt.m"
          ll_backend__jumpopt__Comment_32 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (some redirects)");
        }
#line 954 "jumpopt.m"
        {
#line 954 "jumpopt.m"
          ll_backend__jumpopt__Uinstr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 1) = ((MR_Box) (ll_backend__jumpopt__Decls_16));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 2) = ((MR_Box) (ll_backend__jumpopt__Components_28));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 3) = ((MR_Box) (ll_backend__jumpopt__MayCallMercury_18));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 4) = ((MR_Box) (ll_backend__jumpopt__MaybeFixNoLayout_19));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 5) = ((MR_Box) (ll_backend__jumpopt__MaybeFixLayout_20));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 6) = ((MR_Box) (ll_backend__jumpopt__MaybeFixOnlyLayout_21));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 7) = ((MR_Box) (ll_backend__jumpopt__MaybeNoFix_31));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 8) = ((MR_Box) (ll_backend__jumpopt__MaybeDefLabel_23));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 9) = ((MR_Box) (ll_backend__jumpopt__StackSlotRef_24));
#line 954 "jumpopt.m"
          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 10) = ((MR_Box) (ll_backend__jumpopt__MaybeDup_25));
#line 954 "jumpopt.m"
        }
#line 957 "jumpopt.m"
        {
#line 957 "jumpopt.m"
          ll_backend__jumpopt__Instr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_33));
#line 957 "jumpopt.m"
          MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_32));
#line 957 "jumpopt.m"
        }
#line 958 "jumpopt.m"
        {
#line 958 "jumpopt.m"
          ll_backend__jumpopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_34));
#line 958 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "jumpopt.m"
        }
#line 958 "jumpopt.m"
        {
#line 958 "jumpopt.m"
          MR_Word base;
#line 958 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "jumpopt.m"
          *ll_backend__jumpopt__NewRemain_15 = base;
#line 958 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_42_42));
#line 958 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 958 "jumpopt.m"
        }
#line 952 "jumpopt.m"
      }
#line 899 "jumpopt.m"
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35;
#line 899 "jumpopt.m"
  }
#line 892 "jumpopt.m"
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
#line 888 "jumpopt.m"
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
#line 789 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGoto_36;
#line 789 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoTarget_38;
#line 789 "jumpopt.m"
          MR_String ll_backend__jumpopt__GotoComment_39;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs1_29;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instr1_30;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs2_31;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoInstr_35;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__HaveLabel_37;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGotoComments_41;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__LabelInstr_42;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_72_72;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_73_73;
#line 761 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_134_134;
#line 768 "jumpopt.m"
          MR_Word ll_backend__jumpopt__ElimLabel_32;
#line 763 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_71_71;
#line 763 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_33_33;
#line 776 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_43_43;
#line 777 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_44_44;

#line 761 "jumpopt.m"
          {
#line 761 "jumpopt.m"
            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_29);
          }
#line 762 "jumpopt.m"
          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_29)) == (MR_mktag((MR_Integer) 1)));
#line 762 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 762 "jumpopt.m"
            {
#line 762 "jumpopt.m"
              ll_backend__jumpopt__Instr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 0)));
#line 762 "jumpopt.m"
              ll_backend__jumpopt__Instrs2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 1)));
#line 763 "jumpopt.m"
              ll_backend__jumpopt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 0)));
#line 763 "jumpopt.m"
              ll_backend__jumpopt__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 1)));
#line 763 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_71_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 763 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 763 "jumpopt.m"
                {
#line 763 "jumpopt.m"
                  ll_backend__jumpopt__ElimLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 1)));
#line 764 "jumpopt.m"
                  {
#line 764 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Instrs3_34;

#line 764 "jumpopt.m"
                    {
#line 764 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__ElimLabel_32)), ll_backend__jumpopt__LayoutLabels_26);
                    }
#line 764 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 764 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 764 "jumpopt.m"
                      {
#line 765 "jumpopt.m"
                        {
#line 765 "jumpopt.m"
                          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs2_31, &ll_backend__jumpopt__Instrs3_34);
                        }
#line 766 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs3_34)) == (MR_mktag((MR_Integer) 1)));
#line 766 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 766 "jumpopt.m"
                          {
#line 766 "jumpopt.m"
                            ll_backend__jumpopt__GotoInstr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 0)));
#line 766 "jumpopt.m"
                            ll_backend__jumpopt__AfterGoto_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 1)));
#line 767 "jumpopt.m"
                            ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 1;
#line 767 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 766 "jumpopt.m"
                          }
#line 764 "jumpopt.m"
                      }
#line 764 "jumpopt.m"
                  }
#line 763 "jumpopt.m"
                }
#line 763 "jumpopt.m"
              else
#line 769 "jumpopt.m"
                {
#line 769 "jumpopt.m"
                  ll_backend__jumpopt__GotoInstr_35 = ll_backend__jumpopt__Instr1_30;
#line 770 "jumpopt.m"
                  ll_backend__jumpopt__AfterGoto_36 = ll_backend__jumpopt__Instrs2_31;
#line 771 "jumpopt.m"
                  ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 0;
#line 769 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 769 "jumpopt.m"
                }
#line 761 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 761 "jumpopt.m"
                {
#line 773 "jumpopt.m"
                  ll_backend__jumpopt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 0)));
#line 773 "jumpopt.m"
                  ll_backend__jumpopt__GotoComment_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 1)));
#line 773 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_72_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 773 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 773 "jumpopt.m"
                    {
#line 773 "jumpopt.m"
                      ll_backend__jumpopt__GotoTarget_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 1)));
#line 774 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__HaveLabel_37 == (MR_Integer) 0);
#line 774 "jumpopt.m"
                      if (!(ll_backend__jumpopt__succeeded))
#line 774 "jumpopt.m"
                        {
#line 774 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_40_40;

#line 774 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoTarget_38)) == (MR_mktag((MR_Integer) 1)));
#line 774 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 774 "jumpopt.m"
                            ll_backend__jumpopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoTarget_38, (MR_Integer) 0)));
#line 774 "jumpopt.m"
                        }
#line 761 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 761 "jumpopt.m"
                        {
#line 775 "jumpopt.m"
                          {
#line 775 "jumpopt.m"
                            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__AfterGoto_36, &ll_backend__jumpopt__AfterGotoComments_41);
                          }
#line 776 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__AfterGotoComments_41)) == (MR_mktag((MR_Integer) 1)));
#line 776 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 776 "jumpopt.m"
                            {
#line 776 "jumpopt.m"
                              ll_backend__jumpopt__LabelInstr_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 0)));
#line 776 "jumpopt.m"
                              ll_backend__jumpopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 1)));
#line 777 "jumpopt.m"
                              ll_backend__jumpopt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 0)));
#line 777 "jumpopt.m"
                              ll_backend__jumpopt__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 1)));
#line 777 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 777 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 777 "jumpopt.m"
                                {
#line 777 "jumpopt.m"
                                  ll_backend__jumpopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 1)));
#line 777 "jumpopt.m"
                                  {
#line 777 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__V_134_134);
                                  }
#line 777 "jumpopt.m"
                                }
#line 776 "jumpopt.m"
                            }
#line 761 "jumpopt.m"
                        }
#line 773 "jumpopt.m"
                    }
#line 761 "jumpopt.m"
                }
#line 762 "jumpopt.m"
            }
#line 789 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 779 "jumpopt.m"
            {
#line 779 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NotCond_45;
#line 779 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NewInstr_46;
#line 779 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RemainInstrs_48;
#line 779 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_74_74;

#line 779 "jumpopt.m"
              {
#line 779 "jumpopt.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_45);
              }
#line 780 "jumpopt.m"
              {
#line 780 "jumpopt.m"
                ll_backend__jumpopt__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 780 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 780 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_45));
#line 780 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 2) = ((MR_Box) (ll_backend__jumpopt__GotoTarget_38));
#line 780 "jumpopt.m"
              }
#line 780 "jumpopt.m"
              {
#line 780 "jumpopt.m"
                ll_backend__jumpopt__NewInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 0) = ((MR_Box) (ll_backend__jumpopt__V_74_74));
#line 780 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_39));
#line 780 "jumpopt.m"
              }
#line 787 "jumpopt.m"
              {
#line 787 "jumpopt.m"
                ll_backend__jumpopt__RemainInstrs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstr_46));
#line 787 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_36));
#line 787 "jumpopt.m"
              }
#line 788 "jumpopt.m"
              {
#line 788 "jumpopt.m"
                MR_Word base;
#line 788 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "jumpopt.m"
                *ll_backend__jumpopt__NewRemain_15 = base;
#line 788 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_48));
#line 788 "jumpopt.m"
              }
#line 779 "jumpopt.m"
            }
#line 789 "jumpopt.m"
          else
#line 827 "jumpopt.m"
            {
#line 827 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoAddr_50;
#line 827 "jumpopt.m"
              MR_Word ll_backend__jumpopt__AfterGoto_121;
#line 827 "jumpopt.m"
              MR_String ll_backend__jumpopt__GotoComment_122;
#line 809 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeCtorInfo_127_127;
#line 809 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeInfo_128_128;
#line 809 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_75_75;
#line 809 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Instrs1_108;
#line 809 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoInstr_109;
#line 810 "jumpopt.m"
              MR_Word ll_backend__jumpopt___TargetBlock_49;
#line 810 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0__TargetBlock_49;
#line 815 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoLabel_51;
#line 816 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_52_52;
#line 816 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv1_V_52_52;

#line 809 "jumpopt.m"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Fulljumpopt_27 == (MR_Integer) 1);
#line 809 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 809 "jumpopt.m"
                {
#line 1800 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1802 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_128_128 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 810 "jumpopt.m"
                  {
#line 810 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv0__TargetBlock_49);
                  }
#line 810 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 810 "jumpopt.m"
                    {
#line 810 "jumpopt.m"
                      ll_backend__jumpopt___TargetBlock_49 = ((MR_Word) ll_backend__jumpopt__conv0__TargetBlock_49);
#line 810 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 810 "jumpopt.m"
                    }
#line 809 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 809 "jumpopt.m"
                    {
#line 811 "jumpopt.m"
                      {
#line 811 "jumpopt.m"
                        ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_108);
                      }
#line 812 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_108)) == (MR_mktag((MR_Integer) 1)));
#line 812 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 812 "jumpopt.m"
                        {
#line 812 "jumpopt.m"
                          ll_backend__jumpopt__GotoInstr_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 0)));
#line 812 "jumpopt.m"
                          ll_backend__jumpopt__AfterGoto_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 1)));
#line 813 "jumpopt.m"
                          ll_backend__jumpopt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 0)));
#line 813 "jumpopt.m"
                          ll_backend__jumpopt__GotoComment_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 1)));
#line 813 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 813 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 813 "jumpopt.m"
                            {
#line 813 "jumpopt.m"
                              ll_backend__jumpopt__GotoAddr_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 1)));
#line 815 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoAddr_50)) == (MR_mktag((MR_Integer) 1)));
#line 815 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 815 "jumpopt.m"
                                {
#line 815 "jumpopt.m"
                                  ll_backend__jumpopt__GotoLabel_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoAddr_50, (MR_Integer) 0)));
#line 816 "jumpopt.m"
                                  {
#line 816 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__GotoLabel_51)), &ll_backend__jumpopt__conv1_V_52_52);
                                  }
#line 816 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 816 "jumpopt.m"
                                    {
#line 816 "jumpopt.m"
                                      ll_backend__jumpopt__V_52_52 = ((MR_Word) ll_backend__jumpopt__conv1_V_52_52);
#line 816 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 816 "jumpopt.m"
                                    }
#line 815 "jumpopt.m"
                                }
#line 814 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 813 "jumpopt.m"
                            }
#line 812 "jumpopt.m"
                        }
#line 809 "jumpopt.m"
                    }
#line 809 "jumpopt.m"
                }
#line 827 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 819 "jumpopt.m"
                {
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewIfInstr_53;
#line 819 "jumpopt.m"
                  MR_String ll_backend__jumpopt__NewGotoComment_54;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewGotoInstr_55;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_76_76;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_79_79;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NotCond_110;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_111;
#line 819 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__RemainInstrs_112;

#line 819 "jumpopt.m"
                  {
#line 819 "jumpopt.m"
                    ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_110);
                  }
#line 820 "jumpopt.m"
                  {
#line 820 "jumpopt.m"
                    ll_backend__jumpopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 820 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 820 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_110));
#line 820 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 2) = ((MR_Box) (ll_backend__jumpopt__GotoAddr_50));
#line 820 "jumpopt.m"
                  }
#line 820 "jumpopt.m"
                  {
#line 820 "jumpopt.m"
                    ll_backend__jumpopt__NewIfInstr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 0) = ((MR_Box) (ll_backend__jumpopt__V_76_76));
#line 820 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_122));
#line 820 "jumpopt.m"
                  }
#line 821 "jumpopt.m"
                  {
#line 821 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 0) = ((MR_Box) (ll_backend__jumpopt__NewIfInstr_53));
#line 821 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "jumpopt.m"
                  }
#line 822 "jumpopt.m"
                  {
#line 822 "jumpopt.m"
                    ll_backend__jumpopt__NewGotoComment_54 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (switched)");
                  }
#line 824 "jumpopt.m"
                  {
#line 824 "jumpopt.m"
                    ll_backend__jumpopt__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, 1) = ((MR_Box) (ll_backend__jumpopt__TargetAddr_17));
#line 824 "jumpopt.m"
                  }
#line 824 "jumpopt.m"
                  {
#line 824 "jumpopt.m"
                    ll_backend__jumpopt__NewGotoInstr_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_79_79));
#line 824 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 1) = ((MR_Box) (ll_backend__jumpopt__NewGotoComment_54));
#line 824 "jumpopt.m"
                  }
#line 825 "jumpopt.m"
                  {
#line 825 "jumpopt.m"
                    ll_backend__jumpopt__RemainInstrs_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 0) = ((MR_Box) (ll_backend__jumpopt__NewGotoInstr_55));
#line 825 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_121));
#line 825 "jumpopt.m"
                  }
#line 826 "jumpopt.m"
                  {
#line 826 "jumpopt.m"
                    MR_Word base;
#line 826 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 826 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_111));
#line 826 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_112));
#line 826 "jumpopt.m"
                  }
#line 819 "jumpopt.m"
                }
#line 827 "jumpopt.m"
              else
#line 885 "jumpopt.m"
                {
#line 885 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TargetInstr_56;
#line 828 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv2_TargetInstr_56;

#line 828 "jumpopt.m"
                  {
#line 828 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_19, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv2_TargetInstr_56);
                  }
#line 828 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 828 "jumpopt.m"
                    {
#line 828 "jumpopt.m"
                      ll_backend__jumpopt__TargetInstr_56 = ((MR_Word) ll_backend__jumpopt__conv2_TargetInstr_56);
#line 828 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 828 "jumpopt.m"
                    }
#line 885 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 831 "jumpopt.m"
                    {
#line 831 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__DestLabel_57;
#line 830 "jumpopt.m"
                      MR_Word ll_backend__jumpopt___DestInstr_58;
#line 873 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between_63;
#line 873 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewCond_65;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeCtorInfo_131_131;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_132_132;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_137_137;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenFT_59;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Block_60;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenBR_61;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccessFT_62;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccessBR_64;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_81_81;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_82_82;
#line 848 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_135_135;
#line 849 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv3_Block_60;
#line 862 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_83_83;
#line 862 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_84_84;
#line 862 "jumpopt.m"
                      MR_Integer ll_backend__jumpopt__V_85_85;

#line 830 "jumpopt.m"
                      {
#line 830 "jumpopt.m"
                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_19, ll_backend__jumpopt__TargetLabel_18, &ll_backend__jumpopt__DestLabel_57, ll_backend__jumpopt__TargetInstr_56, &ll_backend__jumpopt___DestInstr_58);
                      }
#line 848 "jumpopt.m"
                      {
#line 848 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__BetweenFT_59);
                      }
#line 848 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 848 "jumpopt.m"
                        {
#line 2075 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2077 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeInfo_132_132 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 849 "jumpopt.m"
                          {
#line 849 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_131_131, ll_backend__jumpopt__TypeInfo_132_132, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__DestLabel_57)), &ll_backend__jumpopt__conv3_Block_60);
                          }
#line 849 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 849 "jumpopt.m"
                            {
#line 849 "jumpopt.m"
                              ll_backend__jumpopt__Block_60 = ((MR_Word) ll_backend__jumpopt__conv3_Block_60);
#line 849 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 849 "jumpopt.m"
                            }
#line 848 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 848 "jumpopt.m"
                            {
#line 850 "jumpopt.m"
                              {
#line 850 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Block_60, &ll_backend__jumpopt__BetweenBR_61);
                              }
#line 848 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 848 "jumpopt.m"
                                {
#line 851 "jumpopt.m"
                                  {
#line 851 "jumpopt.m"
                                    ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenFT_59, &ll_backend__jumpopt__V_81_81, &ll_backend__jumpopt__Between_63);
                                  }
#line 851 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 851 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 851 "jumpopt.m"
                                    {
#line 851 "jumpopt.m"
                                      ll_backend__jumpopt__SuccessFT_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_81_81, (MR_Integer) 0)));
#line 852 "jumpopt.m"
                                      {
#line 852 "jumpopt.m"
                                        ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenBR_61, &ll_backend__jumpopt__V_82_82, &ll_backend__jumpopt__V_135_135);
                                      }
#line 2125 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_137_137 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 852 "jumpopt.m"
                                      {
#line 852 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_137_137, ((MR_Box) (ll_backend__jumpopt__Between_63)), ((MR_Box) (ll_backend__jumpopt__V_135_135)));
                                      }
#line 848 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 848 "jumpopt.m"
                                        {
#line 852 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 852 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 852 "jumpopt.m"
                                            {
#line 852 "jumpopt.m"
                                              ll_backend__jumpopt__SuccessBR_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, (MR_Integer) 0)));
#line 857 "jumpopt.m"
                                              if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 858 "jumpopt.m"
                                                {
#line 859 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 858 "jumpopt.m"
                                                    {
#line 860 "jumpopt.m"
                                                      ll_backend__jumpopt__NewCond_65 = ll_backend__jumpopt__Cond_16;
#line 860 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 858 "jumpopt.m"
                                                    }
#line 858 "jumpopt.m"
                                                }
#line 857 "jumpopt.m"
                                              else
#line 857 "jumpopt.m"
                                                if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "jumpopt.m"
                                                  {
#line 855 "jumpopt.m"
                                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 854 "jumpopt.m"
                                                    if (ll_backend__jumpopt__succeeded)
#line 854 "jumpopt.m"
                                                      {
#line 856 "jumpopt.m"
                                                        {
#line 856 "jumpopt.m"
                                                          ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NewCond_65);
                                                        }
#line 856 "jumpopt.m"
                                                        ll_backend__jumpopt__succeeded = MR_TRUE;
#line 854 "jumpopt.m"
                                                      }
#line 854 "jumpopt.m"
                                                  }
#line 857 "jumpopt.m"
                                                else
#line 857 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 848 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 848 "jumpopt.m"
                                                {
#line 862 "jumpopt.m"
                                                  ll_backend__jumpopt__V_84_84 = (MR_Integer) 0;
#line 862 "jumpopt.m"
                                                  ll_backend__jumpopt__V_85_85 = (MR_Integer) 1;
#line 862 "jumpopt.m"
                                                  ll_backend__jumpopt__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[15]);
#line 862 "jumpopt.m"
                                                  {
#line 862 "jumpopt.m"
                                                    ll_backend__jumpopt__succeeded = ll_backend__jumpopt__needs_workaround_2_p_0(ll_backend__jumpopt__V_83_83, ll_backend__jumpopt__NewCond_65);
                                                  }
#line 862 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 848 "jumpopt.m"
                                                }
#line 852 "jumpopt.m"
                                            }
#line 848 "jumpopt.m"
                                        }
#line 851 "jumpopt.m"
                                    }
#line 848 "jumpopt.m"
                                }
#line 848 "jumpopt.m"
                            }
#line 848 "jumpopt.m"
                        }
#line 873 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 869 "jumpopt.m"
                        {
#line 869 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewAssign_66;
#line 869 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_100_100;
#line 869 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_113;
#line 864 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_86_86;
#line 864 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_87_87;
#line 864 "jumpopt.m"
                          MR_Integer ll_backend__jumpopt__V_88_88;

#line 864 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__NewCond_65)) == (MR_mktag((MR_Integer) 0)));
#line 864 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 864 "jumpopt.m"
                            {
#line 864 "jumpopt.m"
                              ll_backend__jumpopt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewCond_65, (MR_Integer) 0)));
#line 864 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 864 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 864 "jumpopt.m"
                                {
#line 864 "jumpopt.m"
                                  ll_backend__jumpopt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_86_86, (MR_Integer) 0)));
#line 864 "jumpopt.m"
                                  ll_backend__jumpopt__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_86_86, (MR_Integer) 1)));
#line 864 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_87_87 == (MR_Integer) 0);
#line 864 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 864 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_88_88 == (MR_Integer) 1);
#line 864 "jumpopt.m"
                                }
#line 864 "jumpopt.m"
                            }
#line 866 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 865 "jumpopt.m"
                            {
#line 865 "jumpopt.m"
                              ll_backend__jumpopt__NewAssign_66 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[16];
#line 865 "jumpopt.m"
                            }
#line 866 "jumpopt.m"
                          else
#line 867 "jumpopt.m"
                            {
#line 867 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_92_92;

#line 867 "jumpopt.m"
                              {
#line 867 "jumpopt.m"
                                ll_backend__jumpopt__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 867 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 867 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[15])));
#line 867 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_92_92, 2) = ((MR_Box) (ll_backend__jumpopt__NewCond_65));
#line 867 "jumpopt.m"
                              }
#line 867 "jumpopt.m"
                              {
#line 867 "jumpopt.m"
                                ll_backend__jumpopt__NewAssign_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 0) = ((MR_Box) (ll_backend__jumpopt__V_92_92));
#line 867 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 1) = ((MR_Box) ((MR_String) "shortcircuit bool computation"));
#line 867 "jumpopt.m"
                              }
#line 867 "jumpopt.m"
                            }
#line 871 "jumpopt.m"
                          {
#line 871 "jumpopt.m"
                            ll_backend__jumpopt__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_100_100, 0) = ((MR_Box) (ll_backend__jumpopt__NewAssign_66));
#line 871 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_100_100, 1) = ((MR_Box) (ll_backend__jumpopt__Between_63));
#line 871 "jumpopt.m"
                          }
#line 871 "jumpopt.m"
                          {
#line 871 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_113 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__V_100_100, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[19]));
                          }
#line 872 "jumpopt.m"
                          {
#line 872 "jumpopt.m"
                            MR_Word base;
#line 872 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 872 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_113));
#line 872 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 872 "jumpopt.m"
                          }
#line 869 "jumpopt.m"
                        }
#line 873 "jumpopt.m"
                      else
#line 882 "jumpopt.m"
                        {
#line 875 "jumpopt.m"
                          {
#line 875 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__DestLabel_57);
                          }
#line 875 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 882 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 877 "jumpopt.m"
                            {
#line 877 "jumpopt.m"
                              MR_String ll_backend__jumpopt__Shorted_68;
#line 877 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_104_104;
#line 877 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_105_105;
#line 877 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_106_106;
#line 877 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_114;

#line 877 "jumpopt.m"
                              {
#line 877 "jumpopt.m"
                                ll_backend__jumpopt__Shorted_68 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                              }
#line 879 "jumpopt.m"
                              {
#line 879 "jumpopt.m"
                                ll_backend__jumpopt__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_106_106, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_57));
#line 879 "jumpopt.m"
                              }
#line 879 "jumpopt.m"
                              {
#line 879 "jumpopt.m"
                                ll_backend__jumpopt__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 1) = ((MR_Box) (ll_backend__jumpopt__Cond_16));
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_105_105, 2) = ((MR_Box) (ll_backend__jumpopt__V_106_106));
#line 879 "jumpopt.m"
                              }
#line 879 "jumpopt.m"
                              {
#line 879 "jumpopt.m"
                                ll_backend__jumpopt__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 0) = ((MR_Box) (ll_backend__jumpopt__V_105_105));
#line 879 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_68));
#line 879 "jumpopt.m"
                              }
#line 880 "jumpopt.m"
                              {
#line 880 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 0) = ((MR_Box) (ll_backend__jumpopt__V_104_104));
#line 880 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "jumpopt.m"
                              }
#line 881 "jumpopt.m"
                              {
#line 881 "jumpopt.m"
                                MR_Word base;
#line 881 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 881 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_114));
#line 881 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 881 "jumpopt.m"
                              }
#line 877 "jumpopt.m"
                            }
#line 882 "jumpopt.m"
                          else
#line 883 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 882 "jumpopt.m"
                        }
#line 831 "jumpopt.m"
                    }
#line 885 "jumpopt.m"
                  else
#line 886 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "jumpopt.m"
                }
#line 827 "jumpopt.m"
            }
#line 742 "jumpopt.m"
        }
#line 739 "jumpopt.m"
      }
#line 739 "jumpopt.m"
    else
#line 889 "jumpopt.m"
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "jumpopt.m"
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
#line 2477 "ll_backend.jumpopt.c"
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
#line 2489 "ll_backend.jumpopt.c"
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
#line 2502 "ll_backend.jumpopt.c"
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
#line 2520 "ll_backend.jumpopt.c"
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
#line 2616 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__TypeInfo_11_11 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2618 "ll_backend.jumpopt.c"
              {
#line 2620 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_11_11, ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_5_5)));
              }
#line 259 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 259 "jumpopt.m"
                {
#line 2627 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_12_12 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2629 "ll_backend.jumpopt.c"
                  {
#line 2631 "ll_backend.jumpopt.c"
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
#line 2671 "ll_backend.jumpopt.c"
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
#line 2725 "ll_backend.jumpopt.c"
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
#line 2745 "ll_backend.jumpopt.c"
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
#line 2765 "ll_backend.jumpopt.c"
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
#line 2785 "ll_backend.jumpopt.c"
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
#line 2805 "ll_backend.jumpopt.c"
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
#line 2825 "ll_backend.jumpopt.c"
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
#line 2845 "ll_backend.jumpopt.c"
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
#line 2865 "ll_backend.jumpopt.c"
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
#line 2889 "ll_backend.jumpopt.c"
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

#line 3021 "ll_backend.jumpopt.c"
        {
#line 3023 "ll_backend.jumpopt.c"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_13_13)));
        }
#line 245 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
          {
#line 3030 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeInfo_26_26 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3032 "ll_backend.jumpopt.c"
            {
#line 3034 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_26_26, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_14_14)));
            }
#line 245 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
              {
#line 3041 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__TypeInfo_27_27 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[2];
#line 3043 "ll_backend.jumpopt.c"
                {
#line 3045 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_27_27, ((MR_Box) (ll_backend__jumpopt__V_5_5)), ((MR_Box) (ll_backend__jumpopt__V_15_15)));
                }
#line 245 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                  {
#line 3052 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__TypeInfo_28_28 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3054 "ll_backend.jumpopt.c"
                    {
#line 3056 "ll_backend.jumpopt.c"
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_28_28, ((MR_Box) (ll_backend__jumpopt__V_6_6)), ((MR_Box) (ll_backend__jumpopt__V_16_16)));
                    }
#line 245 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                      {
#line 3063 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__TypeInfo_29_29 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3065 "ll_backend.jumpopt.c"
                        {
#line 3067 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_29_29, ((MR_Box) (ll_backend__jumpopt__V_7_7)), ((MR_Box) (ll_backend__jumpopt__V_17_17)));
                        }
#line 245 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                          {
#line 3074 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__TypeInfo_30_30 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3076 "ll_backend.jumpopt.c"
                            {
#line 3078 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_30_30, ((MR_Box) (ll_backend__jumpopt__V_8_8)), ((MR_Box) (ll_backend__jumpopt__V_18_18)));
                            }
#line 245 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                              {
#line 3085 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__TypeInfo_31_31 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3087 "ll_backend.jumpopt.c"
                                {
#line 3089 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_31_31, ((MR_Box) (ll_backend__jumpopt__V_9_9)), ((MR_Box) (ll_backend__jumpopt__V_19_19)));
                                }
#line 245 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                  {
#line 3096 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__TypeInfo_32_32 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[2];
#line 3098 "ll_backend.jumpopt.c"
                                    {
#line 3100 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_32_32, ((MR_Box) (ll_backend__jumpopt__V_10_10)), ((MR_Box) (ll_backend__jumpopt__V_20_20)));
                                    }
#line 245 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 245 "jumpopt.m"
                                      {
#line 3107 "ll_backend.jumpopt.c"
                                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_11_11 == ll_backend__jumpopt__V_21_21);
#line 245 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 3111 "ll_backend.jumpopt.c"
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

#line 1250 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1250 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1250 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1250 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24)
#line 1250 "jumpopt.m"
{
#line 1256 "jumpopt.m"
  {
#line 1256 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1256 "jumpopt.m"
    if ((ll_backend__jumpopt__STATE_VARIABLE_Component_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1270 "jumpopt.m"
      {
#line 1270 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1270 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1270 "jumpopt.m"
      }
#line 1256 "jumpopt.m"
    else
#line 1256 "jumpopt.m"
      if (((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 1))))
#line 1265 "jumpopt.m"
        {
#line 1265 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1265 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1265 "jumpopt.m"
        }
#line 1256 "jumpopt.m"
      else
#line 1256 "jumpopt.m"
        if (((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 2))))
#line 1266 "jumpopt.m"
          {
#line 1266 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1266 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1266 "jumpopt.m"
          }
#line 1256 "jumpopt.m"
        else
#line 1256 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1269 "jumpopt.m"
            {
#line 1269 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1269 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1269 "jumpopt.m"
            }
#line 1256 "jumpopt.m"
          else
#line 1256 "jumpopt.m"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1256 "jumpopt.m"
              {
#line 1256 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Label0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 1)));
#line 1256 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Label_10;
#line 1060 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Instr0_31;
#line 1058 "jumpopt.m"
                MR_Box ll_backend__jumpopt__conv0_Instr0_31;

#line 1058 "jumpopt.m"
                {
#line 1058 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_6, ((MR_Box) (ll_backend__jumpopt__Label0_9)), &ll_backend__jumpopt__conv0_Instr0_31);
                }
#line 1058 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1058 "jumpopt.m"
                  {
#line 1058 "jumpopt.m"
                    ll_backend__jumpopt__Instr0_31 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_31);
#line 1058 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1058 "jumpopt.m"
                  }
#line 1060 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1070 "jumpopt.m"
                  {
#line 1071 "jumpopt.m"
                    MR_Word ll_backend__jumpopt___Instr_32;

#line 1071 "jumpopt.m"
                    {
#line 1071 "jumpopt.m"
                      ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_9, &ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Instr0_31, &ll_backend__jumpopt___Instr_32);
                    }
#line 1070 "jumpopt.m"
                  }
#line 1060 "jumpopt.m"
                else
#line 1061 "jumpopt.m"
                  ll_backend__jumpopt__Label_10 = ll_backend__jumpopt__Label0_9;
#line 1258 "jumpopt.m"
                {
#line 1258 "jumpopt.m"
                  MR_Word base;
#line 1258 "jumpopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = base;
#line 1258 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1258 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Label_10));
#line 1258 "jumpopt.m"
                }
#line 1259 "jumpopt.m"
                {
#line 1259 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Label0_9);
                }
#line 1261 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1261 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1261 "jumpopt.m"
                else
#line 1262 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = (MR_Integer) 1;
#line 1256 "jumpopt.m"
              }
#line 1256 "jumpopt.m"
            else
#line 1256 "jumpopt.m"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1268 "jumpopt.m"
                {
#line 1268 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1268 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1268 "jumpopt.m"
                }
#line 1256 "jumpopt.m"
              else
#line 1267 "jumpopt.m"
                {
#line 1267 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1267 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1267 "jumpopt.m"
                }
#line 1256 "jumpopt.m"
  }
#line 1250 "jumpopt.m"
}

#line 1197 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(
#line 1197 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1197 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval0_5,
#line 1197 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Lval_6)
#line 1197 "jumpopt.m"
{
#line 1214 "jumpopt.m"
  {
#line 1214 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1214 "jumpopt.m"
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1237 "jumpopt.m"
      {
#line 1237 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Tag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1237 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Field0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 3)));
#line 1237 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Field_15;
#line 1237 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Rval0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 2)));
#line 1237 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Rval_35;

#line 1238 "jumpopt.m"
        {
#line 1238 "jumpopt.m"
          ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_34, &ll_backend__jumpopt__Rval_35);
        }
#line 1239 "jumpopt.m"
        {
#line 1239 "jumpopt.m"
          ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Field0_14, &ll_backend__jumpopt__Field_15);
        }
#line 1240 "jumpopt.m"
        {
#line 1240 "jumpopt.m"
          MR_Word base;
#line 1240 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "jumpopt.m"
          *ll_backend__jumpopt__Lval_6 = base;
#line 1240 "jumpopt.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1240 "jumpopt.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Tag_13));
#line 1240 "jumpopt.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_35));
#line 1240 "jumpopt.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__Field_15));
#line 1240 "jumpopt.m"
        }
#line 1237 "jumpopt.m"
      }
#line 1214 "jumpopt.m"
    else
#line 1214 "jumpopt.m"
      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1246 "jumpopt.m"
        {
#line 1247 "jumpopt.m"
          {
#line 1247 "jumpopt.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_lval\'/3", (MR_String) "lvar");
#line 1247 "jumpopt.m"
            return;
          }
#line 1246 "jumpopt.m"
        }
#line 1214 "jumpopt.m"
      else
#line 1214 "jumpopt.m"
        if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1242 "jumpopt.m"
          {
#line 1242 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Rval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1242 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Rval_37;

#line 1243 "jumpopt.m"
            {
#line 1243 "jumpopt.m"
              ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_36, &ll_backend__jumpopt__Rval_37);
            }
#line 1244 "jumpopt.m"
            {
#line 1244 "jumpopt.m"
              MR_Word base;
#line 1244 "jumpopt.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "jumpopt.m"
              *ll_backend__jumpopt__Lval_6 = base;
#line 1244 "jumpopt.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1244 "jumpopt.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_37));
#line 1244 "jumpopt.m"
            }
#line 1242 "jumpopt.m"
          }
#line 1214 "jumpopt.m"
        else
#line 1214 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1233 "jumpopt.m"
            {
#line 1233 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1233 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_33;

#line 1234 "jumpopt.m"
              {
#line 1234 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_32, &ll_backend__jumpopt__Rval_33);
              }
#line 1235 "jumpopt.m"
              {
#line 1235 "jumpopt.m"
                MR_Word base;
#line 1235 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1235 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1235 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_33));
#line 1235 "jumpopt.m"
              }
#line 1233 "jumpopt.m"
            }
#line 1214 "jumpopt.m"
          else
#line 1214 "jumpopt.m"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1225 "jumpopt.m"
              {
#line 1225 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Rval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1225 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Rval_29;

#line 1226 "jumpopt.m"
                {
#line 1226 "jumpopt.m"
                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_28, &ll_backend__jumpopt__Rval_29);
                }
#line 1227 "jumpopt.m"
                {
#line 1227 "jumpopt.m"
                  MR_Word base;
#line 1227 "jumpopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "jumpopt.m"
                  *ll_backend__jumpopt__Lval_6 = base;
#line 1227 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1227 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_29));
#line 1227 "jumpopt.m"
                }
#line 1225 "jumpopt.m"
              }
#line 1214 "jumpopt.m"
            else
#line 1214 "jumpopt.m"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1221 "jumpopt.m"
                {
#line 1221 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Rval0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1221 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Rval_27;

#line 1222 "jumpopt.m"
                  {
#line 1222 "jumpopt.m"
                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_26, &ll_backend__jumpopt__Rval_27);
                  }
#line 1223 "jumpopt.m"
                  {
#line 1223 "jumpopt.m"
                    MR_Word base;
#line 1223 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "jumpopt.m"
                    *ll_backend__jumpopt__Lval_6 = base;
#line 1223 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1223 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_27));
#line 1223 "jumpopt.m"
                  }
#line 1221 "jumpopt.m"
                }
#line 1214 "jumpopt.m"
              else
#line 1214 "jumpopt.m"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1229 "jumpopt.m"
                  {
#line 1229 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Rval0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1229 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Rval_31;

#line 1230 "jumpopt.m"
                    {
#line 1230 "jumpopt.m"
                      ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_30, &ll_backend__jumpopt__Rval_31);
                    }
#line 1231 "jumpopt.m"
                    {
#line 1231 "jumpopt.m"
                      MR_Word base;
#line 1231 "jumpopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "jumpopt.m"
                      *ll_backend__jumpopt__Lval_6 = base;
#line 1231 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1231 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_31));
#line 1231 "jumpopt.m"
                    }
#line 1229 "jumpopt.m"
                  }
#line 1214 "jumpopt.m"
                else
#line 1214 "jumpopt.m"
                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1217 "jumpopt.m"
                    {
#line 1217 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1217 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Rval_12;

#line 1218 "jumpopt.m"
                      {
#line 1218 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_11, &ll_backend__jumpopt__Rval_12);
                      }
#line 1219 "jumpopt.m"
                      {
#line 1219 "jumpopt.m"
                        MR_Word base;
#line 1219 "jumpopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "jumpopt.m"
                        *ll_backend__jumpopt__Lval_6 = base;
#line 1219 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1219 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_12));
#line 1219 "jumpopt.m"
                      }
#line 1217 "jumpopt.m"
                    }
#line 1214 "jumpopt.m"
                  else
#line 1215 "jumpopt.m"
                    *ll_backend__jumpopt__Lval_6 = ll_backend__jumpopt__Lval0_5;
#line 1214 "jumpopt.m"
  }
#line 1197 "jumpopt.m"
}

#line 1115 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
#line 1115 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1115 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Rval0_5,
#line 1115 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Rval_6)
#line 1115 "jumpopt.m"
{
#line 1119 "jumpopt.m"
  {
#line 1119 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1119 "jumpopt.m"
    if (((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1119 "jumpopt.m"
      {
#line 1119 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
#line 1119 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Lval_8;

#line 1120 "jumpopt.m"
        {
#line 1120 "jumpopt.m"
          ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Lval0_7, &ll_backend__jumpopt__Lval_8);
        }
#line 1121 "jumpopt.m"
        {
#line 1121 "jumpopt.m"
          MR_Word base;
#line 1121 "jumpopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "jumpopt.m"
          *ll_backend__jumpopt__Rval_6 = base;
#line 1121 "jumpopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__jumpopt__Lval_8));
#line 1121 "jumpopt.m"
        }
#line 1119 "jumpopt.m"
      }
#line 1119 "jumpopt.m"
    else
#line 1119 "jumpopt.m"
      if (((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1126 "jumpopt.m"
        {
#line 1126 "jumpopt.m"
          MR_Integer ll_backend__jumpopt__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
#line 1126 "jumpopt.m"
          MR_Word ll_backend__jumpopt__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1126 "jumpopt.m"
          MR_Word ll_backend__jumpopt__SubRval_12;

#line 1127 "jumpopt.m"
          {
#line 1127 "jumpopt.m"
            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_11, &ll_backend__jumpopt__SubRval_12);
          }
#line 1128 "jumpopt.m"
          {
#line 1128 "jumpopt.m"
            MR_Word base;
#line 1128 "jumpopt.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "jumpopt.m"
            *ll_backend__jumpopt__Rval_6 = base;
#line 1128 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__jumpopt__Tag_10));
#line 1128 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__jumpopt__SubRval_12));
#line 1128 "jumpopt.m"
          }
#line 1126 "jumpopt.m"
        }
#line 1119 "jumpopt.m"
      else
#line 1119 "jumpopt.m"
        if (((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1123 "jumpopt.m"
          {
#line 1124 "jumpopt.m"
            {
#line 1124 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_rval\'/3", (MR_String) "var");
#line 1124 "jumpopt.m"
              return;
            }
#line 1123 "jumpopt.m"
          }
#line 1119 "jumpopt.m"
        else
#line 1119 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1138 "jumpopt.m"
            {
#line 1138 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
#line 1138 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 3)));
#line 1138 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval_18;
#line 1138 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval_19;
#line 1138 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Op_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));

#line 1139 "jumpopt.m"
              {
#line 1139 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__LRval0_16, &ll_backend__jumpopt__LRval_18);
              }
#line 1140 "jumpopt.m"
              {
#line 1140 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__RRval0_17, &ll_backend__jumpopt__RRval_19);
              }
#line 1141 "jumpopt.m"
              {
#line 1141 "jumpopt.m"
                MR_Word base;
#line 1141 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "jumpopt.m"
                *ll_backend__jumpopt__Rval_6 = base;
#line 1141 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1141 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_27));
#line 1141 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__LRval_18));
#line 1141 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__RRval_19));
#line 1141 "jumpopt.m"
              }
#line 1138 "jumpopt.m"
            }
#line 1119 "jumpopt.m"
          else
#line 1119 "jumpopt.m"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1130 "jumpopt.m"
              {
#line 1130 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Const0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1130 "jumpopt.m"
                MR_Word ll_backend__jumpopt__Const_14;

#line 1162 "jumpopt.m"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Const0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1165 "jumpopt.m"
                  {
#line 1165 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__CodeAddr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 1)));
#line 1165 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__CodeAddr_41;
#line 1169 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Label0_39;

#line 1166 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CodeAddr0_38)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 1166 "jumpopt.m"
                      {
#line 1166 "jumpopt.m"
                        ll_backend__jumpopt__Label0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr0_38, (MR_Integer) 0)));
#line 1167 "jumpopt.m"
                        {
#line 1167 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Label_40;
#line 1060 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Instr0_46;
#line 1058 "jumpopt.m"
                          MR_Box ll_backend__jumpopt__conv0_Instr0_46;

#line 1058 "jumpopt.m"
                          {
#line 1058 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_39)), &ll_backend__jumpopt__conv0_Instr0_46);
                          }
#line 1058 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1058 "jumpopt.m"
                            {
#line 1058 "jumpopt.m"
                              ll_backend__jumpopt__Instr0_46 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_46);
#line 1058 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1058 "jumpopt.m"
                            }
#line 1060 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1070 "jumpopt.m"
                            {
#line 1071 "jumpopt.m"
                              MR_Word ll_backend__jumpopt___Instr_47;

#line 1071 "jumpopt.m"
                              {
#line 1071 "jumpopt.m"
                                ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_39, &ll_backend__jumpopt__Label_40, ll_backend__jumpopt__Instr0_46, &ll_backend__jumpopt___Instr_47);
                              }
#line 1070 "jumpopt.m"
                            }
#line 1060 "jumpopt.m"
                          else
#line 1061 "jumpopt.m"
                            ll_backend__jumpopt__Label_40 = ll_backend__jumpopt__Label0_39;
#line 1168 "jumpopt.m"
                          {
#line 1168 "jumpopt.m"
                            ll_backend__jumpopt__CodeAddr_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr_41, 0) = ((MR_Box) (ll_backend__jumpopt__Label_40));
#line 1168 "jumpopt.m"
                          }
#line 1167 "jumpopt.m"
                        }
#line 1166 "jumpopt.m"
                      }
#line 1166 "jumpopt.m"
                    else
#line 1170 "jumpopt.m"
                      ll_backend__jumpopt__CodeAddr_41 = ll_backend__jumpopt__CodeAddr0_38;
#line 1172 "jumpopt.m"
                    {
#line 1172 "jumpopt.m"
                      ll_backend__jumpopt__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1172 "jumpopt.m"
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 1) = ((MR_Box) (ll_backend__jumpopt__CodeAddr_41));
#line 1172 "jumpopt.m"
                    }
#line 1165 "jumpopt.m"
                  }
#line 1162 "jumpopt.m"
                else
#line 1163 "jumpopt.m"
                  ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
#line 1132 "jumpopt.m"
                {
#line 1132 "jumpopt.m"
                  MR_Word base;
#line 1132 "jumpopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "jumpopt.m"
                  *ll_backend__jumpopt__Rval_6 = base;
#line 1132 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1132 "jumpopt.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Const_14));
#line 1132 "jumpopt.m"
                }
#line 1130 "jumpopt.m"
              }
#line 1119 "jumpopt.m"
            else
#line 1119 "jumpopt.m"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1134 "jumpopt.m"
                {
#line 1134 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1134 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__SubRval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
#line 1134 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__SubRval_26;

#line 1135 "jumpopt.m"
                  {
#line 1135 "jumpopt.m"
                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_25, &ll_backend__jumpopt__SubRval_26);
                  }
#line 1136 "jumpopt.m"
                  {
#line 1136 "jumpopt.m"
                    MR_Word base;
#line 1136 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "jumpopt.m"
                    *ll_backend__jumpopt__Rval_6 = base;
#line 1136 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1136 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_15));
#line 1136 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__SubRval_26));
#line 1136 "jumpopt.m"
                  }
#line 1134 "jumpopt.m"
                }
#line 1119 "jumpopt.m"
              else
#line 1146 "jumpopt.m"
                *ll_backend__jumpopt__Rval_6 = ll_backend__jumpopt__Rval0_5;
#line 1119 "jumpopt.m"
  }
#line 1115 "jumpopt.m"
}

#line 1097 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
#line 1097 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1097 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1097 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
#line 1097 "jumpopt.m"
{
#line 1100 "jumpopt.m"
  {
#line 1100 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1100 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "jumpopt.m"
      *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "jumpopt.m"
    else
#line 1102 "jumpopt.m"
      {
#line 1102 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 1102 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1102 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel_8;
#line 1102 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels_9;

#line 1107 "jumpopt.m"
        if ((ll_backend__jumpopt__MaybeLabel0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "jumpopt.m"
          ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1107 "jumpopt.m"
        else
#line 1104 "jumpopt.m"
          {
#line 1104 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel0_6, (MR_Integer) 0)));
#line 1104 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_11;
#line 1060 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_15;
#line 1058 "jumpopt.m"
            MR_Box ll_backend__jumpopt__conv0_Instr0_15;

#line 1058 "jumpopt.m"
            {
#line 1058 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__Label0_10)), &ll_backend__jumpopt__conv0_Instr0_15);
            }
#line 1058 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1058 "jumpopt.m"
              {
#line 1058 "jumpopt.m"
                ll_backend__jumpopt__Instr0_15 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_15);
#line 1058 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1058 "jumpopt.m"
              }
#line 1060 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1070 "jumpopt.m"
              {
#line 1071 "jumpopt.m"
                MR_Word ll_backend__jumpopt___Instr_16;

#line 1071 "jumpopt.m"
                {
#line 1071 "jumpopt.m"
                  ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_10, &ll_backend__jumpopt__Label_11, ll_backend__jumpopt__Instr0_15, &ll_backend__jumpopt___Instr_16);
                }
#line 1070 "jumpopt.m"
              }
#line 1060 "jumpopt.m"
            else
#line 1061 "jumpopt.m"
              ll_backend__jumpopt__Label_11 = ll_backend__jumpopt__Label0_10;
#line 1106 "jumpopt.m"
            {
#line 1106 "jumpopt.m"
              ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel_8, 0) = ((MR_Box) (ll_backend__jumpopt__Label_11));
#line 1106 "jumpopt.m"
            }
#line 1104 "jumpopt.m"
          }
#line 1111 "jumpopt.m"
        {
#line 1111 "jumpopt.m"
          ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__MaybeLabels0_7, &ll_backend__jumpopt__MaybeLabels_9);
        }
#line 1102 "jumpopt.m"
        {
#line 1102 "jumpopt.m"
          MR_Word base;
#line 1102 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1102 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__MaybeLabel_8));
#line 1102 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__MaybeLabels_9));
#line 1102 "jumpopt.m"
        }
#line 1102 "jumpopt.m"
      }
#line 1100 "jumpopt.m"
  }
#line 1097 "jumpopt.m"
}

#line 1073 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1073 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1073 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1073 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12)
#line 1073 "jumpopt.m"
{
#line 1090 "jumpopt.m"
  while (MR_TRUE)
#line 1090 "jumpopt.m"
    {
#line 1090 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 1090 "jumpopt.m"
      {
#line 1090 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 1090 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetLabel_15;
#line 1090 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetInstr_16;
#line 1079 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_19_19;
#line 1079 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_20_20;
#line 1079 "jumpopt.m"
        MR_Word ll_backend__jumpopt__SrcUinstr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 0)));
#line 1079 "jumpopt.m"
        MR_String ll_backend__jumpopt___Comment_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 1)));
#line 1085 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv0_TargetInstr_16;

#line 1082 "jumpopt.m"
        if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1081 "jumpopt.m"
          {
#line 1081 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));

#line 1081 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1081 "jumpopt.m"
              ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)));
#line 1081 "jumpopt.m"
          }
#line 1082 "jumpopt.m"
        else
#line 1082 "jumpopt.m"
          if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1083 "jumpopt.m"
            {
#line 1083 "jumpopt.m"
              ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));
#line 1083 "jumpopt.m"
              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1083 "jumpopt.m"
            }
#line 1082 "jumpopt.m"
          else
#line 1082 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1079 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1079 "jumpopt.m"
          {
#line 4086 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 4088 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1085 "jumpopt.m"
            {
#line 1085 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ll_backend__jumpopt__TypeCtorInfo_20_20, ll_backend__jumpopt__InstrMap_7, ((MR_Box) (ll_backend__jumpopt__TargetLabel_15)), &ll_backend__jumpopt__conv0_TargetInstr_16);
            }
#line 1085 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1085 "jumpopt.m"
              {
#line 1085 "jumpopt.m"
                ll_backend__jumpopt__TargetInstr_16 = ((MR_Word) ll_backend__jumpopt__conv0_TargetInstr_16);
#line 1085 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1085 "jumpopt.m"
              }
#line 1079 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1079 "jumpopt.m"
              {
#line 1086 "jumpopt.m"
                {
#line 1086 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = mercury__list__member_2_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__jumpopt__SrcLabel_9)), ll_backend__jumpopt__LabelsSofar_8);
                }
#line 1086 "jumpopt.m"
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 1079 "jumpopt.m"
              }
#line 1079 "jumpopt.m"
          }
#line 1090 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1088 "jumpopt.m"
          {
#line 1088 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;

#line 1088 "jumpopt.m"
            {
#line 1088 "jumpopt.m"
              ll_backend__jumpopt__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 0) = ((MR_Box) (ll_backend__jumpopt__SrcLabel_9));
#line 1088 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 1) = ((MR_Box) (ll_backend__jumpopt__LabelsSofar_8));
#line 1088 "jumpopt.m"
            }
#line 1088 "jumpopt.m"
            /* direct tailcall eliminated */
#line 1088 "jumpopt.m"
            {
#line 1088 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LabelsSofar__tmp_copy_8 = ll_backend__jumpopt__V_18_18;
#line 1088 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcLabel__tmp_copy_9 = ll_backend__jumpopt__TargetLabel_15;
#line 1088 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcInstr__tmp_copy_11 = ll_backend__jumpopt__TargetInstr_16;

#line 1088 "jumpopt.m"
              ll_backend__jumpopt__SrcInstr_11 = ll_backend__jumpopt__SrcInstr__tmp_copy_11;
#line 1088 "jumpopt.m"
              ll_backend__jumpopt__SrcLabel_9 = ll_backend__jumpopt__SrcLabel__tmp_copy_9;
#line 1088 "jumpopt.m"
              ll_backend__jumpopt__LabelsSofar_8 = ll_backend__jumpopt__LabelsSofar__tmp_copy_8;
#line 1088 "jumpopt.m"
            }
#line 1088 "jumpopt.m"
            continue;
#line 1088 "jumpopt.m"
          }
#line 1090 "jumpopt.m"
        else
#line 1091 "jumpopt.m"
          {
#line 1091 "jumpopt.m"
            *ll_backend__jumpopt__DestLabel_10 = ll_backend__jumpopt__SrcLabel_9;
#line 1092 "jumpopt.m"
            *ll_backend__jumpopt__DestInstr_12 = ll_backend__jumpopt__SrcInstr_11;
#line 1091 "jumpopt.m"
          }
#line 1090 "jumpopt.m"
      }
#line 1090 "jumpopt.m"
      break;
#line 1090 "jumpopt.m"
    }
#line 1073 "jumpopt.m"
}

#line 1067 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1067 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1067 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10)
#line 1067 "jumpopt.m"
{
#line 1070 "jumpopt.m"
  {
#line 1070 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1071 "jumpopt.m"
    {
#line 1071 "jumpopt.m"
      ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__SrcLabel_7, ll_backend__jumpopt__DestLabel_8, ll_backend__jumpopt__SrcInstr_9, ll_backend__jumpopt__DestInstr_10);
#line 1071 "jumpopt.m"
      return;
    }
#line 1070 "jumpopt.m"
  }
#line 1067 "jumpopt.m"
}

#line 1055 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
#line 1055 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1055 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1055 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6)
#line 1055 "jumpopt.m"
{
#line 1060 "jumpopt.m"
  {
#line 1060 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 1060 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instr0_7;
#line 1058 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv0_Instr0_7;

#line 1058 "jumpopt.m"
    {
#line 1058 "jumpopt.m"
      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_5)), &ll_backend__jumpopt__conv0_Instr0_7);
    }
#line 1058 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1058 "jumpopt.m"
      {
#line 1058 "jumpopt.m"
        ll_backend__jumpopt__Instr0_7 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_7);
#line 1058 "jumpopt.m"
        ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1058 "jumpopt.m"
      }
#line 1060 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1070 "jumpopt.m"
      {
#line 1071 "jumpopt.m"
        MR_Word ll_backend__jumpopt___Instr_8;

#line 1071 "jumpopt.m"
        {
#line 1071 "jumpopt.m"
          ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_5, ll_backend__jumpopt__Label_6, ll_backend__jumpopt__Instr0_7, &ll_backend__jumpopt___Instr_8);
        }
#line 1070 "jumpopt.m"
      }
#line 1060 "jumpopt.m"
    else
#line 1061 "jumpopt.m"
      *ll_backend__jumpopt__Label_6 = ll_backend__jumpopt__Label0_5;
#line 1060 "jumpopt.m"
  }
#line 1055 "jumpopt.m"
}

#line 1031 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1031 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1031 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1031 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6)
#line 1031 "jumpopt.m"
{
#line 1046 "jumpopt.m"
  {
#line 1046 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_4)) == (MR_mktag((MR_Integer) 2)));
#line 1046 "jumpopt.m"
    MR_Word ll_backend__jumpopt__PrevLivevals_7;
#line 1046 "jumpopt.m"
    MR_Word ll_backend__jumpopt__BetweenLivevals_9;
#line 1046 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs2_11;
#line 1036 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs1_8;
#line 1036 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_12_12;
#line 1036 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_13_13;
#line 1038 "jumpopt.m"
    MR_String ll_backend__jumpopt__V_10_10;

#line 1036 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1036 "jumpopt.m"
      {
#line 1036 "jumpopt.m"
        ll_backend__jumpopt__PrevLivevals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_4, (MR_Integer) 0)));
#line 1037 "jumpopt.m"
        {
#line 1037 "jumpopt.m"
          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_5, &ll_backend__jumpopt__Instrs1_8);
        }
#line 1038 "jumpopt.m"
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1038 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1038 "jumpopt.m"
          {
#line 1038 "jumpopt.m"
            ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 0)));
#line 1038 "jumpopt.m"
            ll_backend__jumpopt__Instrs2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 1)));
#line 1038 "jumpopt.m"
            ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1038 "jumpopt.m"
            ll_backend__jumpopt__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 1)));
#line 1038 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 1038 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1038 "jumpopt.m"
              ll_backend__jumpopt__BetweenLivevals_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_13_13, (MR_Integer) 0)));
#line 1038 "jumpopt.m"
          }
#line 1036 "jumpopt.m"
      }
#line 1046 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1042 "jumpopt.m"
      {
#line 1040 "jumpopt.m"
        {
#line 1040 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[14], ((MR_Box) (ll_backend__jumpopt__BetweenLivevals_9)), ((MR_Box) (ll_backend__jumpopt__PrevLivevals_7)));
        }
#line 1042 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1041 "jumpopt.m"
          *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs2_11;
#line 1042 "jumpopt.m"
        else
#line 1043 "jumpopt.m"
          {
#line 1043 "jumpopt.m"
            {
#line 1043 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.adjust_livevals\'/3", (MR_String) "BetweenLivevals and PrevLivevals differ");
#line 1043 "jumpopt.m"
              return;
            }
#line 1043 "jumpopt.m"
          }
#line 1042 "jumpopt.m"
      }
#line 1046 "jumpopt.m"
    else
#line 1047 "jumpopt.m"
      *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs0_5;
#line 1046 "jumpopt.m"
  }
#line 1031 "jumpopt.m"
}

#line 1010 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1010 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1010 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4)
#line 1010 "jumpopt.m"
{
#line 1014 "jumpopt.m"
  {
#line 1014 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1014 "jumpopt.m"
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1016 "jumpopt.m"
      {
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Right_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 3)));

#line 1017 "jumpopt.m"
        if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 1017 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1017 "jumpopt.m"
        else
#line 1017 "jumpopt.m"
          if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 1017 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1017 "jumpopt.m"
          else
#line 1017 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1016 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1023 "jumpopt.m"
          {
#line 1023 "jumpopt.m"
            if (((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 0))))
#line 1024 "jumpopt.m"
              {
#line 1024 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));

#line 1024 "jumpopt.m"
                {
#line 1024 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_28_28);
                }
#line 1024 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                  {
#line 1026 "jumpopt.m"
                    if (((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 2))))
#line 1026 "jumpopt.m"
                      {
#line 1026 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1026 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1026 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_10_10;
#line 1026 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_11_11;
#line 1026 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_12_12;
#line 1026 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_13_13;

#line 1026 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_8_8 == (MR_Integer) 0);
#line 1026 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                          {
#line 1026 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1026 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                              {
#line 1026 "jumpopt.m"
                                ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 1)));
#line 1026 "jumpopt.m"
                                ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 2)));
#line 1026 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_10_10 == (MR_Integer) 4);
#line 1026 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                                  {
#line 1026 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1026 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                                      {
#line 1026 "jumpopt.m"
                                        ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 1)));
#line 1026 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1026 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 1026 "jumpopt.m"
                                          {
#line 1026 "jumpopt.m"
                                            ll_backend__jumpopt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1026 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 0);
#line 1026 "jumpopt.m"
                                          }
#line 1026 "jumpopt.m"
                                      }
#line 1026 "jumpopt.m"
                                  }
#line 1026 "jumpopt.m"
                              }
#line 1026 "jumpopt.m"
                          }
#line 1026 "jumpopt.m"
                      }
#line 1026 "jumpopt.m"
                    else
#line 1026 "jumpopt.m"
                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1025 "jumpopt.m"
                        {
#line 1025 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1025 "jumpopt.m"
                          MR_Integer ll_backend__jumpopt__V_15_15;

#line 1025 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1025 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1025 "jumpopt.m"
                            {
#line 1025 "jumpopt.m"
                              ll_backend__jumpopt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_14_14, (MR_Integer) 0)));
#line 1025 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_15_15 == (MR_Integer) 0);
#line 1025 "jumpopt.m"
                            }
#line 1025 "jumpopt.m"
                        }
#line 1026 "jumpopt.m"
                      else
#line 1026 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1026 "jumpopt.m"
                  }
#line 1024 "jumpopt.m"
              }
#line 1023 "jumpopt.m"
            else
#line 1023 "jumpopt.m"
              if (((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 2))))
#line 1019 "jumpopt.m"
                {
#line 1019 "jumpopt.m"
                  MR_Integer ll_backend__jumpopt__V_16_16;
#line 1019 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_17_17;
#line 1019 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_18_18;
#line 1019 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_19_19;
#line 1019 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_20_20;
#line 1019 "jumpopt.m"
                  MR_Integer ll_backend__jumpopt__V_21_21;
#line 1019 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_29_29;

#line 1019 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1019 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                    {
#line 1019 "jumpopt.m"
                      ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1019 "jumpopt.m"
                      {
#line 1019 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_29_29);
                      }
#line 1019 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                        {
#line 1021 "jumpopt.m"
                          ll_backend__jumpopt__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));
#line 1021 "jumpopt.m"
                          ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1021 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_16_16 == (MR_Integer) 0);
#line 1019 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                            {
#line 1021 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1021 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                                {
#line 1021 "jumpopt.m"
                                  ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 1)));
#line 1021 "jumpopt.m"
                                  ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 2)));
#line 1021 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_18_18 == (MR_Integer) 4);
#line 1019 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                                    {
#line 1021 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1021 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                                        {
#line 1021 "jumpopt.m"
                                          ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 1)));
#line 1021 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1021 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                                            {
#line 1021 "jumpopt.m"
                                              ll_backend__jumpopt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_20_20, (MR_Integer) 0)));
#line 1021 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_21_21 == (MR_Integer) 0);
#line 1021 "jumpopt.m"
                                            }
#line 1021 "jumpopt.m"
                                        }
#line 1019 "jumpopt.m"
                                    }
#line 1021 "jumpopt.m"
                                }
#line 1019 "jumpopt.m"
                            }
#line 1019 "jumpopt.m"
                        }
#line 1019 "jumpopt.m"
                    }
#line 1019 "jumpopt.m"
                }
#line 1023 "jumpopt.m"
              else
#line 1023 "jumpopt.m"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1019 "jumpopt.m"
                  {
#line 1019 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_22_22;
#line 1019 "jumpopt.m"
                    MR_Integer ll_backend__jumpopt__V_23_23;
#line 1019 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_27_27;

#line 1019 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1019 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                      {
#line 1019 "jumpopt.m"
                        ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1019 "jumpopt.m"
                        {
#line 1019 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_27_27);
                        }
#line 1019 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1019 "jumpopt.m"
                          {
#line 1020 "jumpopt.m"
                            ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1020 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1020 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1020 "jumpopt.m"
                              {
#line 1020 "jumpopt.m"
                                ll_backend__jumpopt__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_22_22, (MR_Integer) 0)));
#line 1020 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_23_23 == (MR_Integer) 0);
#line 1020 "jumpopt.m"
                              }
#line 1019 "jumpopt.m"
                          }
#line 1019 "jumpopt.m"
                      }
#line 1019 "jumpopt.m"
                  }
#line 1023 "jumpopt.m"
                else
#line 1023 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1023 "jumpopt.m"
          }
#line 1016 "jumpopt.m"
      }
#line 1014 "jumpopt.m"
    else
#line 1014 "jumpopt.m"
      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1014 "jumpopt.m"
        {
#line 1014 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1014 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1014 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_26_26;

#line 1014 "jumpopt.m"
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_24_24 == (MR_Integer) 7);
#line 1014 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 1014 "jumpopt.m"
            {
#line 1014 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1014 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 1014 "jumpopt.m"
                {
#line 1014 "jumpopt.m"
                  ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_25_25, (MR_Integer) 0)));
#line 1014 "jumpopt.m"
                  {
#line 1014 "jumpopt.m"
                    return ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_26_26);
                  }
#line 1014 "jumpopt.m"
                }
#line 1014 "jumpopt.m"
            }
#line 1014 "jumpopt.m"
        }
#line 1014 "jumpopt.m"
      else
#line 1014 "jumpopt.m"
        ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1014 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 1014 "jumpopt.m"
  }
#line 1010 "jumpopt.m"
}

#line 992 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 992 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3)
#line 992 "jumpopt.m"
{
#line 994 "jumpopt.m"
  {
#line 994 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 994 "jumpopt.m"
    MR_String ll_backend__jumpopt__HeadVar__2_2;

#line 994 "jumpopt.m"
    {
#line 994 "jumpopt.m"
      return ll_backend__jumpopt__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment_3, (MR_String) " (redirected return)");
    }
#line 994 "jumpopt.m"
    return ll_backend__jumpopt__HeadVar__2_2;
#line 994 "jumpopt.m"
  }
#line 992 "jumpopt.m"
}

#line 962 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 962 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1)
#line 962 "jumpopt.m"
{
#line 964 "jumpopt.m"
  while (MR_TRUE)
#line 964 "jumpopt.m"
    {
#line 964 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 964 "jumpopt.m"
      {
#line 964 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 964 "jumpopt.m"
        MR_Word ll_backend__jumpopt__HeadVar__2_2;

#line 964 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "jumpopt.m"
          ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 1;
#line 964 "jumpopt.m"
        else
#line 965 "jumpopt.m"
          {
#line 965 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 965 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 0)));
#line 966 "jumpopt.m"
            MR_String ll_backend__jumpopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 1)));
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_12_12;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_14_14;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_15_15;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_16_16;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_19_19;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_20_20;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_21_21;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_22_22;
#line 979 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_11_11;

#line 979 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 979 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 979 "jumpopt.m"
              {
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 979 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 979 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 979 "jumpopt.m"
                  ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 979 "jumpopt.m"
              }
#line 4856 "ll_backend.jumpopt.c"
            if (ll_backend__jumpopt__succeeded)
#line 970 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 4860 "ll_backend.jumpopt.c"
            else
#line 4862 "ll_backend.jumpopt.c"
              {
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_13_13;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_23_23;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_24_24;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_25_25;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_26_26;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_27_27;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_29_29;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_30_30;
#line 986 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_31_31;

#line 986 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 986 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 986 "jumpopt.m"
                  {
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 986 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 1);
#line 986 "jumpopt.m"
                  }
#line 4915 "ll_backend.jumpopt.c"
                if (ll_backend__jumpopt__succeeded)
#line 970 "jumpopt.m"
                  ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 4919 "ll_backend.jumpopt.c"
                else
#line 973 "jumpopt.m"
                  {
#line 973 "jumpopt.m"
                    /* direct tailcall eliminated */
#line 973 "jumpopt.m"
                    {
#line 973 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs_4;

#line 973 "jumpopt.m"
                      ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 973 "jumpopt.m"
                    }
#line 973 "jumpopt.m"
                    continue;
#line 973 "jumpopt.m"
                  }
#line 4938 "ll_backend.jumpopt.c"
              }
#line 965 "jumpopt.m"
          }
#line 964 "jumpopt.m"
        return ll_backend__jumpopt__HeadVar__2_2;
#line 964 "jumpopt.m"
      }
#line 964 "jumpopt.m"
      break;
#line 964 "jumpopt.m"
    }
#line 962 "jumpopt.m"
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
#line 622 "jumpopt.m"
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
#line 634 "jumpopt.m"
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
#line 641 "jumpopt.m"
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
#line 650 "jumpopt.m"
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
#line 659 "jumpopt.m"
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
#line 5417 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_195_195 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 5419 "ll_backend.jumpopt.c"
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
#line 5465 "ll_backend.jumpopt.c"
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
#line 713 "jumpopt.m"
                                              {
#line 713 "jumpopt.m"
                                                ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_75_75));
#line 713 "jumpopt.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "jumpopt.m"
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
#line 723 "jumpopt.m"
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
#line 6162 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_269_269 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6164 "ll_backend.jumpopt.c"
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
#line 524 "jumpopt.m"
                  {
#line 524 "jumpopt.m"
                    ll_backend__jumpopt__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 0) = ((MR_Box) (ll_backend__jumpopt__V_60_60));
#line 524 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "jumpopt.m"
                  }
#line 523 "jumpopt.m"
                  {
#line 523 "jumpopt.m"
                    ll_backend__jumpopt__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_56_56));
#line 523 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 1) = ((MR_Box) (ll_backend__jumpopt__V_59_59));
#line 523 "jumpopt.m"
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
#line 521 "jumpopt.m"
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
#line 6370 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_272_272 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6372 "ll_backend.jumpopt.c"
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
#line 535 "jumpopt.m"
                      {
#line 535 "jumpopt.m"
                        ll_backend__jumpopt__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 0) = ((MR_Box) (ll_backend__jumpopt__V_70_70));
#line 535 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "jumpopt.m"
                      }
#line 534 "jumpopt.m"
                      {
#line 534 "jumpopt.m"
                        ll_backend__jumpopt__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 0) = ((MR_Box) (ll_backend__jumpopt__V_66_66));
#line 534 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 1) = ((MR_Box) (ll_backend__jumpopt__V_69_69));
#line 534 "jumpopt.m"
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
#line 535 "jumpopt.m"
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
#line 6593 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeCtorInfo_275_275 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6595 "ll_backend.jumpopt.c"
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
#line 554 "jumpopt.m"
                          {
#line 554 "jumpopt.m"
                            ll_backend__jumpopt__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 0) = ((MR_Box) (ll_backend__jumpopt__V_113_113));
#line 554 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 1) = ((MR_Box) (ll_backend__jumpopt__V_114_114));
#line 554 "jumpopt.m"
                          }
#line 555 "jumpopt.m"
                          {
#line 555 "jumpopt.m"
                            ll_backend__jumpopt__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 0) = ((MR_Box) (ll_backend__jumpopt__V_112_112));
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "jumpopt.m"
                          }
#line 553 "jumpopt.m"
                          {
#line 553 "jumpopt.m"
                            ll_backend__jumpopt__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 0) = ((MR_Box) (ll_backend__jumpopt__V_108_108));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 1) = ((MR_Box) (ll_backend__jumpopt__V_111_111));
#line 553 "jumpopt.m"
                          }
#line 552 "jumpopt.m"
                          {
#line 552 "jumpopt.m"
                            ll_backend__jumpopt__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 552 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 1) = ((MR_Box) (ll_backend__jumpopt__V_107_107));
#line 552 "jumpopt.m"
                          }
#line 550 "jumpopt.m"
                          {
#line 550 "jumpopt.m"
                            ll_backend__jumpopt__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 550 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 1) = ((MR_Box) (ll_backend__jumpopt__V_98_98));
#line 550 "jumpopt.m"
                          }
#line 548 "jumpopt.m"
                          {
#line 548 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_190, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 548 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_190, 1) = ((MR_Box) (ll_backend__jumpopt__V_89_89));
#line 548 "jumpopt.m"
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
#line 555 "jumpopt.m"
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
#line 6923 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeCtorInfo_277_277 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6925 "ll_backend.jumpopt.c"
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
#line 571 "jumpopt.m"
                              {
#line 571 "jumpopt.m"
                                ll_backend__jumpopt__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_132_132, 0) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
#line 571 "jumpopt.m"
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
#line 570 "jumpopt.m"
                              {
#line 570 "jumpopt.m"
                                ll_backend__jumpopt__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_124_124, 0) = ((MR_Box) (ll_backend__jumpopt__V_125_125));
#line 570 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_124_124, 1) = ((MR_Box) ((MR_String) "branch around if cannot tail call"));
#line 570 "jumpopt.m"
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
#line 583 "jumpopt.m"
                              {
#line 583 "jumpopt.m"
                                ll_backend__jumpopt__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_178_178, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_178_178, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 583 "jumpopt.m"
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_177_177, 0) = ((MR_Box) (ll_backend__jumpopt__V_178_178));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "jumpopt.m"
                              }
#line 582 "jumpopt.m"
                              {
#line 582 "jumpopt.m"
                                ll_backend__jumpopt__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_173_173, 0) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_173_173, 1) = ((MR_Box) (ll_backend__jumpopt__V_177_177));
#line 582 "jumpopt.m"
                              }
#line 581 "jumpopt.m"
                              {
#line 581 "jumpopt.m"
                                ll_backend__jumpopt__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_169_169, 0) = ((MR_Box) (ll_backend__jumpopt__V_170_170));
#line 581 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_169_169, 1) = ((MR_Box) (ll_backend__jumpopt__V_173_173));
#line 581 "jumpopt.m"
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_165_165, 0) = ((MR_Box) (ll_backend__jumpopt__V_166_166));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_165_165, 1) = ((MR_Box) (ll_backend__jumpopt__V_169_169));
#line 580 "jumpopt.m"
                              }
#line 579 "jumpopt.m"
                              {
#line 579 "jumpopt.m"
                                ll_backend__jumpopt__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_161_161, 0) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 579 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_161_161, 1) = ((MR_Box) (ll_backend__jumpopt__V_165_165));
#line 579 "jumpopt.m"
                              }
#line 578 "jumpopt.m"
                              {
#line 578 "jumpopt.m"
                                ll_backend__jumpopt__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_152_152, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_152_152, 1) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 578 "jumpopt.m"
                              }
#line 576 "jumpopt.m"
                              {
#line 576 "jumpopt.m"
                                ll_backend__jumpopt__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, 1) = ((MR_Box) (ll_backend__jumpopt__V_152_152));
#line 576 "jumpopt.m"
                              }
#line 574 "jumpopt.m"
                              {
#line 574 "jumpopt.m"
                                ll_backend__jumpopt__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_134_134, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_134_134, 1) = ((MR_Box) (ll_backend__jumpopt__V_143_143));
#line 574 "jumpopt.m"
                              }
#line 572 "jumpopt.m"
                              {
#line 572 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 0) = ((MR_Box) (ll_backend__jumpopt__V_124_124));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 1) = ((MR_Box) (ll_backend__jumpopt__V_134_134));
#line 572 "jumpopt.m"
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
#line 598 "jumpopt.m"
                                      {
#line 598 "jumpopt.m"
                                        ll_backend__jumpopt__V_187_187 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                                      }
#line 596 "jumpopt.m"
                                      {
#line 596 "jumpopt.m"
                                        ll_backend__jumpopt__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_184_184, 0) = ((MR_Box) (ll_backend__jumpopt__V_185_185));
#line 596 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_184_184, 1) = ((MR_Box) (ll_backend__jumpopt__V_187_187));
#line 596 "jumpopt.m"
                                      }
#line 598 "jumpopt.m"
                                      {
#line 598 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 0) = ((MR_Box) (ll_backend__jumpopt__V_184_184));
#line 598 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "jumpopt.m"
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
#line 601 "jumpopt.m"
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

#line 7585 "ll_backend.jumpopt.c"
            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7587 "ll_backend.jumpopt.c"
              {
#line 7589 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 7591 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 7593 "ll_backend.jumpopt.c"
                MR_Word ll_backend__jumpopt__Rval_42;
#line 7595 "ll_backend.jumpopt.c"
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
                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_174, ll_backend__jumpopt__Rval0_41, &ll_backend__jumpopt__Rval_42);
                }
#line 337 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 341 "jumpopt.m"
                {
#line 341 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_42, ll_backend__jumpopt__Rval0_41);
                }
#line 7628 "ll_backend.jumpopt.c"
                if (ll_backend__jumpopt__succeeded)
#line 7630 "ll_backend.jumpopt.c"
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
#line 7646 "ll_backend.jumpopt.c"
                  }
#line 7648 "ll_backend.jumpopt.c"
                else
#line 7650 "ll_backend.jumpopt.c"
                  {
#line 7652 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_289;
#line 7654 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_121;
#line 7656 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_155_155;
#line 7658 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_156_156;
#line 7660 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__V_166_166;
#line 7662 "ll_backend.jumpopt.c"
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
#line 7704 "ll_backend.jumpopt.c"
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
#line 7718 "ll_backend.jumpopt.c"
                  }
#line 7720 "ll_backend.jumpopt.c"
              }
#line 7722 "ll_backend.jumpopt.c"
            else
#line 7724 "ll_backend.jumpopt.c"
              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7726 "ll_backend.jumpopt.c"
                {
#line 385 "jumpopt.m"
                  {
#line 385 "jumpopt.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", (MR_String) "block");
#line 385 "jumpopt.m"
                    return;
                  }
#line 7735 "ll_backend.jumpopt.c"
                }
#line 7737 "ll_backend.jumpopt.c"
              else
#line 7739 "ll_backend.jumpopt.c"
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7741 "ll_backend.jumpopt.c"
                  {
#line 7743 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__Index_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 7745 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__MaybeTargets0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 7747 "ll_backend.jumpopt.c"
                    MR_Word ll_backend__jumpopt__InstrMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 7749 "ll_backend.jumpopt.c"
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
                      ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__InstrMap_34, ll_backend__jumpopt__MaybeTargets0_33, &ll_backend__jumpopt__MaybeTargets_35);
                    }
#line 320 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 324 "jumpopt.m"
                    {
#line 324 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[4], ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35)), ((MR_Box) (ll_backend__jumpopt__MaybeTargets0_33)));
                    }
#line 7782 "ll_backend.jumpopt.c"
                    if (ll_backend__jumpopt__succeeded)
#line 7784 "ll_backend.jumpopt.c"
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
#line 7800 "ll_backend.jumpopt.c"
                      }
#line 7802 "ll_backend.jumpopt.c"
                    else
#line 7804 "ll_backend.jumpopt.c"
                      {
#line 7806 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__TypeCtorInfo_289_300;
#line 7808 "ll_backend.jumpopt.c"
                        MR_String ll_backend__jumpopt__Shorted_36;
#line 7810 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__V_160_160;
#line 7812 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__V_161_161;
#line 7814 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__ReplacementInstrs_298;
#line 7816 "ll_backend.jumpopt.c"
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
#line 329 "jumpopt.m"
                        {
#line 329 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrs_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 0) = ((MR_Box) (ll_backend__jumpopt__V_160_160));
#line 329 "jumpopt.m"
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "jumpopt.m"
                        }
#line 464 "jumpopt.m"
                        ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 7858 "ll_backend.jumpopt.c"
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
#line 7872 "ll_backend.jumpopt.c"
                      }
#line 7874 "ll_backend.jumpopt.c"
                  }
#line 7876 "ll_backend.jumpopt.c"
                else
#line 7878 "ll_backend.jumpopt.c"
                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 7880 "ll_backend.jumpopt.c"
                    {
#line 7882 "ll_backend.jumpopt.c"
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
#line 7923 "ll_backend.jumpopt.c"
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
#line 7945 "ll_backend.jumpopt.c"
                    }
#line 7947 "ll_backend.jumpopt.c"
                  else
#line 7949 "ll_backend.jumpopt.c"
                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 7951 "ll_backend.jumpopt.c"
                      {
#line 7953 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__SyncTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 7955 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__Child0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 7957 "ll_backend.jumpopt.c"
                        MR_Word ll_backend__jumpopt__Child_62;
#line 7959 "ll_backend.jumpopt.c"
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
                          ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_200, ll_backend__jumpopt__Child0_61, &ll_backend__jumpopt__Child_62);
                        }
#line 387 "jumpopt.m"
                        ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 390 "jumpopt.m"
                        {
#line 390 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_62, ll_backend__jumpopt__Child0_61);
                        }
#line 7992 "ll_backend.jumpopt.c"
                        if (ll_backend__jumpopt__succeeded)
#line 7994 "ll_backend.jumpopt.c"
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
#line 8010 "ll_backend.jumpopt.c"
                          }
#line 8012 "ll_backend.jumpopt.c"
                        else
#line 8014 "ll_backend.jumpopt.c"
                          {
#line 8016 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__TypeCtorInfo_289_320;
#line 8018 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__Uinstr_63;
#line 8020 "ll_backend.jumpopt.c"
                            MR_String ll_backend__jumpopt__Comment_64;
#line 8022 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__Instr_65;
#line 8024 "ll_backend.jumpopt.c"
                            MR_Word ll_backend__jumpopt__ReplacementInstrs_318;
#line 8026 "ll_backend.jumpopt.c"
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
#line 8068 "ll_backend.jumpopt.c"
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
#line 8082 "ll_backend.jumpopt.c"
                          }
#line 8084 "ll_backend.jumpopt.c"
                      }
#line 8086 "ll_backend.jumpopt.c"
                    else
#line 8088 "ll_backend.jumpopt.c"
                      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 8090 "ll_backend.jumpopt.c"
                        {
#line 8092 "ll_backend.jumpopt.c"
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
#line 8133 "ll_backend.jumpopt.c"
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
#line 8155 "ll_backend.jumpopt.c"
                        }
#line 8157 "ll_backend.jumpopt.c"
                      else
#line 8159 "ll_backend.jumpopt.c"
                        if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 8161 "ll_backend.jumpopt.c"
                          {
#line 8163 "ll_backend.jumpopt.c"
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
#line 8204 "ll_backend.jumpopt.c"
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
#line 8226 "ll_backend.jumpopt.c"
                          }
#line 8228 "ll_backend.jumpopt.c"
                        else
#line 8230 "ll_backend.jumpopt.c"
                          if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 8232 "ll_backend.jumpopt.c"
                            {
#line 8234 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__InstrMap_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8236 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__Label0_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8238 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__Label_209;
#line 8240 "ll_backend.jumpopt.c"
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
                                ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_207, ll_backend__jumpopt__Label0_208, &ll_backend__jumpopt__Label_209);
                              }
#line 399 "jumpopt.m"
                              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 402 "jumpopt.m"
                              {
#line 402 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_209, ll_backend__jumpopt__Label0_208);
                              }
#line 8273 "ll_backend.jumpopt.c"
                              if (ll_backend__jumpopt__succeeded)
#line 8275 "ll_backend.jumpopt.c"
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
#line 8291 "ll_backend.jumpopt.c"
                                }
#line 8293 "ll_backend.jumpopt.c"
                              else
#line 8295 "ll_backend.jumpopt.c"
                                {
#line 8297 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__TypeCtorInfo_289_350;
#line 8299 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Uinstr_201;
#line 8301 "ll_backend.jumpopt.c"
                                  MR_String ll_backend__jumpopt__Comment_202;
#line 8303 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Instr_203;
#line 8305 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__ReplacementInstrs_348;
#line 8307 "ll_backend.jumpopt.c"
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
#line 8349 "ll_backend.jumpopt.c"
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
#line 8363 "ll_backend.jumpopt.c"
                                }
#line 8365 "ll_backend.jumpopt.c"
                            }
#line 8367 "ll_backend.jumpopt.c"
                          else
#line 8369 "ll_backend.jumpopt.c"
                            if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8371 "ll_backend.jumpopt.c"
                              {
#line 8373 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__InstrMap_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8375 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__Lval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8377 "ll_backend.jumpopt.c"
                                MR_Word ll_backend__jumpopt__Rval0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8379 "ll_backend.jumpopt.c"
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
                                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_181, ll_backend__jumpopt__Rval0_185, &ll_backend__jumpopt__Rval_186);
                                }
#line 349 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 353 "jumpopt.m"
                                {
#line 353 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_186, ll_backend__jumpopt__Rval0_185);
                                }
#line 8412 "ll_backend.jumpopt.c"
                                if (ll_backend__jumpopt__succeeded)
#line 8414 "ll_backend.jumpopt.c"
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
#line 8430 "ll_backend.jumpopt.c"
                                  }
#line 8432 "ll_backend.jumpopt.c"
                                else
#line 8434 "ll_backend.jumpopt.c"
                                  {
#line 8436 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_360;
#line 8438 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__V_151_151;
#line 8440 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__V_152_152;
#line 8442 "ll_backend.jumpopt.c"
                                    MR_String ll_backend__jumpopt__Shorted_177;
#line 8444 "ll_backend.jumpopt.c"
                                    MR_Word ll_backend__jumpopt__ReplacementInstrs_358;
#line 8446 "ll_backend.jumpopt.c"
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
#line 8488 "ll_backend.jumpopt.c"
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
#line 8502 "ll_backend.jumpopt.c"
                                  }
#line 8504 "ll_backend.jumpopt.c"
                              }
#line 8506 "ll_backend.jumpopt.c"
                            else
#line 8508 "ll_backend.jumpopt.c"
                              if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 8510 "ll_backend.jumpopt.c"
                                {
#line 8512 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__LCRval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8514 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__LCSRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8516 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__InstrMap_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8518 "ll_backend.jumpopt.c"
                                  MR_Word ll_backend__jumpopt__Child0_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 3)));
#line 8520 "ll_backend.jumpopt.c"
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
                                    ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_220, ll_backend__jumpopt__Child0_221, &ll_backend__jumpopt__Child_222);
                                  }
#line 417 "jumpopt.m"
                                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 420 "jumpopt.m"
                                  {
#line 420 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_222, ll_backend__jumpopt__Child0_221);
                                  }
#line 8553 "ll_backend.jumpopt.c"
                                  if (ll_backend__jumpopt__succeeded)
#line 8555 "ll_backend.jumpopt.c"
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
#line 8571 "ll_backend.jumpopt.c"
                                    }
#line 8573 "ll_backend.jumpopt.c"
                                  else
#line 8575 "ll_backend.jumpopt.c"
                                    {
#line 8577 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__TypeCtorInfo_289_370;
#line 8579 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__Uinstr_214;
#line 8581 "ll_backend.jumpopt.c"
                                      MR_String ll_backend__jumpopt__Comment_215;
#line 8583 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__Instr_216;
#line 8585 "ll_backend.jumpopt.c"
                                      MR_Word ll_backend__jumpopt__ReplacementInstrs_368;
#line 8587 "ll_backend.jumpopt.c"
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
#line 8631 "ll_backend.jumpopt.c"
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
#line 8645 "ll_backend.jumpopt.c"
                                    }
#line 8647 "ll_backend.jumpopt.c"
                                }
#line 8649 "ll_backend.jumpopt.c"
                              else
#line 8651 "ll_backend.jumpopt.c"
                                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 8653 "ll_backend.jumpopt.c"
                                  {
#line 411 "jumpopt.m"
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
#line 8671 "ll_backend.jumpopt.c"
                                  }
#line 8673 "ll_backend.jumpopt.c"
                                else
#line 8675 "ll_backend.jumpopt.c"
                                  if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8677 "ll_backend.jumpopt.c"
                                    {
#line 8679 "ll_backend.jumpopt.c"
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
#line 8720 "ll_backend.jumpopt.c"
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
#line 8742 "ll_backend.jumpopt.c"
                                    }
#line 8744 "ll_backend.jumpopt.c"
                                  else
#line 8746 "ll_backend.jumpopt.c"
                                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 8748 "ll_backend.jumpopt.c"
                                      {
#line 8750 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__FrameInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8752 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__Redoip_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8754 "ll_backend.jumpopt.c"
                                        MR_Word ll_backend__jumpopt__Label0_45;
#line 362 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__V_143_143;

#line 361 "jumpopt.m"
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
#line 8777 "ll_backend.jumpopt.c"
                                        if (ll_backend__jumpopt__succeeded)
#line 8779 "ll_backend.jumpopt.c"
                                          {
#line 8781 "ll_backend.jumpopt.c"
                                            MR_Word ll_backend__jumpopt__Label_46;
#line 8783 "ll_backend.jumpopt.c"
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
                                              ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_191, ll_backend__jumpopt__Label0_45, &ll_backend__jumpopt__Label_46);
                                            }
#line 365 "jumpopt.m"
                                            {
#line 365 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_46, ll_backend__jumpopt__Label0_45);
                                            }
#line 8814 "ll_backend.jumpopt.c"
                                            if (ll_backend__jumpopt__succeeded)
#line 8816 "ll_backend.jumpopt.c"
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
#line 8832 "ll_backend.jumpopt.c"
                                              }
#line 8834 "ll_backend.jumpopt.c"
                                            else
#line 8836 "ll_backend.jumpopt.c"
                                              {
#line 8838 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__TypeCtorInfo_289_392;
#line 8840 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_145_145;
#line 8842 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_146_146;
#line 8844 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_147_147;
#line 8846 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__V_148_148;
#line 8848 "ll_backend.jumpopt.c"
                                                MR_String ll_backend__jumpopt__Shorted_187;
#line 8850 "ll_backend.jumpopt.c"
                                                MR_Word ll_backend__jumpopt__ReplacementInstrs_390;
#line 8852 "ll_backend.jumpopt.c"
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
#line 370 "jumpopt.m"
                                                {
#line 370 "jumpopt.m"
                                                  ll_backend__jumpopt__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 0) = ((MR_Box) (ll_backend__jumpopt__V_146_146));
#line 370 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_187));
#line 370 "jumpopt.m"
                                                }
#line 371 "jumpopt.m"
                                                {
#line 371 "jumpopt.m"
                                                  ll_backend__jumpopt__ReplacementInstrs_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 0) = ((MR_Box) (ll_backend__jumpopt__V_145_145));
#line 371 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "jumpopt.m"
                                                }
#line 464 "jumpopt.m"
                                                ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8910 "ll_backend.jumpopt.c"
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
#line 8924 "ll_backend.jumpopt.c"
                                              }
#line 8926 "ll_backend.jumpopt.c"
                                          }
#line 8928 "ll_backend.jumpopt.c"
                                        else
#line 8930 "ll_backend.jumpopt.c"
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
#line 8946 "ll_backend.jumpopt.c"
                                          }
#line 8948 "ll_backend.jumpopt.c"
                                      }
#line 8950 "ll_backend.jumpopt.c"
                                    else
#line 8952 "ll_backend.jumpopt.c"
                                      {
#line 455 "jumpopt.m"
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
#line 8970 "ll_backend.jumpopt.c"
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
#line 238 "jumpopt.m"
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
#line 167 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 167 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 167 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 167 "jumpopt.m"
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
#line 181 "jumpopt.m"
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
#line 186 "jumpopt.m"
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
#line 191 "jumpopt.m"
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
#line 196 "jumpopt.m"
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
#line 215 "jumpopt.m"
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
#line 9609 "ll_backend.jumpopt.c"
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
#line 145 "jumpopt.m"
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
