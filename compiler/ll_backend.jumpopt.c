/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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




#line 149 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 152 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

#line 155 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 158 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 161 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 164 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

#line 167 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

#line 170 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10];

#line 173 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10];

#line 176 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0;

#line 179 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1];

#line 182 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1];

#line 185 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1];

#line 188 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1];

#line 191 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0;

#line 194 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1[2];

#line 197 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1;

#line 200 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0[1];

#line 203 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1[1];

#line 206 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0[2];

#line 209 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0[2];

#line 212 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0[2];

#line 215 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2];

#line 218 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2];

#line 221 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0;

#line 224 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1;

#line 227 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1];

#line 230 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1];

#line 233 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2];

#line 236 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2];

#line 239 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2];

#line 242 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 245 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 247 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 250 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 253 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 255 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 257 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 260 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
#line 263 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 265 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 268 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
#line 271 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 273 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 275 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 278 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 281 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 283 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

#line 286 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 289 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 291 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 293 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

#line 907 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 907 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 907 "jumpopt.m"
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

#line 734 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 734 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
#line 734 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
#line 734 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 260 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
#line 260 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

#line 260 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

#line 270 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
#line 270 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

#line 270 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

#line 246 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
#line 246 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

#line 246 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

#line 1252 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1252 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1252 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24);

#line 1199 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(
#line 1199 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1199 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval0_5,
#line 1199 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Lval_6);

#line 1117 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
#line 1117 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1117 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Rval0_5,
#line 1117 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Rval_6);

#line 1099 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
#line 1099 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1099 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1099 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

#line 1075 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1075 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1075 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12);

#line 1069 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1069 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1069 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10);

#line 1057 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
#line 1057 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1057 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1057 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6);

#line 1033 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1033 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1033 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1033 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6);

#line 1012 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1012 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1012 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4);

#line 994 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 994 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3);

#line 964 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 964 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1);

#line 613 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 613 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
#line 613 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
#line 613 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 493 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 493 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
#line 493 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
#line 493 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15);

#line 299 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
#line 299 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
#line 299 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7);

#line 228 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
#line 228 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4);

#line 162 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Recjump_2,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
#line 162 "jumpopt.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 836 "ll_backend.jumpopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 845 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 854 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 862 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 871 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 879 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 888 "ll_backend.jumpopt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 896 "ll_backend.jumpopt.c"
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

#line 910 "ll_backend.jumpopt.c"
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

#line 924 "ll_backend.jumpopt.c"
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

#line 939 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 944 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0
  }
};

#line 953 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

#line 958 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 963 "ll_backend.jumpopt.c"
const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_jump_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "jump_opt_info",
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0 },
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0
};

#line 980 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0 = {
  (MR_String) "dont_check_nondet_tailcalls",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 995 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

#line 1001 "ll_backend.jumpopt.c"
static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1 = {
  (MR_String) "check_nondet_tailcalls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1,
  NULL,
  NULL,
  NULL
};

#line 1016 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0
};

#line 1021 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1
};

#line 1026 "ll_backend.jumpopt.c"
static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1
  }
};

#line 1040 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0
};

#line 1046 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1052 "ll_backend.jumpopt.c"
const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_maybe_check_nondet_tailcalls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "maybe_check_nondet_tailcalls",
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0 },
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0
};

#line 1069 "ll_backend.jumpopt.c"
static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 1075 "ll_backend.jumpopt.c"
static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2] = {
  (MR_String) "new_instructions",
  (MR_String) "remaining_instructions"
};

#line 1081 "ll_backend.jumpopt.c"
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

#line 1096 "ll_backend.jumpopt.c"
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

#line 1111 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 1116 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0
};

#line 1121 "ll_backend.jumpopt.c"
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

#line 1135 "ll_backend.jumpopt.c"
static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

#line 1141 "ll_backend.jumpopt.c"
static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1147 "ll_backend.jumpopt.c"
const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_new_remain_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____new_remain_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____new_remain_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "new_remain",
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0 },
  {     ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0
};

#line 1164 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
#line 1167 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1169 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1171 "ll_backend.jumpopt.c"
{
#line 1173 "ll_backend.jumpopt.c"
  {
#line 1175 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1178 "ll_backend.jumpopt.c"
    {
#line 1180 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____jump_opt_info_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1183 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1185 "ll_backend.jumpopt.c"
  }
#line 1187 "ll_backend.jumpopt.c"
}

#line 1190 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
#line 1193 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1195 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1197 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1199 "ll_backend.jumpopt.c"
{
#line 1201 "ll_backend.jumpopt.c"
  {
#line 1203 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1206 "ll_backend.jumpopt.c"
    {
#line 1208 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____jump_opt_info_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1211 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1213 "ll_backend.jumpopt.c"
  }
#line 1215 "ll_backend.jumpopt.c"
}

#line 1218 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
#line 1221 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1223 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1225 "ll_backend.jumpopt.c"
{
#line 1227 "ll_backend.jumpopt.c"
  {
#line 1229 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1232 "ll_backend.jumpopt.c"
    {
#line 1234 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1237 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1239 "ll_backend.jumpopt.c"
  }
#line 1241 "ll_backend.jumpopt.c"
}

#line 1244 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
#line 1247 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1249 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1251 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1253 "ll_backend.jumpopt.c"
{
#line 1255 "ll_backend.jumpopt.c"
  {
#line 1257 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1260 "ll_backend.jumpopt.c"
    {
#line 1262 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1265 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1267 "ll_backend.jumpopt.c"
  }
#line 1269 "ll_backend.jumpopt.c"
}

#line 1272 "ll_backend.jumpopt.c"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
#line 1275 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 1277 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
#line 1279 "ll_backend.jumpopt.c"
{
#line 1281 "ll_backend.jumpopt.c"
  {
#line 1283 "ll_backend.jumpopt.c"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1286 "ll_backend.jumpopt.c"
    {
#line 1288 "ll_backend.jumpopt.c"
      ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____new_remain_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    }
#line 1291 "ll_backend.jumpopt.c"
    return ll_backend__jumpopt__succeeded;
#line 1293 "ll_backend.jumpopt.c"
  }
#line 1295 "ll_backend.jumpopt.c"
}

#line 1298 "ll_backend.jumpopt.c"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
#line 1301 "ll_backend.jumpopt.c"
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
#line 1303 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
#line 1305 "ll_backend.jumpopt.c"
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
#line 1307 "ll_backend.jumpopt.c"
{
#line 1309 "ll_backend.jumpopt.c"
  {
#line 1311 "ll_backend.jumpopt.c"
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

#line 1314 "ll_backend.jumpopt.c"
    {
#line 1316 "ll_backend.jumpopt.c"
      ll_backend__jumpopt____Compare____new_remain_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    }
#line 1319 "ll_backend.jumpopt.c"
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
#line 1321 "ll_backend.jumpopt.c"
  }
#line 1323 "ll_backend.jumpopt.c"
}

#line 907 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__closure_arg,
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
#line 907 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
#line 907 "jumpopt.m"
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
#line 907 "jumpopt.m"
  MR_Box * ll_backend__jumpopt__wrapper_arg_4)
#line 907 "jumpopt.m"
{
#line 907 "jumpopt.m"
  {
#line 907 "jumpopt.m"
    MR_Box ll_backend__jumpopt__closure = ll_backend__jumpopt__closure_arg;
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22;
#line 907 "jumpopt.m"
    MR_Word ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24;

#line 907 "jumpopt.m"
    {
#line 907 "jumpopt.m"
      ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__jumpopt__wrapper_arg_1), &ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22, ((MR_Word) ll_backend__jumpopt__wrapper_arg_3), &ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24);
    }
#line 907 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_2 = ((MR_Box) (ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22));
#line 907 "jumpopt.m"
    *ll_backend__jumpopt__wrapper_arg_4 = ((MR_Box) (ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24));
#line 907 "jumpopt.m"
  }
#line 907 "jumpopt.m"
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
#line 901 "jumpopt.m"
  {
#line 901 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_57_57;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MayCallMercury_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeFixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 7)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDefLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 8)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 9)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 10)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__InstrMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Components_28;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__MaybeNoFix_31;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_37_37;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 901 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40;
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 906 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 907 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39;

#line 907 "jumpopt.m"
    {
#line 907 "jumpopt.m"
      ll_backend__jumpopt__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 907 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_5[0]));
#line 907 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 1) = ((MR_Box) (ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1));
#line 907 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 907 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_37_37, 3) = ((MR_Box) (ll_backend__jumpopt__InstrMap_27));
#line 907 "jumpopt.m"
    }
#line 1456 "ll_backend.jumpopt.c"
    ll_backend__jumpopt__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 907 "jumpopt.m"
    {
#line 907 "jumpopt.m"
      mercury__list__map_foldl_5_p_0(ll_backend__jumpopt__TypeCtorInfo_57_57, ll_backend__jumpopt__TypeCtorInfo_57_57, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ll_backend__jumpopt__V_37_37, ll_backend__jumpopt__Components0_17, &ll_backend__jumpopt__Components_28, ((MR_Box) ((MR_Integer) 0)), &ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
    }
#line 907 "jumpopt.m"
    ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39 = ((MR_Word) ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
#line 914 "jumpopt.m"
    if ((ll_backend__jumpopt__MaybeNoFix0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "jumpopt.m"
      {
#line 916 "jumpopt.m"
        ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
#line 915 "jumpopt.m"
      }
#line 914 "jumpopt.m"
    else
#line 910 "jumpopt.m"
      {
#line 910 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFix_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix0_22, (MR_Integer) 0)));
#line 910 "jumpopt.m"
        MR_Word ll_backend__jumpopt__NoFixDest_30;
#line 1062 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Instr0_62;
#line 1060 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv3_Instr0_62;

#line 1060 "jumpopt.m"
        {
#line 1060 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_27, ((MR_Box) (ll_backend__jumpopt__NoFix_29)), &ll_backend__jumpopt__conv3_Instr0_62);
        }
#line 1060 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1060 "jumpopt.m"
          {
#line 1060 "jumpopt.m"
            ll_backend__jumpopt__Instr0_62 = ((MR_Word) ll_backend__jumpopt__conv3_Instr0_62);
#line 1060 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1060 "jumpopt.m"
          }
#line 1062 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1072 "jumpopt.m"
          {
#line 1073 "jumpopt.m"
            MR_Word ll_backend__jumpopt___Instr_63;

#line 1073 "jumpopt.m"
            {
#line 1073 "jumpopt.m"
              ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__NoFix_29, &ll_backend__jumpopt__NoFixDest_30, ll_backend__jumpopt__Instr0_62, &ll_backend__jumpopt___Instr_63);
            }
#line 1072 "jumpopt.m"
          }
#line 1062 "jumpopt.m"
        else
#line 1063 "jumpopt.m"
          ll_backend__jumpopt__NoFixDest_30 = ll_backend__jumpopt__NoFix_29;
#line 912 "jumpopt.m"
        {
#line 912 "jumpopt.m"
          ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "jumpopt.m"
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix_31, 0) = ((MR_Box) (ll_backend__jumpopt__NoFixDest_30));
#line 912 "jumpopt.m"
        }
#line 913 "jumpopt.m"
        ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = (MR_Integer) 1;
#line 910 "jumpopt.m"
      }
#line 953 "jumpopt.m"
#line 953 "jumpopt.m"
    switch (ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40) {
#line 953 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 953 "jumpopt.m"
      case (MR_Integer) 0:
#line 952 "jumpopt.m"
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 953 "jumpopt.m"
        break;
#line 953 "jumpopt.m"
      case (MR_Integer) 1:
#line 954 "jumpopt.m"
        {
#line 954 "jumpopt.m"
          MR_String ll_backend__jumpopt__Comment_32;
#line 954 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Uinstr_33;
#line 954 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instr_34;
#line 954 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_42_42;

#line 955 "jumpopt.m"
          {
#line 955 "jumpopt.m"
            ll_backend__jumpopt__Comment_32 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (some redirects)");
          }
#line 956 "jumpopt.m"
          {
#line 956 "jumpopt.m"
            ll_backend__jumpopt__Uinstr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 1) = ((MR_Box) (ll_backend__jumpopt__Decls_16));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 2) = ((MR_Box) (ll_backend__jumpopt__Components_28));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 3) = ((MR_Box) (ll_backend__jumpopt__MayCallMercury_18));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 4) = ((MR_Box) (ll_backend__jumpopt__MaybeFixNoLayout_19));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 5) = ((MR_Box) (ll_backend__jumpopt__MaybeFixLayout_20));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 6) = ((MR_Box) (ll_backend__jumpopt__MaybeFixOnlyLayout_21));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 7) = ((MR_Box) (ll_backend__jumpopt__MaybeNoFix_31));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 8) = ((MR_Box) (ll_backend__jumpopt__MaybeDefLabel_23));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 9) = ((MR_Box) (ll_backend__jumpopt__StackSlotRef_24));
#line 956 "jumpopt.m"
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 10) = ((MR_Box) (ll_backend__jumpopt__MaybeDup_25));
#line 956 "jumpopt.m"
          }
#line 959 "jumpopt.m"
          {
#line 959 "jumpopt.m"
            ll_backend__jumpopt__Instr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 959 "jumpopt.m"
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_33));
#line 959 "jumpopt.m"
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_32));
#line 959 "jumpopt.m"
          }
#line 960 "jumpopt.m"
          {
#line 960 "jumpopt.m"
            ll_backend__jumpopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "jumpopt.m"
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_34));
#line 960 "jumpopt.m"
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "jumpopt.m"
          }
#line 960 "jumpopt.m"
          {
#line 960 "jumpopt.m"
            MR_Word base;
#line 960 "jumpopt.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "jumpopt.m"
            *ll_backend__jumpopt__NewRemain_15 = base;
#line 960 "jumpopt.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_42_42));
#line 960 "jumpopt.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 960 "jumpopt.m"
          }
#line 954 "jumpopt.m"
        }
#line 953 "jumpopt.m"
        break;
#line 953 "jumpopt.m"
    }
#line 901 "jumpopt.m"
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35;
#line 901 "jumpopt.m"
  }
#line 895 "jumpopt.m"
}

#line 734 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 734 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 734 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
#line 734 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
#line 734 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 734 "jumpopt.m"
{
#line 740 "jumpopt.m"
  {
#line 740 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 740 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 740 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 891 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetLabel_18;

#line 742 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_17)) == (MR_mktag((MR_Integer) 1)));
#line 742 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 742 "jumpopt.m"
      {
#line 742 "jumpopt.m"
        ll_backend__jumpopt__TargetLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_17, (MR_Integer) 0)));
#line 745 "jumpopt.m"
        {
#line 745 "jumpopt.m"
          MR_Word ll_backend__jumpopt__InstrMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 745 "jumpopt.m"
          MR_Word ll_backend__jumpopt__BlockMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 745 "jumpopt.m"
          MR_Word ll_backend__jumpopt__LayoutLabels_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 745 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Fulljumpopt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___LvalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___ProcMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___SdprocMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___ForkMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___SuccMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 743 "jumpopt.m"
          MR_Word ll_backend__jumpopt___MayAlterRtti_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 792 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGoto_36;
#line 792 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoTarget_38;
#line 792 "jumpopt.m"
          MR_String ll_backend__jumpopt__GotoComment_39;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs1_29;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instr1_30;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Instrs2_31;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__GotoInstr_35;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__HaveLabel_37;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__AfterGotoComments_41;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__LabelInstr_42;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_72_72;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_73_73;
#line 764 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_134_134;
#line 771 "jumpopt.m"
          MR_Word ll_backend__jumpopt__ElimLabel_32;
#line 766 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_71_71;
#line 766 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_33_33;
#line 779 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_43_43;
#line 780 "jumpopt.m"
          MR_String ll_backend__jumpopt__V_44_44;

#line 764 "jumpopt.m"
          {
#line 764 "jumpopt.m"
            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_29);
          }
#line 765 "jumpopt.m"
          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_29)) == (MR_mktag((MR_Integer) 1)));
#line 765 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 765 "jumpopt.m"
            {
#line 765 "jumpopt.m"
              ll_backend__jumpopt__Instr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 0)));
#line 765 "jumpopt.m"
              ll_backend__jumpopt__Instrs2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 1)));
#line 766 "jumpopt.m"
              ll_backend__jumpopt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 0)));
#line 766 "jumpopt.m"
              ll_backend__jumpopt__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 1)));
#line 766 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_71_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 766 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 766 "jumpopt.m"
                {
#line 766 "jumpopt.m"
                  ll_backend__jumpopt__ElimLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, (MR_Integer) 1)));
#line 767 "jumpopt.m"
                  {
#line 767 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__Instrs3_34;

#line 767 "jumpopt.m"
                    {
#line 767 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__ElimLabel_32)), ll_backend__jumpopt__LayoutLabels_26);
                    }
#line 767 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 767 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 767 "jumpopt.m"
                      {
#line 768 "jumpopt.m"
                        {
#line 768 "jumpopt.m"
                          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs2_31, &ll_backend__jumpopt__Instrs3_34);
                        }
#line 769 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs3_34)) == (MR_mktag((MR_Integer) 1)));
#line 769 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 769 "jumpopt.m"
                          {
#line 769 "jumpopt.m"
                            ll_backend__jumpopt__GotoInstr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 0)));
#line 769 "jumpopt.m"
                            ll_backend__jumpopt__AfterGoto_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 1)));
#line 770 "jumpopt.m"
                            ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 1;
#line 770 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 769 "jumpopt.m"
                          }
#line 767 "jumpopt.m"
                      }
#line 767 "jumpopt.m"
                  }
#line 766 "jumpopt.m"
                }
#line 766 "jumpopt.m"
              else
#line 772 "jumpopt.m"
                {
#line 772 "jumpopt.m"
                  ll_backend__jumpopt__GotoInstr_35 = ll_backend__jumpopt__Instr1_30;
#line 773 "jumpopt.m"
                  ll_backend__jumpopt__AfterGoto_36 = ll_backend__jumpopt__Instrs2_31;
#line 774 "jumpopt.m"
                  ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 0;
#line 772 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 772 "jumpopt.m"
                }
#line 764 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 764 "jumpopt.m"
                {
#line 776 "jumpopt.m"
                  ll_backend__jumpopt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 0)));
#line 776 "jumpopt.m"
                  ll_backend__jumpopt__GotoComment_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 1)));
#line 776 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_72_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 776 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 776 "jumpopt.m"
                    {
#line 776 "jumpopt.m"
                      ll_backend__jumpopt__GotoTarget_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_72_72, (MR_Integer) 1)));
#line 777 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__HaveLabel_37 == (MR_Integer) 0);
#line 777 "jumpopt.m"
                      if (!(ll_backend__jumpopt__succeeded))
#line 777 "jumpopt.m"
                        {
#line 777 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_40_40;

#line 777 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoTarget_38)) == (MR_mktag((MR_Integer) 1)));
#line 777 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 777 "jumpopt.m"
                            ll_backend__jumpopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoTarget_38, (MR_Integer) 0)));
#line 777 "jumpopt.m"
                        }
#line 764 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 764 "jumpopt.m"
                        {
#line 778 "jumpopt.m"
                          {
#line 778 "jumpopt.m"
                            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__AfterGoto_36, &ll_backend__jumpopt__AfterGotoComments_41);
                          }
#line 779 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__AfterGotoComments_41)) == (MR_mktag((MR_Integer) 1)));
#line 779 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 779 "jumpopt.m"
                            {
#line 779 "jumpopt.m"
                              ll_backend__jumpopt__LabelInstr_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 0)));
#line 779 "jumpopt.m"
                              ll_backend__jumpopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 1)));
#line 780 "jumpopt.m"
                              ll_backend__jumpopt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 0)));
#line 780 "jumpopt.m"
                              ll_backend__jumpopt__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 1)));
#line 780 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 780 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 780 "jumpopt.m"
                                {
#line 780 "jumpopt.m"
                                  ll_backend__jumpopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_73_73, (MR_Integer) 1)));
#line 780 "jumpopt.m"
                                  {
#line 780 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__V_134_134);
                                  }
#line 780 "jumpopt.m"
                                }
#line 779 "jumpopt.m"
                            }
#line 764 "jumpopt.m"
                        }
#line 776 "jumpopt.m"
                    }
#line 764 "jumpopt.m"
                }
#line 765 "jumpopt.m"
            }
#line 792 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 782 "jumpopt.m"
            {
#line 782 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NotCond_45;
#line 782 "jumpopt.m"
              MR_Word ll_backend__jumpopt__NewInstr_46;
#line 782 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RemainInstrs_48;
#line 782 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_74_74;

#line 782 "jumpopt.m"
              {
#line 782 "jumpopt.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_45);
              }
#line 783 "jumpopt.m"
              {
#line 783 "jumpopt.m"
                ll_backend__jumpopt__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 783 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 783 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_45));
#line 783 "jumpopt.m"
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_74_74, 2) = ((MR_Box) (ll_backend__jumpopt__GotoTarget_38));
#line 783 "jumpopt.m"
              }
#line 783 "jumpopt.m"
              {
#line 783 "jumpopt.m"
                ll_backend__jumpopt__NewInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 0) = ((MR_Box) (ll_backend__jumpopt__V_74_74));
#line 783 "jumpopt.m"
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_39));
#line 783 "jumpopt.m"
              }
#line 790 "jumpopt.m"
              {
#line 790 "jumpopt.m"
                ll_backend__jumpopt__RemainInstrs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstr_46));
#line 790 "jumpopt.m"
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_36));
#line 790 "jumpopt.m"
              }
#line 791 "jumpopt.m"
              {
#line 791 "jumpopt.m"
                MR_Word base;
#line 791 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "jumpopt.m"
                *ll_backend__jumpopt__NewRemain_15 = base;
#line 791 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_48));
#line 791 "jumpopt.m"
              }
#line 782 "jumpopt.m"
            }
#line 792 "jumpopt.m"
          else
#line 830 "jumpopt.m"
            {
#line 830 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoAddr_50;
#line 830 "jumpopt.m"
              MR_Word ll_backend__jumpopt__AfterGoto_121;
#line 830 "jumpopt.m"
              MR_String ll_backend__jumpopt__GotoComment_122;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeCtorInfo_127_127;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeInfo_128_128;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_75_75;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Instrs1_108;
#line 812 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoInstr_109;
#line 813 "jumpopt.m"
              MR_Word ll_backend__jumpopt___TargetBlock_49;
#line 813 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0__TargetBlock_49;
#line 818 "jumpopt.m"
              MR_Word ll_backend__jumpopt__GotoLabel_51;
#line 819 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_52_52;
#line 819 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv1_V_52_52;

#line 812 "jumpopt.m"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Fulljumpopt_27 == (MR_Integer) 1);
#line 812 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 812 "jumpopt.m"
                {
#line 2002 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2004 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_128_128 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 813 "jumpopt.m"
                  {
#line 813 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv0__TargetBlock_49);
                  }
#line 813 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 813 "jumpopt.m"
                    {
#line 813 "jumpopt.m"
                      ll_backend__jumpopt___TargetBlock_49 = ((MR_Word) ll_backend__jumpopt__conv0__TargetBlock_49);
#line 813 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 813 "jumpopt.m"
                    }
#line 812 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 812 "jumpopt.m"
                    {
#line 814 "jumpopt.m"
                      {
#line 814 "jumpopt.m"
                        ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_108);
                      }
#line 815 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_108)) == (MR_mktag((MR_Integer) 1)));
#line 815 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 815 "jumpopt.m"
                        {
#line 815 "jumpopt.m"
                          ll_backend__jumpopt__GotoInstr_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 0)));
#line 815 "jumpopt.m"
                          ll_backend__jumpopt__AfterGoto_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 1)));
#line 816 "jumpopt.m"
                          ll_backend__jumpopt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 0)));
