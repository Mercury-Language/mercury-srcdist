/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0[10];

static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0[10];

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
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_6,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__PrevInstr_12,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
  MR_Word * ll_backend__jumpopt__NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ll_backend__jumpopt__closure_arg,
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
  MR_Box * ll_backend__jumpopt__wrapper_arg_4);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
  MR_Word * ll_backend__jumpopt__NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
  MR_Word * ll_backend__jumpopt__NewRemain_15);

static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
  MR_Word ll_backend__jumpopt__Lval_3,
  MR_Word ll_backend__jumpopt__Cond_4);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_4,
  MR_Word ll_backend__jumpopt__Rval0_5,
  MR_Word * ll_backend__jumpopt__Rval_6);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word * ll_backend__jumpopt__HeadVar__3_3);

static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_4,
  MR_Word ll_backend__jumpopt__Label0_5,
  MR_Word * ll_backend__jumpopt__Label_6);

static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
  MR_Word ll_backend__jumpopt__PrevInstr_4,
  MR_Word ll_backend__jumpopt__Instrs0_5,
  MR_Word * ll_backend__jumpopt__Instrs_6);

static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__PrevInstr_12,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
  MR_Word * ll_backend__jumpopt__NewRemain_15);

static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_6,
  MR_Word ll_backend__jumpopt__SrcLabel_7,
  MR_Word * ll_backend__jumpopt__DestLabel_8,
  MR_Word ll_backend__jumpopt__SrcInstr_9,
  MR_Word * ll_backend__jumpopt__DestInstr_10);

static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_7,
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
  MR_Word ll_backend__jumpopt__SrcLabel_9,
  MR_Word * ll_backend__jumpopt__DestLabel_10,
  MR_Word ll_backend__jumpopt__SrcInstr_11,
  MR_Word * ll_backend__jumpopt__DestInstr_12);

static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
  MR_String ll_backend__jumpopt__Comment_3);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4);

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__Recjump_2,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2);

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[21][2];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_3[7][1];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4];

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_5[1][8];




