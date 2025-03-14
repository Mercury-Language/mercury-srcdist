/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version rotd-2025-03-14
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


// :- module ll_backend.jumpopt.
// :- implementation.

/*
INIT mercury__ll_backend__jumpopt__init
ENDINIT
*/

#include "ll_backend.jumpopt.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
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
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10];

static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10];

static const MR_DuArgLocn ll_backend__jumpopt__ll_backend__jumpopt__field_locns_jump_opt_info_0_0[10];

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1];

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1];

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1];

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0;

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1[2];

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1;

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1[1];

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0[2];

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0[2];

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0[2];

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2];

static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2];

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0;

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1;

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1];

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2];

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2];

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2];

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
  MR_Word InstrMap_6,
  MR_Word STATE_VARIABLE_Component_0_21,
  MR_Word * STATE_VARIABLE_Component_22,
  MR_Word STATE_VARIABLE_Redirect_0_23,
  MR_Word * STATE_VARIABLE_Redirect_24);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word JumpOptInfo_3,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_5,
  MR_Word STATE_VARIABLE_InstrsCord_0_6,
  MR_Word * STATE_VARIABLE_InstrsCord_7);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word PrevInstr_12,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_49,
  MR_Word * NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_36,
  MR_Word * NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_71,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_72,
  MR_Word * NewRemain_15);

static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
  MR_Word Lval_3,
  MR_Word Cond_4);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
  MR_Word InstrMap_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
  MR_Word InstrMap_4,
  MR_Word Label0_5,
  MR_Word * Label_6);

static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
  MR_Word PrevInstr_4,
  MR_Word Instrs0_5,
  MR_Word * Instrs_6);

static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word PrevInstr_12,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_51,
  MR_Word * NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
  MR_Word InstrMap_6,
  MR_Word SrcLabel_7,
  MR_Word * DestLabel_8,
  MR_Word SrcInstr_9,
  MR_Word * DestInstr_10);

static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
  MR_Word InstrMap_7,
  MR_Word LabelsSofar_8,
  MR_Word SrcLabel_9,
  MR_Word * DestLabel_10,
  MR_Word SrcInstr_11,
  MR_Word * DestInstr_12);

static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
  MR_String Comment_3);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ForkMap_0_3,
  MR_Word * STATE_VARIABLE_ForkMap_4);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Recjump_2,
  MR_Word STATE_VARIABLE_InstrMap_0_3,
  MR_Word * STATE_VARIABLE_InstrMap_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_LvalMap_0_7,
  MR_Word * STATE_VARIABLE_LvalMap_8,
  MR_Word STATE_VARIABLE_ProcMap_0_9,
  MR_Word * STATE_VARIABLE_ProcMap_10,
  MR_Word STATE_VARIABLE_SdprocMap_0_11,
  MR_Word * STATE_VARIABLE_SdprocMap_12,
  MR_Word STATE_VARIABLE_SuccMap_0_13,
  MR_Word * STATE_VARIABLE_SuccMap_14);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_3[7][1];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_5[1][8];




static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_2[3]))),
    ((MR_Box) ((MR_String) "discard this frame"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "setup PC on return from tailcall"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[1]))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "setup curfr on return from tailcall"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_1[12]))),
    ((MR_Box) ((MR_String) "shortcircuit"))
  },
  /* row  14 */
  {
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_3[6]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_2[6][3] = {
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
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[4]))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_3[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_1[5]))) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_1[7]))) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_1[9]))) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "r1 = old r1")) },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_1[11]))),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[1])),
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_3[5]))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_fulljumps_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_may_alter_rtti_0)
};

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