#line 816 "jumpopt.m"
                          ll_backend__jumpopt__GotoComment_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 1)));
#line 816 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 816 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 816 "jumpopt.m"
                            {
#line 816 "jumpopt.m"
                              ll_backend__jumpopt__GotoAddr_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_75_75, (MR_Integer) 1)));
#line 818 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoAddr_50)) == (MR_mktag((MR_Integer) 1)));
#line 818 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 818 "jumpopt.m"
                                {
#line 818 "jumpopt.m"
                                  ll_backend__jumpopt__GotoLabel_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoAddr_50, (MR_Integer) 0)));
#line 819 "jumpopt.m"
                                  {
#line 819 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__GotoLabel_51)), &ll_backend__jumpopt__conv1_V_52_52);
                                  }
#line 819 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 819 "jumpopt.m"
                                    {
#line 819 "jumpopt.m"
                                      ll_backend__jumpopt__V_52_52 = ((MR_Word) ll_backend__jumpopt__conv1_V_52_52);
#line 819 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 819 "jumpopt.m"
                                    }
#line 818 "jumpopt.m"
                                }
#line 817 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 816 "jumpopt.m"
                            }
#line 815 "jumpopt.m"
                        }
#line 812 "jumpopt.m"
                    }
#line 812 "jumpopt.m"
                }
#line 830 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 822 "jumpopt.m"
                {
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewIfInstr_53;
#line 822 "jumpopt.m"
                  MR_String ll_backend__jumpopt__NewGotoComment_54;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewGotoInstr_55;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_76_76;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_79_79;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NotCond_110;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_111;
#line 822 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__RemainInstrs_112;

#line 822 "jumpopt.m"
                  {
#line 822 "jumpopt.m"
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
#line 823 "jumpopt.m"
                  {
#line 823 "jumpopt.m"
                    ll_backend__jumpopt__NewIfInstr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 823 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 0) = ((MR_Box) (ll_backend__jumpopt__V_76_76));
#line 823 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_122));
#line 823 "jumpopt.m"
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
#line 827 "jumpopt.m"
                  {
#line 827 "jumpopt.m"
                    ll_backend__jumpopt__NewGotoInstr_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_79_79));
#line 827 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 1) = ((MR_Box) (ll_backend__jumpopt__NewGotoComment_54));
#line 827 "jumpopt.m"
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
#line 822 "jumpopt.m"
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
#line 2277 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 2279 "ll_backend.jumpopt.c"
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
#line 2327 "ll_backend.jumpopt.c"
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
#line 882 "jumpopt.m"
                              {
#line 882 "jumpopt.m"
                                ll_backend__jumpopt__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 0) = ((MR_Box) (ll_backend__jumpopt__V_105_105));
#line 882 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_104_104, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_68));
#line 882 "jumpopt.m"
                              }
#line 883 "jumpopt.m"
                              {
#line 883 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 0) = ((MR_Box) (ll_backend__jumpopt__V_104_104));
#line 883 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "jumpopt.m"
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
#line 745 "jumpopt.m"
        }
#line 742 "jumpopt.m"
      }
#line 742 "jumpopt.m"
    else
#line 892 "jumpopt.m"
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "jumpopt.m"
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69;
#line 740 "jumpopt.m"
  }
#line 734 "jumpopt.m"
}

#line 260 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
#line 260 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
#line 260 "jumpopt.m"
{
#line 260 "jumpopt.m"
  {
#line 260 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 260 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_13 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
#line 260 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_14 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

#line 260 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_13 == ll_backend__jumpopt__CastY_14);
#line 260 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 2679 "ll_backend.jumpopt.c"
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "jumpopt.m"
    else
#line 260 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "jumpopt.m"
      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "jumpopt.m"
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "jumpopt.m"
      else
#line 2691 "ll_backend.jumpopt.c"
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "jumpopt.m"
    else
#line 260 "jumpopt.m"
      {
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2704 "ll_backend.jumpopt.c"
          *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "jumpopt.m"
        else
#line 260 "jumpopt.m"
          {
#line 260 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_8_8;

#line 260 "jumpopt.m"
            {
#line 260 "jumpopt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], &ll_backend__jumpopt__V_8_8, ((MR_Box) (ll_backend__jumpopt__V_18_18)), ((MR_Box) (ll_backend__jumpopt__V_6_6)));
            }
#line 2722 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_8_8 == (MR_Integer) 0);
#line 260 "jumpopt.m"
            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 260 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 260 "jumpopt.m"
              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_8_8;
#line 260 "jumpopt.m"
            else
#line 260 "jumpopt.m"
              {
#line 260 "jumpopt.m"
                {
#line 260 "jumpopt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__V_17_17)), ((MR_Box) (ll_backend__jumpopt__V_7_7)));
#line 260 "jumpopt.m"
                  return;
                }
#line 260 "jumpopt.m"
              }
#line 260 "jumpopt.m"
          }
#line 260 "jumpopt.m"
      }
#line 260 "jumpopt.m"
  }
#line 260 "jumpopt.m"
}

#line 260 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 260 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
#line 260 "jumpopt.m"
{
#line 260 "jumpopt.m"
  {
#line 260 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 260 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_9 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 260 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_10 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 260 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_9 == ll_backend__jumpopt__CastY_10);
#line 260 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 260 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 260 "jumpopt.m"
    else
#line 260 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "jumpopt.m"
      {
#line 260 "jumpopt.m"
        MR_Integer ll_backend__jumpopt__CastX_7 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 260 "jumpopt.m"
        MR_Integer ll_backend__jumpopt__CastY_8 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 260 "jumpopt.m"
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastY_8 == ll_backend__jumpopt__CastX_7);
#line 260 "jumpopt.m"
      }
#line 260 "jumpopt.m"
    else
#line 260 "jumpopt.m"
      {
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_11_11;
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_12_12;
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5;
#line 260 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6;

#line 260 "jumpopt.m"
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 260 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 260 "jumpopt.m"
          {
#line 260 "jumpopt.m"
            ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "jumpopt.m"
            ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 2818 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeInfo_11_11 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2820 "ll_backend.jumpopt.c"
            {
#line 2822 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_11_11, ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_5_5)));
            }
#line 260 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 260 "jumpopt.m"
              {
#line 2829 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__TypeInfo_12_12 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 2831 "ll_backend.jumpopt.c"
                {
#line 2833 "ll_backend.jumpopt.c"
                  return ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_12_12, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_6_6)));
                }
#line 260 "jumpopt.m"
              }
#line 260 "jumpopt.m"
          }
#line 260 "jumpopt.m"
      }
#line 260 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 260 "jumpopt.m"
  }
#line 260 "jumpopt.m"
}

#line 270 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
#line 270 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
#line 270 "jumpopt.m"
{
#line 270 "jumpopt.m"
  {
#line 270 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 270 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_13 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
#line 270 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_14 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

#line 270 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_13 == ll_backend__jumpopt__CastY_14);
#line 270 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 2873 "ll_backend.jumpopt.c"
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "jumpopt.m"
    else
#line 270 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "jumpopt.m"
      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "jumpopt.m"
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "jumpopt.m"
      else
#line 2885 "ll_backend.jumpopt.c"
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 1;
#line 270 "jumpopt.m"
    else
#line 270 "jumpopt.m"
      {
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));

#line 270 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2898 "ll_backend.jumpopt.c"
          *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 2;
#line 270 "jumpopt.m"
        else
#line 270 "jumpopt.m"
          {
#line 270 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_12_12;

#line 270 "jumpopt.m"
            {
#line 270 "jumpopt.m"
              mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__jumpopt__V_12_12, ll_backend__jumpopt__V_18_18, ll_backend__jumpopt__V_10_10);
            }
#line 2916 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_12_12 == (MR_Integer) 0);
#line 270 "jumpopt.m"
            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 270 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 270 "jumpopt.m"
              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_12_12;
#line 270 "jumpopt.m"
            else
#line 270 "jumpopt.m"
              {
#line 270 "jumpopt.m"
                mercury__counter____Compare____counter_0_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__V_17_17, ll_backend__jumpopt__V_11_11);
#line 270 "jumpopt.m"
                return;
              }
#line 270 "jumpopt.m"
          }
#line 270 "jumpopt.m"
      }
#line 270 "jumpopt.m"
  }
#line 270 "jumpopt.m"
}

#line 270 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 270 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
#line 270 "jumpopt.m"
{
#line 270 "jumpopt.m"
  {
#line 270 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 270 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_9 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 270 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_10 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 270 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_9 == ll_backend__jumpopt__CastY_10);
#line 270 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 270 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 270 "jumpopt.m"
    else
#line 270 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "jumpopt.m"
      {
#line 270 "jumpopt.m"
        MR_Integer ll_backend__jumpopt__CastX_3 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 270 "jumpopt.m"
        MR_Integer ll_backend__jumpopt__CastY_4 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 270 "jumpopt.m"
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastY_4 == ll_backend__jumpopt__CastX_3);
#line 270 "jumpopt.m"
      }
#line 270 "jumpopt.m"
    else
#line 270 "jumpopt.m"
      {
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_7_7;
#line 270 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_8_8;

#line 270 "jumpopt.m"
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 270 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 270 "jumpopt.m"
          {
#line 270 "jumpopt.m"
            ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "jumpopt.m"
            ll_backend__jumpopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 3004 "ll_backend.jumpopt.c"
            {
#line 3006 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__jumpopt__V_5_5, ll_backend__jumpopt__V_7_7);
            }
#line 270 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 3011 "ll_backend.jumpopt.c"
              {
#line 3013 "ll_backend.jumpopt.c"
                return ll_backend__jumpopt__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__jumpopt__V_6_6, ll_backend__jumpopt__V_8_8);
              }
#line 270 "jumpopt.m"
          }
#line 270 "jumpopt.m"
      }
#line 270 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 270 "jumpopt.m"
  }
#line 270 "jumpopt.m"
}

#line 246 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
#line 246 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
#line 246 "jumpopt.m"
{
#line 246 "jumpopt.m"
  {
#line 246 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 246 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_33 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
#line 246 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_34 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

#line 246 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_33 == ll_backend__jumpopt__CastY_34);
#line 246 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 3051 "ll_backend.jumpopt.c"
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "jumpopt.m"
    else
#line 246 "jumpopt.m"
      {
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 2)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 3)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 4)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 5)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 6)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 7)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 8)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 9)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_24_24;

#line 246 "jumpopt.m"
        {
#line 246 "jumpopt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], &ll_backend__jumpopt__V_24_24, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_14_14)));
        }
#line 3105 "ll_backend.jumpopt.c"
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_24_24 == (MR_Integer) 0);
#line 246 "jumpopt.m"
        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_24_24;
#line 246 "jumpopt.m"
        else
#line 246 "jumpopt.m"
          {
#line 246 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_25_25;

#line 246 "jumpopt.m"
            {
#line 246 "jumpopt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_25_25, ((MR_Box) (ll_backend__jumpopt__V_5_5)), ((MR_Box) (ll_backend__jumpopt__V_15_15)));
            }
#line 3125 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_25_25 == (MR_Integer) 0);
#line 246 "jumpopt.m"
            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_25_25;
#line 246 "jumpopt.m"
            else
#line 246 "jumpopt.m"
              {
#line 246 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_26_26;

#line 246 "jumpopt.m"
                {
#line 246 "jumpopt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[2], &ll_backend__jumpopt__V_26_26, ((MR_Box) (ll_backend__jumpopt__V_6_6)), ((MR_Box) (ll_backend__jumpopt__V_16_16)));
                }
#line 3145 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_26_26 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                  *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_26_26;
#line 246 "jumpopt.m"
                else
#line 246 "jumpopt.m"
                  {
#line 246 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_27_27;

#line 246 "jumpopt.m"
                    {
#line 246 "jumpopt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_27_27, ((MR_Box) (ll_backend__jumpopt__V_7_7)), ((MR_Box) (ll_backend__jumpopt__V_17_17)));
                    }
#line 3165 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_27_27 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                      *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_27_27;
#line 246 "jumpopt.m"
                    else
#line 246 "jumpopt.m"
                      {
#line 246 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_28_28;

#line 246 "jumpopt.m"
                        {
#line 246 "jumpopt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_28_28, ((MR_Box) (ll_backend__jumpopt__V_8_8)), ((MR_Box) (ll_backend__jumpopt__V_18_18)));
                        }
#line 3185 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_28_28 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_28_28;
#line 246 "jumpopt.m"
                        else
#line 246 "jumpopt.m"
                          {
#line 246 "jumpopt.m"
                            MR_Word ll_backend__jumpopt__V_29_29;

#line 246 "jumpopt.m"
                            {
#line 246 "jumpopt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_29_29, ((MR_Box) (ll_backend__jumpopt__V_9_9)), ((MR_Box) (ll_backend__jumpopt__V_19_19)));
                            }
#line 3205 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_29_29 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_29_29;
#line 246 "jumpopt.m"
                            else
#line 246 "jumpopt.m"
                              {
#line 246 "jumpopt.m"
                                MR_Word ll_backend__jumpopt__V_30_30;

#line 246 "jumpopt.m"
                                {
#line 246 "jumpopt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__V_30_30, ((MR_Box) (ll_backend__jumpopt__V_10_10)), ((MR_Box) (ll_backend__jumpopt__V_20_20)));
                                }
#line 3225 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_30_30 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                                  *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_30_30;
#line 246 "jumpopt.m"
                                else
#line 246 "jumpopt.m"
                                  {
#line 246 "jumpopt.m"
                                    MR_Word ll_backend__jumpopt__V_31_31;

#line 246 "jumpopt.m"
                                    {
#line 246 "jumpopt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[2], &ll_backend__jumpopt__V_31_31, ((MR_Box) (ll_backend__jumpopt__V_11_11)), ((MR_Box) (ll_backend__jumpopt__V_21_21)));
                                    }
#line 3245 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_31_31 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                                      *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_31_31;
#line 246 "jumpopt.m"
                                    else
#line 246 "jumpopt.m"
                                      {
#line 246 "jumpopt.m"
                                        MR_Word ll_backend__jumpopt__V_32_32;
#line 246 "jumpopt.m"
                                        MR_Integer ll_backend__jumpopt__V_45_45 = (MR_Integer) ll_backend__jumpopt__V_12_12;
#line 246 "jumpopt.m"
                                        MR_Integer ll_backend__jumpopt__V_46_46 = (MR_Integer) ll_backend__jumpopt__V_22_22;

#line 246 "jumpopt.m"
                                        {
#line 246 "jumpopt.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__jumpopt__V_32_32, ll_backend__jumpopt__V_45_45, ll_backend__jumpopt__V_46_46);
                                        }
#line 3269 "ll_backend.jumpopt.c"
                                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_32_32 == (MR_Integer) 0);
#line 246 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 246 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                                          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__V_32_32;
#line 246 "jumpopt.m"
                                        else
#line 246 "jumpopt.m"
                                          {
#line 246 "jumpopt.m"
                                            MR_Integer ll_backend__jumpopt__V_47_47 = (MR_Integer) ll_backend__jumpopt__V_13_13;
#line 246 "jumpopt.m"
                                            MR_Integer ll_backend__jumpopt__V_48_48 = (MR_Integer) ll_backend__jumpopt__V_23_23;

#line 246 "jumpopt.m"
                                            {
#line 246 "jumpopt.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__V_47_47, ll_backend__jumpopt__V_48_48);
#line 246 "jumpopt.m"
                                              return;
                                            }
#line 246 "jumpopt.m"
                                          }
#line 246 "jumpopt.m"
                                      }
#line 246 "jumpopt.m"
                                  }
#line 246 "jumpopt.m"
                              }
#line 246 "jumpopt.m"
                          }
#line 246 "jumpopt.m"
                      }
#line 246 "jumpopt.m"
                  }
#line 246 "jumpopt.m"
              }
#line 246 "jumpopt.m"
          }
#line 246 "jumpopt.m"
      }
#line 246 "jumpopt.m"
  }
#line 246 "jumpopt.m"
}

#line 246 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 246 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
#line 246 "jumpopt.m"
{
#line 246 "jumpopt.m"
  {
#line 246 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 246 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastX_23 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
#line 246 "jumpopt.m"
    MR_Integer ll_backend__jumpopt__CastY_24 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

#line 246 "jumpopt.m"
    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_23 == ll_backend__jumpopt__CastY_24);
#line 246 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 246 "jumpopt.m"
    else
#line 246 "jumpopt.m"
      {
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_26_26;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_27_27;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_28_28;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_29_29;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_30_30;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_31_31;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeInfo_32_32;
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 2)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 3)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 4)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 5)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 6)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 7)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 8)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 9)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
#line 246 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));

#line 3401 "ll_backend.jumpopt.c"
        {
#line 3403 "ll_backend.jumpopt.c"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], ((MR_Box) (ll_backend__jumpopt__V_3_3)), ((MR_Box) (ll_backend__jumpopt__V_13_13)));
        }
#line 246 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
          {
#line 3410 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeInfo_26_26 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3412 "ll_backend.jumpopt.c"
            {
#line 3414 "ll_backend.jumpopt.c"
              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_26_26, ((MR_Box) (ll_backend__jumpopt__V_4_4)), ((MR_Box) (ll_backend__jumpopt__V_14_14)));
            }
#line 246 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
              {
#line 3421 "ll_backend.jumpopt.c"
                ll_backend__jumpopt__TypeInfo_27_27 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[2];
#line 3423 "ll_backend.jumpopt.c"
                {
#line 3425 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_27_27, ((MR_Box) (ll_backend__jumpopt__V_5_5)), ((MR_Box) (ll_backend__jumpopt__V_15_15)));
                }
#line 246 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                  {
#line 3432 "ll_backend.jumpopt.c"
                    ll_backend__jumpopt__TypeInfo_28_28 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3434 "ll_backend.jumpopt.c"
                    {
#line 3436 "ll_backend.jumpopt.c"
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_28_28, ((MR_Box) (ll_backend__jumpopt__V_6_6)), ((MR_Box) (ll_backend__jumpopt__V_16_16)));
                    }
#line 246 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                      {
#line 3443 "ll_backend.jumpopt.c"
                        ll_backend__jumpopt__TypeInfo_29_29 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3445 "ll_backend.jumpopt.c"
                        {
#line 3447 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_29_29, ((MR_Box) (ll_backend__jumpopt__V_7_7)), ((MR_Box) (ll_backend__jumpopt__V_17_17)));
                        }
#line 246 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                          {
#line 3454 "ll_backend.jumpopt.c"
                            ll_backend__jumpopt__TypeInfo_30_30 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3456 "ll_backend.jumpopt.c"
                            {
#line 3458 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_30_30, ((MR_Box) (ll_backend__jumpopt__V_8_8)), ((MR_Box) (ll_backend__jumpopt__V_18_18)));
                            }
#line 246 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                              {
#line 3465 "ll_backend.jumpopt.c"
                                ll_backend__jumpopt__TypeInfo_31_31 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
#line 3467 "ll_backend.jumpopt.c"
                                {
#line 3469 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_31_31, ((MR_Box) (ll_backend__jumpopt__V_9_9)), ((MR_Box) (ll_backend__jumpopt__V_19_19)));
                                }
#line 246 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                                  {
#line 3476 "ll_backend.jumpopt.c"
                                    ll_backend__jumpopt__TypeInfo_32_32 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[2];
#line 3478 "ll_backend.jumpopt.c"
                                    {
#line 3480 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_32_32, ((MR_Box) (ll_backend__jumpopt__V_10_10)), ((MR_Box) (ll_backend__jumpopt__V_20_20)));
                                    }
#line 246 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 246 "jumpopt.m"
                                      {
#line 3487 "ll_backend.jumpopt.c"
                                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_11_11 == ll_backend__jumpopt__V_21_21);
#line 246 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 3491 "ll_backend.jumpopt.c"
                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_12_12 == ll_backend__jumpopt__V_22_22);
#line 246 "jumpopt.m"
                                      }
#line 246 "jumpopt.m"
                                  }
#line 246 "jumpopt.m"
                              }
#line 246 "jumpopt.m"
                          }
#line 246 "jumpopt.m"
                      }
#line 246 "jumpopt.m"
                  }
#line 246 "jumpopt.m"
              }
#line 246 "jumpopt.m"
          }
#line 246 "jumpopt.m"
      }
#line 246 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 246 "jumpopt.m"
  }
#line 246 "jumpopt.m"
}

#line 1252 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
#line 1252 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
#line 1252 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
#line 1252 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24)
#line 1252 "jumpopt.m"
{
#line 1258 "jumpopt.m"
  {
#line 1258 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1258 "jumpopt.m"
#line 1258 "jumpopt.m"
    switch (MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) {
#line 1258 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1258 "jumpopt.m"
      case (MR_Integer) 0:
#line 1272 "jumpopt.m"
        {
#line 1272 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1272 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1272 "jumpopt.m"
        }
#line 1258 "jumpopt.m"
        break;
#line 1258 "jumpopt.m"
      case (MR_Integer) 1:
#line 1267 "jumpopt.m"
        {
#line 1267 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1267 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1267 "jumpopt.m"
        }
#line 1258 "jumpopt.m"
        break;
#line 1258 "jumpopt.m"
      case (MR_Integer) 2:
#line 1268 "jumpopt.m"
        {
#line 1268 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1268 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1268 "jumpopt.m"
        }
#line 1258 "jumpopt.m"
        break;
#line 1258 "jumpopt.m"
      case (MR_Integer) 3:
#line 1258 "jumpopt.m"
#line 1258 "jumpopt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) {
#line 1258 "jumpopt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1258 "jumpopt.m"
          case (MR_Integer) 0:
#line 1269 "jumpopt.m"
            {
#line 1269 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1269 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1269 "jumpopt.m"
            }
#line 1258 "jumpopt.m"
            break;
#line 1258 "jumpopt.m"
          case (MR_Integer) 1:
#line 1270 "jumpopt.m"
            {
#line 1270 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1270 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1270 "jumpopt.m"
            }
#line 1258 "jumpopt.m"
            break;
#line 1258 "jumpopt.m"
          case (MR_Integer) 2:
#line 1258 "jumpopt.m"
            {
#line 1258 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Label0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 1)));
#line 1258 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Label_10;
#line 1062 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Instr0_31;
#line 1060 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0_Instr0_31;

#line 1060 "jumpopt.m"
              {
#line 1060 "jumpopt.m"
                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_6, ((MR_Box) (ll_backend__jumpopt__Label0_9)), &ll_backend__jumpopt__conv0_Instr0_31);
              }
#line 1060 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 1060 "jumpopt.m"
                {
#line 1060 "jumpopt.m"
                  ll_backend__jumpopt__Instr0_31 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_31);
#line 1060 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1060 "jumpopt.m"
                }
#line 1062 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 1072 "jumpopt.m"
                {
#line 1073 "jumpopt.m"
                  MR_Word ll_backend__jumpopt___Instr_32;

#line 1073 "jumpopt.m"
                  {
#line 1073 "jumpopt.m"
                    ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_9, &ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Instr0_31, &ll_backend__jumpopt___Instr_32);
                  }
#line 1072 "jumpopt.m"
                }
#line 1062 "jumpopt.m"
              else
#line 1063 "jumpopt.m"
                ll_backend__jumpopt__Label_10 = ll_backend__jumpopt__Label0_9;
#line 1260 "jumpopt.m"
              {
#line 1260 "jumpopt.m"
                MR_Word base;
#line 1260 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "jumpopt.m"
                *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = base;
#line 1260 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1260 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Label_10));
#line 1260 "jumpopt.m"
              }
#line 1261 "jumpopt.m"
              {
#line 1261 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Label0_9);
              }
#line 1263 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 1263 "jumpopt.m"
                *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1263 "jumpopt.m"
              else
#line 1264 "jumpopt.m"
                *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = (MR_Integer) 1;
#line 1258 "jumpopt.m"
            }