static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_1[21][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[12]))),
    ((MR_Box) ((MR_String) "shortcircuit"))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[18]))),
    ((MR_Box) ((MR_String) "shortcircuit"))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[19])),
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
    ((MR_Box) ((MR_String) "r1 = old r1"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ll_backend__jumpopt_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_1[11]))),
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



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__jumpopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__jumpopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__jumpopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__jumpopt__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

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

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 = {
  (MR_String) "jump_opt_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_jump_opt_info_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_jump_opt_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

static const MR_Integer ll_backend__jumpopt__ll_backend__jumpopt__functor_number_map_jump_opt_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__jumpopt__ll_backend__jumpopt__type_ctor_info_jump_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0 = {
  (MR_String) "dont_check_nondet_tailcalls",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1 = {
  (MR_String) "check_nondet_tailcalls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_maybe_check_nondet_tailcalls_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_0
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_maybe_check_nondet_tailcalls_0_1
};

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_maybe_check_nondet_tailcalls_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_maybe_check_nondet_tailcalls_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__jumpopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_ConstString ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0[2] = {
  (MR_String) "new_instructions",
  (MR_String) "remaining_instructions"
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0 = {
  (MR_String) "nr_specified",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_types_new_remain_0_0,
  ll_backend__jumpopt__ll_backend__jumpopt__field_names_new_remain_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1 = {
  (MR_String) "nr_usual_case",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

static const MR_DuFunctorDescPtr ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[1] = {
  &ll_backend__jumpopt__ll_backend__jumpopt__du_functor_desc_new_remain_0_0
};

static const MR_DuPtagLayout ll_backend__jumpopt__ll_backend__jumpopt__du_ptag_ordered_new_remain_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__jumpopt__ll_backend__jumpopt__du_stag_ordered_new_remain_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0(
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_13 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
    MR_Integer ll_backend__jumpopt__CastY_14 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_13 == ll_backend__jumpopt__CastY_14);
    if (ll_backend__jumpopt__succeeded)
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ll_backend__jumpopt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));

      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ll_backend__jumpopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], &ll_backend__jumpopt__Var_8, ((MR_Box) (ll_backend__jumpopt__Var_18)), ((MR_Box) (ll_backend__jumpopt__ArgY1_5)));
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_8 == (MR_Integer) 0);
        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
        if (ll_backend__jumpopt__succeeded)
          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__Var_17)), ((MR_Box) (ll_backend__jumpopt__ArgY2_7)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_9 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
    MR_Integer ll_backend__jumpopt__CastY_10 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_9 == ll_backend__jumpopt__CastY_10);
    if (ll_backend__jumpopt__succeeded)
      ll_backend__jumpopt__succeeded = MR_TRUE;
    else
    if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer ll_backend__jumpopt__CastX_7 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
      MR_Integer ll_backend__jumpopt__CastY_8 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastY_8 == ll_backend__jumpopt__CastX_7);
    }
    else
    {
      MR_Word ll_backend__jumpopt__TypeInfo_11_11;
      MR_Word ll_backend__jumpopt__TypeInfo_12_12;
      MR_Word ll_backend__jumpopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgY1_4;
      MR_Word ll_backend__jumpopt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgY2_6;

      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
        ll_backend__jumpopt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
        ll_backend__jumpopt__TypeInfo_11_11 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
        ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_11_11, ((MR_Box) (ll_backend__jumpopt__ArgX1_3)), ((MR_Box) (ll_backend__jumpopt__ArgY1_4)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__TypeInfo_12_12 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_12_12, ((MR_Box) (ll_backend__jumpopt__ArgX2_5)), ((MR_Box) (ll_backend__jumpopt__ArgY2_6)));
        }
      }
    }
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_13 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
    MR_Integer ll_backend__jumpopt__CastY_14 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_13 == ll_backend__jumpopt__CastY_14);
    if (ll_backend__jumpopt__succeeded)
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ll_backend__jumpopt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));

      if ((ll_backend__jumpopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ll_backend__jumpopt__ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__ArgY2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Var_12;

        mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__jumpopt__Var_12, ll_backend__jumpopt__Var_18, ll_backend__jumpopt__ArgY1_9);
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_12 == (MR_Integer) 0);
        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
        if (ll_backend__jumpopt__succeeded)
          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_12;
        else
          mercury__counter____Compare____counter_0_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__Var_17, ll_backend__jumpopt__ArgY2_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_9 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
    MR_Integer ll_backend__jumpopt__CastY_10 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_9 == ll_backend__jumpopt__CastY_10);
    if (ll_backend__jumpopt__succeeded)
      ll_backend__jumpopt__succeeded = MR_TRUE;
    else
    if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer ll_backend__jumpopt__CastX_3 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
      MR_Integer ll_backend__jumpopt__CastY_4 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastY_4 == ll_backend__jumpopt__CastX_3);
    }
    else
    {
      MR_Word ll_backend__jumpopt__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgY1_6;
      MR_Word ll_backend__jumpopt__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgY2_8;

      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
        ll_backend__jumpopt__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
        ll_backend__jumpopt__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__jumpopt__ArgX1_5, ll_backend__jumpopt__ArgY1_6);
        if (ll_backend__jumpopt__succeeded)
          ll_backend__jumpopt__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__jumpopt__ArgX2_7, ll_backend__jumpopt__ArgY2_8);
      }
    }
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0(
  MR_Word * ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__HeadVar__3_3)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_33 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;
    MR_Integer ll_backend__jumpopt__CastY_34 = (MR_Integer) ll_backend__jumpopt__HeadVar__3_3;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_33 == ll_backend__jumpopt__CastY_34);
    if (ll_backend__jumpopt__succeeded)
      *ll_backend__jumpopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__jumpopt__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__jumpopt__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ll_backend__jumpopt__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__jumpopt__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ll_backend__jumpopt__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__jumpopt__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ll_backend__jumpopt__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ll_backend__jumpopt__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ll_backend__jumpopt__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ll_backend__jumpopt__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ll_backend__jumpopt__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ll_backend__jumpopt__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ll_backend__jumpopt__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ll_backend__jumpopt__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ll_backend__jumpopt__Var_24;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], &ll_backend__jumpopt__Var_24, ((MR_Box) (ll_backend__jumpopt__ArgX1_4)), ((MR_Box) (ll_backend__jumpopt__ArgY1_5)));
      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_24 == (MR_Integer) 0);
      ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
      if (ll_backend__jumpopt__succeeded)
        *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_24;
      else
      {
        MR_Word ll_backend__jumpopt__Var_25;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__Var_25, ((MR_Box) (ll_backend__jumpopt__ArgX2_6)), ((MR_Box) (ll_backend__jumpopt__ArgY2_7)));
        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_25 == (MR_Integer) 0);
        ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
        if (ll_backend__jumpopt__succeeded)
          *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_25;
        else
        {
          MR_Word ll_backend__jumpopt__Var_26;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[2], &ll_backend__jumpopt__Var_26, ((MR_Box) (ll_backend__jumpopt__ArgX3_8)), ((MR_Box) (ll_backend__jumpopt__ArgY3_9)));
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_26 == (MR_Integer) 0);
          ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
          if (ll_backend__jumpopt__succeeded)
            *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_26;
          else
          {
            MR_Word ll_backend__jumpopt__Var_27;

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__Var_27, ((MR_Box) (ll_backend__jumpopt__ArgX4_10)), ((MR_Box) (ll_backend__jumpopt__ArgY4_11)));
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_27 == (MR_Integer) 0);
            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
            if (ll_backend__jumpopt__succeeded)
              *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_27;
            else
            {
              MR_Word ll_backend__jumpopt__Var_28;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__Var_28, ((MR_Box) (ll_backend__jumpopt__ArgX5_12)), ((MR_Box) (ll_backend__jumpopt__ArgY5_13)));
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_28 == (MR_Integer) 0);
              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
              if (ll_backend__jumpopt__succeeded)
                *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_28;
              else
              {
                MR_Word ll_backend__jumpopt__Var_29;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__Var_29, ((MR_Box) (ll_backend__jumpopt__ArgX6_14)), ((MR_Box) (ll_backend__jumpopt__ArgY6_15)));
                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_29 == (MR_Integer) 0);
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                if (ll_backend__jumpopt__succeeded)
                  *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_29;
                else
                {
                  MR_Word ll_backend__jumpopt__Var_30;

                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[1], &ll_backend__jumpopt__Var_30, ((MR_Box) (ll_backend__jumpopt__ArgX7_16)), ((MR_Box) (ll_backend__jumpopt__ArgY7_17)));
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_30 == (MR_Integer) 0);
                  ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                  if (ll_backend__jumpopt__succeeded)
                    *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_30;
                  else
                  {
                    MR_Word ll_backend__jumpopt__Var_31;

                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[2], &ll_backend__jumpopt__Var_31, ((MR_Box) (ll_backend__jumpopt__ArgX8_18)), ((MR_Box) (ll_backend__jumpopt__ArgY8_19)));
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_31 == (MR_Integer) 0);
                    ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                    if (ll_backend__jumpopt__succeeded)
                      *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_31;
                    else
                    {
                      MR_Word ll_backend__jumpopt__Var_32;
                      MR_Integer ll_backend__jumpopt__Var_45 = (MR_Integer) ll_backend__jumpopt__ArgX9_20;
                      MR_Integer ll_backend__jumpopt__Var_46 = (MR_Integer) ll_backend__jumpopt__ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__jumpopt__Var_32, ll_backend__jumpopt__Var_45, ll_backend__jumpopt__Var_46);
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_32 == (MR_Integer) 0);
                      ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                      if (ll_backend__jumpopt__succeeded)
                        *ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__Var_32;
                      else
                      {
                        MR_Integer ll_backend__jumpopt__Var_47 = (MR_Integer) ll_backend__jumpopt__ArgX10_22;
                        MR_Integer ll_backend__jumpopt__Var_48 = (MR_Integer) ll_backend__jumpopt__ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__Var_47, ll_backend__jumpopt__Var_48);
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
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Integer ll_backend__jumpopt__CastX_23 = (MR_Integer) ll_backend__jumpopt__HeadVar__1_1;
    MR_Integer ll_backend__jumpopt__CastY_24 = (MR_Integer) ll_backend__jumpopt__HeadVar__2_2;

    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__CastX_23 == ll_backend__jumpopt__CastY_24);
    if (ll_backend__jumpopt__succeeded)
      ll_backend__jumpopt__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__jumpopt__TypeInfo_26_26;
      MR_Word ll_backend__jumpopt__TypeInfo_27_27;
      MR_Word ll_backend__jumpopt__TypeInfo_28_28;
      MR_Word ll_backend__jumpopt__TypeInfo_29_29;
      MR_Word ll_backend__jumpopt__TypeInfo_30_30;
      MR_Word ll_backend__jumpopt__TypeInfo_31_31;
      MR_Word ll_backend__jumpopt__TypeInfo_32_32;
      MR_Word ll_backend__jumpopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ll_backend__jumpopt__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__jumpopt__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ll_backend__jumpopt__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__jumpopt__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ll_backend__jumpopt__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__jumpopt__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ll_backend__jumpopt__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ll_backend__jumpopt__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ll_backend__jumpopt__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ll_backend__jumpopt__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ll_backend__jumpopt__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ll_backend__jumpopt__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ll_backend__jumpopt__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 9)));

      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_2[0], ((MR_Box) (ll_backend__jumpopt__ArgX1_3)), ((MR_Box) (ll_backend__jumpopt__ArgY1_4)));
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__TypeInfo_26_26 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
        ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_26_26, ((MR_Box) (ll_backend__jumpopt__ArgX2_5)), ((MR_Box) (ll_backend__jumpopt__ArgY2_6)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__TypeInfo_27_27 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[2];
          ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_27_27, ((MR_Box) (ll_backend__jumpopt__ArgX3_7)), ((MR_Box) (ll_backend__jumpopt__ArgY3_8)));
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__TypeInfo_28_28 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
            ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_28_28, ((MR_Box) (ll_backend__jumpopt__ArgX4_9)), ((MR_Box) (ll_backend__jumpopt__ArgY4_10)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__TypeInfo_29_29 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
              ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_29_29, ((MR_Box) (ll_backend__jumpopt__ArgX5_11)), ((MR_Box) (ll_backend__jumpopt__ArgY5_12)));
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__TypeInfo_30_30 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
                ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_30_30, ((MR_Box) (ll_backend__jumpopt__ArgX6_13)), ((MR_Box) (ll_backend__jumpopt__ArgY6_14)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__TypeInfo_31_31 = (MR_Word) &ll_backend__jumpopt_scalar_common_2[1];
                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_31_31, ((MR_Box) (ll_backend__jumpopt__ArgX7_15)), ((MR_Box) (ll_backend__jumpopt__ArgY7_16)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__TypeInfo_32_32 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[2];
                    ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_32_32, ((MR_Box) (ll_backend__jumpopt__ArgX8_17)), ((MR_Box) (ll_backend__jumpopt__ArgY8_18)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__ArgX9_19 == ll_backend__jumpopt__ArgY9_20);
                      if (ll_backend__jumpopt__succeeded)
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__ArgX10_21 == ll_backend__jumpopt__ArgY10_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_6,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Component_0_21,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Component_22,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Redirect_24)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    switch (MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_Component_0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
          *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__jumpopt__Label0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__STATE_VARIABLE_Component_0_21, (MR_Integer) 1)));
              MR_Word ll_backend__jumpopt__Label_10;
              MR_Word ll_backend__jumpopt__Instr0_31;
              MR_Box ll_backend__jumpopt__conv0_Instr0_31;

              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_6, ((MR_Box) (ll_backend__jumpopt__Label0_9)), &ll_backend__jumpopt__conv0_Instr0_31);
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__Instr0_31 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_31);
                ll_backend__jumpopt__succeeded = MR_TRUE;
              }
              if (ll_backend__jumpopt__succeeded)
              {
                MR_Word ll_backend__jumpopt___Instr_32;

                ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_9, &ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Instr0_31, &ll_backend__jumpopt___Instr_32);
              }
              else
                ll_backend__jumpopt__Label_10 = ll_backend__jumpopt__Label0_9;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Label_10));
              }
              ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_10, ll_backend__jumpopt__Label0_9);
              if (ll_backend__jumpopt__succeeded)
                *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
              else
                *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__jumpopt__STATE_VARIABLE_Component_22 = ll_backend__jumpopt__STATE_VARIABLE_Component_0_21;
              *ll_backend__jumpopt__STATE_VARIABLE_Redirect_24 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_0_23;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(
  MR_Word ll_backend__jumpopt__LayoutLabels_13,
  MR_Word ll_backend__jumpopt__MayAlterRtti_14,
  MR_Word ll_backend__jumpopt__ProcLabel_15,
  MR_Word ll_backend__jumpopt__Fulljumpopt_16,
  MR_Word ll_backend__jumpopt__Recjump_17,
  MR_Word ll_backend__jumpopt__PessimizeTailCalls_18,
  MR_Word ll_backend__jumpopt__CheckedNondetTailCall_19,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_Instrs_40,
  MR_Word * ll_backend__jumpopt__Mod_22)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__TypeCtorInfo_72_72 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    MR_Word ll_backend__jumpopt__TypeCtorInfo_73_73 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    MR_Word ll_backend__jumpopt__TypeInfo_74_74;
    MR_Word ll_backend__jumpopt__JumpOptInfo_31;
    MR_Word ll_backend__jumpopt__RevInstrs_34;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
    MR_Word ll_backend__jumpopt__Var_53;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69;

    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeCtorInfo_73_73, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41);
    ll_backend__jumpopt__TypeInfo_74_74 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42);
    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43);
    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44);
    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45);
    mercury__map__init_1_p_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46);
    ll_backend__jumpopt__jump_opt_build_maps_14_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__Recjump_17, ll_backend__jumpopt__STATE_VARIABLE_InstrMap_41_41, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47, ll_backend__jumpopt__STATE_VARIABLE_BlockMap_42_42, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48, ll_backend__jumpopt__STATE_VARIABLE_LvalMap_43_43, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49, ll_backend__jumpopt__STATE_VARIABLE_ProcMap_44_44, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_45_45, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__STATE_VARIABLE_SuccMap_46_46, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52);
    ll_backend__jumpopt__Var_53 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
    ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51, ll_backend__jumpopt__Var_53, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54);
    switch (ll_backend__jumpopt__PessimizeTailCalls_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_50_50;
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_51_51;
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_52_52;
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_54_54;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58 = mercury__map__init_0_f_0(ll_backend__jumpopt__TypeCtorInfo_72_72, ll_backend__jumpopt__TypeInfo_74_74);
        }
        break;
    }
    {
      ll_backend__jumpopt__JumpOptInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 0) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_InstrMap_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_BlockMap_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 2) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_LvalMap_49_49));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 3) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ProcMap_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 4) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 5) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_ForkMap_58_58));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 6) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_SuccMap_57_57));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 7) = ((MR_Box) (ll_backend__jumpopt__LayoutLabels_13));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 8) = ((MR_Box) (ll_backend__jumpopt__Fulljumpopt_16));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_31, 9) = ((MR_Box) (ll_backend__jumpopt__MayAlterRtti_14));
    }
    switch (ll_backend__jumpopt__CheckedNondetTailCall_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__jumpopt__Var_36;

          ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[6]), ll_backend__jumpopt__JumpOptInfo_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__Var_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
          *ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38 = ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo0_32;
          MR_Word ll_backend__jumpopt__CheckedNondetTailCallInfo_33;

          {
            ll_backend__jumpopt__CheckedNondetTailCallInfo0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_15));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_0_37));
          }
          ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[6]), ll_backend__jumpopt__JumpOptInfo_31, ll_backend__jumpopt__CheckedNondetTailCallInfo0_32, &ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevInstrs_34);
          if ((ll_backend__jumpopt__CheckedNondetTailCallInfo_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.optimize_jumps_in_proc\'/12", (MR_String) "lost the next label number");
              return;
            }
          }
          else
          {
            MR_Word ll_backend__jumpopt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Integer) 0)));

            *ll_backend__jumpopt__STATE_VARIABLE_LabelNumCounter_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CheckedNondetTailCallInfo_33, (MR_Integer) 1)));
          }
        }
        break;
    }
    mercury__list__reverse_2_p_0(ll_backend__jumpopt__TypeCtorInfo_73_73, ll_backend__jumpopt__RevInstrs_34, &ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69);
    ll_backend__opt_util__filter_out_bad_livevals_2_p_0(ll_backend__jumpopt__STATE_VARIABLE_Instrs_69_69, ll_backend__jumpopt__STATE_VARIABLE_Instrs_40);
    ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (*ll_backend__jumpopt__STATE_VARIABLE_Instrs_40)), ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_Instrs_0_39)));
    if (ll_backend__jumpopt__succeeded)
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 0;
    else
      *ll_backend__jumpopt__Mod_22 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_goto_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__PrevInstr_12,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49,
  MR_Word * ll_backend__jumpopt__NewRemain_15)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__TargetAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
    MR_Word ll_backend__jumpopt__TargetLabel_17;

    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_16)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__TargetLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_16, (MR_Integer) 0)));
      {
        MR_Word ll_backend__jumpopt__Var_18;

        ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Var_18);
        if (ll_backend__jumpopt__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__jumpopt__NewRemain_15 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
          }
          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
        }
        else
        {
          MR_Word ll_backend__jumpopt__IfTargetLabel_21;
          MR_Word ll_backend__jumpopt__Var_50;
          MR_Word ll_backend__jumpopt__Var_20;
          MR_Word ll_backend__jumpopt__Var_22;

          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 1)));
            ll_backend__jumpopt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 2)));
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__IfTargetLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_50, (MR_Integer) 0)));
              ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__jumpopt__IfTargetLabel_21, ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Var_22);
            }
          }
          if (ll_backend__jumpopt__succeeded)
          {
            MR_Word ll_backend__jumpopt__Var_51;
            MR_Word ll_backend__jumpopt__NewInstrs_83;

            {
              ll_backend__jumpopt__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_51, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_51, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
            }
            {
              ll_backend__jumpopt__NewInstrs_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 0) = ((MR_Box) (ll_backend__jumpopt__Var_51));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__jumpopt__NewRemain_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_83));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
            }
            *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
          }
          else
          {
            MR_Word ll_backend__jumpopt__Between0_24;
            MR_Word ll_backend__jumpopt__ProcMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
            MR_Word ll_backend__jumpopt__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
            MR_Word ll_backend__jumpopt__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
            MR_Word ll_backend__jumpopt__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
            MR_Word ll_backend__jumpopt__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
            MR_Word ll_backend__jumpopt__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
            MR_Word ll_backend__jumpopt__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
            MR_Word ll_backend__jumpopt__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
            MR_Word ll_backend__jumpopt__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
            MR_Word ll_backend__jumpopt__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
            MR_Box ll_backend__jumpopt__conv0_Between0_24;

            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__ProcMap_23, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv0_Between0_24);
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__Between0_24 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_24);
              ll_backend__jumpopt__succeeded = MR_TRUE;
            }
            if (ll_backend__jumpopt__succeeded)
            {
              MR_Word ll_backend__jumpopt__Between_25;
              MR_Word ll_backend__jumpopt__NewInstrs_84;

              ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_24, &ll_backend__jumpopt__Between_25);
              ll_backend__jumpopt__NewInstrs_84 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_25, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[14]));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__NewRemain_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_84));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
              }
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
            }
            else
            {
              MR_Word ll_backend__jumpopt__Between0_101;
              MR_Word ll_backend__jumpopt__SdprocMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
              MR_Word ll_backend__jumpopt__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
              MR_Word ll_backend__jumpopt__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
              MR_Word ll_backend__jumpopt__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
              MR_Word ll_backend__jumpopt__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
              MR_Word ll_backend__jumpopt__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
              MR_Word ll_backend__jumpopt__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
              MR_Word ll_backend__jumpopt__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
              MR_Word ll_backend__jumpopt__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
              MR_Word ll_backend__jumpopt__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
              MR_Box ll_backend__jumpopt__conv1_Between0_101;

              ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SdprocMap_26, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv1_Between0_101);
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__Between0_101 = ((MR_Word) ll_backend__jumpopt__conv1_Between0_101);
                ll_backend__jumpopt__succeeded = MR_TRUE;
              }
              if (ll_backend__jumpopt__succeeded)
              {
                MR_Word ll_backend__jumpopt__NewInstrs_85;
                MR_Word ll_backend__jumpopt__Between_86;

                ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Between0_101, &ll_backend__jumpopt__Between_86);
                ll_backend__jumpopt__NewInstrs_85 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_86, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[14]));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__jumpopt__NewRemain_15 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_85));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                }
                *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
              }
              else
              {
                MR_Word ll_backend__jumpopt__BetweenIncl0_28;
                MR_Word ll_backend__jumpopt__SuccMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                MR_Word ll_backend__jumpopt__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                MR_Word ll_backend__jumpopt__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                MR_Word ll_backend__jumpopt__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                MR_Word ll_backend__jumpopt__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                MR_Word ll_backend__jumpopt__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                MR_Word ll_backend__jumpopt__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                MR_Word ll_backend__jumpopt__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                MR_Word ll_backend__jumpopt__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                MR_Word ll_backend__jumpopt__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                MR_Box ll_backend__jumpopt__conv2_BetweenIncl0_28;

                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ll_backend__jumpopt__SuccMap_27, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv2_BetweenIncl0_28);
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__BetweenIncl0_28 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl0_28);
                  ll_backend__jumpopt__succeeded = MR_TRUE;
                }
                if (ll_backend__jumpopt__succeeded)
                {
                  MR_Word ll_backend__jumpopt__NewInstrs_87;

                  ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__BetweenIncl0_28, &ll_backend__jumpopt__NewInstrs_87);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__jumpopt__NewRemain_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_87));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                  }
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
                }
                else
                {
                  MR_Word ll_backend__jumpopt__DestLabel_31;
                  MR_Word ll_backend__jumpopt__BlockMap_33;
                  MR_Word ll_backend__jumpopt__Block_34;
                  MR_Word ll_backend__jumpopt__TypeCtorInfo_195_195;
                  MR_Word ll_backend__jumpopt__TypeCtorInfo_196_196;
                  MR_Word ll_backend__jumpopt__TypeInfo_197_197;
                  MR_Word ll_backend__jumpopt__InstrMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__TargetInstr_30;
                  MR_Word ll_backend__jumpopt__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_66;
                  MR_Word ll_backend__jumpopt__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                  MR_Box ll_backend__jumpopt__conv3_TargetInstr_30;
                  MR_Word ll_backend__jumpopt___DestInstr_32;
                  MR_Word ll_backend__jumpopt__Var_150;
                  MR_Word ll_backend__jumpopt__Var_151;
                  MR_Word ll_backend__jumpopt__Var_152;
                  MR_Word ll_backend__jumpopt__Var_153;
                  MR_Word ll_backend__jumpopt__Var_154;
                  MR_Word ll_backend__jumpopt__Var_155;
                  MR_Word ll_backend__jumpopt__Var_156;
                  MR_Word ll_backend__jumpopt__Var_157;
                  MR_Word ll_backend__jumpopt__Var_158;
                  MR_Box ll_backend__jumpopt__conv4_Block_34;

                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_65 == (MR_Integer) 1);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__TypeCtorInfo_195_195 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                    ll_backend__jumpopt__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeCtorInfo_196_196, ll_backend__jumpopt__InstrMap_29, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv3_TargetInstr_30);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__TargetInstr_30 = ((MR_Word) ll_backend__jumpopt__conv3_TargetInstr_30);
                      ll_backend__jumpopt__succeeded = MR_TRUE;
                    }
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_29, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_31, ll_backend__jumpopt__TargetInstr_30, &ll_backend__jumpopt___DestInstr_32);
                      ll_backend__jumpopt__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                      ll_backend__jumpopt__BlockMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                      ll_backend__jumpopt__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                      ll_backend__jumpopt__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                      ll_backend__jumpopt__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                      ll_backend__jumpopt__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                      ll_backend__jumpopt__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                      ll_backend__jumpopt__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                      ll_backend__jumpopt__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                      ll_backend__jumpopt__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                      ll_backend__jumpopt__TypeInfo_197_197 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_195_195, ll_backend__jumpopt__TypeInfo_197_197, ll_backend__jumpopt__BlockMap_33, ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), &ll_backend__jumpopt__conv4_Block_34);
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__Block_34 = ((MR_Word) ll_backend__jumpopt__conv4_Block_34);
                        ll_backend__jumpopt__succeeded = MR_TRUE;
                      }
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__Var_66 = ll_backend__jumpopt__block_may_be_duplicated_1_f_0(ll_backend__jumpopt__Block_34);
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_66 == (MR_Integer) 1);
                      }
                    }
                  }
                  if (ll_backend__jumpopt__succeeded)
                  {
                    MR_Word ll_backend__jumpopt__FilteredBlock_35;
                    MR_Word ll_backend__jumpopt__AdjustedBlock_36;
                    MR_Word ll_backend__jumpopt__CrippledBlockMap_37;
                    MR_Word ll_backend__jumpopt__CrippledJumpOptInfo_38;
                    MR_Word ll_backend__jumpopt__RevNewInstrs_39;
                    MR_Word ll_backend__jumpopt__Var_71;
                    MR_Word ll_backend__jumpopt__Var_159;
                    MR_Word ll_backend__jumpopt__Var_161;
                    MR_Word ll_backend__jumpopt__Var_162;
                    MR_Word ll_backend__jumpopt__Var_163;
                    MR_Word ll_backend__jumpopt__Var_164;
                    MR_Word ll_backend__jumpopt__Var_165;
                    MR_Word ll_backend__jumpopt__Var_166;
                    MR_Word ll_backend__jumpopt__Var_167;
                    MR_Word ll_backend__jumpopt__Var_168;
                    MR_Word ll_backend__jumpopt__Var_160;

                    ll_backend__opt_util__filter_out_labels_2_p_0(ll_backend__jumpopt__Block_34, &ll_backend__jumpopt__FilteredBlock_35);
                    ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__FilteredBlock_35, &ll_backend__jumpopt__AdjustedBlock_36);
                    mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__DestLabel_31)), ll_backend__jumpopt__BlockMap_33, &ll_backend__jumpopt__CrippledBlockMap_37);
                    ll_backend__jumpopt__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                    ll_backend__jumpopt__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                    ll_backend__jumpopt__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                    ll_backend__jumpopt__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                    ll_backend__jumpopt__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                    ll_backend__jumpopt__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                    ll_backend__jumpopt__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                    ll_backend__jumpopt__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                    ll_backend__jumpopt__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                    ll_backend__jumpopt__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                    {
                      ll_backend__jumpopt__CrippledJumpOptInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 0) = ((MR_Box) (ll_backend__jumpopt__Var_159));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 1) = ((MR_Box) (ll_backend__jumpopt__CrippledBlockMap_37));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 2) = ((MR_Box) (ll_backend__jumpopt__Var_161));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 3) = ((MR_Box) (ll_backend__jumpopt__Var_162));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 4) = ((MR_Box) (ll_backend__jumpopt__Var_163));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 5) = ((MR_Box) (ll_backend__jumpopt__Var_164));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 6) = ((MR_Box) (ll_backend__jumpopt__Var_165));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 7) = ((MR_Box) (ll_backend__jumpopt__Var_166));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 8) = ((MR_Box) (ll_backend__jumpopt__Var_167));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CrippledJumpOptInfo_38, 9) = ((MR_Box) (ll_backend__jumpopt__Var_168));
                    }
                    ll_backend__jumpopt__jump_opt_instr_list_7_p_0(ll_backend__jumpopt__AdjustedBlock_36, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_3[6]), ll_backend__jumpopt__CrippledJumpOptInfo_38, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__jumpopt__RevNewInstrs_39);
                    ll_backend__jumpopt__Var_71 = mercury__list__reverse_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__RevNewInstrs_39);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__jumpopt__NewRemain_15 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__Var_71));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__InstrMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__TargetInstr_92;
                    MR_Word ll_backend__jumpopt__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                    MR_Word ll_backend__jumpopt__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                    MR_Word ll_backend__jumpopt__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                    MR_Word ll_backend__jumpopt__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                    MR_Word ll_backend__jumpopt__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                    MR_Word ll_backend__jumpopt__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                    MR_Word ll_backend__jumpopt__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                    MR_Word ll_backend__jumpopt__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                    MR_Box ll_backend__jumpopt__conv5_TargetInstr_92;

                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_91, ((MR_Box) (ll_backend__jumpopt__TargetLabel_17)), &ll_backend__jumpopt__conv5_TargetInstr_92);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__TargetInstr_92 = ((MR_Word) ll_backend__jumpopt__conv5_TargetInstr_92);
                      ll_backend__jumpopt__succeeded = MR_TRUE;
                    }
                    if (ll_backend__jumpopt__succeeded)
                    {
                      MR_Word ll_backend__jumpopt__DestInstr_40;
                      MR_Word ll_backend__jumpopt__UdestInstr_41;
                      MR_String ll_backend__jumpopt__Shorted_43;
                      MR_Word ll_backend__jumpopt__Canfallthrough_44;
                      MR_Word ll_backend__jumpopt__NewInstrs0_45;
                      MR_Word ll_backend__jumpopt__LvalMap_46;
                      MR_Word ll_backend__jumpopt__NewInstrs_88;
                      MR_Word ll_backend__jumpopt__DestLabel_89;
                      MR_String ll_backend__jumpopt___Destcomment_42;
                      MR_Word ll_backend__jumpopt__Var_178;
                      MR_Word ll_backend__jumpopt__Var_179;
                      MR_Word ll_backend__jumpopt__Var_180;
                      MR_Word ll_backend__jumpopt__Var_181;
                      MR_Word ll_backend__jumpopt__Var_182;
                      MR_Word ll_backend__jumpopt__Var_183;
                      MR_Word ll_backend__jumpopt__Var_184;
                      MR_Word ll_backend__jumpopt__Var_185;
                      MR_Word ll_backend__jumpopt__Var_186;
                      MR_Word ll_backend__jumpopt__Lvalinstr_47;
                      MR_Word ll_backend__jumpopt__Var_81;
                      MR_Box ll_backend__jumpopt__conv6_Var_81;

                      ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_91, ll_backend__jumpopt__TargetLabel_17, &ll_backend__jumpopt__DestLabel_89, ll_backend__jumpopt__TargetInstr_92, &ll_backend__jumpopt__DestInstr_40);
                      ll_backend__jumpopt__UdestInstr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 0)));
                      ll_backend__jumpopt___Destcomment_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__DestInstr_40, (MR_Integer) 1)));
                      ll_backend__jumpopt__Shorted_43 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                      ll_backend__jumpopt__Canfallthrough_44 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__jumpopt__UdestInstr_41);
                      switch (ll_backend__jumpopt__Canfallthrough_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ll_backend__jumpopt__Var_79;

                            {
                              ll_backend__jumpopt__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_79, 0) = ((MR_Box) (ll_backend__jumpopt__UdestInstr_41));
                              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_79, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
                            }
                            {
                              ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__Var_79));
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_17, ll_backend__jumpopt__DestLabel_89);
                            if (ll_backend__jumpopt__succeeded)
                            {
                              MR_Word ll_backend__jumpopt__Var_73;

                              {
                                ll_backend__jumpopt__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_73, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_73, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
                              }
                              {
                                ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__Var_73));
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                            else
                            {
                              MR_Word ll_backend__jumpopt__Var_75;
                              MR_Word ll_backend__jumpopt__Var_76;
                              MR_Word ll_backend__jumpopt__Var_77;

                              {
                                ll_backend__jumpopt__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_77, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_89));
                              }
                              {
                                ll_backend__jumpopt__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_76, 1) = ((MR_Box) (ll_backend__jumpopt__Var_77));
                              }
                              {
                                ll_backend__jumpopt__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_75, 0) = ((MR_Box) (ll_backend__jumpopt__Var_76));
                                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_75, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_43));
                              }
                              {
                                ll_backend__jumpopt__NewInstrs0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 0) = ((MR_Box) (ll_backend__jumpopt__Var_75));
                                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                          }
                          break;
                      }
                      ll_backend__jumpopt__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                      ll_backend__jumpopt__Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                      ll_backend__jumpopt__LvalMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                      ll_backend__jumpopt__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                      ll_backend__jumpopt__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                      ll_backend__jumpopt__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                      ll_backend__jumpopt__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                      ll_backend__jumpopt__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                      ll_backend__jumpopt__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                      ll_backend__jumpopt__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ll_backend__jumpopt__LvalMap_46, ((MR_Box) (ll_backend__jumpopt__DestLabel_89)), &ll_backend__jumpopt__conv6_Var_81);
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__Var_81 = ((MR_Word) ll_backend__jumpopt__conv6_Var_81);
                        ll_backend__jumpopt__succeeded = MR_TRUE;
                      }
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_81)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__jumpopt__succeeded)
                          ll_backend__jumpopt__Lvalinstr_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_81, (MR_Integer) 0)));
                      }
                      if (ll_backend__jumpopt__succeeded)
                      {
                        MR_Word ll_backend__jumpopt__Var_82;

                        {
                          ll_backend__jumpopt__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_82, 0) = ((MR_Box) (ll_backend__jumpopt__Lvalinstr_47));
                          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_82, 1) = ((MR_Box) (ll_backend__jumpopt__NewInstrs0_45));
                        }
                        ll_backend__jumpopt__adjust_livevals_3_p_0(ll_backend__jumpopt__PrevInstr_12, ll_backend__jumpopt__Var_82, &ll_backend__jumpopt__NewInstrs_88);
                      }
                      else
                        ll_backend__jumpopt__NewInstrs_88 = ll_backend__jumpopt__NewInstrs0_45;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__jumpopt__NewRemain_15 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_88));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                      }
                    }
                    else
                      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
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
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_49 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_48;
    }
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_instr_list_7_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__JumpOptInfo_3,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__jumpopt__succeeded;

      if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_7 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6;
        *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_5 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
      }
      else
      {
        MR_Word ll_backend__jumpopt__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 0)));
        MR_String ll_backend__jumpopt__Comment0_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_16, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__ReplacementInstrsEmpty_119;
        MR_Word ll_backend__jumpopt__RecurseInstrs_120;
        MR_Word ll_backend__jumpopt__NewPrevInstr_125;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

        switch (MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
              ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
              ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
              {
                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
              ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
              ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
              {
                ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", (MR_String) "block");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__jumpopt__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Rval_42;
                  MR_Word ll_backend__jumpopt__InstrMap_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_174, ll_backend__jumpopt__Rval0_41, &ll_backend__jumpopt__Rval_42);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_42, ll_backend__jumpopt__Rval0_41);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_289;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_121;
                    MR_Word ll_backend__jumpopt__Var_155;
                    MR_Word ll_backend__jumpopt__Var_156;
                    MR_Word ll_backend__jumpopt__Var_166;
                    MR_String ll_backend__jumpopt__Shorted_170;

                    ll_backend__jumpopt__Shorted_170 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                    {
                      ll_backend__jumpopt__Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_156, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_40));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_156, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_42));
                    }
                    {
                      ll_backend__jumpopt__Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_155, 0) = ((MR_Box) (ll_backend__jumpopt__Var_156));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_155, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_170));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 0) = ((MR_Box) (ll_backend__jumpopt__Var_155));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_289 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_166 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__ReplacementInstrs_121);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_289, ll_backend__jumpopt__Var_166, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__jumpopt__InstrMap_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Lval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Rval0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Rval_186;
                  MR_Word ll_backend__jumpopt__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_181, ll_backend__jumpopt__Rval0_185, &ll_backend__jumpopt__Rval_186);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__jumpopt__Rval_186, ll_backend__jumpopt__Rval0_185);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_360;
                    MR_Word ll_backend__jumpopt__Var_151;
                    MR_Word ll_backend__jumpopt__Var_152;
                    MR_String ll_backend__jumpopt__Shorted_177;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_358;
                    MR_Word ll_backend__jumpopt__Var_359;

                    ll_backend__jumpopt__Shorted_177 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                    {
                      ll_backend__jumpopt__Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_152, 1) = ((MR_Box) (ll_backend__jumpopt__Lval_184));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_152, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_186));
                    }
                    {
                      ll_backend__jumpopt__Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_151, 0) = ((MR_Box) (ll_backend__jumpopt__Var_152));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_151, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_177));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 0) = ((MR_Box) (ll_backend__jumpopt__Var_151));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_358, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_360 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_359 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__ReplacementInstrs_358);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_360, ll_backend__jumpopt__Var_359, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__jumpopt__NewRemain_386;

                  ll_backend__jumpopt__jump_opt_llcall_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_386);
                  if ((ll_backend__jumpopt__NewRemain_386 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_382;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__Var_381;

                    ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_386, (MR_Integer) 1)));
                    ll_backend__jumpopt__TypeCtorInfo_289_382 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_381 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__ReplacementInstrs_380);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_382, ll_backend__jumpopt__Var_381, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    if ((ll_backend__jumpopt__ReplacementInstrs_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
                    else
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__jumpopt__FrameInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Redoip_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Label0_45;
                  MR_Word ll_backend__jumpopt__Var_143;

                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Redoip_44)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Redoip_44, (MR_Integer) 0)));
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_143)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__jumpopt__succeeded)
                      ll_backend__jumpopt__Label0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_143, (MR_Integer) 0)));
                  }
                  if (ll_backend__jumpopt__succeeded)
                  {
                    MR_Word ll_backend__jumpopt__Label_46;
                    MR_Word ll_backend__jumpopt__InstrMap_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                    MR_Word ll_backend__jumpopt__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                    MR_Word ll_backend__jumpopt__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                    MR_Word ll_backend__jumpopt__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                    MR_Word ll_backend__jumpopt__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                    MR_Word ll_backend__jumpopt__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                    MR_Word ll_backend__jumpopt__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                    MR_Word ll_backend__jumpopt__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                    ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_191, ll_backend__jumpopt__Label0_45, &ll_backend__jumpopt__Label_46);
                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_46, ll_backend__jumpopt__Label0_45);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                      {
                        ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                      }
                    }
                    else
                    {
                      MR_Word ll_backend__jumpopt__TypeCtorInfo_289_392;
                      MR_Word ll_backend__jumpopt__Var_145;
                      MR_Word ll_backend__jumpopt__Var_146;
                      MR_Word ll_backend__jumpopt__Var_147;
                      MR_Word ll_backend__jumpopt__Var_148;
                      MR_String ll_backend__jumpopt__Shorted_187;
                      MR_Word ll_backend__jumpopt__ReplacementInstrs_390;
                      MR_Word ll_backend__jumpopt__Var_391;

                      ll_backend__jumpopt__Shorted_187 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                      {
                        ll_backend__jumpopt__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_148, 0) = ((MR_Box) (ll_backend__jumpopt__Label_46));
                      }
                      {
                        ll_backend__jumpopt__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_147, 0) = ((MR_Box) (ll_backend__jumpopt__Var_148));
                      }
                      {
                        ll_backend__jumpopt__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_146, 1) = ((MR_Box) (ll_backend__jumpopt__FrameInfo_43));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_146, 2) = ((MR_Box) (ll_backend__jumpopt__Var_147));
                      }
                      {
                        ll_backend__jumpopt__Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_145, 0) = ((MR_Box) (ll_backend__jumpopt__Var_146));
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_145, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_187));
                      }
                      {
                        ll_backend__jumpopt__ReplacementInstrs_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 0) = ((MR_Box) (ll_backend__jumpopt__Var_145));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                      ll_backend__jumpopt__TypeCtorInfo_289_392 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                      ll_backend__jumpopt__Var_391 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__ReplacementInstrs_390);
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_392, ll_backend__jumpopt__Var_391, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    }
                  }
                  else
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
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
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                  {
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__jumpopt__NewRemain_334;

                  ll_backend__jumpopt__jump_opt_goto_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__HeadVar__2_2, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_334);
                  if ((ll_backend__jumpopt__NewRemain_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_330;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__Var_329;

                    ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_334, (MR_Integer) 1)));
                    ll_backend__jumpopt__TypeCtorInfo_289_330 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_329 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__ReplacementInstrs_328);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_330, ll_backend__jumpopt__Var_329, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    if ((ll_backend__jumpopt__ReplacementInstrs_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
                    else
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ll_backend__jumpopt__Index_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__MaybeTargets0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__InstrMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__MaybeTargets_35;
                  MR_Word ll_backend__jumpopt__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__InstrMap_34, ll_backend__jumpopt__MaybeTargets0_33, &ll_backend__jumpopt__MaybeTargets_35);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[4], ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35)), ((MR_Box) (ll_backend__jumpopt__MaybeTargets0_33)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_300;
                    MR_String ll_backend__jumpopt__Shorted_36;
                    MR_Word ll_backend__jumpopt__Var_160;
                    MR_Word ll_backend__jumpopt__Var_161;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_298;
                    MR_Word ll_backend__jumpopt__Var_299;

                    ll_backend__jumpopt__Shorted_36 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (some shortcircuits)");
                    {
                      ll_backend__jumpopt__Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_161, 1) = ((MR_Box) (ll_backend__jumpopt__Index_32));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_161, 2) = ((MR_Box) (ll_backend__jumpopt__MaybeTargets_35));
                    }
                    {
                      ll_backend__jumpopt__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_160, 0) = ((MR_Box) (ll_backend__jumpopt__Var_161));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_160, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_36));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 0) = ((MR_Box) (ll_backend__jumpopt__Var_160));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_300 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_299 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__ReplacementInstrs_298);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_300, ll_backend__jumpopt__Var_299, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ll_backend__jumpopt__NewRemain_344;

                  ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_344);
                  if ((ll_backend__jumpopt__NewRemain_344 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_340;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__Var_339;

                    ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_344, (MR_Integer) 1)));
                    ll_backend__jumpopt__TypeCtorInfo_289_340 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_339 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__ReplacementInstrs_338);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_340, ll_backend__jumpopt__Var_339, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    if ((ll_backend__jumpopt__ReplacementInstrs_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
                    else
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 27:
                {
                  MR_Word ll_backend__jumpopt__NewRemain_314;

                  ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(ll_backend__jumpopt__Uinstr0_22, ll_backend__jumpopt__Comment0_23, ll_backend__jumpopt__Instrs0_17, ll_backend__jumpopt__JumpOptInfo_3, ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4, &ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164, &ll_backend__jumpopt__NewRemain_314);
                  if ((ll_backend__jumpopt__NewRemain_314 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_310;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 0)));
                    MR_Word ll_backend__jumpopt__Var_309;

                    ll_backend__jumpopt__RecurseInstrs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewRemain_314, (MR_Integer) 1)));
                    ll_backend__jumpopt__TypeCtorInfo_289_310 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_309 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__ReplacementInstrs_308);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_310, ll_backend__jumpopt__Var_309, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    if ((ll_backend__jumpopt__ReplacementInstrs_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 1;
                    else
                      ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 29:
                {
                  MR_Word ll_backend__jumpopt__SyncTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Child0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Child_62;
                  MR_Word ll_backend__jumpopt__InstrMap_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_200, ll_backend__jumpopt__Child0_61, &ll_backend__jumpopt__Child_62);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_62, ll_backend__jumpopt__Child0_61);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_320;
                    MR_Word ll_backend__jumpopt__Uinstr_63;
                    MR_String ll_backend__jumpopt__Comment_64;
                    MR_Word ll_backend__jumpopt__Instr_65;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_318;
                    MR_Word ll_backend__jumpopt__Var_319;

                    {
                      ll_backend__jumpopt__Uinstr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_60));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_63, 2) = ((MR_Box) (ll_backend__jumpopt__Child_62));
                    }
                    ll_backend__jumpopt__Comment_64 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                    {
                      ll_backend__jumpopt__Instr_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_63));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_65, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_64));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_65));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_320 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_319 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__ReplacementInstrs_318);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_320, ll_backend__jumpopt__Var_319, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 30:
                {
                  MR_Word ll_backend__jumpopt__InstrMap_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Label0_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Label_209;
                  MR_Word ll_backend__jumpopt__SyncTerm_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_207, ll_backend__jumpopt__Label0_208, &ll_backend__jumpopt__Label_209);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Label_209, ll_backend__jumpopt__Label0_208);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_350;
                    MR_Word ll_backend__jumpopt__Uinstr_201;
                    MR_String ll_backend__jumpopt__Comment_202;
                    MR_Word ll_backend__jumpopt__Instr_203;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_348;
                    MR_Word ll_backend__jumpopt__Var_349;

                    {
                      ll_backend__jumpopt__Uinstr_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 1) = ((MR_Box) (ll_backend__jumpopt__SyncTerm_210));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_201, 2) = ((MR_Box) (ll_backend__jumpopt__Label_209));
                    }
                    ll_backend__jumpopt__Comment_202 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                    {
                      ll_backend__jumpopt__Instr_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_201));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_203, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_202));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_203));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_348, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_350 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_349 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__ReplacementInstrs_348);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_350, ll_backend__jumpopt__Var_349, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 32:
                {
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                  {
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                  }
                }
                break;
              case (MR_Integer) 33:
                {
                  MR_Word ll_backend__jumpopt__LCRval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__LCSRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__InstrMap_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Child0_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Child_222;
                  MR_Word ll_backend__jumpopt__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_3, (MR_Integer) 9)));

                  ll_backend__jumpopt__short_circuit_label_3_p_0(ll_backend__jumpopt__InstrMap_220, ll_backend__jumpopt__Child0_221, &ll_backend__jumpopt__Child_222);
                  ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
                  ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__Child_222, ll_backend__jumpopt__Child0_221);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    {
                      ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 0) = ((MR_Box) (ll_backend__jumpopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167, 1) = ((MR_Box) (ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6));
                    }
                  }
                  else
                  {
                    MR_Word ll_backend__jumpopt__TypeCtorInfo_289_370;
                    MR_Word ll_backend__jumpopt__Uinstr_214;
                    MR_String ll_backend__jumpopt__Comment_215;
                    MR_Word ll_backend__jumpopt__Instr_216;
                    MR_Word ll_backend__jumpopt__ReplacementInstrs_368;
                    MR_Word ll_backend__jumpopt__Var_369;

                    {
                      ll_backend__jumpopt__Uinstr_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 1) = ((MR_Box) (ll_backend__jumpopt__LCRval_69));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 2) = ((MR_Box) (ll_backend__jumpopt__LCSRval_70));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_214, 3) = ((MR_Box) (ll_backend__jumpopt__Child_222));
                    }
                    ll_backend__jumpopt__Comment_215 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_23, (MR_String) " (redirect)");
                    {
                      ll_backend__jumpopt__Instr_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_214));
                      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_216, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_215));
                    }
                    {
                      ll_backend__jumpopt__ReplacementInstrs_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_216));
                      MR_hl_field(MR_mktag(1), ll_backend__jumpopt__ReplacementInstrs_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    ll_backend__jumpopt__RecurseInstrs_120 = ll_backend__jumpopt__Instrs0_17;
                    ll_backend__jumpopt__TypeCtorInfo_289_370 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    ll_backend__jumpopt__Var_369 = mercury__list__reverse_1_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__ReplacementInstrs_368);
                    ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167 = mercury__list__f_43_43_2_f_0(ll_backend__jumpopt__TypeCtorInfo_289_370, ll_backend__jumpopt__Var_369, ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6);
                    ll_backend__jumpopt__ReplacementInstrsEmpty_119 = (MR_Integer) 0;
                  }
                }
                break;
            }
            break;
        }
        {
          MR_String ll_backend__jumpopt__Var_124;

          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__jumpopt__succeeded)
            ll_backend__jumpopt__Var_124 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Uinstr0_22, (MR_Integer) 0)));
        }
        if (!(ll_backend__jumpopt__succeeded))
          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__ReplacementInstrsEmpty_119 == (MR_Integer) 1);
        if (ll_backend__jumpopt__succeeded)
          ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__HeadVar__2_2;
        else
          ll_backend__jumpopt__NewPrevInstr_125 = ll_backend__jumpopt__Uinstr0_22;
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__jumpopt__next_value_of_HeadVar__1_1 = ll_backend__jumpopt__RecurseInstrs_120;
          MR_Word ll_backend__jumpopt__next_value_of_HeadVar__2_2 = ll_backend__jumpopt__NewPrevInstr_125;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_164_164;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_RevInstrs_0_6 = ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_167_167;

          ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__next_value_of_HeadVar__1_1;
          ll_backend__jumpopt__HeadVar__2_2 = ll_backend__jumpopt__next_value_of_HeadVar__2_2;
          ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_4 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_CheckedNondetTailCallInfo_0_4;
          ll_backend__jumpopt__STATE_VARIABLE_RevInstrs_0_6 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_RevInstrs_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ll_backend__jumpopt__closure_arg,
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box * ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3,
  MR_Box * ll_backend__jumpopt__wrapper_arg_4)
{
  {
    MR_Box ll_backend__jumpopt__closure = ll_backend__jumpopt__closure_arg;
    MR_Word ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22;
    MR_Word ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24;

    ll_backend__jumpopt__short_circuit_foreign_proc_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__jumpopt__wrapper_arg_1), &ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22, ((MR_Word) ll_backend__jumpopt__wrapper_arg_3), &ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24);
    *ll_backend__jumpopt__wrapper_arg_2 = ((MR_Box) (ll_backend__jumpopt__conv1_STATE_VARIABLE_Component_22));
    *ll_backend__jumpopt__wrapper_arg_4 = ((MR_Box) (ll_backend__jumpopt__conv0_STATE_VARIABLE_Redirect_24));
  }
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36,
  MR_Word * ll_backend__jumpopt__NewRemain_15)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__TypeCtorInfo_57_57;
    MR_Word ll_backend__jumpopt__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
    MR_Word ll_backend__jumpopt__Components0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
    MR_Word ll_backend__jumpopt__MayCallMercury_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
    MR_Word ll_backend__jumpopt__MaybeFixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
    MR_Word ll_backend__jumpopt__MaybeFixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
    MR_Word ll_backend__jumpopt__MaybeFixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
    MR_Word ll_backend__jumpopt__MaybeNoFix0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 7)));
    MR_Word ll_backend__jumpopt__MaybeDefLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 8)));
    MR_Word ll_backend__jumpopt__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 9)));
    MR_Word ll_backend__jumpopt__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 10)));
    MR_Word ll_backend__jumpopt__InstrMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
    MR_Word ll_backend__jumpopt__Components_28;
    MR_Word ll_backend__jumpopt__MaybeNoFix_31;
    MR_Word ll_backend__jumpopt__Var_37;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
    MR_Word ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40;
    MR_Word ll_backend__jumpopt__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
    MR_Word ll_backend__jumpopt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
    MR_Word ll_backend__jumpopt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
    MR_Word ll_backend__jumpopt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
    MR_Word ll_backend__jumpopt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
    MR_Word ll_backend__jumpopt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
    MR_Word ll_backend__jumpopt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
    MR_Word ll_backend__jumpopt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
    MR_Word ll_backend__jumpopt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
    MR_Box ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39;

    {
      ll_backend__jumpopt__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_37, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_37, 1) = ((MR_Box) (ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_37, 3) = ((MR_Box) (ll_backend__jumpopt__InstrMap_27));
    }
    ll_backend__jumpopt__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
    mercury__list__map_foldl_5_p_0(ll_backend__jumpopt__TypeCtorInfo_57_57, ll_backend__jumpopt__TypeCtorInfo_57_57, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ll_backend__jumpopt__Var_37, ll_backend__jumpopt__Components0_17, &ll_backend__jumpopt__Components_28, ((MR_Box) ((MR_Integer) 0)), &ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
    ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39 = ((MR_Word) ll_backend__jumpopt__conv2_STATE_VARIABLE_Redirect_39_39);
    if ((ll_backend__jumpopt__MaybeNoFix0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = ll_backend__jumpopt__STATE_VARIABLE_Redirect_39_39;
    }
    else
    {
      MR_Word ll_backend__jumpopt__NoFix_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix0_22, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__NoFixDest_30;
      MR_Word ll_backend__jumpopt__Instr0_62;
      MR_Box ll_backend__jumpopt__conv3_Instr0_62;

      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_27, ((MR_Box) (ll_backend__jumpopt__NoFix_29)), &ll_backend__jumpopt__conv3_Instr0_62);
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__Instr0_62 = ((MR_Word) ll_backend__jumpopt__conv3_Instr0_62);
        ll_backend__jumpopt__succeeded = MR_TRUE;
      }
      if (ll_backend__jumpopt__succeeded)
      {
        MR_Word ll_backend__jumpopt___Instr_63;

        ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__NoFix_29, &ll_backend__jumpopt__NoFixDest_30, ll_backend__jumpopt__Instr0_62, &ll_backend__jumpopt___Instr_63);
      }
      else
        ll_backend__jumpopt__NoFixDest_30 = ll_backend__jumpopt__NoFix_29;
      {
        ll_backend__jumpopt__MaybeNoFix_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeNoFix_31, 0) = ((MR_Box) (ll_backend__jumpopt__NoFixDest_30));
      }
      ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40 = (MR_Integer) 1;
    }
    switch (ll_backend__jumpopt__STATE_VARIABLE_Redirect_40_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__jumpopt__Comment_32;
          MR_Word ll_backend__jumpopt__Uinstr_33;
          MR_Word ll_backend__jumpopt__Instr_34;
          MR_Word ll_backend__jumpopt__Var_42;

          ll_backend__jumpopt__Comment_32 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (some redirects)");
          {
            ll_backend__jumpopt__Uinstr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 1) = ((MR_Box) (ll_backend__jumpopt__Decls_16));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 2) = ((MR_Box) (ll_backend__jumpopt__Components_28));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 3) = ((MR_Box) (ll_backend__jumpopt__MayCallMercury_18));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 4) = ((MR_Box) (ll_backend__jumpopt__MaybeFixNoLayout_19));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 5) = ((MR_Box) (ll_backend__jumpopt__MaybeFixLayout_20));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 6) = ((MR_Box) (ll_backend__jumpopt__MaybeFixOnlyLayout_21));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 7) = ((MR_Box) (ll_backend__jumpopt__MaybeNoFix_31));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 8) = ((MR_Box) (ll_backend__jumpopt__MaybeDefLabel_23));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 9) = ((MR_Box) (ll_backend__jumpopt__StackSlotRef_24));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_33, 10) = ((MR_Box) (ll_backend__jumpopt__MaybeDup_25));
          }
          {
            ll_backend__jumpopt__Instr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr_33));
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_34, 1) = ((MR_Box) (ll_backend__jumpopt__Comment_32));
          }
          {
            ll_backend__jumpopt__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_42, 0) = ((MR_Box) (ll_backend__jumpopt__Instr_34));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__jumpopt__NewRemain_15 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__Var_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
          }
        }
        break;
    }
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_36 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_35;
  }
}