static const MR_DuArgLocn ll_backend__jumpopt__ll_backend__jumpopt__field_locns_jump_opt_info_0_0[10] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 = {
  (MR_String) "jump_opt_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_locns_jump_opt_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 };

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 };

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_jump_opt_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "jump_opt_info",
  { ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0 },
  { ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0,

};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0 = {
  (MR_String) "do_not_check_nondet_tailcalls",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1 = {
  (MR_String) "check_nondet_tailcalls",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0 };

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1 };

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0
};

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_maybe_check_nondet_tailcalls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "maybe_check_nondet_tailcalls",
  { ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_maybe_check_nondet_tailcalls_0 },
  { ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_maybe_check_nondet_tailcalls_0,

};

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2] = {
  (MR_String) "new_instructions",
  (MR_String) "remaining_instructions"
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0 = {
  (MR_String) "nr_specified",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1 = {
  (MR_String) "nr_usual_case",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1 };

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1] = { &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0 };

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0[2] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_new_remain_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__jumpopt____Unify____new_remain_0_0_10001)),
  ((MR_Box) (ll_backend__jumpopt____Compare____new_remain_0_0_10001)),
  (MR_String) "ll_backend.jumpopt",
  (MR_String) "new_remain",
  { ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_new_remain_0 },
  { ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_new_remain_0,

};

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[2]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_45 > Var_46);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Integer Var_47 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_48 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_47 < Var_48);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_47 > Var_48);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
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

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_27_27 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_28_28 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_29_29 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_30_30 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_31_31 = (MR_Word) (&ll_backend__jumpopt_scalar_common_2[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_32_32 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                      succeeded = (ArgX10_21 == ArgY10_22);
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

static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
  MR_Word InstrMap_6,
  MR_Word STATE_VARIABLE_Component_0_21,
  MR_Word * STATE_VARIABLE_Component_22,
  MR_Word STATE_VARIABLE_Redirect_0_23,
  MR_Word * STATE_VARIABLE_Redirect_24)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_Component_0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
        *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
        *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
        *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Component_0_21, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
            *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
            *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Label0_9 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Component_0_21, (MR_Integer) 1))));
            MR_Word Label_10;
            MR_Word Instr0_26;
            MR_Box conv0_Instr0_26;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_6, ((MR_Box) (Label0_9)), &conv0_Instr0_26);
            if (succeeded)
            {
              Instr0_26 = ((MR_Word) (conv0_Instr0_26));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word _Instr_27;

              ll_backend__jumpopt__final_dest_loop_6_p_0(InstrMap_6, (MR_Word) ((MR_Unsigned) 0U), Label0_9, &Label_10, Instr0_26, &_Instr_27);
            }
            else
              Label_10 = Label0_9;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Component_22 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Label_10));
            }
            succeeded = ll_backend__llds____Unify____label_0_0(Label_10, Label0_9);
            if (succeeded)
              *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
            else
              *STATE_VARIABLE_Redirect_24 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_Component_22 = STATE_VARIABLE_Component_0_21;
            *STATE_VARIABLE_Redirect_24 = STATE_VARIABLE_Redirect_0_23;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(
  MR_Word LayoutLabels_13,
  MR_Word MayAlterRtti_14,
  MR_Word ProcLabel_15,
  MR_Word Fulljumpopt_16,
  MR_Word Recjump_17,
  MR_Word PessimizeTailCalls_18,
  MR_Word CheckedNondetTailCall_19,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_37,
  MR_Word * STATE_VARIABLE_LabelNumCounter_38,
  MR_Word STATE_VARIABLE_Instrs_0_39,
  MR_Word * STATE_VARIABLE_Instrs_40,
  MR_Word * Mod_22)
{
  MR_bool succeeded;
  MR_Word JumpOptInfo_31;
  MR_Word InstrsCord_34;
  MR_Word STATE_VARIABLE_InstrMap_41_41;
  MR_Word STATE_VARIABLE_BlockMap_42_42;
  MR_Word STATE_VARIABLE_LvalMap_43_43;
  MR_Word STATE_VARIABLE_ProcMap_44_44;
  MR_Word STATE_VARIABLE_SdprocMap_45_45;
  MR_Word STATE_VARIABLE_SuccMap_46_46;
  MR_Word STATE_VARIABLE_InstrMap_47_47;
  MR_Word STATE_VARIABLE_BlockMap_48_48;
  MR_Word STATE_VARIABLE_LvalMap_49_49;
  MR_Word STATE_VARIABLE_ProcMap_50_50;
  MR_Word STATE_VARIABLE_SdprocMap_51_51;
  MR_Word STATE_VARIABLE_SuccMap_52_52;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_ForkMap_54_54;
  MR_Word STATE_VARIABLE_ProcMap_55_55;
  MR_Word STATE_VARIABLE_SdprocMap_56_56;
  MR_Word STATE_VARIABLE_SuccMap_57_57;
  MR_Word STATE_VARIABLE_ForkMap_58_58;
  MR_Word STATE_VARIABLE_Instrs_68_68;

  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), &STATE_VARIABLE_InstrMap_41_41);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), &STATE_VARIABLE_BlockMap_42_42);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[1]), &STATE_VARIABLE_LvalMap_43_43);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), &STATE_VARIABLE_ProcMap_44_44);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), &STATE_VARIABLE_SdprocMap_45_45);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), &STATE_VARIABLE_SuccMap_46_46);
  ll_backend__jumpopt__jump_opt_build_maps_14_p_0(STATE_VARIABLE_Instrs_0_39, Recjump_17, STATE_VARIABLE_InstrMap_41_41, &STATE_VARIABLE_InstrMap_47_47, STATE_VARIABLE_BlockMap_42_42, &STATE_VARIABLE_BlockMap_48_48, STATE_VARIABLE_LvalMap_43_43, &STATE_VARIABLE_LvalMap_49_49, STATE_VARIABLE_ProcMap_44_44, &STATE_VARIABLE_ProcMap_50_50, STATE_VARIABLE_SdprocMap_45_45, &STATE_VARIABLE_SdprocMap_51_51, STATE_VARIABLE_SuccMap_46_46, &STATE_VARIABLE_SuccMap_52_52);
  Var_53 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]));
  ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(STATE_VARIABLE_Instrs_0_39, STATE_VARIABLE_SdprocMap_51_51, Var_53, &STATE_VARIABLE_ForkMap_54_54);
  switch (PessimizeTailCalls_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_ProcMap_55_55 = STATE_VARIABLE_ProcMap_50_50;
        STATE_VARIABLE_SdprocMap_56_56 = STATE_VARIABLE_SdprocMap_51_51;
        STATE_VARIABLE_SuccMap_57_57 = STATE_VARIABLE_SuccMap_52_52;
        STATE_VARIABLE_ForkMap_58_58 = STATE_VARIABLE_ForkMap_54_54;
      }
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ProcMap_55_55 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]));
        STATE_VARIABLE_SdprocMap_56_56 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]));
        STATE_VARIABLE_SuccMap_57_57 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]));
        STATE_VARIABLE_ForkMap_58_58 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]));
      }
      break;
  }
  {
    JumpOptInfo_31 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, JumpOptInfo_31, 0) = ((MR_Box) (STATE_VARIABLE_InstrMap_47_47));
    MR_hl_field(0, JumpOptInfo_31, 1) = ((MR_Box) (STATE_VARIABLE_BlockMap_48_48));
    MR_hl_field(0, JumpOptInfo_31, 2) = ((MR_Box) (STATE_VARIABLE_LvalMap_49_49));
    MR_hl_field(0, JumpOptInfo_31, 3) = ((MR_Box) (STATE_VARIABLE_ProcMap_55_55));
    MR_hl_field(0, JumpOptInfo_31, 4) = ((MR_Box) (STATE_VARIABLE_SdprocMap_56_56));
    MR_hl_field(0, JumpOptInfo_31, 5) = ((MR_Box) (STATE_VARIABLE_ForkMap_58_58));
    MR_hl_field(0, JumpOptInfo_31, 6) = ((MR_Box) (STATE_VARIABLE_SuccMap_57_57));
    MR_hl_field(0, JumpOptInfo_31, 7) = ((MR_Box) (LayoutLabels_13));
    MR_hl_field(0, JumpOptInfo_31, 8) = (MR_Box) (((((MR_Unsigned) (Fulljumpopt_16) << 1)) | (MR_Unsigned) (MayAlterRtti_14)));
  }
  switch (CheckedNondetTailCall_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_66;
        MR_Word Var_36;

        Var_66 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__jumpopt__jump_opt_instr_list_7_p_0(STATE_VARIABLE_Instrs_0_39, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_3[0])), JumpOptInfo_31, (MR_Word) ((MR_Unsigned) 0U), &Var_36, Var_66, &InstrsCord_34);
        *STATE_VARIABLE_LabelNumCounter_38 = STATE_VARIABLE_LabelNumCounter_0_37;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word CheckedNondetTailCallInfo0_32;
        MR_Word CheckedNondetTailCallInfo_33;
        MR_Word Var_60;

        {
          CheckedNondetTailCallInfo0_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CheckedNondetTailCallInfo0_32, 0) = ((MR_Box) (ProcLabel_15));
          MR_hl_field(1, CheckedNondetTailCallInfo0_32, 1) = ((MR_Box) (STATE_VARIABLE_LabelNumCounter_0_37));
        }
        Var_60 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__jumpopt__jump_opt_instr_list_7_p_0(STATE_VARIABLE_Instrs_0_39, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_3[0])), JumpOptInfo_31, CheckedNondetTailCallInfo0_32, &CheckedNondetTailCallInfo_33, Var_60, &InstrsCord_34);
        if ((CheckedNondetTailCallInfo_33 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.jumpopt.optimize_jumps_in_proc\'/12", (MR_String) "lost the next label number");
            return;
          }
        else
          *STATE_VARIABLE_LabelNumCounter_38 = ((MR_Word) ((MR_hl_field(1, CheckedNondetTailCallInfo_33, (MR_Integer) 1))));
      }
      break;
  }
  STATE_VARIABLE_Instrs_68_68 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrsCord_34);
  ll_backend__opt_util__filter_out_bad_livevals_2_p_0(STATE_VARIABLE_Instrs_68_68, STATE_VARIABLE_Instrs_40);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (*STATE_VARIABLE_Instrs_40)), ((MR_Box) (STATE_VARIABLE_Instrs_0_39)));
  if (succeeded)
    *Mod_22 = (MR_Integer) 0;
  else
    *Mod_22 = (MR_Integer) 1;
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word JumpOptInfo_3,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_5,
  MR_Word STATE_VARIABLE_InstrsCord_0_6,
  MR_Word * STATE_VARIABLE_InstrsCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InstrsCord_7 = STATE_VARIABLE_InstrsCord_0_6;
      *STATE_VARIABLE_CheckedNondetTailCallInfo_5 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
    }
    else
    {
      MR_Word Instr0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_22 = ((MR_Word) ((MR_hl_field(0, Instr0_16, (MR_Integer) 0))));
      MR_String Comment0_23 = ((MR_String) ((MR_hl_field(0, Instr0_16, (MR_Integer) 1))));
      MR_Word ReplacementInstrsEmpty_120;
      MR_Word RecurseInstrs_121;
      MR_Word NewPrevInstr_126;
      MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_131_131;
      MR_Word STATE_VARIABLE_InstrsCord_165_165;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InstrsCord_0_6;

      switch (MR_tag((MR_Word) Uinstr0_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
            ReplacementInstrsEmpty_120 = (MR_Integer) 0;
            RecurseInstrs_121 = Instrs0_17;
            mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", (MR_String) "block");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_41 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word Rval0_42 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word Rval_43;
                MR_Word InstrMap_174 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));

                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_174, Rval0_42, &Rval_43);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = ll_backend__llds____Unify____rval_0_0(Rval_43, Rval0_42);
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word ReplacementInstrs_122;
                  MR_Word Var_139;
                  MR_Word Var_140;
                  MR_Word Var_167;
                  MR_String Shorted_170;

                  Shorted_170 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (some shortcircuits)");
                  {
                    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_140, 1) = ((MR_Box) (Lval_41));
                    MR_hl_field(3, Var_140, 2) = ((MR_Box) (Rval_43));
                  }
                  {
                    Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_139, 0) = ((MR_Box) (Var_140));
                    MR_hl_field(0, Var_139, 1) = ((MR_Box) (Shorted_170));
                  }
                  {
                    ReplacementInstrs_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_122, 0) = ((MR_Box) (Var_139));
                    MR_hl_field(1, ReplacementInstrs_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_167 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_122);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_167);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InstrMap_181 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));
                MR_Word Lval_184 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word Rval0_185 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word Rval_186;

                ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_181, Rval0_185, &Rval_186);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = ll_backend__llds____Unify____rval_0_0(Rval_186, Rval0_185);
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word Var_143;
                  MR_Word Var_144;
                  MR_String Shorted_177;
                  MR_Word ReplacementInstrs_377;
                  MR_Word Var_378;

                  Shorted_177 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (some shortcircuits)");
                  {
                    Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_144, 1) = ((MR_Box) (Lval_184));
                    MR_hl_field(3, Var_144, 2) = ((MR_Box) (Rval_186));
                  }
                  {
                    Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_143, 0) = ((MR_Box) (Var_144));
                    MR_hl_field(0, Var_143, 1) = ((MR_Box) (Shorted_177));
                  }
                  {
                    ReplacementInstrs_377 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_377, 0) = ((MR_Box) (Var_143));
                    MR_hl_field(1, ReplacementInstrs_377, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_378 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_377);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_378);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word NewRemain_414;

                ll_backend__jumpopt__jump_opt_llcall_8_p_0(Uinstr0_22, Comment0_23, Instrs0_17, HeadVar__2_2, JumpOptInfo_3, STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &STATE_VARIABLE_CheckedNondetTailCallInfo_131_131, &NewRemain_414);
                if ((NewRemain_414 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word ReplacementInstrs_406 = ((MR_Word) ((MR_hl_field(1, NewRemain_414, (MR_Integer) 0))));
                  MR_Word Var_407;

                  RecurseInstrs_121 = ((MR_Word) ((MR_hl_field(1, NewRemain_414, (MR_Integer) 1))));
                  Var_407 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_406);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_407);
                  if ((ReplacementInstrs_406 == (MR_Word) ((MR_Unsigned) 0U)))
                    ReplacementInstrsEmpty_120 = (MR_Integer) 1;
                  else
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word FrameInfo_44 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word Redoip_45 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word Label0_46;
                MR_Word Var_146;

                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = (Redoip_45 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_146 = ((MR_Word) ((MR_hl_field(1, Redoip_45, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_146)) == (MR_Integer) 1);
                  if (succeeded)
                    Label0_46 = ((MR_Word) ((MR_hl_field(1, Var_146, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Label_47;
                  MR_Word InstrMap_191 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));

                  ll_backend__jumpopt__short_circuit_label_3_p_0(InstrMap_191, Label0_46, &Label_47);
                  succeeded = ll_backend__llds____Unify____label_0_0(Label_47, Label0_46);
                  if (succeeded)
                  {
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                    RecurseInstrs_121 = Instrs0_17;
                    mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                  }
                  else
                  {
                    MR_Word Var_148;
                    MR_Word Var_149;
                    MR_Word Var_150;
                    MR_Word Var_151;
                    MR_String Shorted_187;
                    MR_Word ReplacementInstrs_419;
                    MR_Word Var_420;

                    Shorted_187 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (some shortcircuits)");
                    {
                      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_151, 0) = ((MR_Box) (Label_47));
                    }
                    {
                      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_149, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_149, 1) = ((MR_Box) (FrameInfo_44));
                      MR_hl_field(3, Var_149, 2) = ((MR_Box) (Var_150));
                    }
                    {
                      Var_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_148, 0) = ((MR_Box) (Var_149));
                      MR_hl_field(0, Var_148, 1) = ((MR_Box) (Shorted_187));
                    }
                    {
                      ReplacementInstrs_419 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ReplacementInstrs_419, 0) = ((MR_Box) (Var_148));
                      MR_hl_field(1, ReplacementInstrs_419, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    RecurseInstrs_121 = Instrs0_17;
                    Var_420 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_419);
                    STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_420);
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  }
                }
                else
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
              }
              break;
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
            case (MR_Integer) 26:
            case (MR_Integer) 28:
            case (MR_Integer) 31:
            case (MR_Integer) 34:
              {
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                RecurseInstrs_121 = Instrs0_17;
                mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word NewRemain_346;

                ll_backend__jumpopt__jump_opt_goto_8_p_0(Uinstr0_22, Comment0_23, Instrs0_17, HeadVar__2_2, JumpOptInfo_3, STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &STATE_VARIABLE_CheckedNondetTailCallInfo_131_131, &NewRemain_346);
                if ((NewRemain_346 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word ReplacementInstrs_338 = ((MR_Word) ((MR_hl_field(1, NewRemain_346, (MR_Integer) 0))));
                  MR_Word Var_339;

                  RecurseInstrs_121 = ((MR_Word) ((MR_hl_field(1, NewRemain_346, (MR_Integer) 1))));
                  Var_339 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_338);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_339);
                  if ((ReplacementInstrs_338 == (MR_Word) ((MR_Unsigned) 0U)))
                    ReplacementInstrsEmpty_120 = (MR_Integer) 1;
                  else
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word IndexRval_32 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word MaybeMaxIndex_33 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word MaybeTargets0_34 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 3))));
                MR_Word InstrMap_35 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));
                MR_Word MaybeTargets_36;

                ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(InstrMap_35, MaybeTargets0_34, &MaybeTargets_36);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[4]), ((MR_Box) (MaybeTargets_36)), ((MR_Box) (MaybeTargets0_34)));
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_String Shorted_37;
                  MR_Word Var_134;
                  MR_Word Var_135;
                  MR_Word ReplacementInstrs_299;
                  MR_Word Var_300;

                  Shorted_37 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (some shortcircuits)");
                  {
                    Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Var_135, 1) = ((MR_Box) (IndexRval_32));
                    MR_hl_field(3, Var_135, 2) = ((MR_Box) (MaybeMaxIndex_33));
                    MR_hl_field(3, Var_135, 3) = ((MR_Box) (MaybeTargets_36));
                  }
                  {
                    Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_134, 0) = ((MR_Box) (Var_135));
                    MR_hl_field(0, Var_134, 1) = ((MR_Box) (Shorted_37));
                  }
                  {
                    ReplacementInstrs_299 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_299, 0) = ((MR_Box) (Var_134));
                    MR_hl_field(1, ReplacementInstrs_299, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_300 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_299);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_300);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word NewRemain_359;

                ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(Uinstr0_22, Comment0_23, Instrs0_17, JumpOptInfo_3, STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &STATE_VARIABLE_CheckedNondetTailCallInfo_131_131, &NewRemain_359);
                if ((NewRemain_359 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word ReplacementInstrs_351 = ((MR_Word) ((MR_hl_field(1, NewRemain_359, (MR_Integer) 0))));
                  MR_Word Var_352;

                  RecurseInstrs_121 = ((MR_Word) ((MR_hl_field(1, NewRemain_359, (MR_Integer) 1))));
                  Var_352 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_351);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_352);
                  if ((ReplacementInstrs_351 == (MR_Word) ((MR_Unsigned) 0U)))
                    ReplacementInstrsEmpty_120 = (MR_Integer) 1;
                  else
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word NewRemain_320;

                ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(Uinstr0_22, Comment0_23, Instrs0_17, JumpOptInfo_3, STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &STATE_VARIABLE_CheckedNondetTailCallInfo_131_131, &NewRemain_320);
                if ((NewRemain_320 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word ReplacementInstrs_312 = ((MR_Word) ((MR_hl_field(1, NewRemain_320, (MR_Integer) 0))));
                  MR_Word Var_313;

                  RecurseInstrs_121 = ((MR_Word) ((MR_hl_field(1, NewRemain_320, (MR_Integer) 1))));
                  Var_313 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_312);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_313);
                  if ((ReplacementInstrs_312 == (MR_Word) ((MR_Unsigned) 0U)))
                    ReplacementInstrsEmpty_120 = (MR_Integer) 1;
                  else
                    ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word SyncTerm_61 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word Child0_62 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word Child_63;
                MR_Word InstrMap_200 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));

                ll_backend__jumpopt__short_circuit_label_3_p_0(InstrMap_200, Child0_62, &Child_63);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = ll_backend__llds____Unify____label_0_0(Child_63, Child0_62);
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word Uinstr_64;
                  MR_String Comment_65;
                  MR_Word Instr_66;
                  MR_Word ReplacementInstrs_325;
                  MR_Word Var_326;

                  {
                    Uinstr_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Uinstr_64, 0) = ((MR_Box) ((MR_Unsigned) 29U));
                    MR_hl_field(3, Uinstr_64, 1) = ((MR_Box) (SyncTerm_61));
                    MR_hl_field(3, Uinstr_64, 2) = ((MR_Box) (Child_63));
                  }
                  Comment_65 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (redirect)");
                  {
                    Instr_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Instr_66, 0) = ((MR_Box) (Uinstr_64));
                    MR_hl_field(0, Instr_66, 1) = ((MR_Box) (Comment_65));
                  }
                  {
                    ReplacementInstrs_325 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_325, 0) = ((MR_Box) (Instr_66));
                    MR_hl_field(1, ReplacementInstrs_325, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_326 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_325);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_326);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word InstrMap_207 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));
                MR_Word Label0_208 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word Label_209;
                MR_Word SyncTerm_210 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));

                ll_backend__jumpopt__short_circuit_label_3_p_0(InstrMap_207, Label0_208, &Label_209);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = ll_backend__llds____Unify____label_0_0(Label_209, Label0_208);
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word Uinstr_201;
                  MR_String Comment_202;
                  MR_Word Instr_203;
                  MR_Word ReplacementInstrs_364;
                  MR_Word Var_365;

                  {
                    Uinstr_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Uinstr_201, 0) = ((MR_Box) ((MR_Unsigned) 30U));
                    MR_hl_field(3, Uinstr_201, 1) = ((MR_Box) (SyncTerm_210));
                    MR_hl_field(3, Uinstr_201, 2) = ((MR_Box) (Label_209));
                  }
                  Comment_202 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (redirect)");
                  {
                    Instr_203 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Instr_203, 0) = ((MR_Box) (Uinstr_201));
                    MR_hl_field(0, Instr_203, 1) = ((MR_Box) (Comment_202));
                  }
                  {
                    ReplacementInstrs_364 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_364, 0) = ((MR_Box) (Instr_203));
                    MR_hl_field(1, ReplacementInstrs_364, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_365 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_364);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_365);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 32:
              {
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                RecurseInstrs_121 = Instrs0_17;
                mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
              }
              break;
            case (MR_Integer) 33:
              {
                MR_Word LCRval_70 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 1))));
                MR_Word LCSRval_71 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 2))));
                MR_Word InstrMap_220 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_3, (MR_Integer) 0))));
                MR_Word Child0_221 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, (MR_Integer) 3))));
                MR_Word Child_222;

                ll_backend__jumpopt__short_circuit_label_3_p_0(InstrMap_220, Child0_221, &Child_222);
                STATE_VARIABLE_CheckedNondetTailCallInfo_131_131 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                succeeded = ll_backend__llds____Unify____label_0_0(Child_222, Child0_221);
                if (succeeded)
                {
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                  RecurseInstrs_121 = Instrs0_17;
                  mercury__cord__snoc_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Instr0_16)), STATE_VARIABLE_InstrsCord_0_6, &STATE_VARIABLE_InstrsCord_165_165);
                }
                else
                {
                  MR_Word Uinstr_214;
                  MR_String Comment_215;
                  MR_Word Instr_216;
                  MR_Word ReplacementInstrs_390;
                  MR_Word Var_391;

                  {
                    Uinstr_214 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Uinstr_214, 0) = ((MR_Box) ((MR_Unsigned) 33U));
                    MR_hl_field(3, Uinstr_214, 1) = ((MR_Box) (LCRval_70));
                    MR_hl_field(3, Uinstr_214, 2) = ((MR_Box) (LCSRval_71));
                    MR_hl_field(3, Uinstr_214, 3) = ((MR_Box) (Child_222));
                  }
                  Comment_215 = mercury__string__f_43_43_2_f_0(Comment0_23, (MR_String) " (redirect)");
                  {
                    Instr_216 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Instr_216, 0) = ((MR_Box) (Uinstr_214));
                    MR_hl_field(0, Instr_216, 1) = ((MR_Box) (Comment_215));
                  }
                  {
                    ReplacementInstrs_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReplacementInstrs_390, 0) = ((MR_Box) (Instr_216));
                    MR_hl_field(1, ReplacementInstrs_390, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  RecurseInstrs_121 = Instrs0_17;
                  Var_391 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReplacementInstrs_390);
                  STATE_VARIABLE_InstrsCord_165_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_InstrsCord_0_6, Var_391);
                  ReplacementInstrsEmpty_120 = (MR_Integer) 0;
                }
              }
              break;
          }
          break;
      }
      succeeded = ((MR_tag((MR_Word) Uinstr0_22)) == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (ReplacementInstrsEmpty_120 == (MR_Integer) 1);
      if (succeeded)
        NewPrevInstr_126 = HeadVar__2_2;
      else
        NewPrevInstr_126 = Uinstr0_22;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RecurseInstrs_121;
      next_value_of_HeadVar__2_2 = NewPrevInstr_126;
      next_value_of_STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = STATE_VARIABLE_CheckedNondetTailCallInfo_131_131;
      next_value_of_STATE_VARIABLE_InstrsCord_0_6 = STATE_VARIABLE_InstrsCord_165_165;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = next_value_of_STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
      STATE_VARIABLE_InstrsCord_0_6 = next_value_of_STATE_VARIABLE_InstrsCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word PrevInstr_12,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_49,
  MR_Word * NewRemain_15)
{
  MR_bool succeeded;
  MR_Word TargetAddr_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
  MR_Word TargetLabel_17;

  succeeded = ((MR_tag((MR_Word) TargetAddr_16)) == (MR_Integer) 1);
  if (succeeded)
  {
    TargetLabel_17 = ((MR_Word) ((MR_hl_field(1, TargetAddr_16, (MR_Integer) 0))));
    {
      MR_Word Var_18;

      succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(TargetLabel_17, Instrs0_11, &Var_18);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *NewRemain_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
        }
        *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
      }
      else
      {
        MR_Word IfTargetLabel_21;
        MR_Word Var_50;
        MR_Word Var_22;

        succeeded = ((((MR_tag((MR_Word) PrevInstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PrevInstr_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(3, PrevInstr_12, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 1);
          if (succeeded)
          {
            IfTargetLabel_21 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
            succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(IfTargetLabel_21, Instrs0_11, &Var_22);
          }
        }
        if (succeeded)
        {
          MR_Word Var_51;
          MR_Word NewInstrs_83;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_51, 0) = ((MR_Box) (Uinstr0_9));
            MR_hl_field(0, Var_51, 1) = ((MR_Box) (Comment0_10));
          }
          {
            NewInstrs_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewInstrs_83, 0) = ((MR_Box) (Var_51));
            MR_hl_field(1, NewInstrs_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *NewRemain_15 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_83));
            MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
          }
          *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
        }
        else
        {
          MR_Word Between0_24;
          MR_Word ProcMap_23 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 3))));
          MR_Box conv0_Between0_24;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ProcMap_23, ((MR_Box) (TargetLabel_17)), &conv0_Between0_24);
          if (succeeded)
          {
            Between0_24 = ((MR_Word) (conv0_Between0_24));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Between_25;
            MR_Word NewInstrs_84;

            ll_backend__jumpopt__adjust_livevals_3_p_0(PrevInstr_12, Between0_24, &Between_25);
            NewInstrs_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Between_25, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_1[14])));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *NewRemain_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_84));
              MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
            }
            *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
          }
          else
          {
            MR_Word Between0_101;
            MR_Word SdprocMap_26 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 4))));
            MR_Box conv1_Between0_101;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), SdprocMap_26, ((MR_Box) (TargetLabel_17)), &conv1_Between0_101);
            if (succeeded)
            {
              Between0_101 = ((MR_Word) (conv1_Between0_101));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NewInstrs_85;
              MR_Word Between_86;

              ll_backend__jumpopt__adjust_livevals_3_p_0(PrevInstr_12, Between0_101, &Between_86);
              NewInstrs_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Between_86, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_1[14])));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *NewRemain_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_85));
                MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
              }
              *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
            }
            else
            {
              MR_Word BetweenIncl0_28;
              MR_Word SuccMap_27 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 6))));
              MR_Box conv2_BetweenIncl0_28;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), SuccMap_27, ((MR_Box) (TargetLabel_17)), &conv2_BetweenIncl0_28);
              if (succeeded)
              {
                BetweenIncl0_28 = ((MR_Word) (conv2_BetweenIncl0_28));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NewInstrs_87;

                ll_backend__jumpopt__adjust_livevals_3_p_0(PrevInstr_12, BetweenIncl0_28, &NewInstrs_87);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *NewRemain_15 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_87));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                }
                *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
              }
              else
              {
                MR_Word DestLabel_31;
                MR_Word BlockMap_33;
                MR_Word Block_34;
                MR_Word TypeCtorInfo_192_192;
                MR_Word TypeCtorInfo_193_193;
                MR_Word TypeInfo_194_194;
                MR_Word InstrMap_29 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
                MR_Word TargetInstr_30;
                MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_66;
                MR_Box conv3_TargetInstr_30;
                MR_Word _DestInstr_32;
                MR_Box conv4_Block_34;

                succeeded = (Var_65 == (MR_Integer) 0);
                if (succeeded)
                {
                  TypeCtorInfo_192_192 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
                  TypeCtorInfo_193_193 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_192_192, TypeCtorInfo_193_193, InstrMap_29, ((MR_Box) (TargetLabel_17)), &conv3_TargetInstr_30);
                  if (succeeded)
                  {
                    TargetInstr_30 = ((MR_Word) (conv3_TargetInstr_30));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    ll_backend__jumpopt__final_dest_5_p_0(InstrMap_29, TargetLabel_17, &DestLabel_31, TargetInstr_30, &_DestInstr_32);
                    BlockMap_33 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 1))));
                    TypeInfo_194_194 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
                    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_192_192, TypeInfo_194_194, BlockMap_33, ((MR_Box) (DestLabel_31)), &conv4_Block_34);
                    if (succeeded)
                    {
                      Block_34 = ((MR_Word) (conv4_Block_34));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      Var_66 = ll_backend__jumpopt__block_may_be_duplicated_1_f_0(Block_34);
                      succeeded = (Var_66 == (MR_Integer) 1);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word FilteredBlock_35;
                  MR_Word AdjustedBlock_36;
                  MR_Word CrippledBlockMap_37;
                  MR_Word CrippledJumpOptInfo_38;
                  MR_Word NewInstrsCord_39;
                  MR_Word Var_69;
                  MR_Word Var_71;
                  MR_Word Var_156;
                  MR_Word Var_158;
                  MR_Word Var_159;
                  MR_Word Var_160;
                  MR_Word Var_161;
                  MR_Word Var_162;
                  MR_Word Var_163;
                  MR_Unsigned packed_word_0;

                  ll_backend__opt_util__filter_out_labels_2_p_0(Block_34, &FilteredBlock_35);
                  ll_backend__jumpopt__adjust_livevals_3_p_0(PrevInstr_12, FilteredBlock_35, &AdjustedBlock_36);
                  mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (DestLabel_31)), BlockMap_33, &CrippledBlockMap_37);
                  Var_156 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
                  Var_158 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 2))));
                  Var_159 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 3))));
                  Var_160 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 4))));
                  Var_161 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 5))));
                  Var_162 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 6))));
                  Var_163 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 7))));
                  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 8)));
                  {
                    CrippledJumpOptInfo_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CrippledJumpOptInfo_38, 0) = ((MR_Box) (Var_156));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 1) = ((MR_Box) (CrippledBlockMap_37));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 2) = ((MR_Box) (Var_158));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 3) = ((MR_Box) (Var_159));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 4) = ((MR_Box) (Var_160));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 5) = ((MR_Box) (Var_161));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 6) = ((MR_Box) (Var_162));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 7) = ((MR_Box) (Var_163));
                    MR_hl_field(0, CrippledJumpOptInfo_38, 8) = (MR_Box) (packed_word_0);
                  }
                  Var_69 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__jumpopt__jump_opt_instr_list_7_p_0(AdjustedBlock_36, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_3[0])), CrippledJumpOptInfo_38, STATE_VARIABLE_CheckedNondetTailCallInfo_0_48, STATE_VARIABLE_CheckedNondetTailCallInfo_49, Var_69, &NewInstrsCord_39);
                  Var_71 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NewInstrsCord_39);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *NewRemain_15 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                  }
                }
                else
                {
                  MR_Word InstrMap_91 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
                  MR_Word TargetInstr_92;
                  MR_Box conv5_TargetInstr_92;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_91, ((MR_Box) (TargetLabel_17)), &conv5_TargetInstr_92);
                  if (succeeded)
                  {
                    TargetInstr_92 = ((MR_Word) (conv5_TargetInstr_92));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word DestInstr_40;
                    MR_Word UdestInstr_41;
                    MR_String Shorted_43;
                    MR_Word Canfallthrough_44;
                    MR_Word NewInstrs0_45;
                    MR_Word LvalMap_46;
                    MR_Word NewInstrs_88;
                    MR_Word DestLabel_89;
                    MR_Word Lvalinstr_47;
                    MR_Word Var_81;
                    MR_Box conv6_Var_81;

                    ll_backend__jumpopt__final_dest_5_p_0(InstrMap_91, TargetLabel_17, &DestLabel_89, TargetInstr_92, &DestInstr_40);
                    UdestInstr_41 = ((MR_Word) ((MR_hl_field(0, DestInstr_40, (MR_Integer) 0))));
                    Shorted_43 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", Comment0_10);
                    Canfallthrough_44 = ll_backend__opt_util__can_instr_fall_through_1_f_0(UdestInstr_41);
                    switch (Canfallthrough_44) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_73;

                          {
                            Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_73, 0) = ((MR_Box) (UdestInstr_41));
                            MR_hl_field(0, Var_73, 1) = ((MR_Box) (Shorted_43));
                          }
                          {
                            NewInstrs0_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, NewInstrs0_45, 0) = ((MR_Box) (Var_73));
                            MR_hl_field(1, NewInstrs0_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          succeeded = ll_backend__llds____Unify____label_0_0(TargetLabel_17, DestLabel_89);
                          if (succeeded)
                          {
                            MR_Word Var_75;

                            {
                              Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_75, 0) = ((MR_Box) (Uinstr0_9));
                              MR_hl_field(0, Var_75, 1) = ((MR_Box) (Comment0_10));
                            }
                            {
                              NewInstrs0_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewInstrs0_45, 0) = ((MR_Box) (Var_75));
                              MR_hl_field(1, NewInstrs0_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          else
                          {
                            MR_Word Var_77;
                            MR_Word Var_78;
                            MR_Word Var_79;

                            {
                              Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_79, 0) = ((MR_Box) (DestLabel_89));
                            }
                            {
                              Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
                            }
                            {
                              Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
                              MR_hl_field(0, Var_77, 1) = ((MR_Box) (Shorted_43));
                            }
                            {
                              NewInstrs0_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewInstrs0_45, 0) = ((MR_Box) (Var_77));
                              MR_hl_field(1, NewInstrs0_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                        }
                        break;
                    }
                    LvalMap_46 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 2))));
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[1]), LvalMap_46, ((MR_Box) (DestLabel_89)), &conv6_Var_81);
                    if (succeeded)
                    {
                      Var_81 = ((MR_Word) (conv6_Var_81));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        Lvalinstr_47 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 0))));
                    }
                    if (succeeded)
                    {
                      MR_Word Var_82;

                      {
                        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_82, 0) = ((MR_Box) (Lvalinstr_47));
                        MR_hl_field(1, Var_82, 1) = ((MR_Box) (NewInstrs0_45));
                      }
                      ll_backend__jumpopt__adjust_livevals_3_p_0(PrevInstr_12, Var_82, &NewInstrs_88);
                    }
                    else
                      NewInstrs_88 = NewInstrs0_45;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *NewRemain_15 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_88));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                    }
                  }
                  else
                    *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CheckedNondetTailCallInfo_49 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
  }
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Component_22;
  MR_Word conv0_STATE_VARIABLE_Redirect_24;

  ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Component_22, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Redirect_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Component_22));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Redirect_24));
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_36,
  MR_Word * NewRemain_15)
{
  MR_bool succeeded;
  MR_Word Decls_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
  MR_Word Components0_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
  MR_Word MayCallMercury_18 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word MaybeFixNoLayout_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 4))));
  MR_Word MaybeFixLayout_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 5))));
  MR_Word MaybeFixOnlyLayout_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 6))));
  MR_Word MaybeNoFix0_22 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 7))));
  MR_Word MaybeDefLabel_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 8))));
  MR_Word InstrMap_27 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
  MR_Word Components_28;
  MR_Word MaybeNoFix_31;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_Redirect_39_39;
  MR_Word STATE_VARIABLE_Redirect_40_40;
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 9)));
  MR_Box conv2_STATE_VARIABLE_Redirect_39_39;

  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_5[0]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (InstrMap_27));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_37, Components0_17, &Components_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_Redirect_39_39);
  STATE_VARIABLE_Redirect_39_39 = ((MR_Word) (conv2_STATE_VARIABLE_Redirect_39_39));
  if ((MaybeNoFix0_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeNoFix_31 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Redirect_40_40 = STATE_VARIABLE_Redirect_39_39;
  }
  else
  {
    MR_Word NoFix_29 = ((MR_Word) ((MR_hl_field(1, MaybeNoFix0_22, (MR_Integer) 0))));
    MR_Word NoFixDest_30;
    MR_Word Instr0_59;
    MR_Box conv3_Instr0_59;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_27, ((MR_Box) (NoFix_29)), &conv3_Instr0_59);
    if (succeeded)
    {
      Instr0_59 = ((MR_Word) (conv3_Instr0_59));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word _Instr_60;

      ll_backend__jumpopt__final_dest_loop_6_p_0(InstrMap_27, (MR_Word) ((MR_Unsigned) 0U), NoFix_29, &NoFixDest_30, Instr0_59, &_Instr_60);
    }
    else
      NoFixDest_30 = NoFix_29;
    {
      MaybeNoFix_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeNoFix_31, 0) = ((MR_Box) (NoFixDest_30));
    }
    STATE_VARIABLE_Redirect_40_40 = (MR_Integer) 1;
  }
  switch (STATE_VARIABLE_Redirect_40_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Comment_32;
        MR_Word Uinstr_33;
        MR_Word Instr_34;
        MR_Word Var_42;

        Comment_32 = mercury__string__f_43_43_2_f_0(Comment0_10, (MR_String) " (some redirects)");
        {
          Uinstr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Uinstr_33, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(3, Uinstr_33, 1) = ((MR_Box) (Decls_16));
          MR_hl_field(3, Uinstr_33, 2) = ((MR_Box) (Components_28));
          MR_hl_field(3, Uinstr_33, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_18));
          MR_hl_field(3, Uinstr_33, 4) = ((MR_Box) (MaybeFixNoLayout_19));
          MR_hl_field(3, Uinstr_33, 5) = ((MR_Box) (MaybeFixLayout_20));
          MR_hl_field(3, Uinstr_33, 6) = ((MR_Box) (MaybeFixOnlyLayout_21));
          MR_hl_field(3, Uinstr_33, 7) = ((MR_Box) (MaybeNoFix_31));
          MR_hl_field(3, Uinstr_33, 8) = ((MR_Box) (MaybeDefLabel_23));
          MR_hl_field(3, Uinstr_33, 9) = (MR_Box) (packed_word_1);
        }
        {
          Instr_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Instr_34, 0) = ((MR_Box) (Uinstr_33));
          MR_hl_field(0, Instr_34, 1) = ((MR_Box) (Comment_32));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Instr_34));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *NewRemain_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
        }
      }
      break;
  }
  *STATE_VARIABLE_CheckedNondetTailCallInfo_36 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_35;
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_71,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_72,
  MR_Word * NewRemain_15)
{
  MR_bool succeeded;
  MR_Word Cond_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
  MR_Word TargetAddr_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
  MR_Word TargetLabel_18;

  succeeded = ((MR_tag((MR_Word) TargetAddr_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    TargetLabel_18 = ((MR_Word) ((MR_hl_field(1, TargetAddr_17, (MR_Integer) 0))));
    {
      MR_Word InstrMap_19 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
      MR_Word BlockMap_20 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 1))));
      MR_Word LayoutLabels_26 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 7))));
      MR_Word Fulljumpopt_27 = ((((MR_Unsigned) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
      MR_Word AfterGoto_36;
      MR_Word GotoTarget_38;
      MR_String GotoComment_39;
      MR_Word Instrs1_29;
      MR_Word Instr1_30;
      MR_Word Instrs2_31;
      MR_Word GotoInstr_35;
      MR_Word HaveLabel_37;
      MR_Word AfterGotoComments_41;
      MR_Word LabelInstr_42;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_133;
      MR_Word ElimLabel_32;
      MR_Word Var_73;

      ll_backend__opt_util__skip_comments_2_p_0(Instrs0_11, &Instrs1_29);
      succeeded = (Instrs1_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr1_30 = ((MR_Word) ((MR_hl_field(1, Instrs1_29, (MR_Integer) 0))));
        Instrs2_31 = ((MR_Word) ((MR_hl_field(1, Instrs1_29, (MR_Integer) 1))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, Instr1_30, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          ElimLabel_32 = ((MR_Word) ((MR_hl_field(3, Var_73, (MR_Integer) 1))));
          {
            MR_Word Instrs3_34;

            succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (ElimLabel_32)), LayoutLabels_26);
            succeeded = !(succeeded);
            if (succeeded)
            {
              ll_backend__opt_util__skip_comments_2_p_0(Instrs2_31, &Instrs3_34);
              succeeded = (Instrs3_34 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                GotoInstr_35 = ((MR_Word) ((MR_hl_field(1, Instrs3_34, (MR_Integer) 0))));
                AfterGoto_36 = ((MR_Word) ((MR_hl_field(1, Instrs3_34, (MR_Integer) 1))));
                HaveLabel_37 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          GotoInstr_35 = Instr1_30;
          AfterGoto_36 = Instrs2_31;
          HaveLabel_37 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_74 = ((MR_Word) ((MR_hl_field(0, GotoInstr_35, (MR_Integer) 0))));
          GotoComment_39 = ((MR_String) ((MR_hl_field(0, GotoInstr_35, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_74, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            GotoTarget_38 = ((MR_Word) ((MR_hl_field(3, Var_74, (MR_Integer) 1))));
            succeeded = (HaveLabel_37 == (MR_Integer) 0);
            if (!(succeeded))
              succeeded = ((MR_tag((MR_Word) GotoTarget_38)) == (MR_Integer) 1);
            if (succeeded)
            {
              ll_backend__opt_util__skip_comments_2_p_0(AfterGoto_36, &AfterGotoComments_41);
              succeeded = (AfterGotoComments_41 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LabelInstr_42 = ((MR_Word) ((MR_hl_field(1, AfterGotoComments_41, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(0, LabelInstr_42, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Var_133 = ((MR_Word) ((MR_hl_field(3, Var_75, (MR_Integer) 1))));
                  succeeded = ll_backend__llds____Unify____label_0_0(TargetLabel_18, Var_133);
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word NotCond_45;
        MR_Word NewInstr_46;
        MR_Word RemainInstrs_48;
        MR_Word Var_76;

        ll_backend__code_util__negate_rval_2_p_0(Cond_16, &NotCond_45);
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (NotCond_45));
          MR_hl_field(3, Var_76, 2) = ((MR_Box) (GotoTarget_38));
        }
        {
          NewInstr_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewInstr_46, 0) = ((MR_Box) (Var_76));
          MR_hl_field(0, NewInstr_46, 1) = ((MR_Box) (GotoComment_39));
        }
        {
          RemainInstrs_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RemainInstrs_48, 0) = ((MR_Box) (NewInstr_46));
          MR_hl_field(1, RemainInstrs_48, 1) = ((MR_Box) (AfterGoto_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *NewRemain_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 1) = ((MR_Box) (RemainInstrs_48));
        }
      }
      else
      {
        MR_Word GotoAddr_50;
        MR_Word AfterGoto_123;
        MR_String GotoComment_124;
        MR_Word TypeCtorInfo_126_126;
        MR_Word TypeInfo_127_127;
        MR_Word Var_77;
        MR_Word Instrs1_110;
        MR_Word GotoInstr_111;
        MR_Box conv0__TargetBlock_49;
        MR_Word GotoLabel_51;
        MR_Box conv1_Var_52;

        succeeded = (Fulljumpopt_27 == (MR_Integer) 0);
        if (succeeded)
        {
          TypeCtorInfo_126_126 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
          TypeInfo_127_127 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_126_126, TypeInfo_127_127, BlockMap_20, ((MR_Box) (TargetLabel_18)), &conv0__TargetBlock_49);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            ll_backend__opt_util__skip_comments_2_p_0(Instrs0_11, &Instrs1_110);
            succeeded = (Instrs1_110 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GotoInstr_111 = ((MR_Word) ((MR_hl_field(1, Instrs1_110, (MR_Integer) 0))));
              AfterGoto_123 = ((MR_Word) ((MR_hl_field(1, Instrs1_110, (MR_Integer) 1))));
              Var_77 = ((MR_Word) ((MR_hl_field(0, GotoInstr_111, (MR_Integer) 0))));
              GotoComment_124 = ((MR_String) ((MR_hl_field(0, GotoInstr_111, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_77)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_77, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                GotoAddr_50 = ((MR_Word) ((MR_hl_field(3, Var_77, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) GotoAddr_50)) == (MR_Integer) 1);
                if (succeeded)
                {
                  GotoLabel_51 = ((MR_Word) ((MR_hl_field(1, GotoAddr_50, (MR_Integer) 0))));
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_126_126, TypeInfo_127_127, BlockMap_20, ((MR_Box) (GotoLabel_51)), &conv1_Var_52);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                succeeded = !(succeeded);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word NewIfInstr_53;
          MR_String NewGotoComment_54;
          MR_Word NewGotoInstr_55;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word NotCond_112;
          MR_Word NewInstrs_113;
          MR_Word RemainInstrs_114;

          ll_backend__code_util__negate_rval_2_p_0(Cond_16, &NotCond_112);
          {
            Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_78, 1) = ((MR_Box) (NotCond_112));
            MR_hl_field(3, Var_78, 2) = ((MR_Box) (GotoAddr_50));
          }
          {
            NewIfInstr_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewIfInstr_53, 0) = ((MR_Box) (Var_78));
            MR_hl_field(0, NewIfInstr_53, 1) = ((MR_Box) (GotoComment_124));
          }
          {
            NewInstrs_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewInstrs_113, 0) = ((MR_Box) (NewIfInstr_53));
            MR_hl_field(1, NewInstrs_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          NewGotoComment_54 = mercury__string__f_43_43_2_f_0(Comment0_10, (MR_String) " (switched)");
          {
            Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_81, 1) = ((MR_Box) (TargetAddr_17));
          }
          {
            NewGotoInstr_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewGotoInstr_55, 0) = ((MR_Box) (Var_81));
            MR_hl_field(0, NewGotoInstr_55, 1) = ((MR_Box) (NewGotoComment_54));
          }
          {
            RemainInstrs_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RemainInstrs_114, 0) = ((MR_Box) (NewGotoInstr_55));
            MR_hl_field(1, RemainInstrs_114, 1) = ((MR_Box) (AfterGoto_123));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *NewRemain_15 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_113));
            MR_hl_field(1, base, 1) = ((MR_Box) (RemainInstrs_114));
          }
        }
        else
        {
          MR_Word TargetInstr_56;
          MR_Box conv2_TargetInstr_56;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_19, ((MR_Box) (TargetLabel_18)), &conv2_TargetInstr_56);
          if (succeeded)
          {
            TargetInstr_56 = ((MR_Word) (conv2_TargetInstr_56));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word DestLabel_57;
            MR_Word _DestInstr_58;
            MR_Word Between_63;
            MR_Word NewCond_65;
            MR_Word TypeCtorInfo_130_130;
            MR_Word TypeInfo_131_131;
            MR_Word TypeInfo_136_136;
            MR_Word BetweenFT_59;
            MR_Word Block_60;
            MR_Word BetweenBR_61;
            MR_Word SuccessFT_62;
            MR_Word SuccessBR_64;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_134;
            MR_Box conv3_Block_60;
            MR_Word Var_85;

            ll_backend__jumpopt__final_dest_5_p_0(InstrMap_19, TargetLabel_18, &DestLabel_57, TargetInstr_56, &_DestInstr_58);
            succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(Instrs0_11, &BetweenFT_59);
            if (succeeded)
            {
              TypeCtorInfo_130_130 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
              TypeInfo_131_131 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_130_130, TypeInfo_131_131, BlockMap_20, ((MR_Box) (DestLabel_57)), &conv3_Block_60);
              if (succeeded)
              {
                Block_60 = ((MR_Word) (conv3_Block_60));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(Block_60, &BetweenBR_61);
                if (succeeded)
                {
                  ll_backend__opt_util__filter_out_r1_3_p_0(BetweenFT_59, &Var_83, &Between_63);
                  succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    SuccessFT_62 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 0))));
                    ll_backend__opt_util__filter_out_r1_3_p_0(BetweenBR_61, &Var_84, &Var_134);
                    TypeInfo_136_136 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_136_136, ((MR_Box) (Between_63)), ((MR_Box) (Var_134)));
                    if (succeeded)
                    {
                      succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        SuccessBR_64 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
                        if ((SuccessFT_62 == (MR_Word) ((MR_Unsigned) 4U)))
                        {
                          succeeded = (SuccessBR_64 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            NewCond_65 = Cond_16;
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        if ((SuccessFT_62 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          succeeded = (SuccessBR_64 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            ll_backend__code_util__negate_rval_2_p_0(Cond_16, &NewCond_65);
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          Var_85 = (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_1[15]));
                          succeeded = ll_backend__jumpopt__needs_workaround_2_p_0(Var_85, NewCond_65);
                          succeeded = !(succeeded);
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word NewAssign_66;
              MR_Word LiveInstrs0_69;
              MR_Word Var_102;
              MR_Word NewInstrs_115;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Integer Var_90;
              MR_Word _DeadInstrs_68;

              succeeded = ((MR_tag((MR_Word) NewCond_65)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_88 = ((MR_Word) ((MR_hl_field(0, NewCond_65, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_89 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 0))) & (MR_Integer) 1);
                  Var_90 = ((MR_Integer) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
                  succeeded = (Var_89 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (Var_90 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                NewAssign_66 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[16]);
              else
              {
                MR_Word Var_94;

                {
                  Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_94, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_1[15])));
                  MR_hl_field(3, Var_94, 2) = ((MR_Box) (NewCond_65));
                }
                {
                  NewAssign_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewAssign_66, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(0, NewAssign_66, 1) = ((MR_Box) ((MR_String) "shortcircuit bool computation"));
                }
              }
              {
                Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_102, 0) = ((MR_Box) (NewAssign_66));
                MR_hl_field(1, Var_102, 1) = ((MR_Box) (Between_63));
              }
              NewInstrs_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_102, (MR_Word) (MR_mkword(1, &ll_backend__jumpopt_scalar_common_1[14])));
              ll_backend__opt_util__skip_to_next_label_3_p_0(Instrs0_11, &_DeadInstrs_68, &LiveInstrs0_69);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *NewRemain_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_115));
                MR_hl_field(1, base, 1) = ((MR_Box) (LiveInstrs0_69));
              }
            }
            else
            {
              succeeded = ll_backend__llds____Unify____label_0_0(TargetLabel_18, DestLabel_57);
              succeeded = !(succeeded);
              if (succeeded)
              {
                MR_String Shorted_70;
                MR_Word Var_106;
                MR_Word Var_107;
                MR_Word Var_108;
                MR_Word NewInstrs_116;

                Shorted_70 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", Comment0_10);
                {
                  Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_108, 0) = ((MR_Box) (DestLabel_57));
                }
                {
                  Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_107, 1) = ((MR_Box) (Cond_16));
                  MR_hl_field(3, Var_107, 2) = ((MR_Box) (Var_108));
                }
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(0, Var_106, 1) = ((MR_Box) (Shorted_70));
                }
                {
                  NewInstrs_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewInstrs_116, 0) = ((MR_Box) (Var_106));
                  MR_hl_field(1, NewInstrs_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *NewRemain_15 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_116));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                }
              }
              else
                *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          else
            *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
  }
  else
    *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
  *STATE_VARIABLE_CheckedNondetTailCallInfo_72 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_71;
}

static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
  MR_Word Lval_3,
  MR_Word Cond_4)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
  {
    MR_Word Op_5 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 1))));
    MR_Word Left_6 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 2))));
    MR_Word Right_7 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 3))));
    MR_Word CmpOp_9;

    succeeded = ((((MR_tag((MR_Word) Op_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      CmpOp_9 = ((MR_Unsigned) ((MR_hl_field(3, Op_5, (MR_Integer) 1))) & (MR_Integer) 7);
      switch (CmpOp_9) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
        switch (MR_tag((MR_Word) Left_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Left_6, (MR_Integer) 0))));

              succeeded = ll_backend__llds____Unify____lval_0_0(Lval_3, Var_32);
              if (succeeded)
              {
                if (((MR_tag((MR_Word) Right_7)) == (MR_Integer) 2))
                {
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, Right_7, (MR_Integer) 0))));
                  uint8_t Var_24 = (uint8_t) (Var_23);
                  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Right_7, (MR_Integer) 1))));
                  MR_Word Var_26;
                  MR_Word Var_27;
                  MR_Word Var_28;
                  MR_Integer Var_29;

                  succeeded = (Var_24 == UINT8_C(0));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      Var_26 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 1))));
                      Var_27 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 2))));
                      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 8U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_28 = ((MR_Word) ((MR_hl_field(3, Var_27, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_29 = ((MR_Integer) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
                            succeeded = (Var_29 == (MR_Integer) 0);
                          }
                        }
                      }
                    }
                  }
                }
                else
                if (((((MR_tag((MR_Word) Right_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Right_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(3, Right_7, (MR_Integer) 1))));
                  MR_Integer Var_22;

                  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_22 = ((MR_Integer) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
                    succeeded = (Var_22 == (MR_Integer) 0);
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_14;
              uint8_t Var_15;
              MR_Word Var_16;
              MR_Word Var_17;
              MR_Word Var_18;
              MR_Word Var_19;
              MR_Integer Var_20;
              MR_Word Var_33;

              succeeded = ((MR_tag((MR_Word) Right_7)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_33 = ((MR_Word) ((MR_hl_field(0, Right_7, (MR_Integer) 0))));
                succeeded = ll_backend__llds____Unify____lval_0_0(Lval_3, Var_33);
                if (succeeded)
                {
                  Var_14 = ((MR_Word) ((MR_hl_field(2, Left_6, (MR_Integer) 0))));
                  Var_16 = ((MR_Word) ((MR_hl_field(2, Left_6, (MR_Integer) 1))));
                  Var_15 = (uint8_t) (Var_14);
                  succeeded = (Var_15 == UINT8_C(0));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
                      Var_18 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 2))));
                      succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 8U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_19 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_20 = ((MR_Integer) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
                            succeeded = (Var_20 == (MR_Integer) 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Left_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_12;
                  MR_Integer Var_13;
                  MR_Word Var_31;

                  succeeded = ((MR_tag((MR_Word) Right_7)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(0, Right_7, (MR_Integer) 0))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(Lval_3, Var_31);
                    if (succeeded)
                    {
                      Var_12 = ((MR_Word) ((MR_hl_field(3, Left_6, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_13 = ((MR_Integer) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
                        succeeded = (Var_13 == (MR_Integer) 0);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
    }
  }
  else
  if (((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 2))));
    MR_Word Var_30;

    succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 16U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
        succeeded = ll_backend__llds____Unify____lval_0_0(Lval_3, Var_30);
      }
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
  MR_Word InstrMap_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_7 = ((MR_Word) ((MR_hl_field(0, Rval0_5, (MR_Integer) 0))));
        MR_Word Lval_8;

        switch (MR_tag((MR_Word) Lval0_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            Lval_8 = Lval0_7;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Lval0_7, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 11:
                Lval_8 = Lval0_7;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Rval0_61 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_62;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_61, &Rval_62);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_62));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Rval0_79 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_80;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_79, &Rval_80);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_80));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Rval0_75 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_76;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_75, &Rval_76);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_76));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Rval0_77 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_78;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_77, &Rval_78);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_78));
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Rval0_81 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_82;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_81, &Rval_82);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_82));
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word Tag_63 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Field0_64 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 3))));
                  MR_Word Field_65;
                  MR_Word Rval0_83 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 2))));
                  MR_Word Rval_84;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_83, &Rval_84);
                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Field0_64, &Field_65);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Tag_63));
                    MR_hl_field(3, Lval_8, 2) = ((MR_Box) (Rval_84));
                    MR_hl_field(3, Lval_8, 3) = ((MR_Box) (Field_65));
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word Rval0_85 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
                  MR_Word Rval_86;

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, Rval0_85, &Rval_86);
                  {
                    Lval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_8, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(3, Lval_8, 1) = ((MR_Box) (Rval_86));
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_lval\'/3", (MR_String) "lvar");
                  return;
                }
                break;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lval_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_rval\'/3", (MR_String) "var");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_10 = ((MR_Word) ((MR_hl_field(2, Rval0_5, (MR_Integer) 0))));
        MR_Word SubRval0_11 = ((MR_Word) ((MR_hl_field(2, Rval0_5, (MR_Integer) 1))));
        MR_Word SubRval_12;

        ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, SubRval0_11, &SubRval_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_10));
          MR_hl_field(2, base, 1) = ((MR_Box) (SubRval_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
          *Rval_6 = Rval0_5;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const0_13 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 1))));
            MR_Word Const_14;

            switch (MR_tag((MR_Word) Const0_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Const_14 = Const0_13;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Const0_13, (MR_Integer) 0))))) {
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
                      MR_Word CodeAddr0_48 = ((MR_Word) ((MR_hl_field(3, Const0_13, (MR_Integer) 1))));
                      MR_Word CodeAddr_51;
                      MR_Word Label0_49;

                      succeeded = ((MR_tag((MR_Word) CodeAddr0_48)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Label0_49 = ((MR_Word) ((MR_hl_field(1, CodeAddr0_48, (MR_Integer) 0))));
                        {
                          MR_Word Label_50;
                          MR_Word Instr0_52;
                          MR_Box conv0_Instr0_52;

                          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_4, ((MR_Box) (Label0_49)), &conv0_Instr0_52);
                          if (succeeded)
                          {
                            Instr0_52 = ((MR_Word) (conv0_Instr0_52));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_Word _Instr_53;

                            ll_backend__jumpopt__final_dest_loop_6_p_0(InstrMap_4, (MR_Word) ((MR_Unsigned) 0U), Label0_49, &Label_50, Instr0_52, &_Instr_53);
                          }
                          else
                            Label_50 = Label0_49;
                          {
                            CodeAddr_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, CodeAddr_51, 0) = ((MR_Box) (Label_50));
                          }
                        }
                      }
                      else
                        CodeAddr_51 = CodeAddr0_48;
                      {
                        Const_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Const_14, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(3, Const_14, 1) = ((MR_Box) (CodeAddr_51));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Const_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 1))));
            MR_Word SubRval0_26 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 2))));
            MR_Word SubRval_27;

            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, SubRval0_26, &SubRval_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_15));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_27));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnOp_16 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 1))));
            MR_Word SubRval0_28 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 2))));
            MR_Word SubRval_29;

            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, SubRval0_28, &SubRval_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_16));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_29));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 1))));
            MR_Word LRval0_18 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 2))));
            MR_Word RRval0_19 = ((MR_Word) ((MR_hl_field(3, Rval0_5, (MR_Integer) 3))));
            MR_Word LRval_20;
            MR_Word RRval_21;

            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, LRval0_18, &LRval_20);
            ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(InstrMap_4, RRval0_19, &RRval_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_17));
              MR_hl_field(3, base, 2) = ((MR_Box) (LRval_20));
              MR_hl_field(3, base, 3) = ((MR_Box) (RRval_21));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MaybeLabel0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word MaybeLabels0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MaybeLabel_8;
    MR_Word MaybeLabels_9;

    if ((MaybeLabel0_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeLabel_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Label0_10 = ((MR_Word) ((MR_hl_field(1, MaybeLabel0_6, (MR_Integer) 0))));
      MR_Word Label_11;
      MR_Word Instr0_12;
      MR_Box conv0_Instr0_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadVar__1_1, ((MR_Box) (Label0_10)), &conv0_Instr0_12);
      if (succeeded)
      {
        Instr0_12 = ((MR_Word) (conv0_Instr0_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word _Instr_13;

        ll_backend__jumpopt__final_dest_loop_6_p_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), Label0_10, &Label_11, Instr0_12, &_Instr_13);
      }
      else
        Label_11 = Label0_10;
      {
        MaybeLabel_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeLabel_8, 0) = ((MR_Box) (Label_11));
      }
    }
    ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(HeadVar__1_1, MaybeLabels0_7, &MaybeLabels_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeLabel_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeLabels_9));
    }
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
  MR_Word InstrMap_4,
  MR_Word Label0_5,
  MR_Word * Label_6)
{
  MR_bool succeeded;
  MR_Word Instr0_7;
  MR_Box conv0_Instr0_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_4, ((MR_Box) (Label0_5)), &conv0_Instr0_7);
  if (succeeded)
  {
    Instr0_7 = ((MR_Word) (conv0_Instr0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word _Instr_8;

    ll_backend__jumpopt__final_dest_loop_6_p_0(InstrMap_4, (MR_Word) ((MR_Unsigned) 0U), Label0_5, Label_6, Instr0_7, &_Instr_8);
  }
  else
    *Label_6 = Label0_5;
}

static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
  MR_Word PrevInstr_4,
  MR_Word Instrs0_5,
  MR_Word * Instrs_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PrevInstr_4)) == (MR_Integer) 2);
  MR_Word PrevLivevals_7;
  MR_Word BetweenLivevals_9;
  MR_Word Instrs2_11;
  MR_Word Instrs1_8;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    PrevLivevals_7 = ((MR_Word) ((MR_hl_field(2, PrevInstr_4, (MR_Integer) 0))));
    ll_backend__opt_util__skip_comments_2_p_0(Instrs0_5, &Instrs1_8);
    succeeded = (Instrs1_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(1, Instrs1_8, (MR_Integer) 0))));
      Instrs2_11 = ((MR_Word) ((MR_hl_field(1, Instrs1_8, (MR_Integer) 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
      if (succeeded)
        BetweenLivevals_9 = ((MR_Word) ((MR_hl_field(2, Var_13, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__jumpopt_scalar_common_1[17]), ((MR_Box) (BetweenLivevals_9)), ((MR_Box) (PrevLivevals_7)));
    if (succeeded)
      *Instrs_6 = Instrs2_11;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.jumpopt.adjust_livevals\'/3", (MR_String) "BetweenLivevals and PrevLivevals differ");
        return;
      }
  }
  else
    *Instrs_6 = Instrs0_5;
}

static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Instr_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_6 = ((MR_Word) ((MR_hl_field(0, Instr_3, (MR_Integer) 0))));
      MR_Word Var_10;

      succeeded = ((((MR_tag((MR_Word) Uinstr_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
      if (succeeded)
      {
        Var_10 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 6))));
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 0;
      else
      {
        MR_Word Var_11;

        succeeded = ((((MR_tag((MR_Word) Uinstr_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
        if (succeeded)
        {
          Var_11 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 9))) & (MR_Integer) 1);
          succeeded = (Var_11 == (MR_Integer) 1);
        }
        if (succeeded)
          HeadVar__2_2 = (MR_Integer) 0;
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Instrs_4;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
  MR_Word Uinstr0_9,
  MR_String Comment0_10,
  MR_Word Instrs0_11,
  MR_Word PrevInstr_12,
  MR_Word JumpOptInfo_13,
  MR_Word STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
  MR_Word * STATE_VARIABLE_CheckedNondetTailCallInfo_51,
  MR_Word * NewRemain_15)
{
  MR_bool succeeded;
  MR_Word Proc_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
  MR_Word RetAddr_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
  MR_Word LiveInfos_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 4))));
  MR_Word GoalPath_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 5))));
  MR_Word CallModel_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 6))));
  MR_Word RetLabel_22;

  succeeded = ((MR_tag((MR_Word) RetAddr_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    RetLabel_22 = ((MR_Word) ((MR_hl_field(1, RetAddr_17, (MR_Integer) 0))));
    {
      MR_Word Var_280 = ((MR_Unsigned) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 8))) & (MR_Integer) 1);
      MR_Word Var_282 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 7))));

      succeeded = (Var_280 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (RetLabel_22)), Var_282);
      if (succeeded)
      {
        *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
      }
      else
      {
        MR_Word Between0_25;
        MR_Word TypeCtorInfo_268_268;
        MR_Word TypeInfo_269_269;
        MR_Word ProcMap_24;
        MR_Box conv0_Between0_25;

        if (((MR_tag((MR_Word) CallModel_21)) == (MR_Integer) 0))
        {
          MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(0, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (Var_53 == (MR_Integer) 1);
        }
        else
        if (((MR_tag((MR_Word) CallModel_21)) == (MR_Integer) 1))
        {
          MR_Word Var_54 = ((MR_Unsigned) ((MR_hl_field(1, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (Var_54 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ProcMap_24 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 3))));
          TypeCtorInfo_268_268 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
          TypeInfo_269_269 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_268_268, TypeInfo_269_269, ProcMap_24, ((MR_Box) (RetLabel_22)), &conv0_Between0_25);
          if (succeeded)
          {
            Between0_25 = ((MR_Word) (conv0_Between0_25));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = ((MR_tag((MR_Word) PrevInstr_12)) == (MR_Integer) 2);
        }
        if (succeeded)
        {
          MR_Word Between1_27;
          MR_Word NewInstrs_28;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_String Var_62;

          ll_backend__opt_util__filter_out_livevals_2_p_0(Between0_25, &Between1_27);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (PrevInstr_12));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_61, 1) = ((MR_Box) (Proc_16));
          }
          Var_62 = ll_backend__jumpopt__redirect_comment_1_f_0(Comment0_10);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_59));
          }
          NewInstrs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Between1_27, Var_55);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *NewRemain_15 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_28));
            MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
          }
          *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
        }
        else
        {
          MR_Word Between_30;
          MR_Word TypeCtorInfo_271_271;
          MR_Word TypeInfo_272_272;
          MR_Word ForkMap_29;
          MR_Word Var_64;
          MR_Box conv1_Between_30;

          succeeded = ((MR_tag((MR_Word) CallModel_21)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_64 = ((MR_Unsigned) ((MR_hl_field(1, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (Var_64 == (MR_Integer) 1);
            if (succeeded)
            {
              ForkMap_29 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 5))));
              TypeCtorInfo_271_271 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
              TypeInfo_272_272 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_271_271, TypeInfo_272_272, ForkMap_29, ((MR_Box) (RetLabel_22)), &conv1_Between_30);
              if (succeeded)
              {
                Between_30 = ((MR_Word) (conv1_Between_30));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                succeeded = ((MR_tag((MR_Word) PrevInstr_12)) == (MR_Integer) 2);
            }
          }
          if (succeeded)
          {
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_String Var_72;
            MR_Word NewInstrs_189;

            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (PrevInstr_12));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_71, 1) = ((MR_Box) (Proc_16));
            }
            Var_72 = ll_backend__jumpopt__redirect_comment_1_f_0(Comment0_10);
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_69));
            }
            NewInstrs_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Between_30, Var_65);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *NewRemain_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_189));
              MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
            }
            *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
          }
          else
          {
            MR_Word TypeCtorInfo_274_274;
            MR_Word TypeInfo_275_275;
            MR_Word SuccMap_31;
            MR_Word BetweenIncl_32;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Box conv2_BetweenIncl_32;

            succeeded = ((MR_tag((MR_Word) CallModel_21)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_74 = ((MR_Unsigned) ((MR_hl_field(2, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (Var_74 == (MR_Integer) 2);
              if (succeeded)
              {
                SuccMap_31 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 6))));
                TypeCtorInfo_274_274 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
                TypeInfo_275_275 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_274_274, TypeInfo_275_275, SuccMap_31, ((MR_Box) (RetLabel_22)), &conv2_BetweenIncl_32);
                if (succeeded)
                {
                  BetweenIncl_32 = ((MR_Word) (conv2_BetweenIncl_32));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) PrevInstr_12)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    succeeded = (BetweenIncl_32 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_75 = ((MR_Word) ((MR_hl_field(1, BetweenIncl_32, (MR_Integer) 0))));
                      Var_77 = ((MR_Word) ((MR_hl_field(1, BetweenIncl_32, (MR_Integer) 1))));
                      Var_76 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
                          Var_80 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 1))));
                          succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_79 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_79)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_79, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_89;
              MR_Word Var_98;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_String Var_114;
              MR_Word NewInstrs_190;

              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_108, 0) = ((MR_Box) (PrevInstr_12));
                MR_hl_field(0, Var_108, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_113, 1) = ((MR_Box) (Proc_16));
              }
              Var_114 = ll_backend__jumpopt__redirect_comment_1_f_0(Comment0_10);
              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(0, Var_112, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
                MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_89, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
                MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_98));
              }
              {
                NewInstrs_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NewInstrs_190, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
                MR_hl_field(1, NewInstrs_190, 1) = ((MR_Box) (Var_89));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *NewRemain_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_190));
                MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
              }
              *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
            }
            else
            {
              MR_Word ProcLabel_37;
              MR_Word LabelNumCounter0_38;
              MR_Word TypeCtorInfo_276_276;
              MR_Word TypeInfo_277_277;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word SuccMap_191;
              MR_Word BetweenIncl_192;
              MR_Box conv3_BetweenIncl_192;

              succeeded = ((MR_tag((MR_Word) CallModel_21)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_116 = ((MR_Unsigned) ((MR_hl_field(2, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_116 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (STATE_VARIABLE_CheckedNondetTailCallInfo_0_50 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ProcLabel_37 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 0))));
                    LabelNumCounter0_38 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 1))));
                    SuccMap_191 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 6))));
                    TypeCtorInfo_276_276 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
                    TypeInfo_277_277 = (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]);
                    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_276_276, TypeInfo_277_277, SuccMap_191, ((MR_Box) (RetLabel_22)), &conv3_BetweenIncl_192);
                    if (succeeded)
                    {
                      BetweenIncl_192 = ((MR_Word) (conv3_BetweenIncl_192));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) PrevInstr_12)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        succeeded = (BetweenIncl_192 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_117 = ((MR_Word) ((MR_hl_field(1, BetweenIncl_192, (MR_Integer) 0))));
                          Var_119 = ((MR_Word) ((MR_hl_field(1, BetweenIncl_192, (MR_Integer) 1))));
                          Var_118 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) Var_118)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            succeeded = (Var_119 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_120 = ((MR_Word) ((MR_hl_field(1, Var_119, (MR_Integer) 0))));
                              Var_122 = ((MR_Word) ((MR_hl_field(1, Var_119, (MR_Integer) 1))));
                              succeeded = (Var_122 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_121 = ((MR_Word) ((MR_hl_field(0, Var_120, (MR_Integer) 0))));
                                succeeded = ((((MR_tag((MR_Word) Var_121)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_121, (MR_Integer) 0)))) == (MR_Integer) 6)));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Integer LabelNum_43;
                MR_Word LabelNumCounter1_44;
                MR_Word NewLabel_45;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_133;
                MR_Word Var_135;
                MR_Word Var_144;
                MR_Word Var_153;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_166;
                MR_Word Var_167;
                MR_Word Var_168;
                MR_String Var_169;
                MR_Word Var_170;
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_174;
                MR_Word Var_178;
                MR_Word Var_179;
                MR_Word NewInstrs_193;

                mercury__counter__allocate_3_p_0(&LabelNum_43, LabelNumCounter0_38, &LabelNumCounter1_44);
                {
                  NewLabel_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewLabel_45, 0) = ((MR_Box) (LabelNum_43));
                  MR_hl_field(0, NewLabel_45, 1) = ((MR_Box) (ProcLabel_37));
                }
                {
                  Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_133, 0) = ((MR_Box) (NewLabel_45));
                }
                {
                  Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_124, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__jumpopt_scalar_common_4[0])));
                  MR_hl_field(3, Var_124, 2) = ((MR_Box) (Var_133));
                }
                {
                  Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_123, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(0, Var_123, 1) = ((MR_Box) ((MR_String) "branch around if cannot tail call"));
                }
                {
                  Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_163, 0) = ((MR_Box) (PrevInstr_12));
                  MR_hl_field(0, Var_163, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_168, 1) = ((MR_Box) (Proc_16));
                }
                Var_169 = ll_backend__jumpopt__redirect_comment_1_f_0(Comment0_10);
                {
                  Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_167, 0) = ((MR_Box) (Var_168));
                  MR_hl_field(0, Var_167, 1) = ((MR_Box) (Var_169));
                }
                {
                  Var_172 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_172, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_172, 1) = ((MR_Box) (NewLabel_45));
                }
                {
                  Var_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_171, 0) = ((MR_Box) (Var_172));
                  MR_hl_field(0, Var_171, 1) = ((MR_Box) ((MR_String) "non tail call"));
                }
                {
                  Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_179, 0) = ((MR_Box) (Uinstr0_9));
                  MR_hl_field(0, Var_179, 1) = ((MR_Box) (Comment0_10));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
                  MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_163));
                  MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_178));
                }
                {
                  Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
                  MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_174));
                }
                {
                  Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_166, 0) = ((MR_Box) (Var_167));
                  MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_170));
                }
                {
                  Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
                  MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_166));
                }
                {
                  Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_153, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
                  MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_162));
                }
                {
                  Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_144, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
                  MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_153));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_135, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
                  MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_144));
                }
                {
                  NewInstrs_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewInstrs_193, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(1, NewInstrs_193, 1) = ((MR_Box) (Var_135));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *NewRemain_15 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_193));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ProcLabel_37));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LabelNumCounter1_44));
                }
              }
              else
              {
                MR_Word InstrMap_46 = ((MR_Word) ((MR_hl_field(0, JumpOptInfo_13, (MR_Integer) 0))));
                MR_Word RetInstr_47;
                MR_Box conv4_RetInstr_47;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrMap_46, ((MR_Box) (RetLabel_22)), &conv4_RetInstr_47);
                if (succeeded)
                {
                  RetInstr_47 = ((MR_Word) (conv4_RetInstr_47));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word DestLabel_48;
                  MR_Word NewInstrs_194;
                  MR_Word _DestInstr_49;

                  ll_backend__jumpopt__final_dest_5_p_0(InstrMap_46, RetLabel_22, &DestLabel_48, RetInstr_47, &_DestInstr_49);
                  succeeded = ll_backend__llds____Unify____label_0_0(RetLabel_22, DestLabel_48);
                  if (succeeded)
                  {
                    MR_Word Var_182;

                    {
                      Var_182 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_182, 0) = ((MR_Box) (Uinstr0_9));
                      MR_hl_field(0, Var_182, 1) = ((MR_Box) (Comment0_10));
                    }
                    {
                      NewInstrs_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, NewInstrs_194, 0) = ((MR_Box) (Var_182));
                      MR_hl_field(1, NewInstrs_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word Var_184;
                    MR_Word Var_185;
                    MR_Word Var_186;
                    MR_String Var_187;

                    {
                      Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_186, 0) = ((MR_Box) (DestLabel_48));
                    }
                    {
                      Var_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_185, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_185, 1) = ((MR_Box) (Proc_16));
                      MR_hl_field(3, Var_185, 2) = ((MR_Box) (Var_186));
                      MR_hl_field(3, Var_185, 3) = ((MR_Box) (LiveInfos_18));
                      MR_hl_field(3, Var_185, 4) = ((MR_Box) (Context_19));
                      MR_hl_field(3, Var_185, 5) = ((MR_Box) (GoalPath_20));
                      MR_hl_field(3, Var_185, 6) = ((MR_Box) (CallModel_21));
                    }
                    Var_187 = ll_backend__jumpopt__redirect_comment_1_f_0(Comment0_10);
                    {
                      Var_184 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_184, 0) = ((MR_Box) (Var_185));
                      MR_hl_field(0, Var_184, 1) = ((MR_Box) (Var_187));
                    }
                    {
                      NewInstrs_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, NewInstrs_194, 0) = ((MR_Box) (Var_184));
                      MR_hl_field(1, NewInstrs_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *NewRemain_15 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (NewInstrs_194));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_11));
                  }
                }
                else
                  *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *NewRemain_15 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CheckedNondetTailCallInfo_51 = STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
  }
}