#line 1258 "jumpopt.m"
            break;
#line 1258 "jumpopt.m"
          case (MR_Integer) 3:
#line 1271 "jumpopt.m"
            {
#line 1271 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
#line 1271 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
#line 1271 "jumpopt.m"
            }
#line 1258 "jumpopt.m"
            break;
#line 1258 "jumpopt.m"
        }
#line 1258 "jumpopt.m"
        break;
#line 1258 "jumpopt.m"
    }
#line 1258 "jumpopt.m"
  }
#line 1252 "jumpopt.m"
}

#line 1199 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(
#line 1199 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1199 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval0_5,
#line 1199 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Lval_6)
#line 1199 "jumpopt.m"
{
#line 1216 "jumpopt.m"
  {
#line 1216 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1216 "jumpopt.m"
#line 1216 "jumpopt.m"
    switch (MR_tag((MR_Word) ll_backend__jumpopt__Lval0_5)) {
#line 1216 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1216 "jumpopt.m"
      case (MR_Integer) 0:
#line 1217 "jumpopt.m"
        *ll_backend__jumpopt__Lval_6 = ll_backend__jumpopt__Lval0_5;
#line 1216 "jumpopt.m"
        break;
#line 1216 "jumpopt.m"
      case (MR_Integer) 1:
#line 1216 "jumpopt.m"
      case (MR_Integer) 2:
#line 1217 "jumpopt.m"
        *ll_backend__jumpopt__Lval_6 = ll_backend__jumpopt__Lval0_5;
#line 1216 "jumpopt.m"
        break;
#line 1216 "jumpopt.m"
      case (MR_Integer) 3:
#line 1216 "jumpopt.m"
#line 1216 "jumpopt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 0)))) {
#line 1216 "jumpopt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1216 "jumpopt.m"
          case (MR_Integer) 0:
#line 1216 "jumpopt.m"
          case (MR_Integer) 1:
#line 1216 "jumpopt.m"
          case (MR_Integer) 2:
#line 1216 "jumpopt.m"
          case (MR_Integer) 3:
#line 1216 "jumpopt.m"
          case (MR_Integer) 11:
#line 1217 "jumpopt.m"
            *ll_backend__jumpopt__Lval_6 = ll_backend__jumpopt__Lval0_5;
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 4:
#line 1219 "jumpopt.m"
            {
#line 1219 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1219 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_12;

#line 1220 "jumpopt.m"
              {
#line 1220 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_11, &ll_backend__jumpopt__Rval_12);
              }
#line 1221 "jumpopt.m"
              {
#line 1221 "jumpopt.m"
                MR_Word base;
#line 1221 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1221 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1221 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_12));
#line 1221 "jumpopt.m"
              }
#line 1219 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 5:
#line 1231 "jumpopt.m"
            {
#line 1231 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1231 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_31;

#line 1232 "jumpopt.m"
              {
#line 1232 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_30, &ll_backend__jumpopt__Rval_31);
              }
#line 1233 "jumpopt.m"
              {
#line 1233 "jumpopt.m"
                MR_Word base;
#line 1233 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1233 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1233 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_31));
#line 1233 "jumpopt.m"
              }
#line 1231 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 6:
#line 1223 "jumpopt.m"
            {
#line 1223 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1223 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_27;

#line 1224 "jumpopt.m"
              {
#line 1224 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_26, &ll_backend__jumpopt__Rval_27);
              }
#line 1225 "jumpopt.m"
              {
#line 1225 "jumpopt.m"
                MR_Word base;
#line 1225 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1225 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1225 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_27));
#line 1225 "jumpopt.m"
              }
#line 1223 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 7:
#line 1227 "jumpopt.m"
            {
#line 1227 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1227 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_29;

#line 1228 "jumpopt.m"
              {
#line 1228 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_28, &ll_backend__jumpopt__Rval_29);
              }
#line 1229 "jumpopt.m"
              {
#line 1229 "jumpopt.m"
                MR_Word base;
#line 1229 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1229 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1229 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_29));
#line 1229 "jumpopt.m"
              }
#line 1227 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 8:
#line 1235 "jumpopt.m"
            {
#line 1235 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1235 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_33;

#line 1236 "jumpopt.m"
              {
#line 1236 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_32, &ll_backend__jumpopt__Rval_33);
              }
#line 1237 "jumpopt.m"
              {
#line 1237 "jumpopt.m"
                MR_Word base;
#line 1237 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1237 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1237 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_33));
#line 1237 "jumpopt.m"
              }
#line 1235 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 9:
#line 1239 "jumpopt.m"
            {
#line 1239 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Tag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1239 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Field0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 3)));
#line 1239 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Field_15;
#line 1239 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 2)));
#line 1239 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_35;

#line 1240 "jumpopt.m"
              {
#line 1240 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_34, &ll_backend__jumpopt__Rval_35);
              }
#line 1241 "jumpopt.m"
              {
#line 1241 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Field0_14, &ll_backend__jumpopt__Field_15);
              }
#line 1242 "jumpopt.m"
              {
#line 1242 "jumpopt.m"
                MR_Word base;
#line 1242 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1242 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1242 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Tag_13));
#line 1242 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_35));
#line 1242 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__Field_15));
#line 1242 "jumpopt.m"
              }
#line 1239 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 10:
#line 1244 "jumpopt.m"
            {
#line 1244 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_5, (MR_Integer) 1)));
#line 1244 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Rval_37;

#line 1245 "jumpopt.m"
              {
#line 1245 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_36, &ll_backend__jumpopt__Rval_37);
              }
#line 1246 "jumpopt.m"
              {
#line 1246 "jumpopt.m"
                MR_Word base;
#line 1246 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "jumpopt.m"
                *ll_backend__jumpopt__Lval_6 = base;
#line 1246 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1246 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_37));
#line 1246 "jumpopt.m"
              }
#line 1244 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
          case (MR_Integer) 12:
#line 1248 "jumpopt.m"
            {
#line 1249 "jumpopt.m"
              {
#line 1249 "jumpopt.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_lval\'/3", (MR_String) "lvar");
#line 1249 "jumpopt.m"
                return;
              }
#line 1248 "jumpopt.m"
            }
#line 1216 "jumpopt.m"
            break;
#line 1216 "jumpopt.m"
        }
#line 1216 "jumpopt.m"
        break;
#line 1216 "jumpopt.m"
    }
#line 1216 "jumpopt.m"
  }
#line 1199 "jumpopt.m"
}

#line 1117 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
#line 1117 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1117 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Rval0_5,
#line 1117 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Rval_6)
#line 1117 "jumpopt.m"
{
#line 1121 "jumpopt.m"
  {
#line 1121 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1121 "jumpopt.m"
#line 1121 "jumpopt.m"
    switch (MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) {
#line 1121 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "jumpopt.m"
      case (MR_Integer) 0:
#line 1121 "jumpopt.m"
        {
#line 1121 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
#line 1121 "jumpopt.m"
          MR_Word ll_backend__jumpopt__Lval_8;

#line 1122 "jumpopt.m"
          {
#line 1122 "jumpopt.m"
            ll_backend__jumpopt__short_circuit_labels_lval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Lval0_7, &ll_backend__jumpopt__Lval_8);
          }
#line 1123 "jumpopt.m"
          {
#line 1123 "jumpopt.m"
            MR_Word base;
#line 1123 "jumpopt.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "jumpopt.m"
            *ll_backend__jumpopt__Rval_6 = base;
#line 1123 "jumpopt.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__jumpopt__Lval_8));
#line 1123 "jumpopt.m"
          }
#line 1121 "jumpopt.m"
        }
#line 1121 "jumpopt.m"
        break;
#line 1121 "jumpopt.m"
      case (MR_Integer) 1:
#line 1125 "jumpopt.m"
        {
#line 1126 "jumpopt.m"
          {
#line 1126 "jumpopt.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_rval\'/3", (MR_String) "var");
#line 1126 "jumpopt.m"
            return;
          }
#line 1125 "jumpopt.m"
        }
#line 1121 "jumpopt.m"
        break;
#line 1121 "jumpopt.m"
      case (MR_Integer) 2:
#line 1128 "jumpopt.m"
        {
#line 1128 "jumpopt.m"
          MR_Integer ll_backend__jumpopt__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
#line 1128 "jumpopt.m"
          MR_Word ll_backend__jumpopt__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1128 "jumpopt.m"
          MR_Word ll_backend__jumpopt__SubRval_12;

#line 1129 "jumpopt.m"
          {
#line 1129 "jumpopt.m"
            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_11, &ll_backend__jumpopt__SubRval_12);
          }
#line 1130 "jumpopt.m"
          {
#line 1130 "jumpopt.m"
            MR_Word base;
#line 1130 "jumpopt.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "jumpopt.m"
            *ll_backend__jumpopt__Rval_6 = base;
#line 1130 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__jumpopt__Tag_10));
#line 1130 "jumpopt.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__jumpopt__SubRval_12));
#line 1130 "jumpopt.m"
          }
#line 1128 "jumpopt.m"
        }
#line 1121 "jumpopt.m"
        break;
#line 1121 "jumpopt.m"
      case (MR_Integer) 3:
#line 1121 "jumpopt.m"
#line 1121 "jumpopt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)))) {
#line 1121 "jumpopt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "jumpopt.m"
          case (MR_Integer) 0:
#line 1121 "jumpopt.m"
          case (MR_Integer) 4:
#line 1148 "jumpopt.m"
            *ll_backend__jumpopt__Rval_6 = ll_backend__jumpopt__Rval0_5;
#line 1121 "jumpopt.m"
            break;
#line 1121 "jumpopt.m"
          case (MR_Integer) 1:
#line 1132 "jumpopt.m"
            {
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Const0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1132 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Const_14;

#line 1164 "jumpopt.m"
#line 1164 "jumpopt.m"
              switch (MR_tag((MR_Word) ll_backend__jumpopt__Const0_13)) {
#line 1164 "jumpopt.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1164 "jumpopt.m"
                case (MR_Integer) 0:
#line 1165 "jumpopt.m"
                  ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
#line 1164 "jumpopt.m"
                  break;
#line 1164 "jumpopt.m"
                case (MR_Integer) 1:
#line 1164 "jumpopt.m"
                case (MR_Integer) 2:
#line 1165 "jumpopt.m"
                  ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
#line 1164 "jumpopt.m"
                  break;
#line 1164 "jumpopt.m"
                case (MR_Integer) 3:
#line 1164 "jumpopt.m"
#line 1164 "jumpopt.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 0)))) {
#line 1164 "jumpopt.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1164 "jumpopt.m"
                    case (MR_Integer) 0:
#line 1164 "jumpopt.m"
                    case (MR_Integer) 1:
#line 1164 "jumpopt.m"
                    case (MR_Integer) 2:
#line 1164 "jumpopt.m"
                    case (MR_Integer) 4:
#line 1165 "jumpopt.m"
                      ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
#line 1164 "jumpopt.m"
                      break;
#line 1164 "jumpopt.m"
                    case (MR_Integer) 3:
#line 1167 "jumpopt.m"
                      {
#line 1167 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__CodeAddr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 1)));
#line 1167 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__CodeAddr_41;
#line 1171 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__Label0_39;

#line 1168 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CodeAddr0_38)) == (MR_mktag((MR_Integer) 1)));
#line 1168 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1168 "jumpopt.m"
                          {
#line 1168 "jumpopt.m"
                            ll_backend__jumpopt__Label0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr0_38, (MR_Integer) 0)));
#line 1169 "jumpopt.m"
                            {
#line 1169 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__Label_40;
#line 1062 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__Instr0_46;
#line 1060 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv0_Instr0_46;

#line 1060 "jumpopt.m"
                              {
#line 1060 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_39)), &ll_backend__jumpopt__conv0_Instr0_46);
                              }
#line 1060 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 1060 "jumpopt.m"
                                {
#line 1060 "jumpopt.m"
                                  ll_backend__jumpopt__Instr0_46 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_46);
#line 1060 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1060 "jumpopt.m"
                                }
#line 1062 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 1072 "jumpopt.m"
                                {
#line 1073 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt___Instr_47;

#line 1073 "jumpopt.m"
                                  {
#line 1073 "jumpopt.m"
                                    ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_39, &ll_backend__jumpopt__Label_40, ll_backend__jumpopt__Instr0_46, &ll_backend__jumpopt___Instr_47);
                                  }
#line 1072 "jumpopt.m"
                                }
#line 1062 "jumpopt.m"
                              else
#line 1063 "jumpopt.m"
                                ll_backend__jumpopt__Label_40 = ll_backend__jumpopt__Label0_39;
#line 1170 "jumpopt.m"
                              {
#line 1170 "jumpopt.m"
                                ll_backend__jumpopt__CodeAddr_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr_41, 0) = ((MR_Box) (ll_backend__jumpopt__Label_40));
#line 1170 "jumpopt.m"
                              }
#line 1169 "jumpopt.m"
                            }
#line 1168 "jumpopt.m"
                          }
#line 1168 "jumpopt.m"
                        else
#line 1172 "jumpopt.m"
                          ll_backend__jumpopt__CodeAddr_41 = ll_backend__jumpopt__CodeAddr0_38;
#line 1174 "jumpopt.m"
                        {
#line 1174 "jumpopt.m"
                          ll_backend__jumpopt__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "jumpopt.m"
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1174 "jumpopt.m"
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 1) = ((MR_Box) (ll_backend__jumpopt__CodeAddr_41));
#line 1174 "jumpopt.m"
                        }
#line 1167 "jumpopt.m"
                      }
#line 1164 "jumpopt.m"
                      break;
#line 1164 "jumpopt.m"
                  }
#line 1164 "jumpopt.m"
                  break;
#line 1164 "jumpopt.m"
              }
#line 1134 "jumpopt.m"
              {
#line 1134 "jumpopt.m"
                MR_Word base;
#line 1134 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "jumpopt.m"
                *ll_backend__jumpopt__Rval_6 = base;
#line 1134 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1134 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Const_14));
#line 1134 "jumpopt.m"
              }
#line 1132 "jumpopt.m"
            }
#line 1121 "jumpopt.m"
            break;
#line 1121 "jumpopt.m"
          case (MR_Integer) 2:
#line 1136 "jumpopt.m"
            {
#line 1136 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
#line 1136 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SubRval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
#line 1136 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SubRval_26;

#line 1137 "jumpopt.m"
              {
#line 1137 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_25, &ll_backend__jumpopt__SubRval_26);
              }
#line 1138 "jumpopt.m"
              {
#line 1138 "jumpopt.m"
                MR_Word base;
#line 1138 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "jumpopt.m"
                *ll_backend__jumpopt__Rval_6 = base;
#line 1138 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1138 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_15));
#line 1138 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__SubRval_26));
#line 1138 "jumpopt.m"
              }
#line 1136 "jumpopt.m"
            }
#line 1121 "jumpopt.m"
            break;
#line 1121 "jumpopt.m"
          case (MR_Integer) 3:
#line 1140 "jumpopt.m"
            {
#line 1140 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
#line 1140 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 3)));
#line 1140 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LRval_18;
#line 1140 "jumpopt.m"
              MR_Word ll_backend__jumpopt__RRval_19;
#line 1140 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Op_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));

#line 1141 "jumpopt.m"
              {
#line 1141 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__LRval0_16, &ll_backend__jumpopt__LRval_18);
              }
#line 1142 "jumpopt.m"
              {
#line 1142 "jumpopt.m"
                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__RRval0_17, &ll_backend__jumpopt__RRval_19);
              }
#line 1143 "jumpopt.m"
              {
#line 1143 "jumpopt.m"
                MR_Word base;
#line 1143 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "jumpopt.m"
                *ll_backend__jumpopt__Rval_6 = base;
#line 1143 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1143 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_27));
#line 1143 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__LRval_18));
#line 1143 "jumpopt.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__RRval_19));
#line 1143 "jumpopt.m"
              }
#line 1140 "jumpopt.m"
            }
#line 1121 "jumpopt.m"
            break;
#line 1121 "jumpopt.m"
        }
#line 1121 "jumpopt.m"
        break;
#line 1121 "jumpopt.m"
    }
#line 1121 "jumpopt.m"
  }
#line 1117 "jumpopt.m"
}

#line 1099 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
#line 1099 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 1099 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 1099 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
#line 1099 "jumpopt.m"
{
#line 1102 "jumpopt.m"
  {
#line 1102 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1102 "jumpopt.m"
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "jumpopt.m"
      *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1102 "jumpopt.m"
    else
#line 1104 "jumpopt.m"
      {
#line 1104 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
#line 1104 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
#line 1104 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabel_8;
#line 1104 "jumpopt.m"
        MR_Word ll_backend__jumpopt__MaybeLabels_9;

#line 1109 "jumpopt.m"
        if ((ll_backend__jumpopt__MaybeLabel0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "jumpopt.m"
          ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1109 "jumpopt.m"
        else
#line 1106 "jumpopt.m"
          {
#line 1106 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel0_6, (MR_Integer) 0)));
#line 1106 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_11;
#line 1062 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_15;
#line 1060 "jumpopt.m"
            MR_Box ll_backend__jumpopt__conv0_Instr0_15;

#line 1060 "jumpopt.m"
            {
#line 1060 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__Label0_10)), &ll_backend__jumpopt__conv0_Instr0_15);
            }
#line 1060 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1060 "jumpopt.m"
              {
#line 1060 "jumpopt.m"
                ll_backend__jumpopt__Instr0_15 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_15);
#line 1060 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1060 "jumpopt.m"
              }
#line 1062 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1072 "jumpopt.m"
              {
#line 1073 "jumpopt.m"
                MR_Word ll_backend__jumpopt___Instr_16;

#line 1073 "jumpopt.m"
                {
#line 1073 "jumpopt.m"
                  ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_10, &ll_backend__jumpopt__Label_11, ll_backend__jumpopt__Instr0_15, &ll_backend__jumpopt___Instr_16);
                }
#line 1072 "jumpopt.m"
              }
#line 1062 "jumpopt.m"
            else
#line 1063 "jumpopt.m"
              ll_backend__jumpopt__Label_11 = ll_backend__jumpopt__Label0_10;
#line 1108 "jumpopt.m"
            {
#line 1108 "jumpopt.m"
              ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel_8, 0) = ((MR_Box) (ll_backend__jumpopt__Label_11));
#line 1108 "jumpopt.m"
            }
#line 1106 "jumpopt.m"
          }
#line 1113 "jumpopt.m"
        {
#line 1113 "jumpopt.m"
          ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__MaybeLabels0_7, &ll_backend__jumpopt__MaybeLabels_9);
        }
#line 1104 "jumpopt.m"
        {
#line 1104 "jumpopt.m"
          MR_Word base;
#line 1104 "jumpopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "jumpopt.m"
          *ll_backend__jumpopt__HeadVar__3_3 = base;
#line 1104 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__MaybeLabel_8));
#line 1104 "jumpopt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__MaybeLabels_9));
#line 1104 "jumpopt.m"
        }
#line 1104 "jumpopt.m"
      }
#line 1102 "jumpopt.m"
  }
#line 1099 "jumpopt.m"
}

#line 1075 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_7,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_9,
#line 1075 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_10,
#line 1075 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_11,
#line 1075 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_12)
#line 1075 "jumpopt.m"
{
#line 1092 "jumpopt.m"
  while (MR_TRUE)
#line 1092 "jumpopt.m"
    {
#line 1092 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 1092 "jumpopt.m"
      {
#line 1092 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 1092 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetLabel_15;
#line 1092 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TargetInstr_16;
#line 1081 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_19_19;
#line 1081 "jumpopt.m"
        MR_Word ll_backend__jumpopt__TypeCtorInfo_20_20;
#line 1081 "jumpopt.m"
        MR_Word ll_backend__jumpopt__SrcUinstr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 0)));
#line 1081 "jumpopt.m"
        MR_String ll_backend__jumpopt___Comment_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 1)));
#line 1087 "jumpopt.m"
        MR_Box ll_backend__jumpopt__conv0_TargetInstr_16;

#line 1084 "jumpopt.m"
        if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1083 "jumpopt.m"
          {
#line 1083 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));

#line 1083 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1083 "jumpopt.m"
              ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)));
#line 1083 "jumpopt.m"
          }
#line 1084 "jumpopt.m"
        else
#line 1084 "jumpopt.m"
        if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1085 "jumpopt.m"
          {
#line 1085 "jumpopt.m"
            ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));
#line 1085 "jumpopt.m"
            ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1085 "jumpopt.m"
          }
#line 1084 "jumpopt.m"
        else
#line 1084 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1081 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1081 "jumpopt.m"
          {
#line 4598 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 4600 "ll_backend.jumpopt.c"
            ll_backend__jumpopt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1087 "jumpopt.m"
            {
#line 1087 "jumpopt.m"
              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ll_backend__jumpopt__TypeCtorInfo_20_20, ll_backend__jumpopt__InstrMap_7, ((MR_Box) (ll_backend__jumpopt__TargetLabel_15)), &ll_backend__jumpopt__conv0_TargetInstr_16);
            }
#line 1087 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1087 "jumpopt.m"
              {
#line 1087 "jumpopt.m"
                ll_backend__jumpopt__TargetInstr_16 = ((MR_Word) ll_backend__jumpopt__conv0_TargetInstr_16);
#line 1087 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1087 "jumpopt.m"
              }
#line 1081 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1081 "jumpopt.m"
              {
#line 1088 "jumpopt.m"
                {
#line 1088 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = mercury__list__member_2_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__jumpopt__SrcLabel_9)), ll_backend__jumpopt__LabelsSofar_8);
                }
#line 1088 "jumpopt.m"
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 1081 "jumpopt.m"
              }
#line 1081 "jumpopt.m"
          }
#line 1092 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1090 "jumpopt.m"
          {
#line 1090 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;

#line 1090 "jumpopt.m"
            {
#line 1090 "jumpopt.m"
              ll_backend__jumpopt__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 0) = ((MR_Box) (ll_backend__jumpopt__SrcLabel_9));
#line 1090 "jumpopt.m"
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_18_18, 1) = ((MR_Box) (ll_backend__jumpopt__LabelsSofar_8));
#line 1090 "jumpopt.m"
            }
#line 1090 "jumpopt.m"
            /* direct tailcall eliminated */
#line 1090 "jumpopt.m"
            {
#line 1090 "jumpopt.m"
              MR_Word ll_backend__jumpopt__LabelsSofar__tmp_copy_8 = ll_backend__jumpopt__V_18_18;
#line 1090 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcLabel__tmp_copy_9 = ll_backend__jumpopt__TargetLabel_15;
#line 1090 "jumpopt.m"
              MR_Word ll_backend__jumpopt__SrcInstr__tmp_copy_11 = ll_backend__jumpopt__TargetInstr_16;

#line 1090 "jumpopt.m"
              ll_backend__jumpopt__SrcInstr_11 = ll_backend__jumpopt__SrcInstr__tmp_copy_11;
#line 1090 "jumpopt.m"
              ll_backend__jumpopt__SrcLabel_9 = ll_backend__jumpopt__SrcLabel__tmp_copy_9;
#line 1090 "jumpopt.m"
              ll_backend__jumpopt__LabelsSofar_8 = ll_backend__jumpopt__LabelsSofar__tmp_copy_8;
#line 1090 "jumpopt.m"
            }
#line 1090 "jumpopt.m"
            continue;
#line 1090 "jumpopt.m"
          }
#line 1092 "jumpopt.m"
        else
#line 1093 "jumpopt.m"
          {
#line 1093 "jumpopt.m"
            *ll_backend__jumpopt__DestLabel_10 = ll_backend__jumpopt__SrcLabel_9;
#line 1094 "jumpopt.m"
            *ll_backend__jumpopt__DestInstr_12 = ll_backend__jumpopt__SrcInstr_11;
#line 1093 "jumpopt.m"
          }