static void MR_CALL 
ll_backend__jumpopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70,
  MR_Word * ll_backend__jumpopt__NewRemain_15)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
    MR_Word ll_backend__jumpopt__TargetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
    MR_Word ll_backend__jumpopt__TargetLabel_18;

    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__TargetAddr_17)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__TargetLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__TargetAddr_17, (MR_Integer) 0)));
      {
        MR_Word ll_backend__jumpopt__InstrMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__BlockMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__LayoutLabels_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
        MR_Word ll_backend__jumpopt__Fulljumpopt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
        MR_Word ll_backend__jumpopt___LvalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
        MR_Word ll_backend__jumpopt___ProcMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
        MR_Word ll_backend__jumpopt___SdprocMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
        MR_Word ll_backend__jumpopt___ForkMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
        MR_Word ll_backend__jumpopt___SuccMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
        MR_Word ll_backend__jumpopt___MayAlterRtti_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
        MR_Word ll_backend__jumpopt__AfterGoto_36;
        MR_Word ll_backend__jumpopt__GotoTarget_38;
        MR_String ll_backend__jumpopt__GotoComment_39;
        MR_Word ll_backend__jumpopt__Instrs1_29;
        MR_Word ll_backend__jumpopt__Instr1_30;
        MR_Word ll_backend__jumpopt__Instrs2_31;
        MR_Word ll_backend__jumpopt__GotoInstr_35;
        MR_Word ll_backend__jumpopt__HaveLabel_37;
        MR_Word ll_backend__jumpopt__AfterGotoComments_41;
        MR_Word ll_backend__jumpopt__LabelInstr_42;
        MR_Word ll_backend__jumpopt__Var_72;
        MR_Word ll_backend__jumpopt__Var_73;
        MR_Word ll_backend__jumpopt__Var_134;
        MR_Word ll_backend__jumpopt__ElimLabel_32;
        MR_Word ll_backend__jumpopt__Var_71;
        MR_String ll_backend__jumpopt__Var_33;
        MR_Word ll_backend__jumpopt__Var_43;
        MR_String ll_backend__jumpopt__Var_44;

        ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_29);
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_29)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Instr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 0)));
          ll_backend__jumpopt__Instrs2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_29, (MR_Integer) 1)));
          ll_backend__jumpopt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 0)));
          ll_backend__jumpopt__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_30, (MR_Integer) 1)));
          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_71, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__ElimLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_71, (MR_Integer) 1)));
            {
              MR_Word ll_backend__jumpopt__Instrs3_34;

              ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__ElimLabel_32)), ll_backend__jumpopt__LayoutLabels_26);
              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs2_31, &ll_backend__jumpopt__Instrs3_34);
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs3_34)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__GotoInstr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 0)));
                  ll_backend__jumpopt__AfterGoto_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs3_34, (MR_Integer) 1)));
                  ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 1;
                  ll_backend__jumpopt__succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            ll_backend__jumpopt__GotoInstr_35 = ll_backend__jumpopt__Instr1_30;
            ll_backend__jumpopt__AfterGoto_36 = ll_backend__jumpopt__Instrs2_31;
            ll_backend__jumpopt__HaveLabel_37 = (MR_Integer) 0;
            ll_backend__jumpopt__succeeded = MR_TRUE;
          }
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 0)));
            ll_backend__jumpopt__GotoComment_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_35, (MR_Integer) 1)));
            ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__GotoTarget_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_72, (MR_Integer) 1)));
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__HaveLabel_37 == (MR_Integer) 0);
              if (!(ll_backend__jumpopt__succeeded))
              {
                MR_Word ll_backend__jumpopt__Var_40;

                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoTarget_38)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__jumpopt__succeeded)
                  ll_backend__jumpopt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoTarget_38, (MR_Integer) 0)));
              }
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__AfterGoto_36, &ll_backend__jumpopt__AfterGotoComments_41);
                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__AfterGotoComments_41)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__LabelInstr_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 0)));
                  ll_backend__jumpopt__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__AfterGotoComments_41, (MR_Integer) 1)));
                  ll_backend__jumpopt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 0)));
                  ll_backend__jumpopt__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__LabelInstr_42, (MR_Integer) 1)));
                  ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_73, (MR_Integer) 1)));
                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__Var_134);
                  }
                }
              }
            }
          }
        }
        if (ll_backend__jumpopt__succeeded)
        {
          MR_Word ll_backend__jumpopt__NotCond_45;
          MR_Word ll_backend__jumpopt__NewInstr_46;
          MR_Word ll_backend__jumpopt__RemainInstrs_48;
          MR_Word ll_backend__jumpopt__Var_74;

          ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_45);
          {
            ll_backend__jumpopt__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_74, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_45));
            MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_74, 2) = ((MR_Box) (ll_backend__jumpopt__GotoTarget_38));
          }
          {
            ll_backend__jumpopt__NewInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 0) = ((MR_Box) (ll_backend__jumpopt__Var_74));
            MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewInstr_46, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_39));
          }
          {
            ll_backend__jumpopt__RemainInstrs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstr_46));
            MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_48, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__jumpopt__NewRemain_15 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_48));
          }
        }
        else
        {
          MR_Word ll_backend__jumpopt__GotoAddr_50;
          MR_Word ll_backend__jumpopt__AfterGoto_121;
          MR_String ll_backend__jumpopt__GotoComment_122;
          MR_Word ll_backend__jumpopt__TypeCtorInfo_127_127;
          MR_Word ll_backend__jumpopt__TypeInfo_128_128;
          MR_Word ll_backend__jumpopt__Var_75;
          MR_Word ll_backend__jumpopt__Instrs1_108;
          MR_Word ll_backend__jumpopt__GotoInstr_109;
          MR_Word ll_backend__jumpopt___TargetBlock_49;
          MR_Box ll_backend__jumpopt__conv0__TargetBlock_49;
          MR_Word ll_backend__jumpopt__GotoLabel_51;
          MR_Word ll_backend__jumpopt__Var_52;
          MR_Box ll_backend__jumpopt__conv1_Var_52;

          ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Fulljumpopt_27 == (MR_Integer) 1);
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            ll_backend__jumpopt__TypeInfo_128_128 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv0__TargetBlock_49);
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt___TargetBlock_49 = ((MR_Word) ll_backend__jumpopt__conv0__TargetBlock_49);
              ll_backend__jumpopt__succeeded = MR_TRUE;
            }
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__Instrs1_108);
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_108)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__GotoInstr_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 0)));
                ll_backend__jumpopt__AfterGoto_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_108, (MR_Integer) 1)));
                ll_backend__jumpopt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 0)));
                ll_backend__jumpopt__GotoComment_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__GotoInstr_109, (MR_Integer) 1)));
                ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__GotoAddr_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_75, (MR_Integer) 1)));
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__GotoAddr_50)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__GotoLabel_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__GotoAddr_50, (MR_Integer) 0)));
                    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_127_127, ll_backend__jumpopt__TypeInfo_128_128, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__GotoLabel_51)), &ll_backend__jumpopt__conv1_Var_52);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__Var_52 = ((MR_Word) ll_backend__jumpopt__conv1_Var_52);
                      ll_backend__jumpopt__succeeded = MR_TRUE;
                    }
                  }
                  ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                }
              }
            }
          }
          if (ll_backend__jumpopt__succeeded)
          {
            MR_Word ll_backend__jumpopt__NewIfInstr_53;
            MR_String ll_backend__jumpopt__NewGotoComment_54;
            MR_Word ll_backend__jumpopt__NewGotoInstr_55;
            MR_Word ll_backend__jumpopt__Var_76;
            MR_Word ll_backend__jumpopt__Var_79;
            MR_Word ll_backend__jumpopt__NotCond_110;
            MR_Word ll_backend__jumpopt__NewInstrs_111;
            MR_Word ll_backend__jumpopt__RemainInstrs_112;

            ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NotCond_110);
            {
              ll_backend__jumpopt__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_76, 1) = ((MR_Box) (ll_backend__jumpopt__NotCond_110));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_76, 2) = ((MR_Box) (ll_backend__jumpopt__GotoAddr_50));
            }
            {
              ll_backend__jumpopt__NewIfInstr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 0) = ((MR_Box) (ll_backend__jumpopt__Var_76));
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewIfInstr_53, 1) = ((MR_Box) (ll_backend__jumpopt__GotoComment_122));
            }
            {
              ll_backend__jumpopt__NewInstrs_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 0) = ((MR_Box) (ll_backend__jumpopt__NewIfInstr_53));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ll_backend__jumpopt__NewGotoComment_54 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment0_10, (MR_String) " (switched)");
            {
              ll_backend__jumpopt__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_79, 1) = ((MR_Box) (ll_backend__jumpopt__TargetAddr_17));
            }
            {
              ll_backend__jumpopt__NewGotoInstr_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 0) = ((MR_Box) (ll_backend__jumpopt__Var_79));
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewGotoInstr_55, 1) = ((MR_Box) (ll_backend__jumpopt__NewGotoComment_54));
            }
            {
              ll_backend__jumpopt__RemainInstrs_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 0) = ((MR_Box) (ll_backend__jumpopt__NewGotoInstr_55));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RemainInstrs_112, 1) = ((MR_Box) (ll_backend__jumpopt__AfterGoto_121));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__jumpopt__NewRemain_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_111));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__RemainInstrs_112));
            }
          }
          else
          {
            MR_Word ll_backend__jumpopt__TargetInstr_56;
            MR_Box ll_backend__jumpopt__conv2_TargetInstr_56;

            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_19, ((MR_Box) (ll_backend__jumpopt__TargetLabel_18)), &ll_backend__jumpopt__conv2_TargetInstr_56);
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__TargetInstr_56 = ((MR_Word) ll_backend__jumpopt__conv2_TargetInstr_56);
              ll_backend__jumpopt__succeeded = MR_TRUE;
            }
            if (ll_backend__jumpopt__succeeded)
            {
              MR_Word ll_backend__jumpopt__DestLabel_57;
              MR_Word ll_backend__jumpopt___DestInstr_58;
              MR_Word ll_backend__jumpopt__Between_63;
              MR_Word ll_backend__jumpopt__NewCond_65;
              MR_Word ll_backend__jumpopt__TypeCtorInfo_131_131;
              MR_Word ll_backend__jumpopt__TypeInfo_132_132;
              MR_Word ll_backend__jumpopt__TypeInfo_137_137;
              MR_Word ll_backend__jumpopt__BetweenFT_59;
              MR_Word ll_backend__jumpopt__Block_60;
              MR_Word ll_backend__jumpopt__BetweenBR_61;
              MR_Word ll_backend__jumpopt__SuccessFT_62;
              MR_Word ll_backend__jumpopt__SuccessBR_64;
              MR_Word ll_backend__jumpopt__Var_81;
              MR_Word ll_backend__jumpopt__Var_82;
              MR_Word ll_backend__jumpopt__Var_135;
              MR_Box ll_backend__jumpopt__conv3_Block_60;
              MR_Word ll_backend__jumpopt__Var_83;
              MR_Word ll_backend__jumpopt__Var_84;
              MR_Integer ll_backend__jumpopt__Var_85;

              ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_19, ll_backend__jumpopt__TargetLabel_18, &ll_backend__jumpopt__DestLabel_57, ll_backend__jumpopt__TargetInstr_56, &ll_backend__jumpopt___DestInstr_58);
              ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs0_11, &ll_backend__jumpopt__BetweenFT_59);
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                ll_backend__jumpopt__TypeInfo_132_132 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_131_131, ll_backend__jumpopt__TypeInfo_132_132, ll_backend__jumpopt__BlockMap_20, ((MR_Box) (ll_backend__jumpopt__DestLabel_57)), &ll_backend__jumpopt__conv3_Block_60);
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Block_60 = ((MR_Word) ll_backend__jumpopt__conv3_Block_60);
                  ll_backend__jumpopt__succeeded = MR_TRUE;
                }
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Block_60, &ll_backend__jumpopt__BetweenBR_61);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenFT_59, &ll_backend__jumpopt__Var_81, &ll_backend__jumpopt__Between_63);
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_81)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__SuccessFT_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_81, (MR_Integer) 0)));
                      ll_backend__opt_util__filter_out_r1_3_p_0(ll_backend__jumpopt__BetweenBR_61, &ll_backend__jumpopt__Var_82, &ll_backend__jumpopt__Var_135);
                      ll_backend__jumpopt__TypeInfo_137_137 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__jumpopt__TypeInfo_137_137, ((MR_Box) (ll_backend__jumpopt__Between_63)), ((MR_Box) (ll_backend__jumpopt__Var_135)));
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_82)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__SuccessBR_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_82, (MR_Integer) 0)));
                          if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                          {
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__jumpopt__succeeded)
                            {
                              ll_backend__jumpopt__NewCond_65 = ll_backend__jumpopt__Cond_16;
                              ll_backend__jumpopt__succeeded = MR_TRUE;
                            }
                          }
                          else
                          if ((ll_backend__jumpopt__SuccessFT_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__SuccessBR_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                            if (ll_backend__jumpopt__succeeded)
                            {
                              ll_backend__code_util__neg_rval_2_p_0(ll_backend__jumpopt__Cond_16, &ll_backend__jumpopt__NewCond_65);
                              ll_backend__jumpopt__succeeded = MR_TRUE;
                            }
                          }
                          else
                            ll_backend__jumpopt__succeeded = MR_FALSE;
                          if (ll_backend__jumpopt__succeeded)
                          {
                            ll_backend__jumpopt__Var_84 = (MR_Integer) 0;
                            ll_backend__jumpopt__Var_85 = (MR_Integer) 1;
                            ll_backend__jumpopt__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[16]);
                            ll_backend__jumpopt__succeeded = ll_backend__jumpopt__needs_workaround_2_p_0(ll_backend__jumpopt__Var_83, ll_backend__jumpopt__NewCond_65);
                            ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (ll_backend__jumpopt__succeeded)
              {
                MR_Word ll_backend__jumpopt__NewAssign_66;
                MR_Word ll_backend__jumpopt__Var_100;
                MR_Word ll_backend__jumpopt__NewInstrs_113;
                MR_Word ll_backend__jumpopt__Var_86;
                MR_Word ll_backend__jumpopt__Var_87;
                MR_Integer ll_backend__jumpopt__Var_88;

                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__NewCond_65)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewCond_65, (MR_Integer) 0)));
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_86)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_86, (MR_Integer) 0)));
                    ll_backend__jumpopt__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_86, (MR_Integer) 1)));
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_87 == (MR_Integer) 0);
                    if (ll_backend__jumpopt__succeeded)
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_88 == (MR_Integer) 1);
                  }
                }
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__NewAssign_66 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[17];
                }
                else
                {
                  MR_Word ll_backend__jumpopt__Var_92;

                  {
                    ll_backend__jumpopt__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[16])));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_92, 2) = ((MR_Box) (ll_backend__jumpopt__NewCond_65));
                  }
                  {
                    ll_backend__jumpopt__NewAssign_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 0) = ((MR_Box) (ll_backend__jumpopt__Var_92));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewAssign_66, 1) = ((MR_Box) ((MR_String) "shortcircuit bool computation"));
                  }
                }
                {
                  ll_backend__jumpopt__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_100, 0) = ((MR_Box) (ll_backend__jumpopt__NewAssign_66));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_100, 1) = ((MR_Box) (ll_backend__jumpopt__Between_63));
                }
                ll_backend__jumpopt__NewInstrs_113 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Var_100, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__jumpopt_scalar_common_1[20]));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__jumpopt__NewRemain_15 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_113));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                }
              }
              else
              {
                ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__TargetLabel_18, ll_backend__jumpopt__DestLabel_57);
                ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
                if (ll_backend__jumpopt__succeeded)
                {
                  MR_String ll_backend__jumpopt__Shorted_68;
                  MR_Word ll_backend__jumpopt__Var_104;
                  MR_Word ll_backend__jumpopt__Var_105;
                  MR_Word ll_backend__jumpopt__Var_106;
                  MR_Word ll_backend__jumpopt__NewInstrs_114;

                  ll_backend__jumpopt__Shorted_68 = mercury__string__f_43_43_2_f_0((MR_String) "shortcircuited jump: ", ll_backend__jumpopt__Comment0_10);
                  {
                    ll_backend__jumpopt__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_106, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_57));
                  }
                  {
                    ll_backend__jumpopt__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_105, 1) = ((MR_Box) (ll_backend__jumpopt__Cond_16));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_105, 2) = ((MR_Box) (ll_backend__jumpopt__Var_106));
                  }
                  {
                    ll_backend__jumpopt__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_104, 0) = ((MR_Box) (ll_backend__jumpopt__Var_105));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_104, 1) = ((MR_Box) (ll_backend__jumpopt__Shorted_68));
                  }
                  {
                    ll_backend__jumpopt__NewInstrs_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 0) = ((MR_Box) (ll_backend__jumpopt__Var_104));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__jumpopt__NewRemain_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_114));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                  }
                }
                else
                  *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            }
            else
              *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
      }
    }
    else
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_70 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_69;
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt__needs_workaround_2_p_0(
  MR_Word ll_backend__jumpopt__Lval_3,
  MR_Word ll_backend__jumpopt__Cond_4)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
    {
      MR_Word ll_backend__jumpopt__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__Right_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 3)));

      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Op_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Op_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
        ll_backend__jumpopt__succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) ll_backend__jumpopt__Op_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Op_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
        ll_backend__jumpopt__succeeded = MR_TRUE;
      else
        ll_backend__jumpopt__succeeded = MR_FALSE;
      if (ll_backend__jumpopt__succeeded)
        switch (MR_tag((MR_Word) ll_backend__jumpopt__Left_6)) {
          default:
            ll_backend__jumpopt__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__jumpopt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));

              ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__Var_30);
              if (ll_backend__jumpopt__succeeded)
              {
                if (((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Integer ll_backend__jumpopt__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_12;
                  MR_Word ll_backend__jumpopt__Var_13;
                  MR_Word ll_backend__jumpopt__Var_14;
                  MR_Integer ll_backend__jumpopt__Var_15;

                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_10 == (MR_Integer) 0);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_11, (MR_Integer) 1)));
                      ll_backend__jumpopt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_11, (MR_Integer) 2)));
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_13, (MR_Integer) 1)));
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_14)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__jumpopt__succeeded)
                          {
                            ll_backend__jumpopt__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_14, (MR_Integer) 0)));
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_15 == (MR_Integer) 0);
                          }
                        }
                      }
                    }
                  }
                }
                else
                if (((((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word ll_backend__jumpopt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Right_7, (MR_Integer) 1)));
                  MR_Integer ll_backend__jumpopt__Var_17;

                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_16)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_16, (MR_Integer) 0)));
                    ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_17 == (MR_Integer) 0);
                  }
                }
                else
                  ll_backend__jumpopt__succeeded = MR_FALSE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ll_backend__jumpopt__Var_18;
              MR_Word ll_backend__jumpopt__Var_19;
              MR_Word ll_backend__jumpopt__Var_20;
              MR_Word ll_backend__jumpopt__Var_21;
              MR_Word ll_backend__jumpopt__Var_22;
              MR_Integer ll_backend__jumpopt__Var_23;
              MR_Word ll_backend__jumpopt__Var_31;

              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
                ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__Var_31);
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 0)));
                  ll_backend__jumpopt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_18 == (MR_Integer) 0);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_19, (MR_Integer) 1)));
                      ll_backend__jumpopt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_19, (MR_Integer) 2)));
                      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_21, (MR_Integer) 1)));
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_22)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__jumpopt__succeeded)
                          {
                            ll_backend__jumpopt__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_22, (MR_Integer) 0)));
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_23 == (MR_Integer) 0);
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
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 0)))) {
              default:
                ll_backend__jumpopt__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__jumpopt__Var_24;
                  MR_Integer ll_backend__jumpopt__Var_25;
                  MR_Word ll_backend__jumpopt__Var_29;

                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Right_7)) == (MR_mktag((MR_Integer) 0)));
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Right_7, (MR_Integer) 0)));
                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__Var_29);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Left_6, (MR_Integer) 1)));
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_24)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_24, (MR_Integer) 0)));
                        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_25 == (MR_Integer) 0);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
    }
    else
    if (((((MR_tag((MR_Word) ll_backend__jumpopt__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
    {
      MR_Word ll_backend__jumpopt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Cond_4, (MR_Integer) 2)));
      MR_Word ll_backend__jumpopt__Var_28;

      ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_27)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_27, (MR_Integer) 0)));
          ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__jumpopt__Lval_3, ll_backend__jumpopt__Var_28);
        }
      }
    }
    else
      ll_backend__jumpopt__succeeded = MR_FALSE;
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_4,
  MR_Word ll_backend__jumpopt__Rval0_5,
  MR_Word * ll_backend__jumpopt__Rval_6)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    switch (MR_tag((MR_Word) ll_backend__jumpopt__Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__jumpopt__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
          MR_Word ll_backend__jumpopt__Lval_8;

          switch (MR_tag((MR_Word) ll_backend__jumpopt__Lval0_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__jumpopt__Lval_8 = ll_backend__jumpopt__Lval0_7;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              ll_backend__jumpopt__Lval_8 = ll_backend__jumpopt__Lval0_7;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 11:
                  ll_backend__jumpopt__Lval_8 = ll_backend__jumpopt__Lval0_7;
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_71;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_70, &ll_backend__jumpopt__Rval_71);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_71));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_90;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_89, &ll_backend__jumpopt__Rval_90);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_90));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_86;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_85, &ll_backend__jumpopt__Rval_86);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_86));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_88;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_87, &ll_backend__jumpopt__Rval_88);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_88));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_92;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_91, &ll_backend__jumpopt__Rval_92);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_92));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word ll_backend__jumpopt__Tag_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Field0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 3)));
                    MR_Word ll_backend__jumpopt__Field_74;
                    MR_Word ll_backend__jumpopt__Rval0_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 2)));
                    MR_Word ll_backend__jumpopt__Rval_94;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_93, &ll_backend__jumpopt__Rval_94);
                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Field0_73, &ll_backend__jumpopt__Field_74);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Tag_72));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 2) = ((MR_Box) (ll_backend__jumpopt__Rval_94));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 3) = ((MR_Box) (ll_backend__jumpopt__Field_74));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word ll_backend__jumpopt__Rval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval0_7, (MR_Integer) 1)));
                    MR_Word ll_backend__jumpopt__Rval_96;

                    ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__Rval0_95, &ll_backend__jumpopt__Rval_96);
                    {
                      ll_backend__jumpopt__Lval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Lval_8, 1) = ((MR_Box) (ll_backend__jumpopt__Rval_96));
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_lval\'/3", (MR_String) "lvar");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__jumpopt__Rval_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__jumpopt__Lval_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.short_circuit_labels_rval\'/3", (MR_String) "var");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__jumpopt__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)));
          MR_Word ll_backend__jumpopt__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
          MR_Word ll_backend__jumpopt__SubRval_12;

          ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_11, &ll_backend__jumpopt__SubRval_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__jumpopt__Rval_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__jumpopt__Tag_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__jumpopt__SubRval_12));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
            *ll_backend__jumpopt__Rval_6 = ll_backend__jumpopt__Rval0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__jumpopt__Const0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__jumpopt__Const_14;

              switch (MR_tag((MR_Word) ll_backend__jumpopt__Const0_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 0)))) {
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
                    case (MR_Integer) 11:
                      ll_backend__jumpopt__Const_14 = ll_backend__jumpopt__Const0_13;
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word ll_backend__jumpopt__CodeAddr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const0_13, (MR_Integer) 1)));
                        MR_Word ll_backend__jumpopt__CodeAddr_48;
                        MR_Word ll_backend__jumpopt__Label0_46;

                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CodeAddr0_45)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__Label0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr0_45, (MR_Integer) 0)));
                          {
                            MR_Word ll_backend__jumpopt__Label_47;
                            MR_Word ll_backend__jumpopt__Instr0_53;
                            MR_Box ll_backend__jumpopt__conv0_Instr0_53;

                            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_46)), &ll_backend__jumpopt__conv0_Instr0_53);
                            if (ll_backend__jumpopt__succeeded)
                            {
                              ll_backend__jumpopt__Instr0_53 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_53);
                              ll_backend__jumpopt__succeeded = MR_TRUE;
                            }
                            if (ll_backend__jumpopt__succeeded)
                            {
                              MR_Word ll_backend__jumpopt___Instr_54;

                              ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_46, &ll_backend__jumpopt__Label_47, ll_backend__jumpopt__Instr0_53, &ll_backend__jumpopt___Instr_54);
                            }
                            else
                              ll_backend__jumpopt__Label_47 = ll_backend__jumpopt__Label0_46;
                            {
                              ll_backend__jumpopt__CodeAddr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CodeAddr_48, 0) = ((MR_Box) (ll_backend__jumpopt__Label_47));
                            }
                          }
                        }
                        else
                          ll_backend__jumpopt__CodeAddr_48 = ll_backend__jumpopt__CodeAddr0_45;
                        {
                          ll_backend__jumpopt__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                          MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Const_14, 1) = ((MR_Box) (ll_backend__jumpopt__CodeAddr_48));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Const_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__jumpopt__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__jumpopt__SubRval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
              MR_Word ll_backend__jumpopt__SubRval_26;

              ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__SubRval0_25, &ll_backend__jumpopt__SubRval_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__SubRval_26));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__jumpopt__LRval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 2)));
              MR_Word ll_backend__jumpopt__RRval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 3)));
              MR_Word ll_backend__jumpopt__LRval_18;
              MR_Word ll_backend__jumpopt__RRval_19;
              MR_Word ll_backend__jumpopt__Op_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Rval0_5, (MR_Integer) 1)));

              ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__LRval0_16, &ll_backend__jumpopt__LRval_18);
              ll_backend__jumpopt__short_circuit_labels_rval_3_p_0(ll_backend__jumpopt__InstrMap_4, ll_backend__jumpopt__RRval0_17, &ll_backend__jumpopt__RRval_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__jumpopt__Op_27));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__jumpopt__LRval_18));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__jumpopt__RRval_19));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word * ll_backend__jumpopt__HeadVar__3_3)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    if ((ll_backend__jumpopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__jumpopt__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ll_backend__jumpopt__MaybeLabel0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__jumpopt__MaybeLabels0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__jumpopt__MaybeLabel_8;
      MR_Word ll_backend__jumpopt__MaybeLabels_9;

      if ((ll_backend__jumpopt__MaybeLabel0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ll_backend__jumpopt__Label0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel0_6, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__Label_11;
        MR_Word ll_backend__jumpopt__Instr0_15;
        MR_Box ll_backend__jumpopt__conv0_Instr0_15;

        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__HeadVar__1_1, ((MR_Box) (ll_backend__jumpopt__Label0_10)), &ll_backend__jumpopt__conv0_Instr0_15);
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Instr0_15 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_15);
          ll_backend__jumpopt__succeeded = MR_TRUE;
        }
        if (ll_backend__jumpopt__succeeded)
        {
          MR_Word ll_backend__jumpopt___Instr_16;

          ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_10, &ll_backend__jumpopt__Label_11, ll_backend__jumpopt__Instr0_15, &ll_backend__jumpopt___Instr_16);
        }
        else
          ll_backend__jumpopt__Label_11 = ll_backend__jumpopt__Label0_10;
        {
          ll_backend__jumpopt__MaybeLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__MaybeLabel_8, 0) = ((MR_Box) (ll_backend__jumpopt__Label_11));
        }
      }
      ll_backend__jumpopt__short_circuit_maybe_labels_3_p_0(ll_backend__jumpopt__HeadVar__1_1, ll_backend__jumpopt__MaybeLabels0_7, &ll_backend__jumpopt__MaybeLabels_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__jumpopt__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__MaybeLabel_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__MaybeLabels_9));
      }
    }
  }
}