static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
  MR_Word InstrMap_6,
  MR_Word SrcLabel_7,
  MR_Word * DestLabel_8,
  MR_Word SrcInstr_9,
  MR_Word * DestInstr_10)
{
  ll_backend__jumpopt__final_dest_loop_6_p_0(InstrMap_6, (MR_Word) ((MR_Unsigned) 0U), SrcLabel_7, DestLabel_8, SrcInstr_9, DestInstr_10);
}

static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
  MR_Word InstrMap_7,
  MR_Word LabelsSofar_8,
  MR_Word SrcLabel_9,
  MR_Word * DestLabel_10,
  MR_Word SrcInstr_11,
  MR_Word * DestInstr_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TargetLabel_15;
    MR_Word TargetInstr_16;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word SrcUinstr_13 = ((MR_Word) ((MR_hl_field(0, SrcInstr_11, (MR_Integer) 0))));
    MR_Box conv0_TargetInstr_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((((MR_tag((MR_Word) SrcUinstr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, SrcUinstr_13, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
      if (succeeded)
        TargetLabel_15 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
    }
    else
    if (((((MR_tag((MR_Word) SrcUinstr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
    {
      TargetLabel_15 = ((MR_Word) ((MR_hl_field(3, SrcUinstr_13, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      TypeCtorInfo_19_19 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
      TypeCtorInfo_20_20 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_19_19, TypeCtorInfo_20_20, InstrMap_7, ((MR_Box) (TargetLabel_15)), &conv0_TargetInstr_16);
      if (succeeded)
      {
        TargetInstr_16 = ((MR_Word) (conv0_TargetInstr_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_19_19, ((MR_Box) (SrcLabel_9)), LabelsSofar_8);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word Var_18;
      MR_Word next_value_of_LabelsSofar_8;
      MR_Word next_value_of_SrcLabel_9;
      MR_Word next_value_of_SrcInstr_11;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (SrcLabel_9));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (LabelsSofar_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_LabelsSofar_8 = Var_18;
      next_value_of_SrcLabel_9 = TargetLabel_15;
      next_value_of_SrcInstr_11 = TargetInstr_16;
      LabelsSofar_8 = next_value_of_LabelsSofar_8;
      SrcLabel_9 = next_value_of_SrcLabel_9;
      SrcInstr_11 = next_value_of_SrcInstr_11;
      continue;
    }
    else
    {
      *DestLabel_10 = SrcLabel_9;
      *DestInstr_12 = SrcInstr_11;
    }
    break;
  }
}

static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
  MR_String Comment_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Comment_3, (MR_String) " (redirected return)");
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ForkMap_0_3,
  MR_Word * STATE_VARIABLE_ForkMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ForkMap_4 = STATE_VARIABLE_ForkMap_0_3;
    else
    {
      MR_Word Uinstr_9;
      MR_Word Instrs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ForkMap_19_19;
      MR_Word Label_14;
      MR_Word Between_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ForkMap_0_3;

      Uinstr_9 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_14 = ((MR_Word) ((MR_hl_field(3, Uinstr_9, (MR_Integer) 1))));
        succeeded = ll_backend__opt_util__is_forkproceed_next_3_p_0(Instrs_11, HeadVar__2_2, &Between_15);
      }
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (Label_14)), ((MR_Box) (Between_15)), STATE_VARIABLE_ForkMap_0_3, &STATE_VARIABLE_ForkMap_19_19);
      else
        STATE_VARIABLE_ForkMap_19_19 = STATE_VARIABLE_ForkMap_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_11;
      next_value_of_STATE_VARIABLE_ForkMap_0_3 = STATE_VARIABLE_ForkMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ForkMap_0_3 = next_value_of_STATE_VARIABLE_ForkMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Recjump_2,
  MR_Word STATE_VARIABLE_InstrMap_0_3,
  MR_Word * STATE_VARIABLE_InstrMap_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_LvalMap_0_7,
  MR_Word * STATE_VARIABLE_LvalMap_8,
  MR_Word STATE_VARIABLE_ProcMap_0_9,
  MR_Word * STATE_VARIABLE_ProcMap_10,
  MR_Word STATE_VARIABLE_SdprocMap_0_11,
  MR_Word * STATE_VARIABLE_SdprocMap_12,
  MR_Word STATE_VARIABLE_SuccMap_0_13,
  MR_Word * STATE_VARIABLE_SuccMap_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SuccMap_14 = STATE_VARIABLE_SuccMap_0_13;
      *STATE_VARIABLE_SdprocMap_12 = STATE_VARIABLE_SdprocMap_0_11;
      *STATE_VARIABLE_ProcMap_10 = STATE_VARIABLE_ProcMap_0_9;
      *STATE_VARIABLE_LvalMap_8 = STATE_VARIABLE_LvalMap_0_7;
      *STATE_VARIABLE_BlockMap_6 = STATE_VARIABLE_BlockMap_0_5;
      *STATE_VARIABLE_InstrMap_4 = STATE_VARIABLE_InstrMap_0_3;
    }
    else
    {
      MR_Word Instr0_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_43 = ((MR_Word) ((MR_hl_field(0, Instr0_34, (MR_Integer) 0))));
      MR_String Comment0_44 = ((MR_String) ((MR_hl_field(0, Instr0_34, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_LvalMap_76_76;
      MR_Word STATE_VARIABLE_InstrMap_79_79;
      MR_Word STATE_VARIABLE_ProcMap_80_80;
      MR_Word STATE_VARIABLE_SdprocMap_81_81;
      MR_Word STATE_VARIABLE_SuccMap_82_82;
      MR_Word STATE_VARIABLE_BlockMap_84_84;
      MR_Word Label_45;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstrMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_LvalMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ProcMap_0_9;
      MR_Word next_value_of_STATE_VARIABLE_SdprocMap_0_11;
      MR_Word next_value_of_STATE_VARIABLE_SuccMap_0_13;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_43, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_45 = ((MR_Word) ((MR_hl_field(3, Uinstr0_43, (MR_Integer) 1))));
        {
          MR_Word Instrs1_46;
          MR_Word Instrs2_51;
          MR_Word Instr1_47;
          MR_Word Var_74;
          MR_Word Instr2_52;
          MR_Word Between1_54;
          MR_Word Between2_55;
          MR_Word Between3_56;

          ll_backend__opt_util__skip_comments_2_p_0(Instrs0_35, &Instrs1_46);
          succeeded = (Instrs1_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Instr1_47 = ((MR_Word) ((MR_hl_field(1, Instrs1_46, (MR_Integer) 0))));
            Var_74 = ((MR_Word) ((MR_hl_field(0, Instr1_47, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 2);
          }
          if (succeeded)
          {
            MR_Word Var_75;

            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (Instr1_47));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[1]), ((MR_Box) (Label_45)), ((MR_Box) (Var_75)), STATE_VARIABLE_LvalMap_0_7, &STATE_VARIABLE_LvalMap_76_76);
          }
          else
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[1]), ((MR_Box) (Label_45)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_LvalMap_0_7, &STATE_VARIABLE_LvalMap_76_76);
          ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs1_46, &Instrs2_51);
          succeeded = (Instrs2_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Instr2_52 = ((MR_Word) ((MR_hl_field(1, Instrs2_51, (MR_Integer) 0))));
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Label_45)), ((MR_Box) (Instr2_52)), STATE_VARIABLE_InstrMap_0_3, &STATE_VARIABLE_InstrMap_79_79);
          }
          else
            STATE_VARIABLE_InstrMap_79_79 = STATE_VARIABLE_InstrMap_0_3;
          succeeded = ll_backend__opt_util__is_proceed_next_2_p_0(Instrs1_46, &Between1_54);
          if (succeeded)
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (Label_45)), ((MR_Box) (Between1_54)), STATE_VARIABLE_ProcMap_0_9, &STATE_VARIABLE_ProcMap_80_80);
          else
            STATE_VARIABLE_ProcMap_80_80 = STATE_VARIABLE_ProcMap_0_9;
          succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(Instrs1_46, &Between2_55);
          if (succeeded)
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (Label_45)), ((MR_Box) (Between2_55)), STATE_VARIABLE_SdprocMap_0_11, &STATE_VARIABLE_SdprocMap_81_81);
          else
            STATE_VARIABLE_SdprocMap_81_81 = STATE_VARIABLE_SdprocMap_0_11;
          succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(Instrs1_46, &Between3_56);
          if (succeeded)
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (Label_45)), ((MR_Box) (Between3_56)), STATE_VARIABLE_SuccMap_0_13, &STATE_VARIABLE_SuccMap_82_82);
          else
            STATE_VARIABLE_SuccMap_82_82 = STATE_VARIABLE_SuccMap_0_13;
          if (((MR_tag((MR_Word) Label_45)) == (MR_Integer) 1))
            succeeded = (Recjump_2 == (MR_Integer) 1);
          else
          {
            succeeded = mercury__string__suffix_2_p_0(Comment0_44, (MR_String) "nofulljump");
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Block_61;

            ll_backend__opt_util__find_no_fallthrough_2_p_0(Instrs1_46, &Block_61);
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__jumpopt_scalar_common_1[0]), ((MR_Box) (Label_45)), ((MR_Box) (Block_61)), STATE_VARIABLE_BlockMap_0_5, &STATE_VARIABLE_BlockMap_84_84);
          }
          else
            STATE_VARIABLE_BlockMap_84_84 = STATE_VARIABLE_BlockMap_0_5;
        }
      }
      else
      {
        STATE_VARIABLE_SuccMap_82_82 = STATE_VARIABLE_SuccMap_0_13;
        STATE_VARIABLE_SdprocMap_81_81 = STATE_VARIABLE_SdprocMap_0_11;
        STATE_VARIABLE_ProcMap_80_80 = STATE_VARIABLE_ProcMap_0_9;
        STATE_VARIABLE_LvalMap_76_76 = STATE_VARIABLE_LvalMap_0_7;
        STATE_VARIABLE_BlockMap_84_84 = STATE_VARIABLE_BlockMap_0_5;
        STATE_VARIABLE_InstrMap_79_79 = STATE_VARIABLE_InstrMap_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs0_35;
      next_value_of_STATE_VARIABLE_InstrMap_0_3 = STATE_VARIABLE_InstrMap_79_79;
      next_value_of_STATE_VARIABLE_BlockMap_0_5 = STATE_VARIABLE_BlockMap_84_84;
      next_value_of_STATE_VARIABLE_LvalMap_0_7 = STATE_VARIABLE_LvalMap_76_76;
      next_value_of_STATE_VARIABLE_ProcMap_0_9 = STATE_VARIABLE_ProcMap_80_80;
      next_value_of_STATE_VARIABLE_SdprocMap_0_11 = STATE_VARIABLE_SdprocMap_81_81;
      next_value_of_STATE_VARIABLE_SuccMap_0_13 = STATE_VARIABLE_SuccMap_82_82;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstrMap_0_3 = next_value_of_STATE_VARIABLE_InstrMap_0_3;
      STATE_VARIABLE_BlockMap_0_5 = next_value_of_STATE_VARIABLE_BlockMap_0_5;
      STATE_VARIABLE_LvalMap_0_7 = next_value_of_STATE_VARIABLE_LvalMap_0_7;
      STATE_VARIABLE_ProcMap_0_9 = next_value_of_STATE_VARIABLE_ProcMap_0_9;
      STATE_VARIABLE_SdprocMap_0_11 = next_value_of_STATE_VARIABLE_SdprocMap_0_11;
      STATE_VARIABLE_SuccMap_0_13 = next_value_of_STATE_VARIABLE_SuccMap_0_13;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__jumpopt____Unify____jump_opt_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__jumpopt____Compare____jump_opt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__jumpopt____Unify____new_remain_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__jumpopt____Compare____new_remain_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__jumpopt__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.jumpopt.