#line 1092 "jumpopt.m"
      }
#line 1092 "jumpopt.m"
      break;
#line 1092 "jumpopt.m"
    }
#line 1075 "jumpopt.m"
}

#line 1069 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_6,
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcLabel_7,
#line 1069 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestLabel_8,
#line 1069 "jumpopt.m"
  MR_Word ll_backend__jumpopt__SrcInstr_9,
#line 1069 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__DestInstr_10)
#line 1069 "jumpopt.m"
{
#line 1072 "jumpopt.m"
  {
#line 1072 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1073 "jumpopt.m"
    {
#line 1073 "jumpopt.m"
      ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__SrcLabel_7, ll_backend__jumpopt__DestLabel_8, ll_backend__jumpopt__SrcInstr_9, ll_backend__jumpopt__DestInstr_10);
#line 1073 "jumpopt.m"
      return;
    }
#line 1072 "jumpopt.m"
  }
#line 1069 "jumpopt.m"
}

#line 1057 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
#line 1057 "jumpopt.m"
  MR_Word ll_backend__jumpopt__InstrMap_4,
#line 1057 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Label0_5,
#line 1057 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Label_6)
#line 1057 "jumpopt.m"
{
#line 1062 "jumpopt.m"
  {
#line 1062 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 1062 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instr0_7;
#line 1060 "jumpopt.m"
    MR_Box ll_backend__jumpopt__conv0_Instr0_7;

#line 1060 "jumpopt.m"
    {
#line 1060 "jumpopt.m"
      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_5)), &ll_backend__jumpopt__conv0_Instr0_7);
    }
#line 1060 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1060 "jumpopt.m"
      {
#line 1060 "jumpopt.m"
        ll_backend__jumpopt__Instr0_7 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_7);
#line 1060 "jumpopt.m"
        ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1060 "jumpopt.m"
      }
#line 1062 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1072 "jumpopt.m"
      {
#line 1073 "jumpopt.m"
        MR_Word ll_backend__jumpopt___Instr_8;

#line 1073 "jumpopt.m"
        {
#line 1073 "jumpopt.m"
          ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_5, ll_backend__jumpopt__Label_6, ll_backend__jumpopt__Instr0_7, &ll_backend__jumpopt___Instr_8);
        }
#line 1072 "jumpopt.m"
      }
#line 1062 "jumpopt.m"
    else
#line 1063 "jumpopt.m"
      *ll_backend__jumpopt__Label_6 = ll_backend__jumpopt__Label0_5;
#line 1062 "jumpopt.m"
  }
#line 1057 "jumpopt.m"
}

#line 1033 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
#line 1033 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_4,
#line 1033 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_5,
#line 1033 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Instrs_6)
#line 1033 "jumpopt.m"
{
#line 1048 "jumpopt.m"
  {
#line 1048 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_4)) == (MR_mktag((MR_Integer) 2)));
#line 1048 "jumpopt.m"
    MR_Word ll_backend__jumpopt__PrevLivevals_7;
#line 1048 "jumpopt.m"
    MR_Word ll_backend__jumpopt__BetweenLivevals_9;
#line 1048 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs2_11;
#line 1038 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Instrs1_8;
#line 1038 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_12_12;
#line 1038 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_13_13;
#line 1040 "jumpopt.m"
    MR_String ll_backend__jumpopt__V_10_10;

#line 1038 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1038 "jumpopt.m"
      {
#line 1038 "jumpopt.m"
        ll_backend__jumpopt__PrevLivevals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_4, (MR_Integer) 0)));
#line 1039 "jumpopt.m"
        {
#line 1039 "jumpopt.m"
          ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_5, &ll_backend__jumpopt__Instrs1_8);
        }
#line 1040 "jumpopt.m"
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1040 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1040 "jumpopt.m"
          {
#line 1040 "jumpopt.m"
            ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 0)));
#line 1040 "jumpopt.m"
            ll_backend__jumpopt__Instrs2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 1)));
#line 1040 "jumpopt.m"
            ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1040 "jumpopt.m"
            ll_backend__jumpopt__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_12_12, (MR_Integer) 1)));
#line 1040 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 1040 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1040 "jumpopt.m"
              ll_backend__jumpopt__BetweenLivevals_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_13_13, (MR_Integer) 0)));
#line 1040 "jumpopt.m"
          }
#line 1038 "jumpopt.m"
      }
#line 1048 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 1044 "jumpopt.m"
      {
#line 1042 "jumpopt.m"
        {
#line 1042 "jumpopt.m"
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[14], ((MR_Box) (ll_backend__jumpopt__BetweenLivevals_9)), ((MR_Box) (ll_backend__jumpopt__PrevLivevals_7)));
        }
#line 1044 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1043 "jumpopt.m"
          *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs2_11;
#line 1044 "jumpopt.m"
        else
#line 1045 "jumpopt.m"
          {
#line 1045 "jumpopt.m"
            {
#line 1045 "jumpopt.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.adjust_livevals\'/3", (MR_String) "BetweenLivevals and PrevLivevals differ");
#line 1045 "jumpopt.m"
              return;
            }
#line 1045 "jumpopt.m"
          }
#line 1044 "jumpopt.m"
      }
#line 1048 "jumpopt.m"
    else
#line 1049 "jumpopt.m"
      *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs0_5;
#line 1048 "jumpopt.m"
  }
#line 1033 "jumpopt.m"
}

#line 1012 "jumpopt.m"
static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
#line 1012 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Lval_3,
#line 1012 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Cond_4)
#line 1012 "jumpopt.m"
{
#line 1016 "jumpopt.m"
  {
#line 1016 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;

#line 1016 "jumpopt.m"
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1018 "jumpopt.m"
      {
#line 1018 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1018 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1018 "jumpopt.m"
        MR_Word ll_backend__jumpopt__Right_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 3)));

#line 1019 "jumpopt.m"
        if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 1019 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1019 "jumpopt.m"
        else
#line 1019 "jumpopt.m"
        if ((ll_backend__jumpopt__Op_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 1019 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 1019 "jumpopt.m"
        else
#line 1019 "jumpopt.m"
          ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1018 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1025 "jumpopt.m"
#line 1025 "jumpopt.m"
          switch (MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) {
#line 1025 "jumpopt.m"
            default:
#line 1025 "jumpopt.m"
              ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1025 "jumpopt.m"
              break;
#line 1025 "jumpopt.m"
            case (MR_Integer) 0:
#line 1026 "jumpopt.m"
              {
#line 1026 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));

#line 1026 "jumpopt.m"
                {
#line 1026 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_28_28);
                }
#line 1026 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                  {
#line 1028 "jumpopt.m"
                    if (((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 2))))
#line 1028 "jumpopt.m"
                      {
#line 1028 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1028 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1028 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_10_10;
#line 1028 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_11_11;
#line 1028 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_12_12;
#line 1028 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_13_13;

#line 1028 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_8_8 == (MR_Integer) 0);
#line 1028 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                          {
#line 1028 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1028 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                              {
#line 1028 "jumpopt.m"
                                ll_backend__jumpopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 1)));
#line 1028 "jumpopt.m"
                                ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_9_9, (MR_Integer) 2)));
#line 1028 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_10_10 == (MR_Integer) 4);
#line 1028 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                                  {
#line 1028 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1028 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                                      {
#line 1028 "jumpopt.m"
                                        ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_11_11, (MR_Integer) 1)));
#line 1028 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 1028 "jumpopt.m"
                                          {
#line 1028 "jumpopt.m"
                                            ll_backend__jumpopt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 1028 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 0);
#line 1028 "jumpopt.m"
                                          }
#line 1028 "jumpopt.m"
                                      }
#line 1028 "jumpopt.m"
                                  }
#line 1028 "jumpopt.m"
                              }
#line 1028 "jumpopt.m"
                          }
#line 1028 "jumpopt.m"
                      }
#line 1028 "jumpopt.m"
                    else
#line 1028 "jumpopt.m"
                    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1027 "jumpopt.m"
                      {
#line 1027 "jumpopt.m"
                        MR_Word ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
#line 1027 "jumpopt.m"
                        MR_Integer ll_backend__jumpopt__V_15_15;

#line 1027 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1027 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1027 "jumpopt.m"
                          {
#line 1027 "jumpopt.m"
                            ll_backend__jumpopt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_14_14, (MR_Integer) 0)));
#line 1027 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_15_15 == (MR_Integer) 0);
#line 1027 "jumpopt.m"
                          }
#line 1027 "jumpopt.m"
                      }
#line 1028 "jumpopt.m"
                    else
#line 1028 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1028 "jumpopt.m"
                  }
#line 1026 "jumpopt.m"
              }
#line 1025 "jumpopt.m"
              break;
#line 1025 "jumpopt.m"
            case (MR_Integer) 2:
#line 1021 "jumpopt.m"
              {
#line 1021 "jumpopt.m"
                MR_Integer ll_backend__jumpopt__V_16_16;
#line 1021 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_17_17;
#line 1021 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_18_18;
#line 1021 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_19_19;
#line 1021 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_20_20;
#line 1021 "jumpopt.m"
                MR_Integer ll_backend__jumpopt__V_21_21;
#line 1021 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_29_29;

#line 1021 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1021 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                  {
#line 1021 "jumpopt.m"
                    ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1021 "jumpopt.m"
                    {
#line 1021 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_29_29);
                    }
#line 1021 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                      {
#line 1023 "jumpopt.m"
                        ll_backend__jumpopt__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));
#line 1023 "jumpopt.m"
                        ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1023 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_16_16 == (MR_Integer) 0);
#line 1021 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                          {
#line 1023 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1023 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1023 "jumpopt.m"
                              {
#line 1023 "jumpopt.m"
                                ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 1)));
#line 1023 "jumpopt.m"
                                ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_17_17, (MR_Integer) 2)));
#line 1023 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_18_18 == (MR_Integer) 4);
#line 1021 "jumpopt.m"
                                if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                                  {
#line 1023 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1023 "jumpopt.m"
                                    if (ll_backend__jumpopt__succeeded)
#line 1023 "jumpopt.m"
                                      {
#line 1023 "jumpopt.m"
                                        ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_19_19, (MR_Integer) 1)));
#line 1023 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "jumpopt.m"
                                        if (ll_backend__jumpopt__succeeded)
#line 1023 "jumpopt.m"
                                          {
#line 1023 "jumpopt.m"
                                            ll_backend__jumpopt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_20_20, (MR_Integer) 0)));
#line 1023 "jumpopt.m"
                                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_21_21 == (MR_Integer) 0);
#line 1023 "jumpopt.m"
                                          }
#line 1023 "jumpopt.m"
                                      }
#line 1021 "jumpopt.m"
                                  }
#line 1023 "jumpopt.m"
                              }
#line 1021 "jumpopt.m"
                          }
#line 1021 "jumpopt.m"
                      }
#line 1021 "jumpopt.m"
                  }
#line 1021 "jumpopt.m"
              }
#line 1025 "jumpopt.m"
              break;
#line 1025 "jumpopt.m"
            case (MR_Integer) 3:
#line 1025 "jumpopt.m"
#line 1025 "jumpopt.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 0)))) {
#line 1025 "jumpopt.m"
                default:
#line 1025 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1025 "jumpopt.m"
                  break;
#line 1025 "jumpopt.m"
                case (MR_Integer) 1:
#line 1021 "jumpopt.m"
                  {
#line 1021 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_22_22;
#line 1021 "jumpopt.m"
                    MR_Integer ll_backend__jumpopt__V_23_23;
#line 1021 "jumpopt.m"
                    MR_Word ll_backend__jumpopt__V_27_27;

#line 1021 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
#line 1021 "jumpopt.m"
                    if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                      {
#line 1021 "jumpopt.m"
                        ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
#line 1021 "jumpopt.m"
                        {
#line 1021 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_27_27);
                        }
#line 1021 "jumpopt.m"
                        if (ll_backend__jumpopt__succeeded)
#line 1021 "jumpopt.m"
                          {
#line 1022 "jumpopt.m"
                            ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
#line 1022 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1022 "jumpopt.m"
                            if (ll_backend__jumpopt__succeeded)
#line 1022 "jumpopt.m"
                              {
#line 1022 "jumpopt.m"
                                ll_backend__jumpopt__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_22_22, (MR_Integer) 0)));
#line 1022 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_23_23 == (MR_Integer) 0);
#line 1022 "jumpopt.m"
                              }
#line 1021 "jumpopt.m"
                          }
#line 1021 "jumpopt.m"
                      }
#line 1021 "jumpopt.m"
                  }
#line 1025 "jumpopt.m"
                  break;
#line 1025 "jumpopt.m"
              }
#line 1025 "jumpopt.m"
              break;
#line 1025 "jumpopt.m"
          }
#line 1018 "jumpopt.m"
      }
#line 1016 "jumpopt.m"
    else
#line 1016 "jumpopt.m"
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1016 "jumpopt.m"
      {
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
#line 1016 "jumpopt.m"
        MR_Word ll_backend__jumpopt__V_26_26;

#line 1016 "jumpopt.m"
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_24_24 == (MR_Integer) 7);
#line 1016 "jumpopt.m"
        if (ll_backend__jumpopt__succeeded)
#line 1016 "jumpopt.m"
          {
#line 1016 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1016 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 1016 "jumpopt.m"
              {
#line 1016 "jumpopt.m"
                ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_25_25, (MR_Integer) 0)));
#line 1016 "jumpopt.m"
                {
#line 1016 "jumpopt.m"
                  return ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__V_26_26);
                }
#line 1016 "jumpopt.m"
              }
#line 1016 "jumpopt.m"
          }
#line 1016 "jumpopt.m"
      }
#line 1016 "jumpopt.m"
    else
#line 1016 "jumpopt.m"
      ll_backend__jumpopt__succeeded = MR_FALSE;
#line 1016 "jumpopt.m"
    return ll_backend__jumpopt__succeeded;
#line 1016 "jumpopt.m"
  }
#line 1012 "jumpopt.m"
}

#line 994 "jumpopt.m"
static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
#line 994 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment_3)
#line 994 "jumpopt.m"
{
#line 996 "jumpopt.m"
  {
#line 996 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 996 "jumpopt.m"
    MR_String ll_backend__jumpopt__HeadVar__2_2;

#line 996 "jumpopt.m"
    {
#line 996 "jumpopt.m"
      return ll_backend__jumpopt__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment_3, (MR_String) " (redirected return)");
    }
#line 996 "jumpopt.m"
    return ll_backend__jumpopt__HeadVar__2_2;
#line 996 "jumpopt.m"
  }
#line 994 "jumpopt.m"
}

#line 964 "jumpopt.m"
static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
#line 964 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1)
#line 964 "jumpopt.m"
{
#line 966 "jumpopt.m"
  while (MR_TRUE)
#line 966 "jumpopt.m"
    {
#line 966 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 966 "jumpopt.m"
      {
#line 966 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;
#line 966 "jumpopt.m"
        MR_Word ll_backend__jumpopt__HeadVar__2_2;

#line 966 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "jumpopt.m"
          ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 1;
#line 966 "jumpopt.m"
        else
#line 967 "jumpopt.m"
          {
#line 967 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 967 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 0)));
#line 968 "jumpopt.m"
            MR_String ll_backend__jumpopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 1)));
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_12_12;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_14_14;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_15_15;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_16_16;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_17_17;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_19_19;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_20_20;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_21_21;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_22_22;
#line 981 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_11_11;

#line 981 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 981 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 981 "jumpopt.m"
              {
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 981 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 981 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 981 "jumpopt.m"
                  ll_backend__jumpopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_12_12, (MR_Integer) 0)));
#line 981 "jumpopt.m"
              }
#line 5388 "ll_backend.jumpopt.c"
            if (ll_backend__jumpopt__succeeded)
#line 972 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 5392 "ll_backend.jumpopt.c"
            else
#line 5394 "ll_backend.jumpopt.c"
              {
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_13_13;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_23_23;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_24_24;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_25_25;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_26_26;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_27_27;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_28_28;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_29_29;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_30_30;
#line 988 "jumpopt.m"
                MR_Word ll_backend__jumpopt__V_31_31;

#line 988 "jumpopt.m"
                ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 988 "jumpopt.m"
                if (ll_backend__jumpopt__succeeded)
#line 988 "jumpopt.m"
                  {
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
#line 988 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_13_13 == (MR_Integer) 1);
#line 988 "jumpopt.m"
                  }
#line 5447 "ll_backend.jumpopt.c"
                if (ll_backend__jumpopt__succeeded)
#line 972 "jumpopt.m"
                  ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
#line 5451 "ll_backend.jumpopt.c"
                else
#line 975 "jumpopt.m"
                  {
#line 975 "jumpopt.m"
                    /* direct tailcall eliminated */
#line 975 "jumpopt.m"
                    {
#line 975 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs_4;

#line 975 "jumpopt.m"
                      ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 975 "jumpopt.m"
                    }
#line 975 "jumpopt.m"
                    continue;
#line 975 "jumpopt.m"
                  }
#line 5470 "ll_backend.jumpopt.c"
              }
#line 967 "jumpopt.m"
          }
#line 966 "jumpopt.m"
        return ll_backend__jumpopt__HeadVar__2_2;
#line 966 "jumpopt.m"
      }
#line 966 "jumpopt.m"
      break;
#line 966 "jumpopt.m"
    }
#line 964 "jumpopt.m"
}

#line 613 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 613 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 613 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
#line 613 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
#line 613 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 613 "jumpopt.m"
{
#line 619 "jumpopt.m"
  {
#line 619 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 619 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 730 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TargetLabel_17;

#line 621 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_16)) == (MR_mktag((MR_Integer) 1)));
#line 621 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 621 "jumpopt.m"
      {
#line 621 "jumpopt.m"
        ll_backend__jumpopt__TargetLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_16, (MR_Integer) 0)));
#line 628 "jumpopt.m"
        {
#line 624 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_18_18;

#line 624 "jumpopt.m"
          {
#line 624 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__V_18_18);
          }
#line 628 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 626 "jumpopt.m"
            {
#line 627 "jumpopt.m"
              {
#line 627 "jumpopt.m"
                MR_Word base;
#line 627 "jumpopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "jumpopt.m"
                *ll_backend__jumpopt__NewRemain_15 = base;
#line 627 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "jumpopt.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 627 "jumpopt.m"
              }
#line 626 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 626 "jumpopt.m"
            }
#line 628 "jumpopt.m"
          else
#line 640 "jumpopt.m"
            {
#line 629 "jumpopt.m"
              MR_Word ll_backend__jumpopt__IfTargetLabel_21;
#line 629 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_50_50;
#line 629 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_20_20;
#line 630 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_22_22;

#line 629 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 629 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 629 "jumpopt.m"
                {
#line 629 "jumpopt.m"
                  ll_backend__jumpopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 1)));
#line 629 "jumpopt.m"
                  ll_backend__jumpopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 2)));
#line 629 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 629 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 629 "jumpopt.m"
                    {
#line 629 "jumpopt.m"
                      ll_backend__jumpopt__IfTargetLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_50_50, (MR_Integer) 0)));
#line 630 "jumpopt.m"
                      {
#line 630 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__IfTargetLabel_21, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__V_22_22);
                      }
#line 629 "jumpopt.m"
                    }
#line 629 "jumpopt.m"
                }
#line 640 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 638 "jumpopt.m"
                {
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_51_51;
#line 638 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_83;

#line 638 "jumpopt.m"
                  {
#line 638 "jumpopt.m"
                    ll_backend__jumpopt__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_51_51, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 638 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_51_51, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 638 "jumpopt.m"
                  }
#line 638 "jumpopt.m"
                  {
#line 638 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 0) = ((MR_Box) (ll_backend__jumpopt__V_51_51));
#line 638 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "jumpopt.m"
                  }
#line 639 "jumpopt.m"
                  {
#line 639 "jumpopt.m"
                    MR_Word base;
#line 639 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 639 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_83));
#line 639 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 639 "jumpopt.m"
                  }
#line 638 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 638 "jumpopt.m"
                }
#line 640 "jumpopt.m"
              else
#line 649 "jumpopt.m"
                {
#line 649 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between0_24;
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__ProcMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 642 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 643 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv0_Between0_24;

#line 643 "jumpopt.m"
                  {
#line 643 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__ProcMap_23, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv0_Between0_24);
                  }
#line 643 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 643 "jumpopt.m"
                    {
#line 643 "jumpopt.m"
                      ll_backend__jumpopt__Between0_24 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_24);
#line 643 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 643 "jumpopt.m"
                    }
#line 649 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 645 "jumpopt.m"
                    {
#line 645 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between_25;
#line 645 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewInstrs_84;

#line 645 "jumpopt.m"
                      {
#line 645 "jumpopt.m"
                        ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_24, &ll_backend__jumpopt__Between_25);
                      }
#line 646 "jumpopt.m"
                      {
#line 646 "jumpopt.m"
                        ll_backend__jumpopt__NewInstrs_84 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_25, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[13]));
                      }
#line 648 "jumpopt.m"
                      {
#line 648 "jumpopt.m"
                        MR_Word base;
#line 648 "jumpopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "jumpopt.m"
                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 648 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_84));
#line 648 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 648 "jumpopt.m"
                      }
#line 645 "jumpopt.m"
                      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 645 "jumpopt.m"
                    }
#line 649 "jumpopt.m"
                  else
#line 658 "jumpopt.m"
                    {
#line 658 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Between0_101;
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SdprocMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 651 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 652 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv1_Between0_101;

#line 652 "jumpopt.m"
                      {
#line 652 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SdprocMap_26, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv1_Between0_101);
                      }
#line 652 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 652 "jumpopt.m"
                        {
#line 652 "jumpopt.m"
                          ll_backend__jumpopt__Between0_101 = ((MR_Word) ll_backend__jumpopt__conv1_Between0_101);
#line 652 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 652 "jumpopt.m"
                        }
#line 658 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 654 "jumpopt.m"
                        {
#line 654 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_85;
#line 654 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Between_86;

#line 654 "jumpopt.m"
                          {
#line 654 "jumpopt.m"
                            ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_101, &ll_backend__jumpopt__Between_86);
                          }
#line 655 "jumpopt.m"
                          {
#line 655 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_85 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_86, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[13]));
                          }
#line 657 "jumpopt.m"
                          {
#line 657 "jumpopt.m"
                            MR_Word base;
#line 657 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 657 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_85));
#line 657 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 657 "jumpopt.m"
                          }
#line 654 "jumpopt.m"
                          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 654 "jumpopt.m"
                        }
#line 658 "jumpopt.m"
                      else
#line 665 "jumpopt.m"
                        {
#line 665 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__BetweenIncl0_28;
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__SuccMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 660 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 661 "jumpopt.m"
                          MR_Box ll_backend__jumpopt__conv2_BetweenIncl0_28;

#line 661 "jumpopt.m"
                          {
#line 661 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SuccMap_27, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv2_BetweenIncl0_28);
                          }
#line 661 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 661 "jumpopt.m"
                            {
#line 661 "jumpopt.m"
                              ll_backend__jumpopt__BetweenIncl0_28 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl0_28);
#line 661 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 661 "jumpopt.m"
                            }
#line 665 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 663 "jumpopt.m"
                            {
#line 663 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_87;

#line 663 "jumpopt.m"
                              {
#line 663 "jumpopt.m"
                                ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__BetweenIncl0_28, &ll_backend__jumpopt__NewInstrs_87);
                              }
#line 664 "jumpopt.m"
                              {
#line 664 "jumpopt.m"
                                MR_Word base;
#line 664 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 664 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_87));
#line 664 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 664 "jumpopt.m"
                              }