static void MR_CALL 
ll_backend__jumpopt__short_circuit_label_3_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_4,
  MR_Word ll_backend__jumpopt__Label0_5,
  MR_Word * ll_backend__jumpopt__Label_6)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__Instr0_7;
    MR_Box ll_backend__jumpopt__conv0_Instr0_7;

    ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_4, ((MR_Box) (ll_backend__jumpopt__Label0_5)), &ll_backend__jumpopt__conv0_Instr0_7);
    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__Instr0_7 = ((MR_Word) ll_backend__jumpopt__conv0_Instr0_7);
      ll_backend__jumpopt__succeeded = MR_TRUE;
    }
    if (ll_backend__jumpopt__succeeded)
    {
      MR_Word ll_backend__jumpopt___Instr_8;

      ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__Label0_5, ll_backend__jumpopt__Label_6, ll_backend__jumpopt__Instr0_7, &ll_backend__jumpopt___Instr_8);
    }
    else
      *ll_backend__jumpopt__Label_6 = ll_backend__jumpopt__Label0_5;
  }
}

static void MR_CALL 
ll_backend__jumpopt__adjust_livevals_3_p_0(
  MR_Word ll_backend__jumpopt__PrevInstr_4,
  MR_Word ll_backend__jumpopt__Instrs0_5,
  MR_Word * ll_backend__jumpopt__Instrs_6)
{
  {
    MR_bool ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_4)) == (MR_mktag((MR_Integer) 2)));
    MR_Word ll_backend__jumpopt__PrevLivevals_7;
    MR_Word ll_backend__jumpopt__BetweenLivevals_9;
    MR_Word ll_backend__jumpopt__Instrs2_11;
    MR_Word ll_backend__jumpopt__Instrs1_8;
    MR_Word ll_backend__jumpopt__Var_12;
    MR_Word ll_backend__jumpopt__Var_13;
    MR_String ll_backend__jumpopt__Var_10;

    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__PrevLivevals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_4, (MR_Integer) 0)));
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_5, &ll_backend__jumpopt__Instrs1_8);
      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_8)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 0)));
        ll_backend__jumpopt__Instrs2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_8, (MR_Integer) 1)));
        ll_backend__jumpopt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_12, (MR_Integer) 0)));
        ll_backend__jumpopt__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_12, (MR_Integer) 1)));
        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_13)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__jumpopt__succeeded)
          ll_backend__jumpopt__BetweenLivevals_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Var_13, (MR_Integer) 0)));
      }
    }
    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__jumpopt_scalar_common_1[15], ((MR_Box) (ll_backend__jumpopt__BetweenLivevals_9)), ((MR_Box) (ll_backend__jumpopt__PrevLivevals_7)));
      if (ll_backend__jumpopt__succeeded)
        *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs2_11;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.jumpopt", (MR_String) "predicate \140ll_backend.jumpopt.adjust_livevals\'/3", (MR_String) "BetweenLivevals and PrevLivevals differ");
          return;
        }
      }
    }
    else
      *ll_backend__jumpopt__Instrs_6 = ll_backend__jumpopt__Instrs0_5;
  }
}

static MR_Word MR_CALL 
ll_backend__jumpopt__block_may_be_duplicated_1_f_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__jumpopt__succeeded;
      MR_Word ll_backend__jumpopt__HeadVar__2_2;

      if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word ll_backend__jumpopt__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__Instrs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 0)));
        MR_String ll_backend__jumpopt__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr_3, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Var_12;
        MR_Word ll_backend__jumpopt__Var_14;
        MR_Word ll_backend__jumpopt__Var_15;
        MR_Word ll_backend__jumpopt__Var_16;
        MR_Word ll_backend__jumpopt__Var_17;
        MR_Word ll_backend__jumpopt__Var_18;
        MR_Word ll_backend__jumpopt__Var_19;
        MR_Word ll_backend__jumpopt__Var_20;
        MR_Word ll_backend__jumpopt__Var_21;
        MR_Word ll_backend__jumpopt__Var_22;
        MR_Word ll_backend__jumpopt__Var_11;

        ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
          ll_backend__jumpopt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
          ll_backend__jumpopt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
          ll_backend__jumpopt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
          ll_backend__jumpopt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
          ll_backend__jumpopt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
          ll_backend__jumpopt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
          ll_backend__jumpopt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
          ll_backend__jumpopt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
          ll_backend__jumpopt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_12)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__jumpopt__succeeded)
            ll_backend__jumpopt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_12, (MR_Integer) 0)));
        }
        if (ll_backend__jumpopt__succeeded)
          ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
        else
        {
          MR_Word ll_backend__jumpopt__Var_13;
          MR_Word ll_backend__jumpopt__Var_23;
          MR_Word ll_backend__jumpopt__Var_24;
          MR_Word ll_backend__jumpopt__Var_25;
          MR_Word ll_backend__jumpopt__Var_26;
          MR_Word ll_backend__jumpopt__Var_27;
          MR_Word ll_backend__jumpopt__Var_28;
          MR_Word ll_backend__jumpopt__Var_29;
          MR_Word ll_backend__jumpopt__Var_30;
          MR_Word ll_backend__jumpopt__Var_31;

          ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 1)));
            ll_backend__jumpopt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 2)));
            ll_backend__jumpopt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 3)));
            ll_backend__jumpopt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 4)));
            ll_backend__jumpopt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 5)));
            ll_backend__jumpopt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 6)));
            ll_backend__jumpopt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 7)));
            ll_backend__jumpopt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 8)));
            ll_backend__jumpopt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 9)));
            ll_backend__jumpopt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_6, (MR_Integer) 10)));
            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_13 == (MR_Integer) 1);
          }
          if (ll_backend__jumpopt__succeeded)
            ll_backend__jumpopt__HeadVar__2_2 = (MR_Integer) 0;
          else
          {
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__jumpopt__next_value_of_HeadVar__1_1 = ll_backend__jumpopt__Instrs_4;

              ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        }
      }
      return ll_backend__jumpopt__HeadVar__2_2;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_llcall_8_p_0(
  MR_Word ll_backend__jumpopt__Uinstr0_9,
  MR_String ll_backend__jumpopt__Comment0_10,
  MR_Word ll_backend__jumpopt__Instrs0_11,
  MR_Word ll_backend__jumpopt__PrevInstr_12,
  MR_Word ll_backend__jumpopt__JumpOptInfo_13,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51,
  MR_Word * ll_backend__jumpopt__NewRemain_15)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;
    MR_Word ll_backend__jumpopt__Proc_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 1)));
    MR_Word ll_backend__jumpopt__RetAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 2)));
    MR_Word ll_backend__jumpopt__LiveInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 3)));
    MR_Word ll_backend__jumpopt__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 4)));
    MR_Word ll_backend__jumpopt__GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 5)));
    MR_Word ll_backend__jumpopt__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_9, (MR_Integer) 6)));
    MR_Word ll_backend__jumpopt__RetLabel_22;

    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__RetAddr_17)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__jumpopt__succeeded)
    {
      ll_backend__jumpopt__RetLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__RetAddr_17, (MR_Integer) 0)));
      {
        MR_Word ll_backend__jumpopt__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
        MR_Word ll_backend__jumpopt__Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
        MR_Word ll_backend__jumpopt__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
        MR_Word ll_backend__jumpopt__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
        MR_Word ll_backend__jumpopt__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
        MR_Word ll_backend__jumpopt__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
        MR_Word ll_backend__jumpopt__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
        MR_Word ll_backend__jumpopt__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
        MR_Word ll_backend__jumpopt__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));

        ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_280 == (MR_Integer) 1);
        if (!(ll_backend__jumpopt__succeeded))
        {
          ll_backend__jumpopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), ll_backend__jumpopt__Var_282);
        }
        if (ll_backend__jumpopt__succeeded)
        {
          *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
        }
        else
        {
          MR_Word ll_backend__jumpopt__Between0_25;
          MR_Word ll_backend__jumpopt__TypeCtorInfo_268_268;
          MR_Word ll_backend__jumpopt__TypeInfo_269_269;
          MR_Word ll_backend__jumpopt__ProcMap_24;
          MR_Word ll_backend__jumpopt__Var_222;
          MR_Word ll_backend__jumpopt__Var_223;
          MR_Word ll_backend__jumpopt__Var_224;
          MR_Word ll_backend__jumpopt__Var_225;
          MR_Word ll_backend__jumpopt__Var_226;
          MR_Word ll_backend__jumpopt__Var_227;
          MR_Word ll_backend__jumpopt__Var_228;
          MR_Word ll_backend__jumpopt__Var_229;
          MR_Word ll_backend__jumpopt__Var_230;
          MR_Box ll_backend__jumpopt__conv0_Between0_25;
          MR_Word ll_backend__jumpopt__Livevals_26;

          if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word ll_backend__jumpopt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_54 == (MR_Integer) 1);
          }
          else
          if (((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__jumpopt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));

            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_53 == (MR_Integer) 1);
          }
          else
            ll_backend__jumpopt__succeeded = MR_FALSE;
          if (ll_backend__jumpopt__succeeded)
          {
            ll_backend__jumpopt__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
            ll_backend__jumpopt__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
            ll_backend__jumpopt__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
            ll_backend__jumpopt__ProcMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
            ll_backend__jumpopt__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
            ll_backend__jumpopt__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
            ll_backend__jumpopt__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
            ll_backend__jumpopt__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
            ll_backend__jumpopt__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
            ll_backend__jumpopt__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
            ll_backend__jumpopt__TypeCtorInfo_268_268 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            ll_backend__jumpopt__TypeInfo_269_269 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
            ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_268_268, ll_backend__jumpopt__TypeInfo_269_269, ll_backend__jumpopt__ProcMap_24, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv0_Between0_25);
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__Between0_25 = ((MR_Word) ll_backend__jumpopt__conv0_Between0_25);
              ll_backend__jumpopt__succeeded = MR_TRUE;
            }
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
              if (ll_backend__jumpopt__succeeded)
                ll_backend__jumpopt__Livevals_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
            }
          }
          if (ll_backend__jumpopt__succeeded)
          {
            MR_Word ll_backend__jumpopt__Between1_27;
            MR_Word ll_backend__jumpopt__NewInstrs_28;
            MR_Word ll_backend__jumpopt__Var_55;
            MR_Word ll_backend__jumpopt__Var_56;
            MR_Word ll_backend__jumpopt__Var_59;
            MR_Word ll_backend__jumpopt__Var_60;
            MR_Word ll_backend__jumpopt__Var_61;
            MR_String ll_backend__jumpopt__Var_62;

            ll_backend__opt_util__filter_out_livevals_2_p_0(ll_backend__jumpopt__Between0_25, &ll_backend__jumpopt__Between1_27);
            {
              ll_backend__jumpopt__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_56, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_56, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__jumpopt__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_61, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
            }
            ll_backend__jumpopt__Var_62 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
            {
              ll_backend__jumpopt__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_60, 0) = ((MR_Box) (ll_backend__jumpopt__Var_61));
              MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_60, 1) = ((MR_Box) (ll_backend__jumpopt__Var_62));
            }
            {
              ll_backend__jumpopt__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_59, 0) = ((MR_Box) (ll_backend__jumpopt__Var_60));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__jumpopt__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_55, 0) = ((MR_Box) (ll_backend__jumpopt__Var_56));
              MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_55, 1) = ((MR_Box) (ll_backend__jumpopt__Var_59));
            }
            ll_backend__jumpopt__NewInstrs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between1_27, ll_backend__jumpopt__Var_55);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__jumpopt__NewRemain_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
            }
            *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
          }
          else
          {
            MR_Word ll_backend__jumpopt__Between_30;
            MR_Word ll_backend__jumpopt__TypeCtorInfo_271_271;
            MR_Word ll_backend__jumpopt__TypeInfo_272_272;
            MR_Word ll_backend__jumpopt__ForkMap_29;
            MR_Word ll_backend__jumpopt__Var_64;
            MR_Word ll_backend__jumpopt__Var_231;
            MR_Word ll_backend__jumpopt__Var_232;
            MR_Word ll_backend__jumpopt__Var_233;
            MR_Word ll_backend__jumpopt__Var_234;
            MR_Word ll_backend__jumpopt__Var_235;
            MR_Word ll_backend__jumpopt__Var_236;
            MR_Word ll_backend__jumpopt__Var_237;
            MR_Word ll_backend__jumpopt__Var_238;
            MR_Word ll_backend__jumpopt__Var_239;
            MR_Box ll_backend__jumpopt__conv1_Between_30;
            MR_Word ll_backend__jumpopt__Livevals_202;

            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_64 == (MR_Integer) 1);
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                ll_backend__jumpopt__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                ll_backend__jumpopt__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                ll_backend__jumpopt__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                ll_backend__jumpopt__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                ll_backend__jumpopt__ForkMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                ll_backend__jumpopt__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                ll_backend__jumpopt__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                ll_backend__jumpopt__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                ll_backend__jumpopt__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                ll_backend__jumpopt__TypeCtorInfo_271_271 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                ll_backend__jumpopt__TypeInfo_272_272 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_271_271, ll_backend__jumpopt__TypeInfo_272_272, ll_backend__jumpopt__ForkMap_29, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv1_Between_30);
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Between_30 = ((MR_Word) ll_backend__jumpopt__conv1_Between_30);
                  ll_backend__jumpopt__succeeded = MR_TRUE;
                }
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
                  if (ll_backend__jumpopt__succeeded)
                    ll_backend__jumpopt__Livevals_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
                }
              }
            }
            if (ll_backend__jumpopt__succeeded)
            {
              MR_Word ll_backend__jumpopt__Var_65;
              MR_Word ll_backend__jumpopt__Var_66;
              MR_Word ll_backend__jumpopt__Var_69;
              MR_Word ll_backend__jumpopt__Var_70;
              MR_Word ll_backend__jumpopt__Var_71;
              MR_String ll_backend__jumpopt__Var_72;
              MR_Word ll_backend__jumpopt__NewInstrs_188;

              {
                ll_backend__jumpopt__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_66, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_66, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ll_backend__jumpopt__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_71, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
              }
              ll_backend__jumpopt__Var_72 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
              {
                ll_backend__jumpopt__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_70, 0) = ((MR_Box) (ll_backend__jumpopt__Var_71));
                MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_70, 1) = ((MR_Box) (ll_backend__jumpopt__Var_72));
              }
              {
                ll_backend__jumpopt__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_69, 0) = ((MR_Box) (ll_backend__jumpopt__Var_70));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__jumpopt__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_65, 0) = ((MR_Box) (ll_backend__jumpopt__Var_66));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_65, 1) = ((MR_Box) (ll_backend__jumpopt__Var_69));
              }
              ll_backend__jumpopt__NewInstrs_188 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__Between_30, ll_backend__jumpopt__Var_65);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__jumpopt__NewRemain_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_188));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
              }
              *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
            }
            else
            {
              MR_Word ll_backend__jumpopt__TypeCtorInfo_274_274;
              MR_Word ll_backend__jumpopt__TypeInfo_275_275;
              MR_Word ll_backend__jumpopt__SuccMap_31;
              MR_Word ll_backend__jumpopt__BetweenIncl_32;
              MR_Word ll_backend__jumpopt__Var_74;
              MR_Word ll_backend__jumpopt__Var_75;
              MR_Word ll_backend__jumpopt__Var_76;
              MR_Word ll_backend__jumpopt__Var_77;
              MR_Word ll_backend__jumpopt__Var_78;
              MR_Word ll_backend__jumpopt__Var_79;
              MR_Word ll_backend__jumpopt__Var_80;
              MR_Word ll_backend__jumpopt__Var_240;
              MR_Word ll_backend__jumpopt__Var_241;
              MR_Word ll_backend__jumpopt__Var_242;
              MR_Word ll_backend__jumpopt__Var_243;
              MR_Word ll_backend__jumpopt__Var_244;
              MR_Word ll_backend__jumpopt__Var_245;
              MR_Word ll_backend__jumpopt__Var_246;
              MR_Word ll_backend__jumpopt__Var_247;
              MR_Word ll_backend__jumpopt__Var_248;
              MR_Box ll_backend__jumpopt__conv2_BetweenIncl_32;
              MR_Word ll_backend__jumpopt__Livevals_200;
              MR_String ll_backend__jumpopt__Var_34;
              MR_Word ll_backend__jumpopt__Var_33;
              MR_String ll_backend__jumpopt__Var_36;
              MR_Word ll_backend__jumpopt__Var_35;

              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
              if (ll_backend__jumpopt__succeeded)
              {
                ll_backend__jumpopt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_74 == (MR_Integer) 2);
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                  ll_backend__jumpopt__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                  ll_backend__jumpopt__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                  ll_backend__jumpopt__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                  ll_backend__jumpopt__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                  ll_backend__jumpopt__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                  ll_backend__jumpopt__SuccMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                  ll_backend__jumpopt__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                  ll_backend__jumpopt__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                  ll_backend__jumpopt__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                  ll_backend__jumpopt__TypeCtorInfo_274_274 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                  ll_backend__jumpopt__TypeInfo_275_275 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                  ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_274_274, ll_backend__jumpopt__TypeInfo_275_275, ll_backend__jumpopt__SuccMap_31, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv2_BetweenIncl_32);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__BetweenIncl_32 = ((MR_Word) ll_backend__jumpopt__conv2_BetweenIncl_32);
                    ll_backend__jumpopt__succeeded = MR_TRUE;
                  }
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__Livevals_200 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
                      ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_32)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 0)));
                        ll_backend__jumpopt__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_32, (MR_Integer) 1)));
                        ll_backend__jumpopt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_75, (MR_Integer) 0)));
                        ll_backend__jumpopt__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_75, (MR_Integer) 1)));
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_76)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Var_76, (MR_Integer) 0)));
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_77)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__jumpopt__succeeded)
                          {
                            ll_backend__jumpopt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_77, (MR_Integer) 0)));
                            ll_backend__jumpopt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_77, (MR_Integer) 1)));
                            ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__jumpopt__succeeded)
                            {
                              ll_backend__jumpopt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_78, (MR_Integer) 0)));
                              ll_backend__jumpopt__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_78, (MR_Integer) 1)));
                              ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_79, (MR_Integer) 0)))) == (MR_Integer) 6)));
                              if (ll_backend__jumpopt__succeeded)
                                ll_backend__jumpopt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_79, (MR_Integer) 1)));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (ll_backend__jumpopt__succeeded)
              {
                MR_Word ll_backend__jumpopt__Var_89;
                MR_Word ll_backend__jumpopt__Var_98;
                MR_Word ll_backend__jumpopt__Var_107;
                MR_Word ll_backend__jumpopt__Var_108;
                MR_Word ll_backend__jumpopt__Var_111;
                MR_Word ll_backend__jumpopt__Var_112;
                MR_Word ll_backend__jumpopt__Var_113;
                MR_String ll_backend__jumpopt__Var_114;
                MR_Word ll_backend__jumpopt__NewInstrs_189;

                {
                  ll_backend__jumpopt__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_108, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_108, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ll_backend__jumpopt__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_113, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
                }
                ll_backend__jumpopt__Var_114 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                {
                  ll_backend__jumpopt__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_112, 0) = ((MR_Box) (ll_backend__jumpopt__Var_113));
                  MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_112, 1) = ((MR_Box) (ll_backend__jumpopt__Var_114));
                }
                {
                  ll_backend__jumpopt__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_111, 0) = ((MR_Box) (ll_backend__jumpopt__Var_112));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__jumpopt__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_107, 0) = ((MR_Box) (ll_backend__jumpopt__Var_108));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_107, 1) = ((MR_Box) (ll_backend__jumpopt__Var_111));
                }
                {
                  ll_backend__jumpopt__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_98, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_98, 1) = ((MR_Box) (ll_backend__jumpopt__Var_107));
                }
                {
                  ll_backend__jumpopt__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_89, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_89, 1) = ((MR_Box) (ll_backend__jumpopt__Var_98));
                }
                {
                  ll_backend__jumpopt__NewInstrs_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_189, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
                  MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_189, 1) = ((MR_Box) (ll_backend__jumpopt__Var_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__jumpopt__NewRemain_15 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_189));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                }
                *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
              }
              else
              {
                MR_Word ll_backend__jumpopt__ProcLabel_37;
                MR_Word ll_backend__jumpopt__LabelNumCounter0_38;
                MR_Word ll_backend__jumpopt__TypeCtorInfo_276_276;
                MR_Word ll_backend__jumpopt__TypeInfo_277_277;
                MR_Word ll_backend__jumpopt__Var_116;
                MR_Word ll_backend__jumpopt__Var_117;
                MR_Word ll_backend__jumpopt__Var_118;
                MR_Word ll_backend__jumpopt__Var_119;
                MR_Word ll_backend__jumpopt__Var_120;
                MR_Word ll_backend__jumpopt__Var_121;
                MR_Word ll_backend__jumpopt__Var_122;
                MR_Word ll_backend__jumpopt__SuccMap_190;
                MR_Word ll_backend__jumpopt__BetweenIncl_191;
                MR_Word ll_backend__jumpopt__Var_249;
                MR_Word ll_backend__jumpopt__Var_250;
                MR_Word ll_backend__jumpopt__Var_251;
                MR_Word ll_backend__jumpopt__Var_252;
                MR_Word ll_backend__jumpopt__Var_253;
                MR_Word ll_backend__jumpopt__Var_254;
                MR_Word ll_backend__jumpopt__Var_255;
                MR_Word ll_backend__jumpopt__Var_256;
                MR_Word ll_backend__jumpopt__Var_257;
                MR_Box ll_backend__jumpopt__conv3_BetweenIncl_191;
                MR_Word ll_backend__jumpopt__Livevals_196;
                MR_String ll_backend__jumpopt__Var_40;
                MR_Word ll_backend__jumpopt__Var_39;
                MR_String ll_backend__jumpopt__Var_42;
                MR_Word ll_backend__jumpopt__Var_41;

                ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__CallModel_21)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__jumpopt__succeeded)
                {
                  ll_backend__jumpopt__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__CallModel_21, (MR_Integer) 0)));
                  ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_116 == (MR_Integer) 1);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__jumpopt__succeeded)
                    {
                      ll_backend__jumpopt__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 0)));
                      ll_backend__jumpopt__LabelNumCounter0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50, (MR_Integer) 1)));
                      ll_backend__jumpopt__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                      ll_backend__jumpopt__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                      ll_backend__jumpopt__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                      ll_backend__jumpopt__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                      ll_backend__jumpopt__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                      ll_backend__jumpopt__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                      ll_backend__jumpopt__SuccMap_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                      ll_backend__jumpopt__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                      ll_backend__jumpopt__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                      ll_backend__jumpopt__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                      ll_backend__jumpopt__TypeCtorInfo_276_276 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                      ll_backend__jumpopt__TypeInfo_277_277 = (MR_Word) &ll_backend__jumpopt_scalar_common_1[0];
                      ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_276_276, ll_backend__jumpopt__TypeInfo_277_277, ll_backend__jumpopt__SuccMap_190, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv3_BetweenIncl_191);
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__BetweenIncl_191 = ((MR_Word) ll_backend__jumpopt__conv3_BetweenIncl_191);
                        ll_backend__jumpopt__succeeded = MR_TRUE;
                      }
                      if (ll_backend__jumpopt__succeeded)
                      {
                        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__PrevInstr_12)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__jumpopt__succeeded)
                        {
                          ll_backend__jumpopt__Livevals_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__PrevInstr_12, (MR_Integer) 0)));
                          ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__BetweenIncl_191)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__jumpopt__succeeded)
                          {
                            ll_backend__jumpopt__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_191, (MR_Integer) 0)));
                            ll_backend__jumpopt__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__BetweenIncl_191, (MR_Integer) 1)));
                            ll_backend__jumpopt__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_117, (MR_Integer) 0)));
                            ll_backend__jumpopt__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_117, (MR_Integer) 1)));
                            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_118)) == (MR_mktag((MR_Integer) 2)));
                            if (ll_backend__jumpopt__succeeded)
                            {
                              ll_backend__jumpopt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Var_118, (MR_Integer) 0)));
                              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_119)) == (MR_mktag((MR_Integer) 1)));
                              if (ll_backend__jumpopt__succeeded)
                              {
                                ll_backend__jumpopt__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_119, (MR_Integer) 0)));
                                ll_backend__jumpopt__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_119, (MR_Integer) 1)));
                                ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Var_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (ll_backend__jumpopt__succeeded)
                                {
                                  ll_backend__jumpopt__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_120, (MR_Integer) 0)));
                                  ll_backend__jumpopt__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_120, (MR_Integer) 1)));
                                  ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Var_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_121, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (ll_backend__jumpopt__succeeded)
                                    ll_backend__jumpopt__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_121, (MR_Integer) 1)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (ll_backend__jumpopt__succeeded)
                {
                  MR_Integer ll_backend__jumpopt__LabelNum_43;
                  MR_Word ll_backend__jumpopt__LabelNumCounter1_44;
                  MR_Word ll_backend__jumpopt__NewLabel_45;
                  MR_Word ll_backend__jumpopt__Var_123;
                  MR_Word ll_backend__jumpopt__Var_124;
                  MR_Word ll_backend__jumpopt__Var_132;
                  MR_Word ll_backend__jumpopt__Var_134;
                  MR_Word ll_backend__jumpopt__Var_143;
                  MR_Word ll_backend__jumpopt__Var_152;
                  MR_Word ll_backend__jumpopt__Var_161;
                  MR_Word ll_backend__jumpopt__Var_162;
                  MR_Word ll_backend__jumpopt__Var_165;
                  MR_Word ll_backend__jumpopt__Var_166;
                  MR_Word ll_backend__jumpopt__Var_167;
                  MR_String ll_backend__jumpopt__Var_168;
                  MR_Word ll_backend__jumpopt__Var_169;
                  MR_Word ll_backend__jumpopt__Var_170;
                  MR_Word ll_backend__jumpopt__Var_171;
                  MR_Word ll_backend__jumpopt__Var_173;
                  MR_Word ll_backend__jumpopt__Var_177;
                  MR_Word ll_backend__jumpopt__Var_178;
                  MR_Word ll_backend__jumpopt__NewInstrs_192;

                  mercury__counter__allocate_3_p_0(&ll_backend__jumpopt__LabelNum_43, ll_backend__jumpopt__LabelNumCounter0_38, &ll_backend__jumpopt__LabelNumCounter1_44);
                  {
                    ll_backend__jumpopt__NewLabel_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 0) = ((MR_Box) (ll_backend__jumpopt__LabelNum_43));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__NewLabel_45, 1) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
                  }
                  {
                    ll_backend__jumpopt__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_132, 0) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
                  }
                  {
                    ll_backend__jumpopt__Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__jumpopt_scalar_common_4[0])));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_124, 2) = ((MR_Box) (ll_backend__jumpopt__Var_132));
                  }
                  {
                    ll_backend__jumpopt__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_123, 0) = ((MR_Box) (ll_backend__jumpopt__Var_124));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_123, 1) = ((MR_Box) ((MR_String) "branch around if cannot tail call"));
                  }
                  {
                    ll_backend__jumpopt__Var_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_162, 0) = ((MR_Box) (ll_backend__jumpopt__PrevInstr_12));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_162, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ll_backend__jumpopt__Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_167, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
                  }
                  ll_backend__jumpopt__Var_168 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                  {
                    ll_backend__jumpopt__Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_166, 0) = ((MR_Box) (ll_backend__jumpopt__Var_167));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_166, 1) = ((MR_Box) (ll_backend__jumpopt__Var_168));
                  }
                  {
                    ll_backend__jumpopt__Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_171, 1) = ((MR_Box) (ll_backend__jumpopt__NewLabel_45));
                  }
                  {
                    ll_backend__jumpopt__Var_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_170, 0) = ((MR_Box) (ll_backend__jumpopt__Var_171));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_170, 1) = ((MR_Box) ((MR_String) "non tail call"));
                  }
                  {
                    ll_backend__jumpopt__Var_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_178, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
                    MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_178, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
                  }
                  {
                    ll_backend__jumpopt__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_177, 0) = ((MR_Box) (ll_backend__jumpopt__Var_178));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__jumpopt__Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_173, 0) = ((MR_Box) (ll_backend__jumpopt__Var_162));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_173, 1) = ((MR_Box) (ll_backend__jumpopt__Var_177));
                  }
                  {
                    ll_backend__jumpopt__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_169, 0) = ((MR_Box) (ll_backend__jumpopt__Var_170));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_169, 1) = ((MR_Box) (ll_backend__jumpopt__Var_173));
                  }
                  {
                    ll_backend__jumpopt__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_165, 0) = ((MR_Box) (ll_backend__jumpopt__Var_166));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_165, 1) = ((MR_Box) (ll_backend__jumpopt__Var_169));
                  }
                  {
                    ll_backend__jumpopt__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_161, 0) = ((MR_Box) (ll_backend__jumpopt__Var_162));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_161, 1) = ((MR_Box) (ll_backend__jumpopt__Var_165));
                  }
                  {
                    ll_backend__jumpopt__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_152, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[10]));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_152, 1) = ((MR_Box) (ll_backend__jumpopt__Var_161));
                  }
                  {
                    ll_backend__jumpopt__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_143, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[8]));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_143, 1) = ((MR_Box) (ll_backend__jumpopt__Var_152));
                  }
                  {
                    ll_backend__jumpopt__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_134, 0) = ((MR_Box) (&ll_backend__jumpopt_scalar_common_1[6]));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_134, 1) = ((MR_Box) (ll_backend__jumpopt__Var_143));
                  }
                  {
                    ll_backend__jumpopt__NewInstrs_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 0) = ((MR_Box) (ll_backend__jumpopt__Var_123));
                    MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_192, 1) = ((MR_Box) (ll_backend__jumpopt__Var_134));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__jumpopt__NewRemain_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_192));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__ProcLabel_37));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__LabelNumCounter1_44));
                  }
                }
                else
                {
                  MR_Word ll_backend__jumpopt__InstrMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 0)));
                  MR_Word ll_backend__jumpopt__RetInstr_47;
                  MR_Word ll_backend__jumpopt__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 1)));
                  MR_Word ll_backend__jumpopt__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 2)));
                  MR_Word ll_backend__jumpopt__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 3)));
                  MR_Word ll_backend__jumpopt__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 4)));
                  MR_Word ll_backend__jumpopt__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 5)));
                  MR_Word ll_backend__jumpopt__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 6)));
                  MR_Word ll_backend__jumpopt__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 7)));
                  MR_Word ll_backend__jumpopt__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 8)));
                  MR_Word ll_backend__jumpopt__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__JumpOptInfo_13, (MR_Integer) 9)));
                  MR_Box ll_backend__jumpopt__conv4_RetInstr_47;

                  ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__jumpopt__InstrMap_46, ((MR_Box) (ll_backend__jumpopt__RetLabel_22)), &ll_backend__jumpopt__conv4_RetInstr_47);
                  if (ll_backend__jumpopt__succeeded)
                  {
                    ll_backend__jumpopt__RetInstr_47 = ((MR_Word) ll_backend__jumpopt__conv4_RetInstr_47);
                    ll_backend__jumpopt__succeeded = MR_TRUE;
                  }
                  if (ll_backend__jumpopt__succeeded)
                  {
                    MR_Word ll_backend__jumpopt__DestLabel_48;
                    MR_Word ll_backend__jumpopt__NewInstrs_193;
                    MR_Word ll_backend__jumpopt___DestInstr_49;

                    ll_backend__jumpopt__final_dest_5_p_0(ll_backend__jumpopt__InstrMap_46, ll_backend__jumpopt__RetLabel_22, &ll_backend__jumpopt__DestLabel_48, ll_backend__jumpopt__RetInstr_47, &ll_backend__jumpopt___DestInstr_49);
                    ll_backend__jumpopt__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__jumpopt__RetLabel_22, ll_backend__jumpopt__DestLabel_48);
                    if (ll_backend__jumpopt__succeeded)
                    {
                      MR_Word ll_backend__jumpopt__Var_181;

                      {
                        ll_backend__jumpopt__Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_181, 0) = ((MR_Box) (ll_backend__jumpopt__Uinstr0_9));
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_181, 1) = ((MR_Box) (ll_backend__jumpopt__Comment0_10));
                      }
                      {
                        ll_backend__jumpopt__NewInstrs_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 0) = ((MR_Box) (ll_backend__jumpopt__Var_181));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                    else
                    {
                      MR_Word ll_backend__jumpopt__Var_183;
                      MR_Word ll_backend__jumpopt__Var_184;
                      MR_Word ll_backend__jumpopt__Var_185;
                      MR_String ll_backend__jumpopt__Var_186;

                      {
                        ll_backend__jumpopt__Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_185, 0) = ((MR_Box) (ll_backend__jumpopt__DestLabel_48));
                      }
                      {
                        ll_backend__jumpopt__Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 1) = ((MR_Box) (ll_backend__jumpopt__Proc_16));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 2) = ((MR_Box) (ll_backend__jumpopt__Var_185));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 3) = ((MR_Box) (ll_backend__jumpopt__LiveInfos_18));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 4) = ((MR_Box) (ll_backend__jumpopt__Context_19));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 5) = ((MR_Box) (ll_backend__jumpopt__GoalPath_20));
                        MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Var_184, 6) = ((MR_Box) (ll_backend__jumpopt__CallModel_21));
                      }
                      ll_backend__jumpopt__Var_186 = ll_backend__jumpopt__redirect_comment_1_f_0(ll_backend__jumpopt__Comment0_10);
                      {
                        ll_backend__jumpopt__Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_183, 0) = ((MR_Box) (ll_backend__jumpopt__Var_184));
                        MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_183, 1) = ((MR_Box) (ll_backend__jumpopt__Var_186));
                      }
                      {
                        ll_backend__jumpopt__NewInstrs_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 0) = ((MR_Box) (ll_backend__jumpopt__Var_183));
                        MR_hl_field(MR_mktag(1), ll_backend__jumpopt__NewInstrs_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__jumpopt__NewRemain_15 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__jumpopt__NewInstrs_193));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__jumpopt__Instrs0_11));
                    }
                  }
                  else
                    *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      *ll_backend__jumpopt__NewRemain_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_51 = ll_backend__jumpopt__STATE_VARIABLE_CheckedNondetTailCallInfo_0_50;
    }
  }
}