#line 663 "jumpopt.m"
                              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 663 "jumpopt.m"
                            }
#line 665 "jumpopt.m"
                          else
#line 698 "jumpopt.m"
                            {
#line 698 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__DestLabel_31;
#line 698 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__BlockMap_33;
#line 698 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__Block_34;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_195_195;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_196_196;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TypeInfo_197_197;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__InstrMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__TargetInstr_30;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_66_66;
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 677 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 679 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv3_TargetInstr_30;
#line 680 "jumpopt.m"
                              MR_Word ll_backend__jumpopt___DestInstr_32;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_150_150;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_151_151;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_152_152;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_153_153;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_154_154;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_155_155;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_156_156;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_157_157;
#line 682 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_158_158;
#line 683 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv4_Block_34;

#line 677 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_65_65 == (MR_Integer) 1);
#line 677 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 677 "jumpopt.m"
                                {
#line 5949 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_195_195 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 5951 "ll_backend.jumpopt.c"
                                  ll_backend__jumpopt__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 679 "jumpopt.m"
                                  {
#line 679 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeCtorInfo_196_196, ll_backend__jumpopt__InstrMap_29, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv3_TargetInstr_30);
                                  }
#line 679 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 679 "jumpopt.m"
                                    {
#line 679 "jumpopt.m"
                                      ll_backend__jumpopt__TargetInstr_30 = ((MR_Word) ll_backend__jumpopt__conv3_TargetInstr_30);
#line 679 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 679 "jumpopt.m"
                                    }
#line 677 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 677 "jumpopt.m"
                                    {
#line 680 "jumpopt.m"
                                      {
#line 680 "jumpopt.m"
                                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_29, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_31, ll_backend__jumpopt__TargetInstr_30, &ll_backend__jumpopt___DestInstr_32);
                                      }
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__BlockMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 682 "jumpopt.m"
                                      ll_backend__jumpopt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 5997 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_197_197 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 683 "jumpopt.m"
                                      {
#line 683 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeInfo_197_197, ll_backend__jumpopt__BlockMap_33, ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), &ll_backend__jumpopt__conv4_Block_34);
                                      }
#line 683 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 683 "jumpopt.m"
                                        {
#line 683 "jumpopt.m"
                                          ll_backend__jumpopt__Block_34 = ((MR_Word) ll_backend__jumpopt__conv4_Block_34);
#line 683 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 683 "jumpopt.m"
                                        }
#line 677 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 677 "jumpopt.m"
                                        {
#line 684 "jumpopt.m"
                                          {
#line 684 "jumpopt.m"
                                            ll_backend__jumpopt__V_66_66 = ll_backend__jumpopt__block_may_be_duplicated_1_f_0(ll_backend__jumpopt__Block_34);
                                          }
#line 684 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_66_66 == (MR_Integer) 1);
#line 677 "jumpopt.m"
                                        }
#line 677 "jumpopt.m"
                                    }
#line 677 "jumpopt.m"
                                }
#line 698 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 686 "jumpopt.m"
                                {
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__FilteredBlock_35;
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__AdjustedBlock_36;
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__CrippledBlockMap_37;
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__CrippledJumpOptInfo_38;
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__RevNewInstrs_39;
#line 686 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_71_71;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_159_159;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_161_161;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_162_162;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_163_163;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_164_164;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_165_165;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_166_166;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_167_167;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_168_168;
#line 692 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_160_160;

#line 686 "jumpopt.m"
                                  {
#line 686 "jumpopt.m"
                                    ll_backend__opt_util__filter_out_labels_2_p_0(ll_backend__jumpopt__Block_34, &ll_backend__jumpopt__FilteredBlock_35);
                                  }
#line 687 "jumpopt.m"
                                  {
#line 687 "jumpopt.m"
                                    ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__FilteredBlock_35, &ll_backend__jumpopt__AdjustedBlock_36);
                                  }
#line 691 "jumpopt.m"
                                  {
#line 691 "jumpopt.m"
                                    mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), ll_backend__jumpopt__BlockMap_33, &ll_backend__jumpopt__CrippledBlockMap_37);
                                  }
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 692 "jumpopt.m"
                                  ll_backend__jumpopt__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 692 "jumpopt.m"
                                  {
#line 692 "jumpopt.m"
                                    ll_backend__jumpopt__CrippledJumpOptInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 0) = ((MR_Box) (ll_backend__jumpopt__V_159_159));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 1) = ((MR_Box) (ll_backend__jumpopt__CrippledBlockMap_37));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 2) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 3) = ((MR_Box) (ll_backend__jumpopt__V_162_162));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 4) = ((MR_Box) (ll_backend__jumpopt__V_163_163));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 5) = ((MR_Box) (ll_backend__jumpopt__V_164_164));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 6) = ((MR_Box) (ll_backend__jumpopt__V_165_165));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 7) = ((MR_Box) (ll_backend__jumpopt__V_166_166));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 8) = ((MR_Box) (ll_backend__jumpopt__V_167_167));
#line 692 "jumpopt.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 9) = ((MR_Box) (ll_backend__jumpopt__V_168_168));
#line 692 "jumpopt.m"
                                  }
#line 694 "jumpopt.m"
                                  {
#line 694 "jumpopt.m"
                                    ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__AdjustedBlock_36, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__CrippledJumpOptInfo_38, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevNewInstrs_39);
                                  }
#line 697 "jumpopt.m"
                                  {
#line 697 "jumpopt.m"
                                    ll_backend__jumpopt__V_71_71 = mercury__list__reverse_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__RevNewInstrs_39);
                                  }
#line 697 "jumpopt.m"
                                  {
#line 697 "jumpopt.m"
                                    MR_Word base;
#line 697 "jumpopt.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 697 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__V_71_71));
#line 697 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 697 "jumpopt.m"
                                  }
#line 686 "jumpopt.m"
                                }
#line 698 "jumpopt.m"
                              else
#line 727 "jumpopt.m"
                                {
#line 727 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__InstrMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 727 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__TargetInstr_92;
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 700 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 701 "jumpopt.m"
                                  MR_Box ll_backend__jumpopt__conv5_TargetInstr_92;

#line 701 "jumpopt.m"
                                  {
#line 701 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_91, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv5_TargetInstr_92);
                                  }
#line 701 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 701 "jumpopt.m"
                                    {
#line 701 "jumpopt.m"
                                      ll_backend__jumpopt__TargetInstr_92 = ((MR_Word) ll_backend__jumpopt__conv5_TargetInstr_92);
#line 701 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 701 "jumpopt.m"
                                    }
#line 727 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 704 "jumpopt.m"
                                    {
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__DestInstr_40;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__UdestInstr_41;
#line 704 "jumpopt.m"
                                      MR_String ll_backend__jumpopt__Shorted_43;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Canfallthrough_44;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__NewInstrs0_45;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__LvalMap_46;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__NewInstrs_88;
#line 704 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__DestLabel_89;
#line 705 "jumpopt.m"
                                      MR_String ll_backend__jumpopt___Destcomment_42;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_178_178;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_179_179;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_180_180;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_181_181;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_182_182;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_183_183;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_184_184;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_185_185;
#line 720 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_186_186;
#line 723 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__Lvalinstr_47;
#line 721 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_81_81;
#line 721 "jumpopt.m"
                                      MR_Box ll_backend__jumpopt__conv6_V_81_81;

#line 703 "jumpopt.m"
                                      {
#line 703 "jumpopt.m"
                                        ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_91, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_89, ll_backend__jumpopt__TargetInstr_92, &ll_backend__jumpopt__DestInstr_40);
                                      }
#line 705 "jumpopt.m"
                                      ll_backend__jumpopt__UdestInstr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 0)));
#line 705 "jumpopt.m"
                                      ll_backend__jumpopt___Destcomment_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 1)));
#line 706 "jumpopt.m"
                                      {
#line 706 "jumpopt.m"
                                        ll_backend__jumpopt__Shorted_43 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                                      }
#line 707 "jumpopt.m"
                                      {
#line 707 "jumpopt.m"
                                        ll_backend__jumpopt__Canfallthrough_44 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__jumpopt__UdestInstr_41);
                                      }
#line 711 "jumpopt.m"
#line 711 "jumpopt.m"
                                      switch (ll_backend__jumpopt__Canfallthrough_44) {
#line 711 "jumpopt.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 711 "jumpopt.m"
                                        case (MR_Integer) 0:
#line 709 "jumpopt.m"
                                          {
#line 709 "jumpopt.m"
                                            MR_Word ll_backend__jumpopt__V_79_79;

#line 710 "jumpopt.m"
                                            {
#line 710 "jumpopt.m"
                                              ll_backend__jumpopt__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "jumpopt.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_79_79, 0) = ((MR_Box) (ll_backend__jumpopt__UdestInstr_41));
#line 710 "jumpopt.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_79_79, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
#line 710 "jumpopt.m"
                                            }
#line 710 "jumpopt.m"
                                            {
#line 710 "jumpopt.m"
                                              ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "jumpopt.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_79_79));
#line 710 "jumpopt.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "jumpopt.m"
                                            }
#line 709 "jumpopt.m"
                                          }
#line 711 "jumpopt.m"
                                          break;
#line 711 "jumpopt.m"
                                        case (MR_Integer) 1:
#line 715 "jumpopt.m"
                                          {
#line 713 "jumpopt.m"
                                            {
#line 713 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__DestLabel_89);
                                            }
#line 715 "jumpopt.m"
                                            if (ll_backend__jumpopt__succeeded)
#line 714 "jumpopt.m"
                                              {
#line 714 "jumpopt.m"
                                                MR_Word ll_backend__jumpopt__V_73_73;

#line 714 "jumpopt.m"
                                                {
#line 714 "jumpopt.m"
                                                  ll_backend__jumpopt__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_73_73, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 714 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_73_73, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 714 "jumpopt.m"
                                                }
#line 714 "jumpopt.m"
                                                {
#line 714 "jumpopt.m"
                                                  ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_73_73));
#line 714 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "jumpopt.m"
                                                }
#line 714 "jumpopt.m"
                                              }
#line 715 "jumpopt.m"
                                            else
#line 716 "jumpopt.m"
                                              {
#line 716 "jumpopt.m"
                                                MR_Word ll_backend__jumpopt__V_75_75;
#line 716 "jumpopt.m"
                                                MR_Word ll_backend__jumpopt__V_76_76;
#line 716 "jumpopt.m"
                                                MR_Word ll_backend__jumpopt__V_77_77;

#line 717 "jumpopt.m"
                                                {
#line 717 "jumpopt.m"
                                                  ll_backend__jumpopt__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_89));
#line 717 "jumpopt.m"
                                                }
#line 717 "jumpopt.m"
                                                {
#line 717 "jumpopt.m"
                                                  ll_backend__jumpopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_76_76, 1) = ((MR_Box) (ll_backend__jumpopt__V_77_77));
#line 717 "jumpopt.m"
                                                }
#line 717 "jumpopt.m"
                                                {
#line 717 "jumpopt.m"
                                                  ll_backend__jumpopt__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, 0) = ((MR_Box) (ll_backend__jumpopt__V_76_76));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
#line 717 "jumpopt.m"
                                                }
#line 717 "jumpopt.m"
                                                {
#line 717 "jumpopt.m"
                                                  ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__V_75_75));
#line 717 "jumpopt.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "jumpopt.m"
                                                }
#line 716 "jumpopt.m"
                                              }
#line 715 "jumpopt.m"
                                          }
#line 711 "jumpopt.m"
                                          break;
#line 711 "jumpopt.m"
                                      }
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__LvalMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 720 "jumpopt.m"
                                      ll_backend__jumpopt__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 721 "jumpopt.m"
                                      {
#line 721 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ll_backend__jumpopt__LvalMap_46, ((MR_Box) (ll_backend__jumpopt__DestLabel_89)), &ll_backend__jumpopt__conv6_V_81_81);
                                      }
#line 721 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 721 "jumpopt.m"
                                        {
#line 721 "jumpopt.m"
                                          ll_backend__jumpopt__V_81_81 = ((MR_Word) ll_backend__jumpopt__conv6_V_81_81);
#line 721 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 721 "jumpopt.m"
                                        }
#line 721 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 721 "jumpopt.m"
                                        {
#line 721 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 721 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 721 "jumpopt.m"
                                            ll_backend__jumpopt__Lvalinstr_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_81_81, (MR_Integer) 0)));
#line 721 "jumpopt.m"
                                        }
#line 723 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 722 "jumpopt.m"
                                        {
#line 722 "jumpopt.m"
                                          MR_Word ll_backend__jumpopt__V_82_82;

#line 722 "jumpopt.m"
                                          {
#line 722 "jumpopt.m"
                                            ll_backend__jumpopt__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, 0) = ((MR_Box) (ll_backend__jumpopt__Lvalinstr_47));
#line 722 "jumpopt.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_82_82, 1) = ((MR_Box) (ll_backend__jumpopt__NewInstrs0_45));
#line 722 "jumpopt.m"
                                          }
#line 722 "jumpopt.m"
                                          {
#line 722 "jumpopt.m"
                                            ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__V_82_82, &ll_backend__jumpopt__NewInstrs_88);
                                          }
#line 722 "jumpopt.m"
                                        }
#line 723 "jumpopt.m"
                                      else
#line 724 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_88 = ll_backend__jumpopt__NewInstrs0_45;
#line 726 "jumpopt.m"
                                      {
#line 726 "jumpopt.m"
                                        MR_Word base;
#line 726 "jumpopt.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "jumpopt.m"
                                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 726 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_88));
#line 726 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 726 "jumpopt.m"
                                      }
#line 704 "jumpopt.m"
                                    }
#line 727 "jumpopt.m"
                                  else
#line 728 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "jumpopt.m"
                                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 727 "jumpopt.m"
                                }
#line 698 "jumpopt.m"
                            }
#line 665 "jumpopt.m"
                        }
#line 658 "jumpopt.m"
                    }
#line 649 "jumpopt.m"
                }
#line 640 "jumpopt.m"
            }
#line 628 "jumpopt.m"
        }
#line 621 "jumpopt.m"
      }
#line 621 "jumpopt.m"
    else
#line 731 "jumpopt.m"
      {
#line 731 "jumpopt.m"
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
#line 731 "jumpopt.m"
      }
#line 619 "jumpopt.m"
  }
#line 613 "jumpopt.m"
}

#line 493 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Uinstr0_9,
#line 493 "jumpopt.m"
  MR_String ll_backend__jumpopt__Comment0_10,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Instrs0_11,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__PrevInstr_12,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
#line 493 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
#line 493 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
#line 493 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__NewRemain_15)
#line 493 "jumpopt.m"
{
#line 499 "jumpopt.m"
  {
#line 499 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Proc_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__LiveInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
#line 499 "jumpopt.m"
    MR_Word ll_backend__jumpopt__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
#line 609 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RetLabel_22;

#line 501 "jumpopt.m"
    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__RetAddr_17)) == (MR_mktag((MR_Integer) 1)));
#line 501 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 501 "jumpopt.m"
      {
#line 501 "jumpopt.m"
        ll_backend__jumpopt__RetLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RetAddr_17, (MR_Integer) 0)));
#line 513 "jumpopt.m"
        {
#line 505 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 505 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 504 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));

#line 504 "jumpopt.m"
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_279_279 == (MR_Integer) 1);
#line 505 "jumpopt.m"
          if (!(ll_backend__jumpopt__succeeded))
#line 506 "jumpopt.m"
            {
#line 507 "jumpopt.m"
              {
#line 507 "jumpopt.m"
                ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), ll_backend__jumpopt__V_281_281);
              }
#line 506 "jumpopt.m"
            }
#line 513 "jumpopt.m"
          if (ll_backend__jumpopt__succeeded)
#line 512 "jumpopt.m"
            {
#line 512 "jumpopt.m"
              *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 512 "jumpopt.m"
            }
#line 513 "jumpopt.m"
          else
#line 529 "jumpopt.m"
            {
#line 529 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Between0_25;
#line 519 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeCtorInfo_267_267;
#line 519 "jumpopt.m"
              MR_Word ll_backend__jumpopt__TypeInfo_268_268;
#line 519 "jumpopt.m"
              MR_Word ll_backend__jumpopt__ProcMap_24;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_221_221;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_222_222;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_223_223;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_224_224;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_225_225;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_226_226;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_227_227;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_228_228;
#line 520 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_229_229;
#line 521 "jumpopt.m"
              MR_Box ll_backend__jumpopt__conv0_Between0_25;
#line 522 "jumpopt.m"
              MR_Word ll_backend__jumpopt__Livevals_26;

#line 518 "jumpopt.m"
              if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 0))))
#line 517 "jumpopt.m"
                {
#line 517 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

#line 517 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_54_54 == (MR_Integer) 1);
#line 517 "jumpopt.m"
                }
#line 518 "jumpopt.m"
              else
#line 518 "jumpopt.m"
              if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1))))
#line 518 "jumpopt.m"
                {
#line 518 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

#line 518 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_53_53 == (MR_Integer) 1);
#line 518 "jumpopt.m"
                }
#line 518 "jumpopt.m"
              else
#line 518 "jumpopt.m"
                ll_backend__jumpopt__succeeded = MR_FALSE;
#line 519 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 519 "jumpopt.m"
                {
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__ProcMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 520 "jumpopt.m"
                  ll_backend__jumpopt__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 6705 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeCtorInfo_267_267 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6707 "ll_backend.jumpopt.c"
                  ll_backend__jumpopt__TypeInfo_268_268 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 521 "jumpopt.m"
                  {
#line 521 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_267_267, ll_backend__jumpopt__TypeInfo_268_268, ll_backend__jumpopt__ProcMap_24, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv0_Between0_25);
                  }
#line 521 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 521 "jumpopt.m"
                    {
#line 521 "jumpopt.m"
                      ll_backend__jumpopt__Between0_25 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_25);
#line 521 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = MR_TRUE;
#line 521 "jumpopt.m"
                    }
#line 519 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 519 "jumpopt.m"
                    {
#line 522 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 522 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 522 "jumpopt.m"
                        ll_backend__jumpopt__Livevals_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 519 "jumpopt.m"
                    }
#line 519 "jumpopt.m"
                }
#line 529 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 524 "jumpopt.m"
                {
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between1_27;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__NewInstrs_28;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_55_55;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_56_56;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_59_59;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_60_60;
#line 524 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_61_61;
#line 524 "jumpopt.m"
                  MR_String ll_backend__jumpopt__V_62_62;

#line 524 "jumpopt.m"
                  {
#line 524 "jumpopt.m"
                    ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__jumpopt__Between0_25, &ll_backend__jumpopt__Between1_27);
                  }
#line 526 "jumpopt.m"
                  {
#line 526 "jumpopt.m"
                    ll_backend__jumpopt__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_56_56, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 526 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_56_56, 1) = ((MR_Box) ((MR_String) ""));
#line 526 "jumpopt.m"
                  }
#line 527 "jumpopt.m"
                  {
#line 527 "jumpopt.m"
                    ll_backend__jumpopt__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_61_61, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 527 "jumpopt.m"
                  }
#line 527 "jumpopt.m"
                  {
#line 527 "jumpopt.m"
                    ll_backend__jumpopt__V_62_62 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                  }
#line 527 "jumpopt.m"
                  {
#line 527 "jumpopt.m"
                    ll_backend__jumpopt__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_60_60, 0) = ((MR_Box) (ll_backend__jumpopt__V_61_61));
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_60_60, 1) = ((MR_Box) (ll_backend__jumpopt__V_62_62));
#line 527 "jumpopt.m"
                  }
#line 527 "jumpopt.m"
                  {
#line 527 "jumpopt.m"
                    ll_backend__jumpopt__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 0) = ((MR_Box) (ll_backend__jumpopt__V_60_60));
#line 527 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "jumpopt.m"
                  }
#line 526 "jumpopt.m"
                  {
#line 526 "jumpopt.m"
                    ll_backend__jumpopt__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 0) = ((MR_Box) (ll_backend__jumpopt__V_56_56));
#line 526 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_55_55, 1) = ((MR_Box) (ll_backend__jumpopt__V_59_59));
#line 526 "jumpopt.m"
                  }
#line 525 "jumpopt.m"
                  {
#line 525 "jumpopt.m"
                    ll_backend__jumpopt__NewInstrs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between1_27, ll_backend__jumpopt__V_55_55);
                  }
#line 528 "jumpopt.m"
                  {
#line 528 "jumpopt.m"
                    MR_Word base;
#line 528 "jumpopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "jumpopt.m"
                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 528 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_28));
#line 528 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 528 "jumpopt.m"
                  }
#line 524 "jumpopt.m"
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 524 "jumpopt.m"
                }
#line 529 "jumpopt.m"
              else
#line 540 "jumpopt.m"
                {
#line 540 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between_30;
#line 531 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TypeCtorInfo_270_270;
#line 531 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__TypeInfo_271_271;
#line 531 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__ForkMap_29;
#line 531 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_64_64;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_230_230;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_231_231;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_232_232;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_233_233;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_234_234;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_235_235;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_236_236;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_237_237;
#line 532 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_238_238;
#line 533 "jumpopt.m"
                  MR_Box ll_backend__jumpopt__conv1_Between_30;
#line 534 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Livevals_201;

#line 531 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1)));
#line 531 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 531 "jumpopt.m"
                    {
#line 531 "jumpopt.m"
                      ll_backend__jumpopt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 531 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_64_64 == (MR_Integer) 1);
#line 531 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 531 "jumpopt.m"
                        {
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__ForkMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 532 "jumpopt.m"
                          ll_backend__jumpopt__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 6913 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_270_270 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6915 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeInfo_271_271 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 533 "jumpopt.m"
                          {
#line 533 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_270_270, ll_backend__jumpopt__TypeInfo_271_271, ll_backend__jumpopt__ForkMap_29, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv1_Between_30);
                          }
#line 533 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 533 "jumpopt.m"
                            {
#line 533 "jumpopt.m"
                              ll_backend__jumpopt__Between_30 = ((MR_Word) ll_backend__jumpopt__conv1_Between_30);
#line 533 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = MR_TRUE;
#line 533 "jumpopt.m"
                            }
#line 531 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 531 "jumpopt.m"
                            {
#line 534 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 534 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 534 "jumpopt.m"
                                ll_backend__jumpopt__Livevals_201 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 531 "jumpopt.m"
                            }
#line 531 "jumpopt.m"
                        }
#line 531 "jumpopt.m"
                    }
#line 540 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 538 "jumpopt.m"
                    {
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_65_65;
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_66_66;
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_69_69;
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_70_70;
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_71_71;
#line 538 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_72_72;
#line 538 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__NewInstrs_187;

#line 537 "jumpopt.m"
                      {
#line 537 "jumpopt.m"
                        ll_backend__jumpopt__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_66_66, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 537 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_66_66, 1) = ((MR_Box) ((MR_String) ""));
#line 537 "jumpopt.m"
                      }
#line 538 "jumpopt.m"
                      {
#line 538 "jumpopt.m"
                        ll_backend__jumpopt__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_71_71, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 538 "jumpopt.m"
                      }
#line 538 "jumpopt.m"
                      {
#line 538 "jumpopt.m"
                        ll_backend__jumpopt__V_72_72 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                      }
#line 538 "jumpopt.m"
                      {
#line 538 "jumpopt.m"
                        ll_backend__jumpopt__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_70_70, 0) = ((MR_Box) (ll_backend__jumpopt__V_71_71));
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_70_70, 1) = ((MR_Box) (ll_backend__jumpopt__V_72_72));
#line 538 "jumpopt.m"
                      }
#line 538 "jumpopt.m"
                      {
#line 538 "jumpopt.m"
                        ll_backend__jumpopt__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 0) = ((MR_Box) (ll_backend__jumpopt__V_70_70));