static void MR_CALL 
ll_backend__jumpopt__final_dest_5_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_6,
  MR_Word ll_backend__jumpopt__SrcLabel_7,
  MR_Word * ll_backend__jumpopt__DestLabel_8,
  MR_Word ll_backend__jumpopt__SrcInstr_9,
  MR_Word * ll_backend__jumpopt__DestInstr_10)
{
  {
    ll_backend__jumpopt__final_dest_loop_6_p_0(ll_backend__jumpopt__InstrMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__jumpopt__SrcLabel_7, ll_backend__jumpopt__DestLabel_8, ll_backend__jumpopt__SrcInstr_9, ll_backend__jumpopt__DestInstr_10);
  }
}

static void MR_CALL 
ll_backend__jumpopt__final_dest_loop_6_p_0(
  MR_Word ll_backend__jumpopt__InstrMap_7,
  MR_Word ll_backend__jumpopt__LabelsSofar_8,
  MR_Word ll_backend__jumpopt__SrcLabel_9,
  MR_Word * ll_backend__jumpopt__DestLabel_10,
  MR_Word ll_backend__jumpopt__SrcInstr_11,
  MR_Word * ll_backend__jumpopt__DestInstr_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__jumpopt__succeeded;
      MR_Word ll_backend__jumpopt__TargetLabel_15;
      MR_Word ll_backend__jumpopt__TargetInstr_16;
      MR_Word ll_backend__jumpopt__TypeCtorInfo_19_19;
      MR_Word ll_backend__jumpopt__TypeCtorInfo_20_20;
      MR_Word ll_backend__jumpopt__SrcUinstr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 0)));
      MR_String ll_backend__jumpopt___Comment_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__SrcInstr_11, (MR_Integer) 1)));
      MR_Box ll_backend__jumpopt__conv0_TargetInstr_16;

      if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
      {
        MR_Word ll_backend__jumpopt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));

        ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__jumpopt__succeeded)
          ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_17, (MR_Integer) 0)));
      }
      else
      if (((((MR_tag((MR_Word) ll_backend__jumpopt__SrcUinstr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        ll_backend__jumpopt__TargetLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__SrcUinstr_13, (MR_Integer) 1)));
        ll_backend__jumpopt__succeeded = MR_TRUE;
      }
      else
        ll_backend__jumpopt__succeeded = MR_FALSE;
      if (ll_backend__jumpopt__succeeded)
      {
        ll_backend__jumpopt__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        ll_backend__jumpopt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        ll_backend__jumpopt__succeeded = mercury__map__search_3_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ll_backend__jumpopt__TypeCtorInfo_20_20, ll_backend__jumpopt__InstrMap_7, ((MR_Box) (ll_backend__jumpopt__TargetLabel_15)), &ll_backend__jumpopt__conv0_TargetInstr_16);
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__TargetInstr_16 = ((MR_Word) ll_backend__jumpopt__conv0_TargetInstr_16);
          ll_backend__jumpopt__succeeded = MR_TRUE;
        }
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__succeeded = mercury__list__member_2_p_0(ll_backend__jumpopt__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__jumpopt__SrcLabel_9)), ll_backend__jumpopt__LabelsSofar_8);
          ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
        }
      }
      if (ll_backend__jumpopt__succeeded)
      {
        MR_Word ll_backend__jumpopt__Var_18;

        {
          ll_backend__jumpopt__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_18, 0) = ((MR_Box) (ll_backend__jumpopt__SrcLabel_9));
          MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_18, 1) = ((MR_Box) (ll_backend__jumpopt__LabelsSofar_8));
        }
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__jumpopt__next_value_of_LabelsSofar_8 = ll_backend__jumpopt__Var_18;
          MR_Word ll_backend__jumpopt__next_value_of_SrcLabel_9 = ll_backend__jumpopt__TargetLabel_15;
          MR_Word ll_backend__jumpopt__next_value_of_SrcInstr_11 = ll_backend__jumpopt__TargetInstr_16;

          ll_backend__jumpopt__LabelsSofar_8 = ll_backend__jumpopt__next_value_of_LabelsSofar_8;
          ll_backend__jumpopt__SrcLabel_9 = ll_backend__jumpopt__next_value_of_SrcLabel_9;
          ll_backend__jumpopt__SrcInstr_11 = ll_backend__jumpopt__next_value_of_SrcInstr_11;
        }
        continue;
      }
      else
      {
        *ll_backend__jumpopt__DestLabel_10 = ll_backend__jumpopt__SrcLabel_9;
        *ll_backend__jumpopt__DestInstr_12 = ll_backend__jumpopt__SrcInstr_11;
      }
    }
    break;
  }
}