#line 538 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "jumpopt.m"
                      }
#line 537 "jumpopt.m"
                      {
#line 537 "jumpopt.m"
                        ll_backend__jumpopt__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 0) = ((MR_Box) (ll_backend__jumpopt__V_66_66));
#line 537 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_65_65, 1) = ((MR_Box) (ll_backend__jumpopt__V_69_69));
#line 537 "jumpopt.m"
                      }
#line 536 "jumpopt.m"
                      {
#line 536 "jumpopt.m"
                        ll_backend__jumpopt__NewInstrs_187 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_30, ll_backend__jumpopt__V_65_65);
                      }
#line 539 "jumpopt.m"
                      {
#line 539 "jumpopt.m"
                        MR_Word base;
#line 539 "jumpopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "jumpopt.m"
                        *ll_backend__jumpopt__NewRemain_15 = base;
#line 539 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_187));
#line 539 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 539 "jumpopt.m"
                      }
#line 538 "jumpopt.m"
                      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 538 "jumpopt.m"
                    }
#line 540 "jumpopt.m"
                  else
#line 560 "jumpopt.m"
                    {
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeCtorInfo_273_273;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__TypeInfo_274_274;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__SuccMap_31;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__BetweenIncl_32;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_74_74;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_75_75;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_76_76;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_77_77;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_78_78;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_79_79;
#line 543 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_80_80;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_239_239;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_240_240;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_241_241;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_242_242;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_243_243;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_244_244;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_245_245;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_246_246;
#line 544 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_247_247;
#line 545 "jumpopt.m"
                      MR_Box ll_backend__jumpopt__conv2_BetweenIncl_32;
#line 547 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Livevals_199;
#line 546 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_34_34;
#line 546 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_33_33;
#line 546 "jumpopt.m"
                      MR_String ll_backend__jumpopt__V_36_36;
#line 546 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_35_35;

#line 543 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
#line 543 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                        {
#line 543 "jumpopt.m"
                          ll_backend__jumpopt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 543 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_74_74 == (MR_Integer) 2);
#line 543 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                            {
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__SuccMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 544 "jumpopt.m"
                              ll_backend__jumpopt__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 7136 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeCtorInfo_273_273 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 7138 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeInfo_274_274 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 545 "jumpopt.m"
                              {
#line 545 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_273_273, ll_backend__jumpopt__TypeInfo_274_274, ll_backend__jumpopt__SuccMap_31, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv2_BetweenIncl_32);
                              }
#line 545 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 545 "jumpopt.m"
                                {
#line 545 "jumpopt.m"
                                  ll_backend__jumpopt__BetweenIncl_32 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl_32);
#line 545 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 545 "jumpopt.m"
                                }
#line 543 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                {
#line 547 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 547 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 547 "jumpopt.m"
                                    {
#line 547 "jumpopt.m"
                                      ll_backend__jumpopt__Livevals_199 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_32)) == (MR_mktag((MR_Integer) 1)));
#line 546 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 546 "jumpopt.m"
                                        {
#line 546 "jumpopt.m"
                                          ll_backend__jumpopt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                          ll_backend__jumpopt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 1)));
#line 546 "jumpopt.m"
                                          ll_backend__jumpopt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                          ll_backend__jumpopt__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_75_75, (MR_Integer) 1)));
#line 546 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 546 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 546 "jumpopt.m"
                                            {
#line 546 "jumpopt.m"
                                              ll_backend__jumpopt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_76_76, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 546 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 546 "jumpopt.m"
                                                {
#line 546 "jumpopt.m"
                                                  ll_backend__jumpopt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                                  ll_backend__jumpopt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_77_77, (MR_Integer) 1)));
#line 546 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 543 "jumpopt.m"
                                                    {
#line 546 "jumpopt.m"
                                                      ll_backend__jumpopt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_78_78, (MR_Integer) 0)));
#line 546 "jumpopt.m"
                                                      ll_backend__jumpopt__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_78_78, (MR_Integer) 1)));
#line 546 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_79_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 546 "jumpopt.m"
                                                      if (ll_backend__jumpopt__succeeded)
#line 546 "jumpopt.m"
                                                        ll_backend__jumpopt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_79_79, (MR_Integer) 1)));
#line 543 "jumpopt.m"
                                                    }
#line 546 "jumpopt.m"
                                                }
#line 546 "jumpopt.m"
                                            }
#line 546 "jumpopt.m"
                                        }
#line 547 "jumpopt.m"
                                    }
#line 543 "jumpopt.m"
                                }
#line 543 "jumpopt.m"
                            }
#line 543 "jumpopt.m"
                        }
#line 560 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 558 "jumpopt.m"
                        {
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_89_89;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_98_98;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_107_107;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_108_108;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_111_111;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_112_112;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_113_113;
#line 558 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_114_114;
#line 558 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__NewInstrs_188;

#line 556 "jumpopt.m"
                          {
#line 556 "jumpopt.m"
                            ll_backend__jumpopt__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_108_108, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_108_108, 1) = ((MR_Box) ((MR_String) ""));
#line 556 "jumpopt.m"
                          }
#line 557 "jumpopt.m"
                          {
#line 557 "jumpopt.m"
                            ll_backend__jumpopt__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 557 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_113_113, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 557 "jumpopt.m"
                          }
#line 557 "jumpopt.m"
                          {
#line 557 "jumpopt.m"
                            ll_backend__jumpopt__V_114_114 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                          }
#line 557 "jumpopt.m"
                          {
#line 557 "jumpopt.m"
                            ll_backend__jumpopt__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 0) = ((MR_Box) (ll_backend__jumpopt__V_113_113));
#line 557 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_112_112, 1) = ((MR_Box) (ll_backend__jumpopt__V_114_114));
#line 557 "jumpopt.m"
                          }
#line 558 "jumpopt.m"
                          {
#line 558 "jumpopt.m"
                            ll_backend__jumpopt__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 0) = ((MR_Box) (ll_backend__jumpopt__V_112_112));
#line 558 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "jumpopt.m"
                          }
#line 556 "jumpopt.m"
                          {
#line 556 "jumpopt.m"
                            ll_backend__jumpopt__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 0) = ((MR_Box) (ll_backend__jumpopt__V_108_108));
#line 556 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_107_107, 1) = ((MR_Box) (ll_backend__jumpopt__V_111_111));
#line 556 "jumpopt.m"
                          }
#line 555 "jumpopt.m"
                          {
#line 555 "jumpopt.m"
                            ll_backend__jumpopt__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 555 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_98_98, 1) = ((MR_Box) (ll_backend__jumpopt__V_107_107));
#line 555 "jumpopt.m"
                          }
#line 553 "jumpopt.m"
                          {
#line 553 "jumpopt.m"
                            ll_backend__jumpopt__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 553 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_89_89, 1) = ((MR_Box) (ll_backend__jumpopt__V_98_98));
#line 553 "jumpopt.m"
                          }
#line 551 "jumpopt.m"
                          {
#line 551 "jumpopt.m"
                            ll_backend__jumpopt__NewInstrs_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_188, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 551 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_188, 1) = ((MR_Box) (ll_backend__jumpopt__V_89_89));
#line 551 "jumpopt.m"
                          }
#line 559 "jumpopt.m"
                          {
#line 559 "jumpopt.m"
                            MR_Word base;
#line 559 "jumpopt.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "jumpopt.m"
                            *ll_backend__jumpopt__NewRemain_15 = base;
#line 559 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_188));
#line 559 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 559 "jumpopt.m"
                          }
#line 558 "jumpopt.m"
                          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 558 "jumpopt.m"
                        }
#line 560 "jumpopt.m"
                      else
#line 592 "jumpopt.m"
                        {
#line 592 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ProcLabel_37;
#line 592 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__LabelNumCounter0_38;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_275_275;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeInfo_276_276;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_116_116;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_117_117;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_118_118;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_119_119;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_120_120;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_121_121;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_122_122;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__SuccMap_189;
#line 563 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__BetweenIncl_190;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_248_248;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_249_249;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_250_250;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_251_251;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_252_252;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_253_253;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_254_254;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_255_255;
#line 566 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_256_256;
#line 567 "jumpopt.m"
                          MR_Box ll_backend__jumpopt__conv3_BetweenIncl_190;
#line 569 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__Livevals_195;
#line 568 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_40_40;
#line 568 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_39_39;
#line 568 "jumpopt.m"
                          MR_String ll_backend__jumpopt__V_42_42;
#line 568 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_41_41;

#line 563 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
#line 563 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 563 "jumpopt.m"
                            {
#line 563 "jumpopt.m"
                              ll_backend__jumpopt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
#line 563 "jumpopt.m"
                              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_116_116 == (MR_Integer) 1);
#line 563 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 563 "jumpopt.m"
                                {
#line 564 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50)) == (MR_mktag((MR_Integer) 1)));
#line 564 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 564 "jumpopt.m"
                                    {
#line 564 "jumpopt.m"
                                      ll_backend__jumpopt__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 0)));
#line 564 "jumpopt.m"
                                      ll_backend__jumpopt__LabelNumCounter0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 1)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__SuccMap_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 566 "jumpopt.m"
                                      ll_backend__jumpopt__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 7462 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeCtorInfo_275_275 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 7464 "ll_backend.jumpopt.c"
                                      ll_backend__jumpopt__TypeInfo_276_276 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 567 "jumpopt.m"
                                      {
#line 567 "jumpopt.m"
                                        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_275_275, ll_backend__jumpopt__TypeInfo_276_276, ll_backend__jumpopt__SuccMap_189, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv3_BetweenIncl_190);
                                      }
#line 567 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 567 "jumpopt.m"
                                        {
#line 567 "jumpopt.m"
                                          ll_backend__jumpopt__BetweenIncl_190 = ((MR_Word) ll_backend__jumpopt__conv3_BetweenIncl_190);
#line 567 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = MR_TRUE;
#line 567 "jumpopt.m"
                                        }
#line 563 "jumpopt.m"
                                      if (ll_backend__jumpopt__succeeded)
#line 563 "jumpopt.m"
                                        {
#line 569 "jumpopt.m"
                                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
#line 569 "jumpopt.m"
                                          if (ll_backend__jumpopt__succeeded)
#line 569 "jumpopt.m"
                                            {
#line 569 "jumpopt.m"
                                              ll_backend__jumpopt__Livevals_195 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_190)) == (MR_mktag((MR_Integer) 1)));
#line 568 "jumpopt.m"
                                              if (ll_backend__jumpopt__succeeded)
#line 568 "jumpopt.m"
                                                {
#line 568 "jumpopt.m"
                                                  ll_backend__jumpopt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_190, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                                  ll_backend__jumpopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_190, (MR_Integer) 1)));
#line 568 "jumpopt.m"
                                                  ll_backend__jumpopt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_117_117, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                                  ll_backend__jumpopt__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_117_117, (MR_Integer) 1)));
#line 568 "jumpopt.m"
                                                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_118_118)) == (MR_mktag((MR_Integer) 2)));
#line 568 "jumpopt.m"
                                                  if (ll_backend__jumpopt__succeeded)
#line 568 "jumpopt.m"
                                                    {
#line 568 "jumpopt.m"
                                                      ll_backend__jumpopt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_118_118, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_119_119)) == (MR_mktag((MR_Integer) 1)));
#line 568 "jumpopt.m"
                                                      if (ll_backend__jumpopt__succeeded)
#line 568 "jumpopt.m"
                                                        {
#line 568 "jumpopt.m"
                                                          ll_backend__jumpopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_119_119, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                                          ll_backend__jumpopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_119_119, (MR_Integer) 1)));
#line 568 "jumpopt.m"
                                                          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__V_122_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "jumpopt.m"
                                                          if (ll_backend__jumpopt__succeeded)
#line 563 "jumpopt.m"
                                                            {
#line 568 "jumpopt.m"
                                                              ll_backend__jumpopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_120_120, (MR_Integer) 0)));
#line 568 "jumpopt.m"
                                                              ll_backend__jumpopt__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_120_120, (MR_Integer) 1)));
#line 568 "jumpopt.m"
                                                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__V_121_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_121_121, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 568 "jumpopt.m"
                                                              if (ll_backend__jumpopt__succeeded)
#line 568 "jumpopt.m"
                                                                ll_backend__jumpopt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_121_121, (MR_Integer) 1)));
#line 563 "jumpopt.m"
                                                            }
#line 568 "jumpopt.m"
                                                        }
#line 568 "jumpopt.m"
                                                    }
#line 568 "jumpopt.m"
                                                }
#line 569 "jumpopt.m"
                                            }
#line 563 "jumpopt.m"
                                        }
#line 564 "jumpopt.m"
                                    }
#line 563 "jumpopt.m"
                                }
#line 563 "jumpopt.m"
                            }
#line 592 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 571 "jumpopt.m"
                            {
#line 571 "jumpopt.m"
                              MR_Integer ll_backend__jumpopt__LabelNum_43;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__LabelNumCounter1_44;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewLabel_45;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_123_123;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_124_124;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_131_131;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_133_133;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_142_142;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_151_151;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_160_160;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_161_161;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_164_164;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_165_165;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_166_166;
#line 571 "jumpopt.m"
                              MR_String ll_backend__jumpopt__V_167_167;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_168_168;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_169_169;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_170_170;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_172_172;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_176_176;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_177_177;
#line 571 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__NewInstrs_191;

#line 571 "jumpopt.m"
                              {
#line 571 "jumpopt.m"
                                mercury__counter__allocate_3_p_0(&ll_backend__jumpopt__LabelNum_43, ll_backend__jumpopt__LabelNumCounter0_38, &ll_backend__jumpopt__LabelNumCounter1_44);
                              }
#line 572 "jumpopt.m"
                              {
#line 572 "jumpopt.m"
                                ll_backend__jumpopt__NewLabel_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 0) = ((MR_Box) (ll_backend__jumpopt__LabelNum_43));
#line 572 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 1) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
#line 572 "jumpopt.m"
                              }
#line 575 "jumpopt.m"
                              {
#line 575 "jumpopt.m"
                                ll_backend__jumpopt__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_131_131, 0) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
#line 575 "jumpopt.m"
                              }
#line 574 "jumpopt.m"
                              {
#line 574 "jumpopt.m"
                                ll_backend__jumpopt__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_4[0])));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_124_124, 2) = ((MR_Box) (ll_backend__jumpopt__V_131_131));
#line 574 "jumpopt.m"
                              }
#line 574 "jumpopt.m"
                              {
#line 574 "jumpopt.m"
                                ll_backend__jumpopt__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_123_123, 0) = ((MR_Box) (ll_backend__jumpopt__V_124_124));
#line 574 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_123_123, 1) = ((MR_Box) ((MR_String) "branch around if cannot tail call"));
#line 574 "jumpopt.m"
                              }
#line 583 "jumpopt.m"
                              {
#line 583 "jumpopt.m"
                                ll_backend__jumpopt__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_161_161, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_161_161, 1) = ((MR_Box) ((MR_String) ""));
#line 583 "jumpopt.m"
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_166_166, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 584 "jumpopt.m"
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_167_167 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_165_165, 0) = ((MR_Box) (ll_backend__jumpopt__V_166_166));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_165_165, 1) = ((MR_Box) (ll_backend__jumpopt__V_167_167));
#line 584 "jumpopt.m"
                              }
#line 585 "jumpopt.m"
                              {
#line 585 "jumpopt.m"
                                ll_backend__jumpopt__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_170_170, 1) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
#line 585 "jumpopt.m"
                              }
#line 585 "jumpopt.m"
                              {
#line 585 "jumpopt.m"
                                ll_backend__jumpopt__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_169_169, 0) = ((MR_Box) (ll_backend__jumpopt__V_170_170));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_169_169, 1) = ((MR_Box) ((MR_String) "non tail call"));
#line 585 "jumpopt.m"
                              }
#line 587 "jumpopt.m"
                              {
#line 587 "jumpopt.m"
                                ll_backend__jumpopt__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_177_177, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 587 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_177_177, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 587 "jumpopt.m"
                              }
#line 588 "jumpopt.m"
                              {
#line 588 "jumpopt.m"
                                ll_backend__jumpopt__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_176_176, 0) = ((MR_Box) (ll_backend__jumpopt__V_177_177));
#line 588 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "jumpopt.m"
                              }
#line 586 "jumpopt.m"
                              {
#line 586 "jumpopt.m"
                                ll_backend__jumpopt__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_172_172, 0) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 586 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_172_172, 1) = ((MR_Box) (ll_backend__jumpopt__V_176_176));
#line 586 "jumpopt.m"
                              }
#line 585 "jumpopt.m"
                              {
#line 585 "jumpopt.m"
                                ll_backend__jumpopt__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_168_168, 0) = ((MR_Box) (ll_backend__jumpopt__V_169_169));
#line 585 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_168_168, 1) = ((MR_Box) (ll_backend__jumpopt__V_172_172));
#line 585 "jumpopt.m"
                              }
#line 584 "jumpopt.m"
                              {
#line 584 "jumpopt.m"
                                ll_backend__jumpopt__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_164_164, 0) = ((MR_Box) (ll_backend__jumpopt__V_165_165));
#line 584 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_164_164, 1) = ((MR_Box) (ll_backend__jumpopt__V_168_168));
#line 584 "jumpopt.m"
                              }
#line 583 "jumpopt.m"
                              {
#line 583 "jumpopt.m"
                                ll_backend__jumpopt__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_160_160, 0) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 583 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_160_160, 1) = ((MR_Box) (ll_backend__jumpopt__V_164_164));
#line 583 "jumpopt.m"
                              }
#line 582 "jumpopt.m"
                              {
#line 582 "jumpopt.m"
                                ll_backend__jumpopt__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_151_151, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
#line 582 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_151_151, 1) = ((MR_Box) (ll_backend__jumpopt__V_160_160));
#line 582 "jumpopt.m"
                              }
#line 580 "jumpopt.m"
                              {
#line 580 "jumpopt.m"
                                ll_backend__jumpopt__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_142_142, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
#line 580 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_142_142, 1) = ((MR_Box) (ll_backend__jumpopt__V_151_151));
#line 580 "jumpopt.m"
                              }
#line 578 "jumpopt.m"
                              {
#line 578 "jumpopt.m"
                                ll_backend__jumpopt__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_133_133, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
#line 578 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_133_133, 1) = ((MR_Box) (ll_backend__jumpopt__V_142_142));
#line 578 "jumpopt.m"
                              }
#line 576 "jumpopt.m"
                              {
#line 576 "jumpopt.m"
                                ll_backend__jumpopt__NewInstrs_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_191, 0) = ((MR_Box) (ll_backend__jumpopt__V_123_123));
#line 576 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_191, 1) = ((MR_Box) (ll_backend__jumpopt__V_133_133));
#line 576 "jumpopt.m"
                              }
#line 589 "jumpopt.m"
                              {
#line 589 "jumpopt.m"
                                MR_Word base;
#line 589 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = base;
#line 589 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_191));
#line 589 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 589 "jumpopt.m"
                              }
#line 590 "jumpopt.m"
                              {
#line 590 "jumpopt.m"
                                MR_Word base;
#line 590 "jumpopt.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "jumpopt.m"
                                *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = base;
#line 590 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
#line 590 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__LabelNumCounter1_44));
#line 590 "jumpopt.m"
                              }
#line 571 "jumpopt.m"
                            }
#line 592 "jumpopt.m"
                          else
#line 606 "jumpopt.m"
                            {
#line 606 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__InstrMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
#line 606 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__RetInstr_47;
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
#line 594 "jumpopt.m"
                              MR_Word ll_backend__jumpopt__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
#line 595 "jumpopt.m"
                              MR_Box ll_backend__jumpopt__conv4_RetInstr_47;

#line 595 "jumpopt.m"
                              {
#line 595 "jumpopt.m"
                                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_46, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv4_RetInstr_47);
                              }
#line 595 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 595 "jumpopt.m"
                                {
#line 595 "jumpopt.m"
                                  ll_backend__jumpopt__RetInstr_47 = ((MR_Word) ll_backend__jumpopt__conv4_RetInstr_47);
#line 595 "jumpopt.m"
                                  ll_backend__jumpopt__succeeded = MR_TRUE;
#line 595 "jumpopt.m"
                                }
#line 606 "jumpopt.m"
                              if (ll_backend__jumpopt__succeeded)
#line 597 "jumpopt.m"
                                {
#line 597 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__DestLabel_48;
#line 597 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt__NewInstrs_192;
#line 597 "jumpopt.m"
                                  MR_Word ll_backend__jumpopt___DestInstr_49;

#line 597 "jumpopt.m"
                                  {
#line 597 "jumpopt.m"
                                    ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_46, ll_backend__jumpopt__RetLabel_22, &ll_backend__jumpopt__DestLabel_48, ll_backend__jumpopt__RetInstr_47, &ll_backend__jumpopt___DestInstr_49);
                                  }
#line 598 "jumpopt.m"
                                  {
#line 598 "jumpopt.m"
                                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__RetLabel_22, ll_backend__jumpopt__DestLabel_48);
                                  }
#line 600 "jumpopt.m"
                                  if (ll_backend__jumpopt__succeeded)
#line 599 "jumpopt.m"
                                    {
#line 599 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_180_180;

#line 599 "jumpopt.m"
                                      {
#line 599 "jumpopt.m"
                                        ll_backend__jumpopt__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_180_180, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
#line 599 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_180_180, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
#line 599 "jumpopt.m"
                                      }
#line 599 "jumpopt.m"
                                      {
#line 599 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 0) = ((MR_Box) (ll_backend__jumpopt__V_180_180));
#line 599 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "jumpopt.m"
                                      }
#line 599 "jumpopt.m"
                                    }
#line 600 "jumpopt.m"
                                  else
#line 601 "jumpopt.m"
                                    {
#line 601 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_182_182;
#line 601 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_183_183;
#line 601 "jumpopt.m"
                                      MR_Word ll_backend__jumpopt__V_184_184;
#line 601 "jumpopt.m"
                                      MR_String ll_backend__jumpopt__V_185_185;

#line 601 "jumpopt.m"
                                      {
#line 601 "jumpopt.m"
                                        ll_backend__jumpopt__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_184_184, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_48));
#line 601 "jumpopt.m"
                                      }
#line 601 "jumpopt.m"
                                      {
#line 601 "jumpopt.m"
                                        ll_backend__jumpopt__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 2) = ((MR_Box) (ll_backend__jumpopt__V_184_184));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 3) = ((MR_Box) (ll_backend__jumpopt__LiveInfos_18));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 4) = ((MR_Box) (ll_backend__jumpopt__Context_19));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 5) = ((MR_Box) (ll_backend__jumpopt__GoalPath_20));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_183_183, 6) = ((MR_Box) (ll_backend__jumpopt__CallModel_21));
#line 601 "jumpopt.m"
                                      }
#line 603 "jumpopt.m"
                                      {
#line 603 "jumpopt.m"
                                        ll_backend__jumpopt__V_185_185 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                                      }
#line 601 "jumpopt.m"
                                      {
#line 601 "jumpopt.m"
                                        ll_backend__jumpopt__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_182_182, 0) = ((MR_Box) (ll_backend__jumpopt__V_183_183));
#line 601 "jumpopt.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_182_182, 1) = ((MR_Box) (ll_backend__jumpopt__V_185_185));
#line 601 "jumpopt.m"
                                      }
#line 603 "jumpopt.m"
                                      {
#line 603 "jumpopt.m"
                                        ll_backend__jumpopt__NewInstrs_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 0) = ((MR_Box) (ll_backend__jumpopt__V_182_182));
#line 603 "jumpopt.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "jumpopt.m"
                                      }
#line 601 "jumpopt.m"
                                    }
#line 605 "jumpopt.m"
                                  {
#line 605 "jumpopt.m"
                                    MR_Word base;
#line 605 "jumpopt.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "jumpopt.m"
                                    *ll_backend__jumpopt__NewRemain_15 = base;
#line 605 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_192));
#line 605 "jumpopt.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
#line 605 "jumpopt.m"
                                  }
#line 597 "jumpopt.m"
                                }
#line 606 "jumpopt.m"
                              else
#line 607 "jumpopt.m"
                                *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "jumpopt.m"
                              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 606 "jumpopt.m"
                            }
#line 592 "jumpopt.m"
                        }
#line 560 "jumpopt.m"
                    }
#line 540 "jumpopt.m"
                }
#line 529 "jumpopt.m"
            }
#line 513 "jumpopt.m"
        }
#line 501 "jumpopt.m"
      }
#line 501 "jumpopt.m"
    else
#line 610 "jumpopt.m"
      {
#line 610 "jumpopt.m"
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "jumpopt.m"
        *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
#line 610 "jumpopt.m"
      }
#line 499 "jumpopt.m"
  }
#line 493 "jumpopt.m"
}

#line 299 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
#line 299 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
#line 299 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
#line 299 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7)
#line 299 "jumpopt.m"
{
#line 304 "jumpopt.m"
  while (MR_TRUE)
#line 304 "jumpopt.m"
    {
#line 304 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 304 "jumpopt.m"
      {
#line 304 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 304 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "jumpopt.m"
          {
#line 304 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6;
#line 304 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 304 "jumpopt.m"
          }
#line 304 "jumpopt.m"
        else
#line 306 "jumpopt.m"
          {
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 0)));
#line 306 "jumpopt.m"
            MR_String ll_backend__jumpopt__Comment0_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 1)));
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__ReplacementInstrsEmpty_119;
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__RecurseInstrs_120;
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__NewPrevInstr_125;
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
#line 306 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

#line 8114 "ll_backend.jumpopt.c"
#line 8115 "ll_backend.jumpopt.c"
            switch (MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) {
#line 8117 "ll_backend.jumpopt.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 8119 "ll_backend.jumpopt.c"
              case (MR_Integer) 0:
#line 8121 "ll_backend.jumpopt.c"
                {
#line 459 "jumpopt.m"
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 464 "jumpopt.m"
                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                  {
#line 466 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                  }
#line 8139 "ll_backend.jumpopt.c"
                }
#line 8141 "ll_backend.jumpopt.c"
                break;
#line 8143 "ll_backend.jumpopt.c"
              case (MR_Integer) 1:
#line 8145 "ll_backend.jumpopt.c"
              case (MR_Integer) 2:
#line 8147 "ll_backend.jumpopt.c"
                {
#line 459 "jumpopt.m"
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 464 "jumpopt.m"
                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                  {
#line 466 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                  }
#line 8165 "ll_backend.jumpopt.c"
                }
#line 8167 "ll_backend.jumpopt.c"
                break;
#line 8169 "ll_backend.jumpopt.c"
              case (MR_Integer) 3:
#line 8171 "ll_backend.jumpopt.c"
#line 8172 "ll_backend.jumpopt.c"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) {
#line 8174 "ll_backend.jumpopt.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 8176 "ll_backend.jumpopt.c"
                  case (MR_Integer) 0:
#line 8178 "ll_backend.jumpopt.c"
                    {
#line 389 "jumpopt.m"
                      {
#line 389 "jumpopt.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", (MR_String) "block");
#line 389 "jumpopt.m"
                        return;
                      }
#line 8187 "ll_backend.jumpopt.c"
                    }
#line 8189 "ll_backend.jumpopt.c"
                    break;
#line 8191 "ll_backend.jumpopt.c"
                  case (MR_Integer) 1:
#line 8193 "ll_backend.jumpopt.c"
                    {
#line 8195 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8197 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8199 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Rval_42;
#line 8201 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 343 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 344 "jumpopt.m"
                      {
#line 344 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_174, ll_backend__jumpopt__Rval0_41, &ll_backend__jumpopt__Rval_42);
                      }
#line 341 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 345 "jumpopt.m"
                      {
#line 345 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_42, ll_backend__jumpopt__Rval0_41);
                      }
#line 8234 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 8236 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 8252 "ll_backend.jumpopt.c"
                        }
#line 8254 "ll_backend.jumpopt.c"
                      else
#line 8256 "ll_backend.jumpopt.c"
                        {
#line 8258 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_289;
#line 8260 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_121;
#line 8262 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_155_155;
#line 8264 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_156_156;
#line 8266 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_166_166;
#line 8268 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Shorted_170;

#line 348 "jumpopt.m"
                          {
#line 348 "jumpopt.m"
                            ll_backend__jumpopt__Shorted_170 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                          }
#line 349 "jumpopt.m"
                          {
#line 349 "jumpopt.m"
                            ll_backend__jumpopt__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_40));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_156_156, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_42));
#line 349 "jumpopt.m"
                          }
#line 349 "jumpopt.m"
                          {
#line 349 "jumpopt.m"
                            ll_backend__jumpopt__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_155_155, 0) = ((MR_Box) (ll_backend__jumpopt__V_156_156));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_155_155, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_170));
#line 349 "jumpopt.m"
                          }
#line 349 "jumpopt.m"
                          {
#line 349 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 0) = ((MR_Box) (ll_backend__jumpopt__V_155_155));
#line 349 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8310 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_289 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_166_166 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__ReplacementInstrs_121);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__V_166_166, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8324 "ll_backend.jumpopt.c"
                        }
#line 8326 "ll_backend.jumpopt.c"
                    }
#line 8328 "ll_backend.jumpopt.c"
                    break;
#line 8330 "ll_backend.jumpopt.c"
                  case (MR_Integer) 2:
#line 8332 "ll_backend.jumpopt.c"
                    {
#line 8334 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8336 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Lval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8338 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Rval0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8340 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Rval_186;
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 355 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 356 "jumpopt.m"
                      {
#line 356 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_181, ll_backend__jumpopt__Rval0_185, &ll_backend__jumpopt__Rval_186);
                      }
#line 353 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 357 "jumpopt.m"
                      {
#line 357 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_186, ll_backend__jumpopt__Rval0_185);
                      }
#line 8373 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 8375 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 8391 "ll_backend.jumpopt.c"
                        }
#line 8393 "ll_backend.jumpopt.c"
                      else
#line 8395 "ll_backend.jumpopt.c"
                        {
#line 8397 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_360;
#line 8399 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_151_151;
#line 8401 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_152_152;
#line 8403 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Shorted_177;
#line 8405 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_358;
#line 8407 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_359_359;

#line 360 "jumpopt.m"
                          {
#line 360 "jumpopt.m"
                            ll_backend__jumpopt__Shorted_177 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                          }
#line 361 "jumpopt.m"
                          {
#line 361 "jumpopt.m"
                            ll_backend__jumpopt__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_184));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_152_152, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_186));
#line 361 "jumpopt.m"
                          }
#line 361 "jumpopt.m"
                          {
#line 361 "jumpopt.m"
                            ll_backend__jumpopt__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_151_151, 0) = ((MR_Box) (ll_backend__jumpopt__V_152_152));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_151_151, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_177));
#line 361 "jumpopt.m"
                          }
#line 361 "jumpopt.m"
                          {
#line 361 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 0) = ((MR_Box) (ll_backend__jumpopt__V_151_151));
#line 361 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8449 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_360 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_359_359 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__ReplacementInstrs_358);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__V_359_359, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8463 "ll_backend.jumpopt.c"
                        }
#line 8465 "ll_backend.jumpopt.c"
                    }
#line 8467 "ll_backend.jumpopt.c"
                    break;
#line 8469 "ll_backend.jumpopt.c"
                  case (MR_Integer) 3:
#line 8471 "ll_backend.jumpopt.c"
                    {
#line 8473 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__NewRemain_386;

#line 317 "jumpopt.m"
                      {
#line 317 "jumpopt.m"
                        ll_backend__jumpopt__jump_opt_llcall_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_386);
                      }
#line 467 "jumpopt.m"
                      if ((ll_backend__jumpopt__NewRemain_386 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "jumpopt.m"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 463 "jumpopt.m"
                        }
#line 467 "jumpopt.m"
                      else
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_382;
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 0)));
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_381_381;

#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 1)));
#line 8514 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_382 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_381_381 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__ReplacementInstrs_380);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__V_381_381, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 476 "jumpopt.m"
                          if ((ll_backend__jumpopt__ReplacementInstrs_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 476 "jumpopt.m"
                          else
#line 478 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 468 "jumpopt.m"
                        }
#line 8536 "ll_backend.jumpopt.c"
                    }
#line 8538 "ll_backend.jumpopt.c"
                    break;
#line 8540 "ll_backend.jumpopt.c"
                  case (MR_Integer) 4:
#line 8542 "ll_backend.jumpopt.c"
                    {
#line 8544 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__FrameInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8546 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Redoip_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8548 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Label0_45;
#line 366 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_143_143;

#line 365 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 366 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Redoip_44)) == (MR_mktag((MR_Integer) 1)));
#line 366 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 366 "jumpopt.m"
                        {
#line 366 "jumpopt.m"
                          ll_backend__jumpopt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Redoip_44, (MR_Integer) 0)));
#line 366 "jumpopt.m"
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_143_143)) == (MR_mktag((MR_Integer) 1)));
#line 366 "jumpopt.m"
                          if (ll_backend__jumpopt__succeeded)
#line 366 "jumpopt.m"
                            ll_backend__jumpopt__Label0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_143_143, (MR_Integer) 0)));
#line 366 "jumpopt.m"
                        }
#line 8571 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 8573 "ll_backend.jumpopt.c"
                        {
#line 8575 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Label_46;
#line 8577 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__InstrMap_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 367 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 368 "jumpopt.m"
                          {
#line 368 "jumpopt.m"
                            ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_191, ll_backend__jumpopt__Label0_45, &ll_backend__jumpopt__Label_46);
                          }
#line 369 "jumpopt.m"
                          {
#line 369 "jumpopt.m"
                            ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_46, ll_backend__jumpopt__Label0_45);
                          }
#line 8608 "ll_backend.jumpopt.c"
                          if (ll_backend__jumpopt__succeeded)
#line 8610 "ll_backend.jumpopt.c"
                            {
#line 464 "jumpopt.m"
                              ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                              ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                              {
#line 466 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                              }
#line 8626 "ll_backend.jumpopt.c"
                            }
#line 8628 "ll_backend.jumpopt.c"
                          else
#line 8630 "ll_backend.jumpopt.c"
                            {
#line 8632 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__TypeCtorInfo_289_392;
#line 8634 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__V_145_145;
#line 8636 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__V_146_146;
#line 8638 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__V_147_147;
#line 8640 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__V_148_148;
#line 8642 "ll_backend.jumpopt.c"
                              MR_String ll_backend__jumpopt__Shorted_187;
#line 8644 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__ReplacementInstrs_390;
#line 8646 "ll_backend.jumpopt.c"
                              MR_Word ll_backend__jumpopt__V_391_391;

#line 372 "jumpopt.m"
                              {
#line 372 "jumpopt.m"
                                ll_backend__jumpopt__Shorted_187 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                              }
#line 374 "jumpopt.m"
                              {
#line 374 "jumpopt.m"
                                ll_backend__jumpopt__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_148_148, 0) = ((MR_Box) (ll_backend__jumpopt__Label_46));
#line 374 "jumpopt.m"
                              }
#line 374 "jumpopt.m"
                              {
#line 374 "jumpopt.m"
                                ll_backend__jumpopt__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_147_147, 0) = ((MR_Box) (ll_backend__jumpopt__V_148_148));
#line 374 "jumpopt.m"
                              }
#line 374 "jumpopt.m"
                              {
#line 374 "jumpopt.m"
                                ll_backend__jumpopt__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 1) = ((MR_Box) (ll_backend__jumpopt__FrameInfo_43));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_146_146, 2) = ((MR_Box) (ll_backend__jumpopt__V_147_147));
#line 374 "jumpopt.m"
                              }
#line 374 "jumpopt.m"
                              {
#line 374 "jumpopt.m"
                                ll_backend__jumpopt__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 0) = ((MR_Box) (ll_backend__jumpopt__V_146_146));
#line 374 "jumpopt.m"
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_145_145, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_187));
#line 374 "jumpopt.m"
                              }
#line 375 "jumpopt.m"
                              {
#line 375 "jumpopt.m"
                                ll_backend__jumpopt__ReplacementInstrs_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 0) = ((MR_Box) (ll_backend__jumpopt__V_145_145));
#line 375 "jumpopt.m"
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "jumpopt.m"
                              }
#line 468 "jumpopt.m"
                              ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 8704 "ll_backend.jumpopt.c"
                              ll_backend__jumpopt__TypeCtorInfo_289_392 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                              {
#line 472 "jumpopt.m"
                                ll_backend__jumpopt__V_391_391 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__ReplacementInstrs_390);
                              }
#line 472 "jumpopt.m"
                              {
#line 472 "jumpopt.m"
                                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__V_391_391, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                              }
#line 478 "jumpopt.m"
                              ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 8718 "ll_backend.jumpopt.c"
                            }
#line 8720 "ll_backend.jumpopt.c"
                        }
#line 8722 "ll_backend.jumpopt.c"
                      else
#line 8724 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 8740 "ll_backend.jumpopt.c"
                        }
#line 8742 "ll_backend.jumpopt.c"
                    }
#line 8744 "ll_backend.jumpopt.c"
                    break;
#line 8746 "ll_backend.jumpopt.c"
                  case (MR_Integer) 5:
#line 8748 "ll_backend.jumpopt.c"
                  case (MR_Integer) 8:
#line 8750 "ll_backend.jumpopt.c"
                  case (MR_Integer) 10:
#line 8752 "ll_backend.jumpopt.c"
                  case (MR_Integer) 11:
#line 8754 "ll_backend.jumpopt.c"
                  case (MR_Integer) 12:
#line 8756 "ll_backend.jumpopt.c"
                  case (MR_Integer) 13:
#line 8758 "ll_backend.jumpopt.c"
                  case (MR_Integer) 14:
#line 8760 "ll_backend.jumpopt.c"
                  case (MR_Integer) 15:
#line 8762 "ll_backend.jumpopt.c"
                  case (MR_Integer) 16:
#line 8764 "ll_backend.jumpopt.c"
                  case (MR_Integer) 17:
#line 8766 "ll_backend.jumpopt.c"
                  case (MR_Integer) 18:
#line 8768 "ll_backend.jumpopt.c"
                  case (MR_Integer) 19:
#line 8770 "ll_backend.jumpopt.c"
                  case (MR_Integer) 20:
#line 8772 "ll_backend.jumpopt.c"
                  case (MR_Integer) 21:
#line 8774 "ll_backend.jumpopt.c"
                  case (MR_Integer) 22:
#line 8776 "ll_backend.jumpopt.c"
                  case (MR_Integer) 23:
#line 8778 "ll_backend.jumpopt.c"
                  case (MR_Integer) 24:
#line 8780 "ll_backend.jumpopt.c"
                  case (MR_Integer) 25:
#line 8782 "ll_backend.jumpopt.c"
                  case (MR_Integer) 26:
#line 8784 "ll_backend.jumpopt.c"
                  case (MR_Integer) 28:
#line 8786 "ll_backend.jumpopt.c"
                  case (MR_Integer) 31:
#line 8788 "ll_backend.jumpopt.c"
                  case (MR_Integer) 34:
#line 8790 "ll_backend.jumpopt.c"
                    {
#line 459 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 464 "jumpopt.m"
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                      {
#line 466 "jumpopt.m"
                        ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                      }
#line 8808 "ll_backend.jumpopt.c"
                    }
#line 8810 "ll_backend.jumpopt.c"
                    break;
#line 8812 "ll_backend.jumpopt.c"
                  case (MR_Integer) 6:
#line 8814 "ll_backend.jumpopt.c"
                    {
#line 8816 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__NewRemain_334;

#line 321 "jumpopt.m"
                      {
#line 321 "jumpopt.m"
                        ll_backend__jumpopt__jump_opt_goto_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_334);
                      }
#line 467 "jumpopt.m"
                      if ((ll_backend__jumpopt__NewRemain_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "jumpopt.m"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 463 "jumpopt.m"
                        }
#line 467 "jumpopt.m"
                      else
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_330;
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 0)));
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_329_329;

#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 1)));
#line 8857 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_330 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_329_329 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__ReplacementInstrs_328);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__V_329_329, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 476 "jumpopt.m"
                          if ((ll_backend__jumpopt__ReplacementInstrs_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 476 "jumpopt.m"
                          else
#line 478 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 468 "jumpopt.m"
                        }
#line 8879 "ll_backend.jumpopt.c"
                    }
#line 8881 "ll_backend.jumpopt.c"
                    break;
#line 8883 "ll_backend.jumpopt.c"
                  case (MR_Integer) 7:
#line 8885 "ll_backend.jumpopt.c"
                    {
#line 8887 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Index_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 8889 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__MaybeTargets0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 8891 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 8893 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__MaybeTargets_35;
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 325 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 327 "jumpopt.m"
                      {
#line 327 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__InstrMap_34, ll_backend__jumpopt__MaybeTargets0_33, &ll_backend__jumpopt__MaybeTargets_35);
                      }
#line 324 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 328 "jumpopt.m"
                      {
#line 328 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[4], ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35)), ((MR_Box) (ll_backend__jumpopt__MaybeTargets0_33)));
                      }
#line 8926 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 8928 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 8944 "ll_backend.jumpopt.c"
                        }
#line 8946 "ll_backend.jumpopt.c"
                      else
#line 8948 "ll_backend.jumpopt.c"
                        {
#line 8950 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_300;
#line 8952 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Shorted_36;
#line 8954 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_160_160;
#line 8956 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_161_161;
#line 8958 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_298;
#line 8960 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_299_299;

#line 331 "jumpopt.m"
                          {
#line 331 "jumpopt.m"
                            ll_backend__jumpopt__Shorted_36 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                          }
#line 333 "jumpopt.m"
                          {
#line 333 "jumpopt.m"
                            ll_backend__jumpopt__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 1) = ((MR_Box) (ll_backend__jumpopt__Index_32));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__V_161_161, 2) = ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35));
#line 333 "jumpopt.m"
                          }
#line 333 "jumpopt.m"
                          {
#line 333 "jumpopt.m"
                            ll_backend__jumpopt__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_160_160, 0) = ((MR_Box) (ll_backend__jumpopt__V_161_161));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_160_160, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_36));
#line 333 "jumpopt.m"
                          }
#line 333 "jumpopt.m"
                          {
#line 333 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 0) = ((MR_Box) (ll_backend__jumpopt__V_160_160));
#line 333 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 9002 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_300 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_299_299 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__ReplacementInstrs_298);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__V_299_299, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 9016 "ll_backend.jumpopt.c"
                        }
#line 9018 "ll_backend.jumpopt.c"
                    }
#line 9020 "ll_backend.jumpopt.c"
                    break;
#line 9022 "ll_backend.jumpopt.c"
                  case (MR_Integer) 9:
#line 9024 "ll_backend.jumpopt.c"
                    {
#line 9026 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__NewRemain_344;

#line 338 "jumpopt.m"
                      {
#line 338 "jumpopt.m"
                        ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_344);
                      }
#line 467 "jumpopt.m"
                      if ((ll_backend__jumpopt__NewRemain_344 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "jumpopt.m"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 463 "jumpopt.m"
                        }
#line 467 "jumpopt.m"
                      else
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_340;
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 0)));
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_339_339;

#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 1)));
#line 9067 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_340 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_339_339 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__ReplacementInstrs_338);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__V_339_339, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 476 "jumpopt.m"
                          if ((ll_backend__jumpopt__ReplacementInstrs_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 476 "jumpopt.m"
                          else
#line 478 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 468 "jumpopt.m"
                        }
#line 9089 "ll_backend.jumpopt.c"
                    }
#line 9091 "ll_backend.jumpopt.c"
                    break;
#line 9093 "ll_backend.jumpopt.c"
                  case (MR_Integer) 27:
#line 9095 "ll_backend.jumpopt.c"
                    {
#line 9097 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__NewRemain_314;

#line 383 "jumpopt.m"
                      {
#line 383 "jumpopt.m"
                        ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_314);
                      }
#line 467 "jumpopt.m"
                      if ((ll_backend__jumpopt__NewRemain_314 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "jumpopt.m"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 463 "jumpopt.m"
                        }
#line 467 "jumpopt.m"
                      else
#line 468 "jumpopt.m"
                        {
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_310;
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 0)));
#line 468 "jumpopt.m"
                          MR_Word ll_backend__jumpopt__V_309_309;

#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 1)));
#line 9138 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_310 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_309_309 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__ReplacementInstrs_308);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__V_309_309, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 476 "jumpopt.m"
                          if ((ll_backend__jumpopt__ReplacementInstrs_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
#line 476 "jumpopt.m"
                          else
#line 478 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 468 "jumpopt.m"
                        }
#line 9160 "ll_backend.jumpopt.c"
                    }
#line 9162 "ll_backend.jumpopt.c"
                    break;
#line 9164 "ll_backend.jumpopt.c"
                  case (MR_Integer) 29:
#line 9166 "ll_backend.jumpopt.c"
                    {
#line 9168 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__SyncTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 9170 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Child0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 9172 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Child_62;
#line 9174 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 392 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 393 "jumpopt.m"
                      {
#line 393 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_200, ll_backend__jumpopt__Child0_61, &ll_backend__jumpopt__Child_62);
                      }
#line 391 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 394 "jumpopt.m"
                      {
#line 394 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_62, ll_backend__jumpopt__Child0_61);
                      }
#line 9207 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 9209 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 9225 "ll_backend.jumpopt.c"
                        }
#line 9227 "ll_backend.jumpopt.c"
                      else
#line 9229 "ll_backend.jumpopt.c"
                        {
#line 9231 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_320;
#line 9233 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Uinstr_63;
#line 9235 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Comment_64;
#line 9237 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Instr_65;
#line 9239 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_318;
#line 9241 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_319_319;

#line 397 "jumpopt.m"
                          {
#line 397 "jumpopt.m"
                            ll_backend__jumpopt__Uinstr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 397 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_60));
#line 397 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 2) = ((MR_Box) (ll_backend__jumpopt__Child_62));
#line 397 "jumpopt.m"
                          }
#line 398 "jumpopt.m"
                          {
#line 398 "jumpopt.m"
                            ll_backend__jumpopt__Comment_64 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                          }
#line 399 "jumpopt.m"
                          {
#line 399 "jumpopt.m"
                            ll_backend__jumpopt__Instr_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_63));
#line 399 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_64));
#line 399 "jumpopt.m"
                          }
#line 400 "jumpopt.m"
                          {
#line 400 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_65));
#line 400 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 9283 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_320 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_319_319 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__ReplacementInstrs_318);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__V_319_319, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 9297 "ll_backend.jumpopt.c"
                        }
#line 9299 "ll_backend.jumpopt.c"
                    }
#line 9301 "ll_backend.jumpopt.c"
                    break;
#line 9303 "ll_backend.jumpopt.c"
                  case (MR_Integer) 30:
#line 9305 "ll_backend.jumpopt.c"
                    {
#line 9307 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 9309 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Label0_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 9311 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Label_209;
#line 9313 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__SyncTerm_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 404 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 405 "jumpopt.m"
                      {
#line 405 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_207, ll_backend__jumpopt__Label0_208, &ll_backend__jumpopt__Label_209);
                      }
#line 403 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 406 "jumpopt.m"
                      {
#line 406 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_209, ll_backend__jumpopt__Label0_208);
                      }
#line 9346 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 9348 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 9364 "ll_backend.jumpopt.c"
                        }
#line 9366 "ll_backend.jumpopt.c"
                      else