static MR_String MR_CALL 
ll_backend__jumpopt__redirect_comment_1_f_0(
  MR_String ll_backend__jumpopt__Comment_3)
{
  {
    MR_String ll_backend__jumpopt__HeadVar__2_2;

    ll_backend__jumpopt__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__jumpopt__Comment_3, (MR_String) " (redirected return)");
    return ll_backend__jumpopt__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_forkmap_4_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__HeadVar__2_2,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__jumpopt__succeeded;

      if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__jumpopt__STATE_VARIABLE_ForkMap_4 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
      else
      {
        MR_Word ll_backend__jumpopt__Uinstr_9;
        MR_Word ll_backend__jumpopt__Instrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;
        MR_String ll_backend__jumpopt___Comment_10;
        MR_Word ll_backend__jumpopt__Label_14;
        MR_Word ll_backend__jumpopt__Between_15;

        ll_backend__jumpopt__Uinstr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_18, (MR_Integer) 0)));
        ll_backend__jumpopt___Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Var_18, (MR_Integer) 1)));
        ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Label_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr_9, (MR_Integer) 1)));
          ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_forkproceed_next_3_p_0(ll_backend__jumpopt__Instrs_11, ll_backend__jumpopt__HeadVar__2_2, &ll_backend__jumpopt__Between_15);
        }
        if (ll_backend__jumpopt__succeeded)
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_14)), ((MR_Box) (ll_backend__jumpopt__Between_15)), ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19);
        }
        else
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3;
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__jumpopt__next_value_of_HeadVar__1_1 = ll_backend__jumpopt__Instrs_11;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_ForkMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_ForkMap_19_19;

          ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__next_value_of_HeadVar__1_1;
          ll_backend__jumpopt__STATE_VARIABLE_ForkMap_0_3 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_ForkMap_0_3;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__jumpopt__jump_opt_build_maps_14_p_0(
  MR_Word ll_backend__jumpopt__HeadVar__1_1,
  MR_Word ll_backend__jumpopt__Recjump_2,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12,
  MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13,
  MR_Word * ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__jumpopt__succeeded;

      if ((ll_backend__jumpopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__jumpopt__STATE_VARIABLE_SuccMap_14 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
        *ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_12 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
        *ll_backend__jumpopt__STATE_VARIABLE_ProcMap_10 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
        *ll_backend__jumpopt__STATE_VARIABLE_LvalMap_8 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
        *ll_backend__jumpopt__STATE_VARIABLE_BlockMap_6 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
        *ll_backend__jumpopt__STATE_VARIABLE_InstrMap_4 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
      }
      else
      {
        MR_Word ll_backend__jumpopt__Instr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__jumpopt__Instrs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__Uinstr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 0)));
        MR_String ll_backend__jumpopt__Comment0_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr0_34, (MR_Integer) 1)));
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;
        MR_Word ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
        MR_Word ll_backend__jumpopt__Label_45;

        ll_backend__jumpopt__succeeded = ((((MR_tag((MR_Word) ll_backend__jumpopt__Uinstr0_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__jumpopt__succeeded)
        {
          ll_backend__jumpopt__Label_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__jumpopt__Uinstr0_43, (MR_Integer) 1)));
          {
            MR_Word ll_backend__jumpopt__Instrs1_46;
            MR_Word ll_backend__jumpopt__Instrs2_51;
            MR_Word ll_backend__jumpopt__Instr1_47;
            MR_Word ll_backend__jumpopt__Var_74;
            MR_Word ll_backend__jumpopt__Var_48;
            MR_String ll_backend__jumpopt__Var_50;
            MR_Word ll_backend__jumpopt__Var_49;
            MR_Word ll_backend__jumpopt__Instr2_52;
            MR_Word ll_backend__jumpopt__Var_53;
            MR_Word ll_backend__jumpopt__Between1_54;
            MR_Word ll_backend__jumpopt__Between2_55;
            MR_Word ll_backend__jumpopt__Between3_56;

            ll_backend__opt_util__skip_comments_2_p_0(ll_backend__jumpopt__Instrs0_35, &ll_backend__jumpopt__Instrs1_46);
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs1_46)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__Instr1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 0)));
              ll_backend__jumpopt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs1_46, (MR_Integer) 1)));
              ll_backend__jumpopt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 0)));
              ll_backend__jumpopt__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__jumpopt__Instr1_47, (MR_Integer) 1)));
              ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Var_74)) == (MR_mktag((MR_Integer) 2)));
              if (ll_backend__jumpopt__succeeded)
                ll_backend__jumpopt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__jumpopt__Var_74, (MR_Integer) 0)));
            }
            if (ll_backend__jumpopt__succeeded)
            {
              MR_Word ll_backend__jumpopt__Var_75;

              {
                ll_backend__jumpopt__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Var_75, 0) = ((MR_Box) (ll_backend__jumpopt__Instr1_47));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Var_75)), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
            }
            else
            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[1], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7, &ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76);
            }
            ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Instrs2_51);
            ll_backend__jumpopt__succeeded = ((MR_tag((MR_Word) ll_backend__jumpopt__Instrs2_51)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__jumpopt__succeeded)
            {
              ll_backend__jumpopt__Instr2_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 0)));
              ll_backend__jumpopt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__jumpopt__Instrs2_51, (MR_Integer) 1)));
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Instr2_52)), ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3, &ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79);
            }
            else
              ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
            ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_proceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between1_54);
            if (ll_backend__jumpopt__succeeded)
            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between1_54)), ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9, &ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80);
            }
            else
              ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
            ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_sdproceed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between2_55);
            if (ll_backend__jumpopt__succeeded)
            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between2_55)), ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11, &ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81);
            }
            else
              ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
            ll_backend__jumpopt__succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Between3_56);
            if (ll_backend__jumpopt__succeeded)
            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Between3_56)), ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13, &ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82);
            }
            else
              ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
            if (((MR_tag((MR_Word) ll_backend__jumpopt__Label_45)) == (MR_mktag((MR_Integer) 1))))
              ll_backend__jumpopt__succeeded = (ll_backend__jumpopt__Recjump_2 == (MR_Integer) 1);
            else
            {
              ll_backend__jumpopt__succeeded = mercury__string__suffix_2_p_0(ll_backend__jumpopt__Comment0_44, (MR_String) "nofulljump");
              ll_backend__jumpopt__succeeded = !(ll_backend__jumpopt__succeeded);
            }
            if (ll_backend__jumpopt__succeeded)
            {
              MR_Word ll_backend__jumpopt__Block_61;

              ll_backend__opt_util__find_no_fallthrough_2_p_0(ll_backend__jumpopt__Instrs1_46, &ll_backend__jumpopt__Block_61);
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__jumpopt_scalar_common_1[0], ((MR_Box) (ll_backend__jumpopt__Label_45)), ((MR_Box) (ll_backend__jumpopt__Block_61)), ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5, &ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84);
            }
            else
              ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
          }
        }
        else
        {
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13;
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11;
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9;
          ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7;
          ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5;
          ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3;
        }
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__jumpopt__next_value_of_HeadVar__1_1 = ll_backend__jumpopt__Instrs0_35;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_InstrMap_0_3 = ll_backend__jumpopt__STATE_VARIABLE_InstrMap_79_79;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_BlockMap_0_5 = ll_backend__jumpopt__STATE_VARIABLE_BlockMap_84_84;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_LvalMap_0_7 = ll_backend__jumpopt__STATE_VARIABLE_LvalMap_76_76;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_ProcMap_0_9 = ll_backend__jumpopt__STATE_VARIABLE_ProcMap_80_80;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_SdprocMap_0_11 = ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_81_81;
          MR_Word ll_backend__jumpopt__next_value_of_STATE_VARIABLE_SuccMap_0_13 = ll_backend__jumpopt__STATE_VARIABLE_SuccMap_82_82;

          ll_backend__jumpopt__HeadVar__1_1 = ll_backend__jumpopt__next_value_of_HeadVar__1_1;
          ll_backend__jumpopt__STATE_VARIABLE_InstrMap_0_3 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_InstrMap_0_3;
          ll_backend__jumpopt__STATE_VARIABLE_BlockMap_0_5 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_BlockMap_0_5;
          ll_backend__jumpopt__STATE_VARIABLE_LvalMap_0_7 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_LvalMap_0_7;
          ll_backend__jumpopt__STATE_VARIABLE_ProcMap_0_9 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_ProcMap_0_9;
          ll_backend__jumpopt__STATE_VARIABLE_SdprocMap_0_11 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_SdprocMap_0_11;
          ll_backend__jumpopt__STATE_VARIABLE_SuccMap_0_13 = ll_backend__jumpopt__next_value_of_STATE_VARIABLE_SuccMap_0_13;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____jump_opt_info_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____jump_opt_info_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt____Compare____jump_opt_info_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
{
  {
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

    ll_backend__jumpopt____Compare____jump_opt_info_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____maybe_check_nondet_tailcalls_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
{
  {
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

    ll_backend__jumpopt____Compare____maybe_check_nondet_tailcalls_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__jumpopt____Unify____new_remain_0_0_10001(
  MR_Box ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2)
{
  {
    MR_bool ll_backend__jumpopt__succeeded;

    ll_backend__jumpopt__succeeded = ll_backend__jumpopt____Unify____new_remain_0_0(((MR_Word) ll_backend__jumpopt__wrapper_arg_1), ((MR_Word) ll_backend__jumpopt__wrapper_arg_2));
    return ll_backend__jumpopt__succeeded;
  }
}

static void MR_CALL 
ll_backend__jumpopt____Compare____new_remain_0_0_10001(
  MR_Box * ll_backend__jumpopt__wrapper_arg_1,
  MR_Box ll_backend__jumpopt__wrapper_arg_2,
  MR_Box ll_backend__jumpopt__wrapper_arg_3)
{
  {
    MR_Word ll_backend__jumpopt__conv0_HeadVar__1_1;

    ll_backend__jumpopt____Compare____new_remain_0_0(&ll_backend__jumpopt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__jumpopt__wrapper_arg_2), ((MR_Word) ll_backend__jumpopt__wrapper_arg_3));
    *ll_backend__jumpopt__wrapper_arg_1 = ((MR_Box) (ll_backend__jumpopt__conv0_HeadVar__1_1));
  }
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

/* :- end_module ll_backend.jumpopt. */