#line 9368 "ll_backend.jumpopt.c"
                        {
#line 9370 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_350;
#line 9372 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Uinstr_201;
#line 9374 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Comment_202;
#line 9376 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Instr_203;
#line 9378 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_348;
#line 9380 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_349_349;

#line 409 "jumpopt.m"
                          {
#line 409 "jumpopt.m"
                            ll_backend__jumpopt__Uinstr_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 409 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 409 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_210));
#line 409 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 2) = ((MR_Box) (ll_backend__jumpopt__Label_209));
#line 409 "jumpopt.m"
                          }
#line 410 "jumpopt.m"
                          {
#line 410 "jumpopt.m"
                            ll_backend__jumpopt__Comment_202 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                          }
#line 411 "jumpopt.m"
                          {
#line 411 "jumpopt.m"
                            ll_backend__jumpopt__Instr_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_201));
#line 411 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_202));
#line 411 "jumpopt.m"
                          }
#line 412 "jumpopt.m"
                          {
#line 412 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_203));
#line 412 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 9422 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_350 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_349_349 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__ReplacementInstrs_348);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__V_349_349, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 9436 "ll_backend.jumpopt.c"
                        }
#line 9438 "ll_backend.jumpopt.c"
                    }
#line 9440 "ll_backend.jumpopt.c"
                    break;
#line 9442 "ll_backend.jumpopt.c"
                  case (MR_Integer) 32:
#line 9444 "ll_backend.jumpopt.c"
                    {
#line 415 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 464 "jumpopt.m"
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                      {
#line 466 "jumpopt.m"
                        ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                      }
#line 9462 "ll_backend.jumpopt.c"
                    }
#line 9464 "ll_backend.jumpopt.c"
                    break;
#line 9466 "ll_backend.jumpopt.c"
                  case (MR_Integer) 33:
#line 9468 "ll_backend.jumpopt.c"
                    {
#line 9470 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__LCRval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
#line 9472 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__LCSRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
#line 9474 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__InstrMap_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
#line 9476 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Child0_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 3)));
#line 9478 "ll_backend.jumpopt.c"
                      MR_Word ll_backend__jumpopt__Child_222;
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
#line 422 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

#line 423 "jumpopt.m"
                      {
#line 423 "jumpopt.m"
                        ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_220, ll_backend__jumpopt__Child0_221, &ll_backend__jumpopt__Child_222);
                      }
#line 421 "jumpopt.m"
                      ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
#line 424 "jumpopt.m"
                      {
#line 424 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_222, ll_backend__jumpopt__Child0_221);
                      }
#line 9511 "ll_backend.jumpopt.c"
                      if (ll_backend__jumpopt__succeeded)
#line 9513 "ll_backend.jumpopt.c"
                        {
#line 464 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 465 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 466 "jumpopt.m"
                          {
#line 466 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
#line 466 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
#line 466 "jumpopt.m"
                          }
#line 9529 "ll_backend.jumpopt.c"
                        }
#line 9531 "ll_backend.jumpopt.c"
                      else
#line 9533 "ll_backend.jumpopt.c"
                        {
#line 9535 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__TypeCtorInfo_289_370;
#line 9537 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Uinstr_214;
#line 9539 "ll_backend.jumpopt.c"
                          MR_String ll_backend__jumpopt__Comment_215;
#line 9541 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__Instr_216;
#line 9543 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__ReplacementInstrs_368;
#line 9545 "ll_backend.jumpopt.c"
                          MR_Word ll_backend__jumpopt__V_369_369;

#line 427 "jumpopt.m"
                          {
#line 427 "jumpopt.m"
                            ll_backend__jumpopt__Uinstr_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 427 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 427 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 1) = ((MR_Box) (ll_backend__jumpopt__LCRval_69));
#line 427 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 2) = ((MR_Box) (ll_backend__jumpopt__LCSRval_70));
#line 427 "jumpopt.m"
                            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 3) = ((MR_Box) (ll_backend__jumpopt__Child_222));
#line 427 "jumpopt.m"
                          }
#line 428 "jumpopt.m"
                          {
#line 428 "jumpopt.m"
                            ll_backend__jumpopt__Comment_215 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                          }
#line 429 "jumpopt.m"
                          {
#line 429 "jumpopt.m"
                            ll_backend__jumpopt__Instr_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_214));
#line 429 "jumpopt.m"
                            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_215));
#line 429 "jumpopt.m"
                          }
#line 430 "jumpopt.m"
                          {
#line 430 "jumpopt.m"
                            ll_backend__jumpopt__ReplacementInstrs_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_216));
#line 430 "jumpopt.m"
                            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "jumpopt.m"
                          }
#line 468 "jumpopt.m"
                          ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
#line 9589 "ll_backend.jumpopt.c"
                          ll_backend__jumpopt__TypeCtorInfo_289_370 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__V_369_369 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__ReplacementInstrs_368);
                          }
#line 472 "jumpopt.m"
                          {
#line 472 "jumpopt.m"
                            ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__V_369_369, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                          }
#line 478 "jumpopt.m"
                          ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
#line 9603 "ll_backend.jumpopt.c"
                        }
#line 9605 "ll_backend.jumpopt.c"
                    }
#line 9607 "ll_backend.jumpopt.c"
                    break;
#line 9609 "ll_backend.jumpopt.c"
                }
#line 9611 "ll_backend.jumpopt.c"
                break;
#line 9613 "ll_backend.jumpopt.c"
            }
#line 482 "jumpopt.m"
            {
#line 482 "jumpopt.m"
              MR_String ll_backend__jumpopt__V_124_124;

#line 482 "jumpopt.m"
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 1)));
#line 482 "jumpopt.m"
              if (ll_backend__jumpopt__succeeded)
#line 482 "jumpopt.m"
                ll_backend__jumpopt__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)));
#line 482 "jumpopt.m"
            }
#line 483 "jumpopt.m"
            if (!(ll_backend__jumpopt__succeeded))
#line 483 "jumpopt.m"
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__ReplacementInstrsEmpty_119 == (MR_Integer) 1);
#line 487 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 486 "jumpopt.m"
              ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__HeadVar__2_2;
#line 487 "jumpopt.m"
            else
#line 488 "jumpopt.m"
              ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__Uinstr0_22;
#line 490 "jumpopt.m"
            /* direct tailcall eliminated */
#line 490 "jumpopt.m"
            {
#line 490 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__RecurseInstrs_120;
#line 490 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__2__tmp_copy_2 = ll_backend__jumpopt__NewPrevInstr_125;
#line 490 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0__tmp_copy_4 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
#line 490 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_6 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

#line 490 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_6;
#line 490 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0__tmp_copy_4;
#line 490 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__2_2 = ll_backend__jumpopt__HeadVar__2__tmp_copy_2;
#line 490 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 490 "jumpopt.m"
            }
#line 490 "jumpopt.m"
            continue;
#line 306 "jumpopt.m"
          }
#line 304 "jumpopt.m"
      }
#line 304 "jumpopt.m"
      break;
#line 304 "jumpopt.m"
    }
#line 299 "jumpopt.m"
}

#line 228 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
#line 228 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
#line 228 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4)
#line 228 "jumpopt.m"
{
#line 231 "jumpopt.m"
  while (MR_TRUE)
#line 231 "jumpopt.m"
    {
#line 231 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 231 "jumpopt.m"
      {
#line 231 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 231 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
#line 231 "jumpopt.m"
        else
#line 233 "jumpopt.m"
          {
#line 233 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr_9;
#line 233 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "jumpopt.m"
            MR_Word ll_backend__jumpopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;
#line 232 "jumpopt.m"
            MR_String ll_backend__jumpopt___Comment_10;
#line 239 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_14;
#line 239 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Between_15;

#line 232 "jumpopt.m"
            ll_backend__jumpopt__Uinstr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_18_18, (MR_Integer) 0)));
#line 232 "jumpopt.m"
            ll_backend__jumpopt___Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__V_18_18, (MR_Integer) 1)));
#line 235 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 235 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 235 "jumpopt.m"
              {
#line 235 "jumpopt.m"
                ll_backend__jumpopt__Label_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 1)));
#line 236 "jumpopt.m"
                {
#line 236 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_forkproceed_next_3_p_0(ll_backend__jumpopt__Instrs_11, ll_backend__jumpopt__HeadVar__2_2, &ll_backend__jumpopt__Between_15);
                }
#line 235 "jumpopt.m"
              }
#line 239 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 238 "jumpopt.m"
              {
#line 238 "jumpopt.m"
                {
#line 238 "jumpopt.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_14)), ((MR_Box) (ll_backend__jumpopt__Between_15)), ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19);
                }
#line 238 "jumpopt.m"
              }
#line 239 "jumpopt.m"
            else
#line 239 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
#line 242 "jumpopt.m"
            /* direct tailcall eliminated */
#line 242 "jumpopt.m"
            {
#line 242 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs_11;
#line 242 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0__tmp_copy_3 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;

#line 242 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0__tmp_copy_3;
#line 242 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 242 "jumpopt.m"
            }
#line 242 "jumpopt.m"
            continue;
#line 233 "jumpopt.m"
          }
#line 231 "jumpopt.m"
      }
#line 231 "jumpopt.m"
      break;
#line 231 "jumpopt.m"
    }
#line 228 "jumpopt.m"
}

#line 162 "jumpopt.m"
static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__Recjump_2,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
#line 162 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
#line 162 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14)
#line 162 "jumpopt.m"
{
#line 167 "jumpopt.m"
  while (MR_TRUE)
#line 167 "jumpopt.m"
    {
#line 167 "jumpopt.m"
      /* tailcall optimized into a loop */
#line 167 "jumpopt.m"
      {
#line 167 "jumpopt.m"
        MR_bool ll_backend__jumpopt__succeeded;

#line 167 "jumpopt.m"
        if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "jumpopt.m"
          {
#line 168 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 168 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 168 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 168 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
#line 167 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 167 "jumpopt.m"
            *ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 167 "jumpopt.m"
          }
#line 167 "jumpopt.m"
        else
#line 170 "jumpopt.m"
          {
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Instrs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Uinstr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 0)));
#line 170 "jumpopt.m"
            MR_String ll_backend__jumpopt__Comment0_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 1)));
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;
#line 170 "jumpopt.m"
            MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
#line 219 "jumpopt.m"
            MR_Word ll_backend__jumpopt__Label_45;

#line 172 "jumpopt.m"
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 172 "jumpopt.m"
            if (ll_backend__jumpopt__succeeded)
#line 172 "jumpopt.m"
              {
#line 172 "jumpopt.m"
                ll_backend__jumpopt__Label_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 1)));
#line 173 "jumpopt.m"
                {
#line 173 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instrs1_46;
#line 173 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instrs2_51;
#line 176 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instr1_47;
#line 174 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_74_74;
#line 174 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_48_48;
#line 174 "jumpopt.m"
                  MR_String ll_backend__jumpopt__V_50_50;
#line 174 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_49_49;
#line 182 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Instr2_52;
#line 180 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__V_53_53;
#line 187 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between1_54;
#line 192 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between2_55;
#line 197 "jumpopt.m"
                  MR_Word ll_backend__jumpopt__Between3_56;

#line 173 "jumpopt.m"
                  {
#line 173 "jumpopt.m"
                    ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_35, &ll_backend__jumpopt__Instrs1_46);
                  }
#line 174 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_46)) == (MR_mktag((MR_Integer) 1)));
#line 174 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 174 "jumpopt.m"
                    {
#line 174 "jumpopt.m"
                      ll_backend__jumpopt__Instr1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 0)));
#line 174 "jumpopt.m"
                      ll_backend__jumpopt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 1)));
#line 174 "jumpopt.m"
                      ll_backend__jumpopt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 0)));
#line 174 "jumpopt.m"
                      ll_backend__jumpopt__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 1)));
#line 174 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__V_74_74)) == (MR_mktag((MR_Integer) 2)));
#line 174 "jumpopt.m"
                      if (ll_backend__jumpopt__succeeded)
#line 174 "jumpopt.m"
                        ll_backend__jumpopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__V_74_74, (MR_Integer) 0)));
#line 174 "jumpopt.m"
                    }
#line 176 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 175 "jumpopt.m"
                    {
#line 175 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__V_75_75;

#line 175 "jumpopt.m"
                      {
#line 175 "jumpopt.m"
                        ll_backend__jumpopt__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 175 "jumpopt.m"
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__V_75_75, 0) = ((MR_Box) (ll_backend__jumpopt__Instr1_47));
#line 175 "jumpopt.m"
                      }
#line 175 "jumpopt.m"
                      {
#line 175 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__V_75_75)), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
                      }
#line 175 "jumpopt.m"
                    }
#line 176 "jumpopt.m"
                  else
#line 177 "jumpopt.m"
                    {
#line 177 "jumpopt.m"
                      {
#line 177 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
                      }
#line 177 "jumpopt.m"
                    }
#line 179 "jumpopt.m"
                  {
#line 179 "jumpopt.m"
                    ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Instrs2_51);
                  }
#line 180 "jumpopt.m"
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs2_51)) == (MR_mktag((MR_Integer) 1)));
#line 180 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 180 "jumpopt.m"
                    {
#line 180 "jumpopt.m"
                      ll_backend__jumpopt__Instr2_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 0)));
#line 180 "jumpopt.m"
                      ll_backend__jumpopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 1)));
#line 181 "jumpopt.m"
                      {
#line 181 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Instr2_52)), ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79);
                      }
#line 180 "jumpopt.m"
                    }
#line 180 "jumpopt.m"
                  else
#line 182 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 185 "jumpopt.m"
                  {
#line 185 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_proceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between1_54);
                  }
#line 187 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 186 "jumpopt.m"
                    {
#line 186 "jumpopt.m"
                      {
#line 186 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between1_54)), ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80);
                      }
#line 186 "jumpopt.m"
                    }
#line 187 "jumpopt.m"
                  else
#line 187 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 190 "jumpopt.m"
                  {
#line 190 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between2_55);
                  }
#line 192 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 191 "jumpopt.m"
                    {
#line 191 "jumpopt.m"
                      {
#line 191 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between2_55)), ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81);
                      }
#line 191 "jumpopt.m"
                    }
#line 192 "jumpopt.m"
                  else
#line 192 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 195 "jumpopt.m"
                  {
#line 195 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between3_56);
                  }
#line 197 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 196 "jumpopt.m"
                    {
#line 196 "jumpopt.m"
                      {
#line 196 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between3_56)), ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82);
                      }
#line 196 "jumpopt.m"
                    }
#line 197 "jumpopt.m"
                  else
#line 197 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 208 "jumpopt.m"
                  if (((MR_tag((MR_Word) ll_backend__jumpopt__Label_45)) == (MR_mktag((MR_Integer) 1))))
#line 211 "jumpopt.m"
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Recjump_2 == (MR_Integer) 1);
#line 208 "jumpopt.m"
                  else
#line 207 "jumpopt.m"
                    {
#line 207 "jumpopt.m"
                      {
#line 207 "jumpopt.m"
                        ll_backend__jumpopt__succeeded = mercury__string__suffix_2_p_0(ll_backend__jumpopt__Comment0_44, (MR_String) "nofulljump");
                      }
#line 207 "jumpopt.m"
                      ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
#line 207 "jumpopt.m"
                    }
#line 216 "jumpopt.m"
                  if (ll_backend__jumpopt__succeeded)
#line 214 "jumpopt.m"
                    {
#line 214 "jumpopt.m"
                      MR_Word ll_backend__jumpopt__Block_61;

#line 214 "jumpopt.m"
                      {
#line 214 "jumpopt.m"
                        ll_backend__opt_util__find_no_fallthrough_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Block_61);
                      }
#line 215 "jumpopt.m"
                      {
#line 215 "jumpopt.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Block_61)), ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84);
                      }
#line 214 "jumpopt.m"
                    }
#line 216 "jumpopt.m"
                  else
#line 216 "jumpopt.m"
                    ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 173 "jumpopt.m"
                }
#line 172 "jumpopt.m"
              }
#line 172 "jumpopt.m"
            else
#line 220 "jumpopt.m"
              {
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
#line 220 "jumpopt.m"
                ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
#line 220 "jumpopt.m"
              }
#line 222 "jumpopt.m"
            /* direct tailcall eliminated */
#line 222 "jumpopt.m"
            {
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__HeadVar__1__tmp_copy_1 = ll_backend__jumpopt__Instrs0_35;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0__tmp_copy_3 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0__tmp_copy_5 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0__tmp_copy_7 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0__tmp_copy_9 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0__tmp_copy_11 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
#line 222 "jumpopt.m"
              MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0__tmp_copy_13 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;

#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0__tmp_copy_13;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0__tmp_copy_11;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0__tmp_copy_9;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0__tmp_copy_7;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0__tmp_copy_5;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0__tmp_copy_3;
#line 222 "jumpopt.m"
              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__HeadVar__1__tmp_copy_1;
#line 222 "jumpopt.m"
            }
#line 222 "jumpopt.m"
            continue;
#line 170 "jumpopt.m"
          }
#line 167 "jumpopt.m"
      }
#line 167 "jumpopt.m"
      break;
#line 167 "jumpopt.m"
    }
#line 162 "jumpopt.m"
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
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38,
#line 56 "jumpopt.m"
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Instrs_40,
#line 56 "jumpopt.m"
  MR_Word * ll_backend__jumpopt__Mod_22)
#line 56 "jumpopt.m"
{
#line 109 "jumpopt.m"
  {
#line 109 "jumpopt.m"
    MR_bool ll_backend__jumpopt__succeeded;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_72_72 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeCtorInfo_73_73 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__TypeInfo_74_74;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__JumpOptInfo_31;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__RevInstrs_34;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__V_53_53;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58;
#line 109 "jumpopt.m"
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69;

#line 110 "jumpopt.m"
    {
#line 110 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeCtorInfo_73_73, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41);
    }
#line 10252 "ll_backend.jumpopt.c"
    ll_backend__jumpopt__TypeInfo_74_74 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
#line 111 "jumpopt.m"
    {
#line 111 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42);
    }
#line 112 "jumpopt.m"
    {
#line 112 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43);
    }
#line 113 "jumpopt.m"
    {
#line 113 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44);
    }
#line 114 "jumpopt.m"
    {
#line 114 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45);
    }
#line 115 "jumpopt.m"
    {
#line 115 "jumpopt.m"
      mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46);
    }
#line 116 "jumpopt.m"
    {
#line 116 "jumpopt.m"
      ll_backend__jumpopt__jump_opt_build_maps_14_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__Recjump_17, ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47, ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48, ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49, ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52);
    }
#line 118 "jumpopt.m"
    {
#line 118 "jumpopt.m"
      ll_backend__jumpopt__V_53_53 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
    }
#line 118 "jumpopt.m"
    {
#line 118 "jumpopt.m"
      ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__V_53_53, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54);
    }
#line 121 "jumpopt.m"
#line 121 "jumpopt.m"
    switch (ll_backend__jumpopt__PessimizeTailCalls_18) {
#line 121 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 121 "jumpopt.m"
      case (MR_Integer) 0:
#line 120 "jumpopt.m"
        {
#line 120 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
#line 120 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
#line 120 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
#line 120 "jumpopt.m"
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
#line 120 "jumpopt.m"
        }
#line 121 "jumpopt.m"
        break;
#line 121 "jumpopt.m"
      case (MR_Integer) 1:
#line 122 "jumpopt.m"
        {
#line 123 "jumpopt.m"
          {
#line 123 "jumpopt.m"
            ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          }
#line 124 "jumpopt.m"
          {
#line 124 "jumpopt.m"
            ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          }
#line 125 "jumpopt.m"
          {
#line 125 "jumpopt.m"
            ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          }
#line 126 "jumpopt.m"
          {
#line 126 "jumpopt.m"
            ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          }
#line 122 "jumpopt.m"
        }
#line 121 "jumpopt.m"
        break;
#line 121 "jumpopt.m"
    }
#line 128 "jumpopt.m"
    {
#line 128 "jumpopt.m"
      ll_backend__jumpopt__JumpOptInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 0) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 2) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 3) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 4) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 5) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 6) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 7) = ((MR_Box) (ll_backend__jumpopt__LayoutLabels_13));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 8) = ((MR_Box) (ll_backend__jumpopt__Fulljumpopt_16));
#line 128 "jumpopt.m"
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 9) = ((MR_Box) (ll_backend__jumpopt__MayAlterRtti_14));
#line 128 "jumpopt.m"
    }
#line 145 "jumpopt.m"
#line 145 "jumpopt.m"
    switch (ll_backend__jumpopt__CheckedNondetTailCall_19) {
#line 145 "jumpopt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 145 "jumpopt.m"
      case (MR_Integer) 0:
#line 146 "jumpopt.m"
        {
#line 148 "jumpopt.m"
          MR_Word ll_backend__jumpopt__V_36_36;

#line 148 "jumpopt.m"
          {
#line 148 "jumpopt.m"
            ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__JumpOptInfo_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__V_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
          }
#line 146 "jumpopt.m"
          *ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38 = ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37;
#line 146 "jumpopt.m"
        }
#line 145 "jumpopt.m"
        break;
#line 145 "jumpopt.m"
      case (MR_Integer) 1:
#line 132 "jumpopt.m"
        {
#line 132 "jumpopt.m"
          MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo0_32;
#line 132 "jumpopt.m"
          MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo_33;

#line 133 "jumpopt.m"
          {
#line 133 "jumpopt.m"
            ll_backend__jumpopt__CheckedNondetTailCallInfo0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "jumpopt.m"
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_15));
#line 133 "jumpopt.m"
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37));
#line 133 "jumpopt.m"
          }
#line 135 "jumpopt.m"
          {
#line 135 "jumpopt.m"
            ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]), ll_backend__jumpopt__JumpOptInfo_31, ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, &ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
          }
#line 141 "jumpopt.m"
          if ((ll_backend__jumpopt__CheckedNondetTailCallInfo_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "jumpopt.m"
            {
#line 143 "jumpopt.m"
              {
#line 143 "jumpopt.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.optimize_jumps_in_proc\'/12", (MR_String) "lost the next label number");
#line 143 "jumpopt.m"
                return;
              }
#line 142 "jumpopt.m"
            }
#line 141 "jumpopt.m"
          else
#line 139 "jumpopt.m"
            {
#line 139 "jumpopt.m"
              MR_Word ll_backend__jumpopt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Integer) 0)));

#line 139 "jumpopt.m"
              *ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Integer) 1)));
#line 139 "jumpopt.m"
            }
#line 132 "jumpopt.m"
        }
#line 145 "jumpopt.m"
        break;
#line 145 "jumpopt.m"
    }
#line 151 "jumpopt.m"
    {
#line 151 "jumpopt.m"
      mercury__list__reverse_2_p_0(ll_backend__jumpopt__TypeCtorInfo_73_73, ll_backend__jumpopt__RevInstrs_34, &ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69);
    }
#line 152 "jumpopt.m"
    {
#line 152 "jumpopt.m"
      ll_backend__opt_util__filter_out_bad_livevals_2_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69, ll_backend__jumpopt__STATE_VARIABLE_Instrs_40);
    }
#line 153 "jumpopt.m"
    {
#line 153 "jumpopt.m"
      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (*ll_backend__jumpopt__STATE_VARIABLE_Instrs_40)), ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39)));
    }
#line 155 "jumpopt.m"
    if (ll_backend__jumpopt__succeeded)
#line 154 "jumpopt.m"
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 0;
#line 155 "jumpopt.m"
    else
#line 156 "jumpopt.m"
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 1;
#line 109 "jumpopt.m"
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
	MR_register_type_ctor_info(&ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_maybe_check_nondet_tailcalls_0);
	MR_register_type_ctor_info(&ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_new_remain_0);
}

void mercury__ll_backend__jumpopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.jumpopt. */
